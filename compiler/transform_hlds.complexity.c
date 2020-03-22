/*
** Automatically generated from `complexity.m'
** by the Mercury compiler,
** version rotd-2020-03-22
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(
  MR_Word PredInfo0_17,
  MR_Word PredInfo_21);

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(
  MR_Char HeadVar__1_27,
  MR_Char HeadVar__2_36);

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer NumProcs_9,
  MR_Integer ProcNum_10,
  MR_String FullName_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_75,
  MR_Word * STATE_VARIABLE_ProcInfo_76,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78);

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void);

static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word VarSet_4,
  MR_Word VarTypes_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word * Var_9);

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
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
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

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
  MR_Word Type_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoals_16);

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


static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__complexity_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(
  MR_Word PredInfo0_17,
  MR_Word PredInfo_21)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred____Unify____pred_info_0_0(PredInfo0_17, PredInfo_21);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_31)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__complexity_scalar_common_1[1]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_31)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(
  MR_Char HeadVar__1_27,
  MR_Char HeadVar__2_36)
{
  {
    MR_bool succeeded = (HeadVar__1_27 == HeadVar__2_36);

    return succeeded;
  }
}

void MR_CALL 
transform_hlds__complexity__complexity_process_proc_msg_7_p_0(
  MR_Integer NumProcs_8,
  MR_Word ProcMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_21,
  MR_Word * STATE_VARIABLE_ProcInfo_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 0))));
    MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 1))));
    MR_String FullName_36;
    MR_Integer ProcNum_37;
    MR_Box conv0_ProcNum_37;

    FullName_36 = transform_hlds__complexity__complexity_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_13, ProcId_14);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcMap_9, ((MR_Box) (FullName_36)), &conv0_ProcNum_37);
    if (succeeded)
    {
      ProcNum_37 = ((MR_Integer) (conv0_ProcNum_37));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String FullName_17;
      MR_Word Globals_18;
      MR_Word Verbose_19;

      FullName_17 = transform_hlds__complexity__complexity_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_13, ProcId_14);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &Globals_18);
      libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 65, &Verbose_19);
      switch (Verbose_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Applying complexity experiment transformation to ", PredId_13, ProcId_14, STATE_VARIABLE_ModuleInfo_0_23);
          break;
      }
      transform_hlds__complexity__complexity_process_proc_8_p_0(NumProcs_8, ProcNum_37, FullName_17, PredId_13, STATE_VARIABLE_ProcInfo_0_21, STATE_VARIABLE_ProcInfo_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    }
    else
    {
      *STATE_VARIABLE_ProcInfo_22 = STATE_VARIABLE_ProcInfo_0_21;
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    }
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer NumProcs_9,
  MR_Integer ProcNum_10,
  MR_String FullName_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_75,
  MR_Word * STATE_VARIABLE_ProcInfo_76,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78)
{
  {
    MR_Word Detism_15;
    MR_Word CodeModel_16;
    MR_Word HeadVars_17;
    MR_Word ArgModes_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word OrigGoal_21;
    MR_Word Context_22;
    MR_Word OrigGoalInfo_23;
    MR_Word OrigNonLocals_24;
    MR_Word OrigInstMapDelta_26;
    MR_Word ImpureOrigGoalInfo_27;
    MR_Word IsActiveVar_29;
    MR_Word VarInfos_30;
    MR_Word NumberedProfiledVars_31;
    MR_Integer NumProfiledVars_32;
    MR_Word SlotVar_33;
    MR_String SlotVarName_34;
    MR_Word SlotGoals_35;
    MR_Word IsActiveOutputArg_36;
    MR_Word SlotInputArg_37;
    MR_String ProcNumStr_38;
    MR_String IsActiveStr_40;
    MR_Word IsActiveGoal_41;
    MR_String ExitStr_43;
    MR_Word ExitGoal_44;
    MR_String FailStr_46;
    MR_Word FailGoal_47;
    MR_String RedoStr_49;
    MR_Word RedoGoal0_50;
    MR_Word TransGoal_52;
    MR_Word TSPB_62;
    MR_Word TypeCtor_63;
    MR_Word SwitchArms_64;
    MR_Word SwitchExpr_65;
    MR_Word SwitchGoalInfo_66;
    MR_Word SwitchGoal_67;
    MR_Word GoalExpr_68;
    MR_Word GoalInfo_69;
    MR_Word Goal_70;
    MR_Word Infos_71;
    MR_Word ComplexityInfo_72;
    MR_Word ComplexityInfos0_73;
    MR_Word ComplexityInfos_74;
    MR_Word Var_80;
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

    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &Detism_15);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_15, &CodeModel_16);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &HeadVars_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &ArgModes_18);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &VarSet_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &VarTypes_20);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_75, &OrigGoal_21);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_17, &OrigNonLocals_24);
    OrigGoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_21, (MR_Integer) 1))));
    Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_23);
    OrigInstMapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_23);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, OrigGoalInfo_23, &ImpureOrigGoalInfo_27);
    Var_80 = transform_hlds__complexity__is_active_type_0_f_0();
    transform_hlds__complexity__generate_new_var_5_p_0((MR_String) "IsActive", Var_80, STATE_VARIABLE_ProcInfo_0_75, &STATE_VARIABLE_ProcInfo_81_81, &IsActiveVar_29);
    transform_hlds__complexity__classify_args_6_p_0(HeadVars_17, ArgModes_18, STATE_VARIABLE_ModuleInfo_0_77, VarSet_19, VarTypes_20, &VarInfos_30);
    transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(VarInfos_30, (MR_Integer) 0, &NumberedProfiledVars_31);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__complexity_scalar_common_2[0]), NumberedProfiledVars_31, &NumProfiledVars_32);
    transform_hlds__complexity__generate_slot_goals_12_p_0(ProcNum_10, NumberedProfiledVars_31, NumProfiledVars_32, Context_22, PredId_12, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ModuleInfo_0_77, &STATE_VARIABLE_ModuleInfo_84_84, &SlotVar_33, &SlotVarName_34, &SlotGoals_35);
    Var_87 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) ((MR_String) "IsActive"));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
    }
    Var_88 = transform_hlds__complexity__is_active_type_0_f_0();
    {
      IsActiveOutputArg_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsActiveOutputArg_36, 0) = ((MR_Box) (IsActiveVar_29));
      MR_hl_field(MR_mktag(0), IsActiveOutputArg_36, 1) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), IsActiveOutputArg_36, 2) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), IsActiveOutputArg_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_92 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (SlotVarName_34));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
    }
    Var_93 = parse_tree__builtin_lib_types__int_type_0_f_0();
    {
      SlotInputArg_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotInputArg_37, 0) = ((MR_Box) (SlotVar_33));
      MR_hl_field(MR_mktag(0), SlotInputArg_37, 1) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), SlotInputArg_37, 2) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), SlotInputArg_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    ProcNumStr_38 = mercury__string__int_to_string_1_f_0(ProcNum_10);
    Var_100 = mercury__string__int_to_string_1_f_0(NumProcs_9);
    Var_110 = mercury__string__int_to_string_1_f_0(NumProfiledVars_32);
    Var_109 = mercury__string__f_43_43_2_f_0(Var_110, (MR_String) ", IsActive);\n");
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_109);
    Var_106 = mercury__string__f_43_43_2_f_0(FullName_11, Var_107);
    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", Var_106);
    Var_103 = mercury__string__f_43_43_2_f_0(ProcNumStr_38, Var_104);
    Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_103);
    Var_99 = mercury__string__f_43_43_2_f_0(Var_100, Var_101);
    Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_99);
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_is_active", Var_97);
    IsActiveStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_96);
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (IsActiveOutputArg_36));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (IsActiveVar_29));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_is_active", (MR_Integer) 0, Var_116, (MR_Word) ((MR_Unsigned) 0U), IsActiveStr_40, Var_118, STATE_VARIABLE_ModuleInfo_84_84, Context_22, &IsActiveGoal_41);
    Var_129 = transform_hlds__complexity__slot_var_name_0_f_0();
    Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ");\n");
    Var_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_128);
    Var_125 = mercury__string__f_43_43_2_f_0(ProcNumStr_38, Var_126);
    Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_125);
    Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_exit_proc", Var_123);
    ExitStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_122);
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (SlotInputArg_37));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_exit_proc", (MR_Integer) 0, Var_132, (MR_Word) ((MR_Unsigned) 0U), ExitStr_43, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_22, &ExitGoal_44);
    Var_144 = transform_hlds__complexity__slot_var_name_0_f_0();
    Var_143 = mercury__string__f_43_43_2_f_0(Var_144, (MR_String) ");\n");
    Var_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_143);
    Var_140 = mercury__string__f_43_43_2_f_0(ProcNumStr_38, Var_141);
    Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_140);
    Var_137 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_fail_proc", Var_138);
    FailStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_137);
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_fail_proc", (MR_Integer) 7, Var_132, (MR_Word) ((MR_Unsigned) 0U), FailStr_46, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_22, &FailGoal_47);
    Var_159 = transform_hlds__complexity__slot_var_name_0_f_0();
    Var_158 = mercury__string__f_43_43_2_f_0(Var_159, (MR_String) ");\n");
    Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_158);
    Var_155 = mercury__string__f_43_43_2_f_0(ProcNumStr_38, Var_156);
    Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_155);
    Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_redo_proc", Var_153);
    RedoStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_152);
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_redo_proc", (MR_Integer) 7, Var_132, (MR_Word) ((MR_Unsigned) 0U), RedoStr_49, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_84_84, Context_22, &RedoGoal0_50);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TransformedGoalExpr_51;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_205;

          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (ExitGoal_44));
            MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (OrigGoal_21));
            MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_205));
          }
          Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_35, Var_204);
          {
            TransformedGoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TransformedGoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), TransformedGoalExpr_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), TransformedGoalExpr_51, 2) = ((MR_Box) (Var_203));
          }
          {
            TransGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TransGoal_52, 0) = ((MR_Box) (TransformedGoalExpr_51));
            MR_hl_field(MR_mktag(0), TransGoal_52, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RedoGoalExpr_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RedoGoal0_50, (MR_Integer) 0))));
          MR_Word RedoGoalInfo0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RedoGoal0_50, (MR_Integer) 1))));
          MR_Word RedoGoalInfo_57;
          MR_Word RedoGoal_58;
          MR_Word AfterInstMapDelta_59;
          MR_Word AfterGoalInfo_60;
          MR_Word AfterGoal_61;
          MR_Word Var_167;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_174;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_183;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word OrigAfterGoal_233;
          MR_Word DisjGoal_234;

          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, RedoGoalInfo0_56, &RedoGoalInfo_57);
          {
            RedoGoal_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RedoGoal_58, 0) = ((MR_Box) (RedoGoalExpr_55));
            MR_hl_field(MR_mktag(0), RedoGoal_58, 1) = ((MR_Box) (RedoGoalInfo_57));
          }
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&AfterInstMapDelta_59);
          Var_167 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SlotVar_33);
          hlds__hlds_goal__goal_info_init_6_p_0(Var_167, AfterInstMapDelta_59, (MR_Integer) 2, (MR_Integer) 2, Context_22, &AfterGoalInfo_60);
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (RedoGoal_58));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (ExitGoal_44));
            MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_170, 1) = ((MR_Box) (Var_171));
          }
          {
            AfterGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AfterGoal_61, 0) = ((MR_Box) (Var_170));
            MR_hl_field(MR_mktag(0), AfterGoal_61, 1) = ((MR_Box) (AfterGoalInfo_60));
          }
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (AfterGoal_61));
            MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (OrigGoal_21));
            MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_177));
          }
          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_174, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) (Var_176));
          }
          {
            OrigAfterGoal_233 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OrigAfterGoal_233, 0) = ((MR_Box) (Var_174));
            MR_hl_field(MR_mktag(0), OrigAfterGoal_233, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (FailGoal_47));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (OrigAfterGoal_233));
            MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_181));
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_179, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_179, 1) = ((MR_Box) (Var_180));
          }
          {
            DisjGoal_234 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DisjGoal_234, 0) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), DisjGoal_234, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (DisjGoal_234));
            MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_35, Var_186);
          {
            Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_183, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_183, 2) = ((MR_Box) (Var_185));
          }
          {
            TransGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TransGoal_52, 0) = ((MR_Box) (Var_183));
            MR_hl_field(MR_mktag(0), TransGoal_52, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OrigAfterGoal_53;
          MR_Word DisjGoal_54;
          MR_Word Var_188;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_193;
          MR_Word Var_194;
          MR_Word Var_195;
          MR_Word Var_197;
          MR_Word Var_199;
          MR_Word Var_200;

          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (ExitGoal_44));
            MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (OrigGoal_21));
            MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_191));
          }
          {
            Var_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_188, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_188, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_188, 2) = ((MR_Box) (Var_190));
          }
          {
            OrigAfterGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OrigAfterGoal_53, 0) = ((MR_Box) (Var_188));
            MR_hl_field(MR_mktag(0), OrigAfterGoal_53, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
          {
            Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (FailGoal_47));
            MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (OrigAfterGoal_53));
            MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_195));
          }
          {
            Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_193, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_193, 1) = ((MR_Box) (Var_194));
          }
          {
            DisjGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DisjGoal_54, 0) = ((MR_Box) (Var_193));
            MR_hl_field(MR_mktag(0), DisjGoal_54, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
          {
            Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (DisjGoal_54));
            MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SlotGoals_35, Var_200);
          {
            Var_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_197, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_197, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_197, 2) = ((MR_Box) (Var_199));
          }
          {
            TransGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TransGoal_52, 0) = ((MR_Box) (Var_197));
            MR_hl_field(MR_mktag(0), TransGoal_52, 1) = ((MR_Box) (ImpureOrigGoalInfo_27));
          }
        }
        break;
    }
    TSPB_62 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (TSPB_62));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
    }
    {
      TypeCtor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_63, 0) = ((MR_Box) (Var_207));
      MR_hl_field(MR_mktag(0), TypeCtor_63, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (TSPB_62));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_String) "is_inactive"));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_211, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_211, 1) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(3), Var_211, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_211, 3) = ((MR_Box) (TypeCtor_63));
    }
    {
      Var_210 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_210, 0) = ((MR_Box) (Var_211));
      MR_hl_field(MR_mktag(0), Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_210, 2) = ((MR_Box) (TransGoal_52));
    }
    {
      Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (TSPB_62));
      MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) ((MR_String) "is_active"));
    }
    {
      Var_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_218, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_218, 1) = ((MR_Box) (Var_219));
      MR_hl_field(MR_mktag(3), Var_218, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_218, 3) = ((MR_Box) (TypeCtor_63));
    }
    {
      Var_217 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_217, 0) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(0), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_217, 2) = ((MR_Box) (OrigGoal_21));
    }
    {
      Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SwitchArms_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchArms_64, 0) = ((MR_Box) (Var_210));
      MR_hl_field(MR_mktag(1), SwitchArms_64, 1) = ((MR_Box) (Var_216));
    }
    {
      SwitchExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchExpr_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), SwitchExpr_65, 1) = ((MR_Box) (IsActiveVar_29));
      MR_hl_field(MR_mktag(3), SwitchExpr_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SwitchExpr_65, 3) = ((MR_Box) (SwitchArms_64));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_24, OrigInstMapDelta_26, Detism_15, (MR_Integer) 2, Context_22, &SwitchGoalInfo_66);
    {
      SwitchGoal_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchGoal_67, 0) = ((MR_Box) (SwitchExpr_65));
      MR_hl_field(MR_mktag(0), SwitchGoal_67, 1) = ((MR_Box) (SwitchGoalInfo_66));
    }
    {
      Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (SwitchGoal_67));
      MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (IsActiveGoal_41));
      MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (Var_228));
    }
    {
      GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_68, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_68, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_68, 2) = ((MR_Box) (Var_227));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_24, OrigInstMapDelta_26, Detism_15, (MR_Integer) 2, Context_22, &GoalInfo_69);
    {
      Goal_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_70, 0) = ((MR_Box) (GoalExpr_68));
      MR_hl_field(MR_mktag(0), Goal_70, 1) = ((MR_Box) (GoalInfo_69));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_70, STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ProcInfo_76);
    mercury__assoc_list__values_2_p_0((MR_Word) (&transform_hlds__complexity_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), VarInfos_30, &Infos_71);
    {
      ComplexityInfo_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ComplexityInfo_72, 0) = ((MR_Box) (ProcNum_10));
      MR_hl_field(MR_mktag(0), ComplexityInfo_72, 1) = ((MR_Box) (FullName_11));
      MR_hl_field(MR_mktag(0), ComplexityInfo_72, 2) = ((MR_Box) (Infos_71));
    }
    hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(STATE_VARIABLE_ModuleInfo_84_84, &ComplexityInfos0_73);
    {
      ComplexityInfos_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ComplexityInfos_74, 0) = ((MR_Box) (ComplexityInfo_72));
      MR_hl_field(MR_mktag(1), ComplexityInfos_74, 1) = ((MR_Box) (ComplexityInfos0_73));
    }
    hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(ComplexityInfos_74, STATE_VARIABLE_ModuleInfo_84_84, STATE_VARIABLE_ModuleInfo_78);
  }
}

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word M_3;
    MR_Word Var_4;
    MR_Word Var_6;

    M_3 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (M_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
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
      MR_Word VarInfos_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Kind_11;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      Info_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      Kind_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 3);
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
              MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_5));
              MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Offset_2));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NumberedProfiledVarsTail_12));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word VarSet_4,
  MR_Word VarTypes_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
          return;
        }
    else
    {
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
          return;
        }
      else
      {
        MR_Word Mode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word MaybeName_33;
        MR_Word Kind_34;
        MR_Word VarInfos_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_String Name_36;

        transform_hlds__complexity__classify_args_6_p_0(Var_41, Modes_29, ModuleInfo_3, VarSet_4, VarTypes_5, &VarInfos_35);
        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_42, &Name_36);
        if (succeeded)
          {
            MaybeName_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeName_33, 0) = ((MR_Box) (Name_36));
          }
        else
          MaybeName_33 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_3, Mode_28);
        if (succeeded)
        {
          MR_Word VarType_37;

          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_42, &VarType_37);
          succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(ModuleInfo_3, VarType_37);
          if (succeeded)
            Kind_34 = (MR_Integer) 1;
          else
            Kind_34 = (MR_Integer) 0;
        }
        else
          Kind_34 = (MR_Integer) 2;
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (MaybeName_33));
          MR_hl_field(MR_mktag(0), Var_39, 1) = (MR_Box) ((MR_Unsigned) (Kind_34));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarInfos_35));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word * Var_9)
{
  {
    MR_Word VarSet0_10;
    MR_Word VarTypes0_11;
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word STATE_VARIABLE_ProcInfo_16_16;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarSet0_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &VarTypes0_11);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_6, Var_9, VarSet0_10, &VarSet_12);
    hlds__vartypes__add_var_type_4_p_0(*Var_9, Type_7, VarTypes0_11, &VarTypes_13);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_12, STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_ProcInfo_16_16);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_13, STATE_VARIABLE_ProcInfo_16_16, STATE_VARIABLE_ProcInfo_15);
  }
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
  {
    MR_Word PrefixGoals_24;
    MR_Word ForeignArgs_25;
    MR_String FillCodeStr_26;
    MR_Word SlotVarArg_27;
    MR_String PredCodeStr_30;
    MR_String ProcStr_31;
    MR_Word CallGoal_32;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ProcInfo_38_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_50;
    MR_String Var_51;
    MR_String Var_53;
    MR_String Var_54;
    MR_String Var_60;
    MR_String Var_61;
    MR_String Var_63;
    MR_String Var_64;
    MR_Word Var_67;
    MR_String Var_68;
    MR_Word Var_69;
    MR_String Var_71;
    MR_String Var_72;
    MR_Word Var_74;
    MR_Word VarSet0_83;
    MR_Word VarTypes0_84;
    MR_Word VarSet_85;
    MR_Word VarTypes_86;
    MR_Word STATE_VARIABLE_ProcInfo_16_87;

    *SlotVarName_21 = (MR_String) "SlotVar";
    Var_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &VarSet0_83);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &VarTypes0_84);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *SlotVarName_21, SlotVar_20, VarSet0_83, &VarSet_85);
    hlds__vartypes__add_var_type_4_p_0(*SlotVar_20, Var_37, VarTypes0_84, &VarTypes_86);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_85, STATE_VARIABLE_ProcInfo_0_33, &STATE_VARIABLE_ProcInfo_16_87);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_86, STATE_VARIABLE_ProcInfo_16_87, &STATE_VARIABLE_ProcInfo_38_38);
    transform_hlds__complexity__generate_size_goals_13_p_0(NumberedVars_14, Context_16, NumProfiledVars_15, (MR_String) "proc", *SlotVarName_21, PredId_17, STATE_VARIABLE_ProcInfo_38_38, STATE_VARIABLE_ProcInfo_34, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36, &PrefixGoals_24, &ForeignArgs_25, &FillCodeStr_26);
    Var_43 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (*SlotVarName_21));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
    }
    Var_44 = parse_tree__builtin_lib_types__int_type_0_f_0();
    {
      SlotVarArg_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotVarArg_27, 0) = ((MR_Box) (*SlotVar_20));
      MR_hl_field(MR_mktag(0), SlotVarArg_27, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), SlotVarArg_27, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), SlotVarArg_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_54 = mercury__string__int_to_string_1_f_0(ProcNum_13);
    Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ", SlotVar);\n");
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_53);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_call_proc", Var_51);
    PredCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", Var_50);
    Var_64 = mercury__string__int_to_string_1_f_0(ProcNum_13);
    Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) "];\n");
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) " = &MR_complexity_procs[", Var_63);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "proc", Var_61);
    ProcStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_60);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (SlotVarArg_27));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_72 = mercury__string__f_43_43_2_f_0(ProcStr_31, FillCodeStr_26);
    Var_71 = mercury__string__f_43_43_2_f_0(PredCodeStr_30, Var_72);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_ComplexityProc *proc;\n", Var_71);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (*SlotVar_20));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_call_proc", (MR_Integer) 0, Var_67, ForeignArgs_25, Var_68, Var_69, *STATE_VARIABLE_ModuleInfo_36, Context_16, &CallGoal_32);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (CallGoal_32));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_24, Var_74, Goals_22);
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
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
  {
    MR_Word BuiltinModule_19;
    MR_Word Attrs0_20;
    MR_Word Attrs_21;
    MR_Word Var_29;

    BuiltinModule_19 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    Attrs0_20 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_20, &Attrs_21);
    Var_29 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_15);
    hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_16, BuiltinModule_19, PredName_10, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Detism_11, (MR_Integer) 2, Attrs_21, Args_12, ExtraArgs_13, (MR_Word) ((MR_Unsigned) 0U), Code_14, (MR_Word) ((MR_Unsigned) 0U), Var_29, Context_17, Goal_18);
  }
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
    MR_Word NumberedVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goals_35;
    MR_Word RestGoals_36;
    MR_Word ForeignArgs_37;
    MR_Word RestForeignArgs_38;
    MR_String CodeStr_39;
    MR_String RestCodeStr_40;
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_ModuleInfo_47_47;

    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
    VarSeqNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1))));
    transform_hlds__complexity__generate_size_goal_14_p_0(Var_25, VarSeqNum_26, Context_2, NumProfiledVars_3, ProcVarName_4, SlotVarName_5, PredId_6, STATE_VARIABLE_ProcInfo_0_7, &STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_47_47, &Goals_35, &ForeignArgs_37, &CodeStr_39);
    transform_hlds__complexity__generate_size_goals_13_p_0(NumberedVars_27, Context_2, NumProfiledVars_3, ProcVarName_4, SlotVarName_5, PredId_6, STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ProcInfo_8, STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_ModuleInfo_10, &RestGoals_36, &RestForeignArgs_38, &RestCodeStr_40);
    *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_35, RestGoals_36);
    *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ForeignArgs_37, RestForeignArgs_38);
    *HeadVar__13_13 = mercury__string__f_43_43_2_f_0(CodeStr_39, RestCodeStr_40);
  }
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
  {
    MR_Word VarTypes1_27;
    MR_Word VarType_28;
    MR_Word TypeInfoVar_30;
    MR_Word VarTypes2_31;
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

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_37, &VarTypes1_27);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes1_27, ArgVar_15, &VarType_28);
    transform_hlds__complexity__make_type_info_var_9_p_0(VarType_28, Context_17, PredId_21, STATE_VARIABLE_ProcInfo_0_37, STATE_VARIABLE_ProcInfo_38, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, &TypeInfoVar_30, Goals_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*STATE_VARIABLE_ProcInfo_38, &VarTypes2_31);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes2_31, TypeInfoVar_30, &TypeInfoType_32);
    Var_44 = mercury__string__int_to_string_1_f_0(VarSeqNum_16);
    ArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_44);
    Var_46 = mercury__string__int_to_string_1_f_0(VarSeqNum_16);
    TypeInfoArgName_34 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", Var_46);
    Var_49 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (ArgName_33));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
    }
    {
      ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignArg_35, 0) = ((MR_Box) (ArgVar_15));
      MR_hl_field(MR_mktag(0), ForeignArg_35, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), ForeignArg_35, 2) = ((MR_Box) (VarType_28));
      MR_hl_field(MR_mktag(0), ForeignArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (TypeInfoArgName_34));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
    }
    {
      ForeignTypeInfoArg_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_36, 0) = ((MR_Box) (TypeInfoVar_30));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_36, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_36, 2) = ((MR_Box) (TypeInfoType_32));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ForeignArg_35));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ForeignArgs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignTypeInfoArg_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_55));
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
}

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
  MR_Word Type_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoals_16)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_17;
    MR_Word PolyInfo0_18;
    MR_Word PolyInfo_19;
    MR_Word PolySpecs_20;
    MR_Word PredInfo_21;
    MR_Word Var_28;
    MR_Word Var_32;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, PredId_12, &PredInfo0_17);
    check_hlds__polymorphism__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_24, PredInfo0_17, STATE_VARIABLE_ProcInfo_0_22, &PolyInfo0_18);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(Type_10, Context_11, TypeInfoVar_15, TypeInfoGoals_16, PolyInfo0_18, &PolyInfo_19);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_19, &PolySpecs_20, PredInfo0_17, &PredInfo_21, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23, STATE_VARIABLE_ModuleInfo_25);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (PolySpecs_20));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "got errors while making type_info_var");
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (PredInfo0_17));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (PredInfo_21));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "modified pred_info");
  }
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
        IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IsInMap_10, 0) = ((MR_Box) (ProcNum_12));
      }
    else
      IsInMap_10 = (MR_Word) ((MR_Unsigned) 0U);
    return IsInMap_10;
  }
}

MR_String MR_CALL 
transform_hlds__complexity__complexity_proc_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_String FullName_8;
    MR_Word ModuleSymName_9;
    MR_Word PredInfo_10;
    MR_String PredName_11;
    MR_Word QualifiedName_12;
    MR_Integer Arity_13;
    MR_String NameAndArity_14;
    MR_Integer ProcIdInt_15;
    MR_Word Var_16;
    MR_String Var_17;
    MR_String Var_19;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleSymName_9);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_10);
    PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
    {
      QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 0) = ((MR_Box) (ModuleSymName_9));
      MR_hl_field(MR_mktag(1), QualifiedName_12, 1) = ((MR_Box) (PredName_11));
    }
    Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_10);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (QualifiedName_12));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_13));
    }
    NameAndArity_14 = parse_tree__prog_out__sym_name_arity_to_string_1_f_0(Var_16);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_15);
    Var_19 = mercury__string__int_to_string_1_f_0(ProcIdInt_15);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_19);
    FullName_8 = mercury__string__f_43_43_2_f_0(NameAndArity_14, Var_17);
    return FullName_8;
  }
}

void MR_CALL 
transform_hlds__complexity__read_spec_file_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeNumLinesProcMap_6)
{
  {
    MR_Word ResStream_8;

    mercury__io__open_input_4_p_0(FileName_5, &ResStream_8);
    if (((MR_tag((MR_Word) ResStream_8)) == (MR_Integer) 1))
    {
      MR_Word Error_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResStream_8, (MR_Integer) 0))));
      MR_String Var_22;

      Var_22 = mercury__io__error_message_1_f_0(Error_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNumLinesProcMap_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Word Stream_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResStream_8, (MR_Integer) 0))));
      MR_Integer NumLines_11;
      MR_Word MaybeError_12;
      MR_Word ProcMap_13;
      MR_Word Var_19;

      Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      transform_hlds__complexity__read_spec_file_lines_8_p_0(Stream_10, (MR_Integer) 0, &NumLines_11, &MaybeError_12, Var_19, &ProcMap_13);
      if ((MaybeError_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (NumLines_11));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ProcMap_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeNumLinesProcMap_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        MR_String Msg_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_12, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNumLinesProcMap_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_14));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
          MR_Word Chars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResLine_15, (MR_Integer) 0))));
          MR_Word Chars_19;
          MR_String ProcName_20;
          MR_Word Var_18;
          MR_Word STATE_VARIABLE_ProcMap_28_28;

          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&transform_hlds__complexity_scalar_common_4[0]), Chars0_17, &Var_18, &Chars_19);
          mercury__string__from_char_list_2_p_0(Chars_19, &ProcName_20);
          succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcName_20)), ((MR_Box) (CurLineNum_10)), STATE_VARIABLE_ProcMap_0_21, &STATE_VARIABLE_ProcMap_28_28);
          if (succeeded)
          {
            MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) CurLineNum_10 + (MR_Unsigned) 1);
            MR_Integer next_value_of_CurLineNum_10 = Var_29;
            MR_Word next_value_of_STATE_VARIABLE_ProcMap_0_21 = STATE_VARIABLE_ProcMap_28_28;

            // direct tailcall eliminated
            ;
            CurLineNum_10 = next_value_of_CurLineNum_10;
            STATE_VARIABLE_ProcMap_0_21 = next_value_of_STATE_VARIABLE_ProcMap_0_21;
            continue;
          }
          else
          {
            MR_String Var_33;

            *NumLines_11 = CurLineNum_10;
            Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "repeated line: ", ProcName_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
            }
            *STATE_VARIABLE_ProcMap_22 = STATE_VARIABLE_ProcMap_0_21;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResLine_15, (MR_Integer) 0))));
          MR_String Var_35;

          *NumLines_11 = CurLineNum_10;
          Var_35 = mercury__io__error_message_1_f_0(Error_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
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
