/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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
#include "ll_backend.unify_gen_test.mih"
#include "ll_backend.unify_gen_util.mih"
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




static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word VarA_6,
  MR_Word VarB_7,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Uni_10,
  MR_Word GoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44,
  MR_Word STATE_VARIABLE_CLD_0_45,
  MR_Word * STATE_VARIABLE_CLD_46)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Uni_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 1))));
          MR_Word RHSVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 2))));
          MR_Word ArgModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 3))));
          MR_Word HowToConstruct_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 4))));
          MR_Word SubInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 6))));
          MR_Word MaybeTakeAddr_23;
          MR_Word MaybeSize_24;
          MR_Word LHSVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 0))));

          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "construct is not model_det");
                  return;
                }
              }
              break;
          }
          if ((SubInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeTakeAddr_23 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeSize_24 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MaybeTakeAddr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 0))));
            MaybeSize_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 1))));
          }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_77);
          if (!(succeeded))
          {
            succeeded = ((MR_tag((MR_Word) MaybeTakeAddr_23)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word TakeAddr_26;
            MR_Word ModuleInfo_27;
            MR_Word RHSVarsWidths_28;

            if ((MaybeTakeAddr_23 == (MR_Word) ((MR_Unsigned) 0U)))
              TakeAddr_26 = (MR_Word) ((MR_Unsigned) 0U);
            else
              TakeAddr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0))));
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_27);
            ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), ModuleInfo_27, ConsId_17, RHSVars_18, &RHSVarsWidths_28);
            ll_backend__unify_gen_construct__generate_construction_13_p_0(LHSVar_77, ConsId_17, RHSVarsWidths_28, ArgModes_19, HowToConstruct_20, TakeAddr_26, MaybeSize_24, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          }
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
            *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanCGC_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 5))));
          MR_Word DeconstructCode_31;
          MR_Word STATE_VARIABLE_CLD_57_57;
          MR_Word LHSVar_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 0))));
          MR_Word ConsId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 1))));
          MR_Word RHSVars_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 2))));
          MR_Word ArgModes_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 3))));
          MR_Word ModuleInfo_82;
          MR_Word RHSVarsWidths_83;

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_82);
          ll_backend__unify_gen_util__get_cons_arg_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), ModuleInfo_82, ConsId_79, RHSVars_80, &RHSVarsWidths_83);
          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_78, ConsId_79, RHSVarsWidths_83, ArgModes_81, &DeconstructCode_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
                *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "deconstruct is model_non");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              ll_backend__unify_gen_deconstruct__generate_semi_deconstruction_9_p_0(LHSVar_78, ConsId_79, RHSVarsWidths_83, ArgModes_81, &DeconstructCode_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
              break;
          }
          switch (CanCGC_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String LHSVarName_32;
                MR_Word ProduceVarCode_33;
                MR_Word VarRval_34;
                MR_Word STATE_VARIABLE_CLD_58_58;
                MR_Word VarLval_35;

                LHSVarName_32 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_44, LHSVar_78);
                ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_78, &ProduceVarCode_33, &VarRval_34, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_57_57, &STATE_VARIABLE_CLD_58_58);
                succeeded = ((MR_tag((MR_Word) VarRval_34)) == (MR_Integer) 0);
                if (succeeded)
                {
                  VarLval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarRval_34, (MR_Integer) 0))));
                  {
                    MR_Word SaveArgsCode_36;
                    MR_Word Regs_37;
                    MR_Word FreeVarCode_38;
                    MR_Word STATE_VARIABLE_CLD_59_59;
                    MR_Word Var_62;
                    MR_Word Var_63;
                    MR_Word Var_64;
                    MR_String Var_66;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Box conv1_STATE_VARIABLE_CLD_46;

                    ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(LHSVar_78, VarLval_35, &SaveArgsCode_36, &Regs_37, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_58_58, &STATE_VARIABLE_CLD_59_59);
                    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_scalar_common_3[0]), Regs_37, ((MR_Box) (STATE_VARIABLE_CLD_59_59)), &conv1_STATE_VARIABLE_CLD_46);
                    *STATE_VARIABLE_CLD_46 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_46));
                    {
                      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (VarRval_34));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
                    }
                    Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_32);
                    {
                      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
                      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_66));
                    }
                    FreeVarCode_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_62)));
                    Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_36, FreeVarCode_38);
                    Var_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_33, Var_69);
                    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DeconstructCode_31, Var_68);
                  }
                }
                else
                {
                  *Code_12 = DeconstructCode_31;
                  *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_58_58;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *Code_12 = DeconstructCode_31;
                *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_57_57;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LHSVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 0))));
          MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 1))));

          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "assign is not model_det");
                  return;
                }
              }
              break;
          }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_15);
          if (succeeded)
            ll_backend__unify_gen__generate_assignment_5_p_0(LHSVar_15, RHSVar_16, Code_12, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
          }
          *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 1))));
              MR_Word VarB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 2))));

              switch (CodeModel_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "simple_test is not model_semi");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__unify_gen_test__generate_simple_test_unification_7_p_0(VarA_39, VarB_40, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
                  break;
              }
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
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word VarA_6,
  MR_Word VarB_7,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  {
    MR_bool succeeded;

    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_9, VarA_6);
    if (succeeded)
      ll_backend__code_loc_dep__assign_var_to_var_4_p_0(VarA_6, VarB_7, STATE_VARIABLE_CLD_0_9, STATE_VARIABLE_CLD_10);
    else
      *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
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
