/*
** Automatically generated from `structure_reuse.lbu.m'
** by the Mercury compiler,
** version rotd-2022-04-29
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

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Case_0_16,
  MR_Word * STATE_VARIABLE_Case_17,
  MR_Word STATE_VARIABLE_LBU_0_18,
  MR_Word * STATE_VARIABLE_LBU_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTypes_6,
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
  MR_Word VarTypes_6,
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
  MR_Word VarTypes_6,
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
  MR_Word VarTypes_6,
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
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

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
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
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15)
{
  MR_bool succeeded;
  MR_Word NewLBU_11;
  MR_Word Expr0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 0))));
  MR_Word Info0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 1))));
  MR_Word Expr_21;
  MR_Word Info_22;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_LBU_18_24;
  MR_Word ResPoint_26;

  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_20, &ResPoint_26);
  if ((ResPoint_26 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word ResVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResPoint_26, (MR_Integer) 0))));

    Var_23 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_8, ResVars_27);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_23, LBU0_7, &STATE_VARIABLE_LBU_18_24);
  switch (MR_tag((MR_Word) Expr0_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_63 = (MR_Word) ((MR_Word) (Expr0_19));
        MR_Word SubGoal_65;
        MR_Word Var_66;

        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, SubGoal0_63, &SubGoal_65, STATE_VARIABLE_LBU_18_24, &Var_66);
        NewLBU_11 = STATE_VARIABLE_LBU_18_24;
        Expr_21 = (MR_Word) ((MR_Word) (SubGoal_65));
      }
      break;
    case (MR_Integer) 1:
      {
        Expr_21 = Expr0_19;
        NewLBU_11 = STATE_VARIABLE_LBU_18_24;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Det_41;

        Det_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_20);
        succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_41);
        if (succeeded)
        {
          MR_Word PreBirths_42;
          MR_Word PostBirths_43;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;

          hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_20, &PreBirths_42);
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_20, &PostBirths_43);
          Var_91 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_20);
          Var_93 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_8, PreBirths_42);
          Var_95 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_8, PostBirths_43);
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (STATE_VARIABLE_LBU_18_24));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
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
          NewLBU_11 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_90);
        }
        else
          NewLBU_11 = STATE_VARIABLE_LBU_18_24;
        Expr_21 = Expr0_19;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Expr_21 = Expr0_19;
            NewLBU_11 = STATE_VARIABLE_LBU_18_24;
          }
          break;
        case (MR_Integer) 1:
          {
            Expr_21 = Expr0_19;
            NewLBU_11 = STATE_VARIABLE_LBU_18_24;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 2))));
            MR_Word Goals_58;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTypes_8, Goals0_57, &Goals_58, STATE_VARIABLE_LBU_18_24, &NewLBU_11);
            {
              Expr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_21, 1) = (MR_Box) ((MR_Unsigned) (ConjType_56));
              MR_hl_field(MR_mktag(3), Expr_21, 2) = ((MR_Box) (Goals_58));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 1))));
            MR_Word Goals_99;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTypes_8, Goals0_98, &Goals_99, STATE_VARIABLE_LBU_18_24, &NewLBU_11);
            {
              Expr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_21, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_21, 1) = ((MR_Box) (Goals_99));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 1))));
            MR_Word B_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 3))));
            MR_Word Cases_62;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTypes_8, Cases0_61, &Cases_62, STATE_VARIABLE_LBU_18_24, &NewLBU_11);
            {
              Expr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_21, 1) = ((MR_Box) (A_59));
              MR_hl_field(MR_mktag(3), Expr_21, 2) = (MR_Box) ((MR_Unsigned) (B_60));
              MR_hl_field(MR_mktag(3), Expr_21, 3) = ((MR_Box) (Cases_62));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 1))));
            MR_Word SubGoal0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 2))));
            MR_Word SubGoal_101;
            MR_Word Var_89;

            succeeded = ((((MR_tag((MR_Word) Reason_67)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_67, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_67, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_89 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              SubGoal_101 = SubGoal0_100;
              NewLBU_11 = STATE_VARIABLE_LBU_18_24;
            }
            else
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, SubGoal0_100, &SubGoal_101, STATE_VARIABLE_LBU_18_24, &NewLBU_11);
            {
              Expr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_21, 1) = ((MR_Box) (Reason_67));
              MR_hl_field(MR_mktag(3), Expr_21, 2) = ((MR_Box) (SubGoal_101));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 1))));
            MR_Word Cond0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 2))));
            MR_Word Then0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 3))));
            MR_Word Else0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_19, (MR_Integer) 4))));
            MR_Word Cond_73;
            MR_Word CondGoal0_75;
            MR_Word CondInfo0_76;
            MR_Word InfoTmp_77;
            MR_Word CondTmp_78;
            MR_Word LBU0T_80;
            MR_Word Then_81;
            MR_Word LBUT_82;
            MR_Word Else_83;
            MR_Word LBUE_84;
            MR_Word Var_74;
            MR_Word Var_79;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, Cond0_70, &Cond_73, STATE_VARIABLE_LBU_18_24, &Var_74);
            CondGoal0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_70, (MR_Integer) 0))));
            CondInfo0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_70, (MR_Integer) 1))));
            hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_76, &InfoTmp_77);
            {
              CondTmp_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CondTmp_78, 0) = ((MR_Box) (CondGoal0_75));
              MR_hl_field(MR_mktag(0), CondTmp_78, 1) = ((MR_Box) (InfoTmp_77));
            }
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, CondTmp_78, &Var_79, STATE_VARIABLE_LBU_18_24, &LBU0T_80);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, Then0_71, &Then_81, LBU0T_80, &LBUT_82);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, Else0_72, &Else_83, STATE_VARIABLE_LBU_18_24, &LBUE_84);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBUT_82, LBUE_84, &NewLBU_11);
            {
              Expr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_21, 1) = ((MR_Box) (Vars_69));
              MR_hl_field(MR_mktag(3), Expr_21, 2) = ((MR_Box) (Cond_73));
              MR_hl_field(MR_mktag(3), Expr_21, 3) = ((MR_Box) (Then_81));
              MR_hl_field(MR_mktag(3), Expr_21, 4) = ((MR_Box) (Else_83));
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
  hlds__hlds_goal__goal_info_set_lbu_3_p_0(NewLBU_11, Info0_20, &Info_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_22));
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLBU_11, STATE_VARIABLE_LBU_0_14, STATE_VARIABLE_LBU_15);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
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

  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, Goal0_13, &Goal_14, LBU0_7, &NewLBU_15);
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
  MR_Word _ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  MR_Word Goal0_6;
  MR_Word VarTypes_8;
  MR_Word LBU0_9;
  MR_Word Goal_10;
  MR_Word _VarSet_7;
  MR_Word _LBU_11;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_12, &Goal0_6);
  hlds__hlds_pred__proc_info_get_varset_vartypes_3_p_0(STATE_VARIABLE_ProcInfo_0_12, &_VarSet_7, &VarTypes_8);
  LBU0_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_8, Goal0_6, &Goal_10, LBU0_9, &_LBU_11);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTypes_6,
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
  MR_Word ResPoint_22;

  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_10, &ResPoint_22);
  if ((ResPoint_22 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  else
  {
    MR_Word ResVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResPoint_22, (MR_Integer) 0))));

    Var_17 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_6, ResVars_23);
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17, STATE_VARIABLE_LBU_0_15, &STATE_VARIABLE_LBU_18_18);
  switch (MR_tag((MR_Word) Expr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (Expr0_9));
        MR_Word SubGoal_61;
        MR_Word Var_62;

        transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, SubGoal0_59, &SubGoal_61, STATE_VARIABLE_LBU_18_18, &Var_62);
        *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
        Expr_11 = (MR_Word) ((MR_Word) (SubGoal_61));
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
        MR_Word Det_37;

        Det_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_10);
        succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_37);
        if (succeeded)
        {
          MR_Word PreBirths_38;
          MR_Word PostBirths_39;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;

          hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_10, &PreBirths_38);
          hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_10, &PostBirths_39);
          Var_87 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_10);
          Var_89 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_6, PreBirths_38);
          Var_91 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_6, PostBirths_39);
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (STATE_VARIABLE_LBU_18_18));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
          }
          *STATE_VARIABLE_LBU_16 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_86);
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
            MR_Word ConjType_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word Goals_54;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTypes_6, Goals0_53, &Goals_54, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_52));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (Goals_54));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word Goals_95;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTypes_6, Goals0_94, &Goals_95, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Goals_95));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word A_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word B_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 3))));
            MR_Word Cases_58;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTypes_6, Cases0_57, &Cases_58, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (A_55));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = (MR_Box) ((MR_Unsigned) (B_56));
              MR_hl_field(MR_mktag(3), Expr_11, 3) = ((MR_Box) (Cases_58));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_97;
            MR_Word Var_85;

            succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_63, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_63, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_85 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              SubGoal_97 = SubGoal0_96;
              *STATE_VARIABLE_LBU_16 = STATE_VARIABLE_LBU_18_18;
            }
            else
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, SubGoal0_96, &SubGoal_97, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Reason_63));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (SubGoal_97));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 1))));
            MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 2))));
            MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 3))));
            MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_9, (MR_Integer) 4))));
            MR_Word Cond_69;
            MR_Word CondGoal0_71;
            MR_Word CondInfo0_72;
            MR_Word InfoTmp_73;
            MR_Word CondTmp_74;
            MR_Word LBU0T_76;
            MR_Word Then_77;
            MR_Word LBUT_78;
            MR_Word Else_79;
            MR_Word LBUE_80;
            MR_Word Var_70;
            MR_Word Var_75;

            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, Cond0_66, &Cond_69, STATE_VARIABLE_LBU_18_18, &Var_70);
            CondGoal0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_66, (MR_Integer) 0))));
            CondInfo0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_66, (MR_Integer) 1))));
            hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), CondInfo0_72, &InfoTmp_73);
            {
              CondTmp_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CondTmp_74, 0) = ((MR_Box) (CondGoal0_71));
              MR_hl_field(MR_mktag(0), CondTmp_74, 1) = ((MR_Box) (InfoTmp_73));
            }
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, CondTmp_74, &Var_75, STATE_VARIABLE_LBU_18_18, &LBU0T_76);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, Then0_67, &Then_77, LBU0T_76, &LBUT_78);
            transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_6, Else0_68, &Else_79, STATE_VARIABLE_LBU_18_18, &LBUE_80);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBUT_78, LBUE_80, STATE_VARIABLE_LBU_16);
            {
              Expr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Expr_11, 1) = ((MR_Box) (Vars_65));
              MR_hl_field(MR_mktag(3), Expr_11, 2) = ((MR_Box) (Cond_69));
              MR_hl_field(MR_mktag(3), Expr_11, 3) = ((MR_Box) (Then_77));
              MR_hl_field(MR_mktag(3), Expr_11, 4) = ((MR_Box) (Else_79));
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
  MR_Word VarTypes_6,
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
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTypes_6));
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
  MR_Word VarTypes_6,
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
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTypes_6));
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
  MR_Word VarTypes_6,
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
    MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_6));
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
