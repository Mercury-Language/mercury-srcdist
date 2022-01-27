/*
** Automatically generated from `unify_gen_deconstruct.m'
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


// :- module ll_backend.unify_gen_deconstruct.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_deconstruct__init
ENDINIT
*/

#include "ll_backend.unify_gen_deconstruct.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_test.mih"
#include "ll_backend.unify_gen_util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsId_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_85,
  MR_Word * STATE_VARIABLE_CLD_86);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word FieldLvals_4,
  MR_Word STATE_VARIABLE_ToOrRvals_0_5,
  MR_Word * STATE_VARIABLE_ToOrRvals_6,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_7,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LHSRval_13,
  MR_Word RHSVarWidth_14,
  MR_Word ArgMode_15,
  MR_Word FieldLvals_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_28,
  MR_Word * STATE_VARIABLE_ToOrRvals_29,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_30,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_31,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(
  MR_Word LHSRval_8,
  MR_Word RHSVar_9,
  MR_Word ArgPosWidth_10,
  MR_Word FieldLvals_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_39,
  MR_Word * STATE_VARIABLE_CLD_40);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word LHSPtag_2,
  MR_Word LHSBaseRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(
  MR_Word LHSPtag_8,
  MR_Word LHSBaseRval0_9,
  MR_Word LHSArgPosWidth_10,
  MR_Word RHSVar_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_44,
  MR_Word * STATE_VARIABLE_CLD_45);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_8_p_0(
  MR_Word LHSPtag_9,
  MR_Word LHSBaseRval_10,
  MR_Word LHSArgPosWidth_11,
  MR_Word RHSVar_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37);


static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_4[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_deconstruct_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_deconstruct_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1(
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
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0(
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word CanFail_16,
  MR_Word CanCGC_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32)
{
  {
    MR_bool succeeded;
    MR_Word DeconstructCode_21;
    MR_Word STATE_VARIABLE_CLD_35_35;

    switch (CanFail_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHSVarCode_65;
          MR_Word LHSVarRval_66;
          MR_String LHSVarName_67;
          MR_Word LHSVarType_68;
          MR_Word CheaperTagTest_69;
          MR_Word SuccLabel_70;
          MR_Word TagTestCode_71;
          MR_Word AfterUnify_72;
          MR_Word FailCode_73;
          MR_Word DetDeconstructCode_74;
          MR_Word SuccessLabelCode_75;
          MR_Word STATE_VARIABLE_CLD_32_76;
          MR_Word STATE_VARIABLE_CI_34_78;
          MR_Word STATE_VARIABLE_CLD_36_80;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_12, &LHSVarCode_65, &LHSVarRval_66, STATE_VARIABLE_CLD_0_31, &STATE_VARIABLE_CLD_32_76);
          LHSVarName_67 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_0_29, LHSVar_12);
          LHSVarType_68 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_29, LHSVar_12);
          CheaperTagTest_69 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_29, LHSVarType_68);
          ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(LHSVarRval_66, LHSVarName_67, ConsId_13, CheaperTagTest_69, (MR_Integer) 0, &SuccLabel_70, &TagTestCode_71, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_34_78);
          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_32_76, &AfterUnify_72);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_73, STATE_VARIABLE_CI_34_78, STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_32_76);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_72, *STATE_VARIABLE_CI_30, &STATE_VARIABLE_CLD_36_80);
          ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DetDeconstructCode_74, *STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_36_80, &STATE_VARIABLE_CLD_35_35);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (SuccLabel_70));
          }
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) ""));
          }
          SuccessLabelCode_75 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
          Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_75, DetDeconstructCode_74);
          Var_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_73, Var_87);
          Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_71, Var_86);
          DeconstructCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LHSVarCode_65, Var_85);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DeconstructCode_21, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CLD_0_31, &STATE_VARIABLE_CLD_35_35);
          *STATE_VARIABLE_CI_30 = STATE_VARIABLE_CI_0_29;
        }
        break;
    }
    switch (CanCGC_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String LHSVarName_22;
          MR_Word ProduceVarCode_23;
          MR_Word VarRval_24;
          MR_Word STATE_VARIABLE_CLD_36_36;
          MR_Word VarLval_25;

          LHSVarName_22 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_30, LHSVar_12);
          ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_12, &ProduceVarCode_23, &VarRval_24, STATE_VARIABLE_CLD_35_35, &STATE_VARIABLE_CLD_36_36);
          succeeded = ((MR_tag((MR_Word) VarRval_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            VarLval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarRval_24, (MR_Integer) 0))));
            {
              MR_Word SaveArgsCode_26;
              MR_Word Regs_27;
              MR_Word FreeVarCode_28;
              MR_Word STATE_VARIABLE_CLD_37_37;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_42;
              MR_String Var_44;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Box conv1_STATE_VARIABLE_CLD_32;

              ll_backend__code_loc_dep__save_reused_cell_fields_6_p_0(LHSVar_12, VarLval_25, &SaveArgsCode_26, &Regs_27, STATE_VARIABLE_CLD_36_36, &STATE_VARIABLE_CLD_37_37);
              mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_4[0]), Regs_27, ((MR_Box) (STATE_VARIABLE_CLD_37_37)), &conv1_STATE_VARIABLE_CLD_32);
              *STATE_VARIABLE_CLD_32 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_32));
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (VarRval_24));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_22);
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_44));
              }
              FreeVarCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_40)));
              Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_26, FreeVarCode_28);
              Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_23, Var_47);
              *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DeconstructCode_21, Var_46);
            }
          }
          else
          {
            *Code_18 = DeconstructCode_21;
            *STATE_VARIABLE_CLD_32 = STATE_VARIABLE_CLD_36_36;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Code_18 = DeconstructCode_21;
          *STATE_VARIABLE_CLD_32 = STATE_VARIABLE_CLD_35_35;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsId_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_85,
  MR_Word * STATE_VARIABLE_CLD_86)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word ConsTag_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_10);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_86 = STATE_VARIABLE_CLD_0_85;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_45;
              MR_Word ArgMode_46;
              MR_Word VarType_47;
              MR_Word IsDummy_48;
              MR_Box conv3_RHSVar_45;
              MR_Box conv2_ArgMode_46;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv3_RHSVar_45, &conv2_ArgMode_46);
              RHSVar_45 = ((MR_Word) (conv3_RHSVar_45));
              ArgMode_46 = ((MR_Word) (conv2_ArgMode_46));
              VarType_47 = ll_backend__code_info__variable_type_2_f_0(CI_14, LHSVar_9);
              IsDummy_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_47);
              switch (IsDummy_48) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_85, RHSVar_45);
                    if (succeeded)
                      ll_backend__code_loc_dep__assign_const_to_var_5_p_0(RHSVar_45, (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])), CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
                    else
                      *STATE_VARIABLE_CLD_86 = STATE_VARIABLE_CLD_0_85;
                    *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word RHSType_49;

                    RHSType_49 = ll_backend__code_info__variable_type_2_f_0(CI_14, RHSVar_45);
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(LHSVar_9, RHSVar_45, RHSType_49, ArgMode_46, Code_13, CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_86 = STATE_VARIABLE_CLD_0_85;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 14:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_86 = STATE_VARIABLE_CLD_0_85;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word LHSBaseRval_52;
              MR_Word VarTypes_53;
              MR_Word RHSVarsWidths_54;

              {
                LHSBaseRval_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), LHSBaseRval_52, 0) = ((MR_Box) (LHSVar_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_53);
              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_54);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_51)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), LHSBaseRval_52, RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word LHSPtag_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_51, (MR_Integer) 0))));

                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSPtag_157, LHSBaseRval_52, RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 1))));
                    MR_Word SectagSize_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_56, (MR_Integer) 1))));
                    MR_Word LHSPtag_130 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 0))));

                    if ((SectagSize_58 == (MR_Word) ((MR_Unsigned) 0U)))
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSPtag_130, LHSBaseRval_52, RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
                    else
                    {
                      MR_Word TagwordRHSVarsWidths_60;
                      MR_Word TagwordArgModes_61;
                      MR_Word NonTagwordRHSVarsWidths_62;
                      MR_Word NonTagwordArgModes_63;
                      MR_Word LHSSectagWordLval_64;
                      MR_Word LHSSectagWordRval_66;
                      MR_Word MaterializeTagwordCode_67;
                      MR_Word ToOrRvals_68;
                      MR_Unsigned ToOrMask_69;
                      MR_Word AssignRightCode_70;
                      MR_Word TagwordCode_71;
                      MR_Word NonTagwordCode_82;
                      MR_Word Var_95;
                      MR_Word Var_99;
                      MR_Word STATE_VARIABLE_CLD_102_102;
                      MR_Word STATE_VARIABLE_CLD_104_104;

                      ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(RHSVarsWidths_54, ArgModes_12, &TagwordRHSVarsWidths_60, &TagwordArgModes_61, &NonTagwordRHSVarsWidths_62, &NonTagwordArgModes_63);
                      {
                        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (LHSPtag_130));
                      }
                      {
                        LHSSectagWordLval_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_64, 1) = ((MR_Box) (Var_95));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_64, 2) = ((MR_Box) (LHSBaseRval_52));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_64, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                      }
                      {
                        LHSSectagWordRval_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), LHSSectagWordRval_66, 0) = ((MR_Box) (LHSSectagWordLval_64));
                      }
                      MaterializeTagwordCode_67 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                      {
                        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (LHSSectagWordLval_64));
                        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(LHSSectagWordRval_66, TagwordRHSVarsWidths_60, TagwordArgModes_61, Var_99, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_68, (MR_Unsigned) 0U, &ToOrMask_69, &AssignRightCode_70, CI_14, STATE_VARIABLE_CLD_0_85, &STATE_VARIABLE_CLD_102_102);
                      if ((ToOrRvals_68 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        TagwordCode_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_67, AssignRightCode_70);
                        STATE_VARIABLE_CLD_104_104 = STATE_VARIABLE_CLD_102_102;
                      }
                      else
                      {
                        MR_Word HeadToOrRval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_68, (MR_Integer) 0))));
                        MR_Word TailToOrRvals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_68, (MR_Integer) 1))));
                        MR_Word ToOrRval0_74;
                        MR_Word ToOrRval_75;
                        MR_Word ToOrRvalCode_76;
                        MR_Word ComplementMask_77;
                        MR_Word MaskedOldSectagWordRval_78;
                        MR_Word NewSectagWordRval_79;
                        MR_Word AssignLeftCode_81;
                        MR_Word Var_105;
                        MR_Unsigned Var_106;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word Var_114;
                        MR_Word Var_115;

                        ToOrRval0_74 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_72, TailToOrRvals_73);
                        ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(ToOrRval0_74, &ToOrRval_75, &ToOrRvalCode_76, STATE_VARIABLE_CLD_102_102, &STATE_VARIABLE_CLD_104_104);
                        Var_106 = ~(ToOrMask_69);
                        {
                          Var_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_105, 0) = ((MR_Box) (Var_106));
                        }
                        {
                          ComplementMask_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ComplementMask_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ComplementMask_77, 1) = ((MR_Box) (Var_105));
                        }
                        {
                          MaskedOldSectagWordRval_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_78, 2) = ((MR_Box) (LHSSectagWordRval_66));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_78, 3) = ((MR_Box) (ComplementMask_77));
                        }
                        {
                          NewSectagWordRval_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[3])));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_79, 2) = ((MR_Box) (MaskedOldSectagWordRval_78));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_79, 3) = ((MR_Box) (ToOrRval_75));
                        }
                        {
                          Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (LHSSectagWordLval_64));
                          MR_hl_field(MR_mktag(3), Var_113, 2) = ((MR_Box) (NewSectagWordRval_79));
                        }
                        {
                          Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Var_113));
                          MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) ((MR_String) "updating tagword"));
                        }
                        AssignLeftCode_81 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_112)));
                        Var_115 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ToOrRvalCode_76, AssignLeftCode_81);
                        Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_70, Var_115);
                        TagwordCode_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_67, Var_114);
                      }
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSPtag_130, LHSBaseRval_52, NonTagwordRHSVarsWidths_62, NonTagwordArgModes_63, &NonTagwordCode_82, CI_14, STATE_VARIABLE_CLD_104_104, STATE_VARIABLE_CLD_86);
                      *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_71, NonTagwordCode_82);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "remote_args_ctor");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_87;
              MR_Word STATE_VARIABLE_CLD_91_91;
              MR_Word RHSVarsWidths_139;
              MR_Word ToOrRvals_140;
              MR_Unsigned ToOrMask_141;
              MR_Word AssignRightCode_142;

              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_139);
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (LHSVar_9));
              }
              ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(Var_87, RHSVarsWidths_139, ArgModes_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_140, (MR_Unsigned) 0U, &ToOrMask_141, &AssignRightCode_142, CI_14, STATE_VARIABLE_CLD_0_85, &STATE_VARIABLE_CLD_91_91);
              if ((ToOrRvals_140 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Code_13 = AssignRightCode_142;
                *STATE_VARIABLE_CLD_86 = STATE_VARIABLE_CLD_91_91;
              }
              else
              {
                MR_Word HeadToOrRval_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_140, (MR_Integer) 0))));
                MR_Word TailToOrRvals_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_140, (MR_Integer) 1))));
                MR_Word ToOrRval_133;
                MR_Word AssignLeftCode_134;

                ToOrRval_133 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_131, TailToOrRvals_132);
                ll_backend__code_loc_dep__reassign_tagword_var_6_p_0(LHSVar_9, ToOrMask_141, ToOrRval_133, &AssignLeftCode_134, STATE_VARIABLE_CLD_91_91, STATE_VARIABLE_CLD_86);
                *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_142, AssignLeftCode_134);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Ptag_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word RHSVar_128;
              MR_Word ArgMode_129;
              MR_Box conv1_RHSVar_128;
              MR_Box conv0_ArgMode_129;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv1_RHSVar_128, &conv0_ArgMode_129);
              RHSVar_128 = ((MR_Word) (conv1_RHSVar_128));
              ArgMode_129 = ((MR_Word) (conv0_ArgMode_129));
              ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(LHSVar_9, RHSVar_128, Ptag_50, ArgMode_129, Code_13, CI_14, STATE_VARIABLE_CLD_0_85, STATE_VARIABLE_CLD_86);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word RHSType_17;
    MR_Word Dir_18;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    RHSType_17 = ll_backend__code_info__variable_type_2_f_0(CI_14, RHSVar_10);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, RHSType_17, &Dir_18);
    switch (Dir_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (RHSVar_10));
          }
          ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(LHSVar_9, Ptag_11, Var_23, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_21, RHSVar_10);
          if (succeeded)
          {
            uint8_t PtagUint8_19 = (uint8_t) (Ptag_11);

            succeeded = (PtagUint8_19 == UINT8_C(0));
            if (succeeded)
            {
              ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_10, LHSVar_9, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            else
            {
              MR_Word LHSBodyRval_20;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_29;
              MR_Integer Var_30;

              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (LHSVar_9));
              }
              Var_30 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_19);
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
              }
              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
              }
              {
                LHSBodyRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 1) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 2) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 3) = ((MR_Box) (Var_28));
              }
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_10, LHSBodyRval_20, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
            }
          }
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__5_5 = HeadVar__1_1;
                *HeadVar__6_6 = HeadVar__2_2;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word TailTagwordVarsWidths_41;
                MR_Word TailTagwordArgModes_42;

                ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(Var_54, ArgModes_26, &TailTagwordVarsWidths_41, &TailTagwordArgModes_42, HeadVar__5_5, HeadVar__6_6);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordVarsWidths_41));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgModes_42));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word FieldLvals_4,
  MR_Word STATE_VARIABLE_ToOrRvals_0_5,
  MR_Word * STATE_VARIABLE_ToOrRvals_6,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_7,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
      *STATE_VARIABLE_ToOrMask_8 = STATE_VARIABLE_ToOrMask_0_7;
      *STATE_VARIABLE_ToOrRvals_6 = STATE_VARIABLE_ToOrRvals_0_5;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/12", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/12", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgModes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word HeadCode_70;
      MR_Word TailCode_71;
      MR_Word STATE_VARIABLE_ToOrRvals_78_78;
      MR_Unsigned STATE_VARIABLE_ToOrMask_79_79;
      MR_Word STATE_VARIABLE_CLD_80_80;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(HeadVar__1_1, Var_87, ArgMode_62, FieldLvals_4, STATE_VARIABLE_ToOrRvals_0_5, &STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrMask_0_7, &STATE_VARIABLE_ToOrMask_79_79, &HeadCode_70, HeadVar__10_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_80_80);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(HeadVar__1_1, Var_86, ArgModes_63, FieldLvals_4, STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrRvals_6, STATE_VARIABLE_ToOrMask_79_79, STATE_VARIABLE_ToOrMask_8, &TailCode_71, HeadVar__10_10, STATE_VARIABLE_CLD_80_80, STATE_VARIABLE_CLD_12);
      *HeadVar__9_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_70, TailCode_71);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LHSRval_13,
  MR_Word RHSVarWidth_14,
  MR_Word ArgMode_15,
  MR_Word FieldLvals_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_28,
  MR_Word * STATE_VARIABLE_ToOrRvals_29,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_30,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_31,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33)
{
  {
    MR_bool succeeded;
    MR_Word RHSVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarWidth_14, (MR_Integer) 1))));
    MR_Word ModuleInfo_24;
    MR_Word VarTypes_25;
    MR_Word RHSType_26;
    MR_Word Dir_27;

    ll_backend__code_info__get_module_info_2_p_0(CI_20, &ModuleInfo_24);
    ll_backend__code_info__get_vartypes_2_p_0(CI_20, &VarTypes_25);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_25, RHSVar_22, &RHSType_26);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_24, ArgMode_15, RHSType_26, &Dir_27);
    switch (Dir_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ArgPosWidth_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                return;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 3))));
                    MR_Word Mask_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 5))));
                    MR_Word Fill_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Integer ShiftInt_54 = (MR_Integer) (Shift_50);
                    MR_Integer MaskInt_55 = (MR_Integer) (Mask_52);
                    MR_Word LeftShiftedRHSRval_56;
                    MR_Word Var_72;
                    MR_Unsigned Var_75;
                    MR_Unsigned Var_76;

                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (RHSVar_22));
                    }
                    LeftShiftedRHSRval_56 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Var_72, Shift_50, Fill_53);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_29 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedRHSRval_56));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_28));
                    }
                    Var_76 = mercury__uint__cast_from_int_1_f_0(MaskInt_55);
                    Var_75 = mercury__uint__f_60_60_2_f_0(Var_76, ShiftInt_54);
                    *STATE_VARIABLE_ToOrMask_31 = (Var_75 | STATE_VARIABLE_ToOrMask_0_30);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
                    *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
                  }
                  break;
              }
              break;
          }
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_32, RHSVar_22);
          if (succeeded)
            ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(LHSRval_13, RHSVar_22, ArgPosWidth_23, FieldLvals_16, Code_19, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
          else
          {
            *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
          }
          *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
          *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
          *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
          *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(
  MR_Word LHSRval_8,
  MR_Word RHSVar_9,
  MR_Word ArgPosWidth_10,
  MR_Word FieldLvals_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_39,
  MR_Word * STATE_VARIABLE_CLD_40)
{
  switch (MR_tag((MR_Word) ArgPosWidth_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
        return;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
            MR_Word Mask_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
            MR_Word Fill_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word LeftRval0_20;
            MR_Integer MaskInt_21;
            MR_Word MaskedLeftRval0_22;
            MR_Word MaskedLeftRval_23;
            MR_Word Var_45;
            MR_Word Var_46;

            LeftRval0_20 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(LHSRval_8, Shift_16);
            MaskInt_21 = (MR_Integer) (Mask_18);
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MaskInt_21));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
            }
            {
              MaskedLeftRval0_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 2) = ((MR_Box) (LeftRval0_20));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 3) = ((MR_Box) (Var_45));
            }
            ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_19, MaskedLeftRval0_22, &MaskedLeftRval_23);
            if ((FieldLvals_11 == (MR_Word) ((MR_Unsigned) 0U)))
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_9, MaskedLeftRval_23, Code_12, STATE_VARIABLE_CLD_0_39, STATE_VARIABLE_CLD_40);
            else
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_9, FieldLvals_11, MaskedLeftRval_23, Code_12, STATE_VARIABLE_CLD_0_39, STATE_VARIABLE_CLD_40);
          }
          break;
        case (MR_Integer) 2:
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_40 = STATE_VARIABLE_CLD_0_39;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word LHSPtag_2,
  MR_Word LHSBaseRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_9 = STATE_VARIABLE_CLD_0_8;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/9", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/9", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        MR_Word ArgModes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        MR_Word RHSVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
        MR_Word LHSArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 1))));
        MR_Word RHSType_53;
        MR_Word HeadCode_54;
        MR_Word TailCode_55;
        MR_Word STATE_VARIABLE_CLD_58_58;
        MR_Word ModuleInfo_75;
        MR_Word Dir_76;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, RHSVar_51, &RHSType_53);
        ll_backend__code_info__get_module_info_2_p_0(HeadVar__7_7, &ModuleInfo_75);
        ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_75, ArgMode_46, RHSType_53, &Dir_76);
        switch (Dir_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(LHSPtag_2, LHSBaseRval_3, LHSArgPosWidth_52, RHSVar_51, &HeadCode_54, STATE_VARIABLE_CLD_0_8, &STATE_VARIABLE_CLD_58_58);
            break;
          case (MR_Integer) 1:
            {
              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_8, RHSVar_51);
              if (succeeded)
                ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_8_p_0(LHSPtag_2, LHSBaseRval_3, LHSArgPosWidth_52, RHSVar_51, &HeadCode_54, HeadVar__7_7, STATE_VARIABLE_CLD_0_8, &STATE_VARIABLE_CLD_58_58);
              else
              {
                HeadCode_54 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                STATE_VARIABLE_CLD_58_58 = STATE_VARIABLE_CLD_0_8;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              HeadCode_54 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              STATE_VARIABLE_CLD_58_58 = STATE_VARIABLE_CLD_0_8;
            }
            break;
        }
        ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_1, LHSPtag_2, LHSBaseRval_3, Var_62, ArgModes_47, &TailCode_55, HeadVar__7_7, STATE_VARIABLE_CLD_58_58, STATE_VARIABLE_CLD_9);
        *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_54, TailCode_55);
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(
  MR_Word LHSPtag_8,
  MR_Word LHSBaseRval0_9,
  MR_Word LHSArgPosWidth_10,
  MR_Word RHSVar_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_44,
  MR_Word * STATE_VARIABLE_CLD_45)
{
  {
    MR_Word ProduceRHSVarCode_14;
    MR_Word RHSRval_15;
    MR_Word LHSBaseRval_16;
    MR_Word MaterializeLHSBaseCode_17;
    MR_Word AssignCode_21;
    MR_Word STATE_VARIABLE_CLD_46_46;
    MR_Word Var_87;

    ll_backend__code_loc_dep__produce_variable_5_p_0(RHSVar_11, &ProduceRHSVarCode_14, &RHSRval_15, STATE_VARIABLE_CLD_0_44, &STATE_VARIABLE_CLD_46_46);
    ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(LHSBaseRval0_9, &LHSBaseRval_16, &MaterializeLHSBaseCode_17, STATE_VARIABLE_CLD_46_46, STATE_VARIABLE_CLD_45);
    switch (MR_tag((MR_Word) LHSArgPosWidth_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Integer LHSCellOffset_19;
          MR_Word LHSLval_20;
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LHSArgPosWidth_10, (MR_Integer) 1))));
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          LHSCellOffset_19 = (MR_Integer) (Var_80);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (LHSPtag_8));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LHSCellOffset_19));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            LHSLval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLval_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLval_20, 1) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(3), LHSLval_20, 2) = ((MR_Box) (LHSBaseRval_16));
            MR_hl_field(MR_mktag(3), LHSLval_20, 3) = ((MR_Box) (Var_82));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (LHSLval_20));
            MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (RHSRval_15));
          }
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) ((MR_String) "Copy value"));
          }
          AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_84)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LHSLvalA_24;
          MR_Word LHSLvalB_25;
          MR_Word SrcA_26;
          MR_Word SrcB_27;
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LHSArgPosWidth_10, (MR_Integer) 1))));
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Integer Var_69;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Integer LHSCellOffset_88 = (MR_Integer) (Var_62);

          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LHSPtag_8));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LHSCellOffset_88));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
          }
          {
            LHSLvalA_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLvalA_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLvalA_24, 1) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(3), LHSLvalA_24, 2) = ((MR_Box) (LHSBaseRval_16));
            MR_hl_field(MR_mktag(3), LHSLvalA_24, 3) = ((MR_Box) (Var_64));
          }
          Var_69 = (MR_Integer) ((MR_Unsigned) LHSCellOffset_88 + (MR_Unsigned) 1);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            LHSLvalB_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLvalB_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLvalB_25, 1) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(3), LHSLvalB_25, 2) = ((MR_Box) (LHSBaseRval_16));
            MR_hl_field(MR_mktag(3), LHSLvalB_25, 3) = ((MR_Box) (Var_67));
          }
          {
            SrcA_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcA_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), SrcA_26, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(3), SrcA_26, 2) = ((MR_Box) (RHSRval_15));
          }
          {
            SrcB_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcB_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), SrcB_27, 1) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(MR_mktag(3), SrcB_27, 2) = ((MR_Box) (RHSRval_15));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (LHSLvalA_24));
            MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (SrcA_26));
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (LHSLvalB_25));
            MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (SrcB_27));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
          }
          AssignCode_21 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_73);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 3))));
              MR_Word Mask_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 5))));
              MR_Word Fill_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_36 = (MR_Integer) (Shift_30);
              MR_Integer MaskInt_37 = (MR_Integer) (Mask_32);
              MR_Word ComplementMask_38;
              MR_Word MaskOld_39;
              MR_Word ShiftedRHSRval_40;
              MR_Word CombinedRval_41;
              MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 2))));
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Integer Var_54;
              MR_Integer Var_55;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Integer LHSCellOffset_89 = (MR_Integer) (Var_49);
              MR_Word LHSLval_90;

              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (LHSPtag_8));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (LHSCellOffset_89));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
              }
              {
                LHSLval_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSLval_90, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), LHSLval_90, 1) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(3), LHSLval_90, 2) = ((MR_Box) (LHSBaseRval_16));
                MR_hl_field(MR_mktag(3), LHSLval_90, 3) = ((MR_Box) (Var_51));
              }
              Var_55 = mercury__int__f_60_60_2_f_0(MaskInt_37, ShiftInt_36);
              Var_54 = ~(Var_55);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              }
              {
                ComplementMask_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ComplementMask_38, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (LHSLval_90));
              }
              {
                MaskOld_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskOld_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                MR_hl_field(MR_mktag(3), MaskOld_39, 2) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(3), MaskOld_39, 3) = ((MR_Box) (ComplementMask_38));
              }
              ShiftedRHSRval_40 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_15, Shift_30, Fill_33);
              CombinedRval_41 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_39, ShiftedRHSRval_40);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (LHSLval_90));
                MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (CombinedRval_41));
              }
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_59)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 2))));
              MR_Word Shift_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 3))));
              MR_Word Mask_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 5))));
              MR_Word Fill_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_99 = (MR_Integer) (Shift_96);
              MR_Integer MaskInt_100 = (MR_Integer) (Mask_97);
              MR_Word ComplementMask_101;
              MR_Word MaskOld_102;
              MR_Word ShiftedRHSRval_103;
              MR_Word CombinedRval_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Integer Var_109;
              MR_Integer Var_110;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Integer LHSCellOffset_117 = (MR_Integer) (Var_48);
              MR_Word LHSLval_118;

              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (LHSPtag_8));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (LHSCellOffset_117));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                LHSLval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSLval_118, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), LHSLval_118, 1) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(3), LHSLval_118, 2) = ((MR_Box) (LHSBaseRval_16));
                MR_hl_field(MR_mktag(3), LHSLval_118, 3) = ((MR_Box) (Var_106));
              }
              Var_110 = mercury__int__f_60_60_2_f_0(MaskInt_100, ShiftInt_99);
              Var_109 = ~(Var_110);
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
              }
              {
                ComplementMask_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (LHSLval_118));
              }
              {
                MaskOld_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_102, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskOld_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                MR_hl_field(MR_mktag(3), MaskOld_102, 2) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(3), MaskOld_102, 3) = ((MR_Box) (ComplementMask_101));
              }
              ShiftedRHSRval_103 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_15, Shift_96, Fill_98);
              CombinedRval_104 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_102, ShiftedRHSRval_103);
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (LHSLval_118));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (CombinedRval_104));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
            }
            break;
          case (MR_Integer) 2:
            AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            break;
        }
        break;
    }
    Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeLHSBaseCode_17, AssignCode_21);
    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceRHSVarCode_14, Var_87);
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_8_p_0(
  MR_Word LHSPtag_9,
  MR_Word LHSBaseRval_10,
  MR_Word LHSArgPosWidth_11,
  MR_Word RHSVar_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  switch (MR_tag((MR_Word) LHSArgPosWidth_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer LHSCellOffset_17;
        MR_Word LHSLval_18;
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LHSArgPosWidth_11, (MR_Integer) 1))));
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;

        LHSCellOffset_17 = (MR_Integer) (Var_69);
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (LHSPtag_9));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (LHSCellOffset_17));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
        }
        {
          LHSLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LHSLval_18, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), LHSLval_18, 1) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(3), LHSLval_18, 2) = ((MR_Box) (LHSBaseRval_10));
          MR_hl_field(MR_mktag(3), LHSLval_18, 3) = ((MR_Box) (Var_71));
        }
        ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(RHSVar_12, LHSLval_18, Code_13, CI_14, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSLvalA_21;
        MR_Word LHSLvalB_22;
        MR_Word LHSRval_23;
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LHSArgPosWidth_11, (MR_Integer) 1))));
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Integer Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Integer LHSCellOffset_74 = (MR_Integer) (Var_53);

        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LHSPtag_9));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (LHSCellOffset_74));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          LHSLvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LHSLvalA_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), LHSLvalA_21, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(3), LHSLvalA_21, 2) = ((MR_Box) (LHSBaseRval_10));
          MR_hl_field(MR_mktag(3), LHSLvalA_21, 3) = ((MR_Box) (Var_55));
        }
        Var_60 = (MR_Integer) ((MR_Unsigned) LHSCellOffset_74 + (MR_Unsigned) 1);
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          LHSLvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LHSLvalB_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), LHSLvalB_22, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(3), LHSLvalB_22, 2) = ((MR_Box) (LHSBaseRval_10));
          MR_hl_field(MR_mktag(3), LHSLvalB_22, 3) = ((MR_Box) (Var_58));
        }
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (LHSLvalA_21));
        }
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (LHSLvalB_22));
        }
        {
          LHSRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LHSRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), LHSRval_23, 1) = ((MR_Box) ((MR_Unsigned) 92U));
          MR_hl_field(MR_mktag(3), LHSRval_23, 2) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(3), LHSRval_23, 3) = ((MR_Box) (Var_64));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (LHSLvalB_22));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LHSLvalA_21));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
        }
        ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_12, Var_65, LHSRval_23, Code_13, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 3))));
            MR_Integer Mask_27;
            MR_Word Fill_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word LHSRval0_31;
            MR_Word MaskedLHSRval0_32;
            MR_Word MaskedLHSRval_33;
            MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 2))));
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 5))));
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Integer LHSCellOffset_75 = (MR_Integer) (Var_40);
            MR_Word LHSLval_76;

            Mask_27 = (MR_Integer) (Var_41);
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (LHSPtag_9));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (LHSCellOffset_75));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
            }
            {
              LHSLval_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LHSLval_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), LHSLval_76, 1) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(3), LHSLval_76, 2) = ((MR_Box) (LHSBaseRval_10));
              MR_hl_field(MR_mktag(3), LHSLval_76, 3) = ((MR_Box) (Var_43));
            }
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (LHSLval_76));
            }
            LHSRval0_31 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_45, Shift_25);
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Mask_27));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
            }
            {
              MaskedLHSRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_32, 2) = ((MR_Box) (LHSRval0_31));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_32, 3) = ((MR_Box) (Var_48));
            }
            ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_28, MaskedLHSRval0_32, &MaskedLHSRval_33);
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (LHSLval_76));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_12, Var_50, MaskedLHSRval_33, Code_13, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 2))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 5))));
            MR_Word Shift_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 3))));
            MR_Integer Mask_79 = (MR_Integer) (Var_39);
            MR_Word Fill_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), LHSArgPosWidth_11, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word LHSRval0_81;
            MR_Word MaskedLHSRval0_82;
            MR_Word MaskedLHSRval_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Integer LHSCellOffset_94 = (MR_Integer) (Var_38);
            MR_Word LHSLval_95;

            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (LHSPtag_9));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (LHSCellOffset_94));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
            }
            {
              LHSLval_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LHSLval_95, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), LHSLval_95, 1) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(3), LHSLval_95, 2) = ((MR_Box) (LHSBaseRval_10));
              MR_hl_field(MR_mktag(3), LHSLval_95, 3) = ((MR_Box) (Var_85));
            }
            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (LHSLval_95));
            }
            LHSRval0_81 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_87, Shift_78);
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Mask_79));
            }
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
            }
            {
              MaskedLHSRval0_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_82, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_82, 2) = ((MR_Box) (LHSRval0_81));
              MR_hl_field(MR_mktag(3), MaskedLHSRval0_82, 3) = ((MR_Box) (Var_90));
            }
            ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_80, MaskedLHSRval0_82, &MaskedLHSRval_83);
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LHSLval_95));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_12, Var_92, MaskedLHSRval_83, Code_13, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
          }
          break;
        case (MR_Integer) 2:
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_0_36;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word RHSType_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word Dir_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, RHSType_11, &Dir_17);
    switch (Dir_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_18, LHSVar_9);
          if (succeeded)
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LHSVar_9, RHSVar_10, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
          else
            *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_18, RHSVar_10);
          if (succeeded)
          {
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_10, LHSVar_9, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          }
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
        }
        break;
    }
  }
}

void mercury__ll_backend__unify_gen_deconstruct__init(void)
{
}

void mercury__ll_backend__unify_gen_deconstruct__init_type_tables(void)
{
}

void mercury__ll_backend__unify_gen_deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_deconstruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_deconstruct.
