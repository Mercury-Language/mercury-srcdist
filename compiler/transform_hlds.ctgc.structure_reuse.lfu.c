/*
** Automatically generated from `structure_reuse.lfu.m'
** by the Mercury compiler,
** version rotd-2025-01-20
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
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.type_util.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.util.mih"




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
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0(
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_65,
  MR_Word * STATE_VARIABLE_Goal_66,
  MR_Word STATE_VARIABLE_InstantiatedVars_0_67,
  MR_Word * STATE_VARIABLE_InstantiatedVars_68,
  MR_Word STATE_VARIABLE_DeadVars_0_69,
  MR_Word * STATE_VARIABLE_DeadVars_70);


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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lfu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__lfu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_22, (MR_Integer) 0))));
  MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_22, (MR_Integer) 1))));
  MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_22, (MR_Integer) 2))));
  MR_Word Goal_19;
  MR_Word Inst_20;
  MR_Word Dead_21;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_10, Goal0_18, &Goal_19, Inst0_11, &Inst_20, Dead0_12, &Dead_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_23 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_19));
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
  MR_Word Expr0_10;
  MR_Word GoalInfo0_11;
  MR_Word Expr_12;
  MR_Word LFU0_13;
  MR_Word LFU_14;
  MR_Word GoalInfo1_15;
  MR_Word GoalInfo_16;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_8, &Goal0_6);
  Expr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 0))));
  GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 1))));
  switch (MR_tag((MR_Word) Expr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_33 = (MR_Word) ((MR_Word) (Expr0_10));
        MR_Word Goal_34;

        transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_33, &Goal_34);
        Expr_12 = (MR_Word) ((MR_Word) (Goal_34));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Expr_12 = Expr0_10;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Expr0_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Expr_12 = Expr0_10;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_19 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
            MR_Word Goals_21;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_20, &Goals_21);
            {
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Expr_12, 1) = (MR_Box) ((MR_Unsigned) (ConjType_19));
              MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Goals_21));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
            MR_Word Goals_80;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_79, &Goals_80);
            {
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Goals_80));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
            MR_Word Det_23 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_24 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 3))));
            MR_Word Cases_25;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_4, Cases0_24, &Cases_25);
            {
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Var_22));
              MR_hl_field(3, Expr_12, 2) = (MR_Box) ((MR_Unsigned) (Det_23));
              MR_hl_field(3, Expr_12, 3) = ((MR_Box) (Cases_25));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_35 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
            MR_Word Goal0_81 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
            MR_Word Goal_82;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_81, &Goal_82);
            {
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Reason_35));
              MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Goal_82));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
            MR_Word Cond0_27 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
            MR_Word Then0_28 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 3))));
            MR_Word Else0_29 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 4))));
            MR_Word Cond_30;
            MR_Word Then_31;
            MR_Word Else_32;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Cond0_27, &Cond_30);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Then0_28, &Then_31);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Else0_29, &Else_32);
            {
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Vars_26));
              MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Cond_30));
              MR_hl_field(3, Expr_12, 3) = ((MR_Box) (Then_31));
              MR_hl_field(3, Expr_12, 4) = ((MR_Box) (Else_32));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_59 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
            MR_Word Shorthand_69;

            switch (MR_tag((MR_Word) Shorthand0_59)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_70 = ((MR_Word) ((MR_hl_field(0, Shorthand0_59, (MR_Integer) 0))));
                  MR_Word RightGoal0_71 = ((MR_Word) ((MR_hl_field(0, Shorthand0_59, (MR_Integer) 1))));
                  MR_Word LeftGoal_72;
                  MR_Word RightGoal_73;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, LeftGoal0_70, &LeftGoal_72);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, RightGoal0_71, &RightGoal_73);
                  {
                    Shorthand_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Shorthand_69, 0) = ((MR_Box) (LeftGoal_72));
                    MR_hl_field(0, Shorthand_69, 1) = ((MR_Box) (RightGoal_73));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_60 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_61 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 1))));
                  MR_Word Inner_62 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_63 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 3))));
                  MR_Word MainGoal0_64 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_65 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 5))));
                  MR_Word OrElseInners_66 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 6))));
                  MR_Word MainGoal_67;
                  MR_Word OrElseGoals_68;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, MainGoal0_64, &MainGoal_67);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, OrElseGoals0_65, &OrElseGoals_68);
                  {
                    Shorthand_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Shorthand_69, 0) = (MR_Box) ((MR_Unsigned) (GoalType_60));
                    MR_hl_field(1, Shorthand_69, 1) = ((MR_Box) (Outer_61));
                    MR_hl_field(1, Shorthand_69, 2) = ((MR_Box) (Inner_62));
                    MR_hl_field(1, Shorthand_69, 3) = ((MR_Box) (MaybeOutputVars_63));
                    MR_hl_field(1, Shorthand_69, 4) = ((MR_Box) (MainGoal_67));
                    MR_hl_field(1, Shorthand_69, 5) = ((MR_Box) (OrElseGoals_68));
                    MR_hl_field(1, Shorthand_69, 6) = ((MR_Box) (OrElseInners_66));
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
              Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Shorthand_69));
            }
          }
          break;
      }
      break;
  }
  LFU0_13 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo0_11);
  LFU_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_4, LFU0_13);
  transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_14, GoalInfo0_11, &GoalInfo1_15);
  transform_hlds__ctgc__util__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_15, &GoalInfo_16);
  {
    Goal_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_7, 0) = ((MR_Box) (Expr_12));
    MR_hl_field(0, Goal_7, 1) = ((MR_Box) (GoalInfo_16));
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
    MR_Word Case0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_8;
    MR_Word Cases_9;
    MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 0))));
    MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 1))));
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(0, Case0_6, (MR_Integer) 2))));
    MR_Word Goal_13;
    MR_Word Expr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 0))));
    MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 1))));
    MR_Word Expr_16;
    MR_Word LFU0_17;
    MR_Word LFU_18;
    MR_Word GoalInfo1_19;
    MR_Word GoalInfo_20;

    switch (MR_tag((MR_Word) Expr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_37 = (MR_Word) ((MR_Word) (Expr0_14));
          MR_Word Goal_38;

          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_37, &Goal_38);
          Expr_16 = (MR_Word) ((MR_Word) (Goal_38));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Expr_16 = Expr0_14;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Expr0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Expr_16 = Expr0_14;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_23 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_24 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 2))));
              MR_Word Goals_25;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_24, &Goals_25);
              {
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Expr_16, 1) = (MR_Box) ((MR_Unsigned) (ConjType_23));
                MR_hl_field(3, Expr_16, 2) = ((MR_Box) (Goals_25));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_83 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))));
              MR_Word Goals_84;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_83, &Goals_84);
              {
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Expr_16, 1) = ((MR_Box) (Goals_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))));
              MR_Word Det_27 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 3))));
              MR_Word Cases_29;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_28, &Cases_29);
              {
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Expr_16, 1) = ((MR_Box) (Var_26));
                MR_hl_field(3, Expr_16, 2) = (MR_Box) ((MR_Unsigned) (Det_27));
                MR_hl_field(3, Expr_16, 3) = ((MR_Box) (Cases_29));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_39 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))));
              MR_Word Goal0_85 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 2))));
              MR_Word Goal_86;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_85, &Goal_86);
              {
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Expr_16, 1) = ((MR_Box) (Reason_39));
                MR_hl_field(3, Expr_16, 2) = ((MR_Box) (Goal_86));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_30 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))));
              MR_Word Cond0_31 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 2))));
              MR_Word Then0_32 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 3))));
              MR_Word Else0_33 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 4))));
              MR_Word Cond_34;
              MR_Word Then_35;
              MR_Word Else_36;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Cond0_31, &Cond_34);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Then0_32, &Then_35);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Else0_33, &Else_36);
              {
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Expr_16, 1) = ((MR_Box) (Vars_30));
                MR_hl_field(3, Expr_16, 2) = ((MR_Box) (Cond_34));
                MR_hl_field(3, Expr_16, 3) = ((MR_Box) (Then_35));
                MR_hl_field(3, Expr_16, 4) = ((MR_Box) (Else_36));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand0_63 = ((MR_Word) ((MR_hl_field(3, Expr0_14, (MR_Integer) 1))));
              MR_Word Shorthand_73;

              switch (MR_tag((MR_Word) Shorthand0_63)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal0_74 = ((MR_Word) ((MR_hl_field(0, Shorthand0_63, (MR_Integer) 0))));
                    MR_Word RightGoal0_75 = ((MR_Word) ((MR_hl_field(0, Shorthand0_63, (MR_Integer) 1))));
                    MR_Word LeftGoal_76;
                    MR_Word RightGoal_77;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, LeftGoal0_74, &LeftGoal_76);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, RightGoal0_75, &RightGoal_77);
                    {
                      Shorthand_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Shorthand_73, 0) = ((MR_Box) (LeftGoal_76));
                      MR_hl_field(0, Shorthand_73, 1) = ((MR_Box) (RightGoal_77));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_64 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_65 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 1))));
                    MR_Word Inner_66 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_67 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 3))));
                    MR_Word MainGoal0_68 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_69 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 5))));
                    MR_Word OrElseInners_70 = ((MR_Word) ((MR_hl_field(1, Shorthand0_63, (MR_Integer) 6))));
                    MR_Word MainGoal_71;
                    MR_Word OrElseGoals_72;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, MainGoal0_68, &MainGoal_71);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, OrElseGoals0_69, &OrElseGoals_72);
                    {
                      Shorthand_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Shorthand_73, 0) = (MR_Box) ((MR_Unsigned) (GoalType_64));
                      MR_hl_field(1, Shorthand_73, 1) = ((MR_Box) (Outer_65));
                      MR_hl_field(1, Shorthand_73, 2) = ((MR_Box) (Inner_66));
                      MR_hl_field(1, Shorthand_73, 3) = ((MR_Box) (MaybeOutputVars_67));
                      MR_hl_field(1, Shorthand_73, 4) = ((MR_Box) (MainGoal_71));
                      MR_hl_field(1, Shorthand_73, 5) = ((MR_Box) (OrElseGoals_72));
                      MR_hl_field(1, Shorthand_73, 6) = ((MR_Box) (OrElseInners_70));
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
                Expr_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, Expr_16, 1) = ((MR_Box) (Shorthand_73));
              }
            }
            break;
        }
        break;
    }
    LFU0_17 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo0_15);
    LFU_18 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_1, LFU0_17);
    transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_18, GoalInfo0_15, &GoalInfo1_19);
    transform_hlds__ctgc__util__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_19, &GoalInfo_20);
    {
      Goal_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_13, 0) = ((MR_Box) (Expr_16));
      MR_hl_field(0, Goal_13, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Case_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_8, 0) = ((MR_Box) (MainConsId_10));
      MR_hl_field(0, Case_8, 1) = ((MR_Box) (OtherConsIds_11));
      MR_hl_field(0, Case_8, 2) = ((MR_Box) (Goal_13));
    }
    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_7, &Cases_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_9));
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
    MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;
    MR_Word Expr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 1))));
    MR_Word Expr_12;
    MR_Word LFU0_13;
    MR_Word LFU_14;
    MR_Word GoalInfo1_15;
    MR_Word GoalInfo_16;

    switch (MR_tag((MR_Word) Expr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_33 = (MR_Word) ((MR_Word) (Expr0_10));
          MR_Word Goal_34;

          transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_33, &Goal_34);
          Expr_12 = (MR_Word) ((MR_Word) (Goal_34));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Expr_12 = Expr0_10;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Expr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Expr_12 = Expr0_10;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_19 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
              MR_Word Goals_21;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_20, &Goals_21);
              {
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Expr_12, 1) = (MR_Box) ((MR_Unsigned) (ConjType_19));
                MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Goals_21));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
              MR_Word Goals_80;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_79, &Goals_80);
              {
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
              MR_Word Det_23 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_24 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 3))));
              MR_Word Cases_25;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_1, Cases0_24, &Cases_25);
              {
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Var_22));
                MR_hl_field(3, Expr_12, 2) = (MR_Box) ((MR_Unsigned) (Det_23));
                MR_hl_field(3, Expr_12, 3) = ((MR_Box) (Cases_25));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_35 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
              MR_Word Goal0_81 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
              MR_Word Goal_82;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Goal0_81, &Goal_82);
              {
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Reason_35));
                MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Goal_82));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_26 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
              MR_Word Cond0_27 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 2))));
              MR_Word Then0_28 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 3))));
              MR_Word Else0_29 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 4))));
              MR_Word Cond_30;
              MR_Word Then_31;
              MR_Word Else_32;

              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Cond0_27, &Cond_30);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Then0_28, &Then_31);
              transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, Else0_29, &Else_32);
              {
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Vars_26));
                MR_hl_field(3, Expr_12, 2) = ((MR_Box) (Cond_30));
                MR_hl_field(3, Expr_12, 3) = ((MR_Box) (Then_31));
                MR_hl_field(3, Expr_12, 4) = ((MR_Box) (Else_32));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand0_59 = ((MR_Word) ((MR_hl_field(3, Expr0_10, (MR_Integer) 1))));
              MR_Word Shorthand_69;

              switch (MR_tag((MR_Word) Shorthand0_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal0_70 = ((MR_Word) ((MR_hl_field(0, Shorthand0_59, (MR_Integer) 0))));
                    MR_Word RightGoal0_71 = ((MR_Word) ((MR_hl_field(0, Shorthand0_59, (MR_Integer) 1))));
                    MR_Word LeftGoal_72;
                    MR_Word RightGoal_73;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, LeftGoal0_70, &LeftGoal_72);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, RightGoal0_71, &RightGoal_73);
                    {
                      Shorthand_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Shorthand_69, 0) = ((MR_Box) (LeftGoal_72));
                      MR_hl_field(0, Shorthand_69, 1) = ((MR_Box) (RightGoal_73));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_60 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_61 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 1))));
                    MR_Word Inner_62 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_63 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 3))));
                    MR_Word MainGoal0_64 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_65 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 5))));
                    MR_Word OrElseInners_66 = ((MR_Word) ((MR_hl_field(1, Shorthand0_59, (MR_Integer) 6))));
                    MR_Word MainGoal_67;
                    MR_Word OrElseGoals_68;

                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_1, MainGoal0_64, &MainGoal_67);
                    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, OrElseGoals0_65, &OrElseGoals_68);
                    {
                      Shorthand_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Shorthand_69, 0) = (MR_Box) ((MR_Unsigned) (GoalType_60));
                      MR_hl_field(1, Shorthand_69, 1) = ((MR_Box) (Outer_61));
                      MR_hl_field(1, Shorthand_69, 2) = ((MR_Box) (Inner_62));
                      MR_hl_field(1, Shorthand_69, 3) = ((MR_Box) (MaybeOutputVars_63));
                      MR_hl_field(1, Shorthand_69, 4) = ((MR_Box) (MainGoal_67));
                      MR_hl_field(1, Shorthand_69, 5) = ((MR_Box) (OrElseGoals_68));
                      MR_hl_field(1, Shorthand_69, 6) = ((MR_Box) (OrElseInners_66));
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
                Expr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Expr_12, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, Expr_12, 1) = ((MR_Box) (Shorthand_69));
              }
            }
            break;
        }
        break;
    }
    LFU0_13 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo0_11);
    LFU_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_1, LFU0_13);
    transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_14, GoalInfo0_11, &GoalInfo1_15);
    transform_hlds__ctgc__util__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_15, &GoalInfo_16);
    {
      Goal_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_8, 0) = ((MR_Box) (Expr_12));
      MR_hl_field(0, Goal_8, 1) = ((MR_Box) (GoalInfo_16));
    }
    transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_1, Goals0_7, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(
  MR_Word ForceInUse_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word Expr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word Expr_9;
  MR_Word LFU0_10;
  MR_Word LFU_11;
  MR_Word GoalInfo1_12;
  MR_Word GoalInfo_13;

  switch (MR_tag((MR_Word) Expr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal0_30 = (MR_Word) ((MR_Word) (Expr0_7));
        MR_Word Goal_31;

        transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_30, &Goal_31);
        Expr_9 = (MR_Word) ((MR_Word) (Goal_31));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Expr_9 = Expr0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Expr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Expr_9 = Expr0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 2))));
            MR_Word Goals_18;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_17, &Goals_18);
            {
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Expr_9, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(3, Expr_9, 2) = ((MR_Box) (Goals_18));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_76 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))));
            MR_Word Goals_77;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, Goals0_76, &Goals_77);
            {
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Expr_9, 1) = ((MR_Box) (Goals_77));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))));
            MR_Word Det_20 = ((MR_Unsigned) ((MR_hl_field(3, Expr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 3))));
            MR_Word Cases_22;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_cases_3_p_0(ForceInUse_4, Cases0_21, &Cases_22);
            {
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Expr_9, 1) = ((MR_Box) (Var_19));
              MR_hl_field(3, Expr_9, 2) = (MR_Box) ((MR_Unsigned) (Det_20));
              MR_hl_field(3, Expr_9, 3) = ((MR_Box) (Cases_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_32 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))));
            MR_Word Goal0_78 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 2))));
            MR_Word Goal_79;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Goal0_78, &Goal_79);
            {
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Expr_9, 1) = ((MR_Box) (Reason_32));
              MR_hl_field(3, Expr_9, 2) = ((MR_Box) (Goal_79));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))));
            MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 2))));
            MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 3))));
            MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 4))));
            MR_Word Cond_27;
            MR_Word Then_28;
            MR_Word Else_29;

            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Cond0_24, &Cond_27);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Then0_25, &Then_28);
            transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, Else0_26, &Else_29);
            {
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Expr_9, 1) = ((MR_Box) (Vars_23));
              MR_hl_field(3, Expr_9, 2) = ((MR_Box) (Cond_27));
              MR_hl_field(3, Expr_9, 3) = ((MR_Box) (Then_28));
              MR_hl_field(3, Expr_9, 4) = ((MR_Box) (Else_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_56 = ((MR_Word) ((MR_hl_field(3, Expr0_7, (MR_Integer) 1))));
            MR_Word Shorthand_66;

            switch (MR_tag((MR_Word) Shorthand0_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_67 = ((MR_Word) ((MR_hl_field(0, Shorthand0_56, (MR_Integer) 0))));
                  MR_Word RightGoal0_68 = ((MR_Word) ((MR_hl_field(0, Shorthand0_56, (MR_Integer) 1))));
                  MR_Word LeftGoal_69;
                  MR_Word RightGoal_70;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, LeftGoal0_67, &LeftGoal_69);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, RightGoal0_68, &RightGoal_70);
                  {
                    Shorthand_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Shorthand_66, 0) = ((MR_Box) (LeftGoal_69));
                    MR_hl_field(0, Shorthand_66, 1) = ((MR_Box) (RightGoal_70));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_57 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_58 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 1))));
                  MR_Word Inner_59 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_60 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 3))));
                  MR_Word MainGoal0_61 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_62 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 5))));
                  MR_Word OrElseInners_63 = ((MR_Word) ((MR_hl_field(1, Shorthand0_56, (MR_Integer) 6))));
                  MR_Word MainGoal_64;
                  MR_Word OrElseGoals_65;

                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goal_3_p_0(ForceInUse_4, MainGoal0_61, &MainGoal_64);
                  transform_hlds__ctgc__structure_reuse__lfu__add_vars_to_lfu_in_goals_3_p_0(ForceInUse_4, OrElseGoals0_62, &OrElseGoals_65);
                  {
                    Shorthand_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Shorthand_66, 0) = (MR_Box) ((MR_Unsigned) (GoalType_57));
                    MR_hl_field(1, Shorthand_66, 1) = ((MR_Box) (Outer_58));
                    MR_hl_field(1, Shorthand_66, 2) = ((MR_Box) (Inner_59));
                    MR_hl_field(1, Shorthand_66, 3) = ((MR_Box) (MaybeOutputVars_60));
                    MR_hl_field(1, Shorthand_66, 4) = ((MR_Box) (MainGoal_64));
                    MR_hl_field(1, Shorthand_66, 5) = ((MR_Box) (OrElseGoals_65));
                    MR_hl_field(1, Shorthand_66, 6) = ((MR_Box) (OrElseInners_63));
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
              Expr_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Expr_9, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Expr_9, 1) = ((MR_Box) (Shorthand_66));
            }
          }
          break;
      }
      break;
  }
  LFU0_10 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo0_8);
  LFU_11 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForceInUse_4, LFU0_10);
  transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_11, GoalInfo0_8, &GoalInfo1_12);
  transform_hlds__ctgc__util__goal_info_set_reuse_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo1_12, &GoalInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Expr_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_information_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  MR_Word VarTable_4;
  MR_Word Goal0_5;
  MR_Word InstantiatedVars0_6;
  MR_Word DeadVars0_7;
  MR_Word Goal_8;
  MR_Word Var_13;
  MR_Word _InstantiatedVars_9;
  MR_Word _DeadVars_10;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &VarTable_4);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_5);
  hlds__hlds_pred__proc_info_get_liveness_info_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &InstantiatedVars0_6);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &DeadVars0_7);
  Var_13 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_4, InstantiatedVars0_6);
  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_4, Goal0_5, &Goal_8, Var_13, &_InstantiatedVars_9, DeadVars0_7, &_DeadVars_10);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_8, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
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
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_19, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_19, (MR_Integer) 1))));
  MR_Word HasSubGoals_14;

  HasSubGoals_14 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_12);
  switch (HasSubGoals_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word LFU_16;
        MR_Word GoalInfo_17;
        MR_Word PreBirths_31;
        MR_Word PostBirths_32;
        MR_Word PostDeaths_33;
        MR_Word PreDeaths_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_13, &PreBirths_31);
        hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_13, &PostBirths_32);
        hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_13, &PostDeaths_33);
        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_13, &PreDeaths_34);
        Var_36 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_8, PreBirths_31);
        Var_38 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTable_8, PostBirths_32);
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_21));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
        }
        *STATE_VARIABLE_InstantiatedVars_22 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_35);
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_23));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (PostDeaths_33));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (PreDeaths_34));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
        }
        *STATE_VARIABLE_DeadVars_24 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_InstantiatedVars_0_21, *STATE_VARIABLE_DeadVars_24, &LFU_16);
        transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_16, GoalInfo0_13, &GoalInfo_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_12));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
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
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Case_23;
  MR_Word conv11_STATE_VARIABLE_InstantiatedVars_25;
  MR_Word conv10_STATE_VARIABLE_DeadVars_27;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_case_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_STATE_VARIABLE_Case_23, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_InstantiatedVars_25, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_DeadVars_27);
  *wrapper_arg_2 = ((MR_Box) (conv12_STATE_VARIABLE_Case_23));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_InstantiatedVars_25));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_DeadVars_27));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Goal_19;
  MR_Word conv6_STATE_VARIABLE_InstantiatedVars_21;
  MR_Word conv5_STATE_VARIABLE_DeadVars_23;

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_disj_goal_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Goal_19, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_InstantiatedVars_21, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_DeadVars_23);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Goal_19));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_InstantiatedVars_21));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_DeadVars_23));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_1(
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

  transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Goal_20, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InstantiatedVars_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DeadVars_24);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_20));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InstantiatedVars_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DeadVars_24));
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
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_65, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_65, (MR_Integer) 1))));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
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
            MR_Word ConjType_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_17;
            MR_Word Var_96;
            MR_Box conv4_STATE_VARIABLE_InstantiatedVars_68;
            MR_Box conv3_STATE_VARIABLE_DeadVars_70;

            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_96, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_2[0]));
              MR_hl_field(0, Var_96, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_1));
              MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_96, 3) = ((MR_Box) (VarTable_8));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_96, Goals0_16, &Goals_17, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_67)), &conv4_STATE_VARIABLE_InstantiatedVars_68, ((MR_Box) (STATE_VARIABLE_DeadVars_0_69)), &conv3_STATE_VARIABLE_DeadVars_70);
            *STATE_VARIABLE_InstantiatedVars_68 = ((MR_Word) (conv4_STATE_VARIABLE_InstantiatedVars_68));
            *STATE_VARIABLE_DeadVars_70 = ((MR_Word) (conv3_STATE_VARIABLE_DeadVars_70));
            {
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_18, 1) = (MR_Box) ((MR_Unsigned) (ConjType_15));
              MR_hl_field(3, GoalExpr_18, 2) = ((MR_Box) (Goals_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disj0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Disj_24;
            MR_Word Var_99;
            MR_Box conv9_STATE_VARIABLE_InstantiatedVars_68;
            MR_Box conv8_STATE_VARIABLE_DeadVars_70;

            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_99, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[0]));
              MR_hl_field(0, Var_99, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_2));
              MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_99, 3) = ((MR_Box) (VarTable_8));
              MR_hl_field(0, Var_99, 4) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_67));
              MR_hl_field(0, Var_99, 5) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_69));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_99, Disj0_23, &Disj_24, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_67)), &conv9_STATE_VARIABLE_InstantiatedVars_68, ((MR_Box) (STATE_VARIABLE_DeadVars_0_69)), &conv8_STATE_VARIABLE_DeadVars_70);
            *STATE_VARIABLE_InstantiatedVars_68 = ((MR_Word) (conv9_STATE_VARIABLE_InstantiatedVars_68));
            *STATE_VARIABLE_DeadVars_70 = ((MR_Word) (conv8_STATE_VARIABLE_DeadVars_70));
            {
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Disj_24));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_22;
            MR_Word Var_102;
            MR_Box conv14_STATE_VARIABLE_InstantiatedVars_68;
            MR_Box conv13_STATE_VARIABLE_DeadVars_70;

            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_102, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_3[1]));
              MR_hl_field(0, Var_102, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_composite_goal_7_p_0_3));
              MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_102, 3) = ((MR_Box) (VarTable_8));
              MR_hl_field(0, Var_102, 4) = ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_67));
              MR_hl_field(0, Var_102, 5) = ((MR_Box) (STATE_VARIABLE_DeadVars_0_69));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lfu_scalar_common_1[0]), Var_102, Cases0_21, &Cases_22, ((MR_Box) (STATE_VARIABLE_InstantiatedVars_0_67)), &conv14_STATE_VARIABLE_InstantiatedVars_68, ((MR_Box) (STATE_VARIABLE_DeadVars_0_69)), &conv13_STATE_VARIABLE_DeadVars_70);
            *STATE_VARIABLE_InstantiatedVars_68 = ((MR_Word) (conv14_STATE_VARIABLE_InstantiatedVars_68));
            *STATE_VARIABLE_DeadVars_70 = ((MR_Word) (conv13_STATE_VARIABLE_DeadVars_70));
            {
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Var_19));
              MR_hl_field(3, GoalExpr_18, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
              MR_hl_field(3, GoalExpr_18, 3) = ((MR_Box) (Cases_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word SubGoal_93;

            transform_hlds__ctgc__structure_reuse__lfu__forward_use_in_goal_7_p_0(VarTable_8, SubGoal0_92, &SubGoal_93, STATE_VARIABLE_InstantiatedVars_0_67, STATE_VARIABLE_InstantiatedVars_68, STATE_VARIABLE_DeadVars_0_69, STATE_VARIABLE_DeadVars_70);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Reason_27));
              MR_hl_field(3, GoalExpr_18, 2) = ((MR_Box) (SubGoal_93));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
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
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Vars_28));
              MR_hl_field(3, GoalExpr_18, 2) = ((MR_Box) (Cond_34));
              MR_hl_field(3, GoalExpr_18, 3) = ((MR_Box) (Then_35));
              MR_hl_field(3, GoalExpr_18, 4) = ((MR_Box) (Else_36));
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
  transform_hlds__ctgc__util__goal_info_set_lfu_3_p_0(LFU_63, GoalInfo0_13, &GoalInfo_64);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_66 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_64));
  }
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
