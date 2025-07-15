/*
** Automatically generated from `introduce_exists_casts.m'
** by the Mercury compiler,
** version rotd-2025-07-15
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


// :- module check_hlds.introduce_exists_casts.
// :- implementation.

/*
INIT mercury__check_hlds__introduce_exists_casts__init
ENDINIT
*/

#include "check_hlds.introduce_exists_casts.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
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
#include "int.mih"
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
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static void MR_CALL 
check_hlds__introduce_exists_casts__maybe_introduce_exists_casts_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_14,
  MR_Word * STATE_VARIABLE_PredTable_15);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_procs_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Procs_0_4,
  MR_Word * STATE_VARIABLE_Procs_5);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * STATE_VARIABLE_ProcInfo_46);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_extra_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_8,
  MR_Word * STATE_VARIABLE_RttiVarMaps_9,
  MR_Word STATE_VARIABLE_ExtraGoals_0_10,
  MR_Word * STATE_VARIABLE_ExtraGoals_11);

static void MR_CALL 
check_hlds__introduce_exists_casts__maybe_add_type_info_locns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Integer Num_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Subn_12,
  MR_Word ArgTypes_13,
  MR_Word ArgModes_14,
  MR_Word STATE_VARIABLE_HeadVars_0_26,
  MR_Word * STATE_VARIABLE_HeadVars_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word STATE_VARIABLE_ExtraGoals_0_30,
  MR_Word * STATE_VARIABLE_ExtraGoals_31);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_1[1][3];

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_2[2][2];

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_3[2][7];




static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static void MR_CALL 
check_hlds__introduce_exists_casts__maybe_introduce_exists_casts_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_14,
  MR_Word * STATE_VARIABLE_PredTable_15)
{
  MR_bool succeeded;
  MR_Word PredInfo0_8;
  MR_Box conv0_PredInfo0_8;
  MR_Word Subn_9;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_14, ((MR_Box) (PredId_6)), &conv0_PredInfo0_8);
  PredInfo0_8 = ((MR_Word) (conv0_PredInfo0_8));
  hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(PredInfo0_8, &Subn_9);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subn_9);
  succeeded = !(succeeded);
  if (succeeded)
    succeeded = check_hlds__clause_to_proc__should_copy_clauses_to_procs_1_p_0(PredInfo0_8);
  if (succeeded)
  {
    MR_Word Procs0_10;
    MR_Word ProcIds_11;
    MR_Word Procs_12;
    MR_Word PredInfo_13;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &Procs0_10);
    ProcIds_11 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo0_8);
    check_hlds__introduce_exists_casts__introduce_exists_casts_procs_5_p_0(ModuleInfo_5, PredInfo0_8, ProcIds_11, Procs0_10, &Procs_12);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_12, PredInfo0_8, &PredInfo_13);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_13)), STATE_VARIABLE_PredTable_0_14, STATE_VARIABLE_PredTable_15);
  }
  else
    *STATE_VARIABLE_PredTable_15 = STATE_VARIABLE_PredTable_0_14;
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_procs_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Procs_0_4,
  MR_Word * STATE_VARIABLE_Procs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Procs_5 = STATE_VARIABLE_Procs_0_4;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ProcInfo0_16;
      MR_Word ProcInfo_17;
      MR_Word STATE_VARIABLE_Procs_1_20;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Procs_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_4, ((MR_Box) (ProcId_13)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(ModuleInfo_1, PredInfo_2, ProcInfo0_16, &ProcInfo_17);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_Procs_0_4, &STATE_VARIABLE_Procs_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_Procs_0_4 = STATE_VARIABLE_Procs_1_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Procs_0_4 = next_value_of_STATE_VARIABLE_Procs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_45,
  MR_Word * STATE_VARIABLE_ProcInfo_46)
{
  MR_bool succeeded;
  MR_Word ArgTypes_8;
  MR_Word Subn_9;
  MR_Word PredConstraints_10;
  MR_Integer PredFormArityInt_11;
  MR_Integer NumExtraHeadVars_12;
  MR_Word VarTable0_13;
  MR_Word HeadVars0_14;
  MR_Word Body0_15;
  MR_Word RttiVarMaps0_16;
  MR_Word ArgModes_17;
  MR_Word OrigArgTypes_23;
  MR_Word ExtraHeadVars1_24;
  MR_Word OrigHeadVars1_25;
  MR_Word ExtraArgModes_26;
  MR_Word OrigArgModes_27;
  MR_Word OrigHeadVars_28;
  MR_Word VarTable1_29;
  MR_Word ExistsCastHeadGoals_30;
  MR_Word ExistConstraints_31;
  MR_Word ExtraModesAndVars_32;
  MR_Word ExtraHeadVars_33;
  MR_Word VarTable_34;
  MR_Word RttiVarMaps_35;
  MR_Word ExistsCastExtraGoals_36;
  MR_Word GoalInfo0_38;
  MR_Word Goals0_39;
  MR_Word Goals_40;
  MR_Word HeadVars_41;
  MR_Word NonLocals_42;
  MR_Word GoalInfo_43;
  MR_Word Body_44;
  MR_Word Var_47;
  MR_Integer Var_48;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word OrigArgTypes0_18;
  MR_Word ExtraHeadVars0_19;
  MR_Word OrigHeadVars0_20;
  MR_Word ExtraArgModes0_21;
  MR_Word OrigArgModes0_22;
  MR_Word TypeInfo_58_58;
  MR_Word TypeCtorInfo_59_59;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &ArgTypes_8);
  hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(PredInfo_6, &Subn_9);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &PredConstraints_10);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_6, &Var_47);
  PredFormArityInt_11 = (MR_Integer) (Var_47);
  Var_48 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8);
  NumExtraHeadVars_12 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) PredFormArityInt_11);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_45, &VarTable0_13);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_45, &HeadVars0_14);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_45, &Body0_15);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_45, &RttiVarMaps0_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_45, &ArgModes_17);
  succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumExtraHeadVars_12, ArgTypes_8, &OrigArgTypes0_18);
  if (succeeded)
  {
    TypeInfo_58_58 = (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]);
    succeeded = mercury__list__split_list_4_p_0(TypeInfo_58_58, NumExtraHeadVars_12, HeadVars0_14, &ExtraHeadVars0_19, &OrigHeadVars0_20);
    if (succeeded)
    {
      TypeCtorInfo_59_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
      succeeded = mercury__list__split_list_4_p_0(TypeCtorInfo_59_59, NumExtraHeadVars_12, ArgModes_17, &ExtraArgModes0_21, &OrigArgModes0_22);
    }
  }
  if (succeeded)
  {
    OrigArgTypes_23 = OrigArgTypes0_18;
    ExtraHeadVars1_24 = ExtraHeadVars0_19;
    OrigHeadVars1_25 = OrigHeadVars0_20;
    ExtraArgModes_26 = ExtraArgModes0_21;
    OrigArgModes_27 = OrigArgModes0_22;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
      return;
    }
  check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_10_p_0(ModuleInfo_5, Subn_9, OrigArgTypes_23, OrigArgModes_27, OrigHeadVars1_25, &OrigHeadVars_28, VarTable0_13, &VarTable1_29, (MR_Word) ((MR_Unsigned) 0U), &ExistsCastHeadGoals_30);
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(0, PredConstraints_10, 1))));
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]), ExtraArgModes_26, ExtraHeadVars1_24, &ExtraModesAndVars_32);
  check_hlds__introduce_exists_casts__introduce_exists_casts_extra_11_p_0(ModuleInfo_5, Subn_9, ExistConstraints_31, ExtraModesAndVars_32, &ExtraHeadVars_33, VarTable1_29, &VarTable_34, RttiVarMaps0_16, &RttiVarMaps_35, (MR_Word) ((MR_Unsigned) 0U), &ExistsCastExtraGoals_36);
  GoalInfo0_38 = ((MR_Word) ((MR_hl_field(0, Body0_15, 1))));
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Body0_15, &Goals0_39);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExistsCastHeadGoals_30, ExistsCastExtraGoals_36);
  Goals_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_39, Var_53);
  HeadVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]), ExtraHeadVars_33, OrigHeadVars_28);
  NonLocals_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_41);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_42, GoalInfo0_38, &GoalInfo_43);
  {
    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_54, 2) = ((MR_Box) (Goals_40));
  }
  {
    Body_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Body_44, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, Body_44, 1) = ((MR_Box) (GoalInfo_43));
  }
  hlds__hlds_pred__proc_info_set_body_6_p_0(VarTable_34, HeadVars_41, Body_44, RttiVarMaps_35, STATE_VARIABLE_ProcInfo_0_45, STATE_VARIABLE_ProcInfo_46);
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_extra_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_8,
  MR_Word * STATE_VARIABLE_RttiVarMaps_9,
  MR_Word STATE_VARIABLE_ExtraGoals_0_10,
  MR_Word * STATE_VARIABLE_ExtraGoals_11)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/11", (MR_String) "length mismatch");
        return;
      }
    *STATE_VARIABLE_ExtraGoals_11 = STATE_VARIABLE_ExtraGoals_0_10;
    *STATE_VARIABLE_RttiVarMaps_9 = STATE_VARIABLE_RttiVarMaps_0_8;
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word ModeAndVar_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word ModesAndVars_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_33;
    MR_Word Vars_34;
    MR_Word ArgMode_38 = ((MR_Word) ((MR_hl_field(0, ModeAndVar_31, 0))));
    MR_Word Var0_39 = ((MR_Word) ((MR_hl_field(0, ModeAndVar_31, 1))));
    MR_Word ExistConstraints_44;
    MR_Word STATE_VARIABLE_VarTable_1_55;
    MR_Word STATE_VARIABLE_ExtraGoals_1_58;
    MR_Word STATE_VARIABLE_RttiVarMaps_2_60;

    succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, ArgMode_38);
    if (succeeded)
    {
      MR_Word ExtraGoal_40;
      MR_Word VarInfo_41;
      MR_Word Var_57;
      MR_Word OldVarEntry_68;
      MR_String OldName_69;
      MR_Word OldType_70;
      MR_Word OldTypeIsDummy_71;
      MR_String CloneName_72;
      MR_Word CloneVarEntry_73;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_6, Var0_39, &OldVarEntry_68);
      OldName_69 = ((MR_String) ((MR_hl_field(0, OldVarEntry_68, 0))));
      OldType_70 = ((MR_Word) ((MR_hl_field(0, OldVarEntry_68, 1))));
      OldTypeIsDummy_71 = ((MR_Unsigned) ((MR_hl_field(0, OldVarEntry_68, 2))) & (MR_Integer) 1);
      CloneName_72 = mercury__string__f_43_43_2_f_0((MR_String) "ExistQ", OldName_69);
      {
        CloneVarEntry_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CloneVarEntry_73, 0) = ((MR_Box) (CloneName_72));
        MR_hl_field(0, CloneVarEntry_73, 1) = ((MR_Box) (OldType_70));
        MR_hl_field(0, CloneVarEntry_73, 2) = (MR_Box) ((MR_Unsigned) (OldTypeIsDummy_71));
      }
      parse_tree__var_table__add_var_entry_4_p_0(CloneVarEntry_73, &Var_33, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_1_55);
      Var_57 = mercury__term_context__dummy_context_0_f_0();
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, Var0_39, Var_33, Var_57, &ExtraGoal_40);
      {
        STATE_VARIABLE_ExtraGoals_1_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ExtraGoals_1_58, 0) = ((MR_Box) (ExtraGoal_40));
        MR_hl_field(1, STATE_VARIABLE_ExtraGoals_1_58, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_10));
      }
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(STATE_VARIABLE_RttiVarMaps_0_8, Var0_39, &VarInfo_41);
      switch (MR_tag((MR_Word) VarInfo_41)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/11", (MR_String) "rtti_varmaps info not found");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfoType0_42 = ((MR_Word) ((MR_hl_field(1, VarInfo_41, 0))));
            MR_Word TypeInfoType_43;
            MR_Word STATE_VARIABLE_RttiVarMaps_1_59;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_2, TypeInfoType0_42, &TypeInfoType_43);
            hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(Var0_39, TypeInfoType_43, STATE_VARIABLE_RttiVarMaps_0_8, &STATE_VARIABLE_RttiVarMaps_1_59);
            hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_33, TypeInfoType0_42, STATE_VARIABLE_RttiVarMaps_1_59, &STATE_VARIABLE_RttiVarMaps_2_60);
            ExistConstraints_44 = HeadVar__3_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExistConstraint_46;
            MR_Word ConstraintArgs_48;
            MR_Word STATE_VARIABLE_RttiVarMaps_3_63;

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/11", (MR_String) "missing constraint");
                return;
              }
            else
            {
              ExistConstraint_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              ExistConstraints_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
            }
            hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(ExistConstraint_46, Var_33, STATE_VARIABLE_RttiVarMaps_0_8, &STATE_VARIABLE_RttiVarMaps_3_63);
            ConstraintArgs_48 = ((MR_Word) ((MR_hl_field(0, ExistConstraint_46, 1))));
            check_hlds__introduce_exists_casts__maybe_add_type_info_locns_5_p_0(ConstraintArgs_48, Var_33, (MR_Integer) 1, STATE_VARIABLE_RttiVarMaps_3_63, &STATE_VARIABLE_RttiVarMaps_2_60);
          }
          break;
      }
    }
    else
    {
      Var_33 = Var0_39;
      ExistConstraints_44 = HeadVar__3_3;
      STATE_VARIABLE_ExtraGoals_1_58 = STATE_VARIABLE_ExtraGoals_0_10;
      STATE_VARIABLE_RttiVarMaps_2_60 = STATE_VARIABLE_RttiVarMaps_0_8;
      STATE_VARIABLE_VarTable_1_55 = STATE_VARIABLE_VarTable_0_6;
    }
    check_hlds__introduce_exists_casts__introduce_exists_casts_extra_11_p_0(ModuleInfo_1, Subn_2, ExistConstraints_44, ModesAndVars_32, &Vars_34, STATE_VARIABLE_VarTable_1_55, STATE_VARIABLE_VarTable_7, STATE_VARIABLE_RttiVarMaps_2_60, STATE_VARIABLE_RttiVarMaps_9, STATE_VARIABLE_ExtraGoals_1_58, STATE_VARIABLE_ExtraGoals_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_34));
    }
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__maybe_add_type_info_locns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Integer Num_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RttiVarMaps_5 = STATE_VARIABLE_RttiVarMaps_0_4;
    else
    {
      MR_Word ArgType_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RttiVarMaps_1_22;
      MR_Integer Var_23;
      MR_Word TVar_16;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Num_3;
      MR_Word next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;

      succeeded = ((MR_tag((MR_Word) ArgType_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        TVar_16 = ((MR_Word) ((MR_hl_field(0, ArgType_11, 0))));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_4, TVar_16, &Var_18);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Locn_19;

        {
          Locn_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Locn_19, 0) = ((MR_Box) (Var_2));
          MR_hl_field(1, Locn_19, 1) = ((MR_Box) (Num_3));
        }
        hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TVar_16, Locn_19, STATE_VARIABLE_RttiVarMaps_0_4, &STATE_VARIABLE_RttiVarMaps_1_22);
      }
      else
        STATE_VARIABLE_RttiVarMaps_1_22 = STATE_VARIABLE_RttiVarMaps_0_4;
      Var_23 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgTypes_12;
      next_value_of_Num_3 = Var_23;
      next_value_of_STATE_VARIABLE_RttiVarMaps_0_4 = STATE_VARIABLE_RttiVarMaps_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Num_3 = next_value_of_Num_3;
      STATE_VARIABLE_RttiVarMaps_0_4 = next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Subn_12,
  MR_Word ArgTypes_13,
  MR_Word ArgModes_14,
  MR_Word STATE_VARIABLE_HeadVars_0_26,
  MR_Word * STATE_VARIABLE_HeadVars_27,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29,
  MR_Word STATE_VARIABLE_ExtraGoals_0_30,
  MR_Word * STATE_VARIABLE_ExtraGoals_31)
{
  MR_bool succeeded = (ArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (ArgModes_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (STATE_VARIABLE_HeadVars_0_26 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *STATE_VARIABLE_ExtraGoals_31 = STATE_VARIABLE_ExtraGoals_0_30;
    *STATE_VARIABLE_VarTable_29 = STATE_VARIABLE_VarTable_0_28;
    *STATE_VARIABLE_HeadVars_27 = STATE_VARIABLE_HeadVars_0_26;
  }
  else
  {
    MR_Word ArgType_18;
    MR_Word ArgTypesRest_19;
    MR_Word ArgMode_20;
    MR_Word ArgModesRest_21;
    MR_Word HeadVar0_22;
    MR_Word HeadVarsRest0_23;

    succeeded = (ArgTypes_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgType_18 = ((MR_Word) ((MR_hl_field(1, ArgTypes_13, 0))));
      ArgTypesRest_19 = ((MR_Word) ((MR_hl_field(1, ArgTypes_13, 1))));
      succeeded = (ArgModes_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgMode_20 = ((MR_Word) ((MR_hl_field(1, ArgModes_14, 0))));
        ArgModesRest_21 = ((MR_Word) ((MR_hl_field(1, ArgModes_14, 1))));
        succeeded = (STATE_VARIABLE_HeadVars_0_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadVar0_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_HeadVars_0_26, 0))));
          HeadVarsRest0_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_HeadVars_0_26, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadVarsRest_24;
      MR_Word HeadVar_25;
      MR_Word STATE_VARIABLE_VarTable_1_32;
      MR_Word STATE_VARIABLE_ExtraGoals_1_33;
      MR_Word InternalType_39;

      check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_10_p_0(ModuleInfo_11, Subn_12, ArgTypesRest_19, ArgModesRest_21, HeadVarsRest0_23, &HeadVarsRest_24, STATE_VARIABLE_VarTable_0_28, &STATE_VARIABLE_VarTable_1_32, STATE_VARIABLE_ExtraGoals_0_30, &STATE_VARIABLE_ExtraGoals_1_33);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_12, ArgType_18, &InternalType_39);
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InternalType_39, ArgType_18);
      if (succeeded)
      {
        HeadVar_25 = HeadVar0_22;
        *STATE_VARIABLE_ExtraGoals_31 = STATE_VARIABLE_ExtraGoals_1_33;
        *STATE_VARIABLE_VarTable_29 = STATE_VARIABLE_VarTable_1_32;
      }
      else
      {
        MR_Word Inst_41;
        MR_Word ExtraGoal_42;
        MR_Word Var_45;
        MR_Word InternalTypeIsDummy_47;
        MR_Word ExternalTypeIsDummy_48;
        MR_Word InternalVarEntry0_49;
        MR_String InternalName_50;
        MR_Word InternalVarEntry_53;
        MR_String ExternalName_54;
        MR_Word ExternalVarEntry_55;
        MR_Word STATE_VARIABLE_VarTable_1_57;
        MR_Word Var_40;

        InternalTypeIsDummy_47 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_11, InternalType_39);
        ExternalTypeIsDummy_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_11, ArgType_18);
        parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_1_32, HeadVar0_22, &InternalVarEntry0_49);
        InternalName_50 = ((MR_String) ((MR_hl_field(0, InternalVarEntry0_49, 0))));
        {
          InternalVarEntry_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InternalVarEntry_53, 0) = ((MR_Box) (InternalName_50));
          MR_hl_field(0, InternalVarEntry_53, 1) = ((MR_Box) (InternalType_39));
          MR_hl_field(0, InternalVarEntry_53, 2) = (MR_Box) ((MR_Unsigned) (InternalTypeIsDummy_47));
        }
        ExternalName_54 = mercury__string__f_43_43_2_f_0((MR_String) "ExistQ", InternalName_50);
        {
          ExternalVarEntry_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ExternalVarEntry_55, 0) = ((MR_Box) (ExternalName_54));
          MR_hl_field(0, ExternalVarEntry_55, 1) = ((MR_Box) (ArgType_18));
          MR_hl_field(0, ExternalVarEntry_55, 2) = (MR_Box) ((MR_Unsigned) (ExternalTypeIsDummy_48));
        }
        parse_tree__var_table__update_var_entry_4_p_0(HeadVar0_22, InternalVarEntry_53, STATE_VARIABLE_VarTable_1_32, &STATE_VARIABLE_VarTable_1_57);
        parse_tree__var_table__add_var_entry_4_p_0(ExternalVarEntry_55, &HeadVar_25, STATE_VARIABLE_VarTable_1_57, STATE_VARIABLE_VarTable_29);
        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_11, ArgMode_20, &Var_40, &Inst_41);
        Var_45 = mercury__term_context__dummy_context_0_f_0();
        hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, HeadVar0_22, HeadVar_25, Inst_41, Inst_41, Var_45, &ExtraGoal_42);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ExtraGoals_31 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ExtraGoal_42));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_1_33));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_HeadVars_27 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (HeadVarsRest_24));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_for_head\'/10", (MR_String) "length mismatch");
        return;
      }
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_46;

  check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_46);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_46));
}

void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word PredInfo0_6;
  MR_Word ProcMap0_7;
  MR_Word ProcMap_8;
  MR_Word PredInfo_9;
  MR_Word Var_12;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_10, PredId_4, &PredInfo0_6);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &ProcMap0_7);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__introduce_exists_casts_scalar_common_3[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredInfo0_6));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_12, ProcMap0_7, &ProcMap_8);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_8, PredInfo0_6, &PredInfo_9);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredTable_15;

  check_hlds__introduce_exists_casts__maybe_introduce_exists_casts_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredTable_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_15));
}

void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredIdTable0_6;
  MR_Word PredIdTable_7;
  MR_Word Var_10;
  MR_Box conv1_PredIdTable_7;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIdTable0_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&check_hlds__introduce_exists_casts_scalar_common_3[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_1[0]), Var_10, PredIds_4, ((MR_Box) (PredIdTable0_6)), &conv1_PredIdTable_7);
  PredIdTable_7 = ((MR_Word) (conv1_PredIdTable_7));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

void mercury__check_hlds__introduce_exists_casts__init(void)
{
}

void mercury__check_hlds__introduce_exists_casts__init_type_tables(void)
{
}

void mercury__check_hlds__introduce_exists_casts__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__introduce_exists_casts__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.introduce_exists_casts.
