/*
** Automatically generated from `structure_reuse.lfu.m'
** by the Mercury compiler,
** version rotd-2022-06-16
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


// :- module transform_hlds.ctgc.structure_reuse.lfu.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__lfu__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.lfu.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(
  MR_Word VarTable_10,
  MR_Word Inst0_11,
  MR_Word Dead0_12,
  MR_Word STATE_VARIABLE_Goal_0_18,
  MR_Word * STATE_VARIABLE_Goal_19,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_20,
  MR_Word * STATE_VARIABLE_InstantiatedVars_21,
  MR_Word STATE_VARIABLE_DeadVars_0_22,
  MR_Word * STATE_VARIABLE_DeadVars_23);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(
  MR_Word VarTable_10,
  MR_Word Inst0_11,
  MR_Word Dead0_12,
  MR_Word STATE_VARIABLE_Case_0_22,
  MR_Word * STATE_VARIABLE_Case_23,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_24,
  MR_Word * STATE_VARIABLE_InstantiatedVars_25,
  MR_Word STATE_VARIABLE_DeadVars_0_26,
  MR_Word * STATE_VARIABLE_DeadVars_27);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(
  MR_Word ForceInUse_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(
  MR_Word ForceInUse_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(
  MR_Word ForceInUse_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_21,
  MR_Word * STATE_VARIABLE_InstantiatedVars_22,
  MR_Word STATE_VARIABLE_DeadVars_0_23,
  MR_Word * STATE_VARIABLE_DeadVars_24);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_65,
  MR_Word * STATE_VARIABLE_Goal_66,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_67,
  MR_Word * STATE_VARIABLE_InstantiatedVars_68,
  MR_Word STATE_VARIABLE_DeadVars_0_69,
  MR_Word * STATE_VARIABLE_DeadVars_70);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goals_0_14,
  MR_Word * STATE_VARIABLE_Goals_15,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_16,
  MR_Word * STATE_VARIABLE_InstantiatedVars_17,
  MR_Word STATE_VARIABLE_DeadVars_0_18,
  MR_Word * STATE_VARIABLE_DeadVars_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Cases_0_14,
  MR_Word * STATE_VARIABLE_Cases_15,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_16,
  MR_Word * STATE_VARIABLE_InstantiatedVars_17,
  MR_Word STATE_VARIABLE_DeadVars_0_18,
  MR_Word * STATE_VARIABLE_DeadVars_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_14,
  MR_Word * STATE_VARIABLE_InstantiatedVars_15,
  MR_Word STATE_VARIABLE_DeadVars_0_16,
  MR_Word * STATE_VARIABLE_DeadVars_17);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[2][12];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
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



#include "array.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(
  MR_Word VarTable_10,
  MR_Word Inst0_11,
  MR_Word Dead0_12,
  MR_Word STATE_VARIABLE_Goal_0_18,
  MR_Word * STATE_VARIABLE_Goal_19,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_20,
  MR_Word * STATE_VARIABLE_InstantiatedVars_21,
  MR_Word STATE_VARIABLE_DeadVars_0_22,
  MR_Word * STATE_VARIABLE_DeadVars_23)
{
  MR_Word Inst_16;
  MR_Word Dead_17;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_10, STATE_VARIABLE_Goal_0_18, STATE_VARIABLE_Goal_19, Inst0_11, &Inst_16, Dead0_12, &Dead_17);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Inst_16, STATE_VARIABLE_InstantiatedVars_0_20, STATE_VARIABLE_InstantiatedVars_21);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Dead_17, STATE_VARIABLE_DeadVars_0_22, STATE_VARIABLE_DeadVars_23);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(
  MR_Word VarTable_10,
  MR_Word Inst0_11,
  MR_Word Dead0_12,
  MR_Word STATE_VARIABLE_Case_0_22,
  MR_Word * STATE_VARIABLE_Case_23,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_24,
  MR_Word * STATE_VARIABLE_InstantiatedVars_25,
  MR_Word STATE_VARIABLE_DeadVars_0_26,
  MR_Word * STATE_VARIABLE_DeadVars_27)
{
  MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 0))));
  MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 1))));
  MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_22, (MR_Integer) 2))));
  MR_Word Goal_19;
  MR_Word Inst_20;
  MR_Word Dead_21;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_10, Goal0_18, &Goal_19, Inst0_11, &Inst_20, Dead0_12, &Dead_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_23 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_17));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_19));
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Inst_20, STATE_VARIABLE_InstantiatedVars_0_24, STATE_VARIABLE_InstantiatedVars_25);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Dead_21, STATE_VARIABLE_DeadVars_0_26, STATE_VARIABLE_DeadVars_27);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_3_p_0(
  MR_Word ForceInUse_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_8,
  MR_Word * STATE_VARIABLE_ProcInfo_9)
{
  MR_Word Goal0_6;
  MR_Word Goal_7;
  MR_Word Expr0_13;
  MR_Word GoalInfo0_14;
  MR_Word Expr_15;
  MR_Word LFU0_16;
  MR_Word LFU_17;
  MR_Word GoalInfo1_18;
  MR_Word GoalInfo_19;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_8, &Goal0_6);
  Expr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
  GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  switch (MR_tag((MR_Word) Expr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_39 = (MR_Word) ((MR_Word) (Expr0_13));
        MR_Word Goal_40;

        transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_39, &Goal_40);
        Expr_15 = (MR_Word) ((MR_Word) (Goal_40));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Expr_15 = Expr0_13;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Expr_15 = Expr0_13;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
            MR_Word Goals_27;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_26, &Goals_27);
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_25));
              MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Goals_27));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
            MR_Word Goals_86;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_85, &Goals_86);
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Goals_86));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
            MR_Word Det_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 3))));
            MR_Word Cases_31;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_4, Cases0_30, &Cases_31);
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(3), Expr_15, 2) = (MR_Box) ((MR_Unsigned) (Det_29));
              MR_hl_field(MR_mktag(3), Expr_15, 3) = ((MR_Box) (Cases_31));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
            MR_Word Goal0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
            MR_Word Goal_88;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_87, &Goal_88);
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Reason_41));
              MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Goal_88));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
            MR_Word Cond0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
            MR_Word Then0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 3))));
            MR_Word Else0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 4))));
            MR_Word Cond_36;
            MR_Word Then_37;
            MR_Word Else_38;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Cond0_33, &Cond_36);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Then0_34, &Then_37);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Else0_35, &Else_38);
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Vars_32));
              MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Cond_36));
              MR_hl_field(MR_mktag(3), Expr_15, 3) = ((MR_Box) (Then_37));
              MR_hl_field(MR_mktag(3), Expr_15, 4) = ((MR_Box) (Else_38));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
            MR_Word Shorthand_75;

            switch (MR_tag((MR_Word) Shorthand0_65)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_65, (MR_Integer) 0))));
                  MR_Word RightGoal0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_65, (MR_Integer) 1))));
                  MR_Word LeftGoal_78;
                  MR_Word RightGoal_79;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, LeftGoal0_76, &LeftGoal_78);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, RightGoal0_77, &RightGoal_79);
                  {
                    Shorthand_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Shorthand_75, 0) = ((MR_Box) (LeftGoal_78));
                    MR_hl_field(MR_mktag(0), Shorthand_75, 1) = ((MR_Box) (RightGoal_79));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 1))));
                  MR_Word Inner_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 3))));
                  MR_Word MainGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 5))));
                  MR_Word OrElseInners_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 6))));
                  MR_Word MainGoal_73;
                  MR_Word OrElseGoals_74;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, MainGoal0_70, &MainGoal_73);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, OrElseGoals0_71, &OrElseGoals_74);
                  {
                    Shorthand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 0) = (MR_Box) ((MR_Unsigned) (GoalType_66));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 1) = ((MR_Box) (Outer_67));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 2) = ((MR_Box) (Inner_68));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 3) = ((MR_Box) (MaybeOutputVars_69));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 4) = ((MR_Box) (MainGoal_73));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 5) = ((MR_Box) (OrElseGoals_74));
                    MR_hl_field(MR_mktag(1), Shorthand_75, 6) = ((MR_Box) (OrElseInners_72));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", (MR_String) "try_goal");
                  return;
                }
                break;
            }
            {
              Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Shorthand_75));
            }
          }
          break;
      }
      break;
  }
  LFU0_16 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo0_14);
  LFU_17 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_4, LFU0_16);
  hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_17, GoalInfo0_14, &GoalInfo1_18);
  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_18, &GoalInfo_19);
  {
    Goal_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_7, 0) = ((MR_Box) (Expr_15));
    MR_hl_field(MR_mktag(0), Goal_7, 1) = ((MR_Box) (GoalInfo_19));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_7, STATE_VARIABLE_ProcInfo_0_8, STATE_VARIABLE_ProcInfo_9);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(
  MR_Word ForceInUse_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_8;
    MR_Word Cases_9;
    MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_6, (MR_Integer) 0))));
    MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_6, (MR_Integer) 1))));
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_6, (MR_Integer) 2))));
    MR_Word Goal_13;
    MR_Word Expr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1))));
    MR_Word Expr_19;
    MR_Word LFU0_20;
    MR_Word LFU_21;
    MR_Word GoalInfo1_22;
    MR_Word GoalInfo_23;

    switch (MR_tag((MR_Word) Expr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_43 = (MR_Word) ((MR_Word) (Expr0_17));
          MR_Word Goal_44;

          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_43, &Goal_44);
          Expr_19 = (MR_Word) ((MR_Word) (Goal_44));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Expr_19 = Expr0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Expr_19 = Expr0_17;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
              MR_Word Goals_31;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_30, &Goals_31);
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_29));
                MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (Goals_31));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
              MR_Word Goals_90;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_89, &Goals_90);
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Goals_90));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
              MR_Word Det_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 3))));
              MR_Word Cases_35;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_34, &Cases_35);
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Var_32));
                MR_hl_field(MR_mktag(3), Expr_19, 2) = (MR_Box) ((MR_Unsigned) (Det_33));
                MR_hl_field(MR_mktag(3), Expr_19, 3) = ((MR_Box) (Cases_35));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
              MR_Word Goal0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
              MR_Word Goal_92;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_91, &Goal_92);
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Reason_45));
                MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (Goal_92));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
              MR_Word Cond0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
              MR_Word Then0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 3))));
              MR_Word Else0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 4))));
              MR_Word Cond_40;
              MR_Word Then_41;
              MR_Word Else_42;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Cond0_37, &Cond_40);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Then0_38, &Then_41);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Else0_39, &Else_42);
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Vars_36));
                MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (Cond_40));
                MR_hl_field(MR_mktag(3), Expr_19, 3) = ((MR_Box) (Then_41));
                MR_hl_field(MR_mktag(3), Expr_19, 4) = ((MR_Box) (Else_42));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
              MR_Word Shorthand_79;

              switch (MR_tag((MR_Word) Shorthand0_69)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_69, (MR_Integer) 0))));
                    MR_Word RightGoal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_69, (MR_Integer) 1))));
                    MR_Word LeftGoal_82;
                    MR_Word RightGoal_83;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, LeftGoal0_80, &LeftGoal_82);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, RightGoal0_81, &RightGoal_83);
                    {
                      Shorthand_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Shorthand_79, 0) = ((MR_Box) (LeftGoal_82));
                      MR_hl_field(MR_mktag(0), Shorthand_79, 1) = ((MR_Box) (RightGoal_83));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 1))));
                    MR_Word Inner_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 3))));
                    MR_Word MainGoal0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 5))));
                    MR_Word OrElseInners_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_69, (MR_Integer) 6))));
                    MR_Word MainGoal_77;
                    MR_Word OrElseGoals_78;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, MainGoal0_74, &MainGoal_77);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, OrElseGoals0_75, &OrElseGoals_78);
                    {
                      Shorthand_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 0) = (MR_Box) ((MR_Unsigned) (GoalType_70));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 1) = ((MR_Box) (Outer_71));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 2) = ((MR_Box) (Inner_72));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 3) = ((MR_Box) (MaybeOutputVars_73));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 4) = ((MR_Box) (MainGoal_77));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 5) = ((MR_Box) (OrElseGoals_78));
                      MR_hl_field(MR_mktag(1), Shorthand_79, 6) = ((MR_Box) (OrElseInners_76));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", (MR_String) "try_goal");
                    return;
                  }
                  break;
              }
              {
                Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Shorthand_79));
              }
            }
            break;
        }
        break;
    }
    LFU0_20 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo0_18);
    LFU_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_1, LFU0_20);
    hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_21, GoalInfo0_18, &GoalInfo1_22);
    hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_22, &GoalInfo_23);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_13, 0) = ((MR_Box) (Expr_19));
      MR_hl_field(MR_mktag(0), Goal_13, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Case_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_8, 0) = ((MR_Box) (MainConsId_10));
      MR_hl_field(MR_mktag(0), Case_8, 1) = ((MR_Box) (OtherConsIds_11));
      MR_hl_field(MR_mktag(0), Case_8, 2) = ((MR_Box) (Goal_13));
    }
    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_7, &Cases_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_9));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(
  MR_Word ForceInUse_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;
    MR_Word Expr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
    MR_Word Expr_15;
    MR_Word LFU0_16;
    MR_Word LFU_17;
    MR_Word GoalInfo1_18;
    MR_Word GoalInfo_19;

    switch (MR_tag((MR_Word) Expr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_39 = (MR_Word) ((MR_Word) (Expr0_13));
          MR_Word Goal_40;

          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_39, &Goal_40);
          Expr_15 = (MR_Word) ((MR_Word) (Goal_40));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Expr_15 = Expr0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Expr_15 = Expr0_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
              MR_Word Goals_27;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_26, &Goals_27);
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_25));
                MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Goals_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
              MR_Word Goals_86;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_85, &Goals_86);
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Goals_86));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
              MR_Word Det_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 3))));
              MR_Word Cases_31;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_30, &Cases_31);
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Var_28));
                MR_hl_field(MR_mktag(3), Expr_15, 2) = (MR_Box) ((MR_Unsigned) (Det_29));
                MR_hl_field(MR_mktag(3), Expr_15, 3) = ((MR_Box) (Cases_31));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
              MR_Word Goal0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
              MR_Word Goal_88;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_87, &Goal_88);
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Reason_41));
                MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Goal_88));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
              MR_Word Cond0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 2))));
              MR_Word Then0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 3))));
              MR_Word Else0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 4))));
              MR_Word Cond_36;
              MR_Word Then_37;
              MR_Word Else_38;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Cond0_33, &Cond_36);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Then0_34, &Then_37);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Else0_35, &Else_38);
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Vars_32));
                MR_hl_field(MR_mktag(3), Expr_15, 2) = ((MR_Box) (Cond_36));
                MR_hl_field(MR_mktag(3), Expr_15, 3) = ((MR_Box) (Then_37));
                MR_hl_field(MR_mktag(3), Expr_15, 4) = ((MR_Box) (Else_38));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_13, (MR_Integer) 1))));
              MR_Word Shorthand_75;

              switch (MR_tag((MR_Word) Shorthand0_65)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_65, (MR_Integer) 0))));
                    MR_Word RightGoal0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_65, (MR_Integer) 1))));
                    MR_Word LeftGoal_78;
                    MR_Word RightGoal_79;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, LeftGoal0_76, &LeftGoal_78);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, RightGoal0_77, &RightGoal_79);
                    {
                      Shorthand_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Shorthand_75, 0) = ((MR_Box) (LeftGoal_78));
                      MR_hl_field(MR_mktag(0), Shorthand_75, 1) = ((MR_Box) (RightGoal_79));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 1))));
                    MR_Word Inner_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 3))));
                    MR_Word MainGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 5))));
                    MR_Word OrElseInners_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_65, (MR_Integer) 6))));
                    MR_Word MainGoal_73;
                    MR_Word OrElseGoals_74;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, MainGoal0_70, &MainGoal_73);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, OrElseGoals0_71, &OrElseGoals_74);
                    {
                      Shorthand_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 0) = (MR_Box) ((MR_Unsigned) (GoalType_66));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 1) = ((MR_Box) (Outer_67));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 2) = ((MR_Box) (Inner_68));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 3) = ((MR_Box) (MaybeOutputVars_69));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 4) = ((MR_Box) (MainGoal_73));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 5) = ((MR_Box) (OrElseGoals_74));
                      MR_hl_field(MR_mktag(1), Shorthand_75, 6) = ((MR_Box) (OrElseInners_72));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", (MR_String) "try_goal");
                    return;
                  }
                  break;
              }
              {
                Expr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Expr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Expr_15, 1) = ((MR_Box) (Shorthand_75));
              }
            }
            break;
        }
        break;
    }
    LFU0_16 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo0_14);
    LFU_17 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_1, LFU0_16);
    hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_17, GoalInfo0_14, &GoalInfo1_18);
    hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_18, &GoalInfo_19);
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_8, 0) = ((MR_Box) (Expr_15));
      MR_hl_field(MR_mktag(0), Goal_8, 1) = ((MR_Box) (GoalInfo_19));
    }
    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_7, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(
  MR_Word ForceInUse_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word Expr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
  MR_Word Expr_9;
  MR_Word LFU0_10;
  MR_Word LFU_11;
  MR_Word GoalInfo1_12;
  MR_Word GoalInfo_13;

  switch (MR_tag((MR_Word) Expr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_33 = (MR_Word) ((MR_Word) (Expr0_7));
        MR_Word Goal_34;

        transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_33, &Goal_34);
        Expr_9 = (MR_Word) ((MR_Word) (Goal_34));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Expr_9 = Expr0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Expr_9 = Expr0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 2))));
            MR_Word Goals_21;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_20, &Goals_21);
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = (MR_Box) ((MR_Unsigned) (ConjType_19));
              MR_hl_field(MR_mktag(3), Expr_9, 2) = ((MR_Box) (Goals_21));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))));
            MR_Word Goals_80;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_79, &Goals_80);
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = ((MR_Box) (Goals_80));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))));
            MR_Word Det_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 3))));
            MR_Word Cases_25;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_4, Cases0_24, &Cases_25);
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = ((MR_Box) (Var_22));
              MR_hl_field(MR_mktag(3), Expr_9, 2) = (MR_Box) ((MR_Unsigned) (Det_23));
              MR_hl_field(MR_mktag(3), Expr_9, 3) = ((MR_Box) (Cases_25));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))));
            MR_Word Goal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 2))));
            MR_Word Goal_82;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_81, &Goal_82);
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = ((MR_Box) (Reason_35));
              MR_hl_field(MR_mktag(3), Expr_9, 2) = ((MR_Box) (Goal_82));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))));
            MR_Word Cond0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 2))));
            MR_Word Then0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 3))));
            MR_Word Else0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 4))));
            MR_Word Cond_30;
            MR_Word Then_31;
            MR_Word Else_32;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Cond0_27, &Cond_30);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Then0_28, &Then_31);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Else0_29, &Else_32);
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = ((MR_Box) (Vars_26));
              MR_hl_field(MR_mktag(3), Expr_9, 2) = ((MR_Box) (Cond_30));
              MR_hl_field(MR_mktag(3), Expr_9, 3) = ((MR_Box) (Then_31));
              MR_hl_field(MR_mktag(3), Expr_9, 4) = ((MR_Box) (Else_32));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_7, (MR_Integer) 1))));
            MR_Word Shorthand_69;

            switch (MR_tag((MR_Word) Shorthand0_59)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_59, (MR_Integer) 0))));
                  MR_Word RightGoal0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand0_59, (MR_Integer) 1))));
                  MR_Word LeftGoal_72;
                  MR_Word RightGoal_73;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, LeftGoal0_70, &LeftGoal_72);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, RightGoal0_71, &RightGoal_73);
                  {
                    Shorthand_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Shorthand_69, 0) = ((MR_Box) (LeftGoal_72));
                    MR_hl_field(MR_mktag(0), Shorthand_69, 1) = ((MR_Box) (RightGoal_73));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 1))));
                  MR_Word Inner_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 3))));
                  MR_Word MainGoal0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 5))));
                  MR_Word OrElseInners_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand0_59, (MR_Integer) 6))));
                  MR_Word MainGoal_67;
                  MR_Word OrElseGoals_68;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, MainGoal0_64, &MainGoal_67);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, OrElseGoals0_65, &OrElseGoals_68);
                  {
                    Shorthand_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 0) = (MR_Box) ((MR_Unsigned) (GoalType_60));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 1) = ((MR_Box) (Outer_61));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 2) = ((MR_Box) (Inner_62));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 3) = ((MR_Box) (MaybeOutputVars_63));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 4) = ((MR_Box) (MainGoal_67));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 5) = ((MR_Box) (OrElseGoals_68));
                    MR_hl_field(MR_mktag(1), Shorthand_69, 6) = ((MR_Box) (OrElseInners_66));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.add_vars_to_lfu_in_goal_expr\'/3", (MR_String) "try_goal");
                  return;
                }
                break;
            }
            {
              Expr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Expr_9, 1) = ((MR_Box) (Shorthand_69));
            }
          }
          break;
      }
      break;
  }
  LFU0_10 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo0_8);
  LFU_11 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_4, LFU0_10);
  hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_11, GoalInfo0_8, &GoalInfo1_12);
  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_12, &GoalInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14)
{
  MR_Word VarTable_6;
  MR_Word Goal0_7;
  MR_Word InstantiatedVars0_8;
  MR_Word DeadVars0_9;
  MR_Word Goal_10;
  MR_Word Var_15;
  MR_Word _InstantiatedVars_11;
  MR_Word _DeadVars_12;

  hlds__hlds_pred__proc_info_get_var_table_3_p_0(ModuleInfo_4, STATE_VARIABLE_ProcInfo_0_13, &VarTable_6);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &Goal0_7);
  hlds__hlds_pred__proc_info_get_liveness_info_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &InstantiatedVars0_8);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &DeadVars0_9);
  Var_15 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_6, InstantiatedVars0_8);
  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_6, Goal0_7, &Goal_10, Var_15, &_InstantiatedVars_11, DeadVars0_9, &_DeadVars_12);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_ProcInfo_0_13, STATE_VARIABLE_ProcInfo_14);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_21,
  MR_Word * STATE_VARIABLE_InstantiatedVars_22,
  MR_Word STATE_VARIABLE_DeadVars_0_23,
  MR_Word * STATE_VARIABLE_DeadVars_24)
{
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_19, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_19, (MR_Integer) 1))));
  MR_Word HasSubGoals_14;

  HasSubGoals_14 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_12);
  switch (HasSubGoals_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word LFU_16;
        MR_Word GoalInfo_17;
        MR_Word PreBirths_39;
        MR_Word PostBirths_40;
        MR_Word PostDeaths_41;
        MR_Word PreDeaths_42;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;

        hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_13, &PreBirths_39);
        hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_13, &PostBirths_40);
        hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeaths_41);
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths_42);
        Var_45 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_8, PreBirths_39);
        Var_47 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_8, PostBirths_40);
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_21));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
        }
        *STATE_VARIABLE_InstantiatedVars_22 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_44);
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_23));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (PostDeaths_41));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (PreDeaths_42));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
        }
        *STATE_VARIABLE_DeadVars_24 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_51);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_InstantiatedVars_0_21, *STATE_VARIABLE_DeadVars_24, &LFU_16);
        hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_16, GoalInfo0_13, &GoalInfo_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word PreDeaths_18;
        MR_Word STATE_VARIABLE_DeadVars_28_28;

        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths_18);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths_18, STATE_VARIABLE_DeadVars_0_23, &STATE_VARIABLE_DeadVars_28_28);
        transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(VarTable_8, STATE_VARIABLE_Goal_0_19, STATE_VARIABLE_Goal_20, STATE_VARIABLE_InstantiatedVars_0_21, STATE_VARIABLE_InstantiatedVars_22, STATE_VARIABLE_DeadVars_28_28, STATE_VARIABLE_DeadVars_24);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_65,
  MR_Word * STATE_VARIABLE_Goal_66,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_67,
  MR_Word * STATE_VARIABLE_InstantiatedVars_68,
  MR_Word STATE_VARIABLE_DeadVars_0_69,
  MR_Word * STATE_VARIABLE_DeadVars_70)
{
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_65, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_65, (MR_Integer) 1))));
  MR_Word GoalExpr_18;
  MR_Word LFU_63;
  MR_Word GoalInfo_64;

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_25 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_26;

        transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, SubGoal0_25, &SubGoal_26, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
        GoalExpr_18 = (MR_Word) ((MR_Word) (SubGoal_26));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "atomic goal");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "atomic goal");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_17;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(VarTable_8, Goals0_16, &Goals_17, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = (MR_Box) ((MR_Unsigned) (ConjType_15));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 2) = ((MR_Box) (Goals_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disj0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Disj_24;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(VarTable_8, Disj0_23, &Disj_24, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Disj_24));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_22;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(VarTable_8, Cases0_21, &Cases_22, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 3) = ((MR_Box) (Cases_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word SubGoal_93;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, SubGoal0_92, &SubGoal_93, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Reason_27));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 2) = ((MR_Box) (SubGoal_93));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_34;
            MR_Word Then_35;
            MR_Word Else_36;
            MR_Word Inst1_37;
            MR_Word Dead1_38;
            MR_Word STATE_VARIABLE_InstantiatedVars_81_81;
            MR_Word STATE_VARIABLE_DeadVars_82_82;
            MR_Word STATE_VARIABLE_InstantiatedVars_83_83;
            MR_Word STATE_VARIABLE_DeadVars_84_84;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, Cond0_29, &Cond_34, STATE_VARIABLE_InstantiatedVars_0_67, &STATE_VARIABLE_InstantiatedVars_81_81, STATE_VARIABLE_DeadVars_0_69, &STATE_VARIABLE_DeadVars_82_82);
            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, Then0_30, &Then_35, STATE_VARIABLE_InstantiatedVars_81_81, &STATE_VARIABLE_InstantiatedVars_83_83, STATE_VARIABLE_DeadVars_82_82, &STATE_VARIABLE_DeadVars_84_84);
            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, Else0_31, &Else_36, STATE_VARIABLE_InstantiatedVars_0_67, &Inst1_37, STATE_VARIABLE_DeadVars_0_69, &Dead1_38);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Inst1_37, STATE_VARIABLE_InstantiatedVars_83_83, STATE_VARIABLE_InstantiatedVars_68);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Dead1_38, STATE_VARIABLE_DeadVars_84_84, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Vars_28));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 2) = ((MR_Box) (Cond_34));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 3) = ((MR_Box) (Then_35));
              MR_hl_field(MR_mktag(3), GoalExpr_18, 4) = ((MR_Box) (Else_36));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lfu.forward_use_in_composite_goal\'/7", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_InstantiatedVars_0_67, *STATE_VARIABLE_DeadVars_70, &LFU_63);
  hlds__hlds_goal__goal_info_set_lfu_3_p_0(LFU_63, GoalInfo0_13, &GoalInfo_64);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_66 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_64));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_19;
  MR_Word conv1_STATE_VARIABLE_InstantiatedVars_21;
  MR_Word conv0_STATE_VARIABLE_DeadVars_23;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_19, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstantiatedVars_21, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DeadVars_23);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_19));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstantiatedVars_21));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DeadVars_23));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goals_0_14,
  MR_Word * STATE_VARIABLE_Goals_15,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_16,
  MR_Word * STATE_VARIABLE_InstantiatedVars_17,
  MR_Word STATE_VARIABLE_DeadVars_0_18,
  MR_Word * STATE_VARIABLE_DeadVars_19)
{
  MR_Word Var_20;
  MR_Box conv4_STATE_VARIABLE_InstantiatedVars_17;
  MR_Box conv3_STATE_VARIABLE_DeadVars_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (VarTable_8));
    MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_16));
    MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_18));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_20, STATE_VARIABLE_Goals_0_14, STATE_VARIABLE_Goals_15, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_16)), &conv4_STATE_VARIABLE_InstantiatedVars_17, ((MR_Box) (STATE_VARIABLE_DeadVars_0_18)), &conv3_STATE_VARIABLE_DeadVars_19);
  *STATE_VARIABLE_InstantiatedVars_17 = ((MR_Word) (conv4_STATE_VARIABLE_InstantiatedVars_17));
  *STATE_VARIABLE_DeadVars_19 = ((MR_Word) (conv3_STATE_VARIABLE_DeadVars_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Case_23;
  MR_Word conv1_STATE_VARIABLE_InstantiatedVars_25;
  MR_Word conv0_STATE_VARIABLE_DeadVars_27;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Case_23, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstantiatedVars_25, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DeadVars_27);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_23));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstantiatedVars_25));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DeadVars_27));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Cases_0_14,
  MR_Word * STATE_VARIABLE_Cases_15,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_16,
  MR_Word * STATE_VARIABLE_InstantiatedVars_17,
  MR_Word STATE_VARIABLE_DeadVars_0_18,
  MR_Word * STATE_VARIABLE_DeadVars_19)
{
  MR_Word Var_20;
  MR_Box conv4_STATE_VARIABLE_InstantiatedVars_17;
  MR_Box conv3_STATE_VARIABLE_DeadVars_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_cases_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (VarTable_8));
    MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_16));
    MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_18));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_20, STATE_VARIABLE_Cases_0_14, STATE_VARIABLE_Cases_15, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_16)), &conv4_STATE_VARIABLE_InstantiatedVars_17, ((MR_Box) (STATE_VARIABLE_DeadVars_0_18)), &conv3_STATE_VARIABLE_DeadVars_19);
  *STATE_VARIABLE_InstantiatedVars_17 = ((MR_Word) (conv4_STATE_VARIABLE_InstantiatedVars_17));
  *STATE_VARIABLE_DeadVars_19 = ((MR_Word) (conv3_STATE_VARIABLE_DeadVars_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Goal_20;
  MR_Word conv1_STATE_VARIABLE_InstantiatedVars_22;
  MR_Word conv0_STATE_VARIABLE_DeadVars_24;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_20, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstantiatedVars_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DeadVars_24);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_20));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstantiatedVars_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DeadVars_24));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_14,
  MR_Word * STATE_VARIABLE_InstantiatedVars_15,
  MR_Word STATE_VARIABLE_DeadVars_0_16,
  MR_Word * STATE_VARIABLE_DeadVars_17)
{
  MR_Word Var_18;
  MR_Box conv4_STATE_VARIABLE_InstantiatedVars_15;
  MR_Box conv3_STATE_VARIABLE_DeadVars_17;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[0]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_conj_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarTable_8));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_18, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_14)), &conv4_STATE_VARIABLE_InstantiatedVars_15, ((MR_Box) (STATE_VARIABLE_DeadVars_0_16)), &conv3_STATE_VARIABLE_DeadVars_17);
  *STATE_VARIABLE_InstantiatedVars_15 = ((MR_Word) (conv4_STATE_VARIABLE_InstantiatedVars_15));
  *STATE_VARIABLE_DeadVars_17 = ((MR_Word) (conv3_STATE_VARIABLE_DeadVars_17));
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__lfu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.lfu.
