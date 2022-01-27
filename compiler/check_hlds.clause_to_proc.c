/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 141 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 144 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 150 "check_hlds.clause_to_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

#line 153 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

#line 214 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__214__1_2_p_0(
#line 214 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31,
#line 214 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_99);

#line 213 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__213__1_2_p_0(
#line 213 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ExtraArgs_30,
#line 213 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_94);

#line 553 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Var_2,
#line 553 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__Num_3,
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
#line 553 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5);

#line 479 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_2,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);

#line 424 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_14,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36);

#line 356 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
#line 356 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5);

#line 333 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_6,
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
#line 333 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);

#line 313 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
#line 313 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 313 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
#line 313 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

#line 294 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
#line 294 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 294 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
#line 294 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3);

#line 282 "clause_to_proc.m"
static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
#line 282 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Arg_4,
#line 282 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10);

#line 273 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
#line 273 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1);

#line 180 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
#line 180 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4);

#line 151 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
#line 151 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_4,
#line 151 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
#line 151 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);

#line 329 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 329 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3);

#line 260 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 259 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

#line 214 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
#line 214 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg);

#line 213 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
#line 213 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg);

#line 212 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 260 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2);

#line 259 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1);

#line 141 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 141 "clause_to_proc.m"
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



#line 596 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 605 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 613 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 621 "check_hlds.clause_to_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

#line 629 "check_hlds.clause_to_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0
  }
};

#line 214 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__214__1_2_p_0(
#line 214 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31,
#line 214 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_99)
#line 214 "clause_to_proc.m"
{
#line 214 "clause_to_proc.m"
  {
#line 214 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 214 "clause_to_proc.m"
    {
#line 214 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[3], ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_99)));
    }
#line 214 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 214 "clause_to_proc.m"
  }
#line 214 "clause_to_proc.m"
}

#line 213 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__213__1_2_p_0(
#line 213 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ExtraArgs_30,
#line 213 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__2_94)
#line 213 "clause_to_proc.m"
{
#line 213 "clause_to_proc.m"
  {
#line 213 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 213 "clause_to_proc.m"
    {
#line 213 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[1], ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_30)), ((MR_Box) (check_hlds__clause_to_proc__HeadVar__2_94)));
    }
#line 213 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 213 "clause_to_proc.m"
  }
#line 213 "clause_to_proc.m"
}

#line 553 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Var_2,
#line 553 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__Num_3,
#line 553 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4,
#line 553 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5)
#line 553 "clause_to_proc.m"
{
#line 556 "clause_to_proc.m"
  while (MR_TRUE)
#line 556 "clause_to_proc.m"
    {
#line 556 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 556 "clause_to_proc.m"
      {
#line 556 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 556 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_5 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
#line 556 "clause_to_proc.m"
        else
#line 557 "clause_to_proc.m"
          {
#line 557 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 557 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 557 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;
#line 557 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__V_23_23;
#line 564 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TVar_16;
#line 559 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_17_17;
#line 560 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_18_18;

#line 559 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgType_11)) == (MR_mktag((MR_Integer) 0)));
#line 559 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 559 "clause_to_proc.m"
              {
#line 559 "clause_to_proc.m"
                check_hlds__clause_to_proc__TVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 0)));
#line 559 "clause_to_proc.m"
                check_hlds__clause_to_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ArgType_11, (MR_Integer) 1)));
#line 560 "clause_to_proc.m"
                {
#line 560 "clause_to_proc.m"
                  check_hlds__clause_to_proc__succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, check_hlds__clause_to_proc__TVar_16, &check_hlds__clause_to_proc__V_18_18);
                }
#line 560 "clause_to_proc.m"
                check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 559 "clause_to_proc.m"
              }
#line 564 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 562 "clause_to_proc.m"
              {
#line 562 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Locn_19;

#line 562 "clause_to_proc.m"
                {
#line 562 "clause_to_proc.m"
                  check_hlds__clause_to_proc__Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_2));
#line 562 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__Locn_19, 1) = ((MR_Box) (check_hlds__clause_to_proc__Num_3));
#line 562 "clause_to_proc.m"
                }
#line 563 "clause_to_proc.m"
                {
#line 563 "clause_to_proc.m"
                  hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(check_hlds__clause_to_proc__TVar_16, check_hlds__clause_to_proc__Locn_19, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22);
                }
#line 562 "clause_to_proc.m"
              }
#line 564 "clause_to_proc.m"
            else
#line 564 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4;
#line 567 "clause_to_proc.m"
            check_hlds__clause_to_proc__V_23_23 = (check_hlds__clause_to_proc__Num_3 + (MR_Integer) 1);
#line 567 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 567 "clause_to_proc.m"
            {
#line 567 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ArgTypes_12;
#line 567 "clause_to_proc.m"
              MR_Integer check_hlds__clause_to_proc__Num__tmp_copy_3 = check_hlds__clause_to_proc__V_23_23;
#line 567 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_22_22;

#line 567 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0__tmp_copy_4;
#line 567 "clause_to_proc.m"
              check_hlds__clause_to_proc__Num_3 = check_hlds__clause_to_proc__Num__tmp_copy_3;
#line 567 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 567 "clause_to_proc.m"
            }
#line 567 "clause_to_proc.m"
            continue;
#line 557 "clause_to_proc.m"
          }
#line 556 "clause_to_proc.m"
      }
#line 556 "clause_to_proc.m"
      break;
#line 556 "clause_to_proc.m"
    }
#line 553 "clause_to_proc.m"
}

#line 479 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_2,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__4_4,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__5_5,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11,
#line 479 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12,
#line 479 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13)
#line 479 "clause_to_proc.m"
{
#line 486 "clause_to_proc.m"
  {
#line 486 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 486 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "clause_to_proc.m"
      {
#line 485 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "clause_to_proc.m"
          {
#line 488 "clause_to_proc.m"
          }
#line 489 "clause_to_proc.m"
        else
#line 490 "clause_to_proc.m"
          {
#line 491 "clause_to_proc.m"
            {
#line 491 "clause_to_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "length mismatch");
#line 491 "clause_to_proc.m"
              return;
            }
#line 490 "clause_to_proc.m"
          }
#line 486 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
#line 486 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
#line 486 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
#line 485 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
#line 486 "clause_to_proc.m"
      }
#line 486 "clause_to_proc.m"
    else
#line 496 "clause_to_proc.m"
      {
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ModeAndVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ModesAndVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Var_39;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Vars_40;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgMode_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 0)));
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Var0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ModeAndVar_37, (MR_Integer) 1)));
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ExistConstraints_53;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69;
#line 496 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80;

#line 498 "clause_to_proc.m"
        {
#line 498 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__ArgMode_45);
        }
#line 546 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 501 "clause_to_proc.m"
          {
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_95;
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Context_47;
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__VarType_48;
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ExtraGoal_49;
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__VarInfo_50;
#line 501 "clause_to_proc.m"
            MR_String check_hlds__clause_to_proc__InternalName_90;
#line 501 "clause_to_proc.m"
            MR_String check_hlds__clause_to_proc__ExternalName_91;
#line 501 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92;

#line 501 "clause_to_proc.m"
            {
#line 501 "clause_to_proc.m"
              mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_47);
            }
#line 948 "check_hlds.clause_to_proc.c"
            check_hlds__clause_to_proc__TypeCtorInfo_15_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 573 "clause_to_proc.m"
            {
#line 573 "clause_to_proc.m"
              mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, &check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92);
            }
#line 574 "clause_to_proc.m"
            {
#line 574 "clause_to_proc.m"
              mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__InternalName_90);
            }
#line 575 "clause_to_proc.m"
            {
#line 575 "clause_to_proc.m"
              mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_90, &check_hlds__clause_to_proc__ExternalName_91);
            }
#line 576 "clause_to_proc.m"
            {
#line 576 "clause_to_proc.m"
              mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_95, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__ExternalName_91, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_92, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66);
            }
#line 503 "clause_to_proc.m"
            {
#line 503 "clause_to_proc.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarType_48);
            }
#line 504 "clause_to_proc.m"
            {
#line 504 "clause_to_proc.m"
              parse_tree__prog_data__add_var_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__VarType_48, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67);
            }
#line 505 "clause_to_proc.m"
            {
#line 505 "clause_to_proc.m"
              hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__Context_47, &check_hlds__clause_to_proc__ExtraGoal_49);
            }
#line 506 "clause_to_proc.m"
            {
#line 506 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_49));
#line 506 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12));
#line 506 "clause_to_proc.m"
            }
#line 512 "clause_to_proc.m"
            {
#line 512 "clause_to_proc.m"
              hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, check_hlds__clause_to_proc__Var0_46, &check_hlds__clause_to_proc__VarInfo_50);
            }
#line 522 "clause_to_proc.m"
#line 522 "clause_to_proc.m"
            switch (MR_tag((MR_Word) check_hlds__clause_to_proc__VarInfo_50)) {
#line 522 "clause_to_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 522 "clause_to_proc.m"
              case (MR_Integer) 0:
#line 543 "clause_to_proc.m"
                {
#line 544 "clause_to_proc.m"
                  {
#line 544 "clause_to_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "rtti_varmaps info not found");
#line 544 "clause_to_proc.m"
                    return;
                  }
#line 543 "clause_to_proc.m"
                }
#line 522 "clause_to_proc.m"
                break;
#line 522 "clause_to_proc.m"
              case (MR_Integer) 1:
#line 514 "clause_to_proc.m"
                {
#line 514 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__TypeInfoType0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__VarInfo_50, (MR_Integer) 0)));
#line 514 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__TypeInfoType_52;
#line 514 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79;

#line 518 "clause_to_proc.m"
                  {
#line 518 "clause_to_proc.m"
                    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__TypeInfoType0_51, &check_hlds__clause_to_proc__TypeInfoType_52);
                  }
#line 519 "clause_to_proc.m"
                  {
#line 519 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(check_hlds__clause_to_proc__Var0_46, check_hlds__clause_to_proc__TypeInfoType_52, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79);
                  }
#line 520 "clause_to_proc.m"
                  {
#line 520 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__TypeInfoType0_51, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_79_79, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
#line 521 "clause_to_proc.m"
                  check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
#line 514 "clause_to_proc.m"
                }
#line 522 "clause_to_proc.m"
                break;
#line 522 "clause_to_proc.m"
              case (MR_Integer) 2:
#line 523 "clause_to_proc.m"
                {
#line 523 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__ExistConstraint_55;
#line 523 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__ConstraintArgs_57;
#line 523 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76;
#line 540 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__V_56_56;

#line 531 "clause_to_proc.m"
                  if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "clause_to_proc.m"
                    {
#line 533 "clause_to_proc.m"
                      {
#line 533 "clause_to_proc.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_extra\'/13", (MR_String) "missing constraint");
#line 533 "clause_to_proc.m"
                        return;
                      }
#line 532 "clause_to_proc.m"
                    }
#line 531 "clause_to_proc.m"
                  else
#line 530 "clause_to_proc.m"
                    {
#line 530 "clause_to_proc.m"
                      check_hlds__clause_to_proc__ExistConstraint_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 530 "clause_to_proc.m"
                      check_hlds__clause_to_proc__ExistConstraints_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 530 "clause_to_proc.m"
                    }
#line 535 "clause_to_proc.m"
                  {
#line 535 "clause_to_proc.m"
                    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(check_hlds__clause_to_proc__ExistConstraint_55, check_hlds__clause_to_proc__Var_39, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76);
                  }
#line 540 "clause_to_proc.m"
                  check_hlds__clause_to_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 0)));
#line 540 "clause_to_proc.m"
                  check_hlds__clause_to_proc__ConstraintArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ExistConstraint_55, (MR_Integer) 1)));
#line 541 "clause_to_proc.m"
                  {
#line 541 "clause_to_proc.m"
                    check_hlds__clause_to_proc__maybe_add_type_info_locns_5_p_0(check_hlds__clause_to_proc__ConstraintArgs_57, check_hlds__clause_to_proc__Var_39, (MR_Integer) 1, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_76_76, &check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80);
                  }
#line 523 "clause_to_proc.m"
                }
#line 522 "clause_to_proc.m"
                break;
#line 522 "clause_to_proc.m"
            }
#line 501 "clause_to_proc.m"
          }
#line 546 "clause_to_proc.m"
        else
#line 547 "clause_to_proc.m"
          {
#line 547 "clause_to_proc.m"
            check_hlds__clause_to_proc__Var_39 = check_hlds__clause_to_proc__Var0_46;
#line 548 "clause_to_proc.m"
            check_hlds__clause_to_proc__ExistConstraints_53 = check_hlds__clause_to_proc__HeadVar__3_3;
#line 547 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_12;
#line 547 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80 = check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_0_10;
#line 547 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_8;
#line 547 "clause_to_proc.m"
            check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_6;
#line 547 "clause_to_proc.m"
          }
#line 550 "clause_to_proc.m"
        {
#line 550 "clause_to_proc.m"
          check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__Subn_2, check_hlds__clause_to_proc__ExistConstraints_53, check_hlds__clause_to_proc__ModesAndVars_38, &check_hlds__clause_to_proc__Vars_40, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_66_66, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_7, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_67_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_9, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_80_80, check_hlds__clause_to_proc__STATE_VARIABLE_RttiVarMaps_11, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_69_69, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_13);
        }
#line 495 "clause_to_proc.m"
        {
#line 495 "clause_to_proc.m"
          MR_Word base;
#line 495 "clause_to_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__5_5 = base;
#line 495 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Var_39));
#line 495 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__Vars_40));
#line 495 "clause_to_proc.m"
        }
#line 496 "clause_to_proc.m"
      }
#line 486 "clause_to_proc.m"
  }
#line 479 "clause_to_proc.m"
}

#line 424 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_13,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Subn_14,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgTypes_15,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ArgModes_16,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34,
#line 424 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35,
#line 424 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36)
#line 424 "clause_to_proc.m"
{
#line 438 "clause_to_proc.m"
  {
#line 438 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 433 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 433 "clause_to_proc.m"
      {
#line 434 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__ArgModes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 435 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "clause_to_proc.m"
      }
#line 438 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 437 "clause_to_proc.m"
      {
#line 437 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35;
#line 437 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33;
#line 437 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31;
#line 437 "clause_to_proc.m"
        *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29;
#line 437 "clause_to_proc.m"
      }
#line 438 "clause_to_proc.m"
    else
#line 449 "clause_to_proc.m"
      {
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgType_21;
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgTypesRest_22;
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgMode_23;
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ArgModesRest_24;
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__HeadVar0_25;
#line 449 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__HeadVarsRest0_26;

#line 439 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 439 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 439 "clause_to_proc.m"
          {
#line 439 "clause_to_proc.m"
            check_hlds__clause_to_proc__ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 0)));
#line 439 "clause_to_proc.m"
            check_hlds__clause_to_proc__ArgTypesRest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgTypes_15, (MR_Integer) 1)));
#line 440 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__ArgModes_16)) == (MR_mktag((MR_Integer) 1)));
#line 440 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 440 "clause_to_proc.m"
              {
#line 440 "clause_to_proc.m"
                check_hlds__clause_to_proc__ArgMode_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 0)));
#line 440 "clause_to_proc.m"
                check_hlds__clause_to_proc__ArgModesRest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ArgModes_16, (MR_Integer) 1)));
#line 441 "clause_to_proc.m"
                check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29)) == (MR_mktag((MR_Integer) 1)));
#line 441 "clause_to_proc.m"
                if (check_hlds__clause_to_proc__succeeded)
#line 441 "clause_to_proc.m"
                  {
#line 441 "clause_to_proc.m"
                    check_hlds__clause_to_proc__HeadVar0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 0)));
#line 441 "clause_to_proc.m"
                    check_hlds__clause_to_proc__HeadVarsRest0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 1)));
#line 441 "clause_to_proc.m"
                  }
#line 440 "clause_to_proc.m"
              }
#line 439 "clause_to_proc.m"
          }
#line 449 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 445 "clause_to_proc.m"
          {
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__HeadVarsRest_27;
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__HeadVar_28;
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
#line 445 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__InternalType_62;

#line 443 "clause_to_proc.m"
            {
#line 443 "clause_to_proc.m"
              check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgTypesRest_22, check_hlds__clause_to_proc__ArgModesRest_24, check_hlds__clause_to_proc__HeadVarsRest0_26, &check_hlds__clause_to_proc__HeadVarsRest_27, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_0_31, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_0_33, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_0_35, &check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39);
            }
#line 460 "clause_to_proc.m"
            {
#line 460 "clause_to_proc.m"
              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__clause_to_proc__Subn_14, check_hlds__clause_to_proc__ArgType_21, &check_hlds__clause_to_proc__InternalType_62);
            }
#line 465 "clause_to_proc.m"
            {
#line 465 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__ArgType_21);
            }
#line 465 "clause_to_proc.m"
            check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 475 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 467 "clause_to_proc.m"
              {
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_15_84;
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Context_63;
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Inst_65;
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__ExtraGoal_66;
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67;
#line 467 "clause_to_proc.m"
                MR_String check_hlds__clause_to_proc__InternalName_79;
#line 467 "clause_to_proc.m"
                MR_String check_hlds__clause_to_proc__ExternalName_80;
#line 467 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81;
#line 471 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__V_64_64;

#line 467 "clause_to_proc.m"
                {
#line 467 "clause_to_proc.m"
                  mercury__term__context_init_1_p_0(&check_hlds__clause_to_proc__Context_63);
                }
#line 468 "clause_to_proc.m"
                {
#line 468 "clause_to_proc.m"
                  parse_tree__prog_data__update_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__InternalType_62, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38, &check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67);
                }
#line 1334 "check_hlds.clause_to_proc.c"
                check_hlds__clause_to_proc__TypeCtorInfo_15_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 573 "clause_to_proc.m"
                {
#line 573 "clause_to_proc.m"
                  mercury__varset__new_var_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, &check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37, &check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81);
                }
#line 574 "clause_to_proc.m"
                {
#line 574 "clause_to_proc.m"
                  mercury__varset__lookup_name_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__HeadVar0_25, &check_hlds__clause_to_proc__InternalName_79);
                }
#line 575 "clause_to_proc.m"
                {
#line 575 "clause_to_proc.m"
                  mercury__string__append_3_p_2((MR_String) "ExistQ", check_hlds__clause_to_proc__InternalName_79, &check_hlds__clause_to_proc__ExternalName_80);
                }
#line 576 "clause_to_proc.m"
                {
#line 576 "clause_to_proc.m"
                  mercury__varset__name_var_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_15_84, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ExternalName_80, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_12_81, check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32);
                }
#line 470 "clause_to_proc.m"
                {
#line 470 "clause_to_proc.m"
                  parse_tree__prog_data__add_var_type_4_p_0(check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__ArgType_21, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_33_67, check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34);
                }
#line 471 "clause_to_proc.m"
                {
#line 471 "clause_to_proc.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__clause_to_proc__ModuleInfo_13, check_hlds__clause_to_proc__ArgMode_23, &check_hlds__clause_to_proc__V_64_64, &check_hlds__clause_to_proc__Inst_65);
                }
#line 472 "clause_to_proc.m"
                {
#line 472 "clause_to_proc.m"
                  hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, check_hlds__clause_to_proc__HeadVar0_25, check_hlds__clause_to_proc__HeadVar_28, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Inst_65, check_hlds__clause_to_proc__Context_63, &check_hlds__clause_to_proc__ExtraGoal_66);
                }
#line 474 "clause_to_proc.m"
                {
#line 474 "clause_to_proc.m"
                  MR_Word base;
#line 474 "clause_to_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "clause_to_proc.m"
                  *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = base;
#line 474 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ExtraGoal_66));
#line 474 "clause_to_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39));
#line 474 "clause_to_proc.m"
                }
#line 467 "clause_to_proc.m"
              }
#line 475 "clause_to_proc.m"
            else
#line 476 "clause_to_proc.m"
              {
#line 476 "clause_to_proc.m"
                check_hlds__clause_to_proc__HeadVar_28 = check_hlds__clause_to_proc__HeadVar0_25;
#line 476 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_36 = check_hlds__clause_to_proc__STATE_VARIABLE_ExtraGoals_39_39;
#line 476 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_34 = check_hlds__clause_to_proc__STATE_VARIABLE_VarTypes_38_38;
#line 476 "clause_to_proc.m"
                *check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_32 = check_hlds__clause_to_proc__STATE_VARIABLE_VarSet_37_37;
#line 476 "clause_to_proc.m"
              }
#line 448 "clause_to_proc.m"
            {
#line 448 "clause_to_proc.m"
              MR_Word base;
#line 448 "clause_to_proc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "clause_to_proc.m"
              *check_hlds__clause_to_proc__STATE_VARIABLE_HeadVars_30 = base;
#line 448 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__HeadVar_28));
#line 448 "clause_to_proc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__HeadVarsRest_27));
#line 448 "clause_to_proc.m"
            }
#line 445 "clause_to_proc.m"
          }
#line 449 "clause_to_proc.m"
        else
#line 450 "clause_to_proc.m"
          {
#line 450 "clause_to_proc.m"
            {
#line 450 "clause_to_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_for_head\'/12", (MR_String) "length mismatch");
#line 450 "clause_to_proc.m"
              return;
            }
#line 450 "clause_to_proc.m"
          }
#line 449 "clause_to_proc.m"
      }
#line 438 "clause_to_proc.m"
  }
#line 424 "clause_to_proc.m"
}

#line 356 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_1,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredInfo_2,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__3_3,
#line 356 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4,
#line 356 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5)
#line 356 "clause_to_proc.m"
{
#line 359 "clause_to_proc.m"
  while (MR_TRUE)
#line 359 "clause_to_proc.m"
    {
#line 359 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 359 "clause_to_proc.m"
      {
#line 359 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 359 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_5 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4;
#line 359 "clause_to_proc.m"
        else
#line 361 "clause_to_proc.m"
          {
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 361 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcInfo0_16;
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcInfo_17;
#line 361 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;
#line 362 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv0_ProcInfo0_16;

#line 362 "clause_to_proc.m"
            {
#line 362 "clause_to_proc.m"
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_22_22, check_hlds__clause_to_proc__TypeCtorInfo_23_23, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, ((MR_Box) (check_hlds__clause_to_proc__ProcId_13)), &check_hlds__clause_to_proc__conv0_ProcInfo0_16);
            }
#line 362 "clause_to_proc.m"
            check_hlds__clause_to_proc__ProcInfo0_16 = ((MR_Word) check_hlds__clause_to_proc__conv0_ProcInfo0_16);
#line 363 "clause_to_proc.m"
            {
#line 363 "clause_to_proc.m"
              check_hlds__clause_to_proc__introduce_exists_casts_proc_4_p_0(check_hlds__clause_to_proc__ModuleInfo_1, check_hlds__clause_to_proc__PredInfo_2, check_hlds__clause_to_proc__ProcInfo0_16, &check_hlds__clause_to_proc__ProcInfo_17);
            }
#line 364 "clause_to_proc.m"
            {
#line 364 "clause_to_proc.m"
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_22_22, check_hlds__clause_to_proc__TypeCtorInfo_23_23, ((MR_Box) (check_hlds__clause_to_proc__ProcId_13)), ((MR_Box) (check_hlds__clause_to_proc__ProcInfo_17)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20);
            }
#line 365 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 365 "clause_to_proc.m"
            {
#line 365 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3 = check_hlds__clause_to_proc__ProcIds_14;
#line 365 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_20_20;

#line 365 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_4;
#line 365 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__HeadVar__3__tmp_copy_3;
#line 365 "clause_to_proc.m"
            }
#line 365 "clause_to_proc.m"
            continue;
#line 361 "clause_to_proc.m"
          }
#line 359 "clause_to_proc.m"
      }
#line 359 "clause_to_proc.m"
      break;
#line 359 "clause_to_proc.m"
    }
#line 356 "clause_to_proc.m"
}

#line 333 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ModuleInfo_5,
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_6,
#line 333 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14,
#line 333 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15)
#line 333 "clause_to_proc.m"
{
#line 336 "clause_to_proc.m"
  {
#line 336 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 336 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 336 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 336 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredInfo0_8;
#line 337 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_8;
#line 340 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Subn_9;
#line 340 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredMarkers_22;
#line 169 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_23_23;

#line 337 "clause_to_proc.m"
    {
#line 337 "clause_to_proc.m"
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), &check_hlds__clause_to_proc__conv0_PredInfo0_8);
    }
#line 337 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredInfo0_8 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_8);
#line 340 "clause_to_proc.m"
    {
#line 340 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Subn_9);
    }
#line 341 "clause_to_proc.m"
    {
#line 341 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__clause_to_proc__Subn_9);
    }
#line 341 "clause_to_proc.m"
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 340 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 340 "clause_to_proc.m"
      {
#line 168 "clause_to_proc.m"
        {
#line 168 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredMarkers_22);
        }
#line 169 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_23_23 = (MR_Integer) 9;
#line 169 "clause_to_proc.m"
        {
#line 169 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_22, check_hlds__clause_to_proc__V_23_23);
        }
#line 169 "clause_to_proc.m"
        check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 340 "clause_to_proc.m"
      }
#line 352 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 346 "clause_to_proc.m"
      {
#line 346 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs0_10;
#line 346 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ProcIds_11;
#line 346 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs_12;
#line 346 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__PredInfo_13;

#line 346 "clause_to_proc.m"
        {
#line 346 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__Procs0_10);
        }
#line 347 "clause_to_proc.m"
        {
#line 347 "clause_to_proc.m"
          check_hlds__clause_to_proc__ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_8);
        }
#line 348 "clause_to_proc.m"
        {
#line 348 "clause_to_proc.m"
          check_hlds__clause_to_proc__introduce_exists_casts_procs_5_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__PredInfo0_8, check_hlds__clause_to_proc__ProcIds_11, check_hlds__clause_to_proc__Procs0_10, &check_hlds__clause_to_proc__Procs_12);
        }
#line 350 "clause_to_proc.m"
        {
#line 350 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__clause_to_proc__Procs_12, check_hlds__clause_to_proc__PredInfo0_8, &check_hlds__clause_to_proc__PredInfo_13);
        }
#line 351 "clause_to_proc.m"
        {
#line 351 "clause_to_proc.m"
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_17_17, check_hlds__clause_to_proc__TypeCtorInfo_18_18, ((MR_Box) (check_hlds__clause_to_proc__PredId_6)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_13)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15);
#line 351 "clause_to_proc.m"
          return;
        }
#line 346 "clause_to_proc.m"
      }
#line 352 "clause_to_proc.m"
    else
#line 352 "clause_to_proc.m"
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_15 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_14;
#line 336 "clause_to_proc.m"
  }
#line 333 "clause_to_proc.m"
}

#line 313 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
#line 313 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 313 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__2_2,
#line 313 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
#line 313 "clause_to_proc.m"
{
#line 316 "clause_to_proc.m"
  {
#line 316 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 316 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "clause_to_proc.m"
      {
#line 316 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "clause_to_proc.m"
        *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "clause_to_proc.m"
      }
#line 316 "clause_to_proc.m"
    else
#line 317 "clause_to_proc.m"
      {
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clause_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clauses_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goal_8;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FirstDisjuncts_9;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__FirstWarnings_10;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__LaterDisjuncts_11;
#line 317 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__LaterWarnings_12;
#line 320 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_13_13;
#line 320 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_14_14;
#line 320 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_15_15;
#line 320 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_16_16;

#line 318 "clause_to_proc.m"
        {
#line 318 "clause_to_proc.m"
          check_hlds__clause_to_proc__Goal_8 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__clause_to_proc__Clause_4);
        }
#line 319 "clause_to_proc.m"
        {
#line 319 "clause_to_proc.m"
          hlds__hlds_goal__goal_to_disj_list_2_p_0(check_hlds__clause_to_proc__Goal_8, &check_hlds__clause_to_proc__FirstDisjuncts_9);
        }
#line 320 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 0)));
#line 320 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 1)));
#line 320 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 2)));
#line 320 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 3)));
#line 320 "clause_to_proc.m"
        check_hlds__clause_to_proc__FirstWarnings_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_4, (MR_Integer) 4)));
#line 321 "clause_to_proc.m"
        {
#line 321 "clause_to_proc.m"
          check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__Clauses_5, &check_hlds__clause_to_proc__LaterDisjuncts_11, &check_hlds__clause_to_proc__LaterWarnings_12);
        }
#line 322 "clause_to_proc.m"
        {
#line 322 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__FirstDisjuncts_9, check_hlds__clause_to_proc__LaterDisjuncts_11);
        }
#line 323 "clause_to_proc.m"
        {
#line 323 "clause_to_proc.m"
          *check_hlds__clause_to_proc__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__clause_to_proc__FirstWarnings_10, check_hlds__clause_to_proc__LaterWarnings_12);
        }
#line 317 "clause_to_proc.m"
      }
#line 316 "clause_to_proc.m"
  }
#line 313 "clause_to_proc.m"
}

#line 294 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_3_p_0(
#line 294 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 294 "clause_to_proc.m"
  MR_Integer check_hlds__clause_to_proc__ProcId_2,
#line 294 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__HeadVar__3_3)
#line 294 "clause_to_proc.m"
{
#line 297 "clause_to_proc.m"
  {
#line 297 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;

#line 297 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "clause_to_proc.m"
      *check_hlds__clause_to_proc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "clause_to_proc.m"
    else
#line 298 "clause_to_proc.m"
      {
#line 298 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clause_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__MatchingClausesTail_9;
#line 298 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ApplicableProcIds_10;
#line 300 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_12_12;
#line 300 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_13_13;
#line 300 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_14_14;
#line 300 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_15_15;

#line 299 "clause_to_proc.m"
        {
#line 299 "clause_to_proc.m"
          check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_6, check_hlds__clause_to_proc__ProcId_2, &check_hlds__clause_to_proc__MatchingClausesTail_9);
        }
#line 300 "clause_to_proc.m"
        check_hlds__clause_to_proc__ApplicableProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 0)));
#line 300 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 1)));
#line 300 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 2)));
#line 300 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 3)));
#line 300 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Clause_5, (MR_Integer) 4)));
#line 304 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__ApplicableProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "clause_to_proc.m"
          {
#line 303 "clause_to_proc.m"
            MR_Word base;
#line 303 "clause_to_proc.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "clause_to_proc.m"
            *check_hlds__clause_to_proc__HeadVar__3_3 = base;
#line 303 "clause_to_proc.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
#line 303 "clause_to_proc.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
#line 303 "clause_to_proc.m"
          }
#line 304 "clause_to_proc.m"
        else
#line 305 "clause_to_proc.m"
          {
#line 305 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ApplicableProcIds_10, (MR_Integer) 0)));

#line 306 "clause_to_proc.m"
            {
#line 306 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (check_hlds__clause_to_proc__ProcId_2)), check_hlds__clause_to_proc__ProcIds_11);
            }
#line 308 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 307 "clause_to_proc.m"
              {
#line 307 "clause_to_proc.m"
                MR_Word base;
#line 307 "clause_to_proc.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "clause_to_proc.m"
                *check_hlds__clause_to_proc__HeadVar__3_3 = base;
#line 307 "clause_to_proc.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__Clause_5));
#line 307 "clause_to_proc.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__clause_to_proc__MatchingClausesTail_9));
#line 307 "clause_to_proc.m"
              }
#line 308 "clause_to_proc.m"
            else
#line 309 "clause_to_proc.m"
              *check_hlds__clause_to_proc__HeadVar__3_3 = check_hlds__clause_to_proc__MatchingClausesTail_9;
#line 305 "clause_to_proc.m"
          }
#line 298 "clause_to_proc.m"
      }
#line 297 "clause_to_proc.m"
  }
#line 294 "clause_to_proc.m"
}

#line 282 "clause_to_proc.m"
static MR_Word MR_CALL 
check_hlds__clause_to_proc__set_arg_names_2_f_0(
#line 282 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__Arg_4,
#line 282 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10)
#line 282 "clause_to_proc.m"
{
#line 284 "clause_to_proc.m"
  {
#line 284 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 284 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
#line 284 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Var_6;
#line 284 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__MaybeNameMode_7;

#line 285 "clause_to_proc.m"
    {
#line 285 "clause_to_proc.m"
      check_hlds__clause_to_proc__Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
#line 286 "clause_to_proc.m"
    {
#line 286 "clause_to_proc.m"
      check_hlds__clause_to_proc__MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(check_hlds__clause_to_proc__Arg_4);
    }
#line 290 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__MaybeNameMode_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "clause_to_proc.m"
      check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10;
#line 290 "clause_to_proc.m"
    else
#line 288 "clause_to_proc.m"
      {
#line 288 "clause_to_proc.m"
        MR_String check_hlds__clause_to_proc__Name_8;
#line 288 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__MaybeNameMode_7, (MR_Integer) 0)));
#line 288 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_9_9;

#line 288 "clause_to_proc.m"
        check_hlds__clause_to_proc__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 0)));
#line 288 "clause_to_proc.m"
        check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_12_12, (MR_Integer) 1)));
#line 289 "clause_to_proc.m"
        {
#line 289 "clause_to_proc.m"
          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__Var_6, check_hlds__clause_to_proc__Name_8, check_hlds__clause_to_proc__STATE_VARIABLE_Vars_0_10, &check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11);
        }
#line 288 "clause_to_proc.m"
      }
#line 284 "clause_to_proc.m"
    return check_hlds__clause_to_proc__STATE_VARIABLE_Vars_11;
#line 284 "clause_to_proc.m"
  }
#line 282 "clause_to_proc.m"
}

#line 273 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(
#line 273 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1)
#line 273 "clause_to_proc.m"
{
#line 275 "clause_to_proc.m"
  while (MR_TRUE)
#line 275 "clause_to_proc.m"
    {
#line 275 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 275 "clause_to_proc.m"
      {
#line 275 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded = ((MR_tag((MR_Word) check_hlds__clause_to_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 275 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goal_2;
#line 275 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Goals_3;

#line 275 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 275 "clause_to_proc.m"
          {
#line 275 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "clause_to_proc.m"
            {
#line 277 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__V_4_4;

#line 277 "clause_to_proc.m"
              {
#line 277 "clause_to_proc.m"
                check_hlds__clause_to_proc__V_4_4 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__clause_to_proc__Goal_2);
              }
#line 277 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = (check_hlds__clause_to_proc__V_4_4 == (MR_Integer) 0);
#line 277 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 277 "clause_to_proc.m"
            }
#line 278 "clause_to_proc.m"
            if (!(check_hlds__clause_to_proc__succeeded))
#line 279 "clause_to_proc.m"
              {
#line 279 "clause_to_proc.m"
                /* direct tailcall eliminated */
#line 279 "clause_to_proc.m"
                {
#line 279 "clause_to_proc.m"
                  MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__Goals_3;

#line 279 "clause_to_proc.m"
                  check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 279 "clause_to_proc.m"
                }
#line 279 "clause_to_proc.m"
                continue;
#line 279 "clause_to_proc.m"
              }
#line 275 "clause_to_proc.m"
          }
#line 275 "clause_to_proc.m"
        return check_hlds__clause_to_proc__succeeded;
#line 275 "clause_to_proc.m"
      }
#line 275 "clause_to_proc.m"
      break;
#line 275 "clause_to_proc.m"
    }
#line 273 "clause_to_proc.m"
}

#line 180 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__HeadVar__1_1,
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__ClausesInfo_2,
#line 180 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3,
#line 180 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4)
#line 180 "clause_to_proc.m"
{
#line 183 "clause_to_proc.m"
  while (MR_TRUE)
#line 183 "clause_to_proc.m"
    {
#line 183 "clause_to_proc.m"
      /* tailcall optimized into a loop */
#line 183 "clause_to_proc.m"
      {
#line 183 "clause_to_proc.m"
        MR_bool check_hlds__clause_to_proc__succeeded;

#line 183 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "clause_to_proc.m"
          *check_hlds__clause_to_proc__STATE_VARIABLE_Procs_4 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3;
#line 183 "clause_to_proc.m"
        else
#line 184 "clause_to_proc.m"
          {
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 184 "clause_to_proc.m"
            MR_Integer check_hlds__clause_to_proc__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__ProcIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Proc0_13;
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Proc_14;
#line 184 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;
#line 185 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv0_Proc0_13;

#line 185 "clause_to_proc.m"
            {
#line 185 "clause_to_proc.m"
              mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_19_19, check_hlds__clause_to_proc__TypeCtorInfo_20_20, check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, ((MR_Box) (check_hlds__clause_to_proc__ProcId_9)), &check_hlds__clause_to_proc__conv0_Proc0_13);
            }
#line 185 "clause_to_proc.m"
            check_hlds__clause_to_proc__Proc0_13 = ((MR_Word) check_hlds__clause_to_proc__conv0_Proc0_13);
#line 186 "clause_to_proc.m"
            {
#line 186 "clause_to_proc.m"
              check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(check_hlds__clause_to_proc__ProcId_9, check_hlds__clause_to_proc__ClausesInfo_2, check_hlds__clause_to_proc__Proc0_13, &check_hlds__clause_to_proc__Proc_14);
            }
#line 187 "clause_to_proc.m"
            {
#line 187 "clause_to_proc.m"
              mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_19_19, check_hlds__clause_to_proc__TypeCtorInfo_20_20, ((MR_Box) (check_hlds__clause_to_proc__ProcId_9)), ((MR_Box) (check_hlds__clause_to_proc__Proc_14)), check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3, &check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17);
            }
#line 188 "clause_to_proc.m"
            /* direct tailcall eliminated */
#line 188 "clause_to_proc.m"
            {
#line 188 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1 = check_hlds__clause_to_proc__ProcIds_10;
#line 188 "clause_to_proc.m"
              MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_17_17;

#line 188 "clause_to_proc.m"
              check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0_3 = check_hlds__clause_to_proc__STATE_VARIABLE_Procs_0__tmp_copy_3;
#line 188 "clause_to_proc.m"
              check_hlds__clause_to_proc__HeadVar__1_1 = check_hlds__clause_to_proc__HeadVar__1__tmp_copy_1;
#line 188 "clause_to_proc.m"
            }
#line 188 "clause_to_proc.m"
            continue;
#line 184 "clause_to_proc.m"
          }
#line 183 "clause_to_proc.m"
      }
#line 183 "clause_to_proc.m"
      break;
#line 183 "clause_to_proc.m"
    }
#line 180 "clause_to_proc.m"
}

#line 151 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(
#line 151 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__PredId_4,
#line 151 "clause_to_proc.m"
  MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8,
#line 151 "clause_to_proc.m"
  MR_Word * check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9)
#line 151 "clause_to_proc.m"
{
#line 154 "clause_to_proc.m"
  {
#line 154 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 154 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 154 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 154 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredInfo0_6;
#line 155 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv0_PredInfo0_6;
#line 165 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredMarkers_14;

#line 155 "clause_to_proc.m"
    {
#line 155 "clause_to_proc.m"
      mercury__map__lookup_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), &check_hlds__clause_to_proc__conv0_PredInfo0_6);
    }
#line 155 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredInfo0_6 = ((MR_Word) check_hlds__clause_to_proc__conv0_PredInfo0_6);
#line 168 "clause_to_proc.m"
    {
#line 168 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredMarkers_14);
    }
#line 169 "clause_to_proc.m"
    {
#line 169 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__clause_to_proc__PredMarkers_14, (MR_Integer) 9);
    }
#line 169 "clause_to_proc.m"
    check_hlds__clause_to_proc__succeeded = !(check_hlds__clause_to_proc__succeeded);
#line 159 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 157 "clause_to_proc.m"
      {
#line 157 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__PredInfo_7;
#line 157 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs0_19;
#line 157 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ClausesInfo_20;
#line 157 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__ProcIds_21;
#line 157 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Procs_22;

#line 174 "clause_to_proc.m"
        {
#line 174 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__Procs0_19);
        }
#line 175 "clause_to_proc.m"
        {
#line 175 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__ClausesInfo_20);
        }
#line 176 "clause_to_proc.m"
        {
#line 176 "clause_to_proc.m"
          check_hlds__clause_to_proc__ProcIds_21 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(check_hlds__clause_to_proc__PredInfo0_6);
        }
#line 177 "clause_to_proc.m"
        {
#line 177 "clause_to_proc.m"
          check_hlds__clause_to_proc__copy_clauses_to_procs_2_4_p_0(check_hlds__clause_to_proc__ProcIds_21, check_hlds__clause_to_proc__ClausesInfo_20, check_hlds__clause_to_proc__Procs0_19, &check_hlds__clause_to_proc__Procs_22);
        }
#line 178 "clause_to_proc.m"
        {
#line 178 "clause_to_proc.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__clause_to_proc__Procs_22, check_hlds__clause_to_proc__PredInfo0_6, &check_hlds__clause_to_proc__PredInfo_7);
        }
#line 158 "clause_to_proc.m"
        {
#line 158 "clause_to_proc.m"
          mercury__map__det_update_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_11_11, check_hlds__clause_to_proc__TypeCtorInfo_12_12, ((MR_Box) (check_hlds__clause_to_proc__PredId_4)), ((MR_Box) (check_hlds__clause_to_proc__PredInfo_7)), check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9);
#line 158 "clause_to_proc.m"
          return;
        }
#line 157 "clause_to_proc.m"
      }
#line 159 "clause_to_proc.m"
    else
#line 159 "clause_to_proc.m"
      *check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_9 = check_hlds__clause_to_proc__STATE_VARIABLE_PredTable_0_8;
#line 154 "clause_to_proc.m"
  }
#line 151 "clause_to_proc.m"
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
#line 367 "clause_to_proc.m"
  {
#line 367 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_61_61;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeInfo_65_65;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_66_66;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ArgTypes_8;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Subn_9;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredConstraints_10;
#line 367 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__OrigArity_11;
#line 367 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__NumExtraHeadVars_12;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet0_13;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes0_14;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars0_15;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Body0_16;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiVarMaps0_17;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ArgModes_18;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgTypes_24;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars1_25;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars1_26;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraArgModes_27;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgModes_28;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars_29;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet1_30;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes1_31;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistsCastHeadGoals_32;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistConstraints_33;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraModesAndVars_34;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars_35;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet_36;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes_37;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiVarMaps_38;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExistsCastExtraGoals_39;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__GoalInfo0_41;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goals0_42;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goals_43;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars_44;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__NonLocals_45;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__GoalInfo_46;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Body_47;
#line 367 "clause_to_proc.m"
    MR_Integer check_hlds__clause_to_proc__V_50_50;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_56_56;
#line 367 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_57_57;
#line 393 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgTypes0_19;
#line 393 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraHeadVars0_20;
#line 393 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigHeadVars0_21;
#line 393 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ExtraArgModes0_22;
#line 393 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__OrigArgModes0_23;
#line 382 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeInfo_62_62;
#line 382 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_63_63;
#line 407 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_60_60;
#line 414 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_40_40;

#line 368 "clause_to_proc.m"
    {
#line 368 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__ArgTypes_8);
    }
#line 369 "clause_to_proc.m"
    {
#line 369 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__Subn_9);
    }
#line 370 "clause_to_proc.m"
    {
#line 370 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__clause_to_proc__PredInfo_6, &check_hlds__clause_to_proc__PredConstraints_10);
    }
#line 371 "clause_to_proc.m"
    {
#line 371 "clause_to_proc.m"
      check_hlds__clause_to_proc__OrigArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__clause_to_proc__PredInfo_6);
    }
#line 2337 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 372 "clause_to_proc.m"
    {
#line 372 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_50_50 = mercury__list__length_1_f_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__ArgTypes_8);
    }
#line 372 "clause_to_proc.m"
    check_hlds__clause_to_proc__NumExtraHeadVars_12 = (check_hlds__clause_to_proc__V_50_50 - check_hlds__clause_to_proc__OrigArity_11);
#line 374 "clause_to_proc.m"
    {
#line 374 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarSet0_13);
    }
#line 375 "clause_to_proc.m"
    {
#line 375 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__VarTypes0_14);
    }
#line 376 "clause_to_proc.m"
    {
#line 376 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__HeadVars0_15);
    }
#line 377 "clause_to_proc.m"
    {
#line 377 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__Body0_16);
    }
#line 378 "clause_to_proc.m"
    {
#line 378 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__RttiVarMaps0_17);
    }
#line 379 "clause_to_proc.m"
    {
#line 379 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, &check_hlds__clause_to_proc__ArgModes_18);
    }
#line 382 "clause_to_proc.m"
    {
#line 382 "clause_to_proc.m"
      check_hlds__clause_to_proc__succeeded = mercury__list__drop_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_61_61, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgTypes_8, &check_hlds__clause_to_proc__OrigArgTypes0_19);
    }
#line 382 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 382 "clause_to_proc.m"
      {
#line 2385 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeInfo_62_62 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
#line 383 "clause_to_proc.m"
        {
#line 383 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeInfo_62_62, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__HeadVars0_15, &check_hlds__clause_to_proc__ExtraHeadVars0_20, &check_hlds__clause_to_proc__OrigHeadVars0_21);
        }
#line 382 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 382 "clause_to_proc.m"
          {
#line 2396 "check_hlds.clause_to_proc.c"
            check_hlds__clause_to_proc__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 385 "clause_to_proc.m"
            {
#line 385 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = mercury__list__split_list_4_p_0(check_hlds__clause_to_proc__TypeCtorInfo_63_63, check_hlds__clause_to_proc__NumExtraHeadVars_12, check_hlds__clause_to_proc__ArgModes_18, &check_hlds__clause_to_proc__ExtraArgModes0_22, &check_hlds__clause_to_proc__OrigArgModes0_23);
            }
#line 382 "clause_to_proc.m"
          }
#line 382 "clause_to_proc.m"
      }
#line 393 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 388 "clause_to_proc.m"
      {
#line 388 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigArgTypes_24 = check_hlds__clause_to_proc__OrigArgTypes0_19;
#line 389 "clause_to_proc.m"
        check_hlds__clause_to_proc__ExtraHeadVars1_25 = check_hlds__clause_to_proc__ExtraHeadVars0_20;
#line 390 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigHeadVars1_26 = check_hlds__clause_to_proc__OrigHeadVars0_21;
#line 391 "clause_to_proc.m"
        check_hlds__clause_to_proc__ExtraArgModes_27 = check_hlds__clause_to_proc__ExtraArgModes0_22;
#line 392 "clause_to_proc.m"
        check_hlds__clause_to_proc__OrigArgModes_28 = check_hlds__clause_to_proc__OrigArgModes0_23;
#line 388 "clause_to_proc.m"
      }
#line 393 "clause_to_proc.m"
    else
#line 394 "clause_to_proc.m"
      {
#line 394 "clause_to_proc.m"
        {
#line 394 "clause_to_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
#line 394 "clause_to_proc.m"
          return;
        }
#line 394 "clause_to_proc.m"
      }
#line 400 "clause_to_proc.m"
    {
#line 400 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_for_head_12_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__OrigArgTypes_24, check_hlds__clause_to_proc__OrigArgModes_28, check_hlds__clause_to_proc__OrigHeadVars1_26, &check_hlds__clause_to_proc__OrigHeadVars_29, check_hlds__clause_to_proc__VarSet0_13, &check_hlds__clause_to_proc__VarSet1_30, check_hlds__clause_to_proc__VarTypes0_14, &check_hlds__clause_to_proc__VarTypes1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastHeadGoals_32);
    }
#line 407 "clause_to_proc.m"
    check_hlds__clause_to_proc__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 0)));
#line 407 "clause_to_proc.m"
    check_hlds__clause_to_proc__ExistConstraints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__PredConstraints_10, (MR_Integer) 1)));
#line 2445 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeInfo_65_65 = (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4];
#line 408 "clause_to_proc.m"
    {
#line 408 "clause_to_proc.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraArgModes_27, check_hlds__clause_to_proc__ExtraHeadVars1_25, &check_hlds__clause_to_proc__ExtraModesAndVars_34);
    }
#line 410 "clause_to_proc.m"
    {
#line 410 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_extra_13_p_0(check_hlds__clause_to_proc__ModuleInfo_5, check_hlds__clause_to_proc__Subn_9, check_hlds__clause_to_proc__ExistConstraints_33, check_hlds__clause_to_proc__ExtraModesAndVars_34, &check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__VarSet1_30, &check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes1_31, &check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__RttiVarMaps0_17, &check_hlds__clause_to_proc__RttiVarMaps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
#line 414 "clause_to_proc.m"
    check_hlds__clause_to_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 0)));
#line 414 "clause_to_proc.m"
    check_hlds__clause_to_proc__GoalInfo0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body0_16, (MR_Integer) 1)));
#line 415 "clause_to_proc.m"
    {
#line 415 "clause_to_proc.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__clause_to_proc__Body0_16, &check_hlds__clause_to_proc__Goals0_42);
    }
#line 2466 "check_hlds.clause_to_proc.c"
    check_hlds__clause_to_proc__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 416 "clause_to_proc.m"
    {
#line 416 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__ExistsCastHeadGoals_32, check_hlds__clause_to_proc__ExistsCastExtraGoals_39);
    }
#line 416 "clause_to_proc.m"
    {
#line 416 "clause_to_proc.m"
      check_hlds__clause_to_proc__Goals_43 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeCtorInfo_66_66, check_hlds__clause_to_proc__Goals0_42, check_hlds__clause_to_proc__V_56_56);
    }
#line 417 "clause_to_proc.m"
    {
#line 417 "clause_to_proc.m"
      check_hlds__clause_to_proc__HeadVars_44 = mercury__list__f_43_43_2_f_0(check_hlds__clause_to_proc__TypeInfo_65_65, check_hlds__clause_to_proc__ExtraHeadVars_35, check_hlds__clause_to_proc__OrigHeadVars_29);
    }
#line 418 "clause_to_proc.m"
    {
#line 418 "clause_to_proc.m"
      check_hlds__clause_to_proc__NonLocals_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__HeadVars_44);
    }
#line 419 "clause_to_proc.m"
    {
#line 419 "clause_to_proc.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocals_45, check_hlds__clause_to_proc__GoalInfo0_41, &check_hlds__clause_to_proc__GoalInfo_46);
    }
#line 420 "clause_to_proc.m"
    {
#line 420 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 420 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 420 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 420 "clause_to_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_57_57, 2) = ((MR_Box) (check_hlds__clause_to_proc__Goals_43));
#line 420 "clause_to_proc.m"
    }
#line 420 "clause_to_proc.m"
    {
#line 420 "clause_to_proc.m"
      check_hlds__clause_to_proc__Body_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_57_57));
#line 420 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Body_47, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_46));
#line 420 "clause_to_proc.m"
    }
#line 421 "clause_to_proc.m"
    {
#line 421 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_36, check_hlds__clause_to_proc__VarTypes_37, check_hlds__clause_to_proc__HeadVars_44, check_hlds__clause_to_proc__Body_47, check_hlds__clause_to_proc__RttiVarMaps_38, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_0_48, check_hlds__clause_to_proc__STATE_VARIABLE_ProcInfo_49);
#line 421 "clause_to_proc.m"
      return;
    }
#line 367 "clause_to_proc.m"
  }
#line 59 "clause_to_proc.m"
}

#line 329 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1(
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 329 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 329 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
#line 329 "clause_to_proc.m"
{
#line 329 "clause_to_proc.m"
  {
#line 329 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 329 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15;

#line 329 "clause_to_proc.m"
    {
#line 329 "clause_to_proc.m"
      check_hlds__clause_to_proc__introduce_exists_casts_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15);
    }
#line 329 "clause_to_proc.m"
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_15));
#line 329 "clause_to_proc.m"
  }
#line 329 "clause_to_proc.m"
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
#line 327 "clause_to_proc.m"
  {
#line 327 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 327 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
#line 327 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable_7;
#line 327 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_10_10;
#line 329 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

#line 328 "clause_to_proc.m"
    {
#line 328 "clause_to_proc.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
#line 329 "clause_to_proc.m"
    {
#line 329 "clause_to_proc.m"
      check_hlds__clause_to_proc__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_6[0]));
#line 329 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 1) = ((MR_Box) (check_hlds__clause_to_proc__introduce_exists_casts_3_p_0_1));
#line 329 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 329 "clause_to_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_10_10, 3) = ((MR_Box) (check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8));
#line 329 "clause_to_proc.m"
    }
#line 329 "clause_to_proc.m"
    {
#line 329 "clause_to_proc.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], check_hlds__clause_to_proc__V_10_10, check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
#line 329 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
#line 331 "clause_to_proc.m"
    {
#line 331 "clause_to_proc.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
#line 331 "clause_to_proc.m"
      return;
    }
#line 327 "clause_to_proc.m"
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
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_29_29;
#line 105 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__TypeCtorInfo_30_30;

#line 101 "clause_to_proc.m"
    {
#line 101 "clause_to_proc.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__clause_to_proc__PredInfo0_4, &check_hlds__clause_to_proc__Procs0_7);
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
#line 2661 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 2663 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 106 "clause_to_proc.m"
        {
#line 106 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = mercury__map__is_empty_1_p_0(check_hlds__clause_to_proc__TypeCtorInfo_29_29, check_hlds__clause_to_proc__TypeCtorInfo_30_30, check_hlds__clause_to_proc__Procs0_7);
        }
#line 105 "clause_to_proc.m"
      }
#line 134 "clause_to_proc.m"
    if (check_hlds__clause_to_proc__succeeded)
#line 115 "clause_to_proc.m"
      {
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__TypeCtorInfo_31_31;
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
        MR_Integer check_hlds__clause_to_proc__ProcId_21;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_23_23;
#line 115 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_25_25;

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
#line 2718 "check_hlds.clause_to_proc.c"
        check_hlds__clause_to_proc__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 119 "clause_to_proc.m"
        {
#line 119 "clause_to_proc.m"
          mercury__list__duplicate_3_p_0(check_hlds__clause_to_proc__TypeCtorInfo_31_31, check_hlds__clause_to_proc__FuncArity_10, ((MR_Box) (check_hlds__clause_to_proc__InMode_11)), &check_hlds__clause_to_proc__FuncArgModes_13);
        }
#line 121 "clause_to_proc.m"
        {
#line 121 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_23_23, 0) = ((MR_Box) (check_hlds__clause_to_proc__FuncRetMode_14));
#line 121 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "clause_to_proc.m"
        }
#line 121 "clause_to_proc.m"
        {
#line 121 "clause_to_proc.m"
          mercury__list__append_3_p_1(check_hlds__clause_to_proc__TypeCtorInfo_31_31, check_hlds__clause_to_proc__FuncArgModes_13, check_hlds__clause_to_proc__V_23_23, &check_hlds__clause_to_proc__PredArgModes_15);
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
#line 129 "clause_to_proc.m"
        {
#line 129 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__V_25_25, 0) = ((MR_Box) (check_hlds__clause_to_proc__PredArgModes_15));
#line 129 "clause_to_proc.m"
        }
#line 129 "clause_to_proc.m"
        {
#line 129 "clause_to_proc.m"
          hlds__make_hlds__add_new_proc_13_p_0(check_hlds__clause_to_proc__InstVarSet_19, check_hlds__clause_to_proc__PredArity_9, check_hlds__clause_to_proc__PredArgModes_15, check_hlds__clause_to_proc__V_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__clause_to_proc_scalar_common_5[0]), check_hlds__clause_to_proc__Context_17, (MR_Integer) 1, (MR_Integer) 1, check_hlds__clause_to_proc__PredInfo0_4, check_hlds__clause_to_proc__PredInfo_5, &check_hlds__clause_to_proc__ProcId_21);
        }
#line 133 "clause_to_proc.m"
        {
#line 133 "clause_to_proc.m"
          MR_Word base;
#line 133 "clause_to_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "clause_to_proc.m"
          *check_hlds__clause_to_proc__MaybeProcId_6 = base;
#line 133 "clause_to_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__clause_to_proc__ProcId_21));
#line 133 "clause_to_proc.m"
        }
#line 115 "clause_to_proc.m"
      }
#line 134 "clause_to_proc.m"
    else
#line 135 "clause_to_proc.m"
      {
#line 135 "clause_to_proc.m"
        *check_hlds__clause_to_proc__PredInfo_5 = check_hlds__clause_to_proc__PredInfo0_4;
#line 136 "clause_to_proc.m"
        *check_hlds__clause_to_proc__MaybeProcId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "clause_to_proc.m"
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

#line 260 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_7(
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 260 "clause_to_proc.m"
{
#line 260 "clause_to_proc.m"
  {
#line 260 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 260 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 260 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv6_HeadVar__3_3;

#line 260 "clause_to_proc.m"
    {
#line 260 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv6_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 260 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv6_HeadVar__3_3));
#line 260 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 260 "clause_to_proc.m"
  }
#line 260 "clause_to_proc.m"
}

#line 259 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_6(
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
#line 259 "clause_to_proc.m"
{
#line 259 "clause_to_proc.m"
  {
#line 259 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
#line 259 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 259 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv5_HeadVar__2_2;

#line 259 "clause_to_proc.m"
    {
#line 259 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv5_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
#line 259 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv5_HeadVar__2_2));
#line 259 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_2;
#line 259 "clause_to_proc.m"
  }
#line 259 "clause_to_proc.m"
}

#line 214 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5(
#line 214 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg)
#line 214 "clause_to_proc.m"
{
#line 214 "clause_to_proc.m"
  {
#line 214 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 214 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

#line 214 "clause_to_proc.m"
    {
#line 214 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__214__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
#line 214 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 214 "clause_to_proc.m"
  }
#line 214 "clause_to_proc.m"
}

#line 213 "clause_to_proc.m"
static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4(
#line 213 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg)
#line 213 "clause_to_proc.m"
{
#line 213 "clause_to_proc.m"
  {
#line 213 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 213 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;

#line 213 "clause_to_proc.m"
    {
#line 213 "clause_to_proc.m"
      return check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc__213__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__closure, (MR_Integer) 4))));
    }
#line 213 "clause_to_proc.m"
    return check_hlds__clause_to_proc__succeeded;
#line 213 "clause_to_proc.m"
  }
#line 213 "clause_to_proc.m"
}

#line 212 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_3(
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 212 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 212 "clause_to_proc.m"
{
#line 212 "clause_to_proc.m"
  {
#line 212 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 212 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 212 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11;

#line 212 "clause_to_proc.m"
    {
#line 212 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11 = check_hlds__clause_to_proc__set_arg_names_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 212 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv3_STATE_VARIABLE_Vars_11));
#line 212 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 212 "clause_to_proc.m"
  }
#line 212 "clause_to_proc.m"
}

#line 260 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_2(
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 260 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2)
#line 260 "clause_to_proc.m"
{
#line 260 "clause_to_proc.m"
  {
#line 260 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_3;
#line 260 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 260 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv1_HeadVar__3_3;

#line 260 "clause_to_proc.m"
    {
#line 260 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv1_HeadVar__3_3 = parse_tree__prog_data__worst_purity_2_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2));
    }
#line 260 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv1_HeadVar__3_3));
#line 260 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_3;
#line 260 "clause_to_proc.m"
  }
#line 260 "clause_to_proc.m"
}

#line 259 "clause_to_proc.m"
static MR_Box MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_1(
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 259 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1)
#line 259 "clause_to_proc.m"
{
#line 259 "clause_to_proc.m"
  {
#line 259 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__wrapper_arg_2;
#line 259 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 259 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_HeadVar__2_2;

#line 259 "clause_to_proc.m"
    {
#line 259 "clause_to_proc.m"
      check_hlds__clause_to_proc__conv0_HeadVar__2_2 = hlds__hlds_goal__goal_get_purity_1_f_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1));
    }
#line 259 "clause_to_proc.m"
    check_hlds__clause_to_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__clause_to_proc__conv0_HeadVar__2_2));
#line 259 "clause_to_proc.m"
    return check_hlds__clause_to_proc__wrapper_arg_2;
#line 259 "clause_to_proc.m"
  }
#line 259 "clause_to_proc.m"
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
#line 190 "clause_to_proc.m"
  {
#line 190 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 0)));
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 3)));
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 4)));
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ClausesRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 5)));
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__RttiInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 7)));
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Clauses_17;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__MatchingClauses_18;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__ClausesDisjuncts_19;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__StateVarWarnings_20;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__VarSet_33;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__Goal_64;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__HeadVarList_78;
#line 190 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81;
#line 191 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 1)));
#line 191 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 2)));
#line 191 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc___ItemNumbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 6)));
#line 191 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc___HaveForeignClauses_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__ClausesInfo_6, (MR_Integer) 8)));

#line 193 "clause_to_proc.m"
    {
#line 193 "clause_to_proc.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__clause_to_proc__ClausesRep_13, &check_hlds__clause_to_proc__Clauses_17);
    }
#line 194 "clause_to_proc.m"
    {
#line 194 "clause_to_proc.m"
      check_hlds__clause_to_proc__select_matching_clauses_3_p_0(check_hlds__clause_to_proc__Clauses_17, check_hlds__clause_to_proc__ProcId_5, &check_hlds__clause_to_proc__MatchingClauses_18);
    }
#line 195 "clause_to_proc.m"
    {
#line 195 "clause_to_proc.m"
      check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(check_hlds__clause_to_proc__MatchingClauses_18, &check_hlds__clause_to_proc__ClausesDisjuncts_19, &check_hlds__clause_to_proc__StateVarWarnings_20);
    }
#line 200 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__StateVarWarnings_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "clause_to_proc.m"
      check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81 = check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_79;
#line 200 "clause_to_proc.m"
    else
#line 202 "clause_to_proc.m"
      {
#line 202 "clause_to_proc.m"
        hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(check_hlds__clause_to_proc__StateVarWarnings_20, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_0_79, &check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81);
      }
#line 231 "clause_to_proc.m"
    if ((check_hlds__clause_to_proc__ClausesDisjuncts_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "clause_to_proc.m"
      {
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__Context_70;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo0_71;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo1_72;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__NonLocalVars_73;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo2_74;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__GoalInfo_77;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_83_83;
#line 242 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_87_87;

#line 241 "clause_to_proc.m"
        {
#line 241 "clause_to_proc.m"
          hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81, &check_hlds__clause_to_proc__Context_70);
        }
#line 247 "clause_to_proc.m"
        check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 248 "clause_to_proc.m"
        {
#line 248 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_71);
        }
#line 249 "clause_to_proc.m"
        {
#line 249 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_70, check_hlds__clause_to_proc__GoalInfo0_71, &check_hlds__clause_to_proc__GoalInfo1_72);
        }
#line 253 "clause_to_proc.m"
        {
#line 253 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_83_83 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
        }
#line 253 "clause_to_proc.m"
        {
#line 253 "clause_to_proc.m"
          check_hlds__clause_to_proc__NonLocalVars_73 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_83_83);
        }
#line 254 "clause_to_proc.m"
        {
#line 254 "clause_to_proc.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_73, check_hlds__clause_to_proc__GoalInfo1_72, &check_hlds__clause_to_proc__GoalInfo2_74);
        }
#line 258 "clause_to_proc.m"
        {
#line 258 "clause_to_proc.m"
          check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_19);
        }
#line 262 "clause_to_proc.m"
        if (check_hlds__clause_to_proc__succeeded)
#line 259 "clause_to_proc.m"
          {
#line 259 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
#line 259 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__PurityList_75;
#line 259 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Purity_76;
#line 260 "clause_to_proc.m"
            MR_Box check_hlds__clause_to_proc__conv2_Purity_76;

#line 259 "clause_to_proc.m"
            {
#line 259 "clause_to_proc.m"
              check_hlds__clause_to_proc__PurityList_75 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_111_111, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[2], check_hlds__clause_to_proc__ClausesDisjuncts_19);
            }
#line 260 "clause_to_proc.m"
            {
#line 260 "clause_to_proc.m"
              check_hlds__clause_to_proc__conv2_Purity_76 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_111_111, check_hlds__clause_to_proc__TypeCtorInfo_111_111, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[3], check_hlds__clause_to_proc__PurityList_75, ((MR_Box) ((MR_Integer) 0)));
            }
#line 260 "clause_to_proc.m"
            check_hlds__clause_to_proc__Purity_76 = ((MR_Word) check_hlds__clause_to_proc__conv2_Purity_76);
#line 261 "clause_to_proc.m"
            {
#line 261 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_76, check_hlds__clause_to_proc__GoalInfo2_74, &check_hlds__clause_to_proc__GoalInfo_77);
            }
#line 259 "clause_to_proc.m"
          }
#line 262 "clause_to_proc.m"
        else
#line 263 "clause_to_proc.m"
          check_hlds__clause_to_proc__GoalInfo_77 = check_hlds__clause_to_proc__GoalInfo2_74;
#line 266 "clause_to_proc.m"
        {
#line 266 "clause_to_proc.m"
          check_hlds__clause_to_proc__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "clause_to_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "clause_to_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_87_87, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_19));
#line 266 "clause_to_proc.m"
        }
#line 266 "clause_to_proc.m"
        {
#line 266 "clause_to_proc.m"
          check_hlds__clause_to_proc__Goal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "clause_to_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_87_87));
#line 266 "clause_to_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_77));
#line 266 "clause_to_proc.m"
        }
#line 242 "clause_to_proc.m"
      }
#line 231 "clause_to_proc.m"
    else
#line 231 "clause_to_proc.m"
      {
#line 231 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_19, (MR_Integer) 1)));
#line 231 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__clause_to_proc__ClausesDisjuncts_19, (MR_Integer) 0)));
#line 231 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_172_172, (MR_Integer) 1)));
#line 231 "clause_to_proc.m"
        MR_Word check_hlds__clause_to_proc__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_172_172, (MR_Integer) 0)));

#line 231 "clause_to_proc.m"
        if ((check_hlds__clause_to_proc__V_171_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "clause_to_proc.m"
          {
#line 216 "clause_to_proc.m"
#line 216 "clause_to_proc.m"
            switch (MR_tag((MR_Word) check_hlds__clause_to_proc__V_174_174)) {
#line 216 "clause_to_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 216 "clause_to_proc.m"
              case (MR_Integer) 0:
#line 227 "clause_to_proc.m"
                check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 216 "clause_to_proc.m"
                break;
#line 216 "clause_to_proc.m"
              case (MR_Integer) 1:
#line 216 "clause_to_proc.m"
              case (MR_Integer) 2:
#line 227 "clause_to_proc.m"
                check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 216 "clause_to_proc.m"
                break;
#line 216 "clause_to_proc.m"
              case (MR_Integer) 3:
#line 216 "clause_to_proc.m"
#line 216 "clause_to_proc.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 0)))) {
#line 216 "clause_to_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 0:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 2:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 3:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 4:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 5:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 6:
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 7:
#line 227 "clause_to_proc.m"
                    check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 216 "clause_to_proc.m"
                    break;
#line 216 "clause_to_proc.m"
                  case (MR_Integer) 1:
#line 209 "clause_to_proc.m"
                    {
#line 209 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 4)));
#line 209 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__ExtraArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 5)));
#line 209 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 6)));
#line 209 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__V_90_90;
#line 209 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__V_95_95;
#line 208 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 1)));
#line 208 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 2)));
#line 208 "clause_to_proc.m"
                      MR_Integer check_hlds__clause_to_proc__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 3)));
#line 208 "clause_to_proc.m"
                      MR_Word check_hlds__clause_to_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_174_174, (MR_Integer) 7)));
#line 212 "clause_to_proc.m"
                      MR_Box check_hlds__clause_to_proc__conv4_VarSet_33;

#line 212 "clause_to_proc.m"
                      {
#line 212 "clause_to_proc.m"
                        check_hlds__clause_to_proc__conv4_VarSet_33 = mercury__list__foldl_3_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_2[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[4], check_hlds__clause_to_proc__Args_29, ((MR_Box) (check_hlds__clause_to_proc__VarSet0_8)));
                      }
#line 212 "clause_to_proc.m"
                      check_hlds__clause_to_proc__VarSet_33 = ((MR_Word) check_hlds__clause_to_proc__conv4_VarSet_33);
#line 213 "clause_to_proc.m"
                      {
#line 213 "clause_to_proc.m"
                        check_hlds__clause_to_proc__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 213 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[1]));
#line 213 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_4));
#line 213 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 213 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 3) = ((MR_Box) (check_hlds__clause_to_proc__ExtraArgs_30));
#line 213 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_90_90, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "clause_to_proc.m"
                      }
#line 213 "clause_to_proc.m"
                      {
#line 213 "clause_to_proc.m"
                        mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_90_90, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "extra_args");
                      }
#line 214 "clause_to_proc.m"
                      {
#line 214 "clause_to_proc.m"
                        check_hlds__clause_to_proc__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 214 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[2]));
#line 214 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0_5));
#line 214 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 214 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 3) = ((MR_Box) (check_hlds__clause_to_proc__MaybeTraceRuntimeCond_31));
#line 214 "clause_to_proc.m"
                        MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__V_95_95, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "clause_to_proc.m"
                      }
#line 214 "clause_to_proc.m"
                      {
#line 214 "clause_to_proc.m"
                        mercury__require__expect_4_p_0(check_hlds__clause_to_proc__V_95_95, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc\'/4", (MR_String) "trace runtime cond");
                      }
#line 209 "clause_to_proc.m"
                    }
#line 216 "clause_to_proc.m"
                    break;
#line 216 "clause_to_proc.m"
                }
#line 216 "clause_to_proc.m"
                break;
#line 216 "clause_to_proc.m"
            }
#line 230 "clause_to_proc.m"
            check_hlds__clause_to_proc__Goal_64 = check_hlds__clause_to_proc__V_172_172;
#line 205 "clause_to_proc.m"
          }
#line 231 "clause_to_proc.m"
        else
#line 242 "clause_to_proc.m"
          {
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__Context_137;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo0_138;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo1_139;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__NonLocalVars_140;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo2_141;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__GoalInfo_144;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_145_145;
#line 242 "clause_to_proc.m"
            MR_Word check_hlds__clause_to_proc__V_149_149;

#line 238 "clause_to_proc.m"
            {
#line 238 "clause_to_proc.m"
              check_hlds__clause_to_proc__Context_137 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__clause_to_proc__V_173_173);
            }
#line 247 "clause_to_proc.m"
            check_hlds__clause_to_proc__VarSet_33 = check_hlds__clause_to_proc__VarSet0_8;
#line 248 "clause_to_proc.m"
            {
#line 248 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__clause_to_proc__GoalInfo0_138);
            }
#line 249 "clause_to_proc.m"
            {
#line 249 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__clause_to_proc__Context_137, check_hlds__clause_to_proc__GoalInfo0_138, &check_hlds__clause_to_proc__GoalInfo1_139);
            }
#line 253 "clause_to_proc.m"
            {
#line 253 "clause_to_proc.m"
              check_hlds__clause_to_proc__V_145_145 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
            }
#line 253 "clause_to_proc.m"
            {
#line 253 "clause_to_proc.m"
              check_hlds__clause_to_proc__NonLocalVars_140 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__clause_to_proc__V_145_145);
            }
#line 254 "clause_to_proc.m"
            {
#line 254 "clause_to_proc.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__clause_to_proc__NonLocalVars_140, check_hlds__clause_to_proc__GoalInfo1_139, &check_hlds__clause_to_proc__GoalInfo2_141);
            }
#line 258 "clause_to_proc.m"
            {
#line 258 "clause_to_proc.m"
              check_hlds__clause_to_proc__succeeded = check_hlds__clause_to_proc__contains_nonpure_goal_1_p_0(check_hlds__clause_to_proc__ClausesDisjuncts_19);
            }
#line 262 "clause_to_proc.m"
            if (check_hlds__clause_to_proc__succeeded)
#line 259 "clause_to_proc.m"
              {
#line 259 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__TypeCtorInfo_111_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0;
#line 259 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__PurityList_123;
#line 259 "clause_to_proc.m"
                MR_Word check_hlds__clause_to_proc__Purity_124;
#line 260 "clause_to_proc.m"
                MR_Box check_hlds__clause_to_proc__conv7_Purity_124;

#line 259 "clause_to_proc.m"
                {
#line 259 "clause_to_proc.m"
                  check_hlds__clause_to_proc__PurityList_123 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__clause_to_proc__TypeCtorInfo_111_129, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[5], check_hlds__clause_to_proc__ClausesDisjuncts_19);
                }
#line 260 "clause_to_proc.m"
                {
#line 260 "clause_to_proc.m"
                  check_hlds__clause_to_proc__conv7_Purity_124 = mercury__list__foldl_3_f_0(check_hlds__clause_to_proc__TypeCtorInfo_111_129, check_hlds__clause_to_proc__TypeCtorInfo_111_129, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[6], check_hlds__clause_to_proc__PurityList_123, ((MR_Box) ((MR_Integer) 0)));
                }
#line 260 "clause_to_proc.m"
                check_hlds__clause_to_proc__Purity_124 = ((MR_Word) check_hlds__clause_to_proc__conv7_Purity_124);
#line 261 "clause_to_proc.m"
                {
#line 261 "clause_to_proc.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__clause_to_proc__Purity_124, check_hlds__clause_to_proc__GoalInfo2_141, &check_hlds__clause_to_proc__GoalInfo_144);
                }
#line 259 "clause_to_proc.m"
              }
#line 262 "clause_to_proc.m"
            else
#line 263 "clause_to_proc.m"
              check_hlds__clause_to_proc__GoalInfo_144 = check_hlds__clause_to_proc__GoalInfo2_141;
#line 266 "clause_to_proc.m"
            {
#line 266 "clause_to_proc.m"
              check_hlds__clause_to_proc__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "clause_to_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "clause_to_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__clause_to_proc__V_149_149, 1) = ((MR_Box) (check_hlds__clause_to_proc__ClausesDisjuncts_19));
#line 266 "clause_to_proc.m"
            }
#line 266 "clause_to_proc.m"
            {
#line 266 "clause_to_proc.m"
              check_hlds__clause_to_proc__Goal_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "clause_to_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 0) = ((MR_Box) (check_hlds__clause_to_proc__V_149_149));
#line 266 "clause_to_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__clause_to_proc__Goal_64, 1) = ((MR_Box) (check_hlds__clause_to_proc__GoalInfo_144));
#line 266 "clause_to_proc.m"
            }
#line 242 "clause_to_proc.m"
          }
#line 231 "clause_to_proc.m"
      }
#line 270 "clause_to_proc.m"
    {
#line 270 "clause_to_proc.m"
      check_hlds__clause_to_proc__HeadVarList_78 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &check_hlds__clause_to_proc_scalar_common_2[4], check_hlds__clause_to_proc__HeadVars_12);
    }
#line 271 "clause_to_proc.m"
    {
#line 271 "clause_to_proc.m"
      hlds__hlds_pred__proc_info_set_body_7_p_0(check_hlds__clause_to_proc__VarSet_33, check_hlds__clause_to_proc__VarTypes_11, check_hlds__clause_to_proc__HeadVarList_78, check_hlds__clause_to_proc__Goal_64, check_hlds__clause_to_proc__RttiInfo_15, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_81_81, check_hlds__clause_to_proc__STATE_VARIABLE_Proc_80);
#line 271 "clause_to_proc.m"
      return;
    }
#line 190 "clause_to_proc.m"
  }
#line 38 "clause_to_proc.m"
}

#line 141 "clause_to_proc.m"
static void MR_CALL 
check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0_1(
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__closure_arg,
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_1,
#line 141 "clause_to_proc.m"
  MR_Box check_hlds__clause_to_proc__wrapper_arg_2,
#line 141 "clause_to_proc.m"
  MR_Box * check_hlds__clause_to_proc__wrapper_arg_3)
#line 141 "clause_to_proc.m"
{
#line 141 "clause_to_proc.m"
  {
#line 141 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__closure = check_hlds__clause_to_proc__closure_arg;
#line 141 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9;

#line 141 "clause_to_proc.m"
    {
#line 141 "clause_to_proc.m"
      check_hlds__clause_to_proc__copy_pred_clauses_to_procs_if_needed_3_p_0(((MR_Word) check_hlds__clause_to_proc__wrapper_arg_1), ((MR_Word) check_hlds__clause_to_proc__wrapper_arg_2), &check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9);
    }
#line 141 "clause_to_proc.m"
    *check_hlds__clause_to_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__clause_to_proc__conv0_STATE_VARIABLE_PredTable_9));
#line 141 "clause_to_proc.m"
  }
#line 141 "clause_to_proc.m"
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
#line 139 "clause_to_proc.m"
  {
#line 139 "clause_to_proc.m"
    MR_bool check_hlds__clause_to_proc__succeeded;
#line 139 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable0_6;
#line 139 "clause_to_proc.m"
    MR_Word check_hlds__clause_to_proc__PredTable_7;
#line 141 "clause_to_proc.m"
    MR_Box check_hlds__clause_to_proc__conv1_PredTable_7;

#line 140 "clause_to_proc.m"
    {
#line 140 "clause_to_proc.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__clause_to_proc__PredTable0_6);
    }
#line 141 "clause_to_proc.m"
    {
#line 141 "clause_to_proc.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[0], (MR_Word) &check_hlds__clause_to_proc_scalar_common_1[1], check_hlds__clause_to_proc__PredIds_4, ((MR_Box) (check_hlds__clause_to_proc__PredTable0_6)), &check_hlds__clause_to_proc__conv1_PredTable_7);
    }
#line 141 "clause_to_proc.m"
    check_hlds__clause_to_proc__PredTable_7 = ((MR_Word) check_hlds__clause_to_proc__conv1_PredTable_7);
#line 143 "clause_to_proc.m"
    {
#line 143 "clause_to_proc.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__clause_to_proc__PredTable_7, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__clause_to_proc__STATE_VARIABLE_ModuleInfo_9);
#line 143 "clause_to_proc.m"
      return;
    }
#line 139 "clause_to_proc.m"
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
