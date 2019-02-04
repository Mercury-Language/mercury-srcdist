/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version rotd-2017-12-14
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.clause_to_proc.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_hlds.mih"
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
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__220__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_32,
  MR_Word HeadVar__2_100);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__219__1_2_p_0(
  MR_Word ExtraArgs_31,
  MR_Word HeadVar__2_95);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_14,
  MR_Word * STATE_VARIABLE_PredTable_15);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Procs_0_4,
  MR_Word * STATE_VARIABLE_Procs_5);

static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_Vars_0_10);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredTable_0_8,
  MR_Word * STATE_VARIABLE_PredTable_9);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ClausesInfo_2,
  MR_Word STATE_VARIABLE_Procs_0_3,
  MR_Word * STATE_VARIABLE_Procs_4);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11,
  MR_Word STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * STATE_VARIABLE_ExtraGoals_13);

static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Integer Num_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Subn_14,
  MR_Word ArgTypes_15,
  MR_Word ArgModes_16,
  MR_Word STATE_VARIABLE_HeadVars_0_29,
  MR_Word * STATE_VARIABLE_HeadVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * STATE_VARIABLE_ExtraGoals_36);

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ProcId_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


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
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__220__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_32,
  MR_Word HeadVar__2_100)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[3], ((MR_Box) (MaybeTraceRuntimeCond_32)), ((MR_Box) (HeadVar__2_100)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__219__1_2_p_0(
  MR_Word ExtraArgs_31,
  MR_Word HeadVar__2_95)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[1], ((MR_Box) (ExtraArgs_31)), ((MR_Box) (HeadVar__2_95)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_14,
  MR_Word * STATE_VARIABLE_PredTable_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word PredInfo0_8;
    MR_Box conv0_PredInfo0_8;
    MR_Word Subn_9;
    MR_Word PredMarkers_22;
    MR_Word Var_23;

    mercury__map__lookup_3_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, STATE_VARIABLE_PredTable_0_14, ((MR_Box) (PredId_6)), &conv0_PredInfo0_8);
    PredInfo0_8 = ((MR_Word) conv0_PredInfo0_8);
    hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(PredInfo0_8, &Subn_9);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Subn_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_8, &PredMarkers_22);
      Var_23 = (MR_Integer) 11;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_22, Var_23);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Procs0_10;
      MR_Word ProcIds_11;
      MR_Word Procs_12;
      MR_Word PredInfo_13;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &Procs0_10);
      ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_8);
      check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(ModuleInfo_5, PredInfo0_8, ProcIds_11, Procs0_10, &Procs_12);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_12, PredInfo0_8, &PredInfo_13);
      mercury__map__det_update_4_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_13)), STATE_VARIABLE_PredTable_0_14, STATE_VARIABLE_PredTable_15);
    }
    else
      *STATE_VARIABLE_PredTable_15 = STATE_VARIABLE_PredTable_0_14;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Procs_0_4,
  MR_Word * STATE_VARIABLE_Procs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Procs_5 = STATE_VARIABLE_Procs_0_4;
    else
    {
      MR_Word TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      MR_Word TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      MR_Integer ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ProcInfo0_16;
      MR_Word ProcInfo_17;
      MR_Word STATE_VARIABLE_Procs_20_20;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Procs_0_4;

      mercury__map__lookup_3_p_0(TypeCtorInfo_22_22, TypeCtorInfo_23_23, STATE_VARIABLE_Procs_0_4, ((MR_Box) (ProcId_13)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) conv0_ProcInfo0_16);
      check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(ModuleInfo_1, PredInfo_2, ProcInfo0_16, &ProcInfo_17);
      mercury__map__det_update_4_p_0(TypeCtorInfo_22_22, TypeCtorInfo_23_23, ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_Procs_0_4, &STATE_VARIABLE_Procs_20_20);
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_Procs_0_4 = STATE_VARIABLE_Procs_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Procs_0_4 = next_value_of_STATE_VARIABLE_Procs_0_4;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_Vars_0_10)
{
  {
    MR_Word STATE_VARIABLE_Vars_11;
    MR_Word Var_6;
    MR_Word MaybeNameMode_7;

    Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(Arg_4);
    MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(Arg_4);
    if ((MaybeNameMode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Vars_11 = STATE_VARIABLE_Vars_0_10;
    else
    {
      MR_String Name_8;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameMode_7, (MR_Integer) 0)));
      MR_Word Var_9;

      Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
      mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_6, Name_8, STATE_VARIABLE_Vars_0_10, &STATE_VARIABLE_Vars_11);
    }
    return STATE_VARIABLE_Vars_11;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredTable_0_8,
  MR_Word * STATE_VARIABLE_PredTable_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    MR_Word PredInfo0_6;
    MR_Box conv0_PredInfo0_6;
    MR_Word PredMarkers_14;

    mercury__map__lookup_3_p_0(TypeCtorInfo_11_11, TypeCtorInfo_12_12, STATE_VARIABLE_PredTable_0_8, ((MR_Box) (PredId_4)), &conv0_PredInfo0_6);
    PredInfo0_6 = ((MR_Word) conv0_PredInfo0_6);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_6, &PredMarkers_14);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_14, (MR_Integer) 11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word PredInfo_7;
      MR_Word Procs0_19;
      MR_Word ClausesInfo_20;
      MR_Word ProcIds_21;
      MR_Word Procs_22;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &Procs0_19);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_6, &ClausesInfo_20);
      ProcIds_21 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_6);
      check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(ProcIds_21, ClausesInfo_20, Procs0_19, &Procs_22);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_22, PredInfo0_6, &PredInfo_7);
      mercury__map__det_update_4_p_0(TypeCtorInfo_11_11, TypeCtorInfo_12_12, ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_7)), STATE_VARIABLE_PredTable_0_8, STATE_VARIABLE_PredTable_9);
    }
    else
      *STATE_VARIABLE_PredTable_9 = STATE_VARIABLE_PredTable_0_8;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ClausesInfo_2,
  MR_Word STATE_VARIABLE_Procs_0_3,
  MR_Word * STATE_VARIABLE_Procs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Procs_4 = STATE_VARIABLE_Procs_0_3;
    else
    {
      MR_Word TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      MR_Word TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      MR_Integer ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Proc0_13;
      MR_Word Proc_14;
      MR_Word STATE_VARIABLE_Procs_17_17;
      MR_Box conv0_Proc0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Procs_0_3;

      mercury__map__lookup_3_p_0(TypeCtorInfo_19_19, TypeCtorInfo_20_20, STATE_VARIABLE_Procs_0_3, ((MR_Box) (ProcId_9)), &conv0_Proc0_13);
      Proc0_13 = ((MR_Word) conv0_Proc0_13);
      check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(ProcId_9, ClausesInfo_2, Proc0_13, &Proc_14);
      mercury__map__det_update_4_p_0(TypeCtorInfo_19_19, TypeCtorInfo_20_20, ((MR_Box) (ProcId_9)), ((MR_Box) (Proc_14)), STATE_VARIABLE_Procs_0_3, &STATE_VARIABLE_Procs_17_17);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ProcIds_10;
      next_value_of_STATE_VARIABLE_Procs_0_3 = STATE_VARIABLE_Procs_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Procs_0_3 = next_value_of_STATE_VARIABLE_Procs_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_61_61;
    MR_Word TypeInfo_65_65;
    MR_Word TypeCtorInfo_66_66;
    MR_Word ArgTypes_8;
    MR_Word Subn_9;
    MR_Word PredConstraints_10;
    MR_Integer OrigArity_11;
    MR_Integer NumExtraHeadVars_12;
    MR_Word VarSet0_13;
    MR_Word VarTypes0_14;
    MR_Word HeadVars0_15;
    MR_Word Body0_16;
    MR_Word RttiVarMaps0_17;
    MR_Word ArgModes_18;
    MR_Word OrigArgTypes_24;
    MR_Word ExtraHeadVars1_25;
    MR_Word OrigHeadVars1_26;
    MR_Word ExtraArgModes_27;
    MR_Word OrigArgModes_28;
    MR_Word OrigHeadVars_29;
    MR_Word VarSet1_30;
    MR_Word VarTypes1_31;
    MR_Word ExistsCastHeadGoals_32;
    MR_Word ExistConstraints_33;
    MR_Word ExtraModesAndVars_34;
    MR_Word ExtraHeadVars_35;
    MR_Word VarSet_36;
    MR_Word VarTypes_37;
    MR_Word RttiVarMaps_38;
    MR_Word ExistsCastExtraGoals_39;
    MR_Word GoalInfo0_41;
    MR_Word Goals0_42;
    MR_Word Goals_43;
    MR_Word HeadVars_44;
    MR_Word NonLocals_45;
    MR_Word GoalInfo_46;
    MR_Word Body_47;
    MR_Integer Var_50;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word OrigArgTypes0_19;
    MR_Word ExtraHeadVars0_20;
    MR_Word OrigHeadVars0_21;
    MR_Word ExtraArgModes0_22;
    MR_Word OrigArgModes0_23;
    MR_Word TypeInfo_62_62;
    MR_Word TypeCtorInfo_63_63;
    MR_Word Var_60;
    MR_Word Var_40;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &ArgTypes_8);
    hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(PredInfo_6, &Subn_9);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &PredConstraints_10);
    OrigArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
    TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    Var_50 = mercury__list__length_1_f_0(TypeCtorInfo_61_61, ArgTypes_8);
    NumExtraHeadVars_12 = (Var_50 - OrigArity_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &VarSet0_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &VarTypes0_14);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &HeadVars0_15);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &Body0_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &RttiVarMaps0_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &ArgModes_18);
    succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_61_61, NumExtraHeadVars_12, ArgTypes_8, &OrigArgTypes0_19);
    if (succeeded)
    {
      TypeInfo_62_62 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
      succeeded = mercury__list__split_list_4_p_0(TypeInfo_62_62, NumExtraHeadVars_12, HeadVars0_15, &ExtraHeadVars0_20, &OrigHeadVars0_21);
      if (succeeded)
      {
        TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        succeeded = mercury__list__split_list_4_p_0(TypeCtorInfo_63_63, NumExtraHeadVars_12, ArgModes_18, &ExtraArgModes0_22, &OrigArgModes0_23);
      }
    }
    if (succeeded)
    {
      OrigArgTypes_24 = OrigArgTypes0_19;
      ExtraHeadVars1_25 = ExtraHeadVars0_20;
      OrigHeadVars1_26 = OrigHeadVars0_21;
      ExtraArgModes_27 = ExtraArgModes0_22;
      OrigArgModes_28 = OrigArgModes0_23;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
        return;
      }
    }
    check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(ModuleInfo_5, Subn_9, OrigArgTypes_24, OrigArgModes_28, OrigHeadVars1_26, &OrigHeadVars_29, VarSet0_13, &VarSet1_30, VarTypes0_14, &VarTypes1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ExistsCastHeadGoals_32);
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredConstraints_10, (MR_Integer) 0)));
    ExistConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredConstraints_10, (MR_Integer) 1)));
    TypeInfo_65_65 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, TypeInfo_65_65, ExtraArgModes_27, ExtraHeadVars1_25, &ExtraModesAndVars_34);
    check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(ModuleInfo_5, Subn_9, ExistConstraints_33, ExtraModesAndVars_34, &ExtraHeadVars_35, VarSet1_30, &VarSet_36, VarTypes1_31, &VarTypes_37, RttiVarMaps0_17, &RttiVarMaps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ExistsCastExtraGoals_39);
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Body0_16, (MR_Integer) 0)));
    GoalInfo0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Body0_16, (MR_Integer) 1)));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Body0_16, &Goals0_42);
    TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    Var_56 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_66_66, ExistsCastHeadGoals_32, ExistsCastExtraGoals_39);
    Goals_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_66_66, Goals0_42, Var_56);
    HeadVars_44 = mercury__list__f_43_43_2_f_0(TypeInfo_65_65, ExtraHeadVars_35, OrigHeadVars_29);
    NonLocals_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVars_44);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_41, &GoalInfo_46);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Goals_43));
    }
    {
      Body_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Body_47, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Body_47, 1) = ((MR_Box) (GoalInfo_46));
    }
    hlds__hlds_pred__proc_info_set_body_7_p_0(VarSet_36, VarTypes_37, HeadVars_44, Body_47, RttiVarMaps_38, STATE_VARIABLE_ProcInfo_0_48, STATE_VARIABLE_ProcInfo_49);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11,
  MR_Word STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * STATE_VARIABLE_ExtraGoals_13)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "length mismatch");
          return;
        }
      }
      *STATE_VARIABLE_ExtraGoals_13 = STATE_VARIABLE_ExtraGoals_0_12;
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_0_10;
      *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
      *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
    }
    else
    {
      MR_Word ModeAndVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word ModesAndVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Var_39;
      MR_Word Vars_40;
      MR_Word ArgMode_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeAndVar_37, (MR_Integer) 0)));
      MR_Word Var0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeAndVar_37, (MR_Integer) 1)));
      MR_Word ExistConstraints_53;
      MR_Word STATE_VARIABLE_VarSet_66_66;
      MR_Word STATE_VARIABLE_VarTypes_67_67;
      MR_Word STATE_VARIABLE_ExtraGoals_69_69;
      MR_Word STATE_VARIABLE_RttiVarMaps_80_80;

      succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_1, ArgMode_45);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_15_95;
        MR_Word Context_47;
        MR_Word VarType_48;
        MR_Word ExtraGoal_49;
        MR_Word VarInfo_50;
        MR_String InternalName_90;
        MR_String ExternalName_91;
        MR_Word STATE_VARIABLE_VarSet_12_92;

        mercury__term__context_init_1_p_0(&Context_47);
        TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        mercury__varset__new_var_3_p_0(TypeCtorInfo_15_95, &Var_39, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_12_92);
        mercury__varset__lookup_name_3_p_0(TypeCtorInfo_15_95, STATE_VARIABLE_VarSet_12_92, Var0_46, &InternalName_90);
        mercury__string__append_3_p_2((MR_String) "ExistQ", InternalName_90, &ExternalName_91);
        mercury__varset__name_var_4_p_0(TypeCtorInfo_15_95, Var_39, ExternalName_91, STATE_VARIABLE_VarSet_12_92, &STATE_VARIABLE_VarSet_66_66);
        hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_8, Var0_46, &VarType_48);
        hlds__vartypes__add_var_type_4_p_0(Var_39, VarType_48, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_67_67);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, Var0_46, Var_39, Context_47, &ExtraGoal_49);
        {
          STATE_VARIABLE_ExtraGoals_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ExtraGoals_69_69, 0) = ((MR_Box) (ExtraGoal_49));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ExtraGoals_69_69, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_12));
        }
        hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(STATE_VARIABLE_RttiVarMaps_0_10, Var0_46, &VarInfo_50);
        switch (MR_tag((MR_Word) VarInfo_50)) {
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
              MR_Word TypeInfoType0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarInfo_50, (MR_Integer) 0)));
              MR_Word TypeInfoType_52;
              MR_Word STATE_VARIABLE_RttiVarMaps_79_79;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_2, TypeInfoType0_51, &TypeInfoType_52);
              hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(Var0_46, TypeInfoType_52, STATE_VARIABLE_RttiVarMaps_0_10, &STATE_VARIABLE_RttiVarMaps_79_79);
              hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_39, TypeInfoType0_51, STATE_VARIABLE_RttiVarMaps_79_79, &STATE_VARIABLE_RttiVarMaps_80_80);
              ExistConstraints_53 = HeadVar__3_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ExistConstraint_55;
              MR_Word ConstraintArgs_57;
              MR_Word STATE_VARIABLE_RttiVarMaps_76_76;
              MR_Word Var_56;

              if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "missing constraint");
                  return;
                }
              }
              else
              {
                ExistConstraint_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                ExistConstraints_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
              }
              hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(ExistConstraint_55, Var_39, STATE_VARIABLE_RttiVarMaps_0_10, &STATE_VARIABLE_RttiVarMaps_76_76);
              Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraint_55, (MR_Integer) 0)));
              ConstraintArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraint_55, (MR_Integer) 1)));
              check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(ConstraintArgs_57, Var_39, (MR_Integer) 1, STATE_VARIABLE_RttiVarMaps_76_76, &STATE_VARIABLE_RttiVarMaps_80_80);
            }
            break;
        }
      }
      else
      {
        Var_39 = Var0_46;
        ExistConstraints_53 = HeadVar__3_3;
        STATE_VARIABLE_ExtraGoals_69_69 = STATE_VARIABLE_ExtraGoals_0_12;
        STATE_VARIABLE_RttiVarMaps_80_80 = STATE_VARIABLE_RttiVarMaps_0_10;
        STATE_VARIABLE_VarTypes_67_67 = STATE_VARIABLE_VarTypes_0_8;
        STATE_VARIABLE_VarSet_66_66 = STATE_VARIABLE_VarSet_0_6;
      }
      check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(ModuleInfo_1, Subn_2, ExistConstraints_53, ModesAndVars_38, &Vars_40, STATE_VARIABLE_VarSet_66_66, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_67_67, STATE_VARIABLE_VarTypes_9, STATE_VARIABLE_RttiVarMaps_80_80, STATE_VARIABLE_RttiVarMaps_11, STATE_VARIABLE_ExtraGoals_69_69, STATE_VARIABLE_ExtraGoals_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_40));
      }
    }
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Integer Num_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_RttiVarMaps_5 = STATE_VARIABLE_RttiVarMaps_0_4;
    else
    {
      MR_Word ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_RttiVarMaps_22_22;
      MR_Integer Var_23;
      MR_Word TVar_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Num_3;
      MR_Word next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;

      succeeded = ((MR_tag((MR_Word) ArgType_11)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        TVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgType_11, (MR_Integer) 0)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgType_11, (MR_Integer) 1)));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_4, TVar_16, &Var_18);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Locn_19;

        {
          Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Locn_19, 0) = ((MR_Box) (Var_2));
          MR_hl_field(MR_mktag(1), Locn_19, 1) = ((MR_Box) (Num_3));
        }
        hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TVar_16, Locn_19, STATE_VARIABLE_RttiVarMaps_0_4, &STATE_VARIABLE_RttiVarMaps_22_22);
      }
      else
        STATE_VARIABLE_RttiVarMaps_22_22 = STATE_VARIABLE_RttiVarMaps_0_4;
      Var_23 = (Num_3 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ArgTypes_12;
      next_value_of_Num_3 = Var_23;
      next_value_of_STATE_VARIABLE_RttiVarMaps_0_4 = STATE_VARIABLE_RttiVarMaps_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Num_3 = next_value_of_Num_3;
      STATE_VARIABLE_RttiVarMaps_0_4 = next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Subn_14,
  MR_Word ArgTypes_15,
  MR_Word ArgModes_16,
  MR_Word STATE_VARIABLE_HeadVars_0_29,
  MR_Word * STATE_VARIABLE_HeadVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * STATE_VARIABLE_ExtraGoals_36)
{
  {
    MR_bool succeeded = (ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (ArgModes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (STATE_VARIABLE_HeadVars_0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ExtraGoals_36 = STATE_VARIABLE_ExtraGoals_0_35;
      *STATE_VARIABLE_VarTypes_34 = STATE_VARIABLE_VarTypes_0_33;
      *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_0_31;
      *STATE_VARIABLE_HeadVars_30 = STATE_VARIABLE_HeadVars_0_29;
    }
    else
    {
      MR_Word ArgType_21;
      MR_Word ArgTypesRest_22;
      MR_Word ArgMode_23;
      MR_Word ArgModesRest_24;
      MR_Word HeadVar0_25;
      MR_Word HeadVarsRest0_26;

      succeeded = ((MR_tag((MR_Word) ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 0)));
        ArgTypesRest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) ArgModes_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_16, (MR_Integer) 0)));
          ArgModesRest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_16, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_HeadVars_0_29)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 0)));
            HeadVarsRest0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadVarsRest_27;
        MR_Word HeadVar_28;
        MR_Word STATE_VARIABLE_VarSet_37_37;
        MR_Word STATE_VARIABLE_VarTypes_38_38;
        MR_Word STATE_VARIABLE_ExtraGoals_39_39;
        MR_Word InternalType_62;

        check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(ModuleInfo_13, Subn_14, ArgTypesRest_22, ArgModesRest_24, HeadVarsRest0_26, &HeadVarsRest_27, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarTypes_0_33, &STATE_VARIABLE_VarTypes_38_38, STATE_VARIABLE_ExtraGoals_0_35, &STATE_VARIABLE_ExtraGoals_39_39);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_14, ArgType_21, &InternalType_62);
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InternalType_62, ArgType_21);
        if (succeeded)
        {
          HeadVar_28 = HeadVar0_25;
          *STATE_VARIABLE_ExtraGoals_36 = STATE_VARIABLE_ExtraGoals_39_39;
          *STATE_VARIABLE_VarTypes_34 = STATE_VARIABLE_VarTypes_38_38;
          *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_37_37;
        }
        else
        {
          MR_Word TypeCtorInfo_15_84;
          MR_Word Context_63;
          MR_Word Inst_65;
          MR_Word ExtraGoal_66;
          MR_Word STATE_VARIABLE_VarTypes_33_67;
          MR_String InternalName_79;
          MR_String ExternalName_80;
          MR_Word STATE_VARIABLE_VarSet_12_81;
          MR_Word Var_64;

          mercury__term__context_init_1_p_0(&Context_63);
          hlds__vartypes__update_var_type_4_p_0(HeadVar0_25, InternalType_62, STATE_VARIABLE_VarTypes_38_38, &STATE_VARIABLE_VarTypes_33_67);
          TypeCtorInfo_15_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          mercury__varset__new_var_3_p_0(TypeCtorInfo_15_84, &HeadVar_28, STATE_VARIABLE_VarSet_37_37, &STATE_VARIABLE_VarSet_12_81);
          mercury__varset__lookup_name_3_p_0(TypeCtorInfo_15_84, STATE_VARIABLE_VarSet_12_81, HeadVar0_25, &InternalName_79);
          mercury__string__append_3_p_2((MR_String) "ExistQ", InternalName_79, &ExternalName_80);
          mercury__varset__name_var_4_p_0(TypeCtorInfo_15_84, HeadVar_28, ExternalName_80, STATE_VARIABLE_VarSet_12_81, STATE_VARIABLE_VarSet_32);
          hlds__vartypes__add_var_type_4_p_0(HeadVar_28, ArgType_21, STATE_VARIABLE_VarTypes_33_67, STATE_VARIABLE_VarTypes_34);
          check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_13, ArgMode_23, &Var_64, &Inst_65);
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, HeadVar0_25, HeadVar_28, Inst_65, Inst_65, Context_63, &ExtraGoal_66);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ExtraGoals_36 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExtraGoal_66));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_39_39));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_HeadVars_30 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVarsRest_27));
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
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredTable_15;

    check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_PredTable_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_15));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredTable_7;
    MR_Word Var_10;
    MR_Box conv1_PredTable_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], Var_10, PredIds_4, ((MR_Box) (PredTable0_6)), &conv1_PredTable_7);
    PredTable_7 = ((MR_Word) conv1_PredTable_7);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
}

void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Preds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Preds_3 = HeadVar__2_2;
    else
    {
      MR_Word TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      MR_Word PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredInfo0_9;
      MR_Word PredInfo_10;
      MR_Word Preds1_12;
      MR_Box conv0_PredInfo0_9;
      MR_Word Var_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__map__lookup_3_p_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14, HeadVar__2_2, ((MR_Box) (PredId_5)), &conv0_PredInfo0_9);
      PredInfo0_9 = ((MR_Word) conv0_PredInfo0_9);
      check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(PredInfo0_9, &PredInfo_10, &Var_11);
      mercury__map__det_update_4_p_0(TypeCtorInfo_13_13, TypeCtorInfo_14_14, ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_10)), HeadVar__2_2, &Preds1_12);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PredIds_6;
      next_value_of_HeadVar__2_2 = Preds1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(
  MR_Word PredInfo0_4,
  MR_Word * PredInfo_5,
  MR_Word * MaybeProcId_6)
{
  {
    MR_bool succeeded;
    MR_Word Procs0_7;
    MR_Word PredOrFunc_8;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeCtorInfo_31_31;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_4, &Procs0_7);
    PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_4);
    succeeded = (PredOrFunc_8 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, Procs0_7);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_32_32;
      MR_Integer PredArity_10;
      MR_Integer FuncArity_11;
      MR_Word InMode_12;
      MR_Word FuncArgModes_14;
      MR_Word FuncRetMode_15;
      MR_Word PredArgModes_16;
      MR_Word Context_18;
      MR_Word InstVarSet_20;
      MR_Integer ProcId_22;
      MR_Word Var_24;
      MR_Word Var_26;

      PredArity_10 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_4);
      FuncArity_11 = (PredArity_10 - (MR_Integer) 1);
      parse_tree__prog_mode__in_mode_1_p_0(&InMode_12);
      parse_tree__prog_mode__out_mode_1_p_0(&FuncRetMode_15);
      TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      mercury__list__duplicate_3_p_0(TypeCtorInfo_32_32, FuncArity_11, ((MR_Box) (InMode_12)), &FuncArgModes_14);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FuncRetMode_15));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__list__append_3_p_1(TypeCtorInfo_32_32, FuncArgModes_14, Var_24, &PredArgModes_16);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_4, &Context_18);
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &InstVarSet_20);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (PredArgModes_16));
      }
      hlds__make_hlds__add_new_proc_14_p_0(Context_18, (MR_Integer) -1, PredArity_10, InstVarSet_20, PredArgModes_16, Var_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__clause_to_proc_scalar_common_5[0]), (MR_Integer) 1, (MR_Integer) 1, PredInfo0_4, PredInfo_5, &ProcId_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcId_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcId_22));
      }
    }
    else
    {
      *PredInfo_5 = PredInfo0_4;
      *MaybeProcId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_3;

    conv6_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__220__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__219__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Vars_11;

    conv3_STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__set_arg_names_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Vars_11));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(
  MR_Integer ProcId_5,
  MR_Word ClausesInfo_6,
  MR_Word STATE_VARIABLE_Proc_0_80,
  MR_Word * STATE_VARIABLE_Proc_81)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 0)));
    MR_Word VarTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 3)));
    MR_Word HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 4)));
    MR_Word ClausesRep0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 5)));
    MR_Word RttiInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 7)));
    MR_Word Clauses_18;
    MR_Word MatchingClauses_19;
    MR_Word ClausesDisjuncts_20;
    MR_Word StateVarWarnings_21;
    MR_Word VarSet_34;
    MR_Word Goal_65;
    MR_Word HeadVarList_79;
    MR_Word STATE_VARIABLE_Proc_82_82;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 2)));
    MR_Word _ItemNumbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 6)));
    MR_Word _HaveForeignClauses_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 8)));
    MR_Word _HadSyntaxError_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo_6, (MR_Integer) 9)));

    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_13, &Clauses_18);
    check_hlds__clause_to_proc__select_matching_clauses_3_p_0(Clauses_18, ProcId_5, &MatchingClauses_19);
    check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(MatchingClauses_19, &ClausesDisjuncts_20, &StateVarWarnings_21);
    if ((StateVarWarnings_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Proc_82_82 = STATE_VARIABLE_Proc_0_80;
    else
      hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(StateVarWarnings_21, STATE_VARIABLE_Proc_0_80, &STATE_VARIABLE_Proc_82_82);
    if ((ClausesDisjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Context_71;
      MR_Word GoalInfo0_72;
      MR_Word GoalInfo1_73;
      MR_Word NonLocalVars_74;
      MR_Word GoalInfo2_75;
      MR_Word GoalInfo_78;
      MR_Word Var_84;
      MR_Word Var_88;

      hlds__hlds_pred__proc_info_get_context_2_p_0(STATE_VARIABLE_Proc_82_82, &Context_71);
      VarSet_34 = VarSet0_8;
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_72);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_71, GoalInfo0_72, &GoalInfo1_73);
      Var_84 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], HeadVars_12);
      NonLocalVars_74 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_84);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocalVars_74, GoalInfo1_73, &GoalInfo2_75);
      succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(ClausesDisjuncts_20);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
        MR_Word PurityList_76;
        MR_Word Purity_77;
        MR_Box conv2_Purity_77;

        PurityList_76 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, TypeCtorInfo_112_112, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[2], ClausesDisjuncts_20);
        conv2_Purity_77 = mercury__list__foldl_3_f_0(TypeCtorInfo_112_112, TypeCtorInfo_112_112, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[3], PurityList_76, ((MR_Box) ((MR_Integer) 0)));
        Purity_77 = ((MR_Word) conv2_Purity_77);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_77, GoalInfo2_75, &GoalInfo_78);
      }
      else
        GoalInfo_78 = GoalInfo2_75;
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (ClausesDisjuncts_20));
      }
      {
        Goal_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_65, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), Goal_65, 1) = ((MR_Box) (GoalInfo_78));
      }
    }
    else
    {
      MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), ClausesDisjuncts_20, (MR_Integer) 1)));
      MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), ClausesDisjuncts_20, (MR_Integer) 0)));
      MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_173, (MR_Integer) 1)));
      MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_173, (MR_Integer) 0)));

      if ((Var_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (MR_tag((MR_Word) Var_175)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            VarSet_34 = VarSet0_8;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            VarSet_34 = VarSet0_8;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                VarSet_34 = VarSet0_8;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 4)));
                  MR_Word ExtraArgs_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 5)));
                  MR_Word MaybeTraceRuntimeCond_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 6)));
                  MR_Word Var_91;
                  MR_Word Var_96;
                  MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 1)));
                  MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 2)));
                  MR_Integer Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 3)));
                  MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_175, (MR_Integer) 7)));
                  MR_Box conv4_VarSet_34;

                  conv4_VarSet_34 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[4], Args_30, ((MR_Box) (VarSet0_8)));
                  VarSet_34 = ((MR_Word) conv4_VarSet_34);
                  {
                    Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (ExtraArgs_31));
                    MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  mercury__require__expect_4_p_0(Var_91, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "extra_args");
                  {
                    Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[2]));
                    MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5));
                    MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (MaybeTraceRuntimeCond_32));
                    MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  mercury__require__expect_4_p_0(Var_96, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "trace runtime cond");
                }
                break;
            }
            break;
        }
        Goal_65 = Var_173;
      }
      else
      {
        MR_Word Context_138;
        MR_Word GoalInfo0_139;
        MR_Word GoalInfo1_140;
        MR_Word NonLocalVars_141;
        MR_Word GoalInfo2_142;
        MR_Word GoalInfo_145;
        MR_Word Var_146;
        MR_Word Var_150;

        Context_138 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_174);
        VarSet_34 = VarSet0_8;
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_139);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_138, GoalInfo0_139, &GoalInfo1_140);
        Var_146 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], HeadVars_12);
        NonLocalVars_141 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_146);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocalVars_141, GoalInfo1_140, &GoalInfo2_142);
        succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(ClausesDisjuncts_20);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_112_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
          MR_Word PurityList_124;
          MR_Word Purity_125;
          MR_Box conv7_Purity_125;

          PurityList_124 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, TypeCtorInfo_112_130, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[5], ClausesDisjuncts_20);
          conv7_Purity_125 = mercury__list__foldl_3_f_0(TypeCtorInfo_112_130, TypeCtorInfo_112_130, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[6], PurityList_124, ((MR_Box) ((MR_Integer) 0)));
          Purity_125 = ((MR_Word) conv7_Purity_125);
          hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_125, GoalInfo2_142, &GoalInfo_145);
        }
        else
          GoalInfo_145 = GoalInfo2_142;
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (ClausesDisjuncts_20));
        }
        {
          Goal_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_65, 0) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), Goal_65, 1) = ((MR_Box) (GoalInfo_145));
        }
      }
    }
    HeadVarList_79 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], HeadVars_12);
    hlds__hlds_pred__proc_info_set_body_7_p_0(VarSet_34, VarTypes_11, HeadVarList_79, Goal_65, RttiInfo_15, STATE_VARIABLE_Proc_82_82, STATE_VARIABLE_Proc_81);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Clause_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_8;
    MR_Word FirstDisjuncts_9;
    MR_Word FirstWarnings_10;
    MR_Word LaterDisjuncts_11;
    MR_Word LaterWarnings_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    Goal_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
    hlds__hlds_goal__goal_to_disj_list_2_p_0(Goal_8, &FirstDisjuncts_9);
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 0)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 2)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 3)));
    FirstWarnings_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 4)));
    check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(Clauses_5, &LaterDisjuncts_11, &LaterWarnings_12);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, FirstDisjuncts_9, LaterDisjuncts_11);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, FirstWarnings_10, LaterWarnings_12);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ProcId_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Clause_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word MatchingClausesTail_9;
      MR_Word ApplicableProcIds_10;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      check_hlds__clause_to_proc__select_matching_clauses_3_p_0(Clauses_6, ProcId_2, &MatchingClausesTail_9);
      ApplicableProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 0)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 1)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 2)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 3)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause_5, (MR_Integer) 4)));
      if ((ApplicableProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MatchingClausesTail_9));
        }
      else
      {
        MR_Word ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplicableProcIds_10, (MR_Integer) 0)));

        succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (ProcId_2)), ProcIds_11);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MatchingClausesTail_9));
          }
        else
          *HeadVar__3_3 = MatchingClausesTail_9;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_2;
    MR_Word Goals_3;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      {
        MR_Word Var_4;

        Var_4 = hlds__hlds_goal__goal_get_purity_1_f_0(Goal_2);
        succeeded = (Var_4 == (MR_Integer) 0);
        succeeded = !(succeeded);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_3;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredTable_9;

    check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_PredTable_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_9));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredTable_7;
    MR_Box conv1_PredTable_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_6);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[1], PredIds_4, ((MR_Box) (PredTable0_6)), &conv1_PredTable_7);
    PredTable_7 = ((MR_Word) conv1_PredTable_7);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__clause_to_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.clause_to_proc.
