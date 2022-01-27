/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2022-01-01
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


// :- module check_hlds.modecheck_call.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_call__init
ENDINIT
*/

#include "check_hlds.modecheck_call.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "hlds.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__487__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_higher_order_call__428__1_2_p_0(
  MR_Word TypePredOrFunc_28,
  MR_Word TypeHOPredOrFunc_33);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__115__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MatchingProcIds_0_5,
  MR_Word * STATE_VARIABLE_MatchingProcIds_6,
  MR_Word STATE_VARIABLE_RevProcInitialInsts_0_7,
  MR_Word * STATE_VARIABLE_RevProcInitialInsts_8,
  MR_Word STATE_VARIABLE_WaitingVars_0_9,
  MR_Word * STATE_VARIABLE_WaitingVars_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12);

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ProcArgModes_11,
  MR_Word ArgVars0_12,
  MR_Integer ArgOffset_13,
  MR_Word InstVarSub_14,
  MR_Word * ArgVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26);

static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars_10,
  MR_Word ProcInitialInsts_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24);

static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);


static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[2][5];




static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__487__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_18)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ExtraGoals_11, HeadVar__2_18);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_higher_order_call__428__1_2_p_0(
  MR_Word TypePredOrFunc_28,
  MR_Word TypeHOPredOrFunc_33)
{
  {
    MR_bool succeeded = (TypePredOrFunc_28 == TypeHOPredOrFunc_33);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__115__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (PredOrFunc_29 == HeadVar__2_66);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(
  MR_Word Modes_8,
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word * Det_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  {
    MR_Word ModuleInfo0_26;
    MR_Word ExpectedArgLives_27;
    MR_Word InitialInsts_28;
    MR_Word InstVarSub_29;
    MR_Word FinalInsts0_30;
    MR_Word FinalInsts_31;
    MR_Word STATE_VARIABLE_ModeInfo_22_32;
    MR_Word STATE_VARIABLE_ModeInfo_23_33;

    *Det_11 = (MR_Integer) 0;
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo0_26);
    check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_26, Modes_8, &ExpectedArgLives_27);
    check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_9, ExpectedArgLives_27, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_22_32);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_26, Modes_8, &InitialInsts_28);
    check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(Args0_9, InitialInsts_28, (MR_Integer) 0, &InstVarSub_29, STATE_VARIABLE_ModeInfo_22_32, &STATE_VARIABLE_ModeInfo_23_33);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_26, Modes_8, &FinalInsts0_30);
    parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_29, FinalInsts0_30, &FinalInsts_31);
    check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_9, InitialInsts_28, FinalInsts_31, (MR_Integer) 0, Args_10, ExtraGoals_12, STATE_VARIABLE_ModeInfo_23_33, STATE_VARIABLE_ModeInfo_16);
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__487__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0(
  MR_Word Modes_6,
  MR_Word Args0_7,
  MR_Word * Args_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word ExtraGoals_11;
    MR_Word Var_15;
    MR_Word ModuleInfo0_28;
    MR_Word ExpectedArgLives_29;
    MR_Word InitialInsts_30;
    MR_Word InstVarSub_31;
    MR_Word FinalInsts0_32;
    MR_Word FinalInsts_33;
    MR_Word STATE_VARIABLE_ModeInfo_22_34;
    MR_Word STATE_VARIABLE_ModeInfo_23_35;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_28);
    check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_28, Modes_6, &ExpectedArgLives_29);
    check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_7, ExpectedArgLives_29, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_22_34);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_28, Modes_6, &InitialInsts_30);
    check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(Args0_7, InitialInsts_30, (MR_Integer) 0, &InstVarSub_31, STATE_VARIABLE_ModeInfo_22_34, &STATE_VARIABLE_ModeInfo_23_35);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_28, Modes_6, &FinalInsts0_32);
    parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_31, FinalInsts0_32, &FinalInsts_33);
    check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_7, InitialInsts_30, FinalInsts_33, (MR_Integer) 0, Args_8, &ExtraGoals_11, STATE_VARIABLE_ModeInfo_23_35, STATE_VARIABLE_ModeInfo_13);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_event_call_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ExtraGoals_11));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", (MR_String) "ExtraGoals");
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_higher_order_call__428__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredVar_11,
  MR_Word Args0_12,
  MR_Word * Args_13,
  MR_Word * Modes_14,
  MR_Word * Det_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_50,
  MR_Word * STATE_VARIABLE_ModeInfo_51)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_18;
    MR_Word PredVarInst0_19;
    MR_Word ModuleInfo0_20;
    MR_Word PredVarInst_21;
    MR_Integer Arity_22;
    MR_Word ModesPrime_38;
    MR_Word DetPrime_40;
    MR_Word TypeCtorInfo_69_69;
    MR_Word HOInstInfo_24;
    MR_Word PredInstInfo_25;
    MR_Word Var_72;
    MR_Integer Var_73;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &InstMap0_18);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, PredVar_11, &PredVarInst0_19);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &ModuleInfo0_20);
    check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_20, PredVarInst0_19, &PredVarInst_21);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), Args0_12, &Arity_22);
    if (((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 2))
    {
      HOInstInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PredVarInst_21, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PredVarInst_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      HOInstInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PredVarInst_21, (MR_Integer) 2))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      if ((HOInstInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word VarTypes_26;
        MR_Word Type_27;
        MR_Word TypePredOrFunc_28;
        MR_Word ArgTypes_29;
        MR_Word TypeHOInstInfo_30;
        MR_Word Var_52;

        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &VarTypes_26);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_26, PredVar_11, &Type_27);
        Var_52 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type_27);
        succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          TypePredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1))) & (MR_Integer) 1);
          ArgTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 2))));
          TypeHOInstInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 3))));
          if ((TypeHOInstInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeCtorInfo_68_68;
            MR_Integer NumArgs_37;

            succeeded = (TypePredOrFunc_28 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_68_68 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__list__length_2_p_0(TypeCtorInfo_68_68, ArgTypes_29, &NumArgs_37);
              PredInstInfo_25 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(NumArgs_37);
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word TypeHOPredOrFunc_33;
            MR_Word Var_53;

            PredInstInfo_25 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_30), (MR_Integer) 1));
            TypeHOPredOrFunc_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_25, (MR_Integer) 0))) & (MR_Integer) 1);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TypePredOrFunc_28));
              MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (TypeHOPredOrFunc_33));
            }
            mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_higher_order_call\'/9", (MR_String) "TypePredOrFunc != TypeHOPredOrFunc");
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        PredInstInfo_25 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_24), (MR_Integer) 1));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_25, (MR_Integer) 0))) & (MR_Integer) 1);
        ModesPrime_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_25, (MR_Integer) 1))));
        DetPrime_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_25, (MR_Integer) 3))) & (MR_Integer) 7);
        succeeded = (PredOrFunc_10 == Var_72);
        if (succeeded)
        {
          TypeCtorInfo_69_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          mercury__list__length_2_p_0(TypeCtorInfo_69_69, ModesPrime_38, &Var_73);
          succeeded = (Arity_22 == Var_73);
        }
      }
    }
    if (succeeded)
    {
      MR_Word A_41;
      MR_Word B_42;
      MR_Word Reason_43;

      succeeded = ((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 2);
      if (succeeded)
      {
        A_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), PredVarInst_21, (MR_Integer) 0))) & (MR_Integer) 7);
        B_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PredVarInst_21, (MR_Integer) 1))));
        succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_50, PredVar_11, &Reason_43);
      }
      if (succeeded)
      {
        MR_Word BetterPredVarInst_44;
        MR_Word WaitingVars_45;
        MR_Word ModeError_46;

        {
          BetterPredVarInst_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), BetterPredVarInst_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), BetterPredVarInst_44, 1) = (MR_Box) ((MR_Unsigned) (A_41));
          MR_hl_field(MR_mktag(3), BetterPredVarInst_44, 2) = ((MR_Box) (B_42));
        }
        WaitingVars_45 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_11);
        {
          ModeError_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_46, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), ModeError_46, 1) = ((MR_Box) (Reason_43));
          MR_hl_field(MR_mktag(3), ModeError_46, 2) = ((MR_Box) (PredVar_11));
          MR_hl_field(MR_mktag(3), ModeError_46, 3) = ((MR_Box) (PredVarInst_21));
          MR_hl_field(MR_mktag(3), ModeError_46, 4) = ((MR_Box) (BetterPredVarInst_44));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_45, ModeError_46, STATE_VARIABLE_ModeInfo_0_50, STATE_VARIABLE_ModeInfo_51);
        *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
        *Det_15 = (MR_Integer) 6;
        *Args_13 = Args0_12;
        *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word STATE_VARIABLE_ModeInfo_57_57;
        MR_Word ModuleInfo0_83;
        MR_Word ExpectedArgLives_84;
        MR_Word InitialInsts_85;
        MR_Word InstVarSub_86;
        MR_Word FinalInsts0_87;
        MR_Word FinalInsts_88;
        MR_Word STATE_VARIABLE_ModeInfo_22_89;
        MR_Word STATE_VARIABLE_ModeInfo_23_90;
        MR_Word Var_74;
        MR_Word Var_48;

        *Det_15 = DetPrime_40;
        *Modes_14 = ModesPrime_38;
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_50, &ModuleInfo0_83);
        check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_83, *Modes_14, &ExpectedArgLives_84);
        check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_12, ExpectedArgLives_84, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_50, &STATE_VARIABLE_ModeInfo_22_89);
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_83, *Modes_14, &InitialInsts_85);
        check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(Args0_12, InitialInsts_85, (MR_Integer) 1, &InstVarSub_86, STATE_VARIABLE_ModeInfo_22_89, &STATE_VARIABLE_ModeInfo_23_90);
        check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_83, *Modes_14, &FinalInsts0_87);
        parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_86, FinalInsts0_87, &FinalInsts_88);
        check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_12, InitialInsts_85, FinalInsts_88, (MR_Integer) 1, Args_13, ExtraGoals_16, STATE_VARIABLE_ModeInfo_23_90, &STATE_VARIABLE_ModeInfo_57_57);
        parse_tree__prog_data__determinism_components_3_p_0(*Det_15, &Var_48, &Var_74);
        succeeded = ((MR_Integer) 0 == Var_74);
        if (succeeded)
        {
          MR_Word Instmap_49;

          hlds__instmap__init_unreachable_1_p_0(&Instmap_49);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_49, STATE_VARIABLE_ModeInfo_57_57, STATE_VARIABLE_ModeInfo_51);
        }
        else
          *STATE_VARIABLE_ModeInfo_51 = STATE_VARIABLE_ModeInfo_57_57;
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_ModeInfo_61_61;
      MR_Word WaitingVars_64;
      MR_Word ModeError_65;

      check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_50, &STATE_VARIABLE_ModeInfo_61_61);
      WaitingVars_64 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_11);
      {
        ModeError_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), ModeError_65, 1) = ((MR_Box) (PredVar_11));
        MR_hl_field(MR_mktag(3), ModeError_65, 2) = ((MR_Box) (PredVarInst_21));
        MR_hl_field(MR_mktag(3), ModeError_65, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
        MR_hl_field(MR_mktag(3), ModeError_65, 4) = ((MR_Box) (Arity_22));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_64, ModeError_65, STATE_VARIABLE_ModeInfo_61_61, STATE_VARIABLE_ModeInfo_51);
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      *Det_15 = (MR_Integer) 6;
      *Args_13 = Args0_12;
      *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_call_pred_10_p_0(
  MR_Word PredId_11,
  MR_Word MaybeDetism_12,
  MR_Integer ProcId0_13,
  MR_Integer * TheProcId_14,
  MR_Word ArgVars0_15,
  MR_Word * ArgVars_16,
  MR_Word _GoalInfo_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_57,
  MR_Word * STATE_VARIABLE_ModeInfo_58)
{
  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(PredId_11, MaybeDetism_12, ProcId0_13, TheProcId_14, ArgVars0_15, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_0_57, STATE_VARIABLE_ModeInfo_58);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__115__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(
  MR_Word PredId_11,
  MR_Word MaybeDetism_12,
  MR_Integer ProcId0_13,
  MR_Integer * TheProcId_14,
  MR_Word ArgVars0_15,
  MR_Word * ArgVars_16,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_57,
  MR_Word * STATE_VARIABLE_ModeInfo_58)
{
  {
    MR_bool succeeded;
    MR_Word MayChangeCalledProc_20;
    MR_Word Preds_21;
    MR_Word PredInfo_22;
    MR_Word Procs_23;
    MR_Word ProcIds_24;
    MR_Integer ArgOffset_25;
    MR_Word Markers_26;
    MR_Word InstMap_27;
    MR_Box conv0_PredInfo_22;
    MR_Word Var_62;

    check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(STATE_VARIABLE_ModeInfo_0_57, &MayChangeCalledProc_20);
    check_hlds__mode_info__mode_info_get_preds_2_p_0(STATE_VARIABLE_ModeInfo_0_57, &Preds_21);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_21, ((MR_Box) (PredId_11)), &conv0_PredInfo_22);
    PredInfo_22 = ((MR_Word) (conv0_PredInfo_22));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_22, &Procs_23);
    switch (MayChangeCalledProc_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_22);
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_113;

          Var_113 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          succeeded = (ProcId0_13 == Var_113);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "invalid proc_id");
              return;
            }
          else
            {
              ProcIds_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ProcIds_24, 0) = ((MR_Box) (ProcId0_13));
              MR_hl_field(MR_mktag(1), ProcIds_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
        }
        break;
    }
    check_hlds__modecheck_util__compute_arg_offset_2_p_0(PredInfo_22, &ArgOffset_25);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_22, &Markers_26);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_57, &InstMap_27);
    succeeded = (ProcIds_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_62 = (MR_Integer) 3;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, Var_62);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word WaitingVars_28;
      MR_Word PredOrFunc_29;
      MR_Word Var_63;

      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_28);
      PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_22);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (PredOrFunc_29));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "function with no mode, not even the default");
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_57, STATE_VARIABLE_ModeInfo_58);
      *TheProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      *ArgVars_16 = ArgVars0_15;
      *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer ProcId_30;
      MR_Word Var_69;

      succeeded = (ProcIds_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_24, (MR_Integer) 0))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_24, (MR_Integer) 1))));
        succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 3);
          succeeded = !(succeeded);
          if (!(succeeded))
            succeeded = (MayChangeCalledProc_20 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word ProcInfo_31;
        MR_Word ModuleInfo_32;
        MR_Word ProcArgLives0_33;
        MR_Word ProcArgModes0_34;
        MR_Word ProcInstVarSet_35;
        MR_Word InstVarSet0_36;
        MR_Word InstVarSet_37;
        MR_Word ProcArgModes_38;
        MR_Word InitialInsts_39;
        MR_Word InstVarSub_40;
        MR_Word STATE_VARIABLE_ModeInfo_71_71;
        MR_Word STATE_VARIABLE_ModeInfo_72_72;
        MR_Word STATE_VARIABLE_ModeInfo_73_73;
        MR_Box conv1_ProcInfo_31;

        *TheProcId_14 = ProcId_30;
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_23, ((MR_Box) (ProcId_30)), &conv1_ProcInfo_31);
        ProcInfo_31 = ((MR_Word) (conv1_ProcInfo_31));
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_57, &ModuleInfo_32);
        hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_32, ProcInfo_31, &ProcArgLives0_33);
        check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(ArgVars0_15, ProcArgLives0_33, ArgOffset_25, STATE_VARIABLE_ModeInfo_0_57, &STATE_VARIABLE_ModeInfo_71_71);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_31, &ProcArgModes0_34);
        hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_31, &ProcInstVarSet_35);
        check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &InstVarSet0_36);
        parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_36, ProcInstVarSet_35, &InstVarSet_37, ProcArgModes0_34, &ProcArgModes_38);
        check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_37, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_72_72);
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_32, ProcArgModes_38, &InitialInsts_39);
        check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_15, InitialInsts_39, ArgOffset_25, &InstVarSub_40, STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_73_73);
        check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(ProcInfo_31, ProcArgModes_38, ArgVars0_15, ArgOffset_25, InstVarSub_40, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_73_73, STATE_VARIABLE_ModeInfo_58);
      }
      else
      {
        MR_Word OldErrors_41;
        MR_Word WaitingVars0_42;
        MR_Word RevMatchingProcIds_43;
        MR_Word RevProcInitialInsts_44;
        MR_Word WaitingVars1_45;
        MR_Word NewErrors_55;
        MR_Word Errors_56;
        MR_Word STATE_VARIABLE_ModeInfo_76_76;
        MR_Word STATE_VARIABLE_ModeInfo_79_79;
        MR_Word STATE_VARIABLE_ModeInfo_84_84;

        check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_57, &OldErrors_41);
        check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_57, &STATE_VARIABLE_ModeInfo_76_76);
        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars0_42);
        check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_12_p_0(ProcIds_24, Procs_23, ArgVars0_15, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingProcIds_43, (MR_Word) ((MR_Unsigned) 0U), &RevProcInitialInsts_44, WaitingVars0_42, &WaitingVars1_45, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_79_79);
        if ((RevMatchingProcIds_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ProcInitialInsts_46;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[0]), RevProcInitialInsts_44, &ProcInitialInsts_46);
          check_hlds__modecheck_call__no_matching_modes_8_p_0(PredId_11, ArgVars0_15, ProcInitialInsts_46, MaybeDetism_12, WaitingVars1_45, TheProcId_14, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_84_84);
          *ArgVars_16 = ArgVars0_15;
          *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word MatchingProcIds_49;
          MR_Word CalleeModeErrors_50;
          MR_Word ProcInfo_89;
          MR_Word ProcArgModes_90;
          MR_Word InstVarSub_91;
          MR_Box conv2_ProcInfo_89;

          mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0), RevMatchingProcIds_43, &MatchingProcIds_49);
          check_hlds__mode_comparison__choose_best_match_8_p_0(STATE_VARIABLE_ModeInfo_79_79, MatchingProcIds_49, PredId_11, Procs_23, ArgVars0_15, TheProcId_14, &InstVarSub_91, &ProcArgModes_90);
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_23, ((MR_Box) (*TheProcId_14)), &conv2_ProcInfo_89);
          ProcInfo_89 = ((MR_Word) (conv2_ProcInfo_89));
          hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(ProcInfo_89, &CalleeModeErrors_50);
          if ((CalleeModeErrors_50 == (MR_Word) ((MR_Unsigned) 0U)))
            check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(ProcInfo_89, ProcArgModes_90, ArgVars0_15, ArgOffset_25, InstVarSub_91, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_84_84);
          else
          {
            MR_Word ArgInsts_53;
            MR_Word ModeError_54;
            MR_Word STATE_VARIABLE_ModeInfo_81_81;
            MR_Word WaitingVars_86;

            *ArgVars_16 = ArgVars0_15;
            WaitingVars_86 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ArgVars_16);
            *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, *ArgVars_16, &ArgInsts_53);
            check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_81_81);
            {
              ModeError_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ModeError_54, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), ModeError_54, 1) = ((MR_Box) (*ArgVars_16));
              MR_hl_field(MR_mktag(3), ModeError_54, 2) = ((MR_Box) (ArgInsts_53));
              MR_hl_field(MR_mktag(3), ModeError_54, 3) = ((MR_Box) (PredId_11));
              MR_hl_field(MR_mktag(3), ModeError_54, 4) = ((MR_Box) (*TheProcId_14));
              MR_hl_field(MR_mktag(3), ModeError_54, 5) = ((MR_Box) (CalleeModeErrors_50));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_86, ModeError_54, STATE_VARIABLE_ModeInfo_81_81, &STATE_VARIABLE_ModeInfo_84_84);
          }
        }
        check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_84_84, &NewErrors_55);
        mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_41, NewErrors_55, &Errors_56);
        check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_56, STATE_VARIABLE_ModeInfo_84_84, STATE_VARIABLE_ModeInfo_58);
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MatchingProcIds_0_5,
  MR_Word * STATE_VARIABLE_MatchingProcIds_6,
  MR_Word STATE_VARIABLE_RevProcInitialInsts_0_7,
  MR_Word * STATE_VARIABLE_RevProcInitialInsts_8,
  MR_Word STATE_VARIABLE_WaitingVars_0_9,
  MR_Word * STATE_VARIABLE_WaitingVars_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModeInfo_12 = STATE_VARIABLE_ModeInfo_0_11;
      *STATE_VARIABLE_WaitingVars_10 = STATE_VARIABLE_WaitingVars_0_9;
      *STATE_VARIABLE_RevProcInitialInsts_8 = STATE_VARIABLE_RevProcInitialInsts_0_7;
      *STATE_VARIABLE_MatchingProcIds_6 = STATE_VARIABLE_MatchingProcIds_0_5;
    }
    else
    {
      MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo_37;
      MR_Word ProcArgModes0_38;
      MR_Word ProcInstVarSet_39;
      MR_Word InstVarSet0_40;
      MR_Word InstVarSet_41;
      MR_Word ProcArgModes_42;
      MR_Word ModuleInfo_43;
      MR_Word ProcArgLives0_44;
      MR_Word InitialInsts_45;
      MR_Word InstVarSub_46;
      MR_Word Errors_47;
      MR_Word STATE_VARIABLE_ModeInfo_63_63;
      MR_Word STATE_VARIABLE_ModeInfo_65_65;
      MR_Word STATE_VARIABLE_RevProcInitialInsts_66_66;
      MR_Word STATE_VARIABLE_ModeInfo_68_68;
      MR_Word STATE_VARIABLE_MatchingProcIds_71_71;
      MR_Word STATE_VARIABLE_ModeInfo_73_73;
      MR_Word STATE_VARIABLE_WaitingVars_74_74;
      MR_Box conv0_ProcInfo_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MatchingProcIds_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WaitingVars_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_11;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), HeadVar__3_3, ((MR_Box) (ProcId_28)), &conv0_ProcInfo_37);
      ProcInfo_37 = ((MR_Word) (conv0_ProcInfo_37));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_37, &ProcArgModes0_38);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_37, &ProcInstVarSet_39);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_11, &InstVarSet0_40);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_40, ProcInstVarSet_39, &InstVarSet_41, ProcArgModes0_38, &ProcArgModes_42);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_41, STATE_VARIABLE_ModeInfo_0_11, &STATE_VARIABLE_ModeInfo_63_63);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &ModuleInfo_43);
      hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_43, ProcInfo_37, &ProcArgLives0_44);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(HeadVar__4_4, ProcArgLives0_44, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_63_63, &STATE_VARIABLE_ModeInfo_65_65);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_43, ProcArgModes_42, &InitialInsts_45);
      {
        STATE_VARIABLE_RevProcInitialInsts_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevProcInitialInsts_66_66, 0) = ((MR_Box) (InitialInsts_45));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevProcInitialInsts_66_66, 1) = ((MR_Box) (STATE_VARIABLE_RevProcInitialInsts_0_7));
      }
      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_37);
      if (succeeded)
        check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(HeadVar__4_4, InitialInsts_45, (MR_Integer) 0, &InstVarSub_46, STATE_VARIABLE_ModeInfo_65_65, &STATE_VARIABLE_ModeInfo_68_68);
      else
        check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(HeadVar__4_4, InitialInsts_45, (MR_Integer) 0, &InstVarSub_46, STATE_VARIABLE_ModeInfo_65_65, &STATE_VARIABLE_ModeInfo_68_68);
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_68_68, &Errors_47);
      if ((Errors_47 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NewMatch_54;

        {
          NewMatch_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewMatch_54, 0) = ((MR_Box) (ProcId_28));
          MR_hl_field(MR_mktag(0), NewMatch_54, 1) = ((MR_Box) (InstVarSub_46));
          MR_hl_field(MR_mktag(0), NewMatch_54, 2) = ((MR_Box) (ProcArgModes_42));
        }
        {
          STATE_VARIABLE_MatchingProcIds_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MatchingProcIds_71_71, 0) = ((MR_Box) (NewMatch_54));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MatchingProcIds_71_71, 1) = ((MR_Box) (STATE_VARIABLE_MatchingProcIds_0_5));
        }
        STATE_VARIABLE_WaitingVars_74_74 = STATE_VARIABLE_WaitingVars_0_9;
        STATE_VARIABLE_ModeInfo_73_73 = STATE_VARIABLE_ModeInfo_68_68;
      }
      else
      {
        MR_Word FirstError_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_47, (MR_Integer) 0))));
        MR_Word ErrorWaitingVars_50;

        check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_73_73);
        ErrorWaitingVars_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstError_48, (MR_Integer) 0))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ErrorWaitingVars_50, STATE_VARIABLE_WaitingVars_0_9, &STATE_VARIABLE_WaitingVars_74_74);
        STATE_VARIABLE_MatchingProcIds_71_71 = STATE_VARIABLE_MatchingProcIds_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_29;
      next_value_of_STATE_VARIABLE_MatchingProcIds_0_5 = STATE_VARIABLE_MatchingProcIds_71_71;
      next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7 = STATE_VARIABLE_RevProcInitialInsts_66_66;
      next_value_of_STATE_VARIABLE_WaitingVars_0_9 = STATE_VARIABLE_WaitingVars_74_74;
      next_value_of_STATE_VARIABLE_ModeInfo_0_11 = STATE_VARIABLE_ModeInfo_73_73;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MatchingProcIds_0_5 = next_value_of_STATE_VARIABLE_MatchingProcIds_0_5;
      STATE_VARIABLE_RevProcInitialInsts_0_7 = next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7;
      STATE_VARIABLE_WaitingVars_0_9 = next_value_of_STATE_VARIABLE_WaitingVars_0_9;
      STATE_VARIABLE_ModeInfo_0_11 = next_value_of_STATE_VARIABLE_ModeInfo_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ProcArgModes_11,
  MR_Word ArgVars0_12,
  MR_Integer ArgOffset_13,
  MR_Word InstVarSub_14,
  MR_Word * ArgVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  {
    MR_Word ModuleInfo_18;
    MR_Word InitialInsts0_19;
    MR_Word FinalInsts0_20;
    MR_Word InitialInsts_21;
    MR_Word FinalInsts_22;
    MR_Word CanSucceed_23;
    MR_Word STATE_VARIABLE_ModeInfo_27_27;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &ModuleInfo_18);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_18, ProcArgModes_11, &InitialInsts0_19);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_18, ProcArgModes_11, &FinalInsts0_20);
    parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, InitialInsts0_19, &InitialInsts_21);
    parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, FinalInsts0_20, &FinalInsts_22);
    check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_12, InitialInsts_21, FinalInsts_22, ArgOffset_13, ArgVars_15, ExtraGoals_16, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_27_27);
    hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_10, &CanSucceed_23);
    switch (CanSucceed_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_27_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Instmap_24;

          hlds__instmap__init_unreachable_1_p_0(&Instmap_24);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_24, STATE_VARIABLE_ModeInfo_27_27, STATE_VARIABLE_ModeInfo_26);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars_10,
  MR_Word ProcInitialInsts_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * STATE_VARIABLE_ModeInfo_24)
{
  {
    MR_bool succeeded;
    MR_Word Preds_16;
    MR_Word PredInfo_17;
    MR_Word Markers_18;
    MR_Box conv0_PredInfo_17;

    check_hlds__mode_info__mode_info_get_preds_2_p_0(STATE_VARIABLE_ModeInfo_0_23, &Preds_16);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_16, ((MR_Box) (PredId_9)), &conv0_PredInfo_17);
    PredInfo_17 = ((MR_Word) (conv0_PredInfo_17));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_17, &Markers_18);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, (MR_Integer) 3);
    if (succeeded)
    {
      MR_Word Instmap_19;
      MR_Word STATE_VARIABLE_ModeInfo_26_26;
      MR_Word InitialInsts_40;
      MR_Word ArgLives_41;
      MR_Word ModuleInfo0_42;
      MR_Word Preds0_43;
      MR_Word PredInfo0_44;
      MR_Word Context_45;
      MR_Integer Arity_46;
      MR_Word FinalInsts_47;
      MR_Word Modes_48;
      MR_Word InstVarSet_49;
      MR_Word ModuleInfo_50;
      MR_Word Var_52;
      MR_Word STATE_VARIABLE_ModeInfo_27_53;
      MR_Box conv1_PredInfo0_44;

      check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(STATE_VARIABLE_ModeInfo_0_23, ArgVars_10, &InitialInsts_40, &ArgLives_41);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_23, &ModuleInfo0_42);
      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo0_42, &Preds0_43);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_43, ((MR_Box) (PredId_9)), &conv1_PredInfo0_44);
      PredInfo0_44 = ((MR_Word) (conv1_PredInfo0_44));
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_44, &Context_45);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), ArgVars_10, &Arity_46);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_46, ((MR_Box) ((MR_Unsigned) 4U)), &FinalInsts_47);
      parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(InitialInsts_40, FinalInsts_47, &Modes_48);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_23, &InstVarSet_49);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ArgLives_41));
      }
      check_hlds__proc_requests__request_proc_9_p_0(PredId_9, Modes_48, InstVarSet_49, Var_52, MaybeDetism_12, Context_45, NewProcId_14, ModuleInfo0_42, &ModuleInfo_50);
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_50, STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_27_53);
      check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_27_53, &STATE_VARIABLE_ModeInfo_26_26);
      hlds__instmap__init_unreachable_1_p_0(&Instmap_19);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_19, STATE_VARIABLE_ModeInfo_26_26, STATE_VARIABLE_ModeInfo_24);
    }
    else
    {
      MR_Word InstMap_20;
      MR_Word ArgInsts_21;
      MR_Word ModeError_22;
      MR_Word STATE_VARIABLE_ModeInfo_29_29;

      *NewProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_23, &InstMap_20);
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_20, ArgVars_10, &ArgInsts_21);
      check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_23, &STATE_VARIABLE_ModeInfo_29_29);
      {
        ModeError_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_22, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), ModeError_22, 1) = ((MR_Box) (ArgVars_10));
        MR_hl_field(MR_mktag(3), ModeError_22, 2) = ((MR_Box) (ArgInsts_21));
        MR_hl_field(MR_mktag(3), ModeError_22, 3) = ((MR_Box) (ProcInitialInsts_11));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_13, ModeError_22, STATE_VARIABLE_ModeInfo_29_29, STATE_VARIABLE_ModeInfo_24);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_9;
      MR_Word Insts_10;
      MR_Word IsLive_11;
      MR_Word IsLives_12;
      MR_Word IsLive0_13;
      MR_Word ModuleInfo_14;

      check_hlds__modecheck_util__get_var_inst_3_p_0(ModeInfo_1, Var_7, &Inst_9);
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(ModeInfo_1, Var_7, &IsLive0_13);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_1, &ModuleInfo_14);
      switch (IsLive0_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_14, Inst_9);
            if (succeeded)
              succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(ModuleInfo_14, Inst_9);
            if (succeeded)
              IsLive_11 = (MR_Integer) 1;
            else
              IsLive_11 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          IsLive_11 = (MR_Integer) 0;
          break;
      }
      check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(ModeInfo_1, Vars_8, &Insts_10, &IsLives_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IsLive_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (IsLives_12));
      }
    }
  }
}

void mercury__check_hlds__modecheck_call__init(void)
{
}

void mercury__check_hlds__modecheck_call__init_type_tables(void)
{
}

void mercury__check_hlds__modecheck_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_call__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_call.
