/*
** Automatically generated from `structure_reuse.lbu.m'
** by the Mercury compiler,
** version rotd-2022-05-04
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


// :- module transform_hlds.ctgc.structure_reuse.lbu.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__lbu__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.lbu.mih"


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




static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Case_0_16,
  MR_Word * STATE_VARIABLE_Case_17,
  MR_Word STATE_VARIABLE_LBU_0_18,
  MR_Word * STATE_VARIABLE_LBU_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_TopGoal_0_13,
  MR_Word * STATE_VARIABLE_TopGoal_14,
  MR_Word STATE_VARIABLE_LBU_0_15,
  MR_Word * STATE_VARIABLE_LBU_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Goals_0_10,
  MR_Word * STATE_VARIABLE_Goals_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Cases_0_10,
  MR_Word * STATE_VARIABLE_Cases_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Goals_0_9,
  MR_Word * STATE_VARIABLE_Goals_10,
  MR_Word STATE_VARIABLE_LBU_0_11,
  MR_Word * STATE_VARIABLE_LBU_12);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15)
{
  MR_bool succeeded;
  MR_Word NewLBU_11;
  MR_Word Expr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 0))));
  MR_Word Info0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 1))));
  MR_Word Expr_19;
  MR_Word Info_20;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_LBU_18_22;
  MR_Word ResPoint_24;

  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_18, &ResPoint_24);
  if ((ResPoint_24 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word ResVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResPoint_24, (MR_Integer) 0))));

    Var_21 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_8, ResVars_25);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_21, LBU0_7, &STATE_VARIABLE_LBU_18_22);
  switch (MR_tag((MR_Word) Expr0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (Expr0_17));
        MR_Word SubGoal_63;
        MR_Word Var_64;

        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, SubGoal0_61, &SubGoal_63, STATE_VARIABLE_LBU_18_22, &Var_64);
        NewLBU_11 = STATE_VARIABLE_LBU_18_22;
        Expr_19 = (MR_Word) ((MR_Word) (SubGoal_63));
      }
      break;
    case (MR_Integer) 1:
      {
        Expr_19 = Expr0_17;
        NewLBU_11 = STATE_VARIABLE_LBU_18_22;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Det_39;

        Det_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_18);
        succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_39);
        if (succeeded)
        {
          MR_Word PreBirths_40;
          MR_Word PostBirths_41;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;

          hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_18, &PreBirths_40);
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_18, &PostBirths_41);
          Var_89 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_18);
          Var_91 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_8, PreBirths_40);
          Var_93 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_8, PostBirths_41);
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (STATE_VARIABLE_LBU_18_22));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
          }
          NewLBU_11 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_88);
        }
        else
          NewLBU_11 = STATE_VARIABLE_LBU_18_22;
        Expr_19 = Expr0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Expr_19 = Expr0_17;
            NewLBU_11 = STATE_VARIABLE_LBU_18_22;
          }
          break;
        case (MR_Integer) 1:
          {
            Expr_19 = Expr0_17;
            NewLBU_11 = STATE_VARIABLE_LBU_18_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
            MR_Word Goals_56;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTable_8, Goals0_55, &Goals_56, STATE_VARIABLE_LBU_18_22, &NewLBU_11);
            {
              Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_54));
              MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (Goals_56));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
            MR_Word Goals_97;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTable_8, Goals0_96, &Goals_97, STATE_VARIABLE_LBU_18_22, &NewLBU_11);
            {
              Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Goals_97));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
            MR_Word B_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 3))));
            MR_Word Cases_60;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTable_8, Cases0_59, &Cases_60, STATE_VARIABLE_LBU_18_22, &NewLBU_11);
            {
              Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (A_57));
              MR_hl_field(MR_mktag(3), Expr_19, 2) = (MR_Box) ((MR_Unsigned) (B_58));
              MR_hl_field(MR_mktag(3), Expr_19, 3) = ((MR_Box) (Cases_60));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
            MR_Word SubGoal0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
            MR_Word SubGoal_99;
            MR_Word Var_87;

            succeeded = ((((MR_tag((MR_Word) Reason_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_65, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_65, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_87 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              SubGoal_99 = SubGoal0_98;
              NewLBU_11 = STATE_VARIABLE_LBU_18_22;
            }
            else
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, SubGoal0_98, &SubGoal_99, STATE_VARIABLE_LBU_18_22, &NewLBU_11);
            {
              Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Reason_65));
              MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (SubGoal_99));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 1))));
            MR_Word Cond0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 2))));
            MR_Word Then0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 3))));
            MR_Word Else0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_17, (MR_Integer) 4))));
            MR_Word Cond_71;
            MR_Word CondGoal0_73;
            MR_Word CondInfo0_74;
            MR_Word InfoTmp_75;
            MR_Word CondTmp_76;
            MR_Word LBU0T_78;
            MR_Word Then_79;
            MR_Word LBUT_80;
            MR_Word Else_81;
            MR_Word LBUE_82;
            MR_Word Var_72;
            MR_Word Var_77;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, Cond0_68, &Cond_71, STATE_VARIABLE_LBU_18_22, &Var_72);
            CondGoal0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_68, (MR_Integer) 0))));
            CondInfo0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_68, (MR_Integer) 1))));
            hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_74, &InfoTmp_75);
            {
              CondTmp_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CondTmp_76, 0) = ((MR_Box) (CondGoal0_73));
              MR_hl_field(MR_mktag(0), CondTmp_76, 1) = ((MR_Box) (InfoTmp_75));
            }
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, CondTmp_76, &Var_77, STATE_VARIABLE_LBU_18_22, &LBU0T_78);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, Then0_69, &Then_79, LBU0T_78, &LBUT_80);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, Else0_70, &Else_81, STATE_VARIABLE_LBU_18_22, &LBUE_82);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBUT_80, LBUE_82, &NewLBU_11);
            {
              Expr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_19, 1) = ((MR_Box) (Vars_67));
              MR_hl_field(MR_mktag(3), Expr_19, 2) = ((MR_Box) (Cond_71));
              MR_hl_field(MR_mktag(3), Expr_19, 3) = ((MR_Box) (Then_79));
              MR_hl_field(MR_mktag(3), Expr_19, 4) = ((MR_Box) (Else_81));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lbu.backward_use_in_goal_2\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  hlds__hlds_goal__goal_info_set_lbu_3_p_0(NewLBU_11, Info0_18, &Info_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_19));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_20));
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLBU_11, STATE_VARIABLE_LBU_0_14, STATE_VARIABLE_LBU_15);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTable_8,
  MR_Word STATE_VARIABLE_Case_0_16,
  MR_Word * STATE_VARIABLE_Case_17,
  MR_Word STATE_VARIABLE_LBU_0_18,
  MR_Word * STATE_VARIABLE_LBU_19)
{
  MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 0))));
  MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 1))));
  MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 2))));
  MR_Word Goal_14;
  MR_Word NewLBU_15;

  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_8, Goal0_13, &Goal_14, LBU0_7, &NewLBU_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_14));
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLBU_15, STATE_VARIABLE_LBU_0_18, STATE_VARIABLE_LBU_19);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  MR_bool succeeded;
  MR_Word Goal0_6;
  MR_Word VarTable_7;
  MR_Word LBU0_8;
  MR_Word Goal_9;
  MR_Word _LBU_10;
  MR_Word Expr0_14;
  MR_Word Info0_15;
  MR_Word Expr_16;
  MR_Word Info_17;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_LBU_18_19;
  MR_Word ResPoint_21;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_6);
  hlds__hlds_pred__proc_info_get_var_table_3_p_0(ModuleInfo_4, STATE_VARIABLE_ProcInfo_0_11, &VarTable_7);
  LBU0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Expr0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
  Info0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_15, &ResPoint_21);
  if ((ResPoint_21 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_18 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word ResVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResPoint_21, (MR_Integer) 0))));

    Var_18 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_7, ResVars_22);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, LBU0_8, &STATE_VARIABLE_LBU_18_19);
  switch (MR_tag((MR_Word) Expr0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_58 = (MR_Word) ((MR_Word) (Expr0_14));
        MR_Word SubGoal_60;
        MR_Word Var_61;

        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, SubGoal0_58, &SubGoal_60, STATE_VARIABLE_LBU_18_19, &Var_61);
        _LBU_10 = STATE_VARIABLE_LBU_18_19;
        Expr_16 = (MR_Word) ((MR_Word) (SubGoal_60));
      }
      break;
    case (MR_Integer) 1:
      {
        Expr_16 = Expr0_14;
        _LBU_10 = STATE_VARIABLE_LBU_18_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Det_36;

        Det_36 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_15);
        succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_36);
        if (succeeded)
        {
          MR_Word PreBirths_37;
          MR_Word PostBirths_38;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;

          hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_15, &PreBirths_37);
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_15, &PostBirths_38);
          Var_86 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_15);
          Var_88 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_7, PreBirths_37);
          Var_90 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_7, PostBirths_38);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (STATE_VARIABLE_LBU_18_19));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
          }
          _LBU_10 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_85);
        }
        else
          _LBU_10 = STATE_VARIABLE_LBU_18_19;
        Expr_16 = Expr0_14;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Expr_16 = Expr0_14;
            _LBU_10 = STATE_VARIABLE_LBU_18_19;
          }
          break;
        case (MR_Integer) 1:
          {
            Expr_16 = Expr0_14;
            _LBU_10 = STATE_VARIABLE_LBU_18_19;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 2))));
            MR_Word Goals_53;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTable_7, Goals0_52, &Goals_53, STATE_VARIABLE_LBU_18_19, &_LBU_10);
            {
              Expr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_16, 1) = (MR_Box) ((MR_Unsigned) (ConjType_51));
              MR_hl_field(MR_mktag(3), Expr_16, 2) = ((MR_Box) (Goals_53));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 1))));
            MR_Word Goals_94;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTable_7, Goals0_93, &Goals_94, STATE_VARIABLE_LBU_18_19, &_LBU_10);
            {
              Expr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_16, 1) = ((MR_Box) (Goals_94));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 1))));
            MR_Word B_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 3))));
            MR_Word Cases_57;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTable_7, Cases0_56, &Cases_57, STATE_VARIABLE_LBU_18_19, &_LBU_10);
            {
              Expr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_16, 1) = ((MR_Box) (A_54));
              MR_hl_field(MR_mktag(3), Expr_16, 2) = (MR_Box) ((MR_Unsigned) (B_55));
              MR_hl_field(MR_mktag(3), Expr_16, 3) = ((MR_Box) (Cases_57));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 1))));
            MR_Word SubGoal0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 2))));
            MR_Word SubGoal_96;
            MR_Word Var_84;

            succeeded = ((((MR_tag((MR_Word) Reason_62)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_84 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              SubGoal_96 = SubGoal0_95;
              _LBU_10 = STATE_VARIABLE_LBU_18_19;
            }
            else
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, SubGoal0_95, &SubGoal_96, STATE_VARIABLE_LBU_18_19, &_LBU_10);
            {
              Expr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_16, 1) = ((MR_Box) (Reason_62));
              MR_hl_field(MR_mktag(3), Expr_16, 2) = ((MR_Box) (SubGoal_96));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 1))));
            MR_Word Cond0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 2))));
            MR_Word Then0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 3))));
            MR_Word Else0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_14, (MR_Integer) 4))));
            MR_Word Cond_68;
            MR_Word CondGoal0_70;
            MR_Word CondInfo0_71;
            MR_Word InfoTmp_72;
            MR_Word CondTmp_73;
            MR_Word LBU0T_75;
            MR_Word Then_76;
            MR_Word LBUT_77;
            MR_Word Else_78;
            MR_Word LBUE_79;
            MR_Word Var_69;
            MR_Word Var_74;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, Cond0_65, &Cond_68, STATE_VARIABLE_LBU_18_19, &Var_69);
            CondGoal0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_65, (MR_Integer) 0))));
            CondInfo0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_65, (MR_Integer) 1))));
            hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_71, &InfoTmp_72);
            {
              CondTmp_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CondTmp_73, 0) = ((MR_Box) (CondGoal0_70));
              MR_hl_field(MR_mktag(0), CondTmp_73, 1) = ((MR_Box) (InfoTmp_72));
            }
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, CondTmp_73, &Var_74, STATE_VARIABLE_LBU_18_19, &LBU0T_75);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, Then0_66, &Then_76, LBU0T_75, &LBUT_77);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_7, Else0_67, &Else_78, STATE_VARIABLE_LBU_18_19, &LBUE_79);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBUT_77, LBUE_79, &_LBU_10);
            {
              Expr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_16, 1) = ((MR_Box) (Vars_64));
              MR_hl_field(MR_mktag(3), Expr_16, 2) = ((MR_Box) (Cond_68));
              MR_hl_field(MR_mktag(3), Expr_16, 3) = ((MR_Box) (Then_76));
              MR_hl_field(MR_mktag(3), Expr_16, 4) = ((MR_Box) (Else_78));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lbu.backward_use_in_goal_2\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  hlds__hlds_goal__goal_info_set_lbu_3_p_0(_LBU_10, Info0_15, &Info_17);
  {
    Goal_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_9, 0) = ((MR_Box) (Expr_16));
    MR_hl_field(MR_mktag(0), Goal_9, 1) = ((MR_Box) (Info_17));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_9, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_TopGoal_0_13,
  MR_Word * STATE_VARIABLE_TopGoal_14,
  MR_Word STATE_VARIABLE_LBU_0_15,
  MR_Word * STATE_VARIABLE_LBU_16)
{
  MR_bool succeeded;
  MR_Word Expr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 0))));
  MR_Word Info0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 1))));
  MR_Word Expr_11;
  MR_Word Info_12;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_LBU_18_18;
  MR_Word ResPoint_20;

  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_10, &ResPoint_20);
  if ((ResPoint_20 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word ResVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResPoint_20, (MR_Integer) 0))));

    Var_17 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_6, ResVars_21);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17, STATE_VARIABLE_LBU_0_15, &STATE_VARIABLE_LBU_18_18);
  switch (MR_tag((MR_Word) Expr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (Expr0_9));
        MR_Word SubGoal_59;
        MR_Word Var_60;

        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, SubGoal0_57, &SubGoal_59, STATE_VARIABLE_LBU_18_18, &Var_60);
        *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
        Expr_11 = (MR_Word) ((MR_Word) (SubGoal_59));
      }
      break;
    case (MR_Integer) 1:
      {
        Expr_11 = Expr0_9;
        *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Det_35;

        Det_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_10);
        succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_35);
        if (succeeded)
        {
          MR_Word PreBirths_36;
          MR_Word PostBirths_37;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;

          hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_10, &PreBirths_36);
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_10, &PostBirths_37);
          Var_85 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_10);
          Var_87 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_6, PreBirths_36);
          Var_89 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_vt_2_f_0(VarTable_6, PostBirths_37);
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (STATE_VARIABLE_LBU_18_18));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
          }
          *STATE_VARIABLE_LBU_16 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_84);
        }
        else
          *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
        Expr_11 = Expr0_9;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Expr_11 = Expr0_9;
            *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
          }
          break;
        case (MR_Integer) 1:
          {
            Expr_11 = Expr0_9;
            *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word Goals_52;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTable_6, Goals0_51, &Goals_52, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_50));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (Goals_52));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word Goals_93;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTable_6, Goals0_92, &Goals_93, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Goals_93));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word B_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 3))));
            MR_Word Cases_56;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTable_6, Cases0_55, &Cases_56, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (A_53));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = (MR_Box) ((MR_Unsigned) (B_54));
              MR_hl_field(MR_mktag(3), Expr_11, 3) = ((MR_Box) (Cases_56));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_95;
            MR_Word Var_83;

            succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_61, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_61, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_83 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              SubGoal_95 = SubGoal0_94;
              *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
            }
            else
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, SubGoal0_94, &SubGoal_95, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (SubGoal_95));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word Cond0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word Then0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 3))));
            MR_Word Else0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 4))));
            MR_Word Cond_67;
            MR_Word CondGoal0_69;
            MR_Word CondInfo0_70;
            MR_Word InfoTmp_71;
            MR_Word CondTmp_72;
            MR_Word LBU0T_74;
            MR_Word Then_75;
            MR_Word LBUT_76;
            MR_Word Else_77;
            MR_Word LBUE_78;
            MR_Word Var_68;
            MR_Word Var_73;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, Cond0_64, &Cond_67, STATE_VARIABLE_LBU_18_18, &Var_68);
            CondGoal0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_64, (MR_Integer) 0))));
            CondInfo0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_64, (MR_Integer) 1))));
            hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_70, &InfoTmp_71);
            {
              CondTmp_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CondTmp_72, 0) = ((MR_Box) (CondGoal0_69));
              MR_hl_field(MR_mktag(0), CondTmp_72, 1) = ((MR_Box) (InfoTmp_71));
            }
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, CondTmp_72, &Var_73, STATE_VARIABLE_LBU_18_18, &LBU0T_74);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, Then0_65, &Then_75, LBU0T_74, &LBUT_76);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTable_6, Else0_66, &Else_77, STATE_VARIABLE_LBU_18_18, &LBUE_78);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBUT_76, LBUE_78, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Vars_63));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (Cond_67));
              MR_hl_field(MR_mktag(3), Expr_11, 3) = ((MR_Box) (Then_75));
              MR_hl_field(MR_mktag(3), Expr_11, 4) = ((MR_Box) (Else_77));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lbu.backward_use_in_goal_2\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  hlds__hlds_goal__goal_info_set_lbu_3_p_0(*STATE_VARIABLE_LBU_16, Info0_10, &Info_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TopGoal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_12));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_13;
  MR_Word conv0_STATE_VARIABLE_LBU_15;

  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_13, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LBU_15);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_13));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_15));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Goals_0_10,
  MR_Word * STATE_VARIABLE_Goals_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13)
{
  MR_Word Var_14;
  MR_Box conv2_STATE_VARIABLE_LBU_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (STATE_VARIABLE_LBU_0_12));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTable_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0]), Var_14, STATE_VARIABLE_Goals_0_10, STATE_VARIABLE_Goals_11, ((MR_Box) (STATE_VARIABLE_LBU_0_12)), &conv2_STATE_VARIABLE_LBU_13);
  *STATE_VARIABLE_LBU_13 = ((MR_Word) (conv2_STATE_VARIABLE_LBU_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Case_17;
  MR_Word conv0_STATE_VARIABLE_LBU_19;

  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Case_17, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LBU_19);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Case_17));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_19));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Cases_0_10,
  MR_Word * STATE_VARIABLE_Cases_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13)
{
  MR_Word Var_14;
  MR_Box conv2_STATE_VARIABLE_LBU_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (STATE_VARIABLE_LBU_0_12));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTable_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0]), Var_14, STATE_VARIABLE_Cases_0_10, STATE_VARIABLE_Cases_11, ((MR_Box) (STATE_VARIABLE_LBU_0_12)), &conv2_STATE_VARIABLE_LBU_13);
  *STATE_VARIABLE_LBU_13 = ((MR_Word) (conv2_STATE_VARIABLE_LBU_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TopGoal_14;
  MR_Word conv0_STATE_VARIABLE_LBU_16;

  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_TopGoal_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_LBU_16);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_TopGoal_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_16));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_Goals_0_9,
  MR_Word * STATE_VARIABLE_Goals_10,
  MR_Word STATE_VARIABLE_LBU_0_11,
  MR_Word * STATE_VARIABLE_LBU_12)
{
  MR_Word Var_13;
  MR_Box conv2_STATE_VARIABLE_LBU_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[0]));
    MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTable_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0]), Var_13, STATE_VARIABLE_Goals_0_9, STATE_VARIABLE_Goals_10, ((MR_Box) (STATE_VARIABLE_LBU_0_11)), &conv2_STATE_VARIABLE_LBU_12);
  *STATE_VARIABLE_LBU_12 = ((MR_Word) (conv2_STATE_VARIABLE_LBU_12));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  if (((MR_Unsigned) 60U & (((MR_Integer) 1 << HeadVar__1_1))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__lbu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.lbu.
