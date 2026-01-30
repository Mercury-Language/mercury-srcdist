/*
** Automatically generated from `add_heap_ops.m'
** by the Mercury compiler,
** version rotd-2026-01-30
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


// :- module ml_backend.add_heap_ops.
// :- implementation.

/*
INIT mercury__ml_backend__add_heap_ops__init
ENDINIT
*/

#include "ml_backend.add_heap_ops.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[2];

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[2];

static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1];

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1];

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1];

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84);

static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word MaybeSavedHeapPointerVar_4,
  MR_Word DisjGoalInfo_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16);

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_4_p_0(
  MR_Word Info_5,
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * RestoreHeapPointerGoal_8);

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_4_p_0(
  MR_Word Info_5,
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * MarkHeapPointerGoal_8);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][7];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][3];




static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__add_heap_ops_scalar_common_1[0])),
    ((MR_Box) (ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[2] = {
  (MR_String) "heap_module_info",
  (MR_String) "heap_var_table"
};

static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 = {
  (MR_String) "heap_ops_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1] = { &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 };

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1] = { &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 };

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_heap_ops",
  (MR_String) "heap_ops_info",
  { ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0 },
  { ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0,

};

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
ml_backend__add_heap_ops__add_heap_ops_3_p_0(
  MR_Word ModuleInfo0_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14)
{
  MR_Word Goal0_6;
  MR_Word VarTable0_7;
  MR_Word TrailOpsInfo0_8;
  MR_Word Goal_9;
  MR_Word TrailOpsInfo_10;
  MR_Word VarTable_12;
  MR_Word STATE_VARIABLE_ProcInfo_1_15;
  MR_Word STATE_VARIABLE_ProcInfo_2_16;
  MR_Word GoalExpr0_18;
  MR_Word GoalInfo_19;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &Goal0_6);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &VarTable0_7);
  {
    TrailOpsInfo0_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TrailOpsInfo0_8, 0) = ((MR_Box) (ModuleInfo0_4));
    MR_hl_field(0, TrailOpsInfo0_8, 1) = ((MR_Box) (VarTable0_7));
  }
  GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 0))));
  GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal0_6, 1))));
  ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_18, GoalInfo_19, &Goal_9, TrailOpsInfo0_8, &TrailOpsInfo_10);
  VarTable_12 = ((MR_Word) ((MR_hl_field(0, TrailOpsInfo_10, 1))));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_9, STATE_VARIABLE_ProcInfo_0_13, &STATE_VARIABLE_ProcInfo_1_15);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_12, STATE_VARIABLE_ProcInfo_1_15, &STATE_VARIABLE_ProcInfo_2_16);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_2_16, STATE_VARIABLE_ProcInfo_14);
}

static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_8, GoalInfo_9, Goal_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InnerGoal_31 = (MR_Word) ((MR_Word) (GoalExpr0_6));
          MR_Word InnerGoalInfo_34;
          MR_Word Determinism_35;
          MR_Word NumSolns_37;
          MR_Word True_38;
          MR_Word Fail_39;
          MR_Word ThenGoal_40;
          MR_Word NewOuterGoal_41;
          MR_Word Context_126;
          MR_Word _CanFail_36;
          MR_Word next_value_of_GoalExpr0_6;

          Context_126 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
          InnerGoalInfo_34 = ((MR_Word) ((MR_hl_field(0, InnerGoal_31, 1))));
          Determinism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_34);
          parse_tree__prog_data__determinism_components_3_p_0(Determinism_35, &_CanFail_36, &NumSolns_37);
          True_38 = hlds__make_goal__true_goal_with_context_1_f_0(Context_126);
          Fail_39 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_126);
          switch (NumSolns_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              ThenGoal_40 = Fail_39;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_101;

                Var_101 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ml_backend__add_heap_ops__heap_generate_call_8_p_0(STATE_VARIABLE_Info_0_83, (MR_String) "unused", (MR_Word) ((MR_Unsigned) 0U), Var_101, (MR_Integer) 0, (MR_Integer) 0, Context_126, &ThenGoal_40);
              }
              break;
          }
          {
            NewOuterGoal_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewOuterGoal_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, NewOuterGoal_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, NewOuterGoal_41, 2) = ((MR_Box) (InnerGoal_31));
            MR_hl_field(3, NewOuterGoal_41, 3) = ((MR_Box) (ThenGoal_40));
            MR_hl_field(3, NewOuterGoal_41, 4) = ((MR_Box) (True_38));
          }
          // direct tailcall eliminated
          ;
          next_value_of_GoalExpr0_6 = NewOuterGoal_41;
          GoalExpr0_6 = next_value_of_GoalExpr0_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
          }
          *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 1))) & (MR_Integer) 1);
              MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word Goals_12;
              MR_Word GoalExpr_13;

              ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(Goals0_11, &Goals_12, STATE_VARIABLE_Info_0_83, STATE_VARIABLE_Info_84);
              {
                GoalExpr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_13, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                MR_hl_field(3, GoalExpr_13, 2) = ((MR_Box) (Goals_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word GoalExpr_124;

              if ((Disjuncts0_14 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_124 = GoalExpr0_6;
                *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
              }
              else
              {
                MR_Word FirstDisjunct0_15 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_14, 0))));
                MR_Word Context_17;
                MR_Word CodeModel_18;

                Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
                succeeded = (CodeModel_18 == (MR_Integer) 2);
                if (!(succeeded))
                  succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(FirstDisjunct0_15);
                if (succeeded)
                {
                  MR_Word SavedHeapPointerVar_19;
                  MR_Word MarkHeapPointerGoal_20;
                  MR_Word Disjuncts_21;
                  MR_Word DisjGoalExpr_22;
                  MR_Word DisjGoal_23;
                  MR_Word ConjGoalExpr_24;
                  MR_Word ConjGoal_25;
                  MR_Word Purity0_26;
                  MR_Word STATE_VARIABLE_Info_2_86;
                  MR_Word Var_88;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_94;

                  ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&SavedHeapPointerVar_19, STATE_VARIABLE_Info_0_83, &STATE_VARIABLE_Info_2_86);
                  ml_backend__add_heap_ops__gen_mark_hp_4_p_0(STATE_VARIABLE_Info_2_86, SavedHeapPointerVar_19, Context_17, &MarkHeapPointerGoal_20);
                  {
                    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_88, 0) = ((MR_Box) (SavedHeapPointerVar_19));
                  }
                  ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Disjuncts0_14, &Disjuncts_21, (MR_Integer) 0, Var_88, GoalInfo0_7, STATE_VARIABLE_Info_2_86, STATE_VARIABLE_Info_84);
                  {
                    DisjGoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, DisjGoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, DisjGoalExpr_22, 1) = ((MR_Box) (Disjuncts_21));
                  }
                  {
                    DisjGoal_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, DisjGoal_23, 0) = ((MR_Box) (DisjGoalExpr_22));
                    MR_hl_field(0, DisjGoal_23, 1) = ((MR_Box) (GoalInfo0_7));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (DisjGoal_23));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (MarkHeapPointerGoal_20));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
                  }
                  {
                    ConjGoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, ConjGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, ConjGoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(3, ConjGoalExpr_24, 2) = ((MR_Box) (Var_91));
                  }
                  {
                    ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ConjGoal_25, 0) = ((MR_Box) (ConjGoalExpr_24));
                    MR_hl_field(0, ConjGoal_25, 1) = ((MR_Box) (GoalInfo0_7));
                  }
                  Purity0_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
                  {
                    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_94, 1) = (MR_Box) ((MR_Unsigned) (Purity0_26));
                  }
                  {
                    GoalExpr_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_124, 1) = ((MR_Box) (Var_94));
                    MR_hl_field(3, GoalExpr_124, 2) = ((MR_Box) (ConjGoal_25));
                  }
                }
                else
                {
                  MR_Word Disjuncts_123;

                  ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Disjuncts0_14, &Disjuncts_123, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_7, STATE_VARIABLE_Info_0_83, STATE_VARIABLE_Info_84);
                  {
                    GoalExpr_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, GoalExpr_124, 1) = ((MR_Box) (Disjuncts_123));
                  }
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_124));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word CanFail_28 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 2))) & (MR_Integer) 1);
              MR_Word Cases0_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
              MR_Word Cases_30;
              MR_Word GoalExpr_125;

              ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(Cases0_29, &Cases_30, STATE_VARIABLE_Info_0_83, STATE_VARIABLE_Info_84);
              {
                GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (Var_27));
                MR_hl_field(3, GoalExpr_125, 2) = (MR_Box) ((MR_Unsigned) (CanFail_28));
                MR_hl_field(3, GoalExpr_125, 3) = ((MR_Box) (Cases_30));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_125));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word SubGoal0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word SubGoal_45;
              MR_Word GoalExpr_127;
              MR_Word Var_106;

              succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_42, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_106 = ((MR_Unsigned) ((MR_hl_field(3, Reason_42, 2))) & (MR_Integer) 3);
                succeeded = (Var_106 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                SubGoal_45 = SubGoal0_43;
                *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
              }
              else
                ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(SubGoal0_43, &SubGoal_45, STATE_VARIABLE_Info_0_83, STATE_VARIABLE_Info_84);
              {
                GoalExpr_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_127, 1) = ((MR_Box) (Reason_42));
                MR_hl_field(3, GoalExpr_127, 2) = ((MR_Box) (SubGoal_45));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_127));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word CondGoal0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word ThenGoal0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
              MR_Word ElseGoal0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 4))));
              MR_Word CondGoal_50;
              MR_Word ElseGoal1_51;
              MR_Word STATE_VARIABLE_Info_8_108;
              MR_Word STATE_VARIABLE_Info_9_109;
              MR_Word STATE_VARIABLE_Info_10_110;
              MR_Word GoalExpr_140;
              MR_Word ThenGoal_147;

              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(CondGoal0_47, &CondGoal_50, STATE_VARIABLE_Info_0_83, &STATE_VARIABLE_Info_8_108);
              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ThenGoal0_48, &ThenGoal_147, STATE_VARIABLE_Info_8_108, &STATE_VARIABLE_Info_9_109);
              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ElseGoal0_49, &ElseGoal1_51, STATE_VARIABLE_Info_9_109, &STATE_VARIABLE_Info_10_110);
              succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(CondGoal0_47);
              if (succeeded)
              {
                MR_Word RestoreHeapPointerGoal_52;
                MR_Word ElseGoal1Info_54;
                MR_Word ElseGoalExpr_55;
                MR_Word ElseGoal_56;
                MR_Word ITEGoalExpr_57;
                MR_Word ITEGoal_58;
                MR_Word Var_113;
                MR_Word Var_114;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_120;
                MR_Word Context_128;
                MR_Word SavedHeapPointerVar_129;
                MR_Word MarkHeapPointerGoal_130;
                MR_Word ConjGoalExpr_131;
                MR_Word ConjGoal_132;
                MR_Word Purity0_133;

                ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&SavedHeapPointerVar_129, STATE_VARIABLE_Info_10_110, STATE_VARIABLE_Info_84);
                Context_128 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_heap_ops__gen_mark_hp_4_p_0(*STATE_VARIABLE_Info_84, SavedHeapPointerVar_129, Context_128, &MarkHeapPointerGoal_130);
                ml_backend__add_heap_ops__gen_restore_hp_4_p_0(*STATE_VARIABLE_Info_84, SavedHeapPointerVar_129, Context_128, &RestoreHeapPointerGoal_52);
                ElseGoal1Info_54 = ((MR_Word) ((MR_hl_field(0, ElseGoal1_51, 1))));
                {
                  Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_114, 0) = ((MR_Box) (ElseGoal1_51));
                  MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_113, 0) = ((MR_Box) (RestoreHeapPointerGoal_52));
                  MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
                }
                {
                  ElseGoalExpr_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ElseGoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, ElseGoalExpr_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, ElseGoalExpr_55, 2) = ((MR_Box) (Var_113));
                }
                {
                  ElseGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ElseGoal_56, 0) = ((MR_Box) (ElseGoalExpr_55));
                  MR_hl_field(0, ElseGoal_56, 1) = ((MR_Box) (ElseGoal1Info_54));
                }
                {
                  ITEGoalExpr_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ITEGoalExpr_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, ITEGoalExpr_57, 1) = ((MR_Box) (Vars_46));
                  MR_hl_field(3, ITEGoalExpr_57, 2) = ((MR_Box) (CondGoal_50));
                  MR_hl_field(3, ITEGoalExpr_57, 3) = ((MR_Box) (ThenGoal_147));
                  MR_hl_field(3, ITEGoalExpr_57, 4) = ((MR_Box) (ElseGoal_56));
                }
                {
                  ITEGoal_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ITEGoal_58, 0) = ((MR_Box) (ITEGoalExpr_57));
                  MR_hl_field(0, ITEGoal_58, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_118, 0) = ((MR_Box) (ITEGoal_58));
                  MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_117, 0) = ((MR_Box) (MarkHeapPointerGoal_130));
                  MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
                }
                {
                  ConjGoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ConjGoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, ConjGoalExpr_131, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, ConjGoalExpr_131, 2) = ((MR_Box) (Var_117));
                }
                {
                  ConjGoal_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ConjGoal_132, 0) = ((MR_Box) (ConjGoalExpr_131));
                  MR_hl_field(0, ConjGoal_132, 1) = ((MR_Box) (GoalInfo0_7));
                }
                Purity0_133 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
                {
                  Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_120, 1) = (MR_Box) ((MR_Unsigned) (Purity0_133));
                }
                {
                  GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Var_120));
                  MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (ConjGoal_132));
                }
              }
              else
              {
                {
                  GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Vars_46));
                  MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (CondGoal_50));
                  MR_hl_field(3, GoalExpr_140, 3) = ((MR_Box) (ThenGoal_147));
                  MR_hl_field(3, GoalExpr_140, 4) = ((MR_Box) (ElseGoal1_51));
                }
                *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_10_110;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.add_heap_ops.goal_expr_add_heap_ops\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_1_19;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));

    ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_20, GoalInfo_21, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_1_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word MaybeSavedHeapPointerVar_4,
  MR_Word DisjGoalInfo_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal1_21;
    MR_Word GoalInfo_23;
    MR_Word Context_24;
    MR_Word Goal_27;
    MR_Word STATE_VARIABLE_Info_1_43;
    MR_Word GoalExpr0_59 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 0))));
    MR_Word GoalInfo_60 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));
    MR_Word SavedHeapPointerVar0_25;

    ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_59, GoalInfo_60, &Goal1_21, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_43);
    GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, Goal1_21, 1))));
    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
    succeeded = (IsFirstBranch_3 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeSavedHeapPointerVar_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        SavedHeapPointerVar0_25 = ((MR_Word) ((MR_hl_field(1, MaybeSavedHeapPointerVar_4, 0))));
    }
    if (succeeded)
    {
      MR_Word RestoreHeapPointerGoal_26;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word ModuleInfo_67;
      MR_Word Var_69;

      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (SavedHeapPointerVar0_25));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_63 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      ModuleInfo_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_43, 0))));
      Var_69 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_67, (MR_Integer) 0, Var_69, (MR_String) "restore_hp", (MR_Word) ((MR_Unsigned) 0U), Var_62, Var_63, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_24, &RestoreHeapPointerGoal_26);
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Goal1_21));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (RestoreHeapPointerGoal_26));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
      }
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_44, GoalInfo_23, &Goal_27);
    }
    else
      Goal_27 = Goal1_21;
    succeeded = (MaybeSavedHeapPointerVar_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(Goal_27);
      if (succeeded)
        succeeded = (Goals0_15 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word SavedHeapPointerVar_30;
      MR_Word MarkHeapPointerGoal_31;
      MR_Word Goals1_32;
      MR_Word InnerDisjGoalExpr_33;
      MR_Word InnerDisjGoal_34;
      MR_Word ConjGoalExpr_35;
      MR_Word ConjGoal_36;
      MR_Word Purity_37;
      MR_Word ScopeGoalExpr_38;
      MR_Word ScopeGoal_39;
      MR_Word STATE_VARIABLE_Info_2_47;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_75;
      MR_Word VarTable0_77;
      MR_Word Entry_78;
      MR_Word VarTable_79;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word ModuleInfo_89;
      MR_Word Var_91;
      MR_Word Var_81;

      Var_75 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
      VarTable0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_43, 1))));
      {
        Entry_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entry_78, 0) = ((MR_Box) ((MR_String) "HeapPointer"));
        MR_hl_field(0, Entry_78, 1) = ((MR_Box) (Var_75));
        MR_hl_field(0, Entry_78, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      parse_tree__var_table__add_var_entry_4_p_0(Entry_78, &SavedHeapPointerVar_30, VarTable0_77, &VarTable_79);
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_43, 0))));
      {
        STATE_VARIABLE_Info_2_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_2_47, 0) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_Info_2_47, 1) = ((MR_Box) (VarTable_79));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (SavedHeapPointerVar_30));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_85 = hlds__instmap__instmap_delta_bind_var_1_f_0(SavedHeapPointerVar_30);
      ModuleInfo_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_47, 0))));
      Var_91 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_89, (MR_Integer) 0, Var_91, (MR_String) "mark_hp", (MR_Word) ((MR_Unsigned) 0U), Var_84, Var_85, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_24, &MarkHeapPointerGoal_31);
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (SavedHeapPointerVar_30));
      }
      ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Goals0_15, &Goals1_32, (MR_Integer) 1, Var_49, DisjGoalInfo_5, STATE_VARIABLE_Info_2_47, STATE_VARIABLE_Info_7);
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Goals1_32));
      }
      {
        InnerDisjGoalExpr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, InnerDisjGoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, InnerDisjGoalExpr_33, 1) = ((MR_Box) (Var_51));
      }
      {
        InnerDisjGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InnerDisjGoal_34, 0) = ((MR_Box) (InnerDisjGoalExpr_33));
        MR_hl_field(0, InnerDisjGoal_34, 1) = ((MR_Box) (DisjGoalInfo_5));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (InnerDisjGoal_34));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MarkHeapPointerGoal_31));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
      }
      {
        ConjGoalExpr_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConjGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConjGoalExpr_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, ConjGoalExpr_35, 2) = ((MR_Box) (Var_53));
      }
      {
        ConjGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjGoal_36, 0) = ((MR_Box) (ConjGoalExpr_35));
        MR_hl_field(0, ConjGoal_36, 1) = ((MR_Box) (DisjGoalInfo_5));
      }
      Purity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(DisjGoalInfo_5);
      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_56, 1) = (MR_Box) ((MR_Unsigned) (Purity_37));
      }
      {
        ScopeGoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ScopeGoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, ScopeGoalExpr_38, 1) = ((MR_Box) (Var_56));
        MR_hl_field(3, ScopeGoalExpr_38, 2) = ((MR_Box) (ConjGoal_36));
      }
      {
        ScopeGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ScopeGoal_39, 0) = ((MR_Box) (ScopeGoalExpr_38));
        MR_hl_field(0, ScopeGoal_39, 1) = ((MR_Box) (DisjGoalInfo_5));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ScopeGoal_39));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Goals_40;

      ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Goals0_15, &Goals_40, (MR_Integer) 1, MaybeSavedHeapPointerVar_4, DisjGoalInfo_5, STATE_VARIABLE_Info_1_43, STATE_VARIABLE_Info_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_40));
      }
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16)
{
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
  MR_Word Var_19;

  Var_19 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_17, (MR_Integer) 0, Var_19, PredName_10, (MR_Word) ((MR_Unsigned) 0U), ArgVars_11, InstMapDelta_12, (MR_Word) ((MR_Unsigned) 0U), Detism_13, Purity_14, (MR_Word) ((MR_Unsigned) 0U), Context_15, CallGoal_16);
}

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9;
  MR_Word VarTable0_11;
  MR_Word Entry_12;
  MR_Word VarTable_13;
  MR_Word Var_15;

  Var_9 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
  VarTable0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) ((MR_String) "HeapPointer"));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_4, VarTable0_11, &VarTable_13);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_13));
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_4_p_0(
  MR_Word Info_5,
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * RestoreHeapPointerGoal_8)
{
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word ModuleInfo_15;
  MR_Word Var_17;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (SavedHeapPointerVar_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_11 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
  Var_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_15, (MR_Integer) 0, Var_17, (MR_String) "restore_hp", (MR_Word) ((MR_Unsigned) 0U), Var_10, Var_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_7, RestoreHeapPointerGoal_8);
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_4_p_0(
  MR_Word Info_5,
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * MarkHeapPointerGoal_8)
{
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word ModuleInfo_15;
  MR_Word Var_17;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (SavedHeapPointerVar_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_11 = hlds__instmap__instmap_delta_bind_var_1_f_0(SavedHeapPointerVar_6);
  ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
  Var_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_15, (MR_Integer) 0, Var_17, (MR_String) "mark_hp", (MR_Word) ((MR_Unsigned) 0U), Var_10, Var_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_7, MarkHeapPointerGoal_8);
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;
  MR_Word conv0_STATE_VARIABLE_Info_11;

  ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Box conv2_STATE_VARIABLE_Info_9;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0), (MR_Word) (&ml_backend__add_heap_ops_scalar_common_2[0]), Goals0_5, Goals_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
}

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__add_heap_ops__init(void)
{
}

void mercury__ml_backend__add_heap_ops__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0);
}

void mercury__ml_backend__add_heap_ops__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__add_heap_ops__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.add_heap_ops.
