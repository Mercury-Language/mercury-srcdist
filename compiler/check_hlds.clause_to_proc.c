/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 140 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 146 "check_hlds.clause_to_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

#line 149 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

#line 211 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__211__1_2_p_0(
#line 211 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31,
#line 211 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_99);

#line 210 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__210__1_2_p_0(
#line 210 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ExtraArgs_30,
#line 210 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_94);

#line 550 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Var_2,
#line 550 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__Num_3,
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
#line 550 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5);

#line 476 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_2,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);

#line 421 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_14,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36);

#line 353 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
#line 353 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5);

#line 330 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_6,
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
#line 330 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);

#line 310 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
#line 310 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 310 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
#line 310 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

#line 291 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
#line 291 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 291 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
#line 291 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

#line 279 "clause_to_proc.m"
static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
#line 279 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Arg_4,
#line 279 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10);

#line 270 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
#line 270 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1);

#line 177 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
#line 177 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4);

#line 148 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
#line 148 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_4,
#line 148 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
#line 148 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);

#line 326 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 326 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3);

#line 257 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 256 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

#line 211 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
#line 211 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg);

#line 210 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
#line 210 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg);

#line 209 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 257 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 256 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

#line 138 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 138 "clause_to_proc.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 592 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 601 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 609 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 617 "check_hlds.clause_to_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

#line 625 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

#line 211 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__211__1_2_p_0(
#line 211 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31,
#line 211 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_99)
#line 211 "clause_to_proc.m"
{
#line 211 "clause_to_proc.m"
  {
#line 211 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 211 "clause_to_proc.m"
    {
#line 211 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[3], ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_99)));
    }
#line 211 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 211 "clause_to_proc.m"
  }
#line 211 "clause_to_proc.m"
}

#line 210 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__210__1_2_p_0(
#line 210 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ExtraArgs_30,
#line 210 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_94)
#line 210 "clause_to_proc.m"
{
#line 210 "clause_to_proc.m"
  {
#line 210 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 210 "clause_to_proc.m"
    {
#line 210 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[1], ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_30)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_94)));
    }
#line 210 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 210 "clause_to_proc.m"
  }
#line 210 "clause_to_proc.m"
}

#line 550 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Var_2,
#line 550 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__Num_3,
#line 550 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
#line 550 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5)
#line 550 "clause_to_proc.m"
{
#line 553 "clause_to_proc.m"
  while (MR_TRUE)
#line 553 "clause_to_proc.m"
    {
#line 553 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 553 "clause_to_proc.m"
      {
#line 553 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 553 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 553 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
#line 553 "clause_to_proc.m"
        else
#line 554 "clause_to_proc.m"
          {
#line 554 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 554 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;
#line 554 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__V_23_23;
#line 561 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TVar_16;
#line 556 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_17_17;
#line 557 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_18_18;

#line 556 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgType_11)) == (MR_mktag((MR_Integer) 0)));
#line 556 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 556 "clause_to_proc.m"
              {
#line 556 "clause_to_proc.m"
                check_hlds__clause_to_proc__TVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 0)));
#line 556 "clause_to_proc.m"
                check_hlds__clause_to_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 1)));
#line 557 "clause_to_proc.m"
                {
#line 557 "clause_to_proc.m"
                  check_hlds__clause_to_proc__succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, check_hlds__clause_to_proc__TVar_16, &check_hlds__clause_to_proc__V_18_18);
                }
#line 557 "clause_to_proc.m"
                check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 556 "clause_to_proc.m"
              }
#line 561 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 559 "clause_to_proc.m"
              {
#line 559 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Locn_19;

#line 559 "clause_to_proc.m"
                {
#line 559 "clause_to_proc.m"
                  check_hlds__clause_to_proc__Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_2));
#line 559 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 1) = ((MR_Box) (check_hlds__clause_to_proc__Num_3));
#line 559 "clause_to_proc.m"
                }
#line 560 "clause_to_proc.m"
                {
#line 560 "clause_to_proc.m"
                  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(check_hlds__clause_to_proc__TVar_16, check_hlds__clause_to_proc__Locn_19, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22);
                }
#line 559 "clause_to_proc.m"
              }
#line 561 "clause_to_proc.m"
            else
#line 560 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
#line 564 "clause_to_proc.m"
            check_hlds__clause_to_proc__V_23_23 = (check_hlds__clause_to_proc__Num_3 + (MR_Integer) 1);
#line 564 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 564 "clause_to_proc.m"
            {
#line 564 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ArgTypes_12;
#line 564 "clause_to_proc.m"
              MR_Integer check_hlds__clause_to_proc__Num__tmp_copy_3 = check_hlds__clause_to_proc__V_23_23;
#line 564 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;

#line 564 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4;
#line 564 "clause_to_proc.m"
              check_hlds__clause_to_proc__Num_3 = check_hlds__clause_to_proc__Num__tmp_copy_3;
#line 564 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 564 "clause_to_proc.m"
            }
#line 564 "clause_to_proc.m"
            continue;
#line 554 "clause_to_proc.m"
          }
#line 553 "clause_to_proc.m"
      }
#line 553 "clause_to_proc.m"
      break;
#line 553 "clause_to_proc.m"
    }
#line 550 "clause_to_proc.m"
}

#line 476 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_2,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
#line 476 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
#line 476 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13)
#line 476 "clause_to_proc.m"
{
#line 483 "clause_to_proc.m"
  {
#line 483 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 483 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "clause_to_proc.m"
      {
#line 483 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "clause_to_proc.m"
          {
#line 485 "clause_to_proc.m"
          }
#line 486 "clause_to_proc.m"
        else
#line 487 "clause_to_proc.m"
          {
#line 488 "clause_to_proc.m"
            {
#line 488 "clause_to_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "length mismatch");
#line 488 "clause_to_proc.m"
              return;
            }
#line 487 "clause_to_proc.m"
          }
#line 483 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
#line 483 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
#line 483 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
#line 483 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
#line 483 "clause_to_proc.m"
      }
#line 483 "clause_to_proc.m"
    else
#line 493 "clause_to_proc.m"
      {
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ModeAndVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ModesAndVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Var_39;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Vars_40;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgMode_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 0)));
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Var0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 1)));
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ExistConstraints_53;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69;
#line 493 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80;

#line 495 "clause_to_proc.m"
        {
#line 495 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__ArgMode_45);
        }
#line 543 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 498 "clause_to_proc.m"
          {
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_95;
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Context_47;
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__VarType_48;
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ExtraGoal_49;
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__VarInfo_50;
#line 498 "clause_to_proc.m"
            MR_String check_hlds__clause_to_proc__InternalName_90;
#line 498 "clause_to_proc.m"
            MR_String check_hlds__clause_to_proc__ExternalName_91;
#line 498 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92;

#line 498 "clause_to_proc.m"
            {
#line 498 "clause_to_proc.m"
              mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_47);
            }
#line 944 "check_hlds.clause_to_proc.c"
            check_hlds__clause_to_proc__TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 570 "clause_to_proc.m"
            {
#line 570 "clause_to_proc.m"
              mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, &check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92);
            }
#line 571 "clause_to_proc.m"
            {
#line 571 "clause_to_proc.m"
              mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__InternalName_90);
            }
#line 572 "clause_to_proc.m"
            {
#line 572 "clause_to_proc.m"
              mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_90, &check_hlds__clause_to_proc__ExternalName_91);
            }
#line 573 "clause_to_proc.m"
            {
#line 573 "clause_to_proc.m"
              mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__ExternalName_91, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66);
            }
#line 500 "clause_to_proc.m"
            {
#line 500 "clause_to_proc.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarType_48);
            }
#line 501 "clause_to_proc.m"
            {
#line 501 "clause_to_proc.m"
              parse_tree__prog_data__add_var_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__VarType_48, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67);
            }
#line 502 "clause_to_proc.m"
            {
#line 502 "clause_to_proc.m"
              hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__Context_47, &check_hlds__clause_to_proc__ExtraGoal_49);
            }
#line 503 "clause_to_proc.m"
            {
#line 503 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_49));
#line 503 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12));
#line 503 "clause_to_proc.m"
            }
#line 509 "clause_to_proc.m"
            {
#line 509 "clause_to_proc.m"
              hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarInfo_50);
            }
#line 519 "clause_to_proc.m"
            if ((check_hlds__clause_to_proc__VarInfo_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "clause_to_proc.m"
              {
#line 541 "clause_to_proc.m"
                {
#line 541 "clause_to_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "rtti_varmaps info not found");
#line 541 "clause_to_proc.m"
                  return;
                }
#line 540 "clause_to_proc.m"
              }
#line 519 "clause_to_proc.m"
            else
#line 519 "clause_to_proc.m"
              if (((MR_tag((MR_Word) check_hlds__clause_to_proc__VarInfo_50)) == (MR_mktag((MR_Integer) 1))))
#line 511 "clause_to_proc.m"
                {
#line 511 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__TypeInfoType0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__VarInfo_50, (MR_Integer) 0)));
#line 511 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__TypeInfoType_52;
#line 511 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79;

#line 515 "clause_to_proc.m"
                  {
#line 515 "clause_to_proc.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__TypeInfoType0_51, &check_hlds__clause_to_proc__TypeInfoType_52);
                  }
#line 516 "clause_to_proc.m"
                  {
#line 516 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__TypeInfoType_52, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79);
                  }
#line 517 "clause_to_proc.m"
                  {
#line 517 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__TypeInfoType0_51, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
#line 518 "clause_to_proc.m"
                  check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
#line 511 "clause_to_proc.m"
                }
#line 519 "clause_to_proc.m"
              else
#line 520 "clause_to_proc.m"
                {
#line 520 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__ExistConstraint_55;
#line 520 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__ConstraintArgs_57;
#line 520 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76;
#line 537 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__V_56_56;

#line 528 "clause_to_proc.m"
                  if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "clause_to_proc.m"
                    {
#line 530 "clause_to_proc.m"
                      {
#line 530 "clause_to_proc.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "missing constraint");
#line 530 "clause_to_proc.m"
                        return;
                      }
#line 529 "clause_to_proc.m"
                    }
#line 528 "clause_to_proc.m"
                  else
#line 527 "clause_to_proc.m"
                    {
#line 527 "clause_to_proc.m"
                      check_hlds__clause_to_proc__ExistConstraint_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 527 "clause_to_proc.m"
                      check_hlds__clause_to_proc__ExistConstraints_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 527 "clause_to_proc.m"
                    }
#line 532 "clause_to_proc.m"
                  {
#line 532 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(check_hlds__clause_to_proc__ExistConstraint_55, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76);
                  }
#line 537 "clause_to_proc.m"
                  check_hlds__clause_to_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 0)));
#line 537 "clause_to_proc.m"
                  check_hlds__clause_to_proc__ConstraintArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 1)));
#line 538 "clause_to_proc.m"
                  {
#line 538 "clause_to_proc.m"
                    check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(check_hlds__clause_to_proc__ConstraintArgs_57, check_hlds__clause_to_proc__Var_39, (MR_Integer) 1, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
#line 520 "clause_to_proc.m"
                }
#line 498 "clause_to_proc.m"
          }
#line 543 "clause_to_proc.m"
        else
#line 544 "clause_to_proc.m"
          {
#line 544 "clause_to_proc.m"
            check_hlds__clause_to_proc__Var_39 = check_hlds__clause_to_proc__Var0_46;
#line 545 "clause_to_proc.m"
            check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
#line 545 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
#line 545 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
#line 545 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
#line 545 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
#line 544 "clause_to_proc.m"
          }
#line 547 "clause_to_proc.m"
        {
#line 547 "clause_to_proc.m"
          check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__ExistConstraints_53, check_hlds__clause_to_proc__ModesAndVars_38, &check_hlds__clause_to_proc__Vars_40, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);
        }
#line 493 "clause_to_proc.m"
        {
#line 493 "clause_to_proc.m"
          MR_Word base;
#line 493 "clause_to_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__5_5 = base;
#line 493 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_39));
#line 493 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__Vars_40));
#line 493 "clause_to_proc.m"
        }
#line 493 "clause_to_proc.m"
      }
#line 483 "clause_to_proc.m"
  }
#line 476 "clause_to_proc.m"
}

#line 421 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_14,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
#line 421 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
#line 421 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36)
#line 421 "clause_to_proc.m"
{
#line 435 "clause_to_proc.m"
  {
#line 435 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 430 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 430 "clause_to_proc.m"
      {
#line 431 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgModes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 432 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "clause_to_proc.m"
      }
#line 435 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 434 "clause_to_proc.m"
      {
#line 434 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35;
#line 434 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33;
#line 434 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31;
#line 434 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29;
#line 434 "clause_to_proc.m"
      }
#line 435 "clause_to_proc.m"
    else
#line 446 "clause_to_proc.m"
      {
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgType_21;
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgTypesRest_22;
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgMode_23;
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgModesRest_24;
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__HeadVar0_25;
#line 446 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__HeadVarsRest0_26;

#line 436 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 436 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 436 "clause_to_proc.m"
          {
#line 436 "clause_to_proc.m"
            check_hlds__clause_to_proc__ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 0)));
#line 436 "clause_to_proc.m"
            check_hlds__clause_to_proc__ArgTypesRest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 1)));
#line 437 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgModes_16)) == (MR_mktag((MR_Integer) 1)));
#line 437 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 437 "clause_to_proc.m"
              {
#line 437 "clause_to_proc.m"
                check_hlds__clause_to_proc__ArgMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 0)));
#line 437 "clause_to_proc.m"
                check_hlds__clause_to_proc__ArgModesRest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 1)));
#line 438 "clause_to_proc.m"
                check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29)) == (MR_mktag((MR_Integer) 1)));
#line 438 "clause_to_proc.m"
                if (check_hlds__clause_to_proc__succeeded)
#line 438 "clause_to_proc.m"
                  {
#line 438 "clause_to_proc.m"
                    check_hlds__clause_to_proc__HeadVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 0)));
#line 438 "clause_to_proc.m"
                    check_hlds__clause_to_proc__HeadVarsRest0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 1)));
#line 438 "clause_to_proc.m"
                  }
#line 437 "clause_to_proc.m"
              }
#line 436 "clause_to_proc.m"
          }
#line 446 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 442 "clause_to_proc.m"
          {
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__HeadVarsRest_27;
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__HeadVar_28;
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
#line 442 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__InternalType_62;

#line 440 "clause_to_proc.m"
            {
#line 440 "clause_to_proc.m"
              check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgTypesRest_22, check_hlds__clause_to_proc__ArgModesRest_24, check_hlds__clause_to_proc__HeadVarsRest0_26, &check_hlds__clause_to_proc__HeadVarsRest_27, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35, &check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39);
            }
#line 457 "clause_to_proc.m"
            {
#line 457 "clause_to_proc.m"
              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgType_21, &check_hlds__clause_to_proc__InternalType_62);
            }
#line 462 "clause_to_proc.m"
            {
#line 462 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__ArgType_21);
            }
#line 462 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 472 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 464 "clause_to_proc.m"
              {
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_84;
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Context_63;
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Inst_65;
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__ExtraGoal_66;
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67;
#line 464 "clause_to_proc.m"
                MR_String check_hlds__clause_to_proc__InternalName_79;
#line 464 "clause_to_proc.m"
                MR_String check_hlds__clause_to_proc__ExternalName_80;
#line 464 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81;
#line 468 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_64_64;

#line 464 "clause_to_proc.m"
                {
#line 464 "clause_to_proc.m"
                  mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_63);
                }
#line 465 "clause_to_proc.m"
                {
#line 465 "clause_to_proc.m"
                  parse_tree__prog_data__update_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67);
                }
#line 1319 "check_hlds.clause_to_proc.c"
                check_hlds__clause_to_proc__TypeCtorInfo_15_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 570 "clause_to_proc.m"
                {
#line 570 "clause_to_proc.m"
                  mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, &check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81);
                }
#line 571 "clause_to_proc.m"
                {
#line 571 "clause_to_proc.m"
                  mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__HeadVar0_25, &check_hlds__clause_to_proc__InternalName_79);
                }
#line 572 "clause_to_proc.m"
                {
#line 572 "clause_to_proc.m"
                  mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_79, &check_hlds__clause_to_proc__ExternalName_80);
                }
#line 573 "clause_to_proc.m"
                {
#line 573 "clause_to_proc.m"
                  mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ExternalName_80, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32);
                }
#line 467 "clause_to_proc.m"
                {
#line 467 "clause_to_proc.m"
                  parse_tree__prog_data__add_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ArgType_21, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34);
                }
#line 468 "clause_to_proc.m"
                {
#line 468 "clause_to_proc.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__ArgMode_23, &check_hlds__clause_to_proc__V_64_64, &check_hlds__clause_to_proc__Inst_65);
                }
#line 469 "clause_to_proc.m"
                {
#line 469 "clause_to_proc.m"
                  hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Context_63, &check_hlds__clause_to_proc__ExtraGoal_66);
                }
#line 471 "clause_to_proc.m"
                {
#line 471 "clause_to_proc.m"
                  MR_Word base;
#line 471 "clause_to_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "clause_to_proc.m"
                  *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = base;
#line 471 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_66));
#line 471 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39));
#line 471 "clause_to_proc.m"
                }
#line 464 "clause_to_proc.m"
              }
#line 472 "clause_to_proc.m"
            else
#line 473 "clause_to_proc.m"
              {
#line 473 "clause_to_proc.m"
                check_hlds__clause_to_proc__HeadVar_28 = check_hlds__clause_to_proc__HeadVar0_25;
#line 473 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
#line 473 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
#line 473 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
#line 473 "clause_to_proc.m"
              }
#line 445 "clause_to_proc.m"
            {
#line 445 "clause_to_proc.m"
              MR_Word base;
#line 445 "clause_to_proc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "clause_to_proc.m"
              *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = base;
#line 445 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__HeadVar_28));
#line 445 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__HeadVarsRest_27));
#line 445 "clause_to_proc.m"
            }
#line 442 "clause_to_proc.m"
          }
#line 446 "clause_to_proc.m"
        else
#line 447 "clause_to_proc.m"
          {
#line 447 "clause_to_proc.m"
            {
#line 447 "clause_to_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_for_head\'/12", (MR_String) "length mismatch");
#line 447 "clause_to_proc.m"
              return;
            }
#line 447 "clause_to_proc.m"
          }
#line 446 "clause_to_proc.m"
      }
#line 435 "clause_to_proc.m"
  }
#line 421 "clause_to_proc.m"
}

#line 353 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 353 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
#line 353 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5)
#line 353 "clause_to_proc.m"
{
#line 356 "clause_to_proc.m"
  while (MR_TRUE)
#line 356 "clause_to_proc.m"
    {
#line 356 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 356 "clause_to_proc.m"
      {
#line 356 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 356 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4;
#line 356 "clause_to_proc.m"
        else
#line 358 "clause_to_proc.m"
          {
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 358 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcInfo0_16;
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcInfo_17;
#line 358 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;
#line 359 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv0_ProcInfo0_16;

#line 359 "clause_to_proc.m"
            {
#line 359 "clause_to_proc.m"
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_22_22, check_hlds__clause_to_proc__TypeCtorInfo_23_23, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, ((MR_Box) (check_hlds__clause_to_proc__ProcId_13)), &check_hlds__clause_to_proc__conv0_ProcInfo0_16);
            }
#line 359 "clause_to_proc.m"
            check_hlds__clause_to_proc__ProcInfo0_16 = ((MR_Word) check_hlds__clause_to_proc__conv0_ProcInfo0_16);
#line 360 "clause_to_proc.m"
            {
#line 360 "clause_to_proc.m"
              check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__PredInfo_2, check_hlds__clause_to_proc__ProcInfo0_16, &check_hlds__clause_to_proc__ProcInfo_17);
            }
#line 361 "clause_to_proc.m"
            {
#line 361 "clause_to_proc.m"
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_22_22, check_hlds__clause_to_proc__TypeCtorInfo_23_23, ((MR_Box) (check_hlds__clause_to_proc__ProcId_13)), ((MR_Box) (check_hlds__clause_to_proc__ProcInfo_17)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20);
            }
#line 362 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 362 "clause_to_proc.m"
            {
#line 362 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3 = check_hlds__clause_to_proc__ProcIds_14;
#line 362 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;

#line 362 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4;
#line 362 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3;
#line 362 "clause_to_proc.m"
            }
#line 362 "clause_to_proc.m"
            continue;
#line 358 "clause_to_proc.m"
          }
#line 356 "clause_to_proc.m"
      }
#line 356 "clause_to_proc.m"
      break;
#line 356 "clause_to_proc.m"
    }
#line 353 "clause_to_proc.m"
}

#line 330 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_6,
#line 330 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
#line 330 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15)
#line 330 "clause_to_proc.m"
{
#line 333 "clause_to_proc.m"
  {
#line 333 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 333 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 333 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 333 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredInfo0_8;
#line 334 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_8;
#line 337 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Subn_9;
#line 337 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredMarkers_22;
#line 166 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_23_23;

#line 334 "clause_to_proc.m"
    {
#line 334 "clause_to_proc.m"
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), &check_hlds__clause_to_proc__conv0_PredInfo0_8);
    }
#line 334 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredInfo0_8 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_8);
#line 337 "clause_to_proc.m"
    {
#line 337 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Subn_9);
    }
#line 338 "clause_to_proc.m"
    {
#line 338 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__clause_to_proc__Subn_9);
    }
#line 338 "clause_to_proc.m"
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 337 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 337 "clause_to_proc.m"
      {
#line 165 "clause_to_proc.m"
        {
#line 165 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredMarkers_22);
        }
#line 166 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_23_23 = (MR_Integer) 9;
#line 166 "clause_to_proc.m"
        {
#line 166 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_22, check_hlds__clause_to_proc__V_23_23);
        }
#line 166 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 337 "clause_to_proc.m"
      }
#line 349 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 343 "clause_to_proc.m"
      {
#line 343 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs0_10;
#line 343 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ProcIds_11;
#line 343 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs_12;
#line 343 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__PredInfo_13;

#line 343 "clause_to_proc.m"
        {
#line 343 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Procs0_10);
        }
#line 344 "clause_to_proc.m"
        {
#line 344 "clause_to_proc.m"
          check_hlds__clause_to_proc__ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_8);
        }
#line 345 "clause_to_proc.m"
        {
#line 345 "clause_to_proc.m"
          check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__PredInfo0_8, check_hlds__clause_to_proc__ProcIds_11, check_hlds__clause_to_proc__Procs0_10, &check_hlds__clause_to_proc__Procs_12);
        }
#line 347 "clause_to_proc.m"
        {
#line 347 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__clause_to_proc__Procs_12, check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredInfo_13);
        }
#line 348 "clause_to_proc.m"
        {
#line 348 "clause_to_proc.m"
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_13)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);
#line 348 "clause_to_proc.m"
          return;
        }
#line 343 "clause_to_proc.m"
      }
#line 349 "clause_to_proc.m"
    else
#line 348 "clause_to_proc.m"
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14;
#line 333 "clause_to_proc.m"
  }
#line 330 "clause_to_proc.m"
}

#line 310 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
#line 310 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 310 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
#line 310 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
#line 310 "clause_to_proc.m"
{
#line 313 "clause_to_proc.m"
  {
#line 313 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 313 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "clause_to_proc.m"
      {
#line 313 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "clause_to_proc.m"
      }
#line 313 "clause_to_proc.m"
    else
#line 314 "clause_to_proc.m"
      {
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clause_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goal_8;
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FirstDisjuncts_9;
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FirstWarnings_10;
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__LaterDisjuncts_11;
#line 314 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__LaterWarnings_12;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_13_13;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_14_14;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_15_15;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_16_16;

#line 315 "clause_to_proc.m"
        {
#line 315 "clause_to_proc.m"
          check_hlds__clause_to_proc__Goal_8 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__clause_to_proc__Clause_4);
        }
#line 316 "clause_to_proc.m"
        {
#line 316 "clause_to_proc.m"
          hlds__hlds_goal__goal_to_disj_list_2_p_0(check_hlds__clause_to_proc__Goal_8, &check_hlds__clause_to_proc__FirstDisjuncts_9);
        }
#line 317 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 0)));
#line 317 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 1)));
#line 317 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 2)));
#line 317 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 3)));
#line 317 "clause_to_proc.m"
        check_hlds__clause_to_proc__FirstWarnings_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 4)));
#line 318 "clause_to_proc.m"
        {
#line 318 "clause_to_proc.m"
          check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__Clauses_5, &check_hlds__clause_to_proc__LaterDisjuncts_11, &check_hlds__clause_to_proc__LaterWarnings_12);
        }
#line 319 "clause_to_proc.m"
        {
#line 319 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__FirstDisjuncts_9, check_hlds__clause_to_proc__LaterDisjuncts_11);
        }
#line 320 "clause_to_proc.m"
        {
#line 320 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__clause_to_proc__FirstWarnings_10, check_hlds__clause_to_proc__LaterWarnings_12);
        }
#line 314 "clause_to_proc.m"
      }
#line 313 "clause_to_proc.m"
  }
#line 310 "clause_to_proc.m"
}

#line 291 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
#line 291 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 291 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
#line 291 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
#line 291 "clause_to_proc.m"
{
#line 294 "clause_to_proc.m"
  {
#line 294 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 294 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "clause_to_proc.m"
      *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "clause_to_proc.m"
    else
#line 295 "clause_to_proc.m"
      {
#line 295 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clause_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__MatchingClausesTail_9;
#line 295 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ApplicableProcIds_10;
#line 297 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_12_12;
#line 297 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_13_13;
#line 297 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_14_14;
#line 297 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_15_15;

#line 296 "clause_to_proc.m"
        {
#line 296 "clause_to_proc.m"
          check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_6, check_hlds__clause_to_proc__ProcId_2, &check_hlds__clause_to_proc__MatchingClausesTail_9);
        }
#line 297 "clause_to_proc.m"
        check_hlds__clause_to_proc__ApplicableProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 0)));
#line 297 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 1)));
#line 297 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 2)));
#line 297 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 3)));
#line 297 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 4)));
#line 301 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__ApplicableProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "clause_to_proc.m"
          {
#line 300 "clause_to_proc.m"
            MR_Word base;
#line 300 "clause_to_proc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "clause_to_proc.m"
            *check_hlds__clause_to_proc__HeadVar__3_3 = base;
#line 300 "clause_to_proc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
#line 300 "clause_to_proc.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
#line 300 "clause_to_proc.m"
          }
#line 301 "clause_to_proc.m"
        else
#line 302 "clause_to_proc.m"
          {
#line 302 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ApplicableProcIds_10, (MR_Integer) 0)));

#line 303 "clause_to_proc.m"
            {
#line 303 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (check_hlds__clause_to_proc__ProcId_2)), check_hlds__clause_to_proc__ProcIds_11);
            }
#line 305 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 304 "clause_to_proc.m"
              {
#line 304 "clause_to_proc.m"
                MR_Word base;
#line 304 "clause_to_proc.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "clause_to_proc.m"
                *check_hlds__clause_to_proc__HeadVar__3_3 = base;
#line 304 "clause_to_proc.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
#line 304 "clause_to_proc.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
#line 304 "clause_to_proc.m"
              }
#line 305 "clause_to_proc.m"
            else
#line 306 "clause_to_proc.m"
              *check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__MatchingClausesTail_9;
#line 302 "clause_to_proc.m"
          }
#line 295 "clause_to_proc.m"
      }
#line 294 "clause_to_proc.m"
  }
#line 291 "clause_to_proc.m"
}

#line 279 "clause_to_proc.m"
static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
#line 279 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Arg_4,
#line 279 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10)
#line 279 "clause_to_proc.m"
{
#line 281 "clause_to_proc.m"
  {
#line 281 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 281 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
#line 281 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Var_6;
#line 281 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__MaybeNameMode_7;

#line 282 "clause_to_proc.m"
    {
#line 282 "clause_to_proc.m"
      check_hlds__clause_to_proc__Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
#line 283 "clause_to_proc.m"
    {
#line 283 "clause_to_proc.m"
      check_hlds__clause_to_proc__MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
#line 287 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__MaybeNameMode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "clause_to_proc.m"
      check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10;
#line 287 "clause_to_proc.m"
    else
#line 285 "clause_to_proc.m"
      {
#line 285 "clause_to_proc.m"
        MR_String check_hlds__clause_to_proc__Name_8;
#line 285 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__MaybeNameMode_7, (MR_Integer) 0)));
#line 285 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_9_9;

#line 285 "clause_to_proc.m"
        check_hlds__clause_to_proc__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 0)));
#line 285 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 1)));
#line 286 "clause_to_proc.m"
        {
#line 286 "clause_to_proc.m"
          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__Var_6, check_hlds__clause_to_proc__Name_8, check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11);
        }
#line 285 "clause_to_proc.m"
      }
#line 281 "clause_to_proc.m"
    return check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
#line 281 "clause_to_proc.m"
  }
#line 279 "clause_to_proc.m"
}

#line 270 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
#line 270 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1)
#line 270 "clause_to_proc.m"
{
#line 272 "clause_to_proc.m"
  while (MR_TRUE)
#line 272 "clause_to_proc.m"
    {
#line 272 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 272 "clause_to_proc.m"
      {
#line 272 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 272 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goal_2;
#line 272 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goals_3;

#line 272 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 272 "clause_to_proc.m"
          {
#line 272 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "clause_to_proc.m"
            {
#line 274 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__V_4_4;

#line 274 "clause_to_proc.m"
              {
#line 274 "clause_to_proc.m"
                check_hlds__clause_to_proc__V_4_4 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__clause_to_proc__Goal_2);
              }
#line 274 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__V_4_4 == (MR_Integer) 0);
#line 274 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 274 "clause_to_proc.m"
            }
#line 275 "clause_to_proc.m"
            if (!(check_hlds__clause_to_proc__succeeded))
#line 276 "clause_to_proc.m"
              {
#line 276 "clause_to_proc.m"
                /* direct tailcall eliminated */
#line 276 "clause_to_proc.m"
                {
#line 276 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__Goals_3;

#line 276 "clause_to_proc.m"
                  check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 276 "clause_to_proc.m"
                }
#line 276 "clause_to_proc.m"
                continue;
#line 276 "clause_to_proc.m"
              }
#line 272 "clause_to_proc.m"
          }
#line 272 "clause_to_proc.m"
        return check_hlds__clause_to_proc__succeeded;
#line 272 "clause_to_proc.m"
      }
#line 272 "clause_to_proc.m"
      break;
#line 272 "clause_to_proc.m"
    }
#line 270 "clause_to_proc.m"
}

#line 177 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
#line 177 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
#line 177 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4)
#line 177 "clause_to_proc.m"
{
#line 180 "clause_to_proc.m"
  while (MR_TRUE)
#line 180 "clause_to_proc.m"
    {
#line 180 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 180 "clause_to_proc.m"
      {
#line 180 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 180 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3;
#line 180 "clause_to_proc.m"
        else
#line 181 "clause_to_proc.m"
          {
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 181 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Proc0_13;
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Proc_14;
#line 181 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;
#line 182 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv0_Proc0_13;

#line 182 "clause_to_proc.m"
            {
#line 182 "clause_to_proc.m"
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_19_19, check_hlds__clause_to_proc__TypeCtorInfo_20_20, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, ((MR_Box) (check_hlds__clause_to_proc__ProcId_9)), &check_hlds__clause_to_proc__conv0_Proc0_13);
            }
#line 182 "clause_to_proc.m"
            check_hlds__clause_to_proc__Proc0_13 = ((MR_Word) check_hlds__clause_to_proc__conv0_Proc0_13);
#line 183 "clause_to_proc.m"
            {
#line 183 "clause_to_proc.m"
              check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(check_hlds__clause_to_proc__ProcId_9, check_hlds__clause_to_proc__ClausesInfo_2, check_hlds__clause_to_proc__Proc0_13, &check_hlds__clause_to_proc__Proc_14);
            }
#line 184 "clause_to_proc.m"
            {
#line 184 "clause_to_proc.m"
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_19_19, check_hlds__clause_to_proc__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__clause_to_proc__ProcId_9)), ((MR_Box) (check_hlds__clause_to_proc__Proc_14)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17);
            }
#line 185 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 185 "clause_to_proc.m"
            {
#line 185 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ProcIds_10;
#line 185 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;

#line 185 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3;
#line 185 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 185 "clause_to_proc.m"
            }
#line 185 "clause_to_proc.m"
            continue;
#line 181 "clause_to_proc.m"
          }
#line 180 "clause_to_proc.m"
      }
#line 180 "clause_to_proc.m"
      break;
#line 180 "clause_to_proc.m"
    }
#line 177 "clause_to_proc.m"
}

#line 148 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
#line 148 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_4,
#line 148 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
#line 148 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9)
#line 148 "clause_to_proc.m"
{
#line 151 "clause_to_proc.m"
  {
#line 151 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 151 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 151 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 151 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredInfo0_6;
#line 152 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_6;
#line 162 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredMarkers_14;

#line 152 "clause_to_proc.m"
    {
#line 152 "clause_to_proc.m"
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), &check_hlds__clause_to_proc__conv0_PredInfo0_6);
    }
#line 152 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredInfo0_6 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_6);
#line 165 "clause_to_proc.m"
    {
#line 165 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredMarkers_14);
    }
#line 166 "clause_to_proc.m"
    {
#line 166 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_14, (MR_Integer) 9);
    }
#line 166 "clause_to_proc.m"
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 156 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 154 "clause_to_proc.m"
      {
#line 154 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__PredInfo_7;
#line 154 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs0_19;
#line 154 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ClausesInfo_20;
#line 154 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ProcIds_21;
#line 154 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs_22;

#line 171 "clause_to_proc.m"
        {
#line 171 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__Procs0_19);
        }
#line 172 "clause_to_proc.m"
        {
#line 172 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__ClausesInfo_20);
        }
#line 173 "clause_to_proc.m"
        {
#line 173 "clause_to_proc.m"
          check_hlds__clause_to_proc__ProcIds_21 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_6);
        }
#line 174 "clause_to_proc.m"
        {
#line 174 "clause_to_proc.m"
          check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(check_hlds__clause_to_proc__ProcIds_21, check_hlds__clause_to_proc__ClausesInfo_20, check_hlds__clause_to_proc__Procs0_19, &check_hlds__clause_to_proc__Procs_22);
        }
#line 175 "clause_to_proc.m"
        {
#line 175 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__clause_to_proc__Procs_22, check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredInfo_7);
        }
#line 155 "clause_to_proc.m"
        {
#line 155 "clause_to_proc.m"
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_7)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);
#line 155 "clause_to_proc.m"
          return;
        }
#line 154 "clause_to_proc.m"
      }
#line 156 "clause_to_proc.m"
    else
#line 155 "clause_to_proc.m"
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8;
#line 151 "clause_to_proc.m"
  }
#line 148 "clause_to_proc.m"
}

#line 59 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(
#line 59 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
#line 59 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo_6,
#line 59 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48,
#line 59 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_49)
#line 59 "clause_to_proc.m"
{
#line 364 "clause_to_proc.m"
  {
#line 364 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_61_61;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeInfo_65_65;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_66_66;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ArgTypes_8;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Subn_9;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredConstraints_10;
#line 364 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__OrigArity_11;
#line 364 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__NumExtraHeadVars_12;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet0_13;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes0_14;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars0_15;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Body0_16;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiVarMaps0_17;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ArgModes_18;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgTypes_24;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars1_25;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars1_26;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraArgModes_27;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgModes_28;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars_29;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet1_30;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes1_31;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistsCastHeadGoals_32;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistConstraints_33;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraModesAndVars_34;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars_35;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet_36;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes_37;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiVarMaps_38;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistsCastExtraGoals_39;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__GoalInfo0_41;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goals0_42;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goals_43;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars_44;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__NonLocals_45;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__GoalInfo_46;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Body_47;
#line 364 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__V_50_50;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_56_56;
#line 364 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_57_57;
#line 390 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgTypes0_19;
#line 390 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars0_20;
#line 390 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars0_21;
#line 390 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraArgModes0_22;
#line 390 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgModes0_23;
#line 379 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeInfo_62_62;
#line 379 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_63_63;
#line 404 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_60_60;
#line 411 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_40_40;

#line 365 "clause_to_proc.m"
    {
#line 365 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__ArgTypes_8);
    }
#line 366 "clause_to_proc.m"
    {
#line 366 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__Subn_9);
    }
#line 367 "clause_to_proc.m"
    {
#line 367 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__PredConstraints_10);
    }
#line 368 "clause_to_proc.m"
    {
#line 368 "clause_to_proc.m"
      check_hlds__clause_to_proc__OrigArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__clause_to_proc__PredInfo_6);
    }
#line 2322 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 369 "clause_to_proc.m"
    {
#line 369 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_50_50 = mercury__list__length_1_f_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__ArgTypes_8);
    }
#line 369 "clause_to_proc.m"
    check_hlds__clause_to_proc__NumExtraHeadVars_12 = (check_hlds__clause_to_proc__V_50_50 - check_hlds__clause_to_proc__OrigArity_11);
#line 371 "clause_to_proc.m"
    {
#line 371 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarSet0_13);
    }
#line 372 "clause_to_proc.m"
    {
#line 372 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarTypes0_14);
    }
#line 373 "clause_to_proc.m"
    {
#line 373 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__HeadVars0_15);
    }
#line 374 "clause_to_proc.m"
    {
#line 374 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__Body0_16);
    }
#line 375 "clause_to_proc.m"
    {
#line 375 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__RttiVarMaps0_17);
    }
#line 376 "clause_to_proc.m"
    {
#line 376 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__ArgModes_18);
    }
#line 379 "clause_to_proc.m"
    {
#line 379 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = mercury__list__drop_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgTypes_8, &check_hlds__clause_to_proc__OrigArgTypes0_19);
    }
#line 379 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 379 "clause_to_proc.m"
      {
#line 2370 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeInfo_62_62 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
#line 380 "clause_to_proc.m"
        {
#line 380 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeInfo_62_62, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__HeadVars0_15, &check_hlds__clause_to_proc__ExtraHeadVars0_20, &check_hlds__clause_to_proc__OrigHeadVars0_21);
        }
#line 379 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 379 "clause_to_proc.m"
          {
#line 2381 "check_hlds.clause_to_proc.c"
            check_hlds__clause_to_proc__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 382 "clause_to_proc.m"
            {
#line 382 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_63_63, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgModes_18, &check_hlds__clause_to_proc__ExtraArgModes0_22, &check_hlds__clause_to_proc__OrigArgModes0_23);
            }
#line 379 "clause_to_proc.m"
          }
#line 379 "clause_to_proc.m"
      }
#line 390 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 385 "clause_to_proc.m"
      {
#line 385 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigArgTypes_24 = check_hlds__clause_to_proc__OrigArgTypes0_19;
#line 386 "clause_to_proc.m"
        check_hlds__clause_to_proc__ExtraHeadVars1_25 = check_hlds__clause_to_proc__ExtraHeadVars0_20;
#line 387 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigHeadVars1_26 = check_hlds__clause_to_proc__OrigHeadVars0_21;
#line 388 "clause_to_proc.m"
        check_hlds__clause_to_proc__ExtraArgModes_27 = check_hlds__clause_to_proc__ExtraArgModes0_22;
#line 389 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigArgModes_28 = check_hlds__clause_to_proc__OrigArgModes0_23;
#line 385 "clause_to_proc.m"
      }
#line 390 "clause_to_proc.m"
    else
#line 391 "clause_to_proc.m"
      {
#line 391 "clause_to_proc.m"
        {
#line 391 "clause_to_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
#line 391 "clause_to_proc.m"
          return;
        }
#line 391 "clause_to_proc.m"
      }
#line 397 "clause_to_proc.m"
    {
#line 397 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__OrigArgTypes_24, check_hlds__clause_to_proc__OrigArgModes_28, check_hlds__clause_to_proc__OrigHeadVars1_26, &check_hlds__clause_to_proc__OrigHeadVars_29, check_hlds__clause_to_proc__VarSet0_13, &check_hlds__clause_to_proc__VarSet1_30, check_hlds__clause_to_proc__VarTypes0_14, &check_hlds__clause_to_proc__VarTypes1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastHeadGoals_32);
    }
#line 404 "clause_to_proc.m"
    check_hlds__clause_to_proc__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 0)));
#line 404 "clause_to_proc.m"
    check_hlds__clause_to_proc__ExistConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 1)));
#line 2430 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeInfo_65_65 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
#line 405 "clause_to_proc.m"
    {
#line 405 "clause_to_proc.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraArgModes_27, check_hlds__clause_to_proc__ExtraHeadVars1_25, &check_hlds__clause_to_proc__ExtraModesAndVars_34);
    }
#line 407 "clause_to_proc.m"
    {
#line 407 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__ExistConstraints_33, check_hlds__clause_to_proc__ExtraModesAndVars_34, &check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__VarSet1_30, &check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes1_31, &check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__RttiVarMaps0_17, &check_hlds__clause_to_proc__RttiVarMaps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
#line 411 "clause_to_proc.m"
    check_hlds__clause_to_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 0)));
#line 411 "clause_to_proc.m"
    check_hlds__clause_to_proc__GoalInfo0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 1)));
#line 412 "clause_to_proc.m"
    {
#line 412 "clause_to_proc.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__clause_to_proc__Body0_16, &check_hlds__clause_to_proc__Goals0_42);
    }
#line 2451 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 413 "clause_to_proc.m"
    {
#line 413 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__ExistsCastHeadGoals_32, check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
#line 413 "clause_to_proc.m"
    {
#line 413 "clause_to_proc.m"
      check_hlds__clause_to_proc__Goals_43 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__Goals0_42, check_hlds__clause_to_proc__V_56_56);
    }
#line 414 "clause_to_proc.m"
    {
#line 414 "clause_to_proc.m"
      check_hlds__clause_to_proc__HeadVars_44 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__OrigHeadVars_29);
    }
#line 415 "clause_to_proc.m"
    {
#line 415 "clause_to_proc.m"
      check_hlds__clause_to_proc__NonLocals_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__HeadVars_44);
    }
#line 416 "clause_to_proc.m"
    {
#line 416 "clause_to_proc.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocals_45, check_hlds__clause_to_proc__GoalInfo0_41, &check_hlds__clause_to_proc__GoalInfo_46);
    }
#line 417 "clause_to_proc.m"
    {
#line 417 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 417 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 417 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 417 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 2) = ((MR_Box) (check_hlds__clause_to_proc__Goals_43));
#line 417 "clause_to_proc.m"
    }
#line 417 "clause_to_proc.m"
    {
#line 417 "clause_to_proc.m"
      check_hlds__clause_to_proc__Body_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_57_57));
#line 417 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_46));
#line 417 "clause_to_proc.m"
    }
#line 418 "clause_to_proc.m"
    {
#line 418 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__HeadVars_44, check_hlds__clause_to_proc__Body_47, check_hlds__clause_to_proc__RttiVarMaps_38, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_49);
#line 418 "clause_to_proc.m"
      return;
    }
#line 364 "clause_to_proc.m"
  }
#line 59 "clause_to_proc.m"
}

#line 326 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 326 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 326 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
#line 326 "clause_to_proc.m"
{
#line 326 "clause_to_proc.m"
  {
#line 326 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 326 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15;

#line 326 "clause_to_proc.m"
    {
#line 326 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15);
    }
#line 326 "clause_to_proc.m"
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15));
#line 326 "clause_to_proc.m"
  }
#line 326 "clause_to_proc.m"
}

#line 54 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0(
#line 54 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredIds_4,
#line 54 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8,
#line 54 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9)
#line 54 "clause_to_proc.m"
{
#line 324 "clause_to_proc.m"
  {
#line 324 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 324 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
#line 324 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable_7;
#line 324 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_10_10;
#line 326 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

#line 325 "clause_to_proc.m"
    {
#line 325 "clause_to_proc.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
#line 326 "clause_to_proc.m"
    {
#line 326 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 326 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_6[0]));
#line 326 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 1) = ((MR_Box) (check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1));
#line 326 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 3) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8));
#line 326 "clause_to_proc.m"
    }
#line 326 "clause_to_proc.m"
    {
#line 326 "clause_to_proc.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], check_hlds__clause_to_proc__V_10_10, check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
#line 326 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
#line 328 "clause_to_proc.m"
    {
#line 328 "clause_to_proc.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
#line 328 "clause_to_proc.m"
      return;
    }
#line 324 "clause_to_proc.m"
  }
#line 54 "clause_to_proc.m"
}

#line 48 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(
#line 48 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo0_4,
#line 48 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__PredInfo_5,
#line 48 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__MaybeProcId_6)
#line 48 "clause_to_proc.m"
{
#line 100 "clause_to_proc.m"
  {
#line 100 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 100 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Procs0_7;
#line 100 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredOrFunc_8;
#line 105 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_28_28;
#line 105 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_29_29;

#line 101 "clause_to_proc.m"
    {
#line 101 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__clause_to_proc__PredInfo0_4, &check_hlds__clause_to_proc__Procs0_7);
    }
#line 102 "clause_to_proc.m"
    {
#line 102 "clause_to_proc.m"
      check_hlds__clause_to_proc__PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__clause_to_proc__PredInfo0_4);
    }
#line 105 "clause_to_proc.m"
    check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__PredOrFunc_8 == (MR_Integer) 1);
#line 105 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 105 "clause_to_proc.m"
      {
#line 2646 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 2648 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 106 "clause_to_proc.m"
        {
#line 106 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0(check_hlds__clause_to_proc__TypeCtorInfo_28_28, check_hlds__clause_to_proc__TypeCtorInfo_29_29, check_hlds__clause_to_proc__Procs0_7);
        }
#line 105 "clause_to_proc.m"
      }
#line 131 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 115 "clause_to_proc.m"
      {
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__TypeCtorInfo_30_30;
#line 115 "clause_to_proc.m"
        MR_Integer check_hlds__clause_to_proc__PredArity_9;
#line 115 "clause_to_proc.m"
        MR_Integer check_hlds__clause_to_proc__FuncArity_10;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__InMode_11;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FuncArgModes_13;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FuncRetMode_14;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__PredArgModes_15;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Context_17;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__InstVarSet_19;
#line 115 "clause_to_proc.m"
        MR_Integer check_hlds__clause_to_proc__ProcId_20;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_22_22;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_24_24;

#line 115 "clause_to_proc.m"
        {
#line 115 "clause_to_proc.m"
          check_hlds__clause_to_proc__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__clause_to_proc__PredInfo0_4);
        }
#line 116 "clause_to_proc.m"
        check_hlds__clause_to_proc__FuncArity_10 = (check_hlds__clause_to_proc__PredArity_9 - (MR_Integer) 1);
#line 117 "clause_to_proc.m"
        {
#line 117 "clause_to_proc.m"
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__clause_to_proc__InMode_11);
        }
#line 118 "clause_to_proc.m"
        {
#line 118 "clause_to_proc.m"
          parse_tree__prog_mode__out_mode_1_p_0(&check_hlds__clause_to_proc__FuncRetMode_14);
        }
#line 2703 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 119 "clause_to_proc.m"
        {
#line 119 "clause_to_proc.m"
          mercury__list__duplicate_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_30_30, check_hlds__clause_to_proc__FuncArity_10, ((MR_Box) (check_hlds__clause_to_proc__InMode_11)), &check_hlds__clause_to_proc__FuncArgModes_13);
        }
#line 121 "clause_to_proc.m"
        {
#line 121 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_22_22, 0) = ((MR_Box) (check_hlds__clause_to_proc__FuncRetMode_14));
#line 121 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "clause_to_proc.m"
        }
#line 121 "clause_to_proc.m"
        {
#line 121 "clause_to_proc.m"
          mercury__list__append_3_p_1(check_hlds__clause_to_proc__TypeCtorInfo_30_30, check_hlds__clause_to_proc__FuncArgModes_13, check_hlds__clause_to_proc__V_22_22, &check_hlds__clause_to_proc__PredArgModes_15);
        }
#line 123 "clause_to_proc.m"
        {
#line 123 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__clause_to_proc__PredInfo0_4, &check_hlds__clause_to_proc__Context_17);
        }
#line 125 "clause_to_proc.m"
        {
#line 125 "clause_to_proc.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &check_hlds__clause_to_proc__InstVarSet_19);
        }
#line 127 "clause_to_proc.m"
        {
#line 127 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_24_24, 0) = ((MR_Box) (check_hlds__clause_to_proc__PredArgModes_15));
#line 127 "clause_to_proc.m"
        }
#line 127 "clause_to_proc.m"
        {
#line 127 "clause_to_proc.m"
          hlds__make_hlds__add_new_proc_12_p_0(check_hlds__clause_to_proc__InstVarSet_19, check_hlds__clause_to_proc__PredArity_9, check_hlds__clause_to_proc__PredArgModes_15, check_hlds__clause_to_proc__V_24_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__clause_to_proc_scalar_common_5[0]), check_hlds__clause_to_proc__Context_17, (MR_Integer) 1, check_hlds__clause_to_proc__PredInfo0_4, check_hlds__clause_to_proc__PredInfo_5, &check_hlds__clause_to_proc__ProcId_20);
        }
#line 130 "clause_to_proc.m"
        {
#line 130 "clause_to_proc.m"
          MR_Word base;
#line 130 "clause_to_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 130 "clause_to_proc.m"
          *check_hlds__clause_to_proc__MaybeProcId_6 = base;
#line 130 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ProcId_20));
#line 130 "clause_to_proc.m"
        }
#line 115 "clause_to_proc.m"
      }
#line 131 "clause_to_proc.m"
    else
#line 132 "clause_to_proc.m"
      {
#line 132 "clause_to_proc.m"
        *check_hlds__clause_to_proc__PredInfo_5 = check_hlds__clause_to_proc__PredInfo0_4;
#line 133 "clause_to_proc.m"
        *check_hlds__clause_to_proc__MaybeProcId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "clause_to_proc.m"
      }
#line 100 "clause_to_proc.m"
  }
#line 48 "clause_to_proc.m"
}

#line 45 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(
#line 45 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 45 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_2,
#line 45 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__Preds_3)
#line 45 "clause_to_proc.m"
{
#line 93 "clause_to_proc.m"
  while (MR_TRUE)
#line 93 "clause_to_proc.m"
    {
#line 93 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 93 "clause_to_proc.m"
      {
#line 93 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 93 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "clause_to_proc.m"
          *check_hlds__clause_to_proc__Preds_3 = check_hlds__clause_to_proc__HeadVar__2_2;
#line 93 "clause_to_proc.m"
        else
#line 94 "clause_to_proc.m"
          {
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PredIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PredInfo0_9;
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PredInfo_10;
#line 94 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Preds1_12;
#line 95 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_9;
#line 96 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_11_11;

#line 95 "clause_to_proc.m"
            {
#line 95 "clause_to_proc.m"
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_13_13, check_hlds__clause_to_proc__TypeCtorInfo_14_14, check_hlds__clause_to_proc__HeadVar__2_2, ((MR_Box) (check_hlds__clause_to_proc__PredId_5)), &check_hlds__clause_to_proc__conv0_PredInfo0_9);
            }
#line 95 "clause_to_proc.m"
            check_hlds__clause_to_proc__PredInfo0_9 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_9);
#line 96 "clause_to_proc.m"
            {
#line 96 "clause_to_proc.m"
              check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(check_hlds__clause_to_proc__PredInfo0_9, &check_hlds__clause_to_proc__PredInfo_10, &check_hlds__clause_to_proc__V_11_11);
            }
#line 97 "clause_to_proc.m"
            {
#line 97 "clause_to_proc.m"
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_13_13, check_hlds__clause_to_proc__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__clause_to_proc__PredId_5)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_10)), check_hlds__clause_to_proc__HeadVar__2_2, &check_hlds__clause_to_proc__Preds1_12);
            }
#line 98 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 98 "clause_to_proc.m"
            {
#line 98 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__PredIds_6;
#line 98 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__2__tmp_copy_2 = check_hlds__clause_to_proc__Preds1_12;

#line 98 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__2_2 = check_hlds__clause_to_proc__HeadVar__2__tmp_copy_2;
#line 98 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 98 "clause_to_proc.m"
            }
#line 98 "clause_to_proc.m"
            continue;
#line 94 "clause_to_proc.m"
          }
#line 93 "clause_to_proc.m"
      }
#line 93 "clause_to_proc.m"
      break;
#line 93 "clause_to_proc.m"
    }
#line 45 "clause_to_proc.m"
}

#line 257 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 257 "clause_to_proc.m"
{
#line 257 "clause_to_proc.m"
  {
#line 257 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 257 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 257 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv6_HeadVar__3_3;

#line 257 "clause_to_proc.m"
    {
#line 257 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv6_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 257 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv6_HeadVar__3_3));
#line 257 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 257 "clause_to_proc.m"
  }
#line 257 "clause_to_proc.m"
}

#line 256 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
#line 256 "clause_to_proc.m"
{
#line 256 "clause_to_proc.m"
  {
#line 256 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
#line 256 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 256 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv5_HeadVar__2_2;

#line 256 "clause_to_proc.m"
    {
#line 256 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv5_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
#line 256 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv5_HeadVar__2_2));
#line 256 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_2;
#line 256 "clause_to_proc.m"
  }
#line 256 "clause_to_proc.m"
}

#line 211 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
#line 211 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg)
#line 211 "clause_to_proc.m"
{
#line 211 "clause_to_proc.m"
  {
#line 211 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 211 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

#line 211 "clause_to_proc.m"
    {
#line 211 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__211__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
#line 211 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 211 "clause_to_proc.m"
  }
#line 211 "clause_to_proc.m"
}

#line 210 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
#line 210 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg)
#line 210 "clause_to_proc.m"
{
#line 210 "clause_to_proc.m"
  {
#line 210 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 210 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

#line 210 "clause_to_proc.m"
    {
#line 210 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__210__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
#line 210 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 210 "clause_to_proc.m"
  }
#line 210 "clause_to_proc.m"
}

#line 209 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 209 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 209 "clause_to_proc.m"
{
#line 209 "clause_to_proc.m"
  {
#line 209 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 209 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 209 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11;

#line 209 "clause_to_proc.m"
    {
#line 209 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__set_arg_names_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 209 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11));
#line 209 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 209 "clause_to_proc.m"
  }
#line 209 "clause_to_proc.m"
}

#line 257 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 257 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 257 "clause_to_proc.m"
{
#line 257 "clause_to_proc.m"
  {
#line 257 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 257 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 257 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv1_HeadVar__3_3;

#line 257 "clause_to_proc.m"
    {
#line 257 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv1_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 257 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv1_HeadVar__3_3));
#line 257 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 257 "clause_to_proc.m"
  }
#line 257 "clause_to_proc.m"
}

#line 256 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 256 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
#line 256 "clause_to_proc.m"
{
#line 256 "clause_to_proc.m"
  {
#line 256 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
#line 256 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 256 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_HeadVar__2_2;

#line 256 "clause_to_proc.m"
    {
#line 256 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
#line 256 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv0_HeadVar__2_2));
#line 256 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_2;
#line 256 "clause_to_proc.m"
  }
#line 256 "clause_to_proc.m"
}

#line 38 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(
#line 38 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__ProcId_5,
#line 38 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ClausesInfo_6,
#line 38 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_79,
#line 38 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Proc_80)
#line 38 "clause_to_proc.m"
{
#line 187 "clause_to_proc.m"
  {
#line 187 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 0)));
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 3)));
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 4)));
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ClausesRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 5)));
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 7)));
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Clauses_17;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__MatchingClauses_18;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ClausesDisjuncts_19;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__StateVarWarnings_20;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet_33;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goal_64;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVarList_78;
#line 187 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81;
#line 188 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 1)));
#line 188 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 2)));
#line 188 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc___ItemNumbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 6)));
#line 188 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc___HaveForeignClauses_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 8)));

#line 190 "clause_to_proc.m"
    {
#line 190 "clause_to_proc.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__clause_to_proc__ClausesRep_13, &check_hlds__clause_to_proc__Clauses_17);
    }
#line 191 "clause_to_proc.m"
    {
#line 191 "clause_to_proc.m"
      check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_17, check_hlds__clause_to_proc__ProcId_5, &check_hlds__clause_to_proc__MatchingClauses_18);
    }
#line 192 "clause_to_proc.m"
    {
#line 192 "clause_to_proc.m"
      check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__MatchingClauses_18, &check_hlds__clause_to_proc__ClausesDisjuncts_19, &check_hlds__clause_to_proc__StateVarWarnings_20);
    }
#line 197 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__StateVarWarnings_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "clause_to_proc.m"
      check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81 = check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_79;
#line 197 "clause_to_proc.m"
    else
#line 199 "clause_to_proc.m"
      {
#line 199 "clause_to_proc.m"
        hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(check_hlds__clause_to_proc__StateVarWarnings_20, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_79, &check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81);
      }
#line 228 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__ClausesDisjuncts_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "clause_to_proc.m"
      {
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Context_70;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo0_71;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo1_72;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__NonLocalVars_73;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo2_74;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo_77;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_83_83;
#line 239 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_87_87;

#line 238 "clause_to_proc.m"
        {
#line 238 "clause_to_proc.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81, &check_hlds__clause_to_proc__Context_70);
        }
#line 244 "clause_to_proc.m"
        check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 245 "clause_to_proc.m"
        {
#line 245 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_71);
        }
#line 246 "clause_to_proc.m"
        {
#line 246 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_70, check_hlds__clause_to_proc__GoalInfo0_71, &check_hlds__clause_to_proc__GoalInfo1_72);
        }
#line 250 "clause_to_proc.m"
        {
#line 250 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_83_83 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
        }
#line 249 "clause_to_proc.m"
        {
#line 249 "clause_to_proc.m"
          check_hlds__clause_to_proc__NonLocalVars_73 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_83_83);
        }
#line 251 "clause_to_proc.m"
        {
#line 251 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_73, check_hlds__clause_to_proc__GoalInfo1_72, &check_hlds__clause_to_proc__GoalInfo2_74);
        }
#line 255 "clause_to_proc.m"
        {
#line 255 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_19);
        }
#line 259 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 256 "clause_to_proc.m"
          {
#line 256 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
#line 256 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PurityList_75;
#line 256 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Purity_76;
#line 257 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv2_Purity_76;

#line 256 "clause_to_proc.m"
            {
#line 256 "clause_to_proc.m"
              check_hlds__clause_to_proc__PurityList_75 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_111_111, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[2], check_hlds__clause_to_proc__ClausesDisjuncts_19);
            }
#line 257 "clause_to_proc.m"
            {
#line 257 "clause_to_proc.m"
              check_hlds__clause_to_proc__conv2_Purity_76 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_111_111, check_hlds__clause_to_proc__TypeCtorInfo_111_111, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[3], check_hlds__clause_to_proc__PurityList_75, ((MR_Box) ((MR_Integer) 0)));
            }
#line 257 "clause_to_proc.m"
            check_hlds__clause_to_proc__Purity_76 = ((MR_Word) check_hlds__clause_to_proc__conv2_Purity_76);
#line 258 "clause_to_proc.m"
            {
#line 258 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_76, check_hlds__clause_to_proc__GoalInfo2_74, &check_hlds__clause_to_proc__GoalInfo_77);
            }
#line 256 "clause_to_proc.m"
          }
#line 259 "clause_to_proc.m"
        else
#line 260 "clause_to_proc.m"
          check_hlds__clause_to_proc__GoalInfo_77 = check_hlds__clause_to_proc__GoalInfo2_74;
#line 263 "clause_to_proc.m"
        {
#line 263 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "clause_to_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 263 "clause_to_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_87_87, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_19));
#line 263 "clause_to_proc.m"
        }
#line 263 "clause_to_proc.m"
        {
#line 263 "clause_to_proc.m"
          check_hlds__clause_to_proc__Goal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "clause_to_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_87_87));
#line 263 "clause_to_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_77));
#line 263 "clause_to_proc.m"
        }
#line 239 "clause_to_proc.m"
      }
#line 228 "clause_to_proc.m"
    else
#line 228 "clause_to_proc.m"
      {
#line 228 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_19, (MR_Integer) 1)));
#line 228 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_19, (MR_Integer) 0)));
#line 228 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_172_172, (MR_Integer) 1)));
#line 228 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_172_172, (MR_Integer) 0)));

#line 228 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__V_171_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "clause_to_proc.m"
          {
#line 213 "clause_to_proc.m"
            if (((((MR_tag((MR_Word) check_hlds__clause_to_proc__V_174_174)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 206 "clause_to_proc.m"
              {
#line 206 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 4)));
#line 206 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__ExtraArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 5)));
#line 206 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 6)));
#line 206 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_90_90;
#line 206 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_95_95;
#line 205 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 1)));
#line 205 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 2)));
#line 205 "clause_to_proc.m"
                MR_Integer check_hlds__clause_to_proc__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 3)));
#line 205 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 7)));
#line 209 "clause_to_proc.m"
                MR_Box check_hlds__clause_to_proc__conv4_VarSet_33;

#line 209 "clause_to_proc.m"
                {
#line 209 "clause_to_proc.m"
                  check_hlds__clause_to_proc__conv4_VarSet_33 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[4], check_hlds__clause_to_proc__Args_29, ((MR_Box) (check_hlds__clause_to_proc__VarSet0_8)));
                }
#line 209 "clause_to_proc.m"
                check_hlds__clause_to_proc__VarSet_33 = ((MR_Word) check_hlds__clause_to_proc__conv4_VarSet_33);
#line 210 "clause_to_proc.m"
                {
#line 210 "clause_to_proc.m"
                  check_hlds__clause_to_proc__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 210 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[1]));
#line 210 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4));
#line 210 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 210 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 3) = ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_30));
#line 210 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "clause_to_proc.m"
                }
#line 210 "clause_to_proc.m"
                {
#line 210 "clause_to_proc.m"
                  mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_90_90, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "extra_args");
                }
#line 211 "clause_to_proc.m"
                {
#line 211 "clause_to_proc.m"
                  check_hlds__clause_to_proc__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 211 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[2]));
#line 211 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5));
#line 211 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 3) = ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31));
#line 211 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "clause_to_proc.m"
                }
#line 211 "clause_to_proc.m"
                {
#line 211 "clause_to_proc.m"
                  mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_95_95, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "trace runtime cond");
                }
#line 206 "clause_to_proc.m"
              }
#line 213 "clause_to_proc.m"
            else
#line 224 "clause_to_proc.m"
              check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 227 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goal_64 = check_hlds__clause_to_proc__V_172_172;
#line 202 "clause_to_proc.m"
          }
#line 228 "clause_to_proc.m"
        else
#line 239 "clause_to_proc.m"
          {
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Context_137;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo0_138;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo1_139;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__NonLocalVars_140;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo2_141;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo_144;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_145_145;
#line 239 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_149_149;

#line 235 "clause_to_proc.m"
            {
#line 235 "clause_to_proc.m"
              check_hlds__clause_to_proc__Context_137 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__clause_to_proc__V_173_173);
            }
#line 244 "clause_to_proc.m"
            check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 245 "clause_to_proc.m"
            {
#line 245 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_138);
            }
#line 246 "clause_to_proc.m"
            {
#line 246 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_137, check_hlds__clause_to_proc__GoalInfo0_138, &check_hlds__clause_to_proc__GoalInfo1_139);
            }
#line 250 "clause_to_proc.m"
            {
#line 250 "clause_to_proc.m"
              check_hlds__clause_to_proc__V_145_145 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
            }
#line 249 "clause_to_proc.m"
            {
#line 249 "clause_to_proc.m"
              check_hlds__clause_to_proc__NonLocalVars_140 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_145_145);
            }
#line 251 "clause_to_proc.m"
            {
#line 251 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_140, check_hlds__clause_to_proc__GoalInfo1_139, &check_hlds__clause_to_proc__GoalInfo2_141);
            }
#line 255 "clause_to_proc.m"
            {
#line 255 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_19);
            }
#line 259 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 256 "clause_to_proc.m"
              {
#line 256 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_111_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
#line 256 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__PurityList_123;
#line 256 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Purity_124;
#line 257 "clause_to_proc.m"
                MR_Box check_hlds__clause_to_proc__conv7_Purity_124;

#line 256 "clause_to_proc.m"
                {
#line 256 "clause_to_proc.m"
                  check_hlds__clause_to_proc__PurityList_123 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_111_129, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[5], check_hlds__clause_to_proc__ClausesDisjuncts_19);
                }
#line 257 "clause_to_proc.m"
                {
#line 257 "clause_to_proc.m"
                  check_hlds__clause_to_proc__conv7_Purity_124 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_111_129, check_hlds__clause_to_proc__TypeCtorInfo_111_129, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[6], check_hlds__clause_to_proc__PurityList_123, ((MR_Box) ((MR_Integer) 0)));
                }
#line 257 "clause_to_proc.m"
                check_hlds__clause_to_proc__Purity_124 = ((MR_Word) check_hlds__clause_to_proc__conv7_Purity_124);
#line 258 "clause_to_proc.m"
                {
#line 258 "clause_to_proc.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_124, check_hlds__clause_to_proc__GoalInfo2_141, &check_hlds__clause_to_proc__GoalInfo_144);
                }
#line 256 "clause_to_proc.m"
              }
#line 259 "clause_to_proc.m"
            else
#line 260 "clause_to_proc.m"
              check_hlds__clause_to_proc__GoalInfo_144 = check_hlds__clause_to_proc__GoalInfo2_141;
#line 263 "clause_to_proc.m"
            {
#line 263 "clause_to_proc.m"
              check_hlds__clause_to_proc__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "clause_to_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 263 "clause_to_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_149_149, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_19));
#line 263 "clause_to_proc.m"
            }
#line 263 "clause_to_proc.m"
            {
#line 263 "clause_to_proc.m"
              check_hlds__clause_to_proc__Goal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "clause_to_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_149_149));
#line 263 "clause_to_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_144));
#line 263 "clause_to_proc.m"
            }
#line 239 "clause_to_proc.m"
          }
#line 228 "clause_to_proc.m"
      }
#line 267 "clause_to_proc.m"
    {
#line 267 "clause_to_proc.m"
      check_hlds__clause_to_proc__HeadVarList_78 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
    }
#line 268 "clause_to_proc.m"
    {
#line 268 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_33, check_hlds__clause_to_proc__VarTypes_11, check_hlds__clause_to_proc__HeadVarList_78, check_hlds__clause_to_proc__Goal_64, check_hlds__clause_to_proc__RttiInfo_15, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_80);
#line 268 "clause_to_proc.m"
      return;
    }
#line 187 "clause_to_proc.m"
  }
#line 38 "clause_to_proc.m"
}

#line 138 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 138 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 138 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
#line 138 "clause_to_proc.m"
{
#line 138 "clause_to_proc.m"
  {
#line 138 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 138 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9;

#line 138 "clause_to_proc.m"
    {
#line 138 "clause_to_proc.m"
      check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9);
    }
#line 138 "clause_to_proc.m"
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9));
#line 138 "clause_to_proc.m"
  }
#line 138 "clause_to_proc.m"
}

#line 35 "clause_to_proc.m"
void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(
#line 35 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredIds_4,
#line 35 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8,
#line 35 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9)
#line 35 "clause_to_proc.m"
{
#line 136 "clause_to_proc.m"
  {
#line 136 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 136 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
#line 136 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable_7;
#line 138 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

#line 137 "clause_to_proc.m"
    {
#line 137 "clause_to_proc.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
#line 138 "clause_to_proc.m"
    {
#line 138 "clause_to_proc.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[1], check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
#line 138 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
#line 140 "clause_to_proc.m"
    {
#line 140 "clause_to_proc.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
#line 140 "clause_to_proc.m"
      return;
    }
#line 136 "clause_to_proc.m"
  }
#line 35 "clause_to_proc.m"
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
