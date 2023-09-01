/*
** Automatically generated from `lookup_util.m'
** by the Mercury compiler,
** version rotd-2023-09-01
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


// :- module ll_backend.lookup_util.
// :- implementation.

/*
INIT mercury__ll_backend__lookup_util__init
ENDINIT
*/

#include "ll_backend.lookup_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__226__1_1_p_0(
  MR_Word Code_20);

static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CurrentInstMap_6,
  MR_Word InstMapAfter_7,
  MR_Word Var_8);

static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CLD_0_3,
  MR_Word * STATE_VARIABLE_CLD_4,
  MR_Word HeadVar__5_5);

static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExprnOpts_2);

static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_3[1][7];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_4[1][4];




static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__226__1_1_p_0(
  MR_Word Code_20)
{
  MR_bool succeeded;

  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_20);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CurrentInstMap_6,
  MR_Word InstMapAfter_7,
  MR_Word Var_8)
{
  MR_bool succeeded;
  MR_Word Initial_9;
  MR_Word Final_10;
  MR_Word Var_11;

  hlds__instmap__instmap_lookup_var_3_p_0(CurrentInstMap_6, Var_8, &Initial_9);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMapAfter_7, Var_8, &Final_10);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Initial_9));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (Final_10));
  }
  succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_5, Var_11);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__226__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset_2,
  MR_Word BaseReg_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LookupLval_19;
      MR_Word Code_20;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_CLD_29_29;
      MR_Word Var_30;
      MR_Integer Var_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Offset_2;
      MR_Word next_value_of_STATE_VARIABLE_CLD_0_5;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (BaseReg_3));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Offset_2));
      }
      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (Var_28));
      }
      {
        LookupLval_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, LookupLval_19, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, LookupLval_19, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__lookup_util_scalar_common_2[0])));
        MR_hl_field(3, LookupLval_19, 2) = ((MR_Box) (Var_26));
        MR_hl_field(3, LookupLval_19, 3) = ((MR_Box) (Var_27));
      }
      ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_13, LookupLval_19, &Code_20, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_29_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_4[0]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (ll_backend__lookup_util__generate_offset_assigns_6_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (Code_20));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140ll_backend.lookup_util.generate_offset_assigns\'/6", (MR_String) "nonempty code");
      Var_33 = (MR_Integer) ((MR_Unsigned) Offset_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_14;
      next_value_of_Offset_2 = Var_33;
      next_value_of_STATE_VARIABLE_CLD_0_5 = STATE_VARIABLE_CLD_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Offset_2 = next_value_of_Offset_2;
      STATE_VARIABLE_CLD_0_5 = next_value_of_STATE_VARIABLE_CLD_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__lookup_util__set_liveness_and_end_branch_6_p_0(
  MR_Word StoreMap_7,
  MR_Word Liveness_8,
  MR_Word STATE_VARIABLE_MaybeEnd_0_14,
  MR_Word * STATE_VARIABLE_MaybeEnd_15,
  MR_Word * BranchEndCode_10,
  MR_Word STATE_VARIABLE_CLD_0_16)
{
  MR_Word OldLiveness_12;
  MR_Word DeadVars_13;
  MR_Word STATE_VARIABLE_CLD_17_17;
  MR_Word STATE_VARIABLE_CLD_19_19;

  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_16, &OldLiveness_12);
  ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(Liveness_8, STATE_VARIABLE_CLD_0_16, &STATE_VARIABLE_CLD_17_17);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldLiveness_12, Liveness_8, &DeadVars_13);
  ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(DeadVars_13, (MR_Integer) 0, STATE_VARIABLE_CLD_17_17, &STATE_VARIABLE_CLD_19_19);
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_7, STATE_VARIABLE_MaybeEnd_0_14, STATE_VARIABLE_MaybeEnd_15, BranchEndCode_10, STATE_VARIABLE_CLD_19_19);
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * STATE_VARIABLE_MaybeEnd_7,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CI_9 = STATE_VARIABLE_CI_0_8;
    *STATE_VARIABLE_MaybeEnd_7 = STATE_VARIABLE_MaybeEnd_0_6;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Disjunct0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Soln_24;
    MR_Word Solns_25;
    MR_Word STATE_VARIABLE_MaybeEnd_33_33;
    MR_Word STATE_VARIABLE_CI_34_34;
    MR_Word _Liveness_28;

    succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(HeadVar__1_1, Disjunct0_20, HeadVar__3_3, HeadVar__4_4, &Soln_24, STATE_VARIABLE_MaybeEnd_0_6, &STATE_VARIABLE_MaybeEnd_33_33, &_Liveness_28, STATE_VARIABLE_CI_0_8, &STATE_VARIABLE_CI_34_34);
    if (succeeded)
    {
      succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(HeadVar__1_1, Disjuncts0_21, HeadVar__3_3, HeadVar__4_4, &Solns_25, STATE_VARIABLE_MaybeEnd_33_33, STATE_VARIABLE_MaybeEnd_7, STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CI_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Soln_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (Solns_25));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(
  MR_Word BranchStart_11,
  MR_Word Disjunct0_12,
  MR_Word Vars_13,
  MR_Word StoreMap_14,
  MR_Word * Soln_15,
  MR_Word STATE_VARIABLE_MaybeEnd_0_23,
  MR_Word * STATE_VARIABLE_MaybeEnd_24,
  MR_Word * Liveness_17,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26)
{
  MR_bool succeeded;
  MR_Word DisjunctGoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Disjunct0_12, (MR_Integer) 1))));
  MR_Word Disjunct_22;
  MR_Word _GoalExpr_29 = ((MR_Word) ((MR_hl_field(0, Disjunct0_12, (MR_Integer) 0))));
  MR_Word GoalInfo_30;
  MR_Word CodeModel_31;
  MR_Word Code_32;
  MR_Word ExprnOpts_33;
  MR_Word STATE_VARIABLE_CLD_32_35;
  MR_Word STATE_VARIABLE_CLD_34_36;
  MR_Word STATE_VARIABLE_CLD_35_37;
  MR_Word STATE_VARIABLE_CLD_36_38;
  MR_Word _EndCode_34;

  hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), DisjunctGoalInfo0_20, &GoalInfo_30);
  {
    Disjunct_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Disjunct_22, 0) = ((MR_Box) (_GoalExpr_29));
    MR_hl_field(0, Disjunct_22, 1) = ((MR_Box) (GoalInfo_30));
  }
  CodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_30);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_11, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CLD_32_35);
  ll_backend__code_gen__generate_goal_7_p_0(CodeModel_31, Disjunct_22, &Code_32, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_32_35, &STATE_VARIABLE_CLD_34_36);
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_32);
  if (succeeded)
  {
    ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_34_36, Liveness_17);
    ll_backend__code_info__get_exprn_opts_2_p_0(*STATE_VARIABLE_CI_26, &ExprnOpts_33);
    succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(Vars_13, Soln_15, STATE_VARIABLE_CLD_34_36, &STATE_VARIABLE_CLD_35_37, ExprnOpts_33);
    if (succeeded)
    {
      ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(STATE_VARIABLE_CLD_35_37, &STATE_VARIABLE_CLD_36_38);
      ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_14, STATE_VARIABLE_MaybeEnd_0_23, STATE_VARIABLE_MaybeEnd_24, &_EndCode_34, STATE_VARIABLE_CLD_36_38);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_arm_10_p_0(
  MR_Word BranchStart_11,
  MR_Word Goal_12,
  MR_Word Vars_13,
  MR_Word StoreMap_14,
  MR_Word * STATE_VARIABLE_MaybeEnd_0_19,
  MR_Word STATE_VARIABLE_MaybeEnd_20,
  MR_Word * CaseRvals_16,
  MR_Word * Liveness_17,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22)
{
  MR_bool succeeded;
  MR_Word GoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 1))));
  MR_Word CodeModel_26;
  MR_Word Code_27;
  MR_Word ExprnOpts_28;
  MR_Word STATE_VARIABLE_CLD_32_30;
  MR_Word STATE_VARIABLE_CLD_34_31;
  MR_Word STATE_VARIABLE_CLD_36_33;
  MR_Word _EndCode_29;

  CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_25);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_11, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CLD_32_30);
  ll_backend__code_gen__generate_goal_7_p_0(CodeModel_26, Goal_12, &Code_27, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22, STATE_VARIABLE_CLD_32_30, &STATE_VARIABLE_CLD_34_31);
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_27);
  if (succeeded)
  {
    ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_34_31, Liveness_17);
    ll_backend__code_info__get_exprn_opts_2_p_0(*STATE_VARIABLE_CI_22, &ExprnOpts_28);
    succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(Vars_13, STATE_VARIABLE_MaybeEnd_0_19, STATE_VARIABLE_CLD_34_31, &STATE_VARIABLE_CLD_36_33, ExprnOpts_28);
    if (succeeded)
    {
      ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_14, STATE_VARIABLE_MaybeEnd_20, CaseRvals_16, &_EndCode_29, STATE_VARIABLE_CLD_36_33);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CLD_0_3,
  MR_Word * STATE_VARIABLE_CLD_4,
  MR_Word HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CLD_4 = STATE_VARIABLE_CLD_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Rval_12;
    MR_Word Rvals_13;
    MR_Word Code_16;
    MR_Word STATE_VARIABLE_CLD_19_19;

    ll_backend__code_loc_dep__produce_variable_5_p_0(Var_10, &Code_16, &Rval_12, STATE_VARIABLE_CLD_0_3, &STATE_VARIABLE_CLD_19_19);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_16);
    if (succeeded)
    {
      succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(Rval_12, HeadVar__5_5);
      if (succeeded)
      {
        succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(Vars_11, &Rvals_13, STATE_VARIABLE_CLD_19_19, STATE_VARIABLE_CLD_4, HeadVar__5_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Rval_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (Rvals_13));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExprnOpts_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Exprn0_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__1_1 = Exprn0_14;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var_16;

              ll_backend__exprn_aux__const_is_constant_3_p_0(Const_3, ExprnOpts_2, &Var_16);
              succeeded = ((MR_Integer) 1 == Var_16);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Exprn_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__1_1 = Exprn_7;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Exprn0_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Exprn1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word next_value_of_HeadVar__1_1;

              succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(Exprn0_10, ExprnOpts_2);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Exprn1_11;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__lookup_util__is_output_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0(
  MR_Word CI_5,
  MR_Word CLD_6,
  MR_Word GoalInfo_7,
  MR_Word * OutVars_8)
{
  MR_bool succeeded;
  MR_Word InstMapDelta_9;

  InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_7);
  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_9);
  if (succeeded)
    *OutVars_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CurrentInstMap_10;
    MR_Word ModuleInfo_11;
    MR_Word ChangedVars_12;
    MR_Word InstMapAfter_13;
    MR_Word Var_14;
    MR_Word Var_15;

    ll_backend__code_loc_dep__get_instmap_2_p_0(CLD_6, &CurrentInstMap_10);
    ll_backend__code_info__get_module_info_2_p_0(CI_5, &ModuleInfo_11);
    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_9, &ChangedVars_12);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_9, CurrentInstMap_10, &InstMapAfter_13);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_3[0]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (ll_backend__lookup_util__figure_out_output_vars_4_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(0, Var_14, 4) = ((MR_Box) (CurrentInstMap_10));
      MR_hl_field(0, Var_14, 5) = ((MR_Box) (InstMapAfter_13));
    }
    Var_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_12);
    mercury__list__filter_3_p_0((MR_Word) (&ll_backend__lookup_util_scalar_common_1[0]), Var_14, Var_15, OutVars_8);
  }
}

void mercury__ll_backend__lookup_util__init(void)
{
}

void mercury__ll_backend__lookup_util__init_type_tables(void)
{
}

void mercury__ll_backend__lookup_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__lookup_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.lookup_util.
