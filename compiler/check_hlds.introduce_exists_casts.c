/*
** Automatically generated from `introduce_exists_casts.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-29
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_extra_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11,
  MR_Word STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * STATE_VARIABLE_ExtraGoals_13);

static void MR_CALL 
check_hlds__introduce_exists_casts__maybe_add_type_info_locns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Integer Num_3,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_4,
  MR_Word * STATE_VARIABLE_RttiVarMaps_5);

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Subn_14,
  MR_Word ArgTypes_15,
  MR_Word ArgModes_16,
  MR_Word STATE_VARIABLE_HeadVars_0_29,
  MR_Word * STATE_VARIABLE_HeadVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * STATE_VARIABLE_ExtraGoals_36);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__introduce_exists_casts_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__introduce_exists_casts__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
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
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ProcInfo0_16;
      MR_Word ProcInfo_17;
      MR_Word STATE_VARIABLE_Procs_20_20;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Procs_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_4, ((MR_Box) (ProcId_13)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(ModuleInfo_1, PredInfo_2, ProcInfo0_16, &ProcInfo_17);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_17)), STATE_VARIABLE_Procs_0_4, &STATE_VARIABLE_Procs_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_Procs_0_4 = STATE_VARIABLE_Procs_20_20;
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
  MR_Word STATE_VARIABLE_ProcInfo_0_48,
  MR_Word * STATE_VARIABLE_ProcInfo_49)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypes_8;
    MR_Word Subn_9;
    MR_Word PredConstraints_10;
    MR_Integer OrigArity_11;
    MR_Integer NumExtraHeadVars_12;
    MR_Word VarSet0_13;
    MR_Word VarTypes0_14;
    MR_Word HeadVars0_15;
    MR_Word Body0_16;
    MR_Word RttiVarMaps0_17;
    MR_Word ArgModes_18;
    MR_Word OrigArgTypes_24;
    MR_Word ExtraHeadVars1_25;
    MR_Word OrigHeadVars1_26;
    MR_Word ExtraArgModes_27;
    MR_Word OrigArgModes_28;
    MR_Word OrigHeadVars_29;
    MR_Word VarSet1_30;
    MR_Word VarTypes1_31;
    MR_Word ExistsCastHeadGoals_32;
    MR_Word ExistConstraints_33;
    MR_Word ExtraModesAndVars_34;
    MR_Word ExtraHeadVars_35;
    MR_Word VarSet_36;
    MR_Word VarTypes_37;
    MR_Word RttiVarMaps_38;
    MR_Word ExistsCastExtraGoals_39;
    MR_Word GoalInfo0_41;
    MR_Word Goals0_42;
    MR_Word Goals_43;
    MR_Word HeadVars_44;
    MR_Word NonLocals_45;
    MR_Word GoalInfo_46;
    MR_Word Body_47;
    MR_Integer Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word OrigArgTypes0_19;
    MR_Word ExtraHeadVars0_20;
    MR_Word OrigHeadVars0_21;
    MR_Word ExtraArgModes0_22;
    MR_Word OrigArgModes0_23;
    MR_Word TypeInfo_61_61;
    MR_Word TypeCtorInfo_62_62;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &ArgTypes_8);
    hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(PredInfo_6, &Subn_9);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &PredConstraints_10);
    OrigArity_11 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
    Var_50 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8);
    NumExtraHeadVars_12 = (MR_Integer) ((MR_Unsigned) Var_50 - (MR_Unsigned) OrigArity_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &VarSet0_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &VarTypes0_14);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &HeadVars0_15);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &Body0_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &RttiVarMaps0_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_48, &ArgModes_18);
    succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumExtraHeadVars_12, ArgTypes_8, &OrigArgTypes0_19);
    if (succeeded)
    {
      TypeInfo_61_61 = (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]);
      succeeded = mercury__list__split_list_4_p_0(TypeInfo_61_61, NumExtraHeadVars_12, HeadVars0_15, &ExtraHeadVars0_20, &OrigHeadVars0_21);
      if (succeeded)
      {
        TypeCtorInfo_62_62 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        succeeded = mercury__list__split_list_4_p_0(TypeCtorInfo_62_62, NumExtraHeadVars_12, ArgModes_18, &ExtraArgModes0_22, &OrigArgModes0_23);
      }
    }
    if (succeeded)
    {
      OrigArgTypes_24 = OrigArgTypes0_19;
      ExtraHeadVars1_25 = ExtraHeadVars0_20;
      OrigHeadVars1_26 = OrigHeadVars0_21;
      ExtraArgModes_27 = ExtraArgModes0_22;
      OrigArgModes_28 = OrigArgModes0_23;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_proc\'/4", (MR_String) "split_list failed");
        return;
      }
    check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_12_p_0(ModuleInfo_5, Subn_9, OrigArgTypes_24, OrigArgModes_28, OrigHeadVars1_26, &OrigHeadVars_29, VarSet0_13, &VarSet1_30, VarTypes0_14, &VarTypes1_31, (MR_Word) ((MR_Unsigned) 0U), &ExistsCastHeadGoals_32);
    ExistConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredConstraints_10, (MR_Integer) 1))));
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]), ExtraArgModes_27, ExtraHeadVars1_25, &ExtraModesAndVars_34);
    check_hlds__introduce_exists_casts__introduce_exists_casts_extra_13_p_0(ModuleInfo_5, Subn_9, ExistConstraints_33, ExtraModesAndVars_34, &ExtraHeadVars_35, VarSet1_30, &VarSet_36, VarTypes1_31, &VarTypes_37, RttiVarMaps0_17, &RttiVarMaps_38, (MR_Word) ((MR_Unsigned) 0U), &ExistsCastExtraGoals_39);
    GoalInfo0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_16, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Body0_16, &Goals0_42);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExistsCastHeadGoals_32, ExistsCastExtraGoals_39);
    Goals_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_42, Var_55);
    HeadVars_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_2[1]), ExtraHeadVars_35, OrigHeadVars_29);
    NonLocals_45 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_44);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_41, &GoalInfo_46);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (Goals_43));
    }
    {
      Body_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Body_47, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Body_47, 1) = ((MR_Box) (GoalInfo_46));
    }
    hlds__hlds_pred__proc_info_set_body_7_p_0(VarSet_36, VarTypes_37, HeadVars_44, Body_47, RttiVarMaps_38, STATE_VARIABLE_ProcInfo_0_48, STATE_VARIABLE_ProcInfo_49);
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_extra_13_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Subn_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_10,
  MR_Word * STATE_VARIABLE_RttiVarMaps_11,
  MR_Word STATE_VARIABLE_ExtraGoals_0_12,
  MR_Word * STATE_VARIABLE_ExtraGoals_13)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/13", (MR_String) "length mismatch");
          return;
        }
      *STATE_VARIABLE_ExtraGoals_13 = STATE_VARIABLE_ExtraGoals_0_12;
      *STATE_VARIABLE_RttiVarMaps_11 = STATE_VARIABLE_RttiVarMaps_0_10;
      *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
      *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
    }
    else
    {
      MR_Word ModeAndVar_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModesAndVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_38;
      MR_Word Vars_39;
      MR_Word ArgMode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeAndVar_36, (MR_Integer) 0))));
      MR_Word Var0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeAndVar_36, (MR_Integer) 1))));
      MR_Word ExistConstraints_52;
      MR_Word STATE_VARIABLE_VarSet_65_65;
      MR_Word STATE_VARIABLE_VarTypes_66_66;
      MR_Word STATE_VARIABLE_ExtraGoals_68_68;
      MR_Word STATE_VARIABLE_RttiVarMaps_77_77;

      succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_1, ArgMode_44);
      if (succeeded)
      {
        MR_Word Context_46;
        MR_Word VarType_47;
        MR_Word ExtraGoal_48;
        MR_Word VarInfo_49;
        MR_String InternalName_87;
        MR_String ExternalName_88;
        MR_Word STATE_VARIABLE_VarSet_12_89;

        mercury__term__context_init_1_p_0(&Context_46);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_38, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_12_89);
        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_12_89, Var0_45, &InternalName_87);
        mercury__string__append_3_p_2((MR_String) "ExistQ", InternalName_87, &ExternalName_88);
        mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_38, ExternalName_88, STATE_VARIABLE_VarSet_12_89, &STATE_VARIABLE_VarSet_65_65);
        hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_8, Var0_45, &VarType_47);
        hlds__vartypes__add_var_type_4_p_0(Var_38, VarType_47, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_66_66);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 3, Var0_45, Var_38, Context_46, &ExtraGoal_48);
        {
          STATE_VARIABLE_ExtraGoals_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ExtraGoals_68_68, 0) = ((MR_Box) (ExtraGoal_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ExtraGoals_68_68, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_12));
        }
        hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(STATE_VARIABLE_RttiVarMaps_0_10, Var0_45, &VarInfo_49);
        switch (MR_tag((MR_Word) VarInfo_49)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/13", (MR_String) "rtti_varmaps info not found");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfoType0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_49, (MR_Integer) 0))));
              MR_Word TypeInfoType_51;
              MR_Word STATE_VARIABLE_RttiVarMaps_76_76;

              parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_2, TypeInfoType0_50, &TypeInfoType_51);
              hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(Var0_45, TypeInfoType_51, STATE_VARIABLE_RttiVarMaps_0_10, &STATE_VARIABLE_RttiVarMaps_76_76);
              hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_38, TypeInfoType0_50, STATE_VARIABLE_RttiVarMaps_76_76, &STATE_VARIABLE_RttiVarMaps_77_77);
              ExistConstraints_52 = HeadVar__3_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ExistConstraint_54;
              MR_Word ConstraintArgs_56;
              MR_Word STATE_VARIABLE_RttiVarMaps_73_73;

              if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_extra\'/13", (MR_String) "missing constraint");
                  return;
                }
              else
              {
                ExistConstraint_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                ExistConstraints_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
              }
              hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(ExistConstraint_54, Var_38, STATE_VARIABLE_RttiVarMaps_0_10, &STATE_VARIABLE_RttiVarMaps_73_73);
              ConstraintArgs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraint_54, (MR_Integer) 1))));
              check_hlds__introduce_exists_casts__maybe_add_type_info_locns_5_p_0(ConstraintArgs_56, Var_38, (MR_Integer) 1, STATE_VARIABLE_RttiVarMaps_73_73, &STATE_VARIABLE_RttiVarMaps_77_77);
            }
            break;
        }
      }
      else
      {
        Var_38 = Var0_45;
        ExistConstraints_52 = HeadVar__3_3;
        STATE_VARIABLE_ExtraGoals_68_68 = STATE_VARIABLE_ExtraGoals_0_12;
        STATE_VARIABLE_RttiVarMaps_77_77 = STATE_VARIABLE_RttiVarMaps_0_10;
        STATE_VARIABLE_VarTypes_66_66 = STATE_VARIABLE_VarTypes_0_8;
        STATE_VARIABLE_VarSet_65_65 = STATE_VARIABLE_VarSet_0_6;
      }
      check_hlds__introduce_exists_casts__introduce_exists_casts_extra_13_p_0(ModuleInfo_1, Subn_2, ExistConstraints_52, ModesAndVars_37, &Vars_39, STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_66_66, STATE_VARIABLE_VarTypes_9, STATE_VARIABLE_RttiVarMaps_77_77, STATE_VARIABLE_RttiVarMaps_11, STATE_VARIABLE_ExtraGoals_68_68, STATE_VARIABLE_ExtraGoals_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_39));
      }
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
      MR_Word ArgType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RttiVarMaps_22_22;
      MR_Integer Var_23;
      MR_Word TVar_16;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Num_3;
      MR_Word next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;

      succeeded = ((MR_tag((MR_Word) ArgType_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        TVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgType_11, (MR_Integer) 0))));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_4, TVar_16, &Var_18);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Locn_19;

        {
          Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Locn_19, 0) = ((MR_Box) (Var_2));
          MR_hl_field(MR_mktag(1), Locn_19, 1) = ((MR_Box) (Num_3));
        }
        hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TVar_16, Locn_19, STATE_VARIABLE_RttiVarMaps_0_4, &STATE_VARIABLE_RttiVarMaps_22_22);
      }
      else
        STATE_VARIABLE_RttiVarMaps_22_22 = STATE_VARIABLE_RttiVarMaps_0_4;
      Var_23 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgTypes_12;
      next_value_of_Num_3 = Var_23;
      next_value_of_STATE_VARIABLE_RttiVarMaps_0_4 = STATE_VARIABLE_RttiVarMaps_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Num_3 = next_value_of_Num_3;
      STATE_VARIABLE_RttiVarMaps_0_4 = next_value_of_STATE_VARIABLE_RttiVarMaps_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Subn_14,
  MR_Word ArgTypes_15,
  MR_Word ArgModes_16,
  MR_Word STATE_VARIABLE_HeadVars_0_29,
  MR_Word * STATE_VARIABLE_HeadVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_ExtraGoals_0_35,
  MR_Word * STATE_VARIABLE_ExtraGoals_36)
{
  {
    MR_bool succeeded = (ArgTypes_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (ArgModes_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (STATE_VARIABLE_HeadVars_0_29 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ExtraGoals_36 = STATE_VARIABLE_ExtraGoals_0_35;
      *STATE_VARIABLE_VarTypes_34 = STATE_VARIABLE_VarTypes_0_33;
      *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_0_31;
      *STATE_VARIABLE_HeadVars_30 = STATE_VARIABLE_HeadVars_0_29;
    }
    else
    {
      MR_Word ArgType_21;
      MR_Word ArgTypesRest_22;
      MR_Word ArgMode_23;
      MR_Word ArgModesRest_24;
      MR_Word HeadVar0_25;
      MR_Word HeadVarsRest0_26;

      succeeded = (ArgTypes_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 0))));
        ArgTypesRest_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 1))));
        succeeded = (ArgModes_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgMode_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_16, (MR_Integer) 0))));
          ArgModesRest_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_16, (MR_Integer) 1))));
          succeeded = (STATE_VARIABLE_HeadVars_0_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadVar0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 0))));
            HeadVarsRest0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_HeadVars_0_29, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadVarsRest_27;
        MR_Word HeadVar_28;
        MR_Word STATE_VARIABLE_VarSet_37_37;
        MR_Word STATE_VARIABLE_VarTypes_38_38;
        MR_Word STATE_VARIABLE_ExtraGoals_39_39;
        MR_Word InternalType_61;

        check_hlds__introduce_exists_casts__introduce_exists_casts_for_head_12_p_0(ModuleInfo_13, Subn_14, ArgTypesRest_22, ArgModesRest_24, HeadVarsRest0_26, &HeadVarsRest_27, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarTypes_0_33, &STATE_VARIABLE_VarTypes_38_38, STATE_VARIABLE_ExtraGoals_0_35, &STATE_VARIABLE_ExtraGoals_39_39);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subn_14, ArgType_21, &InternalType_61);
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(InternalType_61, ArgType_21);
        if (succeeded)
        {
          HeadVar_28 = HeadVar0_25;
          *STATE_VARIABLE_ExtraGoals_36 = STATE_VARIABLE_ExtraGoals_39_39;
          *STATE_VARIABLE_VarTypes_34 = STATE_VARIABLE_VarTypes_38_38;
          *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_37_37;
        }
        else
        {
          MR_Word Context_62;
          MR_Word Inst_64;
          MR_Word ExtraGoal_65;
          MR_Word STATE_VARIABLE_VarTypes_33_66;
          MR_String InternalName_78;
          MR_String ExternalName_79;
          MR_Word STATE_VARIABLE_VarSet_12_80;
          MR_Word Var_63;

          mercury__term__context_init_1_p_0(&Context_62);
          hlds__vartypes__update_var_type_4_p_0(HeadVar0_25, InternalType_61, STATE_VARIABLE_VarTypes_38_38, &STATE_VARIABLE_VarTypes_33_66);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &HeadVar_28, STATE_VARIABLE_VarSet_37_37, &STATE_VARIABLE_VarSet_12_80);
          mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_12_80, HeadVar0_25, &InternalName_78);
          mercury__string__append_3_p_2((MR_String) "ExistQ", InternalName_78, &ExternalName_79);
          mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar_28, ExternalName_79, STATE_VARIABLE_VarSet_12_80, STATE_VARIABLE_VarSet_32);
          hlds__vartypes__add_var_type_4_p_0(HeadVar_28, ArgType_21, STATE_VARIABLE_VarTypes_33_66, STATE_VARIABLE_VarTypes_34);
          check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_13, ArgMode_23, &Var_63, &Inst_64);
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 3, HeadVar0_25, HeadVar_28, Inst_64, Inst_64, Context_62, &ExtraGoal_65);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ExtraGoals_36 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExtraGoal_65));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_39_39));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_HeadVars_30 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVarsRest_27));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.introduce_exists_casts.introduce_exists_casts_for_head\'/12", (MR_String) "length mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcInfo_49;

    check_hlds__introduce_exists_casts__introduce_exists_casts_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_ProcInfo_49);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_49));
  }
}

void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_Word PredMap0_6;
    MR_Word PredInfo0_7;
    MR_Word ProcMap0_8;
    MR_Word ProcMap_9;
    MR_Word PredInfo_10;
    MR_Word PredMap_11;
    MR_Word Var_14;
    MR_Box conv0_PredInfo0_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredMap0_6);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_6, ((MR_Box) (PredId_4)), &conv0_PredInfo0_7);
    PredInfo0_7 = ((MR_Word) (conv0_PredInfo0_7));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_7, &ProcMap0_8);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__introduce_exists_casts_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (PredInfo0_7));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_14, ProcMap0_8, &ProcMap_9);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_9, PredInfo0_7, &PredInfo_10);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_10)), PredMap0_6, &PredMap_11);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
  }
}

static void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredTable_15;

    check_hlds__introduce_exists_casts__maybe_introduce_exists_casts_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredTable_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_15));
  }
}

void MR_CALL 
check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredTable_7;
    MR_Word Var_10;
    MR_Box conv1_PredTable_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__introduce_exists_casts_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__introduce_exists_casts__introduce_exists_casts_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__introduce_exists_casts_scalar_common_1[0]), Var_10, PredIds_4, ((MR_Box) (PredTable0_6)), &conv1_PredTable_7);
    PredTable_7 = ((MR_Word) (conv1_PredTable_7));
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
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
