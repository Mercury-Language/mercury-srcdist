/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version rotd-2024-08-02
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


// :- module transform_hlds.granularity.
// :- implementation.

/*
INIT mercury__transform_hlds__granularity__init
ENDINIT
*/

#include "transform_hlds.granularity.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
  MR_Word SCC_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19);

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word SCC_5,
  MR_Word ModuleInfo_6);

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word SCC_5,
  MR_Word ModuleInfo_6);

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Changed_0_69,
  MR_Word * STATE_VARIABLE_Changed_70,
  MR_Word SCC_10,
  MR_Word ModuleInfo_11);

static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void);

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7);

static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__granularity_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_2[1][6];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_3[1][3];

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_4[1][7];




static /* final */ const MR_Box transform_hlds__granularity_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__granularity_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__granularity__control_granularity_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
  MR_Word SCC_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word PredInfo0_9;
  MR_Word ProcInfo0_10;
  MR_Word HasParallelConj_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_6, &PredInfo0_9);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_9, ProcId_7, &ProcInfo0_10);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_10, &HasParallelConj_11);
  switch (HasParallelConj_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Goal0_12;
        MR_Word Goal_13;
        MR_Word Changed_14;

        hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_10, &Goal0_12);
        transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_12, &Goal_13, (MR_Integer) 0, &Changed_14, SCC_5, STATE_VARIABLE_ModuleInfo_0_18);
        switch (Changed_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProcInfo1_15;
              MR_Word ProcInfo_16;
              MR_Word PredInfo_17;

              hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_13, ProcInfo0_10, &ProcInfo1_15);
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo1_15, &ProcInfo_16);
              hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_7, ProcInfo_16, PredInfo0_9, &PredInfo_17);
              hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_17, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word SCC_5,
  MR_Word ModuleInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
  }
  else
  {
    MR_Word Case0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 2))));
    MR_Word Goal_22;
    MR_Word STATE_VARIABLE_Changed_25_25;

    transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_21, &Goal_22, STATE_VARIABLE_Changed_0_3, &STATE_VARIABLE_Changed_25_25, SCC_5, ModuleInfo_6);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_14, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_14, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_14, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(Cases0_13, &Cases_15, STATE_VARIABLE_Changed_25_25, STATE_VARIABLE_Changed_4, SCC_5, ModuleInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_15));
    }
  }
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4,
  MR_Word SCC_5,
  MR_Word ModuleInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word STATE_VARIABLE_Changed_21_21;

    transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_Changed_0_3, &STATE_VARIABLE_Changed_21_21, SCC_5, ModuleInfo_6);
    transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Goals0_13, &Goals_15, STATE_VARIABLE_Changed_21_21, STATE_VARIABLE_Changed_4, SCC_5, ModuleInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Changed_0_69,
  MR_Word * STATE_VARIABLE_Changed_70,
  MR_Word SCC_10,
  MR_Word ModuleInfo_11)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_20;

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_41 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_42;

        transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(SubGoal0_41, &SubGoal_42, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
        GoalExpr_20 = (MR_Word) ((MR_Word) (SubGoal_42));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        GoalExpr_20 = GoalExpr0_12;
        *STATE_VARIABLE_Changed_70 = STATE_VARIABLE_Changed_0_69;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_20 = GoalExpr0_12;
            *STATE_VARIABLE_Changed_70 = STATE_VARIABLE_Changed_0_69;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_131 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Var_132 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_132) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Goals_15;
                  MR_Word Globals_16;
                  MR_Word Target_17;
                  MR_Word STATE_VARIABLE_Changed_72_72;

                  transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Var_131, &Goals_15, STATE_VARIABLE_Changed_0_69, &STATE_VARIABLE_Changed_72_72, SCC_10, ModuleInfo_11);
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_16);
                  libs__globals__get_target_2_p_0(Globals_16, &Target_17);
                  switch (Target_17) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ModuleName_18;
                        MR_Word CalledSCCPredProcIds_19;

                        ModuleName_18 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
                        CalledSCCPredProcIds_19 = hlds__goal_util__goal_list_calls_proc_in_set_2_f_0(Goals_15, SCC_10);
                        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CalledSCCPredProcIds_19);
                        if (succeeded)
                        {
                          {
                            GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                            MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Goals_15));
                          }
                          *STATE_VARIABLE_Changed_70 = STATE_VARIABLE_Changed_72_72;
                        }
                        else
                        {
                          MR_Word Context_26;
                          MR_Word Attributes_27;
                          MR_Word Cond_28;
                          MR_Word Then_29;
                          MR_Word Else_30;
                          MR_Word IfThenElse_31;
                          MR_Word STATE_VARIABLE_Attributes_74_74;
                          MR_Word STATE_VARIABLE_Attributes_77_77;
                          MR_Word STATE_VARIABLE_Attributes_79_79;
                          MR_Word STATE_VARIABLE_Attributes_81_81;
                          MR_Word STATE_VARIABLE_Attributes_83_83;
                          MR_Word STATE_VARIABLE_Attributes_85_85;
                          MR_Word STATE_VARIABLE_Attributes_87_87;
                          MR_Word Var_92;
                          MR_String Var_96;
                          MR_Word Var_97;
                          MR_Word Var_99;
                          MR_Word Var_101;

                          Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
                          STATE_VARIABLE_Attributes_74_74 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
                          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_74_74, &STATE_VARIABLE_Attributes_77_77);
                          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_Attributes_77_77, &STATE_VARIABLE_Attributes_79_79);
                          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_79_79, &STATE_VARIABLE_Attributes_81_81);
                          parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_81_81, &STATE_VARIABLE_Attributes_83_83);
                          parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_83_83, &STATE_VARIABLE_Attributes_85_85);
                          parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_85_85, &STATE_VARIABLE_Attributes_87_87);
                          parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_87_87, &Attributes_27);
                          Var_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_96 = transform_hlds__granularity__runtime_test_code_0_f_0();
                          hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_11, (MR_Integer) 0, ModuleName_18, (MR_String) "evaluate_parallelism_condition", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_92, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Attributes_27, (MR_Word) ((MR_Unsigned) 0U), Var_96, Context_26, &Cond_28);
                          {
                            Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, Var_97, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                            MR_hl_field(3, Var_97, 2) = ((MR_Box) (Goals_15));
                          }
                          {
                            Then_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Then_29, 0) = ((MR_Box) (Var_97));
                            MR_hl_field(0, Then_29, 1) = ((MR_Box) (GoalInfo_13));
                          }
                          {
                            Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, Var_99, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                            MR_hl_field(3, Var_99, 2) = ((MR_Box) (Goals_15));
                          }
                          {
                            Else_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Else_30, 0) = ((MR_Box) (Var_99));
                            MR_hl_field(0, Else_30, 1) = ((MR_Box) (GoalInfo_13));
                          }
                          {
                            Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Var_101, 2) = ((MR_Box) (Cond_28));
                            MR_hl_field(3, Var_101, 3) = ((MR_Box) (Then_29));
                            MR_hl_field(3, Var_101, 4) = ((MR_Box) (Else_30));
                          }
                          {
                            IfThenElse_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, IfThenElse_31, 0) = ((MR_Box) (Var_101));
                            MR_hl_field(0, IfThenElse_31, 1) = ((MR_Box) (GoalInfo_13));
                          }
                          {
                            GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, GoalExpr_20, 1) = ((MR_Box) (MR_mkword(3, &transform_hlds__granularity_scalar_common_1[1])));
                            MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (IfThenElse_31));
                          }
                          *STATE_VARIABLE_Changed_70 = (MR_Integer) 1;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "unsupported target language");
                        return;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Goals_120;

                  transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Var_131, &Goals_120, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
                  {
                    GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Goals_120));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_121 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_122;

            transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Goals0_121, &Goals_122, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_20, 1) = ((MR_Box) (Goals_122));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_36;

            transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(Cases0_35, &Cases_36, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_20, 1) = ((MR_Box) (Var_33));
              MR_hl_field(3, GoalExpr_20, 2) = (MR_Box) ((MR_Unsigned) (CanFail_34));
              MR_hl_field(3, GoalExpr_20, 3) = ((MR_Box) (Cases_36));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_128 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_129 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word FGT_44;

            succeeded = ((((MR_tag((MR_Word) Reason_128)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_128, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_44 = ((MR_Unsigned) ((MR_hl_field(3, Reason_128, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_44) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              GoalExpr_20 = GoalExpr0_12;
              *STATE_VARIABLE_Changed_70 = STATE_VARIABLE_Changed_0_69;
            }
            else
            {
              MR_Word SubGoal_126;

              transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(SubGoal0_129, &SubGoal_126, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_20, 1) = ((MR_Box) (Reason_128));
                MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (SubGoal_126));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word STATE_VARIABLE_Changed_112_112;
            MR_Word STATE_VARIABLE_Changed_113_113;
            MR_Word Cond_123;
            MR_Word Then_124;
            MR_Word Else_125;

            transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Cond0_38, &Cond_123, STATE_VARIABLE_Changed_0_69, &STATE_VARIABLE_Changed_112_112, SCC_10, ModuleInfo_11);
            transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Then0_39, &Then_124, STATE_VARIABLE_Changed_112_112, &STATE_VARIABLE_Changed_113_113, SCC_10, ModuleInfo_11);
            transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Else0_40, &Else_125, STATE_VARIABLE_Changed_113_113, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_20, 1) = ((MR_Box) (Vars_37));
              MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Cond_123));
              MR_hl_field(3, GoalExpr_20, 3) = ((MR_Box) (Then_124));
              MR_hl_field(3, GoalExpr_20, 4) = ((MR_Box) (Else_125));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void)
{
  return (MR_String) "SUCCESS_INDICATOR = MR_par_cond_local_wsdeque_length;\n#ifdef MR_DEBUG_RUNTIME_GRANULARITY_CONTROL\nMR_record_conditional_parallelism_decision(SUCCESS_INDICATOR);" "\n#endif\n";
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_19;

  transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_19));
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word Var_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&transform_hlds__granularity_scalar_common_4[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (SCC_4));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_8, SCC_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_6)), &conv1_STATE_VARIABLE_ModuleInfo_7);
  *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_7));
}

static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_7;

  transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_7));
}

void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word DepInfo_4;
  MR_Word SCCs_5;
  MR_Word STATE_VARIABLE_ModuleInfo_8_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_8_8, &DepInfo_4);
  SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_4);
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__granularity_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__granularity_scalar_common_3[0]), SCCs_5, ((MR_Box) (STATE_VARIABLE_ModuleInfo_8_8)), &conv1_STATE_VARIABLE_ModuleInfo_7);
  *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_7));
}

void mercury__transform_hlds__granularity__init(void)
{
}

void mercury__transform_hlds__granularity__init_type_tables(void)
{
}

void mercury__transform_hlds__granularity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__granularity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.granularity.
