/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2019-01-27
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_construct.mih"
#include "ll_backend.unify_gen_deconstruct.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__69__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_51);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__74__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__65__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_simple_test_unification_7_p_0(
  MR_Word VarA_8,
  MR_Word VarB_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][5];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__69__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_51)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_51);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__74__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__65__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_57)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_57);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__69__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__74__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_unification__65__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
          MR_Word Var_42;
          MR_Word LHSVar_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 0))));

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "construct not det");
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
          MR_Word Var_54;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "assign not det");
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
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (CodeModel_9));
                MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "simple_test not semidet");
              ll_backend__unify_gen__generate_simple_test_unification_7_p_0(VarA_17, VarB_18, Code_12, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_simple_test_unification_7_p_0(
  MR_Word VarA_8,
  MR_Word VarB_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27)
{
  {
    MR_bool succeeded;
    MR_Word Type_13;
    MR_Word ModuleInfo_14;
    MR_Word IsDummyType_15;

    Type_13 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_24, VarA_8);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_24, &ModuleInfo_14);
    IsDummyType_15 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, Type_13);
    switch (IsDummyType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
          *STATE_VARIABLE_CLD_27 = STATE_VARIABLE_CLD_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqOp_17;
          MR_Word VarCodeA_19;
          MR_Word VarRvalA_20;
          MR_Word VarCodeB_21;
          MR_Word VarRvalB_22;
          MR_Word FailCode_23;
          MR_Word STATE_VARIABLE_CLD_30_30;
          MR_Word STATE_VARIABLE_CLD_31_31;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word BuiltinType_16;

          succeeded = ((MR_tag((MR_Word) Type_13)) == (MR_Integer) 2);
          if (succeeded)
          {
            BuiltinType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_13, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) BuiltinType_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BuiltinType_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    EqOp_17 = (MR_Word) ((MR_Unsigned) 64U);
                    break;
                  case (MR_Integer) 1:
                    EqOp_17 = (MR_Word) ((MR_Unsigned) 16U);
                    break;
                  case (MR_Integer) 2:
                    EqOp_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[0]));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_16, (MR_Integer) 0))) & (MR_Integer) 15);

                  {
                    EqOp_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), EqOp_17, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(MR_mktag(3), EqOp_17, 1) = (MR_Box) ((MR_Unsigned) (IntType_18));
                  }
                }
                break;
            }
          }
          else
            EqOp_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[0]));
          ll_backend__code_loc_dep__produce_variable_6_p_0(VarA_8, &VarCodeA_19, &VarRvalA_20, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CLD_0_26, &STATE_VARIABLE_CLD_30_30);
          ll_backend__code_loc_dep__produce_variable_6_p_0(VarB_9, &VarCodeB_21, &VarRvalB_22, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CLD_30_30, &STATE_VARIABLE_CLD_31_31);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (EqOp_17));
            MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (VarRvalA_20));
            MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (VarRvalB_22));
          }
          ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Var_32, &FailCode_23, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_31_31, STATE_VARIABLE_CLD_27);
          Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCodeB_21, FailCode_23);
          *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCodeA_19, Var_35);
        }
        break;
    }
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
