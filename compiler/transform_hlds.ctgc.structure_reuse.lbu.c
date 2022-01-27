/*
** Automatically generated from `structure_reuse.lbu.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module transform_hlds.ctgc.structure_reuse.lbu. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__lbu__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.lbu.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "transform_hlds.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"




#line 139 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 145 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0_7,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_0_12,
#line 226 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_13,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_14,
#line 226 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_15);

#line 224 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 224 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 224 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4);

#line 217 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_10,
#line 217 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_11,
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12,
#line 217 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13);

#line 208 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0_7,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_0_16,
#line 208 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_17,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_18,
#line 208 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_19);

#line 206 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 206 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 206 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4);

#line 200 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_0_10,
#line 200 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_11,
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12,
#line 200 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13);

#line 198 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 198 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 198 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4);

#line 194 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_9,
#line 194 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_10,
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_11,
#line 194 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_12);

#line 187 "structure_reuse.lbu.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
#line 187 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1);

#line 78 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__Info0_8,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67,
#line 78 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69,
#line 78 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);

#line 64 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_0_13,
#line 64 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_14,
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_15,
#line 64 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_16);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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



#line 376 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 384 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 393 "transform_hlds.ctgc.structure_reuse.lbu.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 34 "structure_reuse.lbu.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
#line 34 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11,
#line 34 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_12)
#line 34 "structure_reuse.lbu.m"
{
#line 54 "structure_reuse.lbu.m"
  {
#line 54 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 54 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goal0_6;
#line 54 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7;
#line 54 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0_8;
#line 54 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goal_9;
#line 60 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu___LBU_10;

#line 55 "structure_reuse.lbu.m"
    {
#line 55 "structure_reuse.lbu.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11, &transform_hlds__ctgc__structure_reuse__lbu__Goal0_6);
    }
#line 56 "structure_reuse.lbu.m"
    {
#line 56 "structure_reuse.lbu.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11, &transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7);
    }
#line 59 "structure_reuse.lbu.m"
    {
#line 59 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__LBU0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 60 "structure_reuse.lbu.m"
    {
#line 60 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Goal0_6, &transform_hlds__ctgc__structure_reuse__lbu__Goal_9, transform_hlds__ctgc__structure_reuse__lbu__LBU0_8, &transform_hlds__ctgc__structure_reuse__lbu___LBU_10);
    }
#line 62 "structure_reuse.lbu.m"
    {
#line 62 "structure_reuse.lbu.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__ctgc__structure_reuse__lbu__Goal_9, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_12);
#line 62 "structure_reuse.lbu.m"
      return;
    }
#line 54 "structure_reuse.lbu.m"
  }
#line 34 "structure_reuse.lbu.m"
}

#line 226 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0_7,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_0_12,
#line 226 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_13,
#line 226 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_14,
#line 226 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_15)
#line 226 "structure_reuse.lbu.m"
{
#line 230 "structure_reuse.lbu.m"
  {
#line 230 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 230 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__NewLBU_11;

#line 231 "structure_reuse.lbu.m"
    {
#line 231 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_0_12, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goal_13, transform_hlds__ctgc__structure_reuse__lbu__LBU0_7, &transform_hlds__ctgc__structure_reuse__lbu__NewLBU_11);
    }
#line 232 "structure_reuse.lbu.m"
    {
#line 232 "structure_reuse.lbu.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lbu__NewLBU_11, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_14, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_15);
#line 232 "structure_reuse.lbu.m"
      return;
    }
#line 230 "structure_reuse.lbu.m"
  }
#line 226 "structure_reuse.lbu.m"
}

#line 224 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 224 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 224 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 224 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4)
#line 224 "structure_reuse.lbu.m"
{
#line 224 "structure_reuse.lbu.m"
  {
#line 224 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure = transform_hlds__ctgc__structure_reuse__lbu__closure_arg;
#line 224 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Goal_13;
#line 224 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_15;

#line 224 "structure_reuse.lbu.m"
    {
#line 224 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Goal_13, ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_15);
    }
#line 224 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Goal_13));
#line 224 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_15));
#line 224 "structure_reuse.lbu.m"
  }
#line 224 "structure_reuse.lbu.m"
}

#line 217 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_10,
#line 217 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_11,
#line 217 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12,
#line 217 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13)
#line 217 "structure_reuse.lbu.m"
{
#line 221 "structure_reuse.lbu.m"
  {
#line 221 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 221 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21;
#line 221 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_14_14;
#line 224 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13;

#line 224 "structure_reuse.lbu.m"
    {
#line 224 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 224 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[1]));
#line 224 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1));
#line 224 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 224 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12));
#line 224 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6));
#line 224 "structure_reuse.lbu.m"
    }
#line 578 "transform_hlds.ctgc.structure_reuse.lbu.c"
    transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 224 "structure_reuse.lbu.m"
    {
#line 224 "structure_reuse.lbu.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21, transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__lbu__V_14_14, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_10, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12)), &transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13);
    }
#line 224 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13);
#line 221 "structure_reuse.lbu.m"
  }
#line 217 "structure_reuse.lbu.m"
}

#line 208 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0_7,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_0_16,
#line 208 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_17,
#line 208 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_18,
#line 208 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_19)
#line 208 "structure_reuse.lbu.m"
{
#line 211 "structure_reuse.lbu.m"
  {
#line 211 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 211 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_0_16, (MR_Integer) 0)));
#line 211 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_0_16, (MR_Integer) 1)));
#line 211 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_0_16, (MR_Integer) 2)));
#line 211 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goal_14;
#line 211 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__NewLBU_15;

#line 213 "structure_reuse.lbu.m"
    {
#line 213 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_8, transform_hlds__ctgc__structure_reuse__lbu__Goal0_13, &transform_hlds__ctgc__structure_reuse__lbu__Goal_14, transform_hlds__ctgc__structure_reuse__lbu__LBU0_7, &transform_hlds__ctgc__structure_reuse__lbu__NewLBU_15);
    }
#line 214 "structure_reuse.lbu.m"
    {
#line 214 "structure_reuse.lbu.m"
      MR_Word base;
#line 214 "structure_reuse.lbu.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "structure_reuse.lbu.m"
      *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Case_17 = base;
#line 214 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__MainConsId_11));
#line 214 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__OtherConsIds_12));
#line 214 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Goal_14));
#line 214 "structure_reuse.lbu.m"
    }
#line 215 "structure_reuse.lbu.m"
    {
#line 215 "structure_reuse.lbu.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lbu__NewLBU_15, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_18, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_19);
#line 215 "structure_reuse.lbu.m"
      return;
    }
#line 211 "structure_reuse.lbu.m"
  }
#line 208 "structure_reuse.lbu.m"
}

#line 206 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 206 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 206 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 206 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4)
#line 206 "structure_reuse.lbu.m"
{
#line 206 "structure_reuse.lbu.m"
  {
#line 206 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure = transform_hlds__ctgc__structure_reuse__lbu__closure_arg;
#line 206 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Case_17;
#line 206 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_19;

#line 206 "structure_reuse.lbu.m"
    {
#line 206 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Case_17, ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_19);
    }
#line 206 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_Case_17));
#line 206 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_19));
#line 206 "structure_reuse.lbu.m"
  }
#line 206 "structure_reuse.lbu.m"
}

#line 200 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_0_10,
#line 200 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_11,
#line 200 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12,
#line 200 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13)
#line 200 "structure_reuse.lbu.m"
{
#line 203 "structure_reuse.lbu.m"
  {
#line 203 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 203 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21;
#line 203 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_14_14;
#line 206 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13;

#line 206 "structure_reuse.lbu.m"
    {
#line 206 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 206 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[0]));
#line 206 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1));
#line 206 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 206 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12));
#line 206 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_14_14, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6));
#line 206 "structure_reuse.lbu.m"
    }
#line 737 "transform_hlds.ctgc.structure_reuse.lbu.c"
    transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 206 "structure_reuse.lbu.m"
    {
#line 206 "structure_reuse.lbu.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21, transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__lbu__V_14_14, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_0_10, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Cases_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_12)), &transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13);
    }
#line 206 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_13 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_13);
#line 203 "structure_reuse.lbu.m"
  }
#line 200 "structure_reuse.lbu.m"
}

#line 198 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure_arg,
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1,
#line 198 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2,
#line 198 "structure_reuse.lbu.m"
  MR_Box transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3,
#line 198 "structure_reuse.lbu.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4)
#line 198 "structure_reuse.lbu.m"
{
#line 198 "structure_reuse.lbu.m"
  {
#line 198 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__closure = transform_hlds__ctgc__structure_reuse__lbu__closure_arg;
#line 198 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_TopGoal_14;
#line 198 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_16;

#line 198 "structure_reuse.lbu.m"
    {
#line 198 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_TopGoal_14, ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_3), &transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_16);
    }
#line 198 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv1_STATE_VARIABLE_TopGoal_14));
#line 198 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__conv0_STATE_VARIABLE_LBU_16));
#line 198 "structure_reuse.lbu.m"
  }
#line 198 "structure_reuse.lbu.m"
}

#line 194 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_9,
#line 194 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_10,
#line 194 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_11,
#line 194 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_12)
#line 194 "structure_reuse.lbu.m"
{
#line 197 "structure_reuse.lbu.m"
  {
#line 197 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 197 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_20_20;
#line 197 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_13_13;
#line 198 "structure_reuse.lbu.m"
    MR_Box transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_12;

#line 198 "structure_reuse.lbu.m"
    {
#line 198 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[0]));
#line 198 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1));
#line 198 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 198 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6));
#line 198 "structure_reuse.lbu.m"
    }
#line 829 "transform_hlds.ctgc.structure_reuse.lbu.c"
    transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 198 "structure_reuse.lbu.m"
    {
#line 198 "structure_reuse.lbu.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_20_20, transform_hlds__ctgc__structure_reuse__lbu__TypeCtorInfo_20_20, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__lbu__V_13_13, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_0_9, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Goals_10, ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_11)), &transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_12);
    }
#line 198 "structure_reuse.lbu.m"
    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_12 = ((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__conv2_STATE_VARIABLE_LBU_12);
#line 197 "structure_reuse.lbu.m"
  }
#line 194 "structure_reuse.lbu.m"
}

#line 187 "structure_reuse.lbu.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
#line 187 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1)
#line 187 "structure_reuse.lbu.m"
{
#line 189 "structure_reuse.lbu.m"
  {
#line 189 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;

#line 189 "structure_reuse.lbu.m"
    if ((transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1 == (MR_Integer) 4))
#line 192 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__succeeded = MR_TRUE;
#line 189 "structure_reuse.lbu.m"
    else
#line 189 "structure_reuse.lbu.m"
      if ((transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1 == (MR_Integer) 5))
#line 191 "structure_reuse.lbu.m"
        transform_hlds__ctgc__structure_reuse__lbu__succeeded = MR_TRUE;
#line 189 "structure_reuse.lbu.m"
      else
#line 189 "structure_reuse.lbu.m"
        if ((transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1 == (MR_Integer) 2))
#line 190 "structure_reuse.lbu.m"
          transform_hlds__ctgc__structure_reuse__lbu__succeeded = MR_TRUE;
#line 189 "structure_reuse.lbu.m"
        else
#line 189 "structure_reuse.lbu.m"
          if ((transform_hlds__ctgc__structure_reuse__lbu__HeadVar__1_1 == (MR_Integer) 3))
#line 189 "structure_reuse.lbu.m"
            transform_hlds__ctgc__structure_reuse__lbu__succeeded = MR_TRUE;
#line 189 "structure_reuse.lbu.m"
          else
#line 189 "structure_reuse.lbu.m"
            transform_hlds__ctgc__structure_reuse__lbu__succeeded = MR_FALSE;
#line 189 "structure_reuse.lbu.m"
    return transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 189 "structure_reuse.lbu.m"
  }
#line 187 "structure_reuse.lbu.m"
}

#line 78 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__Info0_8,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67,
#line 78 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68,
#line 78 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69,
#line 78 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70)
#line 78 "structure_reuse.lbu.m"
{
#line 85 "structure_reuse.lbu.m"
  {
#line 85 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;

#line 85 "structure_reuse.lbu.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 0))))
#line 123 "structure_reuse.lbu.m"
      {
#line 123 "structure_reuse.lbu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lbu__SubGoal0_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67), (MR_Integer) 0);
#line 123 "structure_reuse.lbu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lbu__SubGoal_46;
#line 126 "structure_reuse.lbu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_47_47;

#line 126 "structure_reuse.lbu.m"
        {
#line 126 "structure_reuse.lbu.m"
          transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__SubGoal0_44, &transform_hlds__ctgc__structure_reuse__lbu__SubGoal_46, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, &transform_hlds__ctgc__structure_reuse__lbu__V_47_47);
        }
#line 130 "structure_reuse.lbu.m"
        *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 131 "structure_reuse.lbu.m"
        *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__ctgc__structure_reuse__lbu__SubGoal_46);
#line 123 "structure_reuse.lbu.m"
      }
#line 85 "structure_reuse.lbu.m"
    else
#line 85 "structure_reuse.lbu.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 2))))
#line 87 "structure_reuse.lbu.m"
        {
#line 87 "structure_reuse.lbu.m"
          MR_Word transform_hlds__ctgc__structure_reuse__lbu__Det_22;

#line 88 "structure_reuse.lbu.m"
          {
#line 88 "structure_reuse.lbu.m"
            transform_hlds__ctgc__structure_reuse__lbu__Det_22 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__ctgc__structure_reuse__lbu__Info0_8);
          }
#line 89 "structure_reuse.lbu.m"
          {
#line 89 "structure_reuse.lbu.m"
            transform_hlds__ctgc__structure_reuse__lbu__succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(transform_hlds__ctgc__structure_reuse__lbu__Det_22);
          }
#line 101 "structure_reuse.lbu.m"
          if (transform_hlds__ctgc__structure_reuse__lbu__succeeded)
#line 95 "structure_reuse.lbu.m"
            {
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__PreBirths_23;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__PostBirths_24;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_89_89;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_90_90;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_91_91;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_92_92;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_93_93;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_94_94;
#line 95 "structure_reuse.lbu.m"
              MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_95_95;

#line 95 "structure_reuse.lbu.m"
              {
#line 95 "structure_reuse.lbu.m"
                hlds__hlds_llds__goal_info_get_pre_births_2_p_0(transform_hlds__ctgc__structure_reuse__lbu__Info0_8, &transform_hlds__ctgc__structure_reuse__lbu__PreBirths_23);
              }
#line 96 "structure_reuse.lbu.m"
              {
#line 96 "structure_reuse.lbu.m"
                hlds__hlds_llds__goal_info_get_post_births_2_p_0(transform_hlds__ctgc__structure_reuse__lbu__Info0_8, &transform_hlds__ctgc__structure_reuse__lbu__PostBirths_24);
              }
#line 97 "structure_reuse.lbu.m"
              {
#line 97 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_90_90 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__structure_reuse__lbu__Info0_8);
              }
#line 98 "structure_reuse.lbu.m"
              {
#line 98 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_92_92 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__PreBirths_23);
              }
#line 99 "structure_reuse.lbu.m"
              {
#line 99 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_94_94 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__PostBirths_24);
              }
#line 100 "structure_reuse.lbu.m"
              {
#line 100 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_95_95, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69));
#line 100 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 100 "structure_reuse.lbu.m"
              }
#line 99 "structure_reuse.lbu.m"
              {
#line 99 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 99 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_93_93, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_94_94));
#line 99 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_93_93, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_95_95));
#line 99 "structure_reuse.lbu.m"
              }
#line 98 "structure_reuse.lbu.m"
              {
#line 98 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_91_91, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_92_92));
#line 98 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_91_91, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_93_93));
#line 98 "structure_reuse.lbu.m"
              }
#line 97 "structure_reuse.lbu.m"
              {
#line 97 "structure_reuse.lbu.m"
                transform_hlds__ctgc__structure_reuse__lbu__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_89_89, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_90_90));
#line 97 "structure_reuse.lbu.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__V_89_89, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__V_91_91));
#line 97 "structure_reuse.lbu.m"
              }
#line 97 "structure_reuse.lbu.m"
              {
#line 97 "structure_reuse.lbu.m"
                *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lbu__V_89_89);
              }
#line 95 "structure_reuse.lbu.m"
            }
#line 101 "structure_reuse.lbu.m"
          else
#line 100 "structure_reuse.lbu.m"
            *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 100 "structure_reuse.lbu.m"
          *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67;
#line 87 "structure_reuse.lbu.m"
        }
#line 85 "structure_reuse.lbu.m"
      else
#line 85 "structure_reuse.lbu.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 1))))
#line 85 "structure_reuse.lbu.m"
          {
#line 85 "structure_reuse.lbu.m"
            *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67;
#line 85 "structure_reuse.lbu.m"
            *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 85 "structure_reuse.lbu.m"
          }
#line 85 "structure_reuse.lbu.m"
        else
#line 85 "structure_reuse.lbu.m"
          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 109 "structure_reuse.lbu.m"
            {
#line 109 "structure_reuse.lbu.m"
              *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67;
#line 109 "structure_reuse.lbu.m"
              *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 109 "structure_reuse.lbu.m"
            }
#line 85 "structure_reuse.lbu.m"
          else
#line 85 "structure_reuse.lbu.m"
            if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 111 "structure_reuse.lbu.m"
              {
#line 111 "structure_reuse.lbu.m"
                MR_Word transform_hlds__ctgc__structure_reuse__lbu__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
#line 111 "structure_reuse.lbu.m"
                MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goals0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
#line 111 "structure_reuse.lbu.m"
                MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goals_39;

#line 112 "structure_reuse.lbu.m"
                {
#line 112 "structure_reuse.lbu.m"
                  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Goals0_38, &transform_hlds__ctgc__structure_reuse__lbu__Goals_39, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);
                }
#line 113 "structure_reuse.lbu.m"
                {
#line 113 "structure_reuse.lbu.m"
                  MR_Word base;
#line 113 "structure_reuse.lbu.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 113 "structure_reuse.lbu.m"
                  *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = base;
#line 113 "structure_reuse.lbu.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 113 "structure_reuse.lbu.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__ConjType_37));
#line 113 "structure_reuse.lbu.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Goals_39));
#line 113 "structure_reuse.lbu.m"
                }
#line 111 "structure_reuse.lbu.m"
              }
#line 85 "structure_reuse.lbu.m"
            else
#line 85 "structure_reuse.lbu.m"
              if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 115 "structure_reuse.lbu.m"
                {
#line 115 "structure_reuse.lbu.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goals0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
#line 115 "structure_reuse.lbu.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__lbu__Goals_98;

#line 116 "structure_reuse.lbu.m"
                  {
#line 116 "structure_reuse.lbu.m"
                    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Goals0_97, &transform_hlds__ctgc__structure_reuse__lbu__Goals_98, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);
                  }
#line 117 "structure_reuse.lbu.m"
                  {
#line 117 "structure_reuse.lbu.m"
                    MR_Word base;
#line 117 "structure_reuse.lbu.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "structure_reuse.lbu.m"
                    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = base;
#line 117 "structure_reuse.lbu.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 117 "structure_reuse.lbu.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Goals_98));
#line 117 "structure_reuse.lbu.m"
                  }
#line 115 "structure_reuse.lbu.m"
                }
#line 85 "structure_reuse.lbu.m"
              else
#line 85 "structure_reuse.lbu.m"
                if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 105 "structure_reuse.lbu.m"
                  {
#line 105 "structure_reuse.lbu.m"
                    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67;
#line 105 "structure_reuse.lbu.m"
                    *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 105 "structure_reuse.lbu.m"
                  }
#line 85 "structure_reuse.lbu.m"
                else
#line 85 "structure_reuse.lbu.m"
                  if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 148 "structure_reuse.lbu.m"
                    {
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Cond0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Then0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 3)));
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Else0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 4)));
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Cond_54;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__CondGoal0_56;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__CondInfo0_57;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__InfoTmp_58;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__CondTmp_59;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBU0T_61;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Then_62;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBUT_63;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__Else_64;
#line 148 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__LBUE_65;
#line 152 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_55_55;
#line 162 "structure_reuse.lbu.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_60_60;

#line 152 "structure_reuse.lbu.m"
                      {
#line 152 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Cond0_51, &transform_hlds__ctgc__structure_reuse__lbu__Cond_54, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, &transform_hlds__ctgc__structure_reuse__lbu__V_55_55);
                      }
#line 159 "structure_reuse.lbu.m"
                      transform_hlds__ctgc__structure_reuse__lbu__CondGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__Cond0_51, (MR_Integer) 0)));
#line 159 "structure_reuse.lbu.m"
                      transform_hlds__ctgc__structure_reuse__lbu__CondInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__Cond0_51, (MR_Integer) 1)));
#line 160 "structure_reuse.lbu.m"
                      {
#line 160 "structure_reuse.lbu.m"
                        hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__lbu__CondInfo0_57, &transform_hlds__ctgc__structure_reuse__lbu__InfoTmp_58);
                      }
#line 161 "structure_reuse.lbu.m"
                      {
#line 161 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__CondTmp_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__CondTmp_59, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__CondGoal0_56));
#line 161 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__CondTmp_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__InfoTmp_58));
#line 161 "structure_reuse.lbu.m"
                      }
#line 162 "structure_reuse.lbu.m"
                      {
#line 162 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__CondTmp_59, &transform_hlds__ctgc__structure_reuse__lbu__V_60_60, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, &transform_hlds__ctgc__structure_reuse__lbu__LBU0T_61);
                      }
#line 163 "structure_reuse.lbu.m"
                      {
#line 163 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Then0_52, &transform_hlds__ctgc__structure_reuse__lbu__Then_62, transform_hlds__ctgc__structure_reuse__lbu__LBU0T_61, &transform_hlds__ctgc__structure_reuse__lbu__LBUT_63);
                      }
#line 166 "structure_reuse.lbu.m"
                      {
#line 166 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Else0_53, &transform_hlds__ctgc__structure_reuse__lbu__Else_64, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, &transform_hlds__ctgc__structure_reuse__lbu__LBUE_65);
                      }
#line 167 "structure_reuse.lbu.m"
                      {
#line 167 "structure_reuse.lbu.m"
                        parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lbu__LBUT_63, transform_hlds__ctgc__structure_reuse__lbu__LBUE_65, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);
                      }
#line 168 "structure_reuse.lbu.m"
                      {
#line 168 "structure_reuse.lbu.m"
                        MR_Word base;
#line 168 "structure_reuse.lbu.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 168 "structure_reuse.lbu.m"
                        *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = base;
#line 168 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 168 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Vars_50));
#line 168 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Cond_54));
#line 168 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Then_62));
#line 168 "structure_reuse.lbu.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Else_64));
#line 168 "structure_reuse.lbu.m"
                      }
#line 148 "structure_reuse.lbu.m"
                    }
#line 85 "structure_reuse.lbu.m"
                  else
#line 85 "structure_reuse.lbu.m"
                    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 133 "structure_reuse.lbu.m"
                      {
#line 133 "structure_reuse.lbu.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__lbu__Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
#line 133 "structure_reuse.lbu.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__lbu__SubGoal0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
#line 133 "structure_reuse.lbu.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__lbu__SubGoal_100;
#line 134 "structure_reuse.lbu.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_77_77;
#line 134 "structure_reuse.lbu.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_49_49;

#line 134 "structure_reuse.lbu.m"
                        transform_hlds__ctgc__structure_reuse__lbu__succeeded = ((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__Reason_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 134 "structure_reuse.lbu.m"
                        if (transform_hlds__ctgc__structure_reuse__lbu__succeeded)
#line 134 "structure_reuse.lbu.m"
                          {
#line 134 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__Reason_48, (MR_Integer) 1)));
#line 134 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__Reason_48, (MR_Integer) 2)));
#line 134 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__succeeded = (transform_hlds__ctgc__structure_reuse__lbu__V_77_77 == (MR_Integer) 1);
#line 134 "structure_reuse.lbu.m"
                          }
#line 136 "structure_reuse.lbu.m"
                        if (transform_hlds__ctgc__structure_reuse__lbu__succeeded)
#line 135 "structure_reuse.lbu.m"
                          {
#line 135 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__SubGoal_100 = transform_hlds__ctgc__structure_reuse__lbu__SubGoal0_99;
#line 135 "structure_reuse.lbu.m"
                            *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70 = transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69;
#line 135 "structure_reuse.lbu.m"
                          }
#line 136 "structure_reuse.lbu.m"
                        else
#line 139 "structure_reuse.lbu.m"
                          {
#line 139 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__SubGoal0_99, &transform_hlds__ctgc__structure_reuse__lbu__SubGoal_100, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);
                          }
#line 141 "structure_reuse.lbu.m"
                        {
#line 141 "structure_reuse.lbu.m"
                          MR_Word base;
#line 141 "structure_reuse.lbu.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 141 "structure_reuse.lbu.m"
                          *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = base;
#line 141 "structure_reuse.lbu.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 141 "structure_reuse.lbu.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Reason_48));
#line 141 "structure_reuse.lbu.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__SubGoal_100));
#line 141 "structure_reuse.lbu.m"
                        }
#line 133 "structure_reuse.lbu.m"
                      }
#line 85 "structure_reuse.lbu.m"
                    else
#line 85 "structure_reuse.lbu.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 170 "structure_reuse.lbu.m"
                        {
#line 172 "structure_reuse.lbu.m"
                          {
#line 172 "structure_reuse.lbu.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lbu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lbu.backward_use_in_goal_2\'/6", (MR_String) "shorthand");
#line 172 "structure_reuse.lbu.m"
                            return;
                          }
#line 170 "structure_reuse.lbu.m"
                        }
#line 85 "structure_reuse.lbu.m"
                      else
#line 119 "structure_reuse.lbu.m"
                        {
#line 119 "structure_reuse.lbu.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__lbu__A_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
#line 119 "structure_reuse.lbu.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__lbu__B_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
#line 119 "structure_reuse.lbu.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__lbu__Cases0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_0_67, (MR_Integer) 3)));
#line 119 "structure_reuse.lbu.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__lbu__Cases_43;

#line 120 "structure_reuse.lbu.m"
                          {
#line 120 "structure_reuse.lbu.m"
                            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_7, transform_hlds__ctgc__structure_reuse__lbu__Cases0_42, &transform_hlds__ctgc__structure_reuse__lbu__Cases_43, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_69, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_70);
                          }
#line 121 "structure_reuse.lbu.m"
                          {
#line 121 "structure_reuse.lbu.m"
                            MR_Word base;
#line 121 "structure_reuse.lbu.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 121 "structure_reuse.lbu.m"
                            *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_Expr_68 = base;
#line 121 "structure_reuse.lbu.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 121 "structure_reuse.lbu.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__A_40));
#line 121 "structure_reuse.lbu.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__B_41));
#line 121 "structure_reuse.lbu.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Cases_43));
#line 121 "structure_reuse.lbu.m"
                          }
#line 119 "structure_reuse.lbu.m"
                        }
#line 85 "structure_reuse.lbu.m"
  }
#line 78 "structure_reuse.lbu.m"
}

#line 64 "structure_reuse.lbu.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6,
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_0_13,
#line 64 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_14,
#line 64 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_15,
#line 64 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_16)
#line 64 "structure_reuse.lbu.m"
{
#line 67 "structure_reuse.lbu.m"
  {
#line 67 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 0)));
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Info0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 1)));
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Expr_11;
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__Info_12;
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_17_17;
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_18_18;
#line 67 "structure_reuse.lbu.m"
    MR_Word transform_hlds__ctgc__structure_reuse__lbu__ResPoint_25;

#line 178 "structure_reuse.lbu.m"
    {
#line 178 "structure_reuse.lbu.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(transform_hlds__ctgc__structure_reuse__lbu__Info0_10, &transform_hlds__ctgc__structure_reuse__lbu__ResPoint_25);
    }
#line 182 "structure_reuse.lbu.m"
    if ((transform_hlds__ctgc__structure_reuse__lbu__ResPoint_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "structure_reuse.lbu.m"
      {
#line 184 "structure_reuse.lbu.m"
        {
#line 184 "structure_reuse.lbu.m"
          transform_hlds__ctgc__structure_reuse__lbu__V_17_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 183 "structure_reuse.lbu.m"
      }
#line 182 "structure_reuse.lbu.m"
    else
#line 180 "structure_reuse.lbu.m"
      {
#line 180 "structure_reuse.lbu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lbu__ResVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__ResPoint_25, (MR_Integer) 0)));
#line 180 "structure_reuse.lbu.m"
        MR_Word transform_hlds__ctgc__structure_reuse__lbu__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__lbu__ResPoint_25, (MR_Integer) 1)));

#line 181 "structure_reuse.lbu.m"
        {
#line 181 "structure_reuse.lbu.m"
          transform_hlds__ctgc__structure_reuse__lbu__V_17_17 = parse_tree__prog_type__remove_typeinfo_vars_from_set_of_var_2_f_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6, transform_hlds__ctgc__structure_reuse__lbu__ResVars_26);
        }
#line 180 "structure_reuse.lbu.m"
      }
#line 71 "structure_reuse.lbu.m"
    {
#line 71 "structure_reuse.lbu.m"
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__lbu__V_17_17, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_0_15, &transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_18_18);
    }
#line 73 "structure_reuse.lbu.m"
    {
#line 73 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(transform_hlds__ctgc__structure_reuse__lbu__VarTypes_6, transform_hlds__ctgc__structure_reuse__lbu__Info0_10, transform_hlds__ctgc__structure_reuse__lbu__Expr0_9, &transform_hlds__ctgc__structure_reuse__lbu__Expr_11, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_18_18, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_16);
    }
#line 75 "structure_reuse.lbu.m"
    {
#line 75 "structure_reuse.lbu.m"
      hlds__hlds_goal__goal_info_set_lbu_3_p_0(*transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_LBU_16, transform_hlds__ctgc__structure_reuse__lbu__Info0_10, &transform_hlds__ctgc__structure_reuse__lbu__Info_12);
    }
#line 76 "structure_reuse.lbu.m"
    {
#line 76 "structure_reuse.lbu.m"
      MR_Word base;
#line 76 "structure_reuse.lbu.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 76 "structure_reuse.lbu.m"
      *transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_TopGoal_14 = base;
#line 76 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Expr_11));
#line 76 "structure_reuse.lbu.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__Info_12));
#line 76 "structure_reuse.lbu.m"
    }
#line 67 "structure_reuse.lbu.m"
  }
#line 64 "structure_reuse.lbu.m"
}

#line 34 "structure_reuse.lbu.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_p_0(
#line 34 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu___ModuleInfo_4,
#line 34 "structure_reuse.lbu.m"
  MR_Word transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11,
#line 34 "structure_reuse.lbu.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_12)
#line 34 "structure_reuse.lbu.m"
{
#line 54 "structure_reuse.lbu.m"
  {
#line 54 "structure_reuse.lbu.m"
    MR_bool transform_hlds__ctgc__structure_reuse__lbu__succeeded;

#line 54 "structure_reuse.lbu.m"
    {
#line 54 "structure_reuse.lbu.m"
      transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_0_11, transform_hlds__ctgc__structure_reuse__lbu__STATE_VARIABLE_ProcInfo_12);
#line 54 "structure_reuse.lbu.m"
      return;
    }
#line 54 "structure_reuse.lbu.m"
  }
#line 34 "structure_reuse.lbu.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.lbu. */
