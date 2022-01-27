/*
** Automatically generated from `structure_reuse.lfu.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module transform_hlds.ctgc.structure_reuse.lfu. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__lfu__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.lfu.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"




#line 145 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lfu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 324 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(
#line 324 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1,
#line 324 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2,
#line 324 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3);

#line 316 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(
#line 316 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1,
#line 316 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2,
#line 316 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3);

#line 251 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(
#line 251 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4,
#line 251 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_5,
#line 251 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__Expr_6);

#line 239 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(
#line 239 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4,
#line 239 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_5,
#line 239 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__Goal_6);

#line 221 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst0_11,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead0_12,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_18,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_19,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_20,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_21,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_22,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_23);

#line 218 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1(
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6);

#line 210 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_14,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_15,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19);

#line 197 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst0_11,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead0_12,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_0_22,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_23,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_24,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_25,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_26,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_27);

#line 194 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1(
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6);

#line 187 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_0_14,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_15,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19);

#line 184 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1(
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6);

#line 178 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_12,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_13,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_14,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_15,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_16,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_17);

#line 115 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_65,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_66,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);

#line 75 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_19,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_20,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_21,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_22,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_23,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_24);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[2][12];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 463 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 471 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lfu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 480 "transform_hlds.ctgc.structure_reuse.lfu.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 324 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(
#line 324 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1,
#line 324 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2,
#line 324 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3)
#line 324 "structure_reuse.lfu.m"
{
#line 327 "structure_reuse.lfu.m"
  {
#line 327 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;

#line 327 "structure_reuse.lfu.m"
    if ((transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "structure_reuse.lfu.m"
      *transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "structure_reuse.lfu.m"
    else
#line 328 "structure_reuse.lfu.m"
      {
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Case0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2, (MR_Integer) 0)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2, (MR_Integer) 1)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Case_8;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases_9;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case0_6, (MR_Integer) 0)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case0_6, (MR_Integer) 1)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case0_6, (MR_Integer) 2)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_13;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_12, (MR_Integer) 0)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_12, (MR_Integer) 1)));
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_19;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_20;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_21;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_22;
#line 328 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_23;

#line 244 "structure_reuse.lfu.m"
        {
#line 244 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__Expr0_17, &transform_hlds__ctgc__structure_reuse__lfu__Expr_19);
        }
#line 245 "structure_reuse.lfu.m"
        {
#line 245 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__LFU0_20 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_18);
        }
#line 246 "structure_reuse.lfu.m"
        {
#line 246 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__LFU_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__LFU0_20);
        }
#line 247 "structure_reuse.lfu.m"
        {
#line 247 "structure_reuse.lfu.m"
          hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_21, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_18, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_22);
        }
#line 248 "structure_reuse.lfu.m"
        {
#line 248 "structure_reuse.lfu.m"
          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_22, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_23);
        }
#line 249 "structure_reuse.lfu.m"
        {
#line 249 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_19));
#line 249 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_23));
#line 249 "structure_reuse.lfu.m"
        }
#line 331 "structure_reuse.lfu.m"
        {
#line 331 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__Case_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case_8, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__MainConsId_10));
#line 331 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case_8, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__OtherConsIds_11));
#line 331 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Case_8, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goal_13));
#line 331 "structure_reuse.lfu.m"
        }
#line 332 "structure_reuse.lfu.m"
        {
#line 332 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__Cases0_7, &transform_hlds__ctgc__structure_reuse__lfu__Cases_9);
        }
#line 328 "structure_reuse.lfu.m"
        {
#line 328 "structure_reuse.lfu.m"
          MR_Word base;
#line 328 "structure_reuse.lfu.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "structure_reuse.lfu.m"
          *transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3 = base;
#line 328 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Case_8));
#line 328 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Cases_9));
#line 328 "structure_reuse.lfu.m"
        }
#line 328 "structure_reuse.lfu.m"
      }
#line 327 "structure_reuse.lfu.m"
  }
#line 324 "structure_reuse.lfu.m"
}

#line 316 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(
#line 316 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1,
#line 316 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2,
#line 316 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3)
#line 316 "structure_reuse.lfu.m"
{
#line 319 "structure_reuse.lfu.m"
  {
#line 319 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;

#line 319 "structure_reuse.lfu.m"
    if ((transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "structure_reuse.lfu.m"
      *transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 319 "structure_reuse.lfu.m"
    else
#line 320 "structure_reuse.lfu.m"
      {
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_8;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals_9;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_6, (MR_Integer) 0)));
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_6, (MR_Integer) 1)));
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_15;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_16;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_17;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_18;
#line 320 "structure_reuse.lfu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_19;

#line 244 "structure_reuse.lfu.m"
        {
#line 244 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__Expr0_13, &transform_hlds__ctgc__structure_reuse__lfu__Expr_15);
        }
#line 245 "structure_reuse.lfu.m"
        {
#line 245 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__LFU0_16 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_14);
        }
#line 246 "structure_reuse.lfu.m"
        {
#line 246 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__LFU_17 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__LFU0_16);
        }
#line 247 "structure_reuse.lfu.m"
        {
#line 247 "structure_reuse.lfu.m"
          hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_17, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_14, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_18);
        }
#line 248 "structure_reuse.lfu.m"
        {
#line 248 "structure_reuse.lfu.m"
          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_18, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_19);
        }
#line 249 "structure_reuse.lfu.m"
        {
#line 249 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_8, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_15));
#line 249 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_8, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_19));
#line 249 "structure_reuse.lfu.m"
        }
#line 322 "structure_reuse.lfu.m"
        {
#line 322 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_1, transform_hlds__ctgc__structure_reuse__lfu__Goals0_7, &transform_hlds__ctgc__structure_reuse__lfu__Goals_9);
        }
#line 320 "structure_reuse.lfu.m"
        {
#line 320 "structure_reuse.lfu.m"
          MR_Word base;
#line 320 "structure_reuse.lfu.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "structure_reuse.lfu.m"
          *transform_hlds__ctgc__structure_reuse__lfu__HeadVar__3_3 = base;
#line 320 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goal_8));
#line 320 "structure_reuse.lfu.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goals_9));
#line 320 "structure_reuse.lfu.m"
        }
#line 320 "structure_reuse.lfu.m"
      }
#line 319 "structure_reuse.lfu.m"
  }
#line 316 "structure_reuse.lfu.m"
}

#line 251 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(
#line 251 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4,
#line 251 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_5,
#line 251 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__Expr_6)
#line 251 "structure_reuse.lfu.m"
{
#line 256 "structure_reuse.lfu.m"
  {
#line 256 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;

#line 256 "structure_reuse.lfu.m"
#line 256 "structure_reuse.lfu.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__Expr0_5)) {
#line 256 "structure_reuse.lfu.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 256 "structure_reuse.lfu.m"
      case (MR_Integer) 0:
#line 274 "structure_reuse.lfu.m"
        {
#line 274 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_21 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__Expr0_5), (MR_Integer) 0);
#line 274 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_22;

#line 275 "structure_reuse.lfu.m"
          {
#line 275 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Goal0_21, &transform_hlds__ctgc__structure_reuse__lfu__Goal_22);
          }
#line 276 "structure_reuse.lfu.m"
          *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__ctgc__structure_reuse__lfu__Goal_22);
#line 274 "structure_reuse.lfu.m"
        }
#line 256 "structure_reuse.lfu.m"
        break;
#line 256 "structure_reuse.lfu.m"
      case (MR_Integer) 1:
#line 291 "structure_reuse.lfu.m"
        *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = transform_hlds__ctgc__structure_reuse__lfu__Expr0_5;
#line 256 "structure_reuse.lfu.m"
        break;
#line 256 "structure_reuse.lfu.m"
      case (MR_Integer) 2:
#line 288 "structure_reuse.lfu.m"
        *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = transform_hlds__ctgc__structure_reuse__lfu__Expr0_5;
#line 256 "structure_reuse.lfu.m"
        break;
#line 256 "structure_reuse.lfu.m"
      case (MR_Integer) 3:
#line 256 "structure_reuse.lfu.m"
#line 256 "structure_reuse.lfu.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 0)))) {
#line 256 "structure_reuse.lfu.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 0:
#line 285 "structure_reuse.lfu.m"
            *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = transform_hlds__ctgc__structure_reuse__lfu__Expr0_5;
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 1:
#line 294 "structure_reuse.lfu.m"
            *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = transform_hlds__ctgc__structure_reuse__lfu__Expr0_5;
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 2:
#line 256 "structure_reuse.lfu.m"
            {
#line 256 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 256 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 2)));
#line 256 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals_9;

#line 257 "structure_reuse.lfu.m"
              {
#line 257 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Goals0_8, &transform_hlds__ctgc__structure_reuse__lfu__Goals_9);
              }
#line 258 "structure_reuse.lfu.m"
              {
#line 258 "structure_reuse.lfu.m"
                MR_Word base;
#line 258 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 258 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 258 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 258 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__ConjType_7));
#line 258 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goals_9));
#line 258 "structure_reuse.lfu.m"
              }
#line 256 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 3:
#line 260 "structure_reuse.lfu.m"
            {
#line 260 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 260 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals_69;

#line 261 "structure_reuse.lfu.m"
              {
#line 261 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Goals0_68, &transform_hlds__ctgc__structure_reuse__lfu__Goals_69);
              }
#line 262 "structure_reuse.lfu.m"
              {
#line 262 "structure_reuse.lfu.m"
                MR_Word base;
#line 262 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 262 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 262 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goals_69));
#line 262 "structure_reuse.lfu.m"
              }
#line 260 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 4:
#line 264 "structure_reuse.lfu.m"
            {
#line 264 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 264 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Det_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 2)));
#line 264 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 3)));
#line 264 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases_13;

#line 265 "structure_reuse.lfu.m"
              {
#line 265 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Cases0_12, &transform_hlds__ctgc__structure_reuse__lfu__Cases_13);
              }
#line 266 "structure_reuse.lfu.m"
              {
#line 266 "structure_reuse.lfu.m"
                MR_Word base;
#line 266 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 266 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 266 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Var_10));
#line 266 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Det_11));
#line 266 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Cases_13));
#line 266 "structure_reuse.lfu.m"
              }
#line 264 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 5:
#line 278 "structure_reuse.lfu.m"
            {
#line 278 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 278 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 2)));
#line 278 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_71;

#line 281 "structure_reuse.lfu.m"
              {
#line 281 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Goal0_70, &transform_hlds__ctgc__structure_reuse__lfu__Goal_71);
              }
#line 282 "structure_reuse.lfu.m"
              {
#line 282 "structure_reuse.lfu.m"
                MR_Word base;
#line 282 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 282 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 282 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Reason_23));
#line 282 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goal_71));
#line 282 "structure_reuse.lfu.m"
              }
#line 278 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 6:
#line 268 "structure_reuse.lfu.m"
            {
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cond0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 2)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 3)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Else0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 4)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cond_18;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Then_19;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Else_20;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Cond0_15, (MR_Integer) 0)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Cond0_15, (MR_Integer) 1)));
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_77;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_78;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_79;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_80;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_81;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_87;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_88;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_89;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_90;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_91;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_92;
#line 268 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_93;

#line 244 "structure_reuse.lfu.m"
              {
#line 244 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Expr0_75, &transform_hlds__ctgc__structure_reuse__lfu__Expr_77);
              }
#line 245 "structure_reuse.lfu.m"
              {
#line 245 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__LFU0_78 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_76);
              }
#line 246 "structure_reuse.lfu.m"
              {
#line 246 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__LFU_79 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__LFU0_78);
              }
#line 247 "structure_reuse.lfu.m"
              {
#line 247 "structure_reuse.lfu.m"
                hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_79, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_76, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_80);
              }
#line 248 "structure_reuse.lfu.m"
              {
#line 248 "structure_reuse.lfu.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_80, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_81);
              }
#line 249 "structure_reuse.lfu.m"
              {
#line 249 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__Cond_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Cond_18, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_77));
#line 249 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Cond_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_81));
#line 249 "structure_reuse.lfu.m"
              }
#line 243 "structure_reuse.lfu.m"
              transform_hlds__ctgc__structure_reuse__lfu__Expr0_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Then0_16, (MR_Integer) 0)));
#line 243 "structure_reuse.lfu.m"
              transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Then0_16, (MR_Integer) 1)));
#line 244 "structure_reuse.lfu.m"
              {
#line 244 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Expr0_87, &transform_hlds__ctgc__structure_reuse__lfu__Expr_89);
              }
#line 245 "structure_reuse.lfu.m"
              {
#line 245 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__LFU0_90 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_88);
              }
#line 246 "structure_reuse.lfu.m"
              {
#line 246 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__LFU_91 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__LFU0_90);
              }
#line 247 "structure_reuse.lfu.m"
              {
#line 247 "structure_reuse.lfu.m"
                hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_91, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_88, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_92);
              }
#line 248 "structure_reuse.lfu.m"
              {
#line 248 "structure_reuse.lfu.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_92, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_93);
              }
#line 249 "structure_reuse.lfu.m"
              {
#line 249 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__Then_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Then_19, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_89));
#line 249 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Then_19, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_93));
#line 249 "structure_reuse.lfu.m"
              }
#line 271 "structure_reuse.lfu.m"
              {
#line 271 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Else0_17, &transform_hlds__ctgc__structure_reuse__lfu__Else_20);
              }
#line 272 "structure_reuse.lfu.m"
              {
#line 272 "structure_reuse.lfu.m"
                MR_Word base;
#line 272 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 272 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 272 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 272 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Vars_14));
#line 272 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Cond_18));
#line 272 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Then_19));
#line 272 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Else_20));
#line 272 "structure_reuse.lfu.m"
              }
#line 268 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
          case (MR_Integer) 7:
#line 296 "structure_reuse.lfu.m"
            {
#line 296 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__Expr0_5, (MR_Integer) 1)));
#line 296 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57;

#line 304 "structure_reuse.lfu.m"
#line 304 "structure_reuse.lfu.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47)) {
#line 304 "structure_reuse.lfu.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 304 "structure_reuse.lfu.m"
                case (MR_Integer) 0:
#line 305 "structure_reuse.lfu.m"
                  {
#line 305 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LeftGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 0)));
#line 305 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__RightGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 1)));
#line 305 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LeftGoal_60;
#line 305 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__RightGoal_61;

#line 306 "structure_reuse.lfu.m"
                    {
#line 306 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__LeftGoal0_58, &transform_hlds__ctgc__structure_reuse__lfu__LeftGoal_60);
                    }
#line 307 "structure_reuse.lfu.m"
                    {
#line 307 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__RightGoal0_59, &transform_hlds__ctgc__structure_reuse__lfu__RightGoal_61);
                    }
#line 308 "structure_reuse.lfu.m"
                    {
#line 308 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__LeftGoal_60));
#line 308 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__RightGoal_61));
#line 308 "structure_reuse.lfu.m"
                    }
#line 305 "structure_reuse.lfu.m"
                  }
#line 304 "structure_reuse.lfu.m"
                  break;
#line 304 "structure_reuse.lfu.m"
                case (MR_Integer) 1:
#line 299 "structure_reuse.lfu.m"
                  {
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 0)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Outer_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 1)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inner_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 2)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__MaybeOutputVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 3)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__MainGoal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 4)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__OrElseGoals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 5)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__OrElseInners_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand0_47, (MR_Integer) 6)));
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__MainGoal_55;
#line 299 "structure_reuse.lfu.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__lfu__OrElseGoals_56;

#line 300 "structure_reuse.lfu.m"
                    {
#line 300 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__MainGoal0_52, &transform_hlds__ctgc__structure_reuse__lfu__MainGoal_55);
                    }
#line 301 "structure_reuse.lfu.m"
                    {
#line 301 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__OrElseGoals0_53, &transform_hlds__ctgc__structure_reuse__lfu__OrElseGoals_56);
                    }
#line 302 "structure_reuse.lfu.m"
                    {
#line 302 "structure_reuse.lfu.m"
                      transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalType_48));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Outer_49));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Inner_50));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__MaybeOutputVars_51));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__MainGoal_55));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__OrElseGoals_56));
#line 302 "structure_reuse.lfu.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__OrElseInners_54));
#line 302 "structure_reuse.lfu.m"
                    }
#line 299 "structure_reuse.lfu.m"
                  }
#line 304 "structure_reuse.lfu.m"
                  break;
#line 304 "structure_reuse.lfu.m"
                case (MR_Integer) 2:
#line 310 "structure_reuse.lfu.m"
                  {
#line 311 "structure_reuse.lfu.m"
                    {
#line 311 "structure_reuse.lfu.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lfu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", (MR_String) "try_goal");
#line 311 "structure_reuse.lfu.m"
                      return;
                    }
#line 310 "structure_reuse.lfu.m"
                  }
#line 304 "structure_reuse.lfu.m"
                  break;
#line 304 "structure_reuse.lfu.m"
              }
#line 313 "structure_reuse.lfu.m"
              {
#line 313 "structure_reuse.lfu.m"
                MR_Word base;
#line 313 "structure_reuse.lfu.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "structure_reuse.lfu.m"
                *transform_hlds__ctgc__structure_reuse__lfu__Expr_6 = base;
#line 313 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 313 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Shorthand_57));
#line 313 "structure_reuse.lfu.m"
              }
#line 296 "structure_reuse.lfu.m"
            }
#line 256 "structure_reuse.lfu.m"
            break;
#line 256 "structure_reuse.lfu.m"
        }
#line 256 "structure_reuse.lfu.m"
        break;
#line 256 "structure_reuse.lfu.m"
    }
#line 256 "structure_reuse.lfu.m"
  }
#line 251 "structure_reuse.lfu.m"
}

#line 239 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(
#line 239 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4,
#line 239 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_5,
#line 239 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__Goal_6)
#line 239 "structure_reuse.lfu.m"
{
#line 242 "structure_reuse.lfu.m"
  {
#line 242 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_5, (MR_Integer) 0)));
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_5, (MR_Integer) 1)));
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_9;
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_10;
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_11;
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_12;
#line 242 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_13;

#line 244 "structure_reuse.lfu.m"
    {
#line 244 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Expr0_7, &transform_hlds__ctgc__structure_reuse__lfu__Expr_9);
    }
#line 245 "structure_reuse.lfu.m"
    {
#line 245 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__LFU0_10 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_8);
    }
#line 246 "structure_reuse.lfu.m"
    {
#line 246 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__LFU_11 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__LFU0_10);
    }
#line 247 "structure_reuse.lfu.m"
    {
#line 247 "structure_reuse.lfu.m"
      hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_11, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_8, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_12);
    }
#line 248 "structure_reuse.lfu.m"
    {
#line 248 "structure_reuse.lfu.m"
      hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_12, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_13);
    }
#line 249 "structure_reuse.lfu.m"
    {
#line 249 "structure_reuse.lfu.m"
      MR_Word base;
#line 249 "structure_reuse.lfu.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
      *transform_hlds__ctgc__structure_reuse__lfu__Goal_6 = base;
#line 249 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_9));
#line 249 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_13));
#line 249 "structure_reuse.lfu.m"
    }
#line 242 "structure_reuse.lfu.m"
  }
#line 239 "structure_reuse.lfu.m"
}

#line 221 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst0_11,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead0_12,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_18,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_19,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_20,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_21,
#line 221 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_22,
#line 221 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_23)
#line 221 "structure_reuse.lfu.m"
{
#line 227 "structure_reuse.lfu.m"
  {
#line 227 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 227 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_27_27;
#line 227 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst_16;
#line 227 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead_17;

#line 228 "structure_reuse.lfu.m"
    {
#line 228 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_18, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_19, transform_hlds__ctgc__structure_reuse__lfu__Inst0_11, &transform_hlds__ctgc__structure_reuse__lfu__Inst_16, transform_hlds__ctgc__structure_reuse__lfu__Dead0_12, &transform_hlds__ctgc__structure_reuse__lfu__Dead_17);
    }
#line 1357 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 229 "structure_reuse.lfu.m"
    {
#line 229 "structure_reuse.lfu.m"
      parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_27_27, transform_hlds__ctgc__structure_reuse__lfu__Inst_16, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_20, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_21);
    }
#line 230 "structure_reuse.lfu.m"
    {
#line 230 "structure_reuse.lfu.m"
      parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_27_27, transform_hlds__ctgc__structure_reuse__lfu__Dead_17, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_22, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_23);
    }
#line 227 "structure_reuse.lfu.m"
  }
#line 221 "structure_reuse.lfu.m"
}

#line 218 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1(
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 218 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 218 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6)
#line 218 "structure_reuse.lfu.m"
{
#line 218 "structure_reuse.lfu.m"
  {
#line 218 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure = transform_hlds__ctgc__structure_reuse__lfu__closure_arg;
#line 218 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_19;
#line 218 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_21;
#line 218 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_23;

#line 218 "structure_reuse.lfu.m"
    {
#line 218 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_19, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_21, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_23);
    }
#line 218 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_19));
#line 218 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_21));
#line 218 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_23));
#line 218 "structure_reuse.lfu.m"
  }
#line 218 "structure_reuse.lfu.m"
}

#line 210 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_14,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_15,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17,
#line 210 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18,
#line 210 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19)
#line 210 "structure_reuse.lfu.m"
{
#line 215 "structure_reuse.lfu.m"
  {
#line 215 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 215 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30;
#line 215 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31;
#line 215 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_20_20;
#line 218 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17;
#line 218 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19;

#line 218 "structure_reuse.lfu.m"
    {
#line 218 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[1]));
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1));
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8));
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16));
#line 218 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18));
#line 218 "structure_reuse.lfu.m"
    }
#line 1472 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1474 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[1];
#line 218 "structure_reuse.lfu.m"
    {
#line 218 "structure_reuse.lfu.m"
      mercury__list__map_foldl2_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30, transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__V_20_20, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_14, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16)), &transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18)), &transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19);
    }
#line 218 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17);
#line 218 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19);
#line 215 "structure_reuse.lfu.m"
  }
#line 210 "structure_reuse.lfu.m"
}

#line 197 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst0_11,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead0_12,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_0_22,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_23,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_24,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_25,
#line 197 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_26,
#line 197 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_27)
#line 197 "structure_reuse.lfu.m"
{
#line 203 "structure_reuse.lfu.m"
  {
#line 203 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_31;
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_0_22, (MR_Integer) 0)));
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_0_22, (MR_Integer) 1)));
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_0_22, (MR_Integer) 2)));
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_19;
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst_20;
#line 203 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead_21;

#line 205 "structure_reuse.lfu.m"
    {
#line 205 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_10, transform_hlds__ctgc__structure_reuse__lfu__Goal0_18, &transform_hlds__ctgc__structure_reuse__lfu__Goal_19, transform_hlds__ctgc__structure_reuse__lfu__Inst0_11, &transform_hlds__ctgc__structure_reuse__lfu__Inst_20, transform_hlds__ctgc__structure_reuse__lfu__Dead0_12, &transform_hlds__ctgc__structure_reuse__lfu__Dead_21);
    }
#line 206 "structure_reuse.lfu.m"
    {
#line 206 "structure_reuse.lfu.m"
      MR_Word base;
#line 206 "structure_reuse.lfu.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "structure_reuse.lfu.m"
      *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Case_23 = base;
#line 206 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__MainConsId_16));
#line 206 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__OtherConsIds_17));
#line 206 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goal_19));
#line 206 "structure_reuse.lfu.m"
    }
#line 1553 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 207 "structure_reuse.lfu.m"
    {
#line 207 "structure_reuse.lfu.m"
      parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__Inst_20, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_24, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_25);
    }
#line 208 "structure_reuse.lfu.m"
    {
#line 208 "structure_reuse.lfu.m"
      parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__Dead_21, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_26, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_27);
    }
#line 203 "structure_reuse.lfu.m"
  }
#line 197 "structure_reuse.lfu.m"
}

#line 194 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1(
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 194 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 194 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6)
#line 194 "structure_reuse.lfu.m"
{
#line 194 "structure_reuse.lfu.m"
  {
#line 194 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure = transform_hlds__ctgc__structure_reuse__lfu__closure_arg;
#line 194 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Case_23;
#line 194 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_25;
#line 194 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_27;

#line 194 "structure_reuse.lfu.m"
    {
#line 194 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Case_23, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_25, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_27);
    }
#line 194 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Case_23));
#line 194 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_25));
#line 194 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_27));
#line 194 "structure_reuse.lfu.m"
  }
#line 194 "structure_reuse.lfu.m"
}

#line 187 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_0_14,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_15,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17,
#line 187 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18,
#line 187 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19)
#line 187 "structure_reuse.lfu.m"
{
#line 191 "structure_reuse.lfu.m"
  {
#line 191 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 191 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30;
#line 191 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31;
#line 191 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_20_20;
#line 194 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17;
#line 194 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19;

#line 194 "structure_reuse.lfu.m"
    {
#line 194 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[0]));
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1));
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8));
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16));
#line 194 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_20_20, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18));
#line 194 "structure_reuse.lfu.m"
    }
#line 1668 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1670 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[1];
#line 194 "structure_reuse.lfu.m"
    {
#line 194 "structure_reuse.lfu.m"
      mercury__list__map_foldl2_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30, transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_30_30, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_31_31, transform_hlds__ctgc__structure_reuse__lfu__V_20_20, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_0_14, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Cases_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_16)), &transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_18)), &transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19);
    }
#line 194 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_17);
#line 194 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_19 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_19);
#line 191 "structure_reuse.lfu.m"
  }
#line 187 "structure_reuse.lfu.m"
}

#line 184 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1(
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure_arg,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4,
#line 184 "structure_reuse.lfu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5,
#line 184 "structure_reuse.lfu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6)
#line 184 "structure_reuse.lfu.m"
{
#line 184 "structure_reuse.lfu.m"
  {
#line 184 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__closure = transform_hlds__ctgc__structure_reuse__lfu__closure_arg;
#line 184 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_20;
#line 184 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_22;
#line 184 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_24;

#line 184 "structure_reuse.lfu.m"
    {
#line 184 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_20, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_22, ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_5), &transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_24);
    }
#line 184 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv2_STATE_VARIABLE_Goal_20));
#line 184 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv1_STATE_VARIABLE_InstantiatedVars_22));
#line 184 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__wrapper_arg_6 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__conv0_STATE_VARIABLE_DeadVars_24));
#line 184 "structure_reuse.lfu.m"
  }
#line 184 "structure_reuse.lfu.m"
}

#line 178 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_12,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_13,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_14,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_15,
#line 178 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_16,
#line 178 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_17)
#line 178 "structure_reuse.lfu.m"
{
#line 183 "structure_reuse.lfu.m"
  {
#line 183 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 183 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_28_28;
#line 183 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_29_29;
#line 183 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_18_18;
#line 184 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_15;
#line 184 "structure_reuse.lfu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_17;

#line 184 "structure_reuse.lfu.m"
    {
#line 184 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[0]));
#line 184 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1));
#line 184 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8));
#line 184 "structure_reuse.lfu.m"
    }
#line 1780 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1782 "transform_hlds.ctgc.structure_reuse.lfu.c"
    transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_29_29 = (MR_Word) &transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[1];
#line 184 "structure_reuse.lfu.m"
    {
#line 184 "structure_reuse.lfu.m"
      mercury__list__map_foldl2_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_28_28, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_29_29, transform_hlds__ctgc__structure_reuse__lfu__TypeInfo_29_29, transform_hlds__ctgc__structure_reuse__lfu__V_18_18, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_0_12, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goals_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_14)), &transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_15, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_16)), &transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_17);
    }
#line 184 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv4_STATE_VARIABLE_InstantiatedVars_15);
#line 184 "structure_reuse.lfu.m"
    *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__conv3_STATE_VARIABLE_DeadVars_17);
#line 183 "structure_reuse.lfu.m"
  }
#line 178 "structure_reuse.lfu.m"
}

#line 115 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_65,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_66,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68,
#line 115 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69,
#line 115 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70)
#line 115 "structure_reuse.lfu.m"
{
#line 120 "structure_reuse.lfu.m"
  {
#line 120 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 120 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_65, (MR_Integer) 0)));
#line 120 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_65, (MR_Integer) 1)));
#line 120 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18;
#line 120 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_63;
#line 120 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_64;

#line 129 "structure_reuse.lfu.m"
#line 129 "structure_reuse.lfu.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12)) {
#line 129 "structure_reuse.lfu.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 129 "structure_reuse.lfu.m"
      case (MR_Integer) 0:
#line 140 "structure_reuse.lfu.m"
        {
#line 140 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__SubGoal0_25 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12), (MR_Integer) 0);
#line 140 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__SubGoal_26;

#line 141 "structure_reuse.lfu.m"
          {
#line 141 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__SubGoal0_25, &transform_hlds__ctgc__structure_reuse__lfu__SubGoal_26, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
          }
#line 143 "structure_reuse.lfu.m"
          transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__ctgc__structure_reuse__lfu__SubGoal_26);
#line 140 "structure_reuse.lfu.m"
        }
#line 129 "structure_reuse.lfu.m"
        break;
#line 129 "structure_reuse.lfu.m"
      case (MR_Integer) 1:
#line 129 "structure_reuse.lfu.m"
      case (MR_Integer) 2:
#line 168 "structure_reuse.lfu.m"
        {
#line 169 "structure_reuse.lfu.m"
          {
#line 169 "structure_reuse.lfu.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lfu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "atomic goal");
#line 169 "structure_reuse.lfu.m"
            return;
          }
#line 168 "structure_reuse.lfu.m"
        }
#line 129 "structure_reuse.lfu.m"
        break;
#line 129 "structure_reuse.lfu.m"
      case (MR_Integer) 3:
#line 129 "structure_reuse.lfu.m"
#line 129 "structure_reuse.lfu.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 0)))) {
#line 129 "structure_reuse.lfu.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 0:
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 1:
#line 168 "structure_reuse.lfu.m"
            {
#line 169 "structure_reuse.lfu.m"
              {
#line 169 "structure_reuse.lfu.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lfu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "atomic goal");
#line 169 "structure_reuse.lfu.m"
                return;
              }
#line 168 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 2:
#line 125 "structure_reuse.lfu.m"
            {
#line 125 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 1)));
#line 125 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 2)));
#line 125 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goals_17;

#line 126 "structure_reuse.lfu.m"
              {
#line 126 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Goals0_16, &transform_hlds__ctgc__structure_reuse__lfu__Goals_17, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
              }
#line 128 "structure_reuse.lfu.m"
              {
#line 128 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 128 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 128 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__ConjType_15));
#line 128 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Goals_17));
#line 128 "structure_reuse.lfu.m"
              }
#line 125 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 3:
#line 135 "structure_reuse.lfu.m"
            {
#line 135 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Disj0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 1)));
#line 135 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Disj_24;

#line 136 "structure_reuse.lfu.m"
              {
#line 136 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Disj0_23, &transform_hlds__ctgc__structure_reuse__lfu__Disj_24, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
              }
#line 138 "structure_reuse.lfu.m"
              {
#line 138 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 138 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Disj_24));
#line 138 "structure_reuse.lfu.m"
              }
#line 135 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 4:
#line 130 "structure_reuse.lfu.m"
            {
#line 130 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 1)));
#line 130 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 2)));
#line 130 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 3)));
#line 130 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cases_22;

#line 131 "structure_reuse.lfu.m"
              {
#line 131 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Cases0_21, &transform_hlds__ctgc__structure_reuse__lfu__Cases_22, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
              }
#line 133 "structure_reuse.lfu.m"
              {
#line 133 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 133 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 133 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Var_19));
#line 133 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__CanFail_20));
#line 133 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Cases_22));
#line 133 "structure_reuse.lfu.m"
              }
#line 130 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 5:
#line 145 "structure_reuse.lfu.m"
            {
#line 145 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 1)));
#line 145 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__SubGoal0_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 2)));
#line 145 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__SubGoal_95;

#line 148 "structure_reuse.lfu.m"
              {
#line 148 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__SubGoal0_94, &transform_hlds__ctgc__structure_reuse__lfu__SubGoal_95, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
              }
#line 150 "structure_reuse.lfu.m"
              {
#line 150 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 150 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 150 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Reason_27));
#line 150 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__SubGoal_95));
#line 150 "structure_reuse.lfu.m"
              }
#line 145 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 6:
#line 152 "structure_reuse.lfu.m"
            {
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_96_96;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 1)));
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 2)));
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 3)));
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12, (MR_Integer) 4)));
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Cond_34;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Then_35;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Else_36;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Inst1_37;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__Dead1_38;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_77_77;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_78_78;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_79_79;
#line 152 "structure_reuse.lfu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_80_80;

#line 155 "structure_reuse.lfu.m"
              {
#line 155 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Cond0_29, &transform_hlds__ctgc__structure_reuse__lfu__Cond_34, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, &transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_77_77, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, &transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_78_78);
              }
#line 157 "structure_reuse.lfu.m"
              {
#line 157 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Then0_30, &transform_hlds__ctgc__structure_reuse__lfu__Then_35, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_77_77, &transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_79_79, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_78_78, &transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_80_80);
              }
#line 159 "structure_reuse.lfu.m"
              {
#line 159 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__Else0_31, &transform_hlds__ctgc__structure_reuse__lfu__Else_36, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, &transform_hlds__ctgc__structure_reuse__lfu__Inst1_37, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_69, &transform_hlds__ctgc__structure_reuse__lfu__Dead1_38);
              }
#line 2074 "transform_hlds.ctgc.structure_reuse.lfu.c"
              transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 160 "structure_reuse.lfu.m"
              {
#line 160 "structure_reuse.lfu.m"
                parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_96_96, transform_hlds__ctgc__structure_reuse__lfu__Inst1_37, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_79_79, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_68);
              }
#line 161 "structure_reuse.lfu.m"
              {
#line 161 "structure_reuse.lfu.m"
                parse_tree__set_of_var__union_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_96_96, transform_hlds__ctgc__structure_reuse__lfu__Dead1_38, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_80_80, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70);
              }
#line 162 "structure_reuse.lfu.m"
              {
#line 162 "structure_reuse.lfu.m"
                transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 162 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 162 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Vars_28));
#line 162 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Cond_34));
#line 162 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Then_35));
#line 162 "structure_reuse.lfu.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Else_36));
#line 162 "structure_reuse.lfu.m"
              }
#line 152 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
          case (MR_Integer) 7:
#line 171 "structure_reuse.lfu.m"
            {
#line 172 "structure_reuse.lfu.m"
              {
#line 172 "structure_reuse.lfu.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lfu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "shorthand");
#line 172 "structure_reuse.lfu.m"
                return;
              }
#line 171 "structure_reuse.lfu.m"
            }
#line 129 "structure_reuse.lfu.m"
            break;
#line 129 "structure_reuse.lfu.m"
        }
#line 129 "structure_reuse.lfu.m"
        break;
#line 129 "structure_reuse.lfu.m"
    }
#line 174 "structure_reuse.lfu.m"
    {
#line 174 "structure_reuse.lfu.m"
      parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_67, *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_70, &transform_hlds__ctgc__structure_reuse__lfu__LFU_63);
    }
#line 175 "structure_reuse.lfu.m"
    {
#line 175 "structure_reuse.lfu.m"
      hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_63, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_64);
    }
#line 176 "structure_reuse.lfu.m"
    {
#line 176 "structure_reuse.lfu.m"
      MR_Word base;
#line 176 "structure_reuse.lfu.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 176 "structure_reuse.lfu.m"
      *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_66 = base;
#line 176 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalExpr_18));
#line 176 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_64));
#line 176 "structure_reuse.lfu.m"
    }
#line 120 "structure_reuse.lfu.m"
  }
#line 115 "structure_reuse.lfu.m"
}

#line 75 "structure_reuse.lfu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_19,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_20,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_21,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_22,
#line 75 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_23,
#line 75 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_24)
#line 75 "structure_reuse.lfu.m"
{
#line 79 "structure_reuse.lfu.m"
  {
#line 79 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 79 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_19, (MR_Integer) 0)));
#line 79 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_19, (MR_Integer) 1)));
#line 79 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__HasSubGoals_14;

#line 81 "structure_reuse.lfu.m"
    {
#line 81 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__HasSubGoals_14 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12);
    }
#line 90 "structure_reuse.lfu.m"
#line 90 "structure_reuse.lfu.m"
    switch (transform_hlds__ctgc__structure_reuse__lfu__HasSubGoals_14) {
#line 90 "structure_reuse.lfu.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "structure_reuse.lfu.m"
      case (MR_Integer) 1:
#line 83 "structure_reuse.lfu.m"
        {
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_58;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_16;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_17;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__PreBirths_42;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__PostBirths_43;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__PostDeaths_44;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_45;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_47_47;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_48_48;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_49_49;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_50_50;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_51_51;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_54_54;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_55_55;
#line 83 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_56_56;

#line 105 "structure_reuse.lfu.m"
          {
#line 105 "structure_reuse.lfu.m"
            hlds__hlds_llds__goal_info_get_pre_births_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__PreBirths_42);
          }
#line 106 "structure_reuse.lfu.m"
          {
#line 106 "structure_reuse.lfu.m"
            hlds__hlds_llds__goal_info_get_post_births_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__PostBirths_43);
          }
#line 107 "structure_reuse.lfu.m"
          {
#line 107 "structure_reuse.lfu.m"
            hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__PostDeaths_44);
          }
#line 108 "structure_reuse.lfu.m"
          {
#line 108 "structure_reuse.lfu.m"
            hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_45);
          }
#line 2251 "transform_hlds.ctgc.structure_reuse.lfu.c"
          transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 110 "structure_reuse.lfu.m"
          {
#line 110 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_48_48 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__PreBirths_42);
          }
#line 111 "structure_reuse.lfu.m"
          {
#line 111 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_50_50 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__PostBirths_43);
          }
#line 112 "structure_reuse.lfu.m"
          {
#line 112 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_51_51, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_21));
#line 112 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "structure_reuse.lfu.m"
          }
#line 111 "structure_reuse.lfu.m"
          {
#line 111 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_49_49, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_50_50));
#line 111 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_49_49, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_51_51));
#line 111 "structure_reuse.lfu.m"
          }
#line 110 "structure_reuse.lfu.m"
          {
#line 110 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_47_47, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_48_48));
#line 110 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_47_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_49_49));
#line 110 "structure_reuse.lfu.m"
          }
#line 109 "structure_reuse.lfu.m"
          {
#line 109 "structure_reuse.lfu.m"
            *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_22 = parse_tree__set_of_var__union_list_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_58, transform_hlds__ctgc__structure_reuse__lfu__V_47_47);
          }
#line 113 "structure_reuse.lfu.m"
          {
#line 113 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_56_56, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_23));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "structure_reuse.lfu.m"
          }
#line 113 "structure_reuse.lfu.m"
          {
#line 113 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_55_55, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__PostDeaths_44));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_55_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_56_56));
#line 113 "structure_reuse.lfu.m"
          }
#line 113 "structure_reuse.lfu.m"
          {
#line 113 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_54_54, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_45));
#line 113 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lfu__V_54_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__V_55_55));
#line 113 "structure_reuse.lfu.m"
          }
#line 113 "structure_reuse.lfu.m"
          {
#line 113 "structure_reuse.lfu.m"
            *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_24 = parse_tree__set_of_var__union_list_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__TypeCtorInfo_31_58, transform_hlds__ctgc__structure_reuse__lfu__V_54_54);
          }
#line 87 "structure_reuse.lfu.m"
          {
#line 87 "structure_reuse.lfu.m"
            parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_21, *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_24, &transform_hlds__ctgc__structure_reuse__lfu__LFU_16);
          }
#line 88 "structure_reuse.lfu.m"
          {
#line 88 "structure_reuse.lfu.m"
            hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_16, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_17);
          }
#line 89 "structure_reuse.lfu.m"
          {
#line 89 "structure_reuse.lfu.m"
            MR_Word base;
#line 89 "structure_reuse.lfu.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 89 "structure_reuse.lfu.m"
            *transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_20 = base;
#line 89 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalExpr0_12));
#line 89 "structure_reuse.lfu.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_17));
#line 89 "structure_reuse.lfu.m"
          }
#line 83 "structure_reuse.lfu.m"
        }
#line 90 "structure_reuse.lfu.m"
        break;
#line 90 "structure_reuse.lfu.m"
      case (MR_Integer) 0:
#line 91 "structure_reuse.lfu.m"
        {
#line 91 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_18;
#line 91 "structure_reuse.lfu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_25_25;

#line 92 "structure_reuse.lfu.m"
          {
#line 92 "structure_reuse.lfu.m"
            hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_13, &transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_18);
          }
#line 93 "structure_reuse.lfu.m"
          {
#line 93 "structure_reuse.lfu.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__PreDeaths_18, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_0_23, &transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_25_25);
          }
#line 94 "structure_reuse.lfu.m"
          {
#line 94 "structure_reuse.lfu.m"
            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_0_19, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_Goal_20, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_0_21, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_InstantiatedVars_22, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_25_25, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_DeadVars_24);
          }
#line 91 "structure_reuse.lfu.m"
        }
#line 90 "structure_reuse.lfu.m"
        break;
#line 90 "structure_reuse.lfu.m"
    }
#line 79 "structure_reuse.lfu.m"
  }
#line 75 "structure_reuse.lfu.m"
}

#line 38 "structure_reuse.lfu.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_p_0(
#line 38 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4,
#line 38 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_8,
#line 38 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_9)
#line 38 "structure_reuse.lfu.m"
{
#line 234 "structure_reuse.lfu.m"
  {
#line 234 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_6;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_7;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr0_14;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_15;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Expr_16;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU0_17;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__LFU_18;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_19;
#line 234 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_20;

#line 235 "structure_reuse.lfu.m"
    {
#line 235 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_8, &transform_hlds__ctgc__structure_reuse__lfu__Goal0_6);
    }
#line 243 "structure_reuse.lfu.m"
    transform_hlds__ctgc__structure_reuse__lfu__Expr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_6, (MR_Integer) 0)));
#line 243 "structure_reuse.lfu.m"
    transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal0_6, (MR_Integer) 1)));
#line 244 "structure_reuse.lfu.m"
    {
#line 244 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_expr_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__Expr0_14, &transform_hlds__ctgc__structure_reuse__lfu__Expr_16);
    }
#line 245 "structure_reuse.lfu.m"
    {
#line 245 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__LFU0_17 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_15);
    }
#line 246 "structure_reuse.lfu.m"
    {
#line 246 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__LFU_18 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lfu__ForceInUse_4, transform_hlds__ctgc__structure_reuse__lfu__LFU0_17);
    }
#line 247 "structure_reuse.lfu.m"
    {
#line 247 "structure_reuse.lfu.m"
      hlds__hlds_goal__goal_info_set_lfu_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__LFU_18, transform_hlds__ctgc__structure_reuse__lfu__GoalInfo0_15, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_19);
    }
#line 248 "structure_reuse.lfu.m"
    {
#line 248 "structure_reuse.lfu.m"
      hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lfu__GoalInfo1_19, &transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_20);
    }
#line 249 "structure_reuse.lfu.m"
    {
#line 249 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__Goal_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_7, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__Expr_16));
#line 249 "structure_reuse.lfu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lfu__Goal_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__GoalInfo_20));
#line 249 "structure_reuse.lfu.m"
    }
#line 237 "structure_reuse.lfu.m"
    {
#line 237 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__Goal_7, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_8, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_9);
    }
#line 234 "structure_reuse.lfu.m"
  }
#line 38 "structure_reuse.lfu.m"
}

#line 32 "structure_reuse.lfu.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_p_0(
#line 32 "structure_reuse.lfu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_11,
#line 32 "structure_reuse.lfu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_12)
#line 32 "structure_reuse.lfu.m"
{
#line 59 "structure_reuse.lfu.m"
  {
#line 59 "structure_reuse.lfu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lfu__succeeded;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__VarTypes_4;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal0_5;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__InstantiatedVars0_6;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__DeadVars0_7;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__Goal_8;
#line 59 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu__V_13_13;
#line 69 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu___InstantiatedVars_9;
#line 69 "structure_reuse.lfu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lfu___DeadVars_10;

#line 60 "structure_reuse.lfu.m"
    {
#line 60 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_11, &transform_hlds__ctgc__structure_reuse__lfu__VarTypes_4);
    }
#line 61 "structure_reuse.lfu.m"
    {
#line 61 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_11, &transform_hlds__ctgc__structure_reuse__lfu__Goal0_5);
    }
#line 64 "structure_reuse.lfu.m"
    {
#line 64 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_get_liveness_info_2_p_0(transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_11, &transform_hlds__ctgc__structure_reuse__lfu__InstantiatedVars0_6);
    }
#line 67 "structure_reuse.lfu.m"
    {
#line 67 "structure_reuse.lfu.m"
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__ctgc__structure_reuse__lfu__DeadVars0_7);
    }
#line 70 "structure_reuse.lfu.m"
    {
#line 70 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__V_13_13 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_4, transform_hlds__ctgc__structure_reuse__lfu__InstantiatedVars0_6);
    }
#line 69 "structure_reuse.lfu.m"
    {
#line 69 "structure_reuse.lfu.m"
      transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__lfu__VarTypes_4, transform_hlds__ctgc__structure_reuse__lfu__Goal0_5, &transform_hlds__ctgc__structure_reuse__lfu__Goal_8, transform_hlds__ctgc__structure_reuse__lfu__V_13_13, &transform_hlds__ctgc__structure_reuse__lfu___InstantiatedVars_9, transform_hlds__ctgc__structure_reuse__lfu__DeadVars0_7, &transform_hlds__ctgc__structure_reuse__lfu___DeadVars_10);
    }
#line 73 "structure_reuse.lfu.m"
    {
#line 73 "structure_reuse.lfu.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lfu__Goal_8, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_0_11, transform_hlds__ctgc__structure_reuse__lfu__STATE_VARIABLE_ProcInfo_12);
    }
#line 59 "structure_reuse.lfu.m"
  }
#line 32 "structure_reuse.lfu.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lfu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.lfu. */
