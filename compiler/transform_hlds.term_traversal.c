/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2016-06-09
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__OutVars_5);

static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
  MR_Word transform_hlds__term_traversal__OutVars_6,
  MR_Word transform_hlds__term_traversal__Context_7,
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17);

static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__InVars_2,
  MR_Word transform_hlds__term_traversal__OutVars_3,
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7);

static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
  MR_Word transform_hlds__term_traversal__InVars_7,
  MR_Word transform_hlds__term_traversal__OutVars_8,
  MR_Integer transform_hlds__term_traversal__Gamma_9,
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
  MR_Word transform_hlds__term_traversal__Info0_11,
  MR_Word * transform_hlds__term_traversal__Info_12);

static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
  MR_Word transform_hlds__term_traversal__VarTypes_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
  MR_Word transform_hlds__term_traversal__OutVar_11,
  MR_Word transform_hlds__term_traversal__ConsId_12,
  MR_Word transform_hlds__term_traversal__Args0_13,
  MR_Word transform_hlds__term_traversal__Modes0_14,
  MR_Word transform_hlds__term_traversal__Params_15,
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
  MR_Word * transform_hlds__term_traversal__InVars_17,
  MR_Word * transform_hlds__term_traversal__OutVars_18);

static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
  MR_Word transform_hlds__term_traversal__InfoA_5,
  MR_Word transform_hlds__term_traversal__InfoB_6,
  MR_Word transform_hlds__term_traversal__Params_7,
  MR_Word * transform_hlds__term_traversal__Info_8);

static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
  MR_Word transform_hlds__term_traversal__Context_6,
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
  MR_Word transform_hlds__term_traversal__Params_8,
  MR_Word transform_hlds__term_traversal__Info0_9,
  MR_Word * transform_hlds__term_traversal__Info_10);

static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
  MR_Word transform_hlds__term_traversal__Params_6,
  MR_Word transform_hlds__term_traversal__Context_7,
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
  MR_Word transform_hlds__term_traversal__Info0_9,
  MR_Word * transform_hlds__term_traversal__Info_10);

static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
  MR_Word transform_hlds__term_traversal__Path_4,
  MR_Word transform_hlds__term_traversal__Info0_5,
  MR_Word * transform_hlds__term_traversal__Info_6);

static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
  MR_Word transform_hlds__term_traversal__Info0_3,
  MR_Word * transform_hlds__term_traversal__Info_4);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
  MR_Box transform_hlds__term_traversal__closure_arg,
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
  MR_Box transform_hlds__term_traversal__closure_arg,
  MR_Box transform_hlds__term_traversal__wrapper_arg_1);


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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1 = {
  (MR_String) "term_traversal_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    {
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
    return transform_hlds__term_traversal__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

    {
      transform_hlds__term_traversal____Compare____term_path_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    {
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
    return transform_hlds__term_traversal__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

    {
      transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
  MR_Box transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    {
      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2));
    }
    return transform_hlds__term_traversal__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
  MR_Box * transform_hlds__term_traversal__wrapper_arg_1,
  MR_Box transform_hlds__term_traversal__wrapper_arg_2,
  MR_Box transform_hlds__term_traversal__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__1_1;

    {
      transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&transform_hlds__term_traversal__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_traversal__wrapper_arg_2), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_3));
    }
    *transform_hlds__term_traversal__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_27 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
    MR_Integer transform_hlds__term_traversal__CastY_28 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_27 == transform_hlds__term_traversal__CastY_28);
    if (transform_hlds__term_traversal__succeeded)
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer transform_hlds__term_traversal__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word transform_hlds__term_traversal__V_20_20;

        {
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_traversal__V_20_20, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
        }
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_20_20 == (MR_Integer) 0);
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
        if (transform_hlds__term_traversal__succeeded)
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_20_20;
        else
          {
            MR_Word transform_hlds__term_traversal__V_21_21;

            {
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_21_21, transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
            }
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
            if (transform_hlds__term_traversal__succeeded)
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
            else
              {
                MR_Word transform_hlds__term_traversal__V_22_22;

                {
                  mercury__term____Compare____context_0_0(&transform_hlds__term_traversal__V_22_22, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_14_14);
                }
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_22_22 == (MR_Integer) 0);
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                if (transform_hlds__term_traversal__succeeded)
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_22_22;
                else
                  {
                    MR_Word transform_hlds__term_traversal__V_23_23;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &transform_hlds__term_traversal__V_23_23, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                    }
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_23_23 == (MR_Integer) 0);
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                    if (transform_hlds__term_traversal__succeeded)
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_23_23;
                    else
                      {
                        MR_Word transform_hlds__term_traversal__V_24_24;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_24_24, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                        }
                        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_24_24 == (MR_Integer) 0);
                        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                        if (transform_hlds__term_traversal__succeeded)
                          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_24_24;
                        else
                          {
                            MR_Word transform_hlds__term_traversal__V_25_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &transform_hlds__term_traversal__V_25_25, ((MR_Box) (transform_hlds__term_traversal__V_9_9)), ((MR_Box) (transform_hlds__term_traversal__V_17_17)));
                            }
                            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_25_25 == (MR_Integer) 0);
                            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                            if (transform_hlds__term_traversal__succeeded)
                              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_25_25;
                            else
                              {
                                MR_Word transform_hlds__term_traversal__V_26_26;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_26_26, transform_hlds__term_traversal__V_10_10, transform_hlds__term_traversal__V_18_18);
                                }
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_26_26 == (MR_Integer) 0);
                                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                                if (transform_hlds__term_traversal__succeeded)
                                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_26_26;
                                else
                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_traversal__HeadVar__1_1, transform_hlds__term_traversal__V_11_11, transform_hlds__term_traversal__V_19_19);
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
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
    MR_Integer transform_hlds__term_traversal__CastY_20 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_19 == transform_hlds__term_traversal__CastY_20);
    if (transform_hlds__term_traversal__succeeded)
      transform_hlds__term_traversal__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_traversal__TypeInfo_24_24;
        MR_Word transform_hlds__term_traversal__TypeInfo_25_25;
        MR_Word transform_hlds__term_traversal__TypeInfo_26_26;
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__term_traversal__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer transform_hlds__term_traversal__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 7)));

        {
          transform_hlds__term_traversal__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_11_11);
        }
        if (transform_hlds__term_traversal__succeeded)
          {
            {
              transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_12_12);
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                {
                  transform_hlds__term_traversal__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_traversal__V_5_5, transform_hlds__term_traversal__V_13_13);
                }
                if (transform_hlds__term_traversal__succeeded)
                  {
                    transform_hlds__term_traversal__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
                    {
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_14_14)));
                    }
                    if (transform_hlds__term_traversal__succeeded)
                      {
                        transform_hlds__term_traversal__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
                        {
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_15_15)));
                        }
                        if (transform_hlds__term_traversal__succeeded)
                          {
                            transform_hlds__term_traversal__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
                            {
                              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_16_16)));
                            }
                            if (transform_hlds__term_traversal__succeeded)
                              {
                                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_9_9 == transform_hlds__term_traversal__V_17_17);
                                if (transform_hlds__term_traversal__succeeded)
                                  transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_10_10 == transform_hlds__term_traversal__V_18_18);
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__term_traversal__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_22 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
    MR_Integer transform_hlds__term_traversal__CastY_23 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_22 == transform_hlds__term_traversal__CastY_23);
    if (transform_hlds__term_traversal__succeeded)
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_traversal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_21_21;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], &transform_hlds__term_traversal__V_21_21, ((MR_Box) (transform_hlds__term_traversal__V_29_29)), ((MR_Box) (transform_hlds__term_traversal__V_19_19)));
            }
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_21_21 == (MR_Integer) 0);
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
            if (transform_hlds__term_traversal__succeeded)
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_21_21;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_28_28)), ((MR_Box) (transform_hlds__term_traversal__V_20_20)));
                }
              }
          }
        else
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_8_8;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[7], &transform_hlds__term_traversal__V_8_8, ((MR_Box) (transform_hlds__term_traversal__V_31_31)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
            }
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_8_8 == (MR_Integer) 0);
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
            if (transform_hlds__term_traversal__succeeded)
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_30_30)), ((MR_Box) (transform_hlds__term_traversal__V_7_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_11 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
    MR_Integer transform_hlds__term_traversal__CastY_12 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_11 == transform_hlds__term_traversal__CastY_12);
    if (transform_hlds__term_traversal__succeeded)
      transform_hlds__term_traversal__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_traversal__TypeInfo_13_13;
        MR_Word transform_hlds__term_traversal__TypeInfo_14_14;
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_9_9;
        MR_Word transform_hlds__term_traversal__V_10_10;

        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_traversal__succeeded)
          {
            transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__term_traversal__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
            {
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                transform_hlds__term_traversal__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
                {
                  transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
                }
              }
          }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__TypeInfo_15_15;
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_5_5;
        MR_Word transform_hlds__term_traversal__V_6_6;

        transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__term_traversal__succeeded)
          {
            transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__term_traversal__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
            {
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_traversal__V_3_3)), ((MR_Box) (transform_hlds__term_traversal__V_5_5)));
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
                {
                  transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_6_6)));
                }
              }
          }
      }
    return transform_hlds__term_traversal__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
  MR_Word * transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_18 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;
    MR_Integer transform_hlds__term_traversal__CastY_19 = (MR_Integer) transform_hlds__term_traversal__HeadVar__3_3;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_18 == transform_hlds__term_traversal__CastY_19);
    if (transform_hlds__term_traversal__succeeded)
      *transform_hlds__term_traversal__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_traversal__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_traversal__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_14_14;

        {
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_traversal__V_14_14, transform_hlds__term_traversal__V_4_4, transform_hlds__term_traversal__V_9_9);
        }
        transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_14_14 == (MR_Integer) 0);
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
        if (transform_hlds__term_traversal__succeeded)
          *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_14_14;
        else
          {
            MR_Word transform_hlds__term_traversal__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[3], &transform_hlds__term_traversal__V_15_15, ((MR_Box) (transform_hlds__term_traversal__V_5_5)), ((MR_Box) (transform_hlds__term_traversal__V_10_10)));
            }
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_15_15 == (MR_Integer) 0);
            transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
            if (transform_hlds__term_traversal__succeeded)
              *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_15_15;
            else
              {
                MR_Word transform_hlds__term_traversal__V_16_16;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_traversal__V_16_16, transform_hlds__term_traversal__V_6_6, transform_hlds__term_traversal__V_11_11);
                }
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_16_16 == (MR_Integer) 0);
                transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                if (transform_hlds__term_traversal__succeeded)
                  *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_16_16;
                else
                  {
                    MR_Word transform_hlds__term_traversal__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[4], &transform_hlds__term_traversal__V_17_17, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                    }
                    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_17_17 == (MR_Integer) 0);
                    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
                    if (transform_hlds__term_traversal__succeeded)
                      *transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[5], transform_hlds__term_traversal__HeadVar__1_1, ((MR_Box) (transform_hlds__term_traversal__V_8_8)), ((MR_Box) (transform_hlds__term_traversal__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Integer transform_hlds__term_traversal__CastX_13 = (MR_Integer) transform_hlds__term_traversal__HeadVar__1_1;
    MR_Integer transform_hlds__term_traversal__CastY_14 = (MR_Integer) transform_hlds__term_traversal__HeadVar__2_2;

    transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__CastX_13 == transform_hlds__term_traversal__CastY_14);
    if (transform_hlds__term_traversal__succeeded)
      transform_hlds__term_traversal__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_traversal__TypeInfo_16_16;
        MR_Word transform_hlds__term_traversal__TypeInfo_17_17;
        MR_Word transform_hlds__term_traversal__TypeInfo_18_18;
        MR_Word transform_hlds__term_traversal__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_traversal__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_traversal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__term_traversal__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_traversal__V_3_3, transform_hlds__term_traversal__V_8_8);
        }
        if (transform_hlds__term_traversal__succeeded)
          {
            transform_hlds__term_traversal__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
            {
              transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_traversal__V_4_4)), ((MR_Box) (transform_hlds__term_traversal__V_9_9)));
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__V_5_5 == transform_hlds__term_traversal__V_10_10);
                if (transform_hlds__term_traversal__succeeded)
                  {
                    transform_hlds__term_traversal__TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
                    {
                      transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_17_17, ((MR_Box) (transform_hlds__term_traversal__V_6_6)), ((MR_Box) (transform_hlds__term_traversal__V_11_11)));
                    }
                    if (transform_hlds__term_traversal__succeeded)
                      {
                        transform_hlds__term_traversal__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
                        {
                          transform_hlds__term_traversal__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_traversal__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_traversal__V_7_7)), ((MR_Box) (transform_hlds__term_traversal__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return transform_hlds__term_traversal__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
    MR_Word transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
    MR_Integer transform_hlds__term_traversal__V_9_9;
    MR_Integer transform_hlds__term_traversal__V_10_10;

    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
    MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
    MR_Word transform_hlds__term_traversal__V_8_8;
    MR_Integer transform_hlds__term_traversal__V_9_9;
    MR_Integer transform_hlds__term_traversal__V_10_10;

    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
    MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
    MR_Word transform_hlds__term_traversal__V_7_7;
    MR_Word transform_hlds__term_traversal__V_8_8;
    MR_Integer transform_hlds__term_traversal__V_9_9;
    MR_Integer transform_hlds__term_traversal__V_10_10;

    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
    MR_Word transform_hlds__term_traversal__V_6_6;
    MR_Word transform_hlds__term_traversal__V_7_7;
    MR_Word transform_hlds__term_traversal__V_8_8;
    MR_Integer transform_hlds__term_traversal__V_9_9;
    MR_Integer transform_hlds__term_traversal__V_10_10;

    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word transform_hlds__term_traversal__Params_3,
  MR_Word * transform_hlds__term_traversal__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__V_5_5;
    MR_Word transform_hlds__term_traversal__V_6_6;
    MR_Word transform_hlds__term_traversal__V_7_7;
    MR_Word transform_hlds__term_traversal__V_8_8;
    MR_Integer transform_hlds__term_traversal__V_9_9;
    MR_Integer transform_hlds__term_traversal__V_10_10;

    *transform_hlds__term_traversal__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 1)));
    transform_hlds__term_traversal__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 2)));
    transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 3)));
    transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 4)));
    transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 5)));
    transform_hlds__term_traversal__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 6)));
    transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_3, (MR_Integer) 7)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__OutVars_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__Path_3;
        MR_Word transform_hlds__term_traversal__Paths_4;

        if (transform_hlds__term_traversal__succeeded)
          {
            transform_hlds__term_traversal__Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__term_traversal__Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
            {
              MR_Word transform_hlds__term_traversal__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 4)));
              MR_Word transform_hlds__term_traversal__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 0)));
              MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 1)));
              MR_Integer transform_hlds__term_traversal__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 2)));
              MR_Word transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_3, (MR_Integer) 3)));

              {
                transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__Vars_10, transform_hlds__term_traversal__OutVars_5);
              }
            }
            if (!(transform_hlds__term_traversal__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths_4;

                  transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return transform_hlds__term_traversal__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
  MR_Word transform_hlds__term_traversal__OutVars_6,
  MR_Word transform_hlds__term_traversal__Context_7,
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_17)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16)) == (MR_mktag((MR_Integer) 1))))
      *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
    else
      {
        MR_Word transform_hlds__term_traversal__Paths_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__CanLoop_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__PathList_14;

        {
          mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_traversal__Paths_12, &transform_hlds__term_traversal__PathList_14);
        }
        {
          transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(transform_hlds__term_traversal__PathList_14, transform_hlds__term_traversal__OutVars_6);
        }
        if (transform_hlds__term_traversal__succeeded)
          {
            MR_Word transform_hlds__term_traversal__Error_15;
            MR_Word transform_hlds__term_traversal__V_19_19;

            {
              transform_hlds__term_traversal__Error_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_15, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
            }
            {
              transform_hlds__term_traversal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_15));
              MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_19_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_13));
            }
          }
        else
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_17 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_16;
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__InVars_2,
  MR_Word transform_hlds__term_traversal__OutVars_3,
  MR_Integer transform_hlds__term_traversal__CallGamma_4,
  MR_Word transform_hlds__term_traversal__CallPPIds_5,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_traversal__succeeded;

        if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_traversal__STATE_VARIABLE_PathSet_7 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6;
        else
          {
            MR_Word transform_hlds__term_traversal__Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_traversal__Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 2)));
            MR_Word transform_hlds__term_traversal__PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 3)));
            MR_Word transform_hlds__term_traversal__Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path0_15, (MR_Integer) 4)));
            MR_Word transform_hlds__term_traversal__Path_31;
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

            {
              transform_hlds__term_traversal__succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__OutVars_3, transform_hlds__term_traversal__Vars0_26);
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                MR_Word transform_hlds__term_traversal__TypeInfo_38_38;
                MR_Integer transform_hlds__term_traversal__Gamma_27 = (transform_hlds__term_traversal__CallGamma_4 + transform_hlds__term_traversal__Gamma0_24);
                MR_Word transform_hlds__term_traversal__PPIds_28;
                MR_Word transform_hlds__term_traversal__Vars1_29;
                MR_Word transform_hlds__term_traversal__Vars_30;

                {
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_traversal__CallPPIds_5, transform_hlds__term_traversal__PPIds0_25, &transform_hlds__term_traversal__PPIds_28);
                }
                transform_hlds__term_traversal__TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
                {
                  mercury__bag__subtract_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__Vars0_26, transform_hlds__term_traversal__OutVars_3, &transform_hlds__term_traversal__Vars1_29);
                }
                {
                  mercury__bag__union_3_p_0(transform_hlds__term_traversal__TypeInfo_38_38, transform_hlds__term_traversal__InVars_2, transform_hlds__term_traversal__Vars1_29, &transform_hlds__term_traversal__Vars_30);
                }
                {
                  transform_hlds__term_traversal__Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 0) = ((MR_Box) (transform_hlds__term_traversal__ProcData_22));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 1) = ((MR_Box) (transform_hlds__term_traversal__Start_23));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 2) = ((MR_Box) (transform_hlds__term_traversal__Gamma_27));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 3) = ((MR_Box) (transform_hlds__term_traversal__PPIds_28));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_31, 4) = ((MR_Box) (transform_hlds__term_traversal__Vars_30));
                }
              }
            else
              transform_hlds__term_traversal__Path_31 = transform_hlds__term_traversal__Path0_15;
            {
              mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_31)), transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6, &transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_traversal__HeadVar__1__tmp_copy_1 = transform_hlds__term_traversal__Paths0_16;
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_34_34;

              transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0_6 = transform_hlds__term_traversal__STATE_VARIABLE_PathSet_0__tmp_copy_6;
              transform_hlds__term_traversal__HeadVar__1_1 = transform_hlds__term_traversal__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
  MR_Word transform_hlds__term_traversal__InVars_7,
  MR_Word transform_hlds__term_traversal__OutVars_8,
  MR_Integer transform_hlds__term_traversal__Gamma_9,
  MR_Word transform_hlds__term_traversal__CalledPPIds_10,
  MR_Word transform_hlds__term_traversal__Info0_11,
  MR_Word * transform_hlds__term_traversal__Info_12)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_11)) == (MR_mktag((MR_Integer) 1))))
      *transform_hlds__term_traversal__Info_12 = transform_hlds__term_traversal__Info0_11;
    else
      {
        MR_Word transform_hlds__term_traversal__TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
        MR_Word transform_hlds__term_traversal__Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_11, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__PathsList0_17;
        MR_Word transform_hlds__term_traversal__NewPaths0_18;
        MR_Word transform_hlds__term_traversal__NewPaths_19;

        {
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, transform_hlds__term_traversal__Paths0_15, &transform_hlds__term_traversal__PathsList0_17);
        }
        {
          mercury__set__init_1_p_0(transform_hlds__term_traversal__TypeCtorInfo_20_20, &transform_hlds__term_traversal__NewPaths0_18);
        }
        {
          transform_hlds__term_traversal__record_change_2_7_p_0(transform_hlds__term_traversal__PathsList0_17, transform_hlds__term_traversal__InVars_7, transform_hlds__term_traversal__OutVars_8, transform_hlds__term_traversal__Gamma_9, transform_hlds__term_traversal__CalledPPIds_10, transform_hlds__term_traversal__NewPaths0_18, &transform_hlds__term_traversal__NewPaths_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__Info_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__NewPaths_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_16));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
  MR_Word transform_hlds__term_traversal__VarTypes_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__HeadVar__4_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__term_traversal__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__term_traversal__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__term_traversal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_traversal__Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__TailArgs_30;
            MR_Word transform_hlds__term_traversal__TailModes_31;
            MR_Word transform_hlds__term_traversal__Type_32;

            {
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_33_33, &transform_hlds__term_traversal__TailArgs_30, transform_hlds__term_traversal__Modes0_28, &transform_hlds__term_traversal__TailModes_31);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_1, transform_hlds__term_traversal__V_34_34, &transform_hlds__term_traversal__Type_32);
            }
            {
              transform_hlds__term_traversal__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_traversal__Type_32);
            }
            if (transform_hlds__term_traversal__succeeded)
              {
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__TailArgs_30;
                *transform_hlds__term_traversal__HeadVar__5_5 = transform_hlds__term_traversal__TailModes_31;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_traversal__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_34_34));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailArgs_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_traversal__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Mode0_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__TailModes_31));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_10,
  MR_Word transform_hlds__term_traversal__OutVar_11,
  MR_Word transform_hlds__term_traversal__ConsId_12,
  MR_Word transform_hlds__term_traversal__Args0_13,
  MR_Word transform_hlds__term_traversal__Modes0_14,
  MR_Word transform_hlds__term_traversal__Params_15,
  MR_Integer * transform_hlds__term_traversal__Gamma_16,
  MR_Word * transform_hlds__term_traversal__InVars_17,
  MR_Word * transform_hlds__term_traversal__OutVars_18)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Word transform_hlds__term_traversal__FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 0)));
    MR_Word transform_hlds__term_traversal__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 3)));
    MR_Word transform_hlds__term_traversal__Type_21;
    MR_Word transform_hlds__term_traversal__TypeCtor_24;
    MR_Word transform_hlds__term_traversal__Args1_25;
    MR_Word transform_hlds__term_traversal__Modes1_26;
    MR_Word transform_hlds__term_traversal__Args_27;
    MR_Word transform_hlds__term_traversal__Modes_28;
    MR_Word transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 1)));
    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 2)));
    MR_Word transform_hlds__term_traversal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 4)));
    MR_Word transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 5)));
    MR_Integer transform_hlds__term_traversal__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 6)));
    MR_Integer transform_hlds__term_traversal__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_15, (MR_Integer) 7)));

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__OutVar_11, &transform_hlds__term_traversal__Type_21);
    }
    {
      transform_hlds__term_traversal__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_traversal__Type_21);
    }
    transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
    if (transform_hlds__term_traversal__succeeded)
      {
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
          transform_hlds__term_traversal__succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) transform_hlds__term_traversal__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
          transform_hlds__term_traversal__succeeded = MR_TRUE;
        else
          transform_hlds__term_traversal__succeeded = MR_FALSE;
        transform_hlds__term_traversal__succeeded = !(transform_hlds__term_traversal__succeeded);
        if (transform_hlds__term_traversal__succeeded)
          {
            {
              parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_traversal__Type_21, &transform_hlds__term_traversal__TypeCtor_24);
            }
            {
              transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_traversal__VarTypes_20, transform_hlds__term_traversal__Args0_13, &transform_hlds__term_traversal__Args1_25, transform_hlds__term_traversal__Modes0_14, &transform_hlds__term_traversal__Modes1_26);
            }
            {
              transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__FunctorInfo_19, transform_hlds__term_traversal__TypeCtor_24, transform_hlds__term_traversal__ConsId_12, transform_hlds__term_traversal__Gamma_16, transform_hlds__term_traversal__Args1_25, &transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes1_26, &transform_hlds__term_traversal__Modes_28);
            }
            {
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_traversal__ModuleInfo_10, transform_hlds__term_traversal__Args_27, transform_hlds__term_traversal__Modes_28, transform_hlds__term_traversal__InVars_17, transform_hlds__term_traversal__OutVars_18);
            }
            transform_hlds__term_traversal__succeeded = MR_TRUE;
          }
      }
    return transform_hlds__term_traversal__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word transform_hlds__term_traversal__HeadVar__2_2,
  MR_Word * transform_hlds__term_traversal__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__HeadVar__3_3);
          }
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
        MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__term_traversal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_traversal__RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__Out1_22;

            {
              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__V_25_25, transform_hlds__term_traversal__RecInputSuppliers_20, &transform_hlds__term_traversal__Out1_22);
            }
            switch (transform_hlds__term_traversal__RecInputSupplier_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__Out1_22;
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__V_26_26)), transform_hlds__term_traversal__Out1_22, transform_hlds__term_traversal__HeadVar__3_3);
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
  MR_Word transform_hlds__term_traversal__InfoA_5,
  MR_Word transform_hlds__term_traversal__InfoB_6,
  MR_Word transform_hlds__term_traversal__Params_7,
  MR_Word * transform_hlds__term_traversal__Info_8)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoA_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_traversal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
            MR_Word transform_hlds__term_traversal__ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_traversal__MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
            MR_Word transform_hlds__term_traversal__Errors_14;
            MR_Word transform_hlds__term_traversal__CanLoop_15;
            MR_Word transform_hlds__term_traversal__V_31_31;
            MR_Word transform_hlds__term_traversal__V_32_32;
            MR_Word transform_hlds__term_traversal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
            MR_Word transform_hlds__term_traversal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
            MR_Word transform_hlds__term_traversal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
            MR_Word transform_hlds__term_traversal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
            MR_Integer transform_hlds__term_traversal__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

            {
              transform_hlds__term_traversal__V_31_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_53_53, transform_hlds__term_traversal__ErrorsB_11);
            }
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_31_31, &transform_hlds__term_traversal__Errors_14);
            }
            {
              transform_hlds__term_traversal__V_32_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_12);
            }
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_47_47, transform_hlds__term_traversal__MaxErrors_13, transform_hlds__term_traversal__V_32_32, &transform_hlds__term_traversal__CanLoop_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_traversal__Info_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
            }
          }
        else
          {
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
            MR_Word transform_hlds__term_traversal__V_30_30;
            MR_Word transform_hlds__term_traversal__CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_traversal__MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
            MR_Word transform_hlds__term_traversal__CanLoop_37;
            MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
            MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
            MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
            MR_Word transform_hlds__term_traversal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
            MR_Integer transform_hlds__term_traversal__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

            {
              transform_hlds__term_traversal__V_30_30 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__V_52_52, transform_hlds__term_traversal__CanLoopB_35);
            }
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_48_48, transform_hlds__term_traversal__MaxErrors_36, transform_hlds__term_traversal__V_30_30, &transform_hlds__term_traversal__CanLoop_37);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_traversal__Info_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_53_53));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_37));
            }
          }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoA_5, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_traversal__InfoB_6)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
            MR_Word transform_hlds__term_traversal__V_29_29;
            MR_Word transform_hlds__term_traversal__ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_traversal__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
            MR_Word transform_hlds__term_traversal__CanLoop_42;
            MR_Word transform_hlds__term_traversal__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
            MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
            MR_Word transform_hlds__term_traversal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
            MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
            MR_Integer transform_hlds__term_traversal__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));

            {
              transform_hlds__term_traversal__V_29_29 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_40);
            }
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_49_49, transform_hlds__term_traversal__MaxErrors_41, transform_hlds__term_traversal__V_29_29, &transform_hlds__term_traversal__CanLoop_42);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_traversal__Info_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorsB_39));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_42));
            }
          }
        else
          {
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
            MR_Word transform_hlds__term_traversal__TypeCtorInfo_51_51;
            MR_Word transform_hlds__term_traversal__PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__Paths_20;
            MR_Integer transform_hlds__term_traversal__MaxPaths_21;
            MR_Word transform_hlds__term_traversal__V_25_25;
            MR_Word transform_hlds__term_traversal__CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__InfoB_6, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_traversal__MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
            MR_Word transform_hlds__term_traversal__CanLoop_46;
            MR_Word transform_hlds__term_traversal__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
            MR_Word transform_hlds__term_traversal__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
            MR_Word transform_hlds__term_traversal__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
            MR_Word transform_hlds__term_traversal__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
            MR_Integer transform_hlds__term_traversal__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
            MR_Word transform_hlds__term_traversal__V_89_89;
            MR_Word transform_hlds__term_traversal__V_90_90;
            MR_Word transform_hlds__term_traversal__V_91_91;
            MR_Word transform_hlds__term_traversal__V_92_92;
            MR_Word transform_hlds__term_traversal__V_93_93;
            MR_Word transform_hlds__term_traversal__V_94_94;
            MR_Integer transform_hlds__term_traversal__V_95_95;
            MR_Integer transform_hlds__term_traversal__Count_22;

            {
              transform_hlds__term_traversal__V_25_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__V_54_54, transform_hlds__term_traversal__CanLoopB_44);
            }
            {
              mercury__list__take_upto_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_50_50, transform_hlds__term_traversal__MaxErrors_45, transform_hlds__term_traversal__V_25_25, &transform_hlds__term_traversal__CanLoop_46);
            }
            transform_hlds__term_traversal__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
            {
              mercury__set__union_3_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__PathsB_19, transform_hlds__term_traversal__V_55_55, &transform_hlds__term_traversal__Paths_20);
            }
            transform_hlds__term_traversal__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 0)));
            transform_hlds__term_traversal__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 1)));
            transform_hlds__term_traversal__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 2)));
            transform_hlds__term_traversal__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 3)));
            transform_hlds__term_traversal__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 4)));
            transform_hlds__term_traversal__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 5)));
            transform_hlds__term_traversal__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 6)));
            transform_hlds__term_traversal__MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_7, (MR_Integer) 7)));
            {
              mercury__set__count_2_p_0(transform_hlds__term_traversal__TypeCtorInfo_51_51, transform_hlds__term_traversal__Paths_20, &transform_hlds__term_traversal__Count_22);
            }
            transform_hlds__term_traversal__succeeded = (transform_hlds__term_traversal__Count_22 <= transform_hlds__term_traversal__MaxPaths_21);
            if (transform_hlds__term_traversal__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__term_traversal__Info_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
              }
            else
              {
                MR_Word transform_hlds__term_traversal__Context_23;
                MR_Word transform_hlds__term_traversal__Error_24;
                MR_Word transform_hlds__term_traversal__V_27_27;

                {
                  transform_hlds__term_traversal__params_get_context_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Context_23);
                }
                {
                  transform_hlds__term_traversal__Error_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_23));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Error_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                }
                {
                  transform_hlds__term_traversal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 0) = ((MR_Box) (transform_hlds__term_traversal__Error_24));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_traversal__Info_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_27_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_46));
                }
              }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
  MR_Word transform_hlds__term_traversal__Context_6,
  MR_Word transform_hlds__term_traversal__ErrorKind_7,
  MR_Word transform_hlds__term_traversal__Params_8,
  MR_Word transform_hlds__term_traversal__Info0_9,
  MR_Word * transform_hlds__term_traversal__Info_10)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_traversal__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__CanLoop1_13;
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
        MR_Word transform_hlds__term_traversal__CanLoop_15;
        MR_Word transform_hlds__term_traversal__V_18_18;
        MR_Word transform_hlds__term_traversal__V_26_26;
        MR_Word transform_hlds__term_traversal__V_27_27;
        MR_Word transform_hlds__term_traversal__V_28_28;
        MR_Word transform_hlds__term_traversal__V_29_29;
        MR_Word transform_hlds__term_traversal__V_30_30;
        MR_Word transform_hlds__term_traversal__V_31_31;
        MR_Integer transform_hlds__term_traversal__V_32_32;

        {
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
        }
        {
          transform_hlds__term_traversal__CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_12));
        }
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
        transform_hlds__term_traversal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
        transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
        transform_hlds__term_traversal__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
        {
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__CanLoop1_13, &transform_hlds__term_traversal__CanLoop_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_traversal__Info_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_15));
        }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_17_17;
        MR_Word transform_hlds__term_traversal__CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__CanLoop1_20;
        MR_Integer transform_hlds__term_traversal__MaxErrors_21;
        MR_Word transform_hlds__term_traversal__CanLoop_22;
        MR_Word transform_hlds__term_traversal__V_34_34;
        MR_Word transform_hlds__term_traversal__V_35_35;
        MR_Word transform_hlds__term_traversal__V_36_36;
        MR_Word transform_hlds__term_traversal__V_37_37;
        MR_Word transform_hlds__term_traversal__V_38_38;
        MR_Word transform_hlds__term_traversal__V_39_39;
        MR_Integer transform_hlds__term_traversal__V_40_40;

        {
          transform_hlds__term_traversal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_6));
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_17_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_7));
        }
        {
          transform_hlds__term_traversal__CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 0) = ((MR_Box) (transform_hlds__term_traversal__V_17_17));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CanLoop1_20, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop0_19));
        }
        transform_hlds__term_traversal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 0)));
        transform_hlds__term_traversal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 1)));
        transform_hlds__term_traversal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 2)));
        transform_hlds__term_traversal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 3)));
        transform_hlds__term_traversal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 4)));
        transform_hlds__term_traversal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 5)));
        transform_hlds__term_traversal__MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 6)));
        transform_hlds__term_traversal__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_8, (MR_Integer) 7)));
        {
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_21, transform_hlds__term_traversal__CanLoop1_20, &transform_hlds__term_traversal__CanLoop_22);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__Info_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_22));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
  MR_Word transform_hlds__term_traversal__Params_6,
  MR_Word transform_hlds__term_traversal__Context_7,
  MR_Word transform_hlds__term_traversal__ErrorKind_8,
  MR_Word transform_hlds__term_traversal__Info0_9,
  MR_Word * transform_hlds__term_traversal__Info_10)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_traversal__Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__Errors1_13;
        MR_Integer transform_hlds__term_traversal__MaxErrors_14;
        MR_Word transform_hlds__term_traversal__Errors_15;
        MR_Word transform_hlds__term_traversal__V_20_20;
        MR_Word transform_hlds__term_traversal__V_24_24;
        MR_Word transform_hlds__term_traversal__V_25_25;
        MR_Word transform_hlds__term_traversal__V_26_26;
        MR_Word transform_hlds__term_traversal__V_27_27;
        MR_Word transform_hlds__term_traversal__V_28_28;
        MR_Word transform_hlds__term_traversal__V_29_29;
        MR_Integer transform_hlds__term_traversal__V_30_30;

        {
          transform_hlds__term_traversal__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_20_20, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
        }
        {
          transform_hlds__term_traversal__Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 0) = ((MR_Box) (transform_hlds__term_traversal__V_20_20));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Errors1_13, 1) = ((MR_Box) (transform_hlds__term_traversal__Errors0_11));
        }
        transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 0)));
        transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 1)));
        transform_hlds__term_traversal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 2)));
        transform_hlds__term_traversal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 3)));
        transform_hlds__term_traversal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 4)));
        transform_hlds__term_traversal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 5)));
        transform_hlds__term_traversal__MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 6)));
        transform_hlds__term_traversal__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Params_6, (MR_Integer) 7)));
        {
          mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_traversal__MaxErrors_14, transform_hlds__term_traversal__Errors1_13, &transform_hlds__term_traversal__Errors_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_traversal__Info_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Errors_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_12));
        }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__ErrorContext_17;
        MR_Word transform_hlds__term_traversal__V_18_18;
        MR_Word transform_hlds__term_traversal__CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_9, (MR_Integer) 0)));

        {
          transform_hlds__term_traversal__ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 0) = ((MR_Box) (transform_hlds__term_traversal__Context_7));
          MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__ErrorContext_17, 1) = ((MR_Box) (transform_hlds__term_traversal__ErrorKind_8));
        }
        {
          transform_hlds__term_traversal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 0) = ((MR_Box) (transform_hlds__term_traversal__ErrorContext_17));
          MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_traversal__Info_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_18_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_21));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
  MR_Word transform_hlds__term_traversal__Path_4,
  MR_Word transform_hlds__term_traversal__Info0_5,
  MR_Word * transform_hlds__term_traversal__Info_6)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_5)) == (MR_mktag((MR_Integer) 1))))
      *transform_hlds__term_traversal__Info_6 = transform_hlds__term_traversal__Info0_5;
    else
      {
        MR_Word transform_hlds__term_traversal__Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_5, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__Paths_11;

        {
          mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (transform_hlds__term_traversal__Path_4)), transform_hlds__term_traversal__Paths0_9, &transform_hlds__term_traversal__Paths_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__Info_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__Paths_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_10));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
  MR_Word transform_hlds__term_traversal__Info0_3,
  MR_Word * transform_hlds__term_traversal__Info_4)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_traversal__Info0_3)) == (MR_mktag((MR_Integer) 1))))
      *transform_hlds__term_traversal__Info_4 = transform_hlds__term_traversal__Info0_3;
    else
      {
        MR_Word transform_hlds__term_traversal__CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__V_9_9;
        MR_Word transform_hlds__term_traversal__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Info0_3, (MR_Integer) 0)));

        {
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__Info_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__CanLoop_8));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__term_traversal__V_9_9;

        {
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__Case_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 2)));
        MR_Word transform_hlds__term_traversal__CaseInfo_19;
        MR_Word transform_hlds__term_traversal__CasesInfo_20;
        MR_Word transform_hlds__term_traversal__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Case_13, (MR_Integer) 1)));

        {
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_18, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CaseInfo_19);
        }
        {
          transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Cases_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__CasesInfo_20);
        }
        {
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CaseInfo_19, transform_hlds__term_traversal__CasesInfo_20, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__term_traversal__V_9_9;

        {
          transform_hlds__term_traversal__V_9_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__term_traversal__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__V_9_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__GoalInfo_16;
        MR_Word transform_hlds__term_traversal__GoalsInfo_17;

        {
          transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalInfo_16);
        }
        {
          transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goals_14, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__GoalsInfo_17);
        }
        {
          transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__GoalInfo_16, transform_hlds__term_traversal__GoalsInfo_17, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__HeadVar__5_5);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_1,
  MR_Word transform_hlds__term_traversal__Params_2,
  MR_Word transform_hlds__term_traversal__HeadVar__3_3,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_traversal__succeeded;

        if ((transform_hlds__term_traversal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_traversal__STATE_VARIABLE_Info_5 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4;
        else
          {
            MR_Word transform_hlds__term_traversal__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_traversal__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

            {
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_1, transform_hlds__term_traversal__Params_2, transform_hlds__term_traversal__Goal_13, transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4, &transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_traversal__HeadVar__3__tmp_copy_3 = transform_hlds__term_traversal__Goals_14;
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_18_18;

              transform_hlds__term_traversal__STATE_VARIABLE_Info_0_4 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_4;
              transform_hlds__term_traversal__HeadVar__3_3 = transform_hlds__term_traversal__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
  MR_Word transform_hlds__term_traversal__HeadVar__1_1,
  MR_Word * transform_hlds__term_traversal__ActiveVars_2)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    if ((transform_hlds__term_traversal__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars_2);
        }
      }
    else
      {
        MR_Word transform_hlds__term_traversal__Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__ActiveVars1_7;
        MR_Word transform_hlds__term_traversal__ActiveVars2_12;
        MR_Word transform_hlds__term_traversal__V_8_8;
        MR_Word transform_hlds__term_traversal__V_9_9;
        MR_Integer transform_hlds__term_traversal__V_10_10;
        MR_Word transform_hlds__term_traversal__V_11_11;

        {
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_traversal__Paths_5, &transform_hlds__term_traversal__ActiveVars1_7);
        }
        transform_hlds__term_traversal__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 0)));
        transform_hlds__term_traversal__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 1)));
        transform_hlds__term_traversal__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 2)));
        transform_hlds__term_traversal__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 3)));
        transform_hlds__term_traversal__ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Path_4, (MR_Integer) 4)));
        {
          mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], transform_hlds__term_traversal__ActiveVars1_7, transform_hlds__term_traversal__ActiveVars2_12, transform_hlds__term_traversal__ActiveVars_2);
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
  MR_Box transform_hlds__term_traversal__closure_arg,
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;

    {
      transform_hlds__term_traversal__succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
    return transform_hlds__term_traversal__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
  MR_Box transform_hlds__term_traversal__closure_arg,
  MR_Box transform_hlds__term_traversal__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_traversal__wrapper_arg_2;
    MR_Box transform_hlds__term_traversal__closure = transform_hlds__term_traversal__closure_arg;
    MR_Word transform_hlds__term_traversal__conv0_HeadVar__2_2;

    {
      transform_hlds__term_traversal__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__term_traversal__wrapper_arg_1));
    }
    transform_hlds__term_traversal__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_traversal__conv0_HeadVar__2_2));
    return transform_hlds__term_traversal__wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0(
  MR_Word transform_hlds__term_traversal__ModuleInfo_6,
  MR_Word transform_hlds__term_traversal__Params_7,
  MR_Word transform_hlds__term_traversal__Goal_8,
  MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110,
  MR_Word * transform_hlds__term_traversal__STATE_VARIABLE_Info_111)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_traversal__succeeded;
        MR_Word transform_hlds__term_traversal__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 0)));
        MR_Word transform_hlds__term_traversal__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Goal_8, (MR_Integer) 1)));
        MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
        MR_Word transform_hlds__term_traversal__Detism_12;
        MR_Word transform_hlds__term_traversal__V_244_244;
        MR_Word transform_hlds__term_traversal__V_13_13;

        {
          transform_hlds__term_traversal__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__term_traversal__Detism_12, &transform_hlds__term_traversal__V_13_13, &transform_hlds__term_traversal__V_244_244);
        }
        transform_hlds__term_traversal__succeeded = ((MR_Integer) 0 == transform_hlds__term_traversal__V_244_244);
        if (transform_hlds__term_traversal__succeeded)
          {
            transform_hlds__term_traversal__cannot_succeed_2_p_0(transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110, &transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113);
          }
        else
          transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110;
        switch (MR_tag((MR_Word) transform_hlds__term_traversal__GoalExpr_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__term_traversal__SubGoal_107 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_traversal__GoalExpr_10), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_107;
                MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

                transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
                transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__term_traversal__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
              MR_Word transform_hlds__term_traversal___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
              MR_Word transform_hlds__term_traversal___RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__term_traversal___UniMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
              MR_Word transform_hlds__term_traversal___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) transform_hlds__term_traversal__Unification_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__term_traversal__OutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
                    MR_Word transform_hlds__term_traversal__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_traversal__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_traversal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
                    MR_Word transform_hlds__term_traversal__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
                    MR_Word transform_hlds__term_traversal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
                    MR_Word transform_hlds__term_traversal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Unification_17, (MR_Integer) 6)));
                    MR_Integer transform_hlds__term_traversal__Gamma_26;
                    MR_Word transform_hlds__term_traversal__InVars_27;
                    MR_Word transform_hlds__term_traversal__OutVars0_28;

                    {
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__OutVar_19, transform_hlds__term_traversal__ConsId_20, transform_hlds__term_traversal__Args_21, transform_hlds__term_traversal__Modes_22, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma_26, &transform_hlds__term_traversal__InVars_27, &transform_hlds__term_traversal__OutVars0_28);
                    }
                    if (transform_hlds__term_traversal__succeeded)
                      {
                        MR_Word transform_hlds__term_traversal__OutVars_29;

                        {
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__OutVar_19)), transform_hlds__term_traversal__OutVars0_28, &transform_hlds__term_traversal__OutVars_29);
                        }
                        {
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_27, transform_hlds__term_traversal__OutVars_29, transform_hlds__term_traversal__Gamma_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
                      }
                    else
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__term_traversal__InVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
                    MR_Word transform_hlds__term_traversal__ConsId_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));
                    MR_Word transform_hlds__term_traversal__Args_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 2)));
                    MR_Word transform_hlds__term_traversal__Modes_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 3)));
                    MR_Word transform_hlds__term_traversal__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 4)));
                    MR_Word transform_hlds__term_traversal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__Unification_17, (MR_Integer) 5)));
                    MR_Integer transform_hlds__term_traversal__Gamma0_33;
                    MR_Word transform_hlds__term_traversal__InVars0_34;
                    MR_Word transform_hlds__term_traversal__OutVars_179;

                    {
                      transform_hlds__term_traversal__succeeded = transform_hlds__term_traversal__unify_change_9_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__InVar_30, transform_hlds__term_traversal__ConsId_180, transform_hlds__term_traversal__Args_181, transform_hlds__term_traversal__Modes_182, transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__Gamma0_33, &transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__OutVars_179);
                    }
                    if (transform_hlds__term_traversal__succeeded)
                      {
                        MR_Integer transform_hlds__term_traversal__Gamma_175;
                        MR_Word transform_hlds__term_traversal__InVars_176;

                        {
                          mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (transform_hlds__term_traversal__InVar_30)), transform_hlds__term_traversal__InVars0_34, &transform_hlds__term_traversal__InVars_176);
                        }
                        transform_hlds__term_traversal__Gamma_175 = ((MR_Integer) 0 - transform_hlds__term_traversal__Gamma0_33);
                        {
                          transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_176, transform_hlds__term_traversal__OutVars_179, transform_hlds__term_traversal__Gamma_175, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
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
                    MR_Word transform_hlds__term_traversal__TypeInfo_230_230 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
                    MR_Word transform_hlds__term_traversal__Empty_35;
                    MR_Word transform_hlds__term_traversal__OutVar_186 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)));
                    MR_Word transform_hlds__term_traversal__InVars_187;
                    MR_Word transform_hlds__term_traversal__OutVars_188;
                    MR_Word transform_hlds__term_traversal__InVar_189 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__Unification_17, (MR_Integer) 1)));

                    {
                      mercury__bag__init_1_p_0(transform_hlds__term_traversal__TypeInfo_230_230, &transform_hlds__term_traversal__Empty_35);
                    }
                    {
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__InVar_189)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__InVars_187);
                    }
                    {
                      mercury__bag__insert_3_p_0(transform_hlds__term_traversal__TypeInfo_230_230, ((MR_Box) (transform_hlds__term_traversal__OutVar_186)), transform_hlds__term_traversal__Empty_35, &transform_hlds__term_traversal__OutVars_188);
                    }
                    {
                      transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__InVars_187, transform_hlds__term_traversal__OutVars_188, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Unification_17, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
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
              MR_Word transform_hlds__term_traversal__CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)));
              MR_Integer transform_hlds__term_traversal__CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
              MR_Word transform_hlds__term_traversal__Context_46;
              MR_Word transform_hlds__term_traversal__PPId_47;
              MR_Word transform_hlds__term_traversal__CallPPId_48;
              MR_Word transform_hlds__term_traversal__CallProcInfo_50;
              MR_Word transform_hlds__term_traversal__CallArgModes_51;
              MR_Word transform_hlds__term_traversal__CallArgSizeInfo_52;
              MR_Word transform_hlds__term_traversal__CallTerminationInfo_53;
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
              MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
              MR_Word transform_hlds__term_traversal__Args_192 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
              MR_Word transform_hlds__term_traversal__InVars_193;
              MR_Word transform_hlds__term_traversal__OutVars_194;
              MR_Word transform_hlds__term_traversal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
              MR_Word transform_hlds__term_traversal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
              MR_Word transform_hlds__term_traversal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
              MR_Word transform_hlds__term_traversal__V_49_49;
              MR_Word transform_hlds__term_traversal__V_152_152;
              MR_Word transform_hlds__term_traversal__V_59_59;
              MR_Word transform_hlds__term_traversal__VarTypes_60;
              MR_Word transform_hlds__term_traversal__RecInputSuppliers_62;
              MR_Word transform_hlds__term_traversal__RecInputSuppliersMap_61;
              MR_Box transform_hlds__term_traversal__conv3_RecInputSuppliers_62;

              {
                transform_hlds__term_traversal__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
              }
              {
                transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_47);
              }
              {
                transform_hlds__term_traversal__CallPPId_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_41));
                MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__CallPPId_48, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_42));
              }
              {
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_41, transform_hlds__term_traversal__CallProcId_42, &transform_hlds__term_traversal__V_49_49, &transform_hlds__term_traversal__CallProcInfo_50);
              }
              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgModes_51);
              }
              {
                hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallArgSizeInfo_52);
              }
              {
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_traversal__CallProcInfo_50, &transform_hlds__term_traversal__CallTerminationInfo_53);
              }
              {
                transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_51, transform_hlds__term_traversal__Args_192, &transform_hlds__term_traversal__InVars_193, &transform_hlds__term_traversal__OutVars_194);
              }
              if ((transform_hlds__term_traversal__CallArgSizeInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word transform_hlds__term_traversal__OutputSuppliersMap_58;
                  MR_Word transform_hlds__term_traversal__V_143_143;
                  MR_Word transform_hlds__term_traversal__OutputSuppliers_190;
                  MR_Word transform_hlds__term_traversal__UsedInVars_191;
                  MR_Box transform_hlds__term_traversal__conv2_OutputSuppliers_190;

                  {
                    transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__OutputSuppliersMap_58);
                  }
                  {
                    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__OutputSuppliersMap_58, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv2_OutputSuppliers_190);
                  }
                  transform_hlds__term_traversal__OutputSuppliers_190 = ((MR_Word) transform_hlds__term_traversal__conv2_OutputSuppliers_190);
                  {
                    transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_190, &transform_hlds__term_traversal__UsedInVars_191);
                  }
                  {
                    transform_hlds__term_traversal__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_191, transform_hlds__term_traversal__OutVars_194, (MR_Integer) 0, transform_hlds__term_traversal__V_143_143, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                  }
                }
              else
                {
                  MR_Word transform_hlds__term_traversal__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallArgSizeInfo_52, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) transform_hlds__term_traversal__V_245_245)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Integer transform_hlds__term_traversal__CallGamma_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 0)));
                      MR_Word transform_hlds__term_traversal__OutputSuppliers_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_245_245, (MR_Integer) 1)));
                      MR_Word transform_hlds__term_traversal__UsedInVars_56;

                      {
                        transform_hlds__term_util__remove_unused_args_4_p_0(transform_hlds__term_traversal__InVars_193, transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__OutputSuppliers_55, &transform_hlds__term_traversal__UsedInVars_56);
                      }
                      {
                        transform_hlds__term_traversal__record_change_6_p_0(transform_hlds__term_traversal__UsedInVars_56, transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__CallGamma_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
                    }
                  else
                    {
                      MR_Word transform_hlds__term_traversal__V_147_147;

                      {
                        transform_hlds__term_traversal__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
                        MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_147_147, 2) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
                      }
                      {
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_194, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_147_147, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151);
                      }
                    }
                }
              transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__CallTerminationInfo_53)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__term_traversal__succeeded)
                {
                  transform_hlds__term_traversal__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__CallTerminationInfo_53, (MR_Integer) 0)));
                  transform_hlds__term_traversal__succeeded = ((MR_tag((MR_Word) transform_hlds__term_traversal__V_152_152)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__term_traversal__succeeded)
                    transform_hlds__term_traversal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_152_152, (MR_Integer) 0)));
                }
              if (transform_hlds__term_traversal__succeeded)
                {
                  MR_Word transform_hlds__term_traversal__V_153_153;

                  {
                    transform_hlds__term_traversal__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_153_153, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
                  }
                  {
                    transform_hlds__term_traversal__called_can_loop_5_p_0(transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_153_153, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151, &transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154);
                  }
                }
              else
                transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154 = transform_hlds__term_traversal__STATE_VARIABLE_Info_151_151;
              {
                transform_hlds__term_traversal__params_get_var_types_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__VarTypes_60);
              }
              {
                transform_hlds__term_traversal__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__VarTypes_60);
              }
              if (transform_hlds__term_traversal__succeeded)
                {
                  MR_Word transform_hlds__term_traversal__V_155_155;

                  {
                    transform_hlds__term_traversal__V_155_155 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
                    MR_hl_field(MR_mktag(2), transform_hlds__term_traversal__V_155_155, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
                  }
                  {
                    transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_46, transform_hlds__term_traversal__V_155_155, transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154, &transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156);
                  }
                }
              else
                transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156 = transform_hlds__term_traversal__STATE_VARIABLE_Info_154_154;
              {
                transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__RecInputSuppliersMap_61);
              }
              {
                transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], transform_hlds__term_traversal__RecInputSuppliersMap_61, ((MR_Box) (transform_hlds__term_traversal__CallPPId_48)), &transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
              }
              if (transform_hlds__term_traversal__succeeded)
                {
                  transform_hlds__term_traversal__RecInputSuppliers_62 = ((MR_Word) transform_hlds__term_traversal__conv3_RecInputSuppliers_62);
                  transform_hlds__term_traversal__succeeded = MR_TRUE;
                }
              if (transform_hlds__term_traversal__succeeded)
                {
                  MR_Word transform_hlds__term_traversal__Bag_63;
                  MR_Word transform_hlds__term_traversal__PathStart_64;
                  MR_Word transform_hlds__term_traversal__NewPath_65;
                  MR_Word transform_hlds__term_traversal__V_157_157;

                  {
                    transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(transform_hlds__term_traversal__Args_192, transform_hlds__term_traversal__RecInputSuppliers_62, &transform_hlds__term_traversal__Bag_63);
                  }
                  {
                    transform_hlds__term_traversal__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPPId_48));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_157_157, 1) = ((MR_Box) (transform_hlds__term_traversal__Context_46));
                  }
                  {
                    transform_hlds__term_traversal__PathStart_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__PathStart_64, 0) = ((MR_Box) (transform_hlds__term_traversal__V_157_157));
                  }
                  {
                    transform_hlds__term_traversal__NewPath_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 0) = ((MR_Box) (transform_hlds__term_traversal__PPId_47));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 1) = ((MR_Box) (transform_hlds__term_traversal__PathStart_64));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 2) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__NewPath_65, 4) = ((MR_Box) (transform_hlds__term_traversal__Bag_63));
                  }
                  {
                    transform_hlds__term_traversal__add_path_3_p_0(transform_hlds__term_traversal__NewPath_65, transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
                }
              else
                *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_156_156;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__term_traversal__Details_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_traversal__ArgModes_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_traversal__Args_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_traversal__Context_223;
                  MR_Word transform_hlds__term_traversal__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word transform_hlds__term_traversal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));

                  {
                    transform_hlds__term_traversal__Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
                  switch (MR_tag((MR_Word) transform_hlds__term_traversal__Details_73)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__term_traversal__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 0)));
                        MR_Word transform_hlds__term_traversal__ClosureValueMap_81;
                        MR_Word transform_hlds__term_traversal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 1)));
                        MR_Word transform_hlds__term_traversal__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 2)));
                        MR_Integer transform_hlds__term_traversal__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__Details_73, (MR_Integer) 3)));
                        MR_Word transform_hlds__term_traversal__ClosureValues0_82;
                        MR_Box transform_hlds__term_traversal__conv1_ClosureValues0_82;

                        {
                          transform_hlds__term_traversal__ClosureValueMap_81 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                        }
                        {
                          transform_hlds__term_traversal__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], transform_hlds__term_traversal__ClosureValueMap_81, ((MR_Box) (transform_hlds__term_traversal__Var_77)), &transform_hlds__term_traversal__conv1_ClosureValues0_82);
                        }
                        if (transform_hlds__term_traversal__succeeded)
                          {
                            transform_hlds__term_traversal__ClosureValues0_82 = ((MR_Word) transform_hlds__term_traversal__conv1_ClosureValues0_82);
                            transform_hlds__term_traversal__succeeded = MR_TRUE;
                          }
                        if (transform_hlds__term_traversal__succeeded)
                          {
                            MR_Word transform_hlds__term_traversal__TypeCtorInfo_241_241 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                            MR_Word transform_hlds__term_traversal__ClosureValues_83;
                            MR_Word transform_hlds__term_traversal__Terminating_84;
                            MR_Word transform_hlds__term_traversal__NonTerminating_85;
                            MR_Word transform_hlds__term_traversal__V_128_128;

                            {
                              transform_hlds__term_traversal__ClosureValues_83 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__ClosureValues0_82);
                            }
                            {
                              transform_hlds__term_traversal__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_2));
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_128_128, 3) = ((MR_Box) (transform_hlds__term_traversal__ModuleInfo_6));
                            }
                            {
                              mercury__list__filter_4_p_0(transform_hlds__term_traversal__TypeCtorInfo_241_241, transform_hlds__term_traversal__V_128_128, transform_hlds__term_traversal__ClosureValues_83, &transform_hlds__term_traversal__Terminating_84, &transform_hlds__term_traversal__NonTerminating_85);
                            }
                            if ((transform_hlds__term_traversal__NonTerminating_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                MR_Word transform_hlds__term_traversal__Error_86;
                                MR_Word transform_hlds__term_traversal__OutVars_203;
                                MR_Word transform_hlds__term_traversal__PPId_204;
                                MR_Word transform_hlds__term_traversal___InVars_202;

                                {
                                  transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__ArgModes_74, transform_hlds__term_traversal__Args_221, &transform_hlds__term_traversal___InVars_202, &transform_hlds__term_traversal__OutVars_203);
                                }
                                {
                                  transform_hlds__term_traversal__params_get_ppid_2_p_0(transform_hlds__term_traversal__Params_7, &transform_hlds__term_traversal__PPId_204);
                                }
                                {
                                  transform_hlds__term_traversal__Error_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 1) = ((MR_Box) (transform_hlds__term_traversal__PPId_204));
                                  MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__Error_86, 2) = ((MR_Box) (transform_hlds__term_traversal__Terminating_84));
                                }
                                {
                                  transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_203, transform_hlds__term_traversal__Context_223, transform_hlds__term_traversal__Error_86, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                                }
                              }
                            else
                              {
                                {
                                  transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                                }
                              }
                          }
                        else
                          {
                            {
                              transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_223, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
                      break;
                    case (MR_Integer) 3:
                      *transform_hlds__term_traversal__STATE_VARIABLE_Info_111 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__term_traversal__Attributes_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_traversal__ArgVars_71;
                  MR_Word transform_hlds__term_traversal__Args_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word transform_hlds__term_traversal__OutVars_196;
                  MR_Word transform_hlds__term_traversal__CallPredId_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
                  MR_Integer transform_hlds__term_traversal__CallProcId_198 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_traversal__Context_199;
                  MR_Word transform_hlds__term_traversal__CallProcInfo_200;
                  MR_Word transform_hlds__term_traversal__CallArgModes_201;
                  MR_Word transform_hlds__term_traversal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 5)));
                  MR_Word transform_hlds__term_traversal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 6)));
                  MR_Word transform_hlds__term_traversal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 7)));
                  MR_Word transform_hlds__term_traversal__V_70_70;
                  MR_Word transform_hlds__term_traversal___InVars_72;
                  MR_Word transform_hlds__term_traversal__V_135_135;

                  {
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallPredId_197, transform_hlds__term_traversal__CallProcId_198, &transform_hlds__term_traversal__V_70_70, &transform_hlds__term_traversal__CallProcInfo_200);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_traversal__CallProcInfo_200, &transform_hlds__term_traversal__CallArgModes_201);
                  }
                  {
                    transform_hlds__term_traversal__ArgVars_71 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[3], transform_hlds__term_traversal__Args_195);
                  }
                  {
                    transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__CallArgModes_201, transform_hlds__term_traversal__ArgVars_71, &transform_hlds__term_traversal___InVars_72, &transform_hlds__term_traversal__OutVars_196);
                  }
                  {
                    transform_hlds__term_traversal__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_traversal__GoalInfo_11);
                  }
                  {
                    transform_hlds__term_traversal__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 0) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
                    MR_hl_field(MR_mktag(0), transform_hlds__term_traversal__V_135_135, 1) = ((MR_Box) (transform_hlds__term_traversal__CallProcId_198));
                  }
                  {
                    transform_hlds__term_traversal__succeeded = transform_hlds__term_util__is_termination_known_2_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__V_135_135);
                  }
                  if (transform_hlds__term_traversal__succeeded)
                    {
                      {
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                      }
                    }
                  else
                    {
                      {
                        transform_hlds__term_traversal__succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(transform_hlds__term_traversal__Attributes_66);
                      }
                      if (transform_hlds__term_traversal__succeeded)
                        {
                          {
                            transform_hlds__term_traversal__error_if_intersect_5_p_0(transform_hlds__term_traversal__OutVars_196, transform_hlds__term_traversal__Context_199, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                          }
                        }
                      else
                        {
                          MR_Word transform_hlds__term_traversal__V_140_140;

                          {
                            transform_hlds__term_traversal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__V_140_140, 1) = ((MR_Box) (transform_hlds__term_traversal__CallPredId_197));
                          }
                          {
                            transform_hlds__term_traversal__add_error_5_p_0(transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Context_199, transform_hlds__term_traversal__V_140_140, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__term_traversal__Goals_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_traversal__RevGoals_97;
                  MR_Word transform_hlds__term_traversal__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

                  {
                    mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__term_traversal__Goals_96, &transform_hlds__term_traversal__RevGoals_97);
                  }
                  {
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__RevGoals_97, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__term_traversal__Goals_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

                  {
                    transform_hlds__term_traversal__term_traverse_disj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Goals_226, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__term_traversal__Cases_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_traversal__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_traversal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));

                  {
                    transform_hlds__term_traversal__term_traverse_switch_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Cases_100, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__term_traversal__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_traversal__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__term_traversal__Goal__tmp_copy_8 = transform_hlds__term_traversal__SubGoal_227;
                    MR_Word transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113;

                    transform_hlds__term_traversal__STATE_VARIABLE_Info_0_110 = transform_hlds__term_traversal__STATE_VARIABLE_Info_0__tmp_copy_110;
                    transform_hlds__term_traversal__Goal_8 = transform_hlds__term_traversal__Goal__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__term_traversal__Cond_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_traversal__Then_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_traversal__Else_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word transform_hlds__term_traversal__CondThenInfo_105;
                  MR_Word transform_hlds__term_traversal__ElseInfo_106;
                  MR_Word transform_hlds__term_traversal__V_119_119;
                  MR_Word transform_hlds__term_traversal__V_120_120;
                  MR_Word transform_hlds__term_traversal__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_traversal__GoalExpr_10, (MR_Integer) 1)));

                  {
                    transform_hlds__term_traversal__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 0) = ((MR_Box) (transform_hlds__term_traversal__Cond_102));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__term_traversal__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 0) = ((MR_Box) (transform_hlds__term_traversal__Then_103));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_traversal__V_119_119, 1) = ((MR_Box) (transform_hlds__term_traversal__V_120_120));
                  }
                  {
                    transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__V_119_119, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__CondThenInfo_105);
                  }
                  {
                    transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_traversal__ModuleInfo_6, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__Else_104, transform_hlds__term_traversal__STATE_VARIABLE_Info_113_113, &transform_hlds__term_traversal__ElseInfo_106);
                  }
                  {
                    transform_hlds__term_traversal__combine_paths_4_p_0(transform_hlds__term_traversal__CondThenInfo_105, transform_hlds__term_traversal__ElseInfo_106, transform_hlds__term_traversal__Params_7, transform_hlds__term_traversal__STATE_VARIABLE_Info_111);
                  }
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

void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
  MR_Word transform_hlds__term_traversal__FunctorInfo_10,
  MR_Word transform_hlds__term_traversal__PredProcId_11,
  MR_Word transform_hlds__term_traversal__Context_12,
  MR_Word transform_hlds__term_traversal__VarTypes_13,
  MR_Word transform_hlds__term_traversal__OutputSuppliers_14,
  MR_Word transform_hlds__term_traversal__RecInputSuppliers_15,
  MR_Integer transform_hlds__term_traversal__MaxErrors_16,
  MR_Integer transform_hlds__term_traversal__MaxPaths_17,
  MR_Word * transform_hlds__term_traversal__Params_18)
{
  {
    MR_bool transform_hlds__term_traversal__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__term_traversal__Params_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_traversal__FunctorInfo_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_traversal__PredProcId_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_traversal__Context_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_traversal__VarTypes_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_traversal__OutputSuppliers_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_traversal__RecInputSuppliers_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_traversal__MaxErrors_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_traversal__MaxPaths_17));
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_traversal. */
