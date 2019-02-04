/*
** Automatically generated from `granularity.m'
** by the Mercury compiler,
** version rotd-2018-03-01
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
  MR_Word SCC_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__granularity_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__granularity__control_granularity_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__granularity_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__granularity__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(
  MR_Word SCC_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeCtorInfo_30_30;
    MR_Word PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word PredTable0_9;
    MR_Word PredInfo0_10;
    MR_Word ProcTable0_11;
    MR_Word ProcInfo0_12;
    MR_Word HasParallelConj_13;
    MR_Box conv0_PredInfo0_10;
    MR_Box conv1_ProcInfo0_12;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &PredTable0_9);
    TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_27_27, TypeCtorInfo_28_28, PredTable0_9, ((MR_Box) (PredId_6)), &conv0_PredInfo0_10);
    PredInfo0_10 = ((MR_Word) conv0_PredInfo0_10);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_10, &ProcTable0_11);
    TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
    TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_29_29, TypeCtorInfo_30_30, ProcTable0_11, ((MR_Box) (ProcId_7)), &conv1_ProcInfo0_12);
    ProcInfo0_12 = ((MR_Word) conv1_ProcInfo0_12);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_12, &HasParallelConj_13);
    switch (HasParallelConj_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Goal0_14;
          MR_Word Goal_15;
          MR_Word Changed_16;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_12, &Goal0_14);
          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_14, &Goal_15, (MR_Integer) 0, &Changed_16, SCC_5, STATE_VARIABLE_ModuleInfo_0_22);
          switch (Changed_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ProcInfo1_17;
                MR_Word ProcInfo_18;
                MR_Word ProcTable_19;
                MR_Word PredInfo_20;
                MR_Word PredTable_21;

                hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_15, ProcInfo0_12, &ProcInfo1_17);
                hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo1_17, &ProcInfo_18);
                mercury__map__det_update_4_p_0(TypeCtorInfo_29_29, TypeCtorInfo_30_30, ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_18)), ProcTable0_11, &ProcTable_19);
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_19, PredInfo0_10, &PredInfo_20);
                mercury__map__det_update_4_p_0(TypeCtorInfo_27_27, TypeCtorInfo_28_28, ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_20)), PredTable0_9, &PredTable_21);
                hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
              }
              break;
          }
        }
        break;
    }
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
  }
  else
  {
    MR_Word Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 0)));
    MR_Word OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 1)));
    MR_Word Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 2)));
    MR_Word Goal_22;
    MR_Word STATE_VARIABLE_Changed_25_25;

    transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_21, &Goal_22, STATE_VARIABLE_Changed_0_3, &STATE_VARIABLE_Changed_25_25, SCC_5, ModuleInfo_6);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(Cases0_13, &Cases_15, STATE_VARIABLE_Changed_25_25, STATE_VARIABLE_Changed_4, SCC_5, ModuleInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
  }
  else
  {
    MR_Word Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Word STATE_VARIABLE_Changed_21_21;

    transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_Changed_0_3, &STATE_VARIABLE_Changed_21_21, SCC_5, ModuleInfo_6);
    transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Goals0_13, &Goals_15, STATE_VARIABLE_Changed_21_21, STATE_VARIABLE_Changed_4, SCC_5, ModuleInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0)));
    MR_Word GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1)));
    MR_Word GoalExpr_20;

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_41 = (MR_Word) MR_body(((MR_Word) GoalExpr0_12), (MR_Integer) 0);
          MR_Word SubGoal_42;

          transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(SubGoal0_41, &SubGoal_42, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
          GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_42);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0)))) {
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
              MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));

              switch (Var_134) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Goals_15;
                    MR_Word Globals_16;
                    MR_Word Target_17;
                    MR_Word STATE_VARIABLE_Changed_85_85;

                    transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Var_133, &Goals_15, STATE_VARIABLE_Changed_0_69, &STATE_VARIABLE_Changed_85_85, SCC_10, ModuleInfo_11);
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
                          succeeded = mercury__set__is_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, CalledSCCPredProcIds_19);
                          if (succeeded)
                          {
                            {
                              GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Goals_15));
                            }
                            *STATE_VARIABLE_Changed_70 = STATE_VARIABLE_Changed_85_85;
                          }
                          else
                          {
                            MR_Word Context_26;
                            MR_Word Attributes_27;
                            MR_Word Cond_28;
                            MR_Word Then_29;
                            MR_Word Else_30;
                            MR_Word IfThenElse_31;
                            MR_Word STATE_VARIABLE_Attributes_90_90;
                            MR_Word STATE_VARIABLE_Attributes_93_93;
                            MR_Word STATE_VARIABLE_Attributes_95_95;
                            MR_Word STATE_VARIABLE_Attributes_97_97;
                            MR_Word STATE_VARIABLE_Attributes_99_99;
                            MR_Word STATE_VARIABLE_Attributes_101_101;
                            MR_Word STATE_VARIABLE_Attributes_103_103;
                            MR_String Var_110;
                            MR_Word Var_111;
                            MR_Word Var_112;
                            MR_Word Var_114;
                            MR_Word Var_116;

                            Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
                            STATE_VARIABLE_Attributes_90_90 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
                            parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_90_90, &STATE_VARIABLE_Attributes_93_93);
                            parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_Attributes_93_93, &STATE_VARIABLE_Attributes_95_95);
                            parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_95_95, &STATE_VARIABLE_Attributes_97_97);
                            parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_97_97, &STATE_VARIABLE_Attributes_99_99);
                            parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_99_99, &STATE_VARIABLE_Attributes_101_101);
                            parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_101_101, &STATE_VARIABLE_Attributes_103_103);
                            parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attributes_103_103, &Attributes_27);
                            Var_110 = transform_hlds__granularity__runtime_test_code_0_f_0();
                            Var_111 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            hlds__goal_util__generate_foreign_proc_16_p_0(ModuleName_18, (MR_String) "evaluate_parallelism_condition", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 2, Attributes_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_111, ModuleInfo_11, Context_26, &Cond_28);
                            {
                              Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (Goals_15));
                            }
                            {
                              Then_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Then_29, 0) = ((MR_Box) (Var_112));
                              MR_hl_field(MR_mktag(0), Then_29, 1) = ((MR_Box) (GoalInfo_13));
                            }
                            {
                              Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (Goals_15));
                            }
                            {
                              Else_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Else_30, 0) = ((MR_Box) (Var_114));
                              MR_hl_field(MR_mktag(0), Else_30, 1) = ((MR_Box) (GoalInfo_13));
                            }
                            {
                              Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                              MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Cond_28));
                              MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (Then_29));
                              MR_hl_field(MR_mktag(3), Var_116, 4) = ((MR_Box) (Else_30));
                            }
                            {
                              IfThenElse_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), IfThenElse_31, 0) = ((MR_Box) (Var_116));
                              MR_hl_field(MR_mktag(0), IfThenElse_31, 1) = ((MR_Box) (GoalInfo_13));
                            }
                            {
                              GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__granularity_scalar_common_1[1])));
                              MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (IfThenElse_31));
                            }
                            *STATE_VARIABLE_Changed_70 = (MR_Integer) 1;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "unsupported target language");
                            return;
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Goals_121;

                    transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Var_133, &Goals_121, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
                    {
                      GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Goals_121));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Goals_123;

              transform_hlds__granularity__runtime_granularity_test_in_goals_6_p_0(Goals0_122, &Goals_123, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (Goals_123));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word CanFail_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Cases0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word Cases_36;

              transform_hlds__granularity__runtime_granularity_test_in_cases_6_p_0(Cases0_35, &Cases_36, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (CanFail_34));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 3) = ((MR_Box) (Cases_36));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word SubGoal0_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word FGT_44;
              MR_Word Var_43;

              succeeded = ((((MR_tag((MR_Word) Reason_129)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_129, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_129, (MR_Integer) 1)));
                FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_129, (MR_Integer) 2)));
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
                MR_Word SubGoal_127;

                transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(SubGoal0_130, &SubGoal_127, STATE_VARIABLE_Changed_0_69, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
                {
                  GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (Reason_129));
                  MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (SubGoal_127));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Cond0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Then0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word Else0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word STATE_VARIABLE_Changed_76_76;
              MR_Word STATE_VARIABLE_Changed_77_77;
              MR_Word Cond_124;
              MR_Word Then_125;
              MR_Word Else_126;

              transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Cond0_38, &Cond_124, STATE_VARIABLE_Changed_0_69, &STATE_VARIABLE_Changed_76_76, SCC_10, ModuleInfo_11);
              transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Then0_39, &Then_125, STATE_VARIABLE_Changed_76_76, &STATE_VARIABLE_Changed_77_77, SCC_10, ModuleInfo_11);
              transform_hlds__granularity__runtime_granularity_test_in_goal_6_p_0(Else0_40, &Else_126, STATE_VARIABLE_Changed_77_77, STATE_VARIABLE_Changed_70, SCC_10, ModuleInfo_11);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = ((MR_Box) (Vars_37));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Cond_124));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 3) = ((MR_Box) (Then_125));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 4) = ((MR_Box) (Else_126));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.granularity", (MR_String) "predicate \140transform_hlds.granularity.runtime_granularity_test_in_goal\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_13));
    }
  }
}

static MR_String MR_CALL 
transform_hlds__granularity__runtime_test_code_0_f_0(void)
{
  {
    return (MR_String) "SUCCESS_INDICATOR = MR_par_cond_local_wsdeque_length;\n#ifdef MR_DEBUG_RUNTIME_GRANULARITY_CONTROL\nMR_record_conditional_parallelism_decision(SUCCESS_INDICATOR);" "\n#endif\n";
  }
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__granularity__runtime_granularity_test_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(
  MR_Word SCC_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_Word Var_8;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&transform_hlds__granularity_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (SCC_4));
    }
    mercury__set__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_8, SCC_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_6)), &conv1_STATE_VARIABLE_ModuleInfo_7);
    *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_7);
  }
}

static void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_7;

    transform_hlds__granularity__runtime_granularity_test_in_scc_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_7));
  }
}

void MR_CALL 
transform_hlds__granularity__control_granularity_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_Word DepInfo_4;
    MR_Word SCCs_5;
    MR_Word STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_8_8, &DepInfo_4);
    SCCs_5 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_4);
    mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__granularity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__granularity_scalar_common_3[0], SCCs_5, ((MR_Box) (STATE_VARIABLE_ModuleInfo_8_8)), &conv1_STATE_VARIABLE_ModuleInfo_7);
    *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_7);
  }
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
