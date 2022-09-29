/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2022-09-29
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


// :- module ll_backend.unify_gen.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen__init
ENDINIT
*/

#include "ll_backend.unify_gen.mih"


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
#include "integer.mih"
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
#include "ops.mih"
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_construct.mih"
#include "ll_backend.unify_gen_deconstruct.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__71__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__76__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_52);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__67__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][5];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__71__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_46);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__76__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_52)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_52);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__67__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_41);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__71__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__76__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__67__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Unification_10,
  MR_Word GoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 1))));
        MR_Word RHSVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 2))));
        MR_Word ArgModes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 3))));
        MR_Word HowToConstruct_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 4))));
        MR_Word SubInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 6))));
        MR_Word MaybeTakeAddr_25;
        MR_Word MaybeSize_26;
        MR_Word Var_49;
        MR_Word LHSVar_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 0))));

        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (CodeModel_9));
          MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "construct not det");
        if ((SubInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeTakeAddr_25 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeSize_26 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MaybeTakeAddr_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_24, (MR_Integer) 0))));
          MaybeSize_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_24, (MR_Integer) 1))));
        }
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_36, LHSVar_59);
        if (!(succeeded))
        {
          succeeded = (MaybeTakeAddr_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word TakeAddr_28;

          if ((MaybeTakeAddr_25 == (MR_Word) ((MR_Unsigned) 0U)))
            TakeAddr_28 = (MR_Word) ((MR_Unsigned) 0U);
          else
            TakeAddr_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_25, (MR_Integer) 0))));
          ll_backend__unify_gen_construct__generate_construction_unification_13_p_0(LHSVar_59, ConsId_19, RHSVars_20, ArgModes_21, HowToConstruct_22, TakeAddr_28, MaybeSize_26, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
        }
        else
        {
          *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_0_36;
          *STATE_VARIABLE_CI_35 = STATE_VARIABLE_CI_0_34;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_Word LHSVar_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 0))));
        MR_Word ConsId_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 1))));
        MR_Word RHSVars_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 2))));
        MR_Word ArgModes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_10, (MR_Integer) 3))));

        ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0(LHSVar_60, ConsId_61, RHSVars_62, ArgModes_63, CanFail_29, CanCGC_30, Code_12, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_10, (MR_Integer) 0))));
        MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_10, (MR_Integer) 1))));
        MR_Word Var_38;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (CodeModel_9));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "assign not det");
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_36, LHSVar_15);
        if (succeeded)
        {
          ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LHSVar_15, RHSVar_16, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
          *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_0_36;
        }
        *STATE_VARIABLE_CI_35 = STATE_VARIABLE_CI_0_34;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_10, (MR_Integer) 1))));
            MR_Word VarB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_10, (MR_Integer) 2))));
            MR_Word Var_43;
            MR_Word Type_70;
            MR_Word ModuleInfo_71;
            MR_Word IsDummyType_72;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_3));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (CodeModel_9));
              MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "simple_test not semidet");
            Type_70 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, VarA_17);
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_34, &ModuleInfo_71);
            IsDummyType_72 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_71, Type_70);
            switch (IsDummyType_72) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  *STATE_VARIABLE_CI_35 = STATE_VARIABLE_CI_0_34;
                  *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_0_36;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word EqOp_74;
                  MR_Word VarCodeA_76;
                  MR_Word VarRvalA_77;
                  MR_Word VarCodeB_78;
                  MR_Word VarRvalB_79;
                  MR_Word FailCode_80;
                  MR_Word STATE_VARIABLE_CLD_30_83;
                  MR_Word STATE_VARIABLE_CLD_31_84;
                  MR_Word Var_85;
                  MR_Word Var_86;
                  MR_Word BuiltinType_73;

                  succeeded = ((MR_tag((MR_Word) Type_70)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    BuiltinType_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_70, (MR_Integer) 0))));
                    switch (MR_tag((MR_Word) BuiltinType_73)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(BuiltinType_73)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            EqOp_74 = (MR_Word) ((MR_Unsigned) 68U);
                            break;
                          case (MR_Integer) 1:
                            EqOp_74 = (MR_Word) ((MR_Unsigned) 16U);
                            break;
                          case (MR_Integer) 2:
                            EqOp_74 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[0]));
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word IntType_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_73, (MR_Integer) 0))) & (MR_Integer) 15);

                          {
                            EqOp_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), EqOp_74, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                            MR_hl_field(MR_mktag(3), EqOp_74, 1) = (MR_Box) ((MR_Unsigned) (IntType_75));
                          }
                        }
                        break;
                    }
                  }
                  else
                    EqOp_74 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[0]));
                  ll_backend__code_loc_dep__produce_variable_5_p_0(VarA_17, &VarCodeA_76, &VarRvalA_77, STATE_VARIABLE_CLD_0_36, &STATE_VARIABLE_CLD_30_83);
                  ll_backend__code_loc_dep__produce_variable_5_p_0(VarB_18, &VarCodeB_78, &VarRvalB_79, STATE_VARIABLE_CLD_30_83, &STATE_VARIABLE_CLD_31_84);
                  {
                    Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (EqOp_74));
                    MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (VarRvalA_77));
                    MR_hl_field(MR_mktag(3), Var_85, 3) = ((MR_Box) (VarRvalB_79));
                  }
                  ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Var_85, &FailCode_80, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_31_84, STATE_VARIABLE_CLD_37);
                  Var_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCodeB_78, FailCode_80);
                  *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCodeA_76, Var_86);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "complicated unify");
            return;
          }
          break;
      }
      break;
  }
}

void mercury__ll_backend__unify_gen__init(void)
{
}

void mercury__ll_backend__unify_gen__init_type_tables(void)
{
}

void mercury__ll_backend__unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen.
