/*
** Automatically generated from `complexity.m'
** by the Mercury compiler,
** version rotd-2023-08-02
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


// :- module transform_hlds.complexity.
// :- implementation.

/*
INIT mercury__transform_hlds__complexity__init
ENDINIT
*/

#include "transform_hlds.complexity.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.passes_aux.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__597__1_2_p_0(
  MR_Word PredInfo0_17,
  MR_Word PredInfo_18);

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__135__1_2_p_0(
  MR_Char HeadVar__1_28,
  MR_Char HeadVar__2_36);

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer NumProcs_9,
  MR_Integer ProcNum_10,
  MR_String FullName_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_74,
  MR_Word * STATE_VARIABLE_ProcInfo_75,
  MR_Word STATE_VARIABLE_ModuleInfo_0_76,
  MR_Word * STATE_VARIABLE_ModuleInfo_77);

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void);

static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__complexity__classify_complexity_args_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0(
  MR_String PredName_10,
  MR_Word Detism_11,
  MR_Word Args_12,
  MR_Word ExtraArgs_13,
  MR_String Code_14,
  MR_Word BoundVars_15,
  MR_Word ModuleInfo_16,
  MR_Word Context_17,
  MR_Word * Goal_18);

static void MR_CALL 
transform_hlds__complexity__generate_new_var_6_p_0(
  MR_String Name_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_15,
  MR_Word * STATE_VARIABLE_ProcInfo_16);

static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
  MR_Integer ProcNum_13,
  MR_Word NumberedVars_14,
  MR_Integer NumProfiledVars_15,
  MR_Word Context_16,
  MR_Word PredId_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * STATE_VARIABLE_ProcInfo_34,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word * SlotVar_20,
  MR_String * SlotVarName_21,
  MR_Word * Goals_22);

static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Integer NumProfiledVars_3,
  MR_String ProcVarName_4,
  MR_String SlotVarName_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * STATE_VARIABLE_ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_String * HeadVar__13_13);

static MR_bool MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
  MR_Word ArgVar_15,
  MR_Integer VarSeqNum_16,
  MR_Word Context_17,
  MR_Integer NumProfiledVars_18,
  MR_String ProcVarName_19,
  MR_String SlotVarName_20,
  MR_Word PredId_21,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word * Goals_24,
  MR_Word * ForeignArgs_25,
  MR_String * CodeStr_26);

static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
  MR_Word Stream_9,
  MR_Integer CurLineNum_10,
  MR_Integer * NumLines_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_ProcMap_0_21,
  MR_Word * STATE_VARIABLE_ProcMap_22);


static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__complexity_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__complexity_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__complexity__read_spec_file_lines_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 10))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__597__1_2_p_0(
  MR_Word PredInfo0_17,
  MR_Word PredInfo_18)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_info_0_0(PredInfo0_17, PredInfo_18);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__135__1_2_p_0(
  MR_Char HeadVar__1_28,
  MR_Char HeadVar__2_36)
{
  MR_bool succeeded = (HeadVar__1_28 == HeadVar__2_36);

  return succeeded;
}

void MR_CALL 
transform_hlds__complexity__complexity_process_proc_msg_8_p_0(
  MR_Word ProgressStream_9,
  MR_Integer NumProcs_10,
  MR_Word ProcMap_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_23,
  MR_Word * STATE_VARIABLE_ProcInfo_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  MR_bool succeeded;
  MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(0, PredProcId_12, (MR_Integer) 0))));
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, PredProcId_12, (MR_Integer) 1))));
  MR_String FullName_31;
  MR_Integer ProcNum_32;
  MR_Box conv0_ProcNum_32;

  FullName_31 = transform_hlds__complexity__complexity_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_15, ProcId_16);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcMap_11, ((MR_Box) (FullName_31)), &conv0_ProcNum_32);
  if (succeeded)
  {
    ProcNum_32 = ((MR_Integer) (conv0_ProcNum_32));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String FullName_19;
    MR_Word Globals_20;
    MR_Word Verbose_21;

    FullName_19 = transform_hlds__complexity__complexity_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_25, PredId_15, ProcId_16);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_25, &Globals_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 72, &Verbose_21);
    switch (Verbose_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_9, STATE_VARIABLE_ModuleInfo_0_25, (MR_String) "Applying complexity experiment transformation to", PredProcId_12);
        break;
    }
    transform_hlds__complexity__complexity_process_proc_8_p_0(NumProcs_10, ProcNum_32, FullName_19, PredId_15, STATE_VARIABLE_ProcInfo_0_23, STATE_VARIABLE_ProcInfo_24, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
  }
  else
  {
    *STATE_VARIABLE_ProcInfo_24 = STATE_VARIABLE_ProcInfo_0_23;
    *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer NumProcs_9,
  MR_Integer ProcNum_10,
  MR_String FullName_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_74,
  MR_Word * STATE_VARIABLE_ProcInfo_75,
  MR_Word STATE_VARIABLE_ModuleInfo_0_76,
  MR_Word * STATE_VARIABLE_ModuleInfo_77)
{
  MR_Word Detism_15;
  MR_Word CodeModel_16;
  MR_Word HeadVars_17;
  MR_Word ArgModes_18;
  MR_Word VarTable_19;
  MR_Word OrigGoal_20;
  MR_Word Context_21;
  MR_Word OrigGoalInfo_22;
  MR_Word OrigNonLocals_23;
  MR_Word OrigInstMapDelta_25;
  MR_Word ImpureOrigGoalInfo_26;
  MR_Word IsActiveVar_28;
  MR_Word VarInfos_29;
  MR_Word NumberedProfiledVars_30;
  MR_Integer NumProfiledVars_31;
  MR_Word SlotVar_32;
  MR_String SlotVarName_33;
  MR_Word SlotGoals_34;
  MR_Word IsActiveOutputArg_35;
  MR_Word SlotInputArg_36;
  MR_String ProcNumStr_37;
  MR_String IsActiveStr_39;
  MR_Word IsActiveGoal_40;
  MR_String ExitStr_42;
  MR_Word ExitGoal_43;
  MR_String FailStr_45;
  MR_Word FailGoal_46;
  MR_String RedoStr_48;
  MR_Word RedoGoal0_49;
  MR_Word TransGoal_51;
  MR_Word TSPB_61;
  MR_Word TypeCtor_62;
  MR_Word SwitchArms_63;
  MR_Word SwitchExpr_64;
  MR_Word SwitchGoalInfo_65;
  MR_Word SwitchGoal_66;
  MR_Word GoalExpr_67;
  MR_Word GoalInfo_68;
  MR_Word Goal_69;
  MR_Word Infos_70;
  MR_Word ComplexityInfo_71;
  MR_Word ComplexityInfos0_72;
  MR_Word ComplexityInfos_73;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_ProcInfo_81_81;
  MR_Word STATE_VARIABLE_ProcInfo_83_83;
  MR_Word STATE_VARIABLE_ModuleInfo_84_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_101;
  MR_String Var_103;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_110;
  MR_String Var_111;
  MR_String Var_113;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_String Var_122;
  MR_String Var_123;
  MR_String Var_125;
  MR_String Var_126;
  MR_String Var_128;
  MR_String Var_129;
  MR_Word Var_132;
  MR_String Var_137;
  MR_String Var_138;
  MR_String Var_140;
  MR_String Var_141;
  MR_String Var_143;
  MR_String Var_144;
  MR_String Var_152;
  MR_String Var_153;
  MR_String Var_155;
  MR_String Var_156;
  MR_String Var_158;
  MR_String Var_159;
  MR_Word Var_207;
  MR_Word Var_210;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_216;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_Word Var_219;
  MR_Word Var_227;
  MR_Word Var_228;

  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_74, &Detism_15);
  hlds__code_model__determinism_to_code_model_2_p_0(Detism_15, &CodeModel_16);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_74, &HeadVars_17);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_74, &ArgModes_18);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_74, &VarTable_19);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_74, &OrigGoal_20);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_17, &OrigNonLocals_23);
  OrigGoalInfo_22 = ((MR_Word) ((MR_hl_field(0, OrigGoal_20, (MR_Integer) 1))));
  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_22);
  OrigInstMapDelta_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_22);
  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, OrigGoalInfo_22, &ImpureOrigGoalInfo_26);
  Var_79 = transform_hlds__complexity__is_active_type_0_f_0();
  transform_hlds__complexity__generate_new_var_6_p_0((MR_String) "IsActive", Var_79, (MR_Integer) 1, &IsActiveVar_28, STATE_VARIABLE_ProcInfo_0_74, &STATE_VARIABLE_ProcInfo_81_81);
  transform_hlds__complexity__classify_complexity_args_5_p_0(STATE_VARIABLE_ModuleInfo_0_76, VarTable_19, HeadVars_17, ArgModes_18, &VarInfos_29);
  transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(VarInfos_29, (MR_Integer) 0, &NumberedProfiledVars_30);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__complexity_scalar_common_2[0]), NumberedProfiledVars_30, &NumProfiledVars_31);
  transform_hlds__complexity__generate_slot_goals_12_p_0(ProcNum_10, NumberedProfiledVars_30, NumProfiledVars_31, Context_21, PredId_12, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ModuleInfo_0_76, &STATE_VARIABLE_ModuleInfo_84_84, &SlotVar_32, &SlotVarName_33, &SlotGoals_34);
  Var_87 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) ((MR_String) "IsActive"));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
  }
  Var_88 = transform_hlds__complexity__is_active_type_0_f_0();
  {
    IsActiveOutputArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IsActiveOutputArg_35, 0) = ((MR_Box) (IsActiveVar_28));
    MR_hl_field(0, IsActiveOutputArg_35, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, IsActiveOutputArg_35, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, IsActiveOutputArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_92 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (SlotVarName_33));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
  }
  Var_93 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    SlotInputArg_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotInputArg_36, 0) = ((MR_Box) (SlotVar_32));
    MR_hl_field(0, SlotInputArg_36, 1) = ((MR_Box) (Var_90));
    MR_hl_field(0, SlotInputArg_36, 2) = ((MR_Box) (Var_93));
    MR_hl_field(0, SlotInputArg_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  ProcNumStr_37 = mercury__string__int_to_string_1_f_0(ProcNum_10);
  Var_100 = mercury__string__int_to_string_1_f_0(NumProcs_9);
  Var_110 = mercury__string__int_to_string_1_f_0(NumProfiledVars_31);
  Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "IsActive", (MR_String) ");\n");
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
  Var_109 = mercury__string__f_43_43_2_f_0(Var_110, Var_111);
  Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_109);
  Var_106 = mercury__string__f_43_43_2_f_0(FullName_11, Var_107);
  Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", Var_106);
  Var_103 = mercury__string__f_43_43_2_f_0(ProcNumStr_37, Var_104);
  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_103);
  Var_99 = mercury__string__f_43_43_2_f_0(Var_100, Var_101);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_99);
  Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_is_active", Var_97);
  IsActiveStr_39 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_96);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (IsActiveOutputArg_35));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (IsActiveVar_28));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0((MR_String) "complexity_is_active", (MR_Integer) 0, Var_116, (MR_Word) ((MR_Unsigned) 0U), IsActiveStr_39, Var_118, STATE_VARIABLE_ModuleInfo_84_84, Context_21, &IsActiveGoal_40);
  Var_129 = transform_hlds__complexity__slot_var_name_0_f_0();
  Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ");\n");
  Var_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_128);
  Var_125 = mercury__string__f_43_43_2_f_0(ProcNumStr_37, Var_126);
  Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_125);
  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_exit_proc", Var_123);
  ExitStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_122);
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (SlotInputArg_36));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0((MR_String) "complexity_exit_proc", (MR_Integer) 0, Var_132, (MR_Word) ((MR_Unsigned) 0U), ExitStr_42, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_21, &ExitGoal_43);
  Var_144 = transform_hlds__complexity__slot_var_name_0_f_0();
  Var_143 = mercury__string__f_43_43_2_f_0(Var_144, (MR_String) ");\n");
  Var_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_143);
  Var_140 = mercury__string__f_43_43_2_f_0(ProcNumStr_37, Var_141);
  Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_140);
  Var_137 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_fail_proc", Var_138);
  FailStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_137);
  transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0((MR_String) "complexity_fail_proc", (MR_Integer) 7, Var_132, (MR_Word) ((MR_Unsigned) 0U), FailStr_45, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_21, &FailGoal_46);
  Var_159 = transform_hlds__complexity__slot_var_name_0_f_0();
  Var_158 = mercury__string__f_43_43_2_f_0(Var_159, (MR_String) ");\n");
  Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_158);
  Var_155 = mercury__string__f_43_43_2_f_0(ProcNumStr_37, Var_156);
  Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_155);
  Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_redo_proc", Var_153);
  RedoStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_152);
  transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0((MR_String) "complexity_redo_proc", (MR_Integer) 7, Var_132, (MR_Word) ((MR_Unsigned) 0U), RedoStr_48, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_21, &RedoGoal0_49);
  switch (CodeModel_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TransformedGoalExpr_50;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;

        {
          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_169, 0) = ((MR_Box) (ExitGoal_43));
          MR_hl_field(1, Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_168, 0) = ((MR_Box) (OrigGoal_20));
          MR_hl_field(1, Var_168, 1) = ((MR_Box) (Var_169));
        }
        Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_34, Var_168);
        {
          TransformedGoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TransformedGoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, TransformedGoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, TransformedGoalExpr_50, 2) = ((MR_Box) (Var_167));
        }
        {
          TransGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TransGoal_51, 0) = ((MR_Box) (TransformedGoalExpr_50));
          MR_hl_field(0, TransGoal_51, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RedoGoalExpr_54 = ((MR_Word) ((MR_hl_field(0, RedoGoal0_49, (MR_Integer) 0))));
        MR_Word RedoGoalInfo0_55 = ((MR_Word) ((MR_hl_field(0, RedoGoal0_49, (MR_Integer) 1))));
        MR_Word RedoGoalInfo_56;
        MR_Word RedoGoal_57;
        MR_Word AfterInstMapDelta_58;
        MR_Word AfterGoalInfo_59;
        MR_Word AfterGoal_60;
        MR_Word Var_186;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_193;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_202;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word OrigAfterGoal_233;
        MR_Word DisjGoal_234;

        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, RedoGoalInfo0_55, &RedoGoalInfo_56);
        {
          RedoGoal_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RedoGoal_57, 0) = ((MR_Box) (RedoGoalExpr_54));
          MR_hl_field(0, RedoGoal_57, 1) = ((MR_Box) (RedoGoalInfo_56));
        }
        hlds__instmap__instmap_delta_init_reachable_1_p_0(&AfterInstMapDelta_58);
        Var_186 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SlotVar_32);
        hlds__hlds_goal__goal_info_init_6_p_0(Var_186, AfterInstMapDelta_58, (MR_Integer) 2, (MR_Integer) 2, Context_21, &AfterGoalInfo_59);
        {
          Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_191, 0) = ((MR_Box) (RedoGoal_57));
          MR_hl_field(1, Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_190, 0) = ((MR_Box) (ExitGoal_43));
          MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_191));
        }
        {
          Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_189, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_189, 1) = ((MR_Box) (Var_190));
        }
        {
          AfterGoal_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AfterGoal_60, 0) = ((MR_Box) (Var_189));
          MR_hl_field(0, AfterGoal_60, 1) = ((MR_Box) (AfterGoalInfo_59));
        }
        {
          Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_196, 0) = ((MR_Box) (AfterGoal_60));
          MR_hl_field(1, Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_195, 0) = ((MR_Box) (OrigGoal_20));
          MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_193, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_193, 2) = ((MR_Box) (Var_195));
        }
        {
          OrigAfterGoal_233 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OrigAfterGoal_233, 0) = ((MR_Box) (Var_193));
          MR_hl_field(0, OrigAfterGoal_233, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
        {
          Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_200, 0) = ((MR_Box) (FailGoal_46));
          MR_hl_field(1, Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_199, 0) = ((MR_Box) (OrigAfterGoal_233));
          MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_198, 1) = ((MR_Box) (Var_199));
        }
        {
          DisjGoal_234 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DisjGoal_234, 0) = ((MR_Box) (Var_198));
          MR_hl_field(0, DisjGoal_234, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (DisjGoal_234));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_34, Var_205);
        {
          Var_202 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_202, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_202, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_202, 2) = ((MR_Box) (Var_204));
        }
        {
          TransGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TransGoal_51, 0) = ((MR_Box) (Var_202));
          MR_hl_field(0, TransGoal_51, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OrigAfterGoal_52;
        MR_Word DisjGoal_53;
        MR_Word Var_171;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_180;
        MR_Word Var_182;
        MR_Word Var_183;

        {
          Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_174, 0) = ((MR_Box) (ExitGoal_43));
          MR_hl_field(1, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_173, 0) = ((MR_Box) (OrigGoal_20));
          MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_174));
        }
        {
          Var_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_171, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_171, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_171, 2) = ((MR_Box) (Var_173));
        }
        {
          OrigAfterGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OrigAfterGoal_52, 0) = ((MR_Box) (Var_171));
          MR_hl_field(0, OrigAfterGoal_52, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
        {
          Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_178, 0) = ((MR_Box) (FailGoal_46));
          MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (OrigAfterGoal_52));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_176, 1) = ((MR_Box) (Var_177));
        }
        {
          DisjGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DisjGoal_53, 0) = ((MR_Box) (Var_176));
          MR_hl_field(0, DisjGoal_53, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
        {
          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_183, 0) = ((MR_Box) (DisjGoal_53));
          MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_34, Var_183);
        {
          Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_180, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_180, 2) = ((MR_Box) (Var_182));
        }
        {
          TransGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TransGoal_51, 0) = ((MR_Box) (Var_180));
          MR_hl_field(0, TransGoal_51, 1) = ((MR_Box) (ImpureOrigGoalInfo_26));
        }
      }
      break;
  }
  TSPB_61 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
  {
    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_207, 0) = ((MR_Box) (TSPB_61));
    MR_hl_field(1, Var_207, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
  }
  {
    TypeCtor_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_62, 0) = ((MR_Box) (Var_207));
    MR_hl_field(0, TypeCtor_62, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_212, 0) = ((MR_Box) (TSPB_61));
    MR_hl_field(1, Var_212, 1) = ((MR_Box) ((MR_String) "is_inactive"));
  }
  {
    Var_211 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_211, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_211, 1) = ((MR_Box) (Var_212));
    MR_hl_field(3, Var_211, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_211, 3) = ((MR_Box) (TypeCtor_62));
  }
  {
    Var_210 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_210, 0) = ((MR_Box) (Var_211));
    MR_hl_field(0, Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_210, 2) = ((MR_Box) (TransGoal_51));
  }
  {
    Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_219, 0) = ((MR_Box) (TSPB_61));
    MR_hl_field(1, Var_219, 1) = ((MR_Box) ((MR_String) "is_active"));
  }
  {
    Var_218 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_218, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_218, 1) = ((MR_Box) (Var_219));
    MR_hl_field(3, Var_218, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_218, 3) = ((MR_Box) (TypeCtor_62));
  }
  {
    Var_217 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_217, 0) = ((MR_Box) (Var_218));
    MR_hl_field(0, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_217, 2) = ((MR_Box) (OrigGoal_20));
  }
  {
    Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_216, 0) = ((MR_Box) (Var_217));
    MR_hl_field(1, Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SwitchArms_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SwitchArms_63, 0) = ((MR_Box) (Var_210));
    MR_hl_field(1, SwitchArms_63, 1) = ((MR_Box) (Var_216));
  }
  {
    SwitchExpr_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, SwitchExpr_64, 1) = ((MR_Box) (IsActiveVar_28));
    MR_hl_field(3, SwitchExpr_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, SwitchExpr_64, 3) = ((MR_Box) (SwitchArms_63));
  }
  hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_23, OrigInstMapDelta_25, Detism_15, (MR_Integer) 2, Context_21, &SwitchGoalInfo_65);
  {
    SwitchGoal_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SwitchGoal_66, 0) = ((MR_Box) (SwitchExpr_64));
    MR_hl_field(0, SwitchGoal_66, 1) = ((MR_Box) (SwitchGoalInfo_65));
  }
  {
    Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_228, 0) = ((MR_Box) (SwitchGoal_66));
    MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_227, 0) = ((MR_Box) (IsActiveGoal_40));
    MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_228));
  }
  {
    GoalExpr_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_67, 2) = ((MR_Box) (Var_227));
  }
  hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_23, OrigInstMapDelta_25, Detism_15, (MR_Integer) 2, Context_21, &GoalInfo_68);
  {
    Goal_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_69, 0) = ((MR_Box) (GoalExpr_67));
    MR_hl_field(0, Goal_69, 1) = ((MR_Box) (GoalInfo_68));
  }
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_69, STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ProcInfo_75);
  mercury__assoc_list__values_2_p_0((MR_Word) (&transform_hlds__complexity_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), VarInfos_29, &Infos_70);
  {
    ComplexityInfo_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ComplexityInfo_71, 0) = ((MR_Box) (ProcNum_10));
    MR_hl_field(0, ComplexityInfo_71, 1) = ((MR_Box) (FullName_11));
    MR_hl_field(0, ComplexityInfo_71, 2) = ((MR_Box) (Infos_70));
  }
  hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(STATE_VARIABLE_ModuleInfo_84_84, &ComplexityInfos0_72);
  {
    ComplexityInfos_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ComplexityInfos_73, 0) = ((MR_Box) (ComplexityInfo_71));
    MR_hl_field(1, ComplexityInfos_73, 1) = ((MR_Box) (ComplexityInfos0_72));
  }
  hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(ComplexityInfos_73, STATE_VARIABLE_ModuleInfo_84_84, STATE_VARIABLE_ModuleInfo_77);
}

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word M_3;
  MR_Word Var_4;
  MR_Word Var_6;

  M_3 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (M_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
  }
  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
  return Type_2;
}

static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_5;
      MR_Word Info_6;
      MR_Word VarInfos_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Kind_11;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      Var_5 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      Info_6 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      Kind_11 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (Kind_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = VarInfos_7;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word NumberedProfiledVarsTail_12;
            MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Offset_2 + (MR_Unsigned) 1);
            MR_Word Var_16;

            transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(VarInfos_7, Var_14, &NumberedProfiledVarsTail_12);
            {
              Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_5));
              MR_hl_field(0, Var_16, 1) = ((MR_Box) (Offset_2));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
              MR_hl_field(1, base, 1) = ((MR_Box) (NumberedProfiledVarsTail_12));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__complexity__classify_complexity_args_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.complexity.classify_complexity_args\'/5", (MR_String) "lists not same length");
        return;
      }
  else
  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.complexity.classify_complexity_args\'/5", (MR_String) "lists not same length");
        return;
      }
    else
    {
      MR_Word Mode_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Modes_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeName_28;
      MR_Word Kind_29;
      MR_Word VarInfos_30;
      MR_Word Entry_31;
      MR_String Name_32;
      MR_Word VarType_33;
      MR_Word IsDummy_34;
      MR_Word Var_35;
      MR_Word Var_36;

      transform_hlds__complexity__classify_complexity_args_5_p_0(ModuleInfo_1, VarTable_2, Var_37, Modes_27, &VarInfos_30);
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_2, Var_38, &Entry_31);
      Name_32 = ((MR_String) ((MR_hl_field(0, Entry_31, (MR_Integer) 0))));
      VarType_33 = ((MR_Word) ((MR_hl_field(0, Entry_31, (MR_Integer) 1))));
      IsDummy_34 = ((MR_Unsigned) ((MR_hl_field(0, Entry_31, (MR_Integer) 2))) & (MR_Integer) 1);
      succeeded = (strcmp(Name_32, (MR_String) "") == 0);
      if (succeeded)
        MaybeName_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          MaybeName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeName_28, 0) = ((MR_Box) (Name_32));
        }
      succeeded = check_hlds__mode_test__mode_is_fully_input_2_p_0(ModuleInfo_1, Mode_26);
      if (succeeded)
      {
        succeeded = (IsDummy_34 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(ModuleInfo_1, VarType_33);
        if (succeeded)
          Kind_29 = (MR_Integer) 1;
        else
          Kind_29 = (MR_Integer) 0;
      }
      else
        Kind_29 = (MR_Integer) 2;
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (MaybeName_28));
        MR_hl_field(0, Var_36, 1) = (MR_Box) ((MR_Unsigned) (Kind_29));
      }
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (Var_38));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (Var_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (VarInfos_30));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_generate_call_foreign_proc_9_p_0(
  MR_String PredName_10,
  MR_Word Detism_11,
  MR_Word Args_12,
  MR_Word ExtraArgs_13,
  MR_String Code_14,
  MR_Word BoundVars_15,
  MR_Word ModuleInfo_16,
  MR_Word Context_17,
  MR_Word * Goal_18)
{
  MR_Word BuiltinModule_19;
  MR_Word Attrs0_20;
  MR_Word Attrs_21;
  MR_Word Var_27;

  BuiltinModule_19 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
  Attrs0_20 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_20, &Attrs_21);
  Var_27 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_15);
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_16, (MR_Integer) 0, BuiltinModule_19, PredName_10, (MR_Word) ((MR_Unsigned) 0U), Args_12, ExtraArgs_13, Var_27, (MR_Word) ((MR_Unsigned) 0U), Detism_11, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Attrs_21, (MR_Word) ((MR_Unsigned) 0U), Code_14, Context_17, Goal_18);
}

static void MR_CALL 
transform_hlds__complexity__generate_new_var_6_p_0(
  MR_String Name_7,
  MR_Word Type_8,
  MR_Word IsDummy_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_15,
  MR_Word * STATE_VARIABLE_ProcInfo_16)
{
  MR_Word Entry_12;
  MR_Word VarTable0_13;
  MR_Word VarTable_14;

  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) (Name_7));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_15, &VarTable0_13);
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_10, VarTable0_13, &VarTable_14);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_14, STATE_VARIABLE_ProcInfo_0_15, STATE_VARIABLE_ProcInfo_16);
}

static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
  MR_Integer ProcNum_13,
  MR_Word NumberedVars_14,
  MR_Integer NumProfiledVars_15,
  MR_Word Context_16,
  MR_Word PredId_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * STATE_VARIABLE_ProcInfo_34,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word * SlotVar_20,
  MR_String * SlotVarName_21,
  MR_Word * Goals_22)
{
  MR_Word PrefixGoals_24;
  MR_Word ForeignArgs_25;
  MR_String FillCodeStr_26;
  MR_Word SlotVarArg_27;
  MR_String DeclCodeStr_29;
  MR_String PredCodeStr_30;
  MR_String ProcStr_31;
  MR_Word CallGoal_32;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_String Var_48;
  MR_String Var_51;
  MR_String Var_52;
  MR_String Var_54;
  MR_String Var_55;
  MR_String Var_56;
  MR_String Var_58;
  MR_String Var_61;
  MR_String Var_62;
  MR_String Var_64;
  MR_String Var_65;
  MR_Word Var_68;
  MR_String Var_69;
  MR_Word Var_70;
  MR_String Var_72;
  MR_String Var_73;
  MR_Word Var_75;
  MR_Word Entry_78;
  MR_Word VarTable0_79;
  MR_Word VarTable_80;
  MR_Word BuiltinModule_81;
  MR_Word Attrs0_82;
  MR_Word Attrs_83;
  MR_Word Var_89;

  *SlotVarName_21 = (MR_String) "SlotVar";
  Var_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    Entry_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_78, 0) = ((MR_Box) (*SlotVarName_21));
    MR_hl_field(0, Entry_78, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, Entry_78, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &VarTable0_79);
  parse_tree__var_table__add_var_entry_4_p_0(Entry_78, SlotVar_20, VarTable0_79, &VarTable_80);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_80, STATE_VARIABLE_ProcInfo_0_33, &STATE_VARIABLE_ProcInfo_39_39);
  transform_hlds__complexity__generate_size_goals_13_p_0(NumberedVars_14, Context_16, NumProfiledVars_15, (MR_String) "proc", *SlotVarName_21, PredId_17, STATE_VARIABLE_ProcInfo_39_39, STATE_VARIABLE_ProcInfo_34, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36, &PrefixGoals_24, &ForeignArgs_25, &FillCodeStr_26);
  Var_44 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (*SlotVarName_21));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
  }
  Var_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    SlotVarArg_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotVarArg_27, 0) = ((MR_Box) (*SlotVar_20));
    MR_hl_field(0, SlotVarArg_27, 1) = ((MR_Box) (Var_42));
    MR_hl_field(0, SlotVarArg_27, 2) = ((MR_Box) (Var_45));
    MR_hl_field(0, SlotVarArg_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "proc", (MR_String) ";\n");
  DeclCodeStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_ComplexityProc *", Var_48);
  Var_55 = mercury__string__int_to_string_1_f_0(ProcNum_13);
  Var_58 = mercury__string__f_43_43_2_f_0(*SlotVarName_21, (MR_String) ");\n");
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_58);
  Var_54 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_call_proc", Var_52);
  PredCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_51);
  Var_65 = mercury__string__int_to_string_1_f_0(ProcNum_13);
  Var_64 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) "];\n");
  Var_62 = mercury__string__f_43_43_2_f_0((MR_String) " = &MR_complexity_procs[", Var_64);
  Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "proc", Var_62);
  ProcStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_61);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (SlotVarArg_27));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_73 = mercury__string__f_43_43_2_f_0(ProcStr_31, FillCodeStr_26);
  Var_72 = mercury__string__f_43_43_2_f_0(PredCodeStr_30, Var_73);
  Var_69 = mercury__string__f_43_43_2_f_0(DeclCodeStr_29, Var_72);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (*SlotVar_20));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  BuiltinModule_81 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
  Attrs0_82 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_82, &Attrs_83);
  Var_89 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_70);
  hlds__goal_util__generate_call_foreign_proc_17_p_0(*STATE_VARIABLE_ModuleInfo_36, (MR_Integer) 0, BuiltinModule_81, (MR_String) "complexity_call_proc", (MR_Word) ((MR_Unsigned) 0U), Var_68, ForeignArgs_25, Var_89, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Attrs_83, (MR_Word) ((MR_Unsigned) 0U), Var_69, Context_16, &CallGoal_32);
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (CallGoal_32));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_24, Var_75, Goals_22);
}

static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Integer NumProfiledVars_3,
  MR_String ProcVarName_4,
  MR_String SlotVarName_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * STATE_VARIABLE_ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word * HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_String * HeadVar__13_13)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__13_13 = (MR_String) "";
    *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
    *STATE_VARIABLE_ProcInfo_8 = STATE_VARIABLE_ProcInfo_0_7;
  }
  else
  {
    MR_Word Var_25;
    MR_Integer VarSeqNum_26;
    MR_Word NumberedVars_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goals_35;
    MR_Word RestGoals_36;
    MR_Word ForeignArgs_37;
    MR_Word RestForeignArgs_38;
    MR_String CodeStr_39;
    MR_String RestCodeStr_40;
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_ModuleInfo_47_47;

    Var_25 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
    VarSeqNum_26 = ((MR_Integer) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
    transform_hlds__complexity__generate_size_goal_14_p_0(Var_25, VarSeqNum_26, Context_2, NumProfiledVars_3, ProcVarName_4, SlotVarName_5, PredId_6, STATE_VARIABLE_ProcInfo_0_7, &STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_47_47, &Goals_35, &ForeignArgs_37, &CodeStr_39);
    transform_hlds__complexity__generate_size_goals_13_p_0(NumberedVars_27, Context_2, NumProfiledVars_3, ProcVarName_4, SlotVarName_5, PredId_6, STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ProcInfo_8, STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_ModuleInfo_10, &RestGoals_36, &RestForeignArgs_38, &RestCodeStr_40);
    *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_35, RestGoals_36);
    *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ForeignArgs_37, RestForeignArgs_38);
    *HeadVar__13_13 = mercury__string__f_43_43_2_f_0(CodeStr_39, RestCodeStr_40);
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__597__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
  MR_Word ArgVar_15,
  MR_Integer VarSeqNum_16,
  MR_Word Context_17,
  MR_Integer NumProfiledVars_18,
  MR_String ProcVarName_19,
  MR_String SlotVarName_20,
  MR_Word PredId_21,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word * Goals_24,
  MR_Word * ForeignArgs_25,
  MR_String * CodeStr_26)
{
  MR_bool succeeded;
  MR_Word VarTable1_27;
  MR_Word VarType_28;
  MR_Word TypeInfoVar_30;
  MR_Word VarTable2_31;
  MR_Word TypeInfoType_32;
  MR_String ArgName_33;
  MR_String TypeInfoArgName_34;
  MR_Word ForeignArg_35;
  MR_Word ForeignTypeInfoArg_36;
  MR_String Var_44;
  MR_String Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_String Var_58;
  MR_String Var_59;
  MR_String Var_61;
  MR_String Var_62;
  MR_String Var_64;
  MR_String Var_65;
  MR_String Var_67;
  MR_String Var_68;
  MR_String Var_69;
  MR_String Var_71;
  MR_String Var_72;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_78;
  MR_String Var_80;
  MR_Word PredInfo0_82;
  MR_Word PredInfo_83;
  MR_Word Var_84;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &VarTable1_27);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable1_27, ArgVar_15, &VarType_28);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_21, &PredInfo0_82);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(VarType_28, Context_17, &TypeInfoVar_30, Goals_24, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, PredInfo0_82, &PredInfo_83, STATE_VARIABLE_ProcInfo_0_37, STATE_VARIABLE_ProcInfo_38);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[1]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (transform_hlds__complexity__generate_size_goal_14_p_0_1));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (PredInfo0_82));
    MR_hl_field(0, Var_84, 4) = ((MR_Box) (PredInfo_83));
  }
  mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "modified pred_info");
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(*STATE_VARIABLE_ProcInfo_38, &VarTable2_31);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable2_31, TypeInfoVar_30, &TypeInfoType_32);
  Var_44 = mercury__string__int_to_string_1_f_0(VarSeqNum_16);
  ArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_44);
  Var_46 = mercury__string__int_to_string_1_f_0(VarSeqNum_16);
  TypeInfoArgName_34 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", Var_46);
  Var_49 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (ArgName_33));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
  }
  {
    ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignArg_35, 0) = ((MR_Box) (ArgVar_15));
    MR_hl_field(0, ForeignArg_35, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, ForeignArg_35, 2) = ((MR_Box) (VarType_28));
    MR_hl_field(0, ForeignArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (TypeInfoArgName_34));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
  }
  {
    ForeignTypeInfoArg_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignTypeInfoArg_36, 0) = ((MR_Box) (TypeInfoVar_30));
    MR_hl_field(0, ForeignTypeInfoArg_36, 1) = ((MR_Box) (Var_51));
    MR_hl_field(0, ForeignTypeInfoArg_36, 2) = ((MR_Box) (TypeInfoType_32));
    MR_hl_field(0, ForeignTypeInfoArg_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (ForeignArg_35));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *ForeignArgs_25 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ForeignTypeInfoArg_36));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_55));
  }
  Var_68 = mercury__string__int_to_string_1_f_0(NumProfiledVars_18);
  Var_72 = mercury__string__int_to_string_1_f_0(VarSeqNum_16);
  Var_80 = mercury__string__f_43_43_2_f_0(ArgName_33, (MR_String) "));\n");
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_80);
  Var_77 = mercury__string__f_43_43_2_f_0(TypeInfoArgName_34, Var_78);
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "MR_term_size((MR_TypeInfo) ", Var_77);
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t", Var_75);
  Var_71 = mercury__string__f_43_43_2_f_0(Var_72, Var_73);
  Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_71);
  Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
  Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_67);
  Var_64 = mercury__string__f_43_43_2_f_0(SlotVarName_20, Var_65);
  Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_64);
  Var_61 = mercury__string__f_43_43_2_f_0(ProcVarName_19, Var_62);
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_61);
  Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_fill_size_slot", Var_59);
  *CodeStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_58);
}

static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void)
{
  return (MR_String) "SlotVar";
}

MR_Word MR_CALL 
transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(
  MR_Word ProcMap_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9)
{
  MR_bool succeeded;
  MR_Word IsInMap_10;
  MR_String FullName_11;
  MR_Integer ProcNum_12;
  MR_Box conv0_ProcNum_12;

  FullName_11 = transform_hlds__complexity__complexity_proc_name_3_f_0(ModuleInfo_7, PredId_8, ProcId_9);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcMap_6, ((MR_Box) (FullName_11)), &conv0_ProcNum_12);
  if (succeeded)
  {
    ProcNum_12 = ((MR_Integer) (conv0_ProcNum_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      IsInMap_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IsInMap_10, 0) = ((MR_Box) (ProcNum_12));
    }
  else
    IsInMap_10 = (MR_Word) ((MR_Unsigned) 0U);
  return IsInMap_10;
}

MR_String MR_CALL 
transform_hlds__complexity__complexity_proc_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_String FullName_8;
  MR_Word ModuleSymName_9;
  MR_Word PredInfo_10;
  MR_String PredName_11;
  MR_Word SymName_12;
  MR_Integer Arity_13;
  MR_String SNA_14;
  MR_Integer ProcIdInt_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_String Var_18;
  MR_String Var_20;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleSymName_9);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_10);
  PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
  {
    SymName_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_12, 0) = ((MR_Box) (ModuleSymName_9));
    MR_hl_field(1, SymName_12, 1) = ((MR_Box) (PredName_11));
  }
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_10, &Var_16);
  Arity_13 = (MR_Integer) (Var_16);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (Arity_13));
  }
  SNA_14 = parse_tree__parse_tree_out_sym_name__unescaped_sym_name_arity_to_string_1_f_0(Var_17);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_15);
  Var_20 = mercury__string__int_to_string_1_f_0(ProcIdInt_15);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_20);
  FullName_8 = mercury__string__f_43_43_2_f_0(SNA_14, Var_18);
  return FullName_8;
}

void MR_CALL 
transform_hlds__complexity__read_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeNumLinesProcMap_6)
{
  MR_Word ResStream_8;

  mercury__io__open_input_4_p_0(FileName_5, &ResStream_8);
  if (((MR_tag((MR_Word) ResStream_8)) == (MR_Integer) 1))
  {
    MR_Word Error_9 = ((MR_Word) ((MR_hl_field(1, ResStream_8, (MR_Integer) 0))));
    MR_String Var_18;

    Var_18 = mercury__io__error_message_1_f_0(Error_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeNumLinesProcMap_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
    }
  }
  else
  {
    MR_Word Stream_10 = ((MR_Word) ((MR_hl_field(0, ResStream_8, (MR_Integer) 0))));
    MR_Integer NumLines_11;
    MR_Word MaybeError_12;
    MR_Word ProcMap_13;
    MR_Word Var_20;

    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    transform_hlds__complexity__read_spec_file_lines_8_p_0(Stream_10, (MR_Integer) 0, &NumLines_11, &MaybeError_12, Var_20, &ProcMap_13);
    if ((MaybeError_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (NumLines_11));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (ProcMap_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeNumLinesProcMap_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_String Msg_14 = ((MR_String) ((MR_hl_field(1, MaybeError_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNumLinesProcMap_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_14));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__135__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
  MR_Word Stream_9,
  MR_Integer CurLineNum_10,
  MR_Integer * NumLines_11,
  MR_Word * MaybeError_12,
  MR_Word STATE_VARIABLE_ProcMap_0_21,
  MR_Word * STATE_VARIABLE_ProcMap_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ResLine_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_4_p_0(Stream_9, &ResLine_15);
    switch (MR_tag((MR_Word) ResLine_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *NumLines_11 = CurLineNum_10;
          *MaybeError_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ProcMap_22 = STATE_VARIABLE_ProcMap_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Chars0_17 = ((MR_Word) ((MR_hl_field(1, ResLine_15, (MR_Integer) 0))));
          MR_Word Chars_19;
          MR_String ProcName_20;
          MR_Word Var_18;
          MR_Word STATE_VARIABLE_ProcMap_29_29;

          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&transform_hlds__complexity_scalar_common_4[0]), Chars0_17, &Var_18, &Chars_19);
          mercury__string__from_char_list_2_p_0(Chars_19, &ProcName_20);
          succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcName_20)), ((MR_Box) (CurLineNum_10)), STATE_VARIABLE_ProcMap_0_21, &STATE_VARIABLE_ProcMap_29_29);
          if (succeeded)
          {
            MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) CurLineNum_10 + (MR_Unsigned) 1);
            MR_Integer next_value_of_CurLineNum_10 = Var_30;
            MR_Word next_value_of_STATE_VARIABLE_ProcMap_0_21 = STATE_VARIABLE_ProcMap_29_29;

            // direct tailcall eliminated
            ;
            CurLineNum_10 = next_value_of_CurLineNum_10;
            STATE_VARIABLE_ProcMap_0_21 = next_value_of_STATE_VARIABLE_ProcMap_0_21;
            continue;
          }
          else
          {
            MR_String Var_34;

            *NumLines_11 = CurLineNum_10;
            Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "repeated line: ", ProcName_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
            }
            *STATE_VARIABLE_ProcMap_22 = STATE_VARIABLE_ProcMap_0_21;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(2, ResLine_15, (MR_Integer) 0))));
          MR_String Var_26;

          *NumLines_11 = CurLineNum_10;
          Var_26 = mercury__io__error_message_1_f_0(Error_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
          }
          *STATE_VARIABLE_ProcMap_22 = STATE_VARIABLE_ProcMap_0_21;
        }
        break;
    }
    break;
  }
}

void mercury__transform_hlds__complexity__init(void)
{
}

void mercury__transform_hlds__complexity__init_type_tables(void)
{
}

void mercury__transform_hlds__complexity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__complexity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.complexity.
