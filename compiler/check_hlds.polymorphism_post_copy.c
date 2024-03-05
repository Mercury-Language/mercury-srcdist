/*
** Automatically generated from `polymorphism_post_copy.m'
** by the Mercury compiler,
** version rotd-2024-03-05
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


// :- module check_hlds.polymorphism_post_copy.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_post_copy__init
ENDINIT
*/

#include "check_hlds.polymorphism_post_copy.mih"


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
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_body_5_p_0(
  MR_Word ClassMethodInfo_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_49,
  MR_Integer * STATE_VARIABLE_ProcNum_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52);

static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__polymorphism_post_copy__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4);

static void MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_2[2][6];

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_5[1][8];




static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_2[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_post_copy_scalar_common_2[0])),
    ((MR_Box) (check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_post_copy_scalar_common_2[1])),
    ((MR_Box) (check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_post_copy_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_post_copy_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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


static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_body_5_p_0(
  MR_Word ClassMethodInfo_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_49,
  MR_Integer * STATE_VARIABLE_ProcNum_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  MR_bool succeeded;
  MR_Word ClassProc_12 = ((MR_Word) ((MR_hl_field(0, ClassMethodInfo_6, (MR_Integer) 3))));
  MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, ClassProc_12, (MR_Integer) 0))));
  MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(0, ClassProc_12, (MR_Integer) 1))));
  MR_Word PredInfo0_15;
  MR_Word ProcTable0_16;
  MR_Word ProcInfo0_17;
  MR_Box conv0_ProcInfo0_17;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_51, PredId_13, &PredInfo0_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_15, &ProcTable0_16);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_16, ((MR_Box) (ProcId_14)), &conv0_ProcInfo0_17);
  if (succeeded)
  {
    ProcInfo0_17 = ((MR_Word) (conv0_ProcInfo0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ClassContext_18;
    MR_Word InstanceConstraint_22;
    MR_Word RttiVarMaps_23;
    MR_Word TypeClassInfoVar_24;
    MR_Word HeadVars0_25;
    MR_Word Modes0_26;
    MR_Word MaybeDetism0_27;
    MR_Word Detism_28;
    MR_Word HeadVars_32;
    MR_Word Modes_33;
    MR_Word ClassName_34;
    MR_Word InstanceArgs_35;
    MR_Integer InstanceArity_36;
    MR_Word PFSymNameArity_37;
    MR_Word BodyGoalExpr_38;
    MR_Word NonLocals_39;
    MR_Word InstmapDelta_40;
    MR_Word Purity_41;
    MR_Word Context_42;
    MR_Word GoalInfo_43;
    MR_Word BodyGoal_44;
    MR_Word ProcInfo_45;
    MR_Word ProcTable_46;
    MR_Word PredInfo1_47;
    MR_Word PredInfo_48;
    MR_Word STATE_VARIABLE_ModuleInfo_56_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Head_19;
    MR_Word Var_53;
    MR_Word HeadVarsPrime_30;
    MR_Word ModesPrime_31;
    MR_Word TypeCtorInfo_71_71;
    MR_Integer N_29;

    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_15, &ClassContext_18);
    Var_53 = ((MR_Word) ((MR_hl_field(0, ClassContext_18, (MR_Integer) 0))));
    succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Head_19 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
      InstanceConstraint_22 = Head_19;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_post_copy.expand_class_method_body\'/5", (MR_String) "class method is not constrained");
        return;
      }
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_17, &RttiVarMaps_23);
    hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_23, InstanceConstraint_22, &TypeClassInfoVar_24);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_17, &HeadVars0_25);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_17, &Modes0_26);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_17, &MaybeDetism0_27);
    if ((MaybeDetism0_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Detism_28 = (MR_Integer) 3;
      hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_13, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_56_56);
    }
    else
    {
      Detism_28 = ((MR_Word) ((MR_hl_field(1, MaybeDetism0_27, (MR_Integer) 0))));
      STATE_VARIABLE_ModuleInfo_56_56 = STATE_VARIABLE_ModuleInfo_0_51;
    }
    succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&check_hlds__polymorphism_post_copy_scalar_common_1[0]), HeadVars0_25, ((MR_Box) (TypeClassInfoVar_24)), &N_29);
    if (succeeded)
    {
      succeeded = mercury__list__delete_nth_3_p_0((MR_Word) (&check_hlds__polymorphism_post_copy_scalar_common_1[0]), HeadVars0_25, N_29, &HeadVarsPrime_30);
      if (succeeded)
      {
        TypeCtorInfo_71_71 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        succeeded = mercury__list__delete_nth_3_p_0(TypeCtorInfo_71_71, Modes0_26, N_29, &ModesPrime_31);
      }
    }
    if (succeeded)
    {
      HeadVars_32 = HeadVarsPrime_30;
      Modes_33 = ModesPrime_31;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism_post_copy.expand_class_method_body\'/5", (MR_String) "typeclass_info var not found");
        return;
      }
    ClassName_34 = ((MR_Word) ((MR_hl_field(0, InstanceConstraint_22, (MR_Integer) 0))));
    InstanceArgs_35 = ((MR_Word) ((MR_hl_field(0, InstanceConstraint_22, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InstanceArgs_35, &InstanceArity_36);
    hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo0_15, &PFSymNameArity_37);
    Var_60 = (MR_Word) (STATE_VARIABLE_ProcNum_0_49);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (ClassName_34));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (InstanceArity_36));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (TypeClassInfoVar_24));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 2) = ((MR_Box) (Var_61));
      MR_hl_field(1, Var_59, 3) = ((MR_Box) (PFSymNameArity_37));
    }
    {
      BodyGoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BodyGoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BodyGoalExpr_38, 1) = ((MR_Box) (Var_59));
      MR_hl_field(3, BodyGoalExpr_38, 2) = ((MR_Box) (HeadVars_32));
      MR_hl_field(3, BodyGoalExpr_38, 3) = ((MR_Box) (Modes_33));
      MR_hl_field(3, BodyGoalExpr_38, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BodyGoalExpr_38, 5) = (MR_Box) ((MR_Unsigned) (Detism_28));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_25, &NonLocals_39);
    hlds__instmap__instmap_delta_from_mode_list_4_p_0(STATE_VARIABLE_ModuleInfo_56_56, HeadVars0_25, Modes0_26, &InstmapDelta_40);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_15, &Purity_41);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_15, &Context_42);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_39, InstmapDelta_40, Detism_28, Purity_41, Context_42, &GoalInfo_43);
    {
      BodyGoal_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BodyGoal_44, 0) = ((MR_Box) (BodyGoalExpr_38));
      MR_hl_field(0, BodyGoal_44, 1) = ((MR_Box) (GoalInfo_43));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(BodyGoal_44, ProcInfo0_17, &ProcInfo_45);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_14)), ((MR_Box) (ProcInfo_45)), ProcTable0_16, &ProcTable_46);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_46, PredInfo0_15, &PredInfo1_47);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo1_47);
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), PredInfo1_47, &PredInfo_48);
    else
      PredInfo_48 = PredInfo1_47;
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, PredInfo_48, STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_ModuleInfo_52);
  }
  else
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
  *STATE_VARIABLE_ProcNum_50 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ProcNum_0_49 + (MR_Unsigned) 1);
}

static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_ProcNum_50;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_52;

  check_hlds__polymorphism_post_copy__expand_class_method_body_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcNum_50, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_52);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcNum_50));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_52));
}

static void MR_CALL 
check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word MethodInfos_6 = ((MR_Word) ((MR_hl_field(0, ClassDefn_4, (MR_Integer) 8))));
  MR_Box conv3_Var_7;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_9;

  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_post_copy_scalar_common_3[2]), MethodInfos_6, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv2_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_post_copy__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, ClassId_4, (MR_Integer) 0))));
  MR_Word Var_8;

  succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, Var_8);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_9;

  check_hlds__polymorphism_post_copy__expand_class_method_bodies_in_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_9));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_post_copy__class_id_is_from_given_module_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0(
  MR_Word ExistsCastPredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_bool succeeded;
  MR_Word ClassMap_6;
  MR_Word ModuleName_7;
  MR_Word ClassIds0_8;
  MR_Word Globals_9;
  MR_Word OptTuple_10;
  MR_Word UserTypeSpec_11;
  MR_Word ClassIds_12;
  MR_Word ClassDefns_13;
  MR_Word STATE_VARIABLE_ModuleInfo_17_17;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_17_17;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;

  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_post_copy_scalar_common_3[0]), ExistsCastPredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv1_STATE_VARIABLE_ModuleInfo_17_17);
  STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_17_17));
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &ClassMap_6);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &ModuleName_7);
  mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassMap_6, &ClassIds0_8);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &Globals_9);
  libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_10);
  UserTypeSpec_11 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (UserTypeSpec_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__polymorphism_post_copy_scalar_common_4[0]));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0_2));
          MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleName_7));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Var_18, ClassIds0_8, &ClassIds_12);
      }
      break;
    case (MR_Integer) 0:
      ClassIds_12 = ClassIds0_8;
      break;
  }
  mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassIds_12, ClassMap_6, &ClassDefns_13);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_post_copy_scalar_common_3[1]), ClassDefns_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_17_17)), &conv3_STATE_VARIABLE_ModuleInfo_15);
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
}

void mercury__check_hlds__polymorphism_post_copy__init(void)
{
}

void mercury__check_hlds__polymorphism_post_copy__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism_post_copy__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_post_copy__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_post_copy.
