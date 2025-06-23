/*
** Automatically generated from `unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2025-06-23
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_9_p_0(
  MR_Word NonLocals_10,
  MR_Word LHSVar_11,
  MR_Word ConsId_12,
  MR_Word RHSVars_13,
  MR_Word ArgModes_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_86,
  MR_Word * STATE_VARIABLE_CLD_87);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_9_p_0(
  MR_Word NonLocals_10,
  MR_Word LHSVar_11,
  MR_Word RHSVar_12,
  MR_Word Ptag_13,
  MR_Word ArgMode_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_13_p_0(
  MR_Word NonLocals_1,
  MR_Word LHSRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldLvals_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_13_p_0(
  MR_Word NonLocals_14,
  MR_Word LHSRval_15,
  MR_Word RHSVarWidth_16,
  MR_Word ArgMode_17,
  MR_Word FieldLvals_18,
  MR_Word STATE_VARIABLE_ToOrRvals_0_31,
  MR_Word * STATE_VARIABLE_ToOrRvals_32,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_33,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_34,
  MR_Word * Code_21,
  MR_Word CI_22,
  MR_Word STATE_VARIABLE_CLD_0_35,
  MR_Word * STATE_VARIABLE_CLD_36);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(
  MR_Word VarTable_1,
  MR_Word NonLocals_2,
  MR_Word LHSPtag_3,
  MR_Word LHSBaseRval_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_11_p_0(
  MR_Word NonLocals_12,
  MR_Word LHSPtag_13,
  MR_Word LHSBaseRval_14,
  MR_Word LHSArgPosWidth_15,
  MR_Word RHSVar_16,
  MR_Word RHSType_17,
  MR_Word ArgMode_18,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(
  MR_Word LHSPtag_8,
  MR_Word LHSBaseRval0_9,
  MR_Word LHSArgPosWidth_10,
  MR_Word RHSVar_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_44,
  MR_Word * STATE_VARIABLE_CLD_45);


static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_4[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__unify_gen_deconstruct_scalar_common_2[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6] = {
  /* row   0 */
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
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_deconstruct_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_12_p_0(
  MR_Word NonLocals_13,
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word CanFail_18,
  MR_Word CanCGC_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34,
  MR_Word STATE_VARIABLE_CLD_0_35,
  MR_Word * STATE_VARIABLE_CLD_36)
{
  MR_bool succeeded;
  MR_Word DeconstructCode_23;
  MR_Word STATE_VARIABLE_CLD_1_38;

  switch (CanFail_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LHSVarCode_58;
        MR_Word LHSVarRval_59;
        MR_Word VarTable_60;
        MR_Word LHSVarEntry_61;
        MR_String LHSVarName_62;
        MR_Word LHSVarType_63;
        MR_Word CheaperTagTest_64;
        MR_Word SuccLabel_65;
        MR_Word TagTestCode_66;
        MR_Word AfterUnify_67;
        MR_Word FailCode_68;
        MR_Word DetDeconstructCode_69;
        MR_Word SuccessLabelCode_70;
        MR_Word STATE_VARIABLE_CLD_1_71;
        MR_Word STATE_VARIABLE_CLD_2_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;

        ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_14, &LHSVarCode_58, &LHSVarRval_59, STATE_VARIABLE_CLD_0_35, &STATE_VARIABLE_CLD_1_71);
        ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_33, &VarTable_60);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_60, LHSVar_14, &LHSVarEntry_61);
        LHSVarName_62 = parse_tree__var_table__var_entry_name_2_f_0(LHSVar_14, LHSVarEntry_61);
        LHSVarType_63 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_61, 1))));
        CheaperTagTest_64 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_33, LHSVarType_63);
        ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(LHSVarRval_59, LHSVarName_62, ConsId_15, CheaperTagTest_64, (MR_Integer) 0, &SuccLabel_65, &TagTestCode_66, STATE_VARIABLE_CI_0_33, STATE_VARIABLE_CI_34);
        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_1_71, &AfterUnify_67);
        ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_68, *STATE_VARIABLE_CI_34, STATE_VARIABLE_CLD_1_71);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_67, *STATE_VARIABLE_CI_34, &STATE_VARIABLE_CLD_2_73);
        ll_backend__unify_gen_deconstruct__generate_det_deconstruction_9_p_0(NonLocals_13, LHSVar_14, ConsId_15, RHSVars_16, ArgModes_17, &DetDeconstructCode_69, *STATE_VARIABLE_CI_34, STATE_VARIABLE_CLD_2_73, &STATE_VARIABLE_CLD_1_38);
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (SuccLabel_65));
        }
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_String) ""));
        }
        SuccessLabelCode_70 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_74)));
        Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_70, DetDeconstructCode_69);
        Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_68, Var_79);
        Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_66, Var_78);
        DeconstructCode_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LHSVarCode_58, Var_77);
      }
      break;
    case (MR_Integer) 1:
      {
        ll_backend__unify_gen_deconstruct__generate_det_deconstruction_9_p_0(NonLocals_13, LHSVar_14, ConsId_15, RHSVars_16, ArgModes_17, &DeconstructCode_23, STATE_VARIABLE_CI_0_33, STATE_VARIABLE_CLD_0_35, &STATE_VARIABLE_CLD_1_38);
        *STATE_VARIABLE_CI_34 = STATE_VARIABLE_CI_0_33;
      }
      break;
  }
  switch (CanCGC_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTable_24;
        MR_Word LHSVarEntry_25;
        MR_String LHSVarName_26;
        MR_Word ProduceVarCode_27;
        MR_Word VarRval_28;
        MR_Word STATE_VARIABLE_CLD_3_40;
        MR_Word VarLval_29;

        ll_backend__code_info__get_var_table_2_p_0(*STATE_VARIABLE_CI_34, &VarTable_24);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_24, LHSVar_14, &LHSVarEntry_25);
        LHSVarName_26 = parse_tree__var_table__var_entry_name_2_f_0(LHSVar_14, LHSVarEntry_25);
        ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_14, &ProduceVarCode_27, &VarRval_28, STATE_VARIABLE_CLD_1_38, &STATE_VARIABLE_CLD_3_40);
        succeeded = ((MR_tag((MR_Word) VarRval_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarLval_29 = ((MR_Word) ((MR_hl_field(0, VarRval_28, 0))));
          {
            MR_Word SaveArgsCode_30;
            MR_Word Regs_31;
            MR_Word FreeVarCode_32;
            MR_Word STATE_VARIABLE_CLD_4_41;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_String Var_48;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Box conv1_STATE_VARIABLE_CLD_36;

            ll_backend__code_loc_dep__save_reused_cell_fields_6_p_0(LHSVar_14, VarLval_29, &SaveArgsCode_30, &Regs_31, STATE_VARIABLE_CLD_3_40, &STATE_VARIABLE_CLD_4_41);
            mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_4[0]), Regs_31, ((MR_Box) (STATE_VARIABLE_CLD_4_41)), &conv1_STATE_VARIABLE_CLD_36);
            *STATE_VARIABLE_CLD_36 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_36));
            {
              Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_46, 2) = ((MR_Box) (VarRval_28));
            }
            {
              Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Var_45, 1) = ((MR_Box) (Var_46));
            }
            Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_26);
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (Var_48));
            }
            FreeVarCode_32 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
            Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_30, FreeVarCode_32);
            Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_27, Var_51);
            *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DeconstructCode_23, Var_50);
          }
        }
        else
        {
          *Code_20 = DeconstructCode_23;
          *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_3_40;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Code_20 = DeconstructCode_23;
        *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_1_38;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_9_p_0(
  MR_Word NonLocals_10,
  MR_Word LHSVar_11,
  MR_Word ConsId_12,
  MR_Word RHSVars_13,
  MR_Word ArgModes_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_86,
  MR_Word * STATE_VARIABLE_CLD_87)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word ConsTag_19;

  ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
  ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_18, ConsId_12);
  switch (MR_tag((MR_Word) ConsTag_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_87 = STATE_VARIABLE_CLD_0_86;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_46;
            MR_Word ArgMode_47;
            MR_Word VarType_48;
            MR_Word IsDummy_49;
            MR_Box conv3_RHSVar_46;
            MR_Box conv2_ArgMode_47;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_13, ArgModes_14, &conv3_RHSVar_46, &conv2_ArgMode_47);
            RHSVar_46 = ((MR_Word) (conv3_RHSVar_46));
            ArgMode_47 = ((MR_Word) (conv2_ArgMode_47));
            VarType_48 = ll_backend__code_info__variable_type_2_f_0(CI_16, LHSVar_11);
            IsDummy_49 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_18, VarType_48);
            switch (IsDummy_49) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_86, RHSVar_46);
                  if (succeeded)
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(RHSVar_46, (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[1])), CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                  else
                    *STATE_VARIABLE_CLD_87 = STATE_VARIABLE_CLD_0_86;
                  *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RHSType_50;

                  RHSType_50 = ll_backend__code_info__variable_type_2_f_0(CI_16, RHSVar_46);
                  ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_9_p_0(NonLocals_10, LHSVar_11, RHSVar_46, RHSType_50, ArgMode_47, Code_15, CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
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
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_87 = STATE_VARIABLE_CLD_0_86;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_19, 0))))) {
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
            *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_87 = STATE_VARIABLE_CLD_0_86;
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 10:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/9", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_52 = ((MR_Word) ((MR_hl_field(3, ConsTag_19, 1))));
            MR_Word LHSBaseRval_53;
            MR_Word VarTable_54;
            MR_Word RHSVarsWidths_55;

            {
              LHSBaseRval_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LHSBaseRval_53, 0) = ((MR_Box) (LHSVar_11));
            }
            ll_backend__code_info__get_var_table_2_p_0(CI_16, &VarTable_54);
            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_18, ConsId_12, RHSVars_13, &RHSVarsWidths_55);
            switch (MR_tag((MR_Word) RemoteArgsTagInfo_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(VarTable_54, NonLocals_10, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), LHSBaseRval_53, RHSVarsWidths_55, ArgModes_14, Code_15, CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word LHSPtag_154 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_52, 0))));

                  ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(VarTable_54, NonLocals_10, LHSPtag_154, LHSBaseRval_53, RHSVarsWidths_55, ArgModes_14, Code_15, CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_57 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_52, 1))));
                  MR_Word SectagSize_59 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_57, 1))));
                  MR_Word LHSPtag_131 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_52, 0))));

                  if ((SectagSize_59 == (MR_Word) ((MR_Unsigned) 0U)))
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(VarTable_54, NonLocals_10, LHSPtag_131, LHSBaseRval_53, RHSVarsWidths_55, ArgModes_14, Code_15, CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                  else
                  {
                    MR_Word TagwordRHSVarsWidths_61;
                    MR_Word TagwordArgModes_62;
                    MR_Word NonTagwordRHSVarsWidths_63;
                    MR_Word NonTagwordArgModes_64;
                    MR_Word LHSSectagWordLval_65;
                    MR_Word LHSSectagWordRval_67;
                    MR_Word MaterializeTagwordCode_68;
                    MR_Word ToOrRvals_69;
                    MR_Unsigned ToOrMask_70;
                    MR_Word AssignRightCode_71;
                    MR_Word TagwordCode_72;
                    MR_Word NonTagwordCode_83;
                    MR_Word Var_99;
                    MR_Word Var_103;
                    MR_Word STATE_VARIABLE_CLD_6_106;
                    MR_Word STATE_VARIABLE_CLD_7_108;

                    ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(RHSVarsWidths_55, ArgModes_14, &TagwordRHSVarsWidths_61, &TagwordArgModes_62, &NonTagwordRHSVarsWidths_63, &NonTagwordArgModes_64);
                    {
                      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_99, 0) = ((MR_Box) (LHSPtag_131));
                    }
                    {
                      LHSSectagWordLval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSSectagWordLval_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSSectagWordLval_65, 1) = ((MR_Box) (Var_99));
                      MR_hl_field(3, LHSSectagWordLval_65, 2) = ((MR_Box) (LHSBaseRval_53));
                      MR_hl_field(3, LHSSectagWordLval_65, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                    }
                    {
                      LHSSectagWordRval_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, LHSSectagWordRval_67, 0) = ((MR_Box) (LHSSectagWordLval_65));
                    }
                    MaterializeTagwordCode_68 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    {
                      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_103, 0) = ((MR_Box) (LHSSectagWordLval_65));
                      MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_13_p_0(NonLocals_10, LHSSectagWordRval_67, TagwordRHSVarsWidths_61, TagwordArgModes_62, Var_103, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_69, (MR_Unsigned) 0U, &ToOrMask_70, &AssignRightCode_71, CI_16, STATE_VARIABLE_CLD_0_86, &STATE_VARIABLE_CLD_6_106);
                    if ((ToOrRvals_69 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      TagwordCode_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_68, AssignRightCode_71);
                      STATE_VARIABLE_CLD_7_108 = STATE_VARIABLE_CLD_6_106;
                    }
                    else
                    {
                      MR_Word HeadToOrRval_73 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_69, 0))));
                      MR_Word TailToOrRvals_74 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_69, 1))));
                      MR_Word ToOrRval0_75;
                      MR_Word ToOrRval_76;
                      MR_Word ToOrRvalCode_77;
                      MR_Word ComplementMask_78;
                      MR_Word MaskedOldSectagWordRval_79;
                      MR_Word NewSectagWordRval_80;
                      MR_Word AssignLeftCode_82;
                      MR_Word Var_109;
                      MR_Unsigned Var_110;
                      MR_Word Var_116;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_Word Var_119;

                      ToOrRval0_75 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_73, TailToOrRvals_74);
                      ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(ToOrRval0_75, &ToOrRval_76, &ToOrRvalCode_77, STATE_VARIABLE_CLD_6_106, &STATE_VARIABLE_CLD_7_108);
                      Var_110 = ~(ToOrMask_70);
                      {
                        Var_109 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_109, 0) = ((MR_Box) (Var_110));
                      }
                      {
                        ComplementMask_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ComplementMask_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, ComplementMask_78, 1) = ((MR_Box) (Var_109));
                      }
                      {
                        MaskedOldSectagWordRval_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, MaskedOldSectagWordRval_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, MaskedOldSectagWordRval_79, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                        MR_hl_field(3, MaskedOldSectagWordRval_79, 2) = ((MR_Box) (LHSSectagWordRval_67));
                        MR_hl_field(3, MaskedOldSectagWordRval_79, 3) = ((MR_Box) (ComplementMask_78));
                      }
                      {
                        NewSectagWordRval_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, NewSectagWordRval_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, NewSectagWordRval_80, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[3])));
                        MR_hl_field(3, NewSectagWordRval_80, 2) = ((MR_Box) (MaskedOldSectagWordRval_79));
                        MR_hl_field(3, NewSectagWordRval_80, 3) = ((MR_Box) (ToOrRval_76));
                      }
                      {
                        Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_117, 1) = ((MR_Box) (LHSSectagWordLval_65));
                        MR_hl_field(3, Var_117, 2) = ((MR_Box) (NewSectagWordRval_80));
                      }
                      {
                        Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_116, 0) = ((MR_Box) (Var_117));
                        MR_hl_field(0, Var_116, 1) = ((MR_Box) ((MR_String) "updating tagword"));
                      }
                      AssignLeftCode_82 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_116)));
                      Var_119 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ToOrRvalCode_77, AssignLeftCode_82);
                      Var_118 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_71, Var_119);
                      TagwordCode_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_68, Var_118);
                    }
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(VarTable_54, NonLocals_10, LHSPtag_131, LHSBaseRval_53, NonTagwordRHSVarsWidths_63, NonTagwordArgModes_64, &NonTagwordCode_83, CI_16, STATE_VARIABLE_CLD_7_108, STATE_VARIABLE_CLD_87);
                    *Code_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_72, NonTagwordCode_83);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/9", (MR_String) "remote_args_ctor");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var_123;
            MR_Word STATE_VARIABLE_CLD_9_127;
            MR_Word RHSVarsWidths_140;
            MR_Word ToOrRvals_141;
            MR_Unsigned ToOrMask_142;
            MR_Word AssignRightCode_143;

            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_18, ConsId_12, RHSVars_13, &RHSVarsWidths_140);
            {
              Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_123, 0) = ((MR_Box) (LHSVar_11));
            }
            ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_13_p_0(NonLocals_10, Var_123, RHSVarsWidths_140, ArgModes_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_141, (MR_Unsigned) 0U, &ToOrMask_142, &AssignRightCode_143, CI_16, STATE_VARIABLE_CLD_0_86, &STATE_VARIABLE_CLD_9_127);
            if ((ToOrRvals_141 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Code_15 = AssignRightCode_143;
              *STATE_VARIABLE_CLD_87 = STATE_VARIABLE_CLD_9_127;
            }
            else
            {
              MR_Word HeadToOrRval_132 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_141, 0))));
              MR_Word TailToOrRvals_133 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_141, 1))));
              MR_Word ToOrRval_134;
              MR_Word AssignLeftCode_135;

              ToOrRval_134 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_132, TailToOrRvals_133);
              ll_backend__code_loc_dep__reassign_tagword_var_6_p_0(LHSVar_11, ToOrMask_142, ToOrRval_134, &AssignLeftCode_135, STATE_VARIABLE_CLD_9_127, STATE_VARIABLE_CLD_87);
              *Code_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_143, AssignLeftCode_135);
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_51 = ((MR_Word) ((MR_hl_field(3, ConsTag_19, 1))));
            MR_Word RHSVar_129;
            MR_Word ArgMode_130;
            MR_Box conv1_RHSVar_129;
            MR_Box conv0_ArgMode_130;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_13, ArgModes_14, &conv1_RHSVar_129, &conv0_ArgMode_130);
            RHSVar_129 = ((MR_Word) (conv1_RHSVar_129));
            ArgMode_130 = ((MR_Word) (conv0_ArgMode_130));
            ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_9_p_0(NonLocals_10, LHSVar_11, RHSVar_129, Ptag_51, ArgMode_130, Code_15, CI_16, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_9_p_0(
  MR_Word NonLocals_10,
  MR_Word LHSVar_11,
  MR_Word RHSVar_12,
  MR_Word Ptag_13,
  MR_Word ArgMode_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word RHSType_19;
  MR_Word Dir_20;

  ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
  RHSType_19 = ll_backend__code_info__variable_type_2_f_0(CI_16, RHSVar_12);
  ll_backend__unify_gen_util__compute_assign_direction_6_p_0(ModuleInfo_18, NonLocals_10, RHSVar_12, RHSType_19, ArgMode_14, &Dir_20);
  switch (Dir_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (RHSVar_12));
        }
        ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(LHSVar_11, Ptag_13, Var_32, Code_15, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_23, RHSVar_12);
        if (succeeded)
        {
          uint8_t PtagUint8_21 = (uint8_t) (Ptag_13);

          succeeded = (PtagUint8_21 == UINT8_C(0));
          if (succeeded)
          {
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_12, LHSVar_11, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
            *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          }
          else
          {
            MR_Word LHSBodyRval_22;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Integer Var_30;

            {
              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_27, 0) = ((MR_Box) (LHSVar_11));
            }
            Var_30 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_21);
            {
              Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
            }
            {
              Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
            }
            {
              LHSBodyRval_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, LHSBodyRval_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, LHSBodyRval_22, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, LHSBodyRval_22, 2) = ((MR_Box) (Var_27));
              MR_hl_field(3, LHSBodyRval_22, 3) = ((MR_Box) (Var_28));
            }
            ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_12, LHSBodyRval_22, Code_15, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
          }
        }
        else
        {
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_24 = STATE_VARIABLE_CLD_0_23;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_24 = STATE_VARIABLE_CLD_0_23;
      }
      break;
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
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgModes_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(0, Var_55, 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_32, 0))))) {
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
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordVarsWidths_41));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_25));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgModes_42));
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
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_13_p_0(
  MR_Word NonLocals_1,
  MR_Word LHSRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word FieldLvals_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_13 = STATE_VARIABLE_CLD_0_12;
      *STATE_VARIABLE_ToOrMask_9 = STATE_VARIABLE_ToOrMask_0_8;
      *STATE_VARIABLE_ToOrRvals_7 = STATE_VARIABLE_ToOrRvals_0_6;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/13", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/13", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgModes_68 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word HeadCode_75;
      MR_Word TailCode_76;
      MR_Word STATE_VARIABLE_ToOrRvals_1_83;
      MR_Unsigned STATE_VARIABLE_ToOrMask_1_84;
      MR_Word STATE_VARIABLE_CLD_1_85;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_13_p_0(NonLocals_1, LHSRval_2, Var_89, ArgMode_67, FieldLvals_5, STATE_VARIABLE_ToOrRvals_0_6, &STATE_VARIABLE_ToOrRvals_1_83, STATE_VARIABLE_ToOrMask_0_8, &STATE_VARIABLE_ToOrMask_1_84, &HeadCode_75, HeadVar__11_11, STATE_VARIABLE_CLD_0_12, &STATE_VARIABLE_CLD_1_85);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_13_p_0(NonLocals_1, LHSRval_2, Var_88, ArgModes_68, FieldLvals_5, STATE_VARIABLE_ToOrRvals_1_83, STATE_VARIABLE_ToOrRvals_7, STATE_VARIABLE_ToOrMask_1_84, STATE_VARIABLE_ToOrMask_9, &TailCode_76, HeadVar__11_11, STATE_VARIABLE_CLD_1_85, STATE_VARIABLE_CLD_13);
      *HeadVar__10_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_75, TailCode_76);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_13_p_0(
  MR_Word NonLocals_14,
  MR_Word LHSRval_15,
  MR_Word RHSVarWidth_16,
  MR_Word ArgMode_17,
  MR_Word FieldLvals_18,
  MR_Word STATE_VARIABLE_ToOrRvals_0_31,
  MR_Word * STATE_VARIABLE_ToOrRvals_32,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_33,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_34,
  MR_Word * Code_21,
  MR_Word CI_22,
  MR_Word STATE_VARIABLE_CLD_0_35,
  MR_Word * STATE_VARIABLE_CLD_36)
{
  MR_bool succeeded;
  MR_Word RHSVar_24 = ((MR_Word) ((MR_hl_field(0, RHSVarWidth_16, 0))));
  MR_Word ArgPosWidth_25 = ((MR_Word) ((MR_hl_field(0, RHSVarWidth_16, 1))));
  MR_Word ModuleInfo_26;
  MR_Word VarTable_27;
  MR_Word RHSVarEntry_28;
  MR_Word RHSType_29;
  MR_Word Dir_30;

  ll_backend__code_info__get_module_info_2_p_0(CI_22, &ModuleInfo_26);
  ll_backend__code_info__get_var_table_2_p_0(CI_22, &VarTable_27);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_27, RHSVar_24, &RHSVarEntry_28);
  RHSType_29 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_28, 1))));
  ll_backend__unify_gen_util__compute_assign_direction_6_p_0(ModuleInfo_26, NonLocals_14, RHSVar_24, RHSType_29, ArgMode_17, &Dir_30);
  switch (Dir_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) ArgPosWidth_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_25, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_44 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 3))));
                  MR_Word Mask_46 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 5))));
                  MR_Word Fill_47 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_25, 6))) & (MR_Integer) 7);
                  MR_Integer ShiftInt_48 = (MR_Integer) (Shift_44);
                  MR_Integer MaskInt_49 = (MR_Integer) (Mask_46);
                  MR_Word LeftShiftedRHSRval_50;
                  MR_Word Var_64;
                  MR_Unsigned Var_65;
                  MR_Unsigned Var_66;

                  {
                    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_64, 0) = ((MR_Box) (RHSVar_24));
                  }
                  LeftShiftedRHSRval_50 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Var_64, Shift_44, Fill_47);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ToOrRvals_32 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (LeftShiftedRHSRval_50));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_31));
                  }
                  Var_66 = mercury__uint__cast_from_int_1_f_0(MaskInt_49);
                  Var_65 = mercury__uint__f_60_60_2_f_0(Var_66, ShiftInt_48);
                  *STATE_VARIABLE_ToOrMask_34 = (Var_65 | STATE_VARIABLE_ToOrMask_0_33);
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_ToOrRvals_32 = STATE_VARIABLE_ToOrRvals_0_31;
                  *STATE_VARIABLE_ToOrMask_34 = STATE_VARIABLE_ToOrMask_0_33;
                }
                break;
            }
            break;
        }
        *Code_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_0_35;
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_35, RHSVar_24);
        if (succeeded)
          switch (MR_tag((MR_Word) ArgPosWidth_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                return;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_25, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_71 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 3))));
                    MR_Word Mask_73 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 5))));
                    MR_Word Fill_74 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_25, 6))) & (MR_Integer) 7);
                    MR_Word LeftRval0_75;
                    MR_Integer MaskInt_76;
                    MR_Word MaskedLeftRval0_77;
                    MR_Word MaskedLeftRval_78;
                    MR_Word Var_96;
                    MR_Word Var_97;

                    LeftRval0_75 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(LHSRval_15, Shift_71);
                    MaskInt_76 = (MR_Integer) (Mask_73);
                    {
                      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_97, 0) = ((MR_Box) (MaskInt_76));
                    }
                    {
                      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_96, 1) = ((MR_Box) (Var_97));
                    }
                    {
                      MaskedLeftRval0_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLeftRval0_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLeftRval0_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLeftRval0_77, 2) = ((MR_Box) (LeftRval0_75));
                      MR_hl_field(3, MaskedLeftRval0_77, 3) = ((MR_Box) (Var_96));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_74, MaskedLeftRval0_77, &MaskedLeftRval_78);
                    if ((FieldLvals_18 == (MR_Word) ((MR_Unsigned) 0U)))
                      ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_24, MaskedLeftRval_78, Code_21, STATE_VARIABLE_CLD_0_35, STATE_VARIABLE_CLD_36);
                    else
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_24, FieldLvals_18, MaskedLeftRval_78, Code_21, STATE_VARIABLE_CLD_0_35, STATE_VARIABLE_CLD_36);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *Code_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_0_35;
                  }
                  break;
              }
              break;
          }
        else
        {
          *Code_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_0_35;
        }
        *STATE_VARIABLE_ToOrRvals_32 = STATE_VARIABLE_ToOrRvals_0_31;
        *STATE_VARIABLE_ToOrMask_34 = STATE_VARIABLE_ToOrMask_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_ToOrRvals_32 = STATE_VARIABLE_ToOrRvals_0_31;
        *STATE_VARIABLE_ToOrMask_34 = STATE_VARIABLE_ToOrMask_0_33;
        *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_0_35;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(
  MR_Word VarTable_1,
  MR_Word NonLocals_2,
  MR_Word LHSPtag_3,
  MR_Word LHSBaseRval_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/10", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/10", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word ArgModes_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word RHSVar_56 = ((MR_Word) ((MR_hl_field(0, Var_70, 0))));
      MR_Word LHSArgPosWidth_57 = ((MR_Word) ((MR_hl_field(0, Var_70, 1))));
      MR_Word RHSVarEntry_58;
      MR_Word RHSType_59;
      MR_Word HeadCode_60;
      MR_Word TailCode_61;
      MR_Word STATE_VARIABLE_CLD_1_64;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_1, RHSVar_56, &RHSVarEntry_58);
      RHSType_59 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_58, 1))));
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_11_p_0(NonLocals_2, LHSPtag_3, LHSBaseRval_4, LHSArgPosWidth_57, RHSVar_56, RHSType_59, ArgMode_51, &HeadCode_60, HeadVar__8_8, STATE_VARIABLE_CLD_0_9, &STATE_VARIABLE_CLD_1_64);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_10_p_0(VarTable_1, NonLocals_2, LHSPtag_3, LHSBaseRval_4, Var_69, ArgModes_52, &TailCode_61, HeadVar__8_8, STATE_VARIABLE_CLD_1_64, STATE_VARIABLE_CLD_10);
      *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_60, TailCode_61);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_11_p_0(
  MR_Word NonLocals_12,
  MR_Word LHSPtag_13,
  MR_Word LHSBaseRval_14,
  MR_Word LHSArgPosWidth_15,
  MR_Word RHSVar_16,
  MR_Word RHSType_17,
  MR_Word ArgMode_18,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word Dir_23;

  ll_backend__code_info__get_module_info_2_p_0(CI_20, &ModuleInfo_22);
  ll_backend__unify_gen_util__compute_assign_direction_6_p_0(ModuleInfo_22, NonLocals_12, RHSVar_16, RHSType_17, ArgMode_18, &Dir_23);
  switch (Dir_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(LHSPtag_13, LHSBaseRval_14, LHSArgPosWidth_15, RHSVar_16, Code_19, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_24, RHSVar_16);
        if (succeeded)
          switch (MR_tag((MR_Word) LHSArgPosWidth_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer LHSCellOffset_29;
                MR_Word LHSLval_30;
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, LHSArgPosWidth_15, 1))));
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;

                LHSCellOffset_29 = (MR_Integer) (Var_48);
                {
                  Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_49, 0) = ((MR_Box) (LHSPtag_13));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_51, 0) = ((MR_Box) (LHSCellOffset_29));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_50, 1) = ((MR_Box) (Var_51));
                }
                {
                  LHSLval_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLval_30, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLval_30, 1) = ((MR_Box) (Var_49));
                  MR_hl_field(3, LHSLval_30, 2) = ((MR_Box) (LHSBaseRval_14));
                  MR_hl_field(3, LHSLval_30, 3) = ((MR_Box) (Var_50));
                }
                ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(RHSVar_16, LHSLval_30, Code_19, CI_20, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LHSLvalA_33;
                MR_Word LHSLvalB_34;
                MR_Word LHSRval_35;
                MR_Word Var_52 = ((MR_Word) ((MR_hl_field(2, LHSArgPosWidth_15, 1))));
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word Var_55;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Integer Var_59;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_65;
                MR_Integer LHSCellOffset_81 = (MR_Integer) (Var_52);

                {
                  Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_53, 0) = ((MR_Box) (LHSPtag_13));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_55, 0) = ((MR_Box) (LHSCellOffset_81));
                }
                {
                  Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
                }
                {
                  LHSLvalA_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLvalA_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLvalA_33, 1) = ((MR_Box) (Var_53));
                  MR_hl_field(3, LHSLvalA_33, 2) = ((MR_Box) (LHSBaseRval_14));
                  MR_hl_field(3, LHSLvalA_33, 3) = ((MR_Box) (Var_54));
                }
                Var_59 = (MR_Integer) ((MR_Unsigned) LHSCellOffset_81 + (MR_Unsigned) 1);
                {
                  Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
                }
                {
                  LHSLvalB_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLvalB_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLvalB_34, 1) = ((MR_Box) (Var_53));
                  MR_hl_field(3, LHSLvalB_34, 2) = ((MR_Box) (LHSBaseRval_14));
                  MR_hl_field(3, LHSLvalB_34, 3) = ((MR_Box) (Var_57));
                }
                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_62, 0) = ((MR_Box) (LHSLvalA_33));
                }
                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_63, 0) = ((MR_Box) (LHSLvalB_34));
                }
                {
                  LHSRval_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSRval_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, LHSRval_35, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(3, LHSRval_35, 2) = ((MR_Box) (Var_62));
                  MR_hl_field(3, LHSRval_35, 3) = ((MR_Box) (Var_63));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_65, 0) = ((MR_Box) (LHSLvalB_34));
                  MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (LHSLvalA_33));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
                }
                ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_16, Var_64, LHSRval_35, Code_19, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, LHSArgPosWidth_15, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Shift_37 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 3))));
                    MR_Integer Mask_39;
                    MR_Word Fill_40 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_15, 6))) & (MR_Integer) 7);
                    MR_Word LHSRval0_43;
                    MR_Word MaskedLHSRval0_44;
                    MR_Word MaskedLHSRval_45;
                    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 2))));
                    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 5))));
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_77;
                    MR_Word Var_78;
                    MR_Word Var_79;
                    MR_Integer LHSCellOffset_82 = (MR_Integer) (Var_67);
                    MR_Word LHSLval_83;

                    Mask_39 = (MR_Integer) (Var_68);
                    {
                      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_71, 0) = ((MR_Box) (LHSPtag_13));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_73, 0) = ((MR_Box) (LHSCellOffset_82));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_72, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      LHSLval_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSLval_83, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSLval_83, 1) = ((MR_Box) (Var_71));
                      MR_hl_field(3, LHSLval_83, 2) = ((MR_Box) (LHSBaseRval_14));
                      MR_hl_field(3, LHSLval_83, 3) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_74, 0) = ((MR_Box) (LHSLval_83));
                    }
                    LHSRval0_43 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_74, Shift_37);
                    {
                      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Mask_39));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
                    }
                    {
                      MaskedLHSRval0_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLHSRval0_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLHSRval0_44, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLHSRval0_44, 2) = ((MR_Box) (LHSRval0_43));
                      MR_hl_field(3, MaskedLHSRval0_44, 3) = ((MR_Box) (Var_77));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_40, MaskedLHSRval0_44, &MaskedLHSRval_45);
                    {
                      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_79, 0) = ((MR_Box) (LHSLval_83));
                      MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_16, Var_79, MaskedLHSRval_45, Code_19, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 2))));
                    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 5))));
                    MR_Word Shift_85 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_15, 3))));
                    MR_Integer Mask_86 = (MR_Integer) (Var_70);
                    MR_Word Fill_87 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_15, 6))) & (MR_Integer) 7);
                    MR_Word LHSRval0_88;
                    MR_Word MaskedLHSRval0_89;
                    MR_Word MaskedLHSRval_90;
                    MR_Word Var_91;
                    MR_Word Var_92;
                    MR_Word Var_93;
                    MR_Word Var_94;
                    MR_Word Var_97;
                    MR_Word Var_98;
                    MR_Word Var_99;
                    MR_Integer LHSCellOffset_101 = (MR_Integer) (Var_69);
                    MR_Word LHSLval_102;

                    {
                      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_91, 0) = ((MR_Box) (LHSPtag_13));
                    }
                    {
                      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_93, 0) = ((MR_Box) (LHSCellOffset_101));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
                    }
                    {
                      LHSLval_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSLval_102, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSLval_102, 1) = ((MR_Box) (Var_91));
                      MR_hl_field(3, LHSLval_102, 2) = ((MR_Box) (LHSBaseRval_14));
                      MR_hl_field(3, LHSLval_102, 3) = ((MR_Box) (Var_92));
                    }
                    {
                      Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_94, 0) = ((MR_Box) (LHSLval_102));
                    }
                    LHSRval0_88 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_94, Shift_85);
                    {
                      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Mask_86));
                    }
                    {
                      Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_97, 1) = ((MR_Box) (Var_98));
                    }
                    {
                      MaskedLHSRval0_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLHSRval0_89, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLHSRval0_89, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLHSRval0_89, 2) = ((MR_Box) (LHSRval0_88));
                      MR_hl_field(3, MaskedLHSRval0_89, 3) = ((MR_Box) (Var_97));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_87, MaskedLHSRval0_89, &MaskedLHSRval_90);
                    {
                      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_99, 0) = ((MR_Box) (LHSLval_102));
                      MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_16, Var_99, MaskedLHSRval_90, Code_19, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
                  }
                  break;
              }
              break;
          }
        else
        {
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
      }
      break;
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
  MR_Word ProduceRHSVarCode_14;
  MR_Word RHSRval_15;
  MR_Word LHSBaseRval_16;
  MR_Word MaterializeLHSBaseCode_17;
  MR_Word AssignCode_21;
  MR_Word STATE_VARIABLE_CLD_1_46;
  MR_Word Var_87;

  ll_backend__code_loc_dep__produce_variable_5_p_0(RHSVar_11, &ProduceRHSVarCode_14, &RHSRval_15, STATE_VARIABLE_CLD_0_44, &STATE_VARIABLE_CLD_1_46);
  ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(LHSBaseRval0_9, &LHSBaseRval_16, &MaterializeLHSBaseCode_17, STATE_VARIABLE_CLD_1_46, STATE_VARIABLE_CLD_45);
  switch (MR_tag((MR_Word) LHSArgPosWidth_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      break;
    case (MR_Integer) 1:
      {
        MR_Integer LHSCellOffset_19;
        MR_Word LHSLval_20;
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, LHSArgPosWidth_10, 1))));
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;

        LHSCellOffset_19 = (MR_Integer) (Var_48);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (LHSPtag_8));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (LHSCellOffset_19));
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (Var_51));
        }
        {
          LHSLval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LHSLval_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, LHSLval_20, 1) = ((MR_Box) (Var_49));
          MR_hl_field(3, LHSLval_20, 2) = ((MR_Box) (LHSBaseRval_16));
          MR_hl_field(3, LHSLval_20, 3) = ((MR_Box) (Var_50));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (LHSLval_20));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (RHSRval_15));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) ((MR_String) "Copy value"));
        }
        AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSLvalA_24;
        MR_Word LHSLvalB_25;
        MR_Word SrcA_26;
        MR_Word SrcB_27;
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(2, LHSArgPosWidth_10, 1))));
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Integer Var_62;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Integer LHSCellOffset_88 = (MR_Integer) (Var_55);

        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (LHSPtag_8));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (LHSCellOffset_88));
        }
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          LHSLvalA_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LHSLvalA_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, LHSLvalA_24, 1) = ((MR_Box) (Var_56));
          MR_hl_field(3, LHSLvalA_24, 2) = ((MR_Box) (LHSBaseRval_16));
          MR_hl_field(3, LHSLvalA_24, 3) = ((MR_Box) (Var_57));
        }
        Var_62 = (MR_Integer) ((MR_Unsigned) LHSCellOffset_88 + (MR_Unsigned) 1);
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          LHSLvalB_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, LHSLvalB_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, LHSLvalB_25, 1) = ((MR_Box) (Var_56));
          MR_hl_field(3, LHSLvalB_25, 2) = ((MR_Box) (LHSBaseRval_16));
          MR_hl_field(3, LHSLvalB_25, 3) = ((MR_Box) (Var_60));
        }
        {
          SrcA_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SrcA_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, SrcA_26, 1) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(3, SrcA_26, 2) = ((MR_Box) (RHSRval_15));
        }
        {
          SrcB_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SrcB_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, SrcB_27, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(3, SrcB_27, 2) = ((MR_Box) (RHSRval_15));
        }
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (LHSLvalA_24));
          MR_hl_field(3, Var_68, 2) = ((MR_Box) (SrcA_26));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "Update double word"));
        }
        {
          Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_71, 1) = ((MR_Box) (LHSLvalB_25));
          MR_hl_field(3, Var_71, 2) = ((MR_Box) (SrcB_27));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "Update double word"));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
        }
        AssignCode_21 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_66);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, LHSArgPosWidth_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_30 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 3))));
            MR_Word Mask_32 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 5))));
            MR_Word Fill_33 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_10, 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_36 = (MR_Integer) (Shift_30);
            MR_Integer MaskInt_37 = (MR_Integer) (Mask_32);
            MR_Word ComplementMask_38;
            MR_Word MaskOld_39;
            MR_Word ShiftedRHSRval_40;
            MR_Word CombinedRval_41;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 2))));
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Integer Var_79;
            MR_Integer Var_80;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Integer LHSCellOffset_89 = (MR_Integer) (Var_73);
            MR_Word LHSLval_90;

            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (LHSPtag_8));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (LHSCellOffset_89));
            }
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
            }
            {
              LHSLval_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, LHSLval_90, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, LHSLval_90, 1) = ((MR_Box) (Var_75));
              MR_hl_field(3, LHSLval_90, 2) = ((MR_Box) (LHSBaseRval_16));
              MR_hl_field(3, LHSLval_90, 3) = ((MR_Box) (Var_76));
            }
            Var_80 = mercury__int__f_60_60_2_f_0(MaskInt_37, ShiftInt_36);
            Var_79 = ~(Var_80);
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
            }
            {
              ComplementMask_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ComplementMask_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ComplementMask_38, 1) = ((MR_Box) (Var_78));
            }
            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_83, 0) = ((MR_Box) (LHSLval_90));
            }
            {
              MaskOld_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, MaskOld_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, MaskOld_39, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
              MR_hl_field(3, MaskOld_39, 2) = ((MR_Box) (Var_83));
              MR_hl_field(3, MaskOld_39, 3) = ((MR_Box) (ComplementMask_38));
            }
            ShiftedRHSRval_40 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_15, Shift_30, Fill_33);
            CombinedRval_41 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_39, ShiftedRHSRval_40);
            {
              Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_85, 1) = ((MR_Box) (LHSLval_90));
              MR_hl_field(3, Var_85, 2) = ((MR_Box) (CombinedRval_41));
            }
            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_String) "Update part of word"));
            }
            AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_84)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 2))));
            MR_Word Shift_96 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 3))));
            MR_Word Mask_97 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, 5))));
            MR_Word Fill_98 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_10, 6))) & (MR_Integer) 7);
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
            MR_Integer LHSCellOffset_117 = (MR_Integer) (Var_74);
            MR_Word LHSLval_118;

            {
              Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_105, 0) = ((MR_Box) (LHSPtag_8));
            }
            {
              Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_107, 0) = ((MR_Box) (LHSCellOffset_117));
            }
            {
              Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
            }
            {
              LHSLval_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, LHSLval_118, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, LHSLval_118, 1) = ((MR_Box) (Var_105));
              MR_hl_field(3, LHSLval_118, 2) = ((MR_Box) (LHSBaseRval_16));
              MR_hl_field(3, LHSLval_118, 3) = ((MR_Box) (Var_106));
            }
            Var_110 = mercury__int__f_60_60_2_f_0(MaskInt_100, ShiftInt_99);
            Var_109 = ~(Var_110);
            {
              Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
            }
            {
              ComplementMask_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ComplementMask_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ComplementMask_101, 1) = ((MR_Box) (Var_108));
            }
            {
              Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_113, 0) = ((MR_Box) (LHSLval_118));
            }
            {
              MaskOld_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, MaskOld_102, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, MaskOld_102, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
              MR_hl_field(3, MaskOld_102, 2) = ((MR_Box) (Var_113));
              MR_hl_field(3, MaskOld_102, 3) = ((MR_Box) (ComplementMask_101));
            }
            ShiftedRHSRval_103 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_15, Shift_96, Fill_98);
            CombinedRval_104 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_102, ShiftedRHSRval_103);
            {
              Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_115, 1) = ((MR_Box) (LHSLval_118));
              MR_hl_field(3, Var_115, 2) = ((MR_Box) (CombinedRval_104));
            }
            {
              Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_115));
              MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_String) "Update part of word"));
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

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_9_p_0(
  MR_Word NonLocals_10,
  MR_Word LHSVar_11,
  MR_Word RHSVar_12,
  MR_Word RHSType_13,
  MR_Word ArgMode_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word Dir_19;

  ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
  ll_backend__unify_gen_util__compute_assign_direction_6_p_0(ModuleInfo_18, NonLocals_10, RHSVar_12, RHSType_13, ArgMode_14, &Dir_19);
  switch (Dir_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_20, LHSVar_11);
        if (succeeded)
          ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LHSVar_11, RHSVar_12, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
        else
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_0_20;
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_20, RHSVar_12);
        if (succeeded)
        {
          ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_12, LHSVar_11, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_0_20;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_0_20;
      }
      break;
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
