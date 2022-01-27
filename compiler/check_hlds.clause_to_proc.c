/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module check_hlds.clause_to_proc. */
/* :- implementation. */

/*
INIT mercury__check_hlds__clause_to_proc__init
ENDINIT
*/

#include "check_hlds.clause_to_proc.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__217__1_2_p_0(
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_32,
  MR_Word check_hlds__clause_to_proc__HeadVar__2_100);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__216__1_2_p_0(
  MR_Word check_hlds__clause_to_proc__ExtraArgs_31,
  MR_Word check_hlds__clause_to_proc__HeadVar__2_95);

static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word check_hlds__clause_to_proc__Var_2,
  MR_Integer check_hlds__clause_to_proc__Num_3,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
  MR_Word check_hlds__clause_to_proc__Subn_2,
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
  MR_Word check_hlds__clause_to_proc__Subn_14,
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
  MR_Word check_hlds__clause_to_proc__PredId_6,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
  MR_Word check_hlds__clause_to_proc__Arg_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
  MR_Word check_hlds__clause_to_proc__PredId_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
  MR_Box check_hlds__clause_to_proc__closure_arg);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
  MR_Box check_hlds__clause_to_proc__closure_arg);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[7][3];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[6][2];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[3][6];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[1][1];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[0])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[2])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__217__1_2_p_0(
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_32,
  MR_Word check_hlds__clause_to_proc__HeadVar__2_100)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;

    {
      check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[3], ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_32)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_100)));
    }
    return check_hlds__clause_to_proc__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__216__1_2_p_0(
  MR_Word check_hlds__clause_to_proc__ExtraArgs_31,
  MR_Word check_hlds__clause_to_proc__HeadVar__2_95)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;

    {
      check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[1], ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_31)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_95)));
    }
    return check_hlds__clause_to_proc__succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word check_hlds__clause_to_proc__Var_2,
  MR_Integer check_hlds__clause_to_proc__Num_3,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__clause_to_proc__succeeded;

        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
        else
          {
            MR_Word check_hlds__clause_to_proc__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__clause_to_proc__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;
            MR_Integer check_hlds__clause_to_proc__V_23_23;
            MR_Word check_hlds__clause_to_proc__TVar_16;
            MR_Word check_hlds__clause_to_proc__V_17_17;
            MR_Word check_hlds__clause_to_proc__V_18_18;

            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgType_11)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__clause_to_proc__succeeded)
              {
                check_hlds__clause_to_proc__TVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 0)));
                check_hlds__clause_to_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 1)));
                {
                  check_hlds__clause_to_proc__succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, check_hlds__clause_to_proc__TVar_16, &check_hlds__clause_to_proc__V_18_18);
                }
                check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
              }
            if (check_hlds__clause_to_proc__succeeded)
              {
                MR_Word check_hlds__clause_to_proc__Locn_19;

                {
                  check_hlds__clause_to_proc__Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_2));
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 1) = ((MR_Box) (check_hlds__clause_to_proc__Num_3));
                }
                {
                  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(check_hlds__clause_to_proc__TVar_16, check_hlds__clause_to_proc__Locn_19, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22);
                }
              }
            else
              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
            check_hlds__clause_to_proc__V_23_23 = (check_hlds__clause_to_proc__Num_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ArgTypes_12;
              MR_Integer check_hlds__clause_to_proc__Num__tmp_copy_3 = check_hlds__clause_to_proc__V_23_23;
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;

              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4;
              check_hlds__clause_to_proc__Num_3 = check_hlds__clause_to_proc__Num__tmp_copy_3;
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
  MR_Word check_hlds__clause_to_proc__Subn_2,
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;

    if ((check_hlds__clause_to_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__clause_to_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "length mismatch");
              return;
            }
          }
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
        *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
      }
    else
      {
        MR_Word check_hlds__clause_to_proc__ModeAndVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__ModesAndVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__Var_39;
        MR_Word check_hlds__clause_to_proc__Vars_40;
        MR_Word check_hlds__clause_to_proc__ArgMode_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__Var0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__ExistConstraints_53;
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66;
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67;
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69;
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80;

        {
          check_hlds__clause_to_proc__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__ArgMode_45);
        }
        if (check_hlds__clause_to_proc__succeeded)
          {
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_95;
            MR_Word check_hlds__clause_to_proc__Context_47;
            MR_Word check_hlds__clause_to_proc__VarType_48;
            MR_Word check_hlds__clause_to_proc__ExtraGoal_49;
            MR_Word check_hlds__clause_to_proc__VarInfo_50;
            MR_String check_hlds__clause_to_proc__InternalName_90;
            MR_String check_hlds__clause_to_proc__ExternalName_91;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92;

            {
              mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_47);
            }
            check_hlds__clause_to_proc__TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, &check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92);
            }
            {
              mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__InternalName_90);
            }
            {
              mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_90, &check_hlds__clause_to_proc__ExternalName_91);
            }
            {
              mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__ExternalName_91, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarType_48);
            }
            {
              hlds__vartypes__add_var_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__VarType_48, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67);
            }
            {
              hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__Context_47, &check_hlds__clause_to_proc__ExtraGoal_49);
            }
            {
              check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_49));
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12));
            }
            {
              hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarInfo_50);
            }
            switch (MR_tag((MR_Word) check_hlds__clause_to_proc__VarInfo_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "rtti_varmaps info not found");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__clause_to_proc__TypeInfoType0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__VarInfo_50, (MR_Integer) 0)));
                  MR_Word check_hlds__clause_to_proc__TypeInfoType_52;
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79;

                  {
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__TypeInfoType0_51, &check_hlds__clause_to_proc__TypeInfoType_52);
                  }
                  {
                    hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__TypeInfoType_52, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79);
                  }
                  {
                    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__TypeInfoType0_51, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
                  check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__clause_to_proc__ExistConstraint_55;
                  MR_Word check_hlds__clause_to_proc__ConstraintArgs_57;
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76;
                  MR_Word check_hlds__clause_to_proc__V_56_56;

                  if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "missing constraint");
                        return;
                      }
                    }
                  else
                    {
                      check_hlds__clause_to_proc__ExistConstraint_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
                      check_hlds__clause_to_proc__ExistConstraints_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
                    }
                  {
                    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(check_hlds__clause_to_proc__ExistConstraint_55, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76);
                  }
                  check_hlds__clause_to_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 0)));
                  check_hlds__clause_to_proc__ConstraintArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 1)));
                  {
                    check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(check_hlds__clause_to_proc__ConstraintArgs_57, check_hlds__clause_to_proc__Var_39, (MR_Integer) 1, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
                }
                break;
            }
          }
        else
          {
            check_hlds__clause_to_proc__Var_39 = check_hlds__clause_to_proc__Var0_46;
            check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
            check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
            check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
            check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
            check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
          }
        {
          check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__ExistConstraints_53, check_hlds__clause_to_proc__ModesAndVars_38, &check_hlds__clause_to_proc__Vars_40, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__clause_to_proc__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__Vars_40));
        }
      }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
  MR_Word check_hlds__clause_to_proc__Subn_14,
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (check_hlds__clause_to_proc__succeeded)
      {
        check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgModes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__clause_to_proc__succeeded)
          check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__clause_to_proc__succeeded)
      {
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35;
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33;
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31;
        *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29;
      }
    else
      {
        MR_Word check_hlds__clause_to_proc__ArgType_21;
        MR_Word check_hlds__clause_to_proc__ArgTypesRest_22;
        MR_Word check_hlds__clause_to_proc__ArgMode_23;
        MR_Word check_hlds__clause_to_proc__ArgModesRest_24;
        MR_Word check_hlds__clause_to_proc__HeadVar0_25;
        MR_Word check_hlds__clause_to_proc__HeadVarsRest0_26;

        check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__clause_to_proc__succeeded)
          {
            check_hlds__clause_to_proc__ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 0)));
            check_hlds__clause_to_proc__ArgTypesRest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 1)));
            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgModes_16)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__clause_to_proc__succeeded)
              {
                check_hlds__clause_to_proc__ArgMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 0)));
                check_hlds__clause_to_proc__ArgModesRest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 1)));
                check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__clause_to_proc__succeeded)
                  {
                    check_hlds__clause_to_proc__HeadVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 0)));
                    check_hlds__clause_to_proc__HeadVarsRest0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 1)));
                  }
              }
          }
        if (check_hlds__clause_to_proc__succeeded)
          {
            MR_Word check_hlds__clause_to_proc__HeadVarsRest_27;
            MR_Word check_hlds__clause_to_proc__HeadVar_28;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
            MR_Word check_hlds__clause_to_proc__InternalType_62;

            {
              check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgTypesRest_22, check_hlds__clause_to_proc__ArgModesRest_24, check_hlds__clause_to_proc__HeadVarsRest0_26, &check_hlds__clause_to_proc__HeadVarsRest_27, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35, &check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39);
            }
            {
              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgType_21, &check_hlds__clause_to_proc__InternalType_62);
            }
            {
              check_hlds__clause_to_proc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__ArgType_21);
            }
            if (check_hlds__clause_to_proc__succeeded)
              {
                check_hlds__clause_to_proc__HeadVar_28 = check_hlds__clause_to_proc__HeadVar0_25;
                *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
              }
            else
              {
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_84;
                MR_Word check_hlds__clause_to_proc__Context_63;
                MR_Word check_hlds__clause_to_proc__Inst_65;
                MR_Word check_hlds__clause_to_proc__ExtraGoal_66;
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67;
                MR_String check_hlds__clause_to_proc__InternalName_79;
                MR_String check_hlds__clause_to_proc__ExternalName_80;
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81;
                MR_Word check_hlds__clause_to_proc__V_64_64;

                {
                  mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_63);
                }
                {
                  hlds__vartypes__update_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67);
                }
                check_hlds__clause_to_proc__TypeCtorInfo_15_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, &check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81);
                }
                {
                  mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__HeadVar0_25, &check_hlds__clause_to_proc__InternalName_79);
                }
                {
                  mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_79, &check_hlds__clause_to_proc__ExternalName_80);
                }
                {
                  mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ExternalName_80, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32);
                }
                {
                  hlds__vartypes__add_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ArgType_21, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34);
                }
                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__ArgMode_23, &check_hlds__clause_to_proc__V_64_64, &check_hlds__clause_to_proc__Inst_65);
                }
                {
                  hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Context_63, &check_hlds__clause_to_proc__ExtraGoal_66);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_66));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39));
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__HeadVar_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__HeadVarsRest_27));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_for_head\'/12", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__clause_to_proc__succeeded;

        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4;
        else
          {
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer check_hlds__clause_to_proc__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__clause_to_proc__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__clause_to_proc__ProcInfo0_16;
            MR_Word check_hlds__clause_to_proc__ProcInfo_17;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;
            MR_Box check_hlds__clause_to_proc__conv0_ProcInfo0_16;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_23_23, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, check_hlds__clause_to_proc__ProcId_13, &check_hlds__clause_to_proc__conv0_ProcInfo0_16);
            }
            check_hlds__clause_to_proc__ProcInfo0_16 = ((MR_Word) check_hlds__clause_to_proc__conv0_ProcInfo0_16);
            {
              check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__PredInfo_2, check_hlds__clause_to_proc__ProcInfo0_16, &check_hlds__clause_to_proc__ProcInfo_17);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_23_23, check_hlds__clause_to_proc__ProcId_13, ((MR_Box) (check_hlds__clause_to_proc__ProcInfo_17)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3 = check_hlds__clause_to_proc__ProcIds_14;
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;

              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4;
              check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
  MR_Word check_hlds__clause_to_proc__PredId_6,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word check_hlds__clause_to_proc__PredInfo0_8;
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_8;
    MR_Word check_hlds__clause_to_proc__Subn_9;
    MR_Word check_hlds__clause_to_proc__PredMarkers_22;
    MR_Word check_hlds__clause_to_proc__V_23_23;

    {
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), &check_hlds__clause_to_proc__conv0_PredInfo0_8);
    }
    check_hlds__clause_to_proc__PredInfo0_8 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_8);
    {
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Subn_9);
    }
    {
      check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__clause_to_proc__Subn_9);
    }
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
    if (check_hlds__clause_to_proc__succeeded)
      {
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredMarkers_22);
        }
        check_hlds__clause_to_proc__V_23_23 = (MR_Integer) 10;
        {
          check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_22, check_hlds__clause_to_proc__V_23_23);
        }
        check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
      }
    if (check_hlds__clause_to_proc__succeeded)
      {
        MR_Word check_hlds__clause_to_proc__Procs0_10;
        MR_Word check_hlds__clause_to_proc__ProcIds_11;
        MR_Word check_hlds__clause_to_proc__Procs_12;
        MR_Word check_hlds__clause_to_proc__PredInfo_13;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Procs0_10);
        }
        {
          check_hlds__clause_to_proc__ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_8);
        }
        {
          check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__PredInfo0_8, check_hlds__clause_to_proc__ProcIds_11, check_hlds__clause_to_proc__Procs0_10, &check_hlds__clause_to_proc__Procs_12);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__clause_to_proc__Procs_12, check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredInfo_13);
        }
        {
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_13)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);
        }
      }
    else
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;

    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__clause_to_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word check_hlds__clause_to_proc__Clause_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__Goal_8;
        MR_Word check_hlds__clause_to_proc__FirstDisjuncts_9;
        MR_Word check_hlds__clause_to_proc__FirstWarnings_10;
        MR_Word check_hlds__clause_to_proc__LaterDisjuncts_11;
        MR_Word check_hlds__clause_to_proc__LaterWarnings_12;
        MR_Word check_hlds__clause_to_proc__V_13_13;
        MR_Word check_hlds__clause_to_proc__V_14_14;
        MR_Word check_hlds__clause_to_proc__V_15_15;
        MR_Word check_hlds__clause_to_proc__V_16_16;

        {
          check_hlds__clause_to_proc__Goal_8 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__clause_to_proc__Clause_4);
        }
        {
          hlds__hlds_goal__goal_to_disj_list_2_p_0(check_hlds__clause_to_proc__Goal_8, &check_hlds__clause_to_proc__FirstDisjuncts_9);
        }
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 0)));
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 1)));
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 2)));
        check_hlds__clause_to_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 3)));
        check_hlds__clause_to_proc__FirstWarnings_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 4)));
        {
          check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__Clauses_5, &check_hlds__clause_to_proc__LaterDisjuncts_11, &check_hlds__clause_to_proc__LaterWarnings_12);
        }
        {
          *check_hlds__clause_to_proc__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__FirstDisjuncts_9, check_hlds__clause_to_proc__LaterDisjuncts_11);
        }
        {
          *check_hlds__clause_to_proc__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__clause_to_proc__FirstWarnings_10, check_hlds__clause_to_proc__LaterWarnings_12);
        }
      }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;

    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__clause_to_proc__Clause_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__MatchingClausesTail_9;
        MR_Word check_hlds__clause_to_proc__ApplicableProcIds_10;
        MR_Word check_hlds__clause_to_proc__V_12_12;
        MR_Word check_hlds__clause_to_proc__V_13_13;
        MR_Word check_hlds__clause_to_proc__V_14_14;
        MR_Word check_hlds__clause_to_proc__V_15_15;

        {
          check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_6, check_hlds__clause_to_proc__ProcId_2, &check_hlds__clause_to_proc__MatchingClausesTail_9);
        }
        check_hlds__clause_to_proc__ApplicableProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 0)));
        check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 1)));
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 2)));
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 3)));
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 4)));
        if ((check_hlds__clause_to_proc__ApplicableProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__clause_to_proc__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
          }
        else
          {
            MR_Word check_hlds__clause_to_proc__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ApplicableProcIds_10, (MR_Integer) 0)));

            {
              check_hlds__clause_to_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__clause_to_proc__ProcId_2)), check_hlds__clause_to_proc__ProcIds_11);
            }
            if (check_hlds__clause_to_proc__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__clause_to_proc__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
              }
            else
              *check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__MatchingClausesTail_9;
          }
      }
  }
}

static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
  MR_Word check_hlds__clause_to_proc__Arg_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
    MR_Word check_hlds__clause_to_proc__Var_6;
    MR_Word check_hlds__clause_to_proc__MaybeNameMode_7;

    {
      check_hlds__clause_to_proc__Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
    {
      check_hlds__clause_to_proc__MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
    if ((check_hlds__clause_to_proc__MaybeNameMode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10;
    else
      {
        MR_String check_hlds__clause_to_proc__Name_8;
        MR_Word check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__MaybeNameMode_7, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__V_9_9;

        check_hlds__clause_to_proc__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 0)));
        check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 1)));
        {
          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__Var_6, check_hlds__clause_to_proc__Name_8, check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11);
        }
      }
    return check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__Goal_2;
        MR_Word check_hlds__clause_to_proc__Goals_3;

        if (check_hlds__clause_to_proc__succeeded)
          {
            check_hlds__clause_to_proc__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__clause_to_proc__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
            {
              MR_Word check_hlds__clause_to_proc__V_4_4;

              {
                check_hlds__clause_to_proc__V_4_4 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__clause_to_proc__Goal_2);
              }
              check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__V_4_4 == (MR_Integer) 0);
              check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
            }
            if (!(check_hlds__clause_to_proc__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__Goals_3;

                  check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__clause_to_proc__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__clause_to_proc__succeeded;

        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3;
        else
          {
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer check_hlds__clause_to_proc__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__clause_to_proc__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__clause_to_proc__Proc0_13;
            MR_Word check_hlds__clause_to_proc__Proc_14;
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;
            MR_Box check_hlds__clause_to_proc__conv0_Proc0_13;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_20_20, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, check_hlds__clause_to_proc__ProcId_9, &check_hlds__clause_to_proc__conv0_Proc0_13);
            }
            check_hlds__clause_to_proc__Proc0_13 = ((MR_Word) check_hlds__clause_to_proc__conv0_Proc0_13);
            {
              check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(check_hlds__clause_to_proc__ProcId_9, check_hlds__clause_to_proc__ClausesInfo_2, check_hlds__clause_to_proc__Proc0_13, &check_hlds__clause_to_proc__Proc_14);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_20_20, check_hlds__clause_to_proc__ProcId_9, ((MR_Box) (check_hlds__clause_to_proc__Proc_14)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ProcIds_10;
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;

              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3;
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
  MR_Word check_hlds__clause_to_proc__PredId_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word check_hlds__clause_to_proc__PredInfo0_6;
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_6;
    MR_Word check_hlds__clause_to_proc__PredMarkers_14;

    {
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), &check_hlds__clause_to_proc__conv0_PredInfo0_6);
    }
    check_hlds__clause_to_proc__PredInfo0_6 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_6);
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredMarkers_14);
    }
    {
      check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_14, (MR_Integer) 10);
    }
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
    if (check_hlds__clause_to_proc__succeeded)
      {
        MR_Word check_hlds__clause_to_proc__PredInfo_7;
        MR_Word check_hlds__clause_to_proc__Procs0_19;
        MR_Word check_hlds__clause_to_proc__ClausesInfo_20;
        MR_Word check_hlds__clause_to_proc__ProcIds_21;
        MR_Word check_hlds__clause_to_proc__Procs_22;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__Procs0_19);
        }
        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__ClausesInfo_20);
        }
        {
          check_hlds__clause_to_proc__ProcIds_21 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_6);
        }
        {
          check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(check_hlds__clause_to_proc__ProcIds_21, check_hlds__clause_to_proc__ClausesInfo_20, check_hlds__clause_to_proc__Procs0_19, &check_hlds__clause_to_proc__Procs_22);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__clause_to_proc__Procs_22, check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredInfo_7);
        }
        {
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_7)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);
        }
      }
    else
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
  MR_Word check_hlds__clause_to_proc__PredInfo_6,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_49)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_61_61;
    MR_Word check_hlds__clause_to_proc__TypeInfo_65_65;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_66_66;
    MR_Word check_hlds__clause_to_proc__ArgTypes_8;
    MR_Word check_hlds__clause_to_proc__Subn_9;
    MR_Word check_hlds__clause_to_proc__PredConstraints_10;
    MR_Integer check_hlds__clause_to_proc__OrigArity_11;
    MR_Integer check_hlds__clause_to_proc__NumExtraHeadVars_12;
    MR_Word check_hlds__clause_to_proc__VarSet0_13;
    MR_Word check_hlds__clause_to_proc__VarTypes0_14;
    MR_Word check_hlds__clause_to_proc__HeadVars0_15;
    MR_Word check_hlds__clause_to_proc__Body0_16;
    MR_Word check_hlds__clause_to_proc__RttiVarMaps0_17;
    MR_Word check_hlds__clause_to_proc__ArgModes_18;
    MR_Word check_hlds__clause_to_proc__OrigArgTypes_24;
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars1_25;
    MR_Word check_hlds__clause_to_proc__OrigHeadVars1_26;
    MR_Word check_hlds__clause_to_proc__ExtraArgModes_27;
    MR_Word check_hlds__clause_to_proc__OrigArgModes_28;
    MR_Word check_hlds__clause_to_proc__OrigHeadVars_29;
    MR_Word check_hlds__clause_to_proc__VarSet1_30;
    MR_Word check_hlds__clause_to_proc__VarTypes1_31;
    MR_Word check_hlds__clause_to_proc__ExistsCastHeadGoals_32;
    MR_Word check_hlds__clause_to_proc__ExistConstraints_33;
    MR_Word check_hlds__clause_to_proc__ExtraModesAndVars_34;
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars_35;
    MR_Word check_hlds__clause_to_proc__VarSet_36;
    MR_Word check_hlds__clause_to_proc__VarTypes_37;
    MR_Word check_hlds__clause_to_proc__RttiVarMaps_38;
    MR_Word check_hlds__clause_to_proc__ExistsCastExtraGoals_39;
    MR_Word check_hlds__clause_to_proc__GoalInfo0_41;
    MR_Word check_hlds__clause_to_proc__Goals0_42;
    MR_Word check_hlds__clause_to_proc__Goals_43;
    MR_Word check_hlds__clause_to_proc__HeadVars_44;
    MR_Word check_hlds__clause_to_proc__NonLocals_45;
    MR_Word check_hlds__clause_to_proc__GoalInfo_46;
    MR_Word check_hlds__clause_to_proc__Body_47;
    MR_Integer check_hlds__clause_to_proc__V_50_50;
    MR_Word check_hlds__clause_to_proc__V_56_56;
    MR_Word check_hlds__clause_to_proc__V_57_57;
    MR_Word check_hlds__clause_to_proc__OrigArgTypes0_19;
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars0_20;
    MR_Word check_hlds__clause_to_proc__OrigHeadVars0_21;
    MR_Word check_hlds__clause_to_proc__ExtraArgModes0_22;
    MR_Word check_hlds__clause_to_proc__OrigArgModes0_23;
    MR_Word check_hlds__clause_to_proc__TypeInfo_62_62;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_63_63;
    MR_Word check_hlds__clause_to_proc__V_60_60;
    MR_Word check_hlds__clause_to_proc__V_40_40;

    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__ArgTypes_8);
    }
    {
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__Subn_9);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__PredConstraints_10);
    }
    {
      check_hlds__clause_to_proc__OrigArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__clause_to_proc__PredInfo_6);
    }
    check_hlds__clause_to_proc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      check_hlds__clause_to_proc__V_50_50 = mercury__list__length_1_f_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__ArgTypes_8);
    }
    check_hlds__clause_to_proc__NumExtraHeadVars_12 = (check_hlds__clause_to_proc__V_50_50 - check_hlds__clause_to_proc__OrigArity_11);
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarSet0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarTypes0_14);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__HeadVars0_15);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__Body0_16);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__RttiVarMaps0_17);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__ArgModes_18);
    }
    {
      check_hlds__clause_to_proc__succeeded = mercury__list__drop_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgTypes_8, &check_hlds__clause_to_proc__OrigArgTypes0_19);
    }
    if (check_hlds__clause_to_proc__succeeded)
      {
        check_hlds__clause_to_proc__TypeInfo_62_62 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
        {
          check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeInfo_62_62, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__HeadVars0_15, &check_hlds__clause_to_proc__ExtraHeadVars0_20, &check_hlds__clause_to_proc__OrigHeadVars0_21);
        }
        if (check_hlds__clause_to_proc__succeeded)
          {
            check_hlds__clause_to_proc__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_63_63, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgModes_18, &check_hlds__clause_to_proc__ExtraArgModes0_22, &check_hlds__clause_to_proc__OrigArgModes0_23);
            }
          }
      }
    if (check_hlds__clause_to_proc__succeeded)
      {
        check_hlds__clause_to_proc__OrigArgTypes_24 = check_hlds__clause_to_proc__OrigArgTypes0_19;
        check_hlds__clause_to_proc__ExtraHeadVars1_25 = check_hlds__clause_to_proc__ExtraHeadVars0_20;
        check_hlds__clause_to_proc__OrigHeadVars1_26 = check_hlds__clause_to_proc__OrigHeadVars0_21;
        check_hlds__clause_to_proc__ExtraArgModes_27 = check_hlds__clause_to_proc__ExtraArgModes0_22;
        check_hlds__clause_to_proc__OrigArgModes_28 = check_hlds__clause_to_proc__OrigArgModes0_23;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
          return;
        }
      }
    {
      check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__OrigArgTypes_24, check_hlds__clause_to_proc__OrigArgModes_28, check_hlds__clause_to_proc__OrigHeadVars1_26, &check_hlds__clause_to_proc__OrigHeadVars_29, check_hlds__clause_to_proc__VarSet0_13, &check_hlds__clause_to_proc__VarSet1_30, check_hlds__clause_to_proc__VarTypes0_14, &check_hlds__clause_to_proc__VarTypes1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastHeadGoals_32);
    }
    check_hlds__clause_to_proc__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 0)));
    check_hlds__clause_to_proc__ExistConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 1)));
    check_hlds__clause_to_proc__TypeInfo_65_65 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraArgModes_27, check_hlds__clause_to_proc__ExtraHeadVars1_25, &check_hlds__clause_to_proc__ExtraModesAndVars_34);
    }
    {
      check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__ExistConstraints_33, check_hlds__clause_to_proc__ExtraModesAndVars_34, &check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__VarSet1_30, &check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes1_31, &check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__RttiVarMaps0_17, &check_hlds__clause_to_proc__RttiVarMaps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
    check_hlds__clause_to_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 0)));
    check_hlds__clause_to_proc__GoalInfo0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__clause_to_proc__Body0_16, &check_hlds__clause_to_proc__Goals0_42);
    }
    check_hlds__clause_to_proc__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      check_hlds__clause_to_proc__V_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__ExistsCastHeadGoals_32, check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
    {
      check_hlds__clause_to_proc__Goals_43 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__Goals0_42, check_hlds__clause_to_proc__V_56_56);
    }
    {
      check_hlds__clause_to_proc__HeadVars_44 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__OrigHeadVars_29);
    }
    {
      check_hlds__clause_to_proc__NonLocals_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__HeadVars_44);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocals_45, check_hlds__clause_to_proc__GoalInfo0_41, &check_hlds__clause_to_proc__GoalInfo_46);
    }
    {
      check_hlds__clause_to_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 2) = ((MR_Box) (check_hlds__clause_to_proc__Goals_43));
    }
    {
      check_hlds__clause_to_proc__Body_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_57_57));
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_46));
    }
    {
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__HeadVars_44, check_hlds__clause_to_proc__Body_47, check_hlds__clause_to_proc__RttiVarMaps_38, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_49);
    }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
{
  {
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15;

    {
      check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15);
    }
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(
  MR_Word check_hlds__clause_to_proc__PredIds_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
    MR_Word check_hlds__clause_to_proc__PredTable_7;
    MR_Word check_hlds__clause_to_proc__V_10_10;
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
    {
      check_hlds__clause_to_proc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 1) = ((MR_Box) (check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 3) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], check_hlds__clause_to_proc__V_10_10, check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
    }
  }
}

void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(
  MR_Word check_hlds__clause_to_proc__PredInfo0_4,
  MR_Word * check_hlds__clause_to_proc__PredInfo_5,
  MR_Word * check_hlds__clause_to_proc__MaybeProcId_6)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__Procs0_7;
    MR_Word check_hlds__clause_to_proc__PredOrFunc_8;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_29_29;
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_30_30;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_4, &check_hlds__clause_to_proc__Procs0_7);
    }
    {
      check_hlds__clause_to_proc__PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__clause_to_proc__PredInfo0_4);
    }
    check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__PredOrFunc_8 == (MR_Integer) 1);
    if (check_hlds__clause_to_proc__succeeded)
      {
        check_hlds__clause_to_proc__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        check_hlds__clause_to_proc__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        {
          check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0(check_hlds__clause_to_proc__TypeCtorInfo_29_29, check_hlds__clause_to_proc__TypeCtorInfo_30_30, check_hlds__clause_to_proc__Procs0_7);
        }
      }
    if (check_hlds__clause_to_proc__succeeded)
      {
        MR_Word check_hlds__clause_to_proc__TypeCtorInfo_31_31;
        MR_Integer check_hlds__clause_to_proc__PredArity_9;
        MR_Integer check_hlds__clause_to_proc__FuncArity_10;
        MR_Word check_hlds__clause_to_proc__InMode_11;
        MR_Word check_hlds__clause_to_proc__FuncArgModes_13;
        MR_Word check_hlds__clause_to_proc__FuncRetMode_14;
        MR_Word check_hlds__clause_to_proc__PredArgModes_15;
        MR_Word check_hlds__clause_to_proc__Context_17;
        MR_Word check_hlds__clause_to_proc__InstVarSet_19;
        MR_Integer check_hlds__clause_to_proc__ProcId_21;
        MR_Word check_hlds__clause_to_proc__V_23_23;
        MR_Word check_hlds__clause_to_proc__V_25_25;

        {
          check_hlds__clause_to_proc__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__clause_to_proc__PredInfo0_4);
        }
        check_hlds__clause_to_proc__FuncArity_10 = (check_hlds__clause_to_proc__PredArity_9 - (MR_Integer) 1);
        {
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__clause_to_proc__InMode_11);
        }
        {
          parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__clause_to_proc__FuncRetMode_14);
        }
        check_hlds__clause_to_proc__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__duplicate_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_31_31, check_hlds__clause_to_proc__FuncArity_10, ((MR_Box) (check_hlds__clause_to_proc__InMode_11)), &check_hlds__clause_to_proc__FuncArgModes_13);
        }
        {
          check_hlds__clause_to_proc__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_23_23, 0) = ((MR_Box) (check_hlds__clause_to_proc__FuncRetMode_14));
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__list__append_3_p_1(check_hlds__clause_to_proc__TypeCtorInfo_31_31, check_hlds__clause_to_proc__FuncArgModes_13, check_hlds__clause_to_proc__V_23_23, &check_hlds__clause_to_proc__PredArgModes_15);
        }
        {
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__clause_to_proc__PredInfo0_4, &check_hlds__clause_to_proc__Context_17);
        }
        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &check_hlds__clause_to_proc__InstVarSet_19);
        }
        {
          check_hlds__clause_to_proc__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_25_25, 0) = ((MR_Box) (check_hlds__clause_to_proc__PredArgModes_15));
        }
        {
          hlds__make_hlds__add_new_proc_13_p_0(check_hlds__clause_to_proc__InstVarSet_19, check_hlds__clause_to_proc__PredArity_9, check_hlds__clause_to_proc__PredArgModes_15, check_hlds__clause_to_proc__V_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__clause_to_proc_scalar_common_5[0]), check_hlds__clause_to_proc__Context_17, (MR_Integer) 1, (MR_Integer) 1, check_hlds__clause_to_proc__PredInfo0_4, check_hlds__clause_to_proc__PredInfo_5, &check_hlds__clause_to_proc__ProcId_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__clause_to_proc__MaybeProcId_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ProcId_21));
        }
      }
    else
      {
        *check_hlds__clause_to_proc__PredInfo_5 = check_hlds__clause_to_proc__PredInfo0_4;
        *check_hlds__clause_to_proc__MaybeProcId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
  MR_Word check_hlds__clause_to_proc__HeadVar__2_2,
  MR_Word * check_hlds__clause_to_proc__Preds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__clause_to_proc__succeeded;

        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__clause_to_proc__Preds_3 = check_hlds__clause_to_proc__HeadVar__2_2;
        else
          {
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            MR_Word check_hlds__clause_to_proc__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__clause_to_proc__PredIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__clause_to_proc__PredInfo0_9;
            MR_Word check_hlds__clause_to_proc__PredInfo_10;
            MR_Word check_hlds__clause_to_proc__Preds1_12;
            MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_9;
            MR_Word check_hlds__clause_to_proc__V_11_11;

            {
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_13_13, check_hlds__clause_to_proc__TypeCtorInfo_14_14, check_hlds__clause_to_proc__HeadVar__2_2, ((MR_Box) (check_hlds__clause_to_proc__PredId_5)), &check_hlds__clause_to_proc__conv0_PredInfo0_9);
            }
            check_hlds__clause_to_proc__PredInfo0_9 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_9);
            {
              check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(check_hlds__clause_to_proc__PredInfo0_9, &check_hlds__clause_to_proc__PredInfo_10, &check_hlds__clause_to_proc__V_11_11);
            }
            {
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_13_13, check_hlds__clause_to_proc__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__clause_to_proc__PredId_5)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_10)), check_hlds__clause_to_proc__HeadVar__2_2, &check_hlds__clause_to_proc__Preds1_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__PredIds_6;
              MR_Word check_hlds__clause_to_proc__HeadVar__2__tmp_copy_2 = check_hlds__clause_to_proc__Preds1_12;

              check_hlds__clause_to_proc__HeadVar__2_2 = check_hlds__clause_to_proc__HeadVar__2__tmp_copy_2;
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
{
  {
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv6_HeadVar__3_3;

    {
      check_hlds__clause_to_proc__conv6_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv6_HeadVar__3_3));
    return check_hlds__clause_to_proc__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv5_HeadVar__2_2;

    {
      check_hlds__clause_to_proc__conv5_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv5_HeadVar__2_2));
    return check_hlds__clause_to_proc__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
  MR_Box check_hlds__clause_to_proc__closure_arg)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

    {
      check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__217__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
    return check_hlds__clause_to_proc__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
  MR_Box check_hlds__clause_to_proc__closure_arg)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

    {
      check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__216__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
    return check_hlds__clause_to_proc__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
{
  {
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11;

    {
      check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__set_arg_names_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11));
    return check_hlds__clause_to_proc__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
{
  {
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv1_HeadVar__3_3;

    {
      check_hlds__clause_to_proc__conv1_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv1_HeadVar__3_3));
    return check_hlds__clause_to_proc__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
{
  {
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv0_HeadVar__2_2;

    {
      check_hlds__clause_to_proc__conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv0_HeadVar__2_2));
    return check_hlds__clause_to_proc__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(
  MR_Integer check_hlds__clause_to_proc__ProcId_5,
  MR_Word check_hlds__clause_to_proc__ClausesInfo_6,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_80,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 0)));
    MR_Word check_hlds__clause_to_proc__VarTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 3)));
    MR_Word check_hlds__clause_to_proc__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 4)));
    MR_Word check_hlds__clause_to_proc__ClausesRep0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 5)));
    MR_Word check_hlds__clause_to_proc__RttiInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 7)));
    MR_Word check_hlds__clause_to_proc__Clauses_18;
    MR_Word check_hlds__clause_to_proc__MatchingClauses_19;
    MR_Word check_hlds__clause_to_proc__ClausesDisjuncts_20;
    MR_Word check_hlds__clause_to_proc__StateVarWarnings_21;
    MR_Word check_hlds__clause_to_proc__VarSet_34;
    MR_Word check_hlds__clause_to_proc__Goal_65;
    MR_Word check_hlds__clause_to_proc__HeadVarList_79;
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Proc_82_82;
    MR_Word check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 1)));
    MR_Word check_hlds__clause_to_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 2)));
    MR_Word check_hlds__clause_to_proc___ItemNumbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 6)));
    MR_Word check_hlds__clause_to_proc___HaveForeignClauses_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 8)));
    MR_Word check_hlds__clause_to_proc___HadSyntaxError_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 9)));

    {
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__clause_to_proc__ClausesRep0_13, &check_hlds__clause_to_proc__Clauses_18);
    }
    {
      check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_18, check_hlds__clause_to_proc__ProcId_5, &check_hlds__clause_to_proc__MatchingClauses_19);
    }
    {
      check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__MatchingClauses_19, &check_hlds__clause_to_proc__ClausesDisjuncts_20, &check_hlds__clause_to_proc__StateVarWarnings_21);
    }
    if ((check_hlds__clause_to_proc__StateVarWarnings_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__clause_to_proc__STATE_VARIABLE_Proc_82_82 = check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_80;
    else
      {
        hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(check_hlds__clause_to_proc__StateVarWarnings_21, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_80, &check_hlds__clause_to_proc__STATE_VARIABLE_Proc_82_82);
      }
    if ((check_hlds__clause_to_proc__ClausesDisjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__clause_to_proc__Context_71;
        MR_Word check_hlds__clause_to_proc__GoalInfo0_72;
        MR_Word check_hlds__clause_to_proc__GoalInfo1_73;
        MR_Word check_hlds__clause_to_proc__NonLocalVars_74;
        MR_Word check_hlds__clause_to_proc__GoalInfo2_75;
        MR_Word check_hlds__clause_to_proc__GoalInfo_78;
        MR_Word check_hlds__clause_to_proc__V_84_84;
        MR_Word check_hlds__clause_to_proc__V_88_88;

        {
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_Proc_82_82, &check_hlds__clause_to_proc__Context_71);
        }
        check_hlds__clause_to_proc__VarSet_34 = check_hlds__clause_to_proc__VarSet0_8;
        {
          hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_72);
        }
        {
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_71, check_hlds__clause_to_proc__GoalInfo0_72, &check_hlds__clause_to_proc__GoalInfo1_73);
        }
        {
          check_hlds__clause_to_proc__V_84_84 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
        }
        {
          check_hlds__clause_to_proc__NonLocalVars_74 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_84_84);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_74, check_hlds__clause_to_proc__GoalInfo1_73, &check_hlds__clause_to_proc__GoalInfo2_75);
        }
        {
          check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_20);
        }
        if (check_hlds__clause_to_proc__succeeded)
          {
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
            MR_Word check_hlds__clause_to_proc__PurityList_76;
            MR_Word check_hlds__clause_to_proc__Purity_77;
            MR_Box check_hlds__clause_to_proc__conv2_Purity_77;

            {
              check_hlds__clause_to_proc__PurityList_76 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_112_112, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[2], check_hlds__clause_to_proc__ClausesDisjuncts_20);
            }
            {
              check_hlds__clause_to_proc__conv2_Purity_77 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_112_112, check_hlds__clause_to_proc__TypeCtorInfo_112_112, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[3], check_hlds__clause_to_proc__PurityList_76, ((MR_Box) ((MR_Integer) 0)));
            }
            check_hlds__clause_to_proc__Purity_77 = ((MR_Word) check_hlds__clause_to_proc__conv2_Purity_77);
            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_77, check_hlds__clause_to_proc__GoalInfo2_75, &check_hlds__clause_to_proc__GoalInfo_78);
            }
          }
        else
          check_hlds__clause_to_proc__GoalInfo_78 = check_hlds__clause_to_proc__GoalInfo2_75;
        {
          check_hlds__clause_to_proc__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_88_88, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_20));
        }
        {
          check_hlds__clause_to_proc__Goal_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_65, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_88_88));
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_65, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_78));
        }
      }
    else
      {
        MR_Word check_hlds__clause_to_proc__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_20, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_20, (MR_Integer) 0)));
        MR_Word check_hlds__clause_to_proc__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_173_173, (MR_Integer) 1)));
        MR_Word check_hlds__clause_to_proc__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_173_173, (MR_Integer) 0)));

        if ((check_hlds__clause_to_proc__V_172_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            switch (MR_tag((MR_Word) check_hlds__clause_to_proc__V_175_175)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__clause_to_proc__VarSet_34 = check_hlds__clause_to_proc__VarSet0_8;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                check_hlds__clause_to_proc__VarSet_34 = check_hlds__clause_to_proc__VarSet0_8;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    check_hlds__clause_to_proc__VarSet_34 = check_hlds__clause_to_proc__VarSet0_8;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__clause_to_proc__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 4)));
                      MR_Word check_hlds__clause_to_proc__ExtraArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 5)));
                      MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 6)));
                      MR_Word check_hlds__clause_to_proc__V_91_91;
                      MR_Word check_hlds__clause_to_proc__V_96_96;
                      MR_Word check_hlds__clause_to_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 1)));
                      MR_Word check_hlds__clause_to_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 2)));
                      MR_Integer check_hlds__clause_to_proc__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 3)));
                      MR_Word check_hlds__clause_to_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_175_175, (MR_Integer) 7)));
                      MR_Box check_hlds__clause_to_proc__conv4_VarSet_34;

                      {
                        check_hlds__clause_to_proc__conv4_VarSet_34 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[4], check_hlds__clause_to_proc__Args_30, ((MR_Box) (check_hlds__clause_to_proc__VarSet0_8)));
                      }
                      check_hlds__clause_to_proc__VarSet_34 = ((MR_Word) check_hlds__clause_to_proc__conv4_VarSet_34);
                      {
                        check_hlds__clause_to_proc__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_91_91, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[1]));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_91_91, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_91_91, 3) = ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_31));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_91_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_91_91, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "extra_args");
                      }
                      {
                        check_hlds__clause_to_proc__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_96_96, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[2]));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_96_96, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_96_96, 3) = ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_32));
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_96_96, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_96_96, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "trace runtime cond");
                      }
                    }
                    break;
                }
                break;
            }
            check_hlds__clause_to_proc__Goal_65 = check_hlds__clause_to_proc__V_173_173;
          }
        else
          {
            MR_Word check_hlds__clause_to_proc__Context_138;
            MR_Word check_hlds__clause_to_proc__GoalInfo0_139;
            MR_Word check_hlds__clause_to_proc__GoalInfo1_140;
            MR_Word check_hlds__clause_to_proc__NonLocalVars_141;
            MR_Word check_hlds__clause_to_proc__GoalInfo2_142;
            MR_Word check_hlds__clause_to_proc__GoalInfo_145;
            MR_Word check_hlds__clause_to_proc__V_146_146;
            MR_Word check_hlds__clause_to_proc__V_150_150;

            {
              check_hlds__clause_to_proc__Context_138 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__clause_to_proc__V_174_174);
            }
            check_hlds__clause_to_proc__VarSet_34 = check_hlds__clause_to_proc__VarSet0_8;
            {
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_139);
            }
            {
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_138, check_hlds__clause_to_proc__GoalInfo0_139, &check_hlds__clause_to_proc__GoalInfo1_140);
            }
            {
              check_hlds__clause_to_proc__V_146_146 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
            }
            {
              check_hlds__clause_to_proc__NonLocalVars_141 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_146_146);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_141, check_hlds__clause_to_proc__GoalInfo1_140, &check_hlds__clause_to_proc__GoalInfo2_142);
            }
            {
              check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_20);
            }
            if (check_hlds__clause_to_proc__succeeded)
              {
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_112_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
                MR_Word check_hlds__clause_to_proc__PurityList_124;
                MR_Word check_hlds__clause_to_proc__Purity_125;
                MR_Box check_hlds__clause_to_proc__conv7_Purity_125;

                {
                  check_hlds__clause_to_proc__PurityList_124 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_112_130, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[5], check_hlds__clause_to_proc__ClausesDisjuncts_20);
                }
                {
                  check_hlds__clause_to_proc__conv7_Purity_125 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_112_130, check_hlds__clause_to_proc__TypeCtorInfo_112_130, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[6], check_hlds__clause_to_proc__PurityList_124, ((MR_Box) ((MR_Integer) 0)));
                }
                check_hlds__clause_to_proc__Purity_125 = ((MR_Word) check_hlds__clause_to_proc__conv7_Purity_125);
                {
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_125, check_hlds__clause_to_proc__GoalInfo2_142, &check_hlds__clause_to_proc__GoalInfo_145);
                }
              }
            else
              check_hlds__clause_to_proc__GoalInfo_145 = check_hlds__clause_to_proc__GoalInfo2_142;
            {
              check_hlds__clause_to_proc__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_150_150, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_20));
            }
            {
              check_hlds__clause_to_proc__Goal_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_65, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_150_150));
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_65, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_145));
            }
          }
      }
    {
      check_hlds__clause_to_proc__HeadVarList_79 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
    }
    {
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_34, check_hlds__clause_to_proc__VarTypes_11, check_hlds__clause_to_proc__HeadVarList_79, check_hlds__clause_to_proc__Goal_65, check_hlds__clause_to_proc__RttiInfo_15, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_82_82, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81);
    }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
  MR_Box check_hlds__clause_to_proc__closure_arg,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
{
  {
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9;

    {
      check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9);
    }
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(
  MR_Word check_hlds__clause_to_proc__PredIds_4,
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool check_hlds__clause_to_proc__succeeded;
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
    MR_Word check_hlds__clause_to_proc__PredTable_7;
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[1], check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
    }
  }
}

void mercury__check_hlds__clause_to_proc__init(void)
{
}

void mercury__check_hlds__clause_to_proc__init_type_tables(void)
{
}

void mercury__check_hlds__clause_to_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.clause_to_proc. */
