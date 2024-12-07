/*
** Automatically generated from `unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2024-12-07
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
  MR_Word STATE_VARIABLE_CLD_0_84,
  MR_Word * STATE_VARIABLE_CLD_85);

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
  MR_Word STATE_VARIABLE_ToOrRvals_0_29,
  MR_Word * STATE_VARIABLE_ToOrRvals_30,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_31,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_32,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTable_1,
  MR_Word LHSPtag_2,
  MR_Word LHSBaseRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_10_p_0(
  MR_Word LHSPtag_11,
  MR_Word LHSBaseRval_12,
  MR_Word LHSArgPosWidth_13,
  MR_Word RHSVar_14,
  MR_Word RHSType_15,
  MR_Word ArgMode_16,
  MR_Word * Code_17,
  MR_Word CI_18,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23);

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
    ((MR_Box) (ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1)),
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
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1(
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
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0(
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word CanFail_16,
  MR_Word CanCGC_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_31,
  MR_Word * STATE_VARIABLE_CI_32,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  MR_bool succeeded;
  MR_Word DeconstructCode_21;
  MR_Word STATE_VARIABLE_CLD_36_36;

  switch (CanFail_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LHSVarCode_56;
        MR_Word LHSVarRval_57;
        MR_Word VarTable_58;
        MR_Word LHSVarEntry_59;
        MR_String LHSVarName_60;
        MR_Word LHSVarType_61;
        MR_Word CheaperTagTest_62;
        MR_Word SuccLabel_63;
        MR_Word TagTestCode_64;
        MR_Word AfterUnify_65;
        MR_Word FailCode_66;
        MR_Word DetDeconstructCode_67;
        MR_Word SuccessLabelCode_68;
        MR_Word STATE_VARIABLE_CLD_34_69;
        MR_Word STATE_VARIABLE_CI_36_71;
        MR_Word STATE_VARIABLE_CLD_38_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_12, &LHSVarCode_56, &LHSVarRval_57, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_34_69);
        ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_31, &VarTable_58);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_58, LHSVar_12, &LHSVarEntry_59);
        LHSVarName_60 = parse_tree__var_table__var_entry_name_2_f_0(LHSVar_12, LHSVarEntry_59);
        LHSVarType_61 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_59, (MR_Integer) 1))));
        CheaperTagTest_62 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_31, LHSVarType_61);
        ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(LHSVarRval_57, LHSVarName_60, ConsId_13, CheaperTagTest_62, (MR_Integer) 0, &SuccLabel_63, &TagTestCode_64, STATE_VARIABLE_CI_0_31, &STATE_VARIABLE_CI_36_71);
        ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_34_69, &AfterUnify_65);
        ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_66, STATE_VARIABLE_CI_36_71, STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_34_69);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_65, *STATE_VARIABLE_CI_32, &STATE_VARIABLE_CLD_38_72);
        ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DetDeconstructCode_67, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_38_72, &STATE_VARIABLE_CLD_36_36);
        {
          Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_74, 1) = ((MR_Box) (SuccLabel_63));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) ((MR_String) ""));
        }
        SuccessLabelCode_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_73)));
        Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_68, DetDeconstructCode_67);
        Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_66, Var_78);
        Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_64, Var_77);
        DeconstructCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LHSVarCode_56, Var_76);
      }
      break;
    case (MR_Integer) 1:
      {
        ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DeconstructCode_21, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_36_36);
        *STATE_VARIABLE_CI_32 = STATE_VARIABLE_CI_0_31;
      }
      break;
  }
  switch (CanCGC_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTable_22;
        MR_Word LHSVarEntry_23;
        MR_String LHSVarName_24;
        MR_Word ProduceVarCode_25;
        MR_Word VarRval_26;
        MR_Word STATE_VARIABLE_CLD_38_38;
        MR_Word VarLval_27;

        ll_backend__code_info__get_var_table_2_p_0(*STATE_VARIABLE_CI_32, &VarTable_22);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_22, LHSVar_12, &LHSVarEntry_23);
        LHSVarName_24 = parse_tree__var_table__var_entry_name_2_f_0(LHSVar_12, LHSVarEntry_23);
        ll_backend__code_loc_dep__produce_variable_5_p_0(LHSVar_12, &ProduceVarCode_25, &VarRval_26, STATE_VARIABLE_CLD_36_36, &STATE_VARIABLE_CLD_38_38);
        succeeded = ((MR_tag((MR_Word) VarRval_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          VarLval_27 = ((MR_Word) ((MR_hl_field(0, VarRval_26, (MR_Integer) 0))));
          {
            MR_Word SaveArgsCode_28;
            MR_Word Regs_29;
            MR_Word FreeVarCode_30;
            MR_Word STATE_VARIABLE_CLD_39_39;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_String Var_46;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Box conv1_STATE_VARIABLE_CLD_34;

            ll_backend__code_loc_dep__save_reused_cell_fields_6_p_0(LHSVar_12, VarLval_27, &SaveArgsCode_28, &Regs_29, STATE_VARIABLE_CLD_38_38, &STATE_VARIABLE_CLD_39_39);
            mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_4[0]), Regs_29, ((MR_Box) (STATE_VARIABLE_CLD_39_39)), &conv1_STATE_VARIABLE_CLD_34);
            *STATE_VARIABLE_CLD_34 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_34));
            {
              Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_44, 2) = ((MR_Box) (VarRval_26));
            }
            {
              Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Var_43, 1) = ((MR_Box) (Var_44));
            }
            Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_24);
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (Var_46));
            }
            FreeVarCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_42)));
            Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_28, FreeVarCode_30);
            Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, Var_49);
            *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DeconstructCode_21, Var_48);
          }
        }
        else
        {
          *Code_18 = DeconstructCode_21;
          *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_38_38;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Code_18 = DeconstructCode_21;
        *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_36_36;
      }
      break;
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
  MR_Word STATE_VARIABLE_CLD_0_84,
  MR_Word * STATE_VARIABLE_CLD_85)
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
            *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_44;
            MR_Word ArgMode_45;
            MR_Word VarType_46;
            MR_Word IsDummy_47;
            MR_Box conv3_RHSVar_44;
            MR_Box conv2_ArgMode_45;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv3_RHSVar_44, &conv2_ArgMode_45);
            RHSVar_44 = ((MR_Word) (conv3_RHSVar_44));
            ArgMode_45 = ((MR_Word) (conv2_ArgMode_45));
            VarType_46 = ll_backend__code_info__variable_type_2_f_0(CI_14, LHSVar_9);
            IsDummy_47 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_46);
            switch (IsDummy_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_84, RHSVar_44);
                  if (succeeded)
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(RHSVar_44, (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[1])), CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                  else
                    *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
                  *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RHSType_48;

                  RHSType_48 = ll_backend__code_info__variable_type_2_f_0(CI_14, RHSVar_44);
                  ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(LHSVar_9, RHSVar_44, RHSType_48, ArgMode_45, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
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
        *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 0))))) {
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
            *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
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
            MR_Word RemoteArgsTagInfo_50 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word LHSBaseRval_51;
            MR_Word VarTable_52;
            MR_Word RHSVarsWidths_53;

            {
              LHSBaseRval_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LHSBaseRval_51, 0) = ((MR_Box) (LHSVar_9));
            }
            ll_backend__code_info__get_var_table_2_p_0(CI_14, &VarTable_52);
            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_53);
            switch (MR_tag((MR_Word) RemoteArgsTagInfo_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTable_52, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), LHSBaseRval_51, RHSVarsWidths_53, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word LHSPtag_152 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_50, (MR_Integer) 0))));

                  ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTable_52, LHSPtag_152, LHSBaseRval_51, RHSVarsWidths_53, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_55 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_50, (MR_Integer) 1))));
                  MR_Word SectagSize_57 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_55, (MR_Integer) 1))));
                  MR_Word LHSPtag_129 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_50, (MR_Integer) 0))));

                  if ((SectagSize_57 == (MR_Word) ((MR_Unsigned) 0U)))
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTable_52, LHSPtag_129, LHSBaseRval_51, RHSVarsWidths_53, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                  else
                  {
                    MR_Word TagwordRHSVarsWidths_59;
                    MR_Word TagwordArgModes_60;
                    MR_Word NonTagwordRHSVarsWidths_61;
                    MR_Word NonTagwordArgModes_62;
                    MR_Word LHSSectagWordLval_63;
                    MR_Word LHSSectagWordRval_65;
                    MR_Word MaterializeTagwordCode_66;
                    MR_Word ToOrRvals_67;
                    MR_Unsigned ToOrMask_68;
                    MR_Word AssignRightCode_69;
                    MR_Word TagwordCode_70;
                    MR_Word NonTagwordCode_81;
                    MR_Word Var_97;
                    MR_Word Var_101;
                    MR_Word STATE_VARIABLE_CLD_104_104;
                    MR_Word STATE_VARIABLE_CLD_106_106;

                    ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(RHSVarsWidths_53, ArgModes_12, &TagwordRHSVarsWidths_59, &TagwordArgModes_60, &NonTagwordRHSVarsWidths_61, &NonTagwordArgModes_62);
                    {
                      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_97, 0) = ((MR_Box) (LHSPtag_129));
                    }
                    {
                      LHSSectagWordLval_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSSectagWordLval_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSSectagWordLval_63, 1) = ((MR_Box) (Var_97));
                      MR_hl_field(3, LHSSectagWordLval_63, 2) = ((MR_Box) (LHSBaseRval_51));
                      MR_hl_field(3, LHSSectagWordLval_63, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                    }
                    {
                      LHSSectagWordRval_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, LHSSectagWordRval_65, 0) = ((MR_Box) (LHSSectagWordLval_63));
                    }
                    MaterializeTagwordCode_66 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    {
                      Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_101, 0) = ((MR_Box) (LHSSectagWordLval_63));
                      MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(LHSSectagWordRval_65, TagwordRHSVarsWidths_59, TagwordArgModes_60, Var_101, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_67, (MR_Unsigned) 0U, &ToOrMask_68, &AssignRightCode_69, CI_14, STATE_VARIABLE_CLD_0_84, &STATE_VARIABLE_CLD_104_104);
                    if ((ToOrRvals_67 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      TagwordCode_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_66, AssignRightCode_69);
                      STATE_VARIABLE_CLD_106_106 = STATE_VARIABLE_CLD_104_104;
                    }
                    else
                    {
                      MR_Word HeadToOrRval_71 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_67, (MR_Integer) 0))));
                      MR_Word TailToOrRvals_72 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_67, (MR_Integer) 1))));
                      MR_Word ToOrRval0_73;
                      MR_Word ToOrRval_74;
                      MR_Word ToOrRvalCode_75;
                      MR_Word ComplementMask_76;
                      MR_Word MaskedOldSectagWordRval_77;
                      MR_Word NewSectagWordRval_78;
                      MR_Word AssignLeftCode_80;
                      MR_Word Var_107;
                      MR_Unsigned Var_108;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_Word Var_116;
                      MR_Word Var_117;

                      ToOrRval0_73 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_71, TailToOrRvals_72);
                      ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(ToOrRval0_73, &ToOrRval_74, &ToOrRvalCode_75, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_106_106);
                      Var_108 = ~(ToOrMask_68);
                      {
                        Var_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_107, 0) = ((MR_Box) (Var_108));
                      }
                      {
                        ComplementMask_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ComplementMask_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, ComplementMask_76, 1) = ((MR_Box) (Var_107));
                      }
                      {
                        MaskedOldSectagWordRval_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, MaskedOldSectagWordRval_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, MaskedOldSectagWordRval_77, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                        MR_hl_field(3, MaskedOldSectagWordRval_77, 2) = ((MR_Box) (LHSSectagWordRval_65));
                        MR_hl_field(3, MaskedOldSectagWordRval_77, 3) = ((MR_Box) (ComplementMask_76));
                      }
                      {
                        NewSectagWordRval_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, NewSectagWordRval_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, NewSectagWordRval_78, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[3])));
                        MR_hl_field(3, NewSectagWordRval_78, 2) = ((MR_Box) (MaskedOldSectagWordRval_77));
                        MR_hl_field(3, NewSectagWordRval_78, 3) = ((MR_Box) (ToOrRval_74));
                      }
                      {
                        Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_115, 1) = ((MR_Box) (LHSSectagWordLval_63));
                        MR_hl_field(3, Var_115, 2) = ((MR_Box) (NewSectagWordRval_78));
                      }
                      {
                        Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_114, 0) = ((MR_Box) (Var_115));
                        MR_hl_field(0, Var_114, 1) = ((MR_Box) ((MR_String) "updating tagword"));
                      }
                      AssignLeftCode_80 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
                      Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ToOrRvalCode_75, AssignLeftCode_80);
                      Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_69, Var_117);
                      TagwordCode_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_66, Var_116);
                    }
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTable_52, LHSPtag_129, LHSBaseRval_51, NonTagwordRHSVarsWidths_61, NonTagwordArgModes_62, &NonTagwordCode_81, CI_14, STATE_VARIABLE_CLD_106_106, STATE_VARIABLE_CLD_85);
                    *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_70, NonTagwordCode_81);
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
            MR_Word Var_121;
            MR_Word STATE_VARIABLE_CLD_125_125;
            MR_Word RHSVarsWidths_138;
            MR_Word ToOrRvals_139;
            MR_Unsigned ToOrMask_140;
            MR_Word AssignRightCode_141;

            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_138);
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (LHSVar_9));
            }
            ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(Var_121, RHSVarsWidths_138, ArgModes_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_139, (MR_Unsigned) 0U, &ToOrMask_140, &AssignRightCode_141, CI_14, STATE_VARIABLE_CLD_0_84, &STATE_VARIABLE_CLD_125_125);
            if ((ToOrRvals_139 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Code_13 = AssignRightCode_141;
              *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_125_125;
            }
            else
            {
              MR_Word HeadToOrRval_130 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_139, (MR_Integer) 0))));
              MR_Word TailToOrRvals_131 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_139, (MR_Integer) 1))));
              MR_Word ToOrRval_132;
              MR_Word AssignLeftCode_133;

              ToOrRval_132 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_130, TailToOrRvals_131);
              ll_backend__code_loc_dep__reassign_tagword_var_6_p_0(LHSVar_9, ToOrMask_140, ToOrRval_132, &AssignLeftCode_133, STATE_VARIABLE_CLD_125_125, STATE_VARIABLE_CLD_85);
              *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_141, AssignLeftCode_133);
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_49 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word RHSVar_127;
            MR_Word ArgMode_128;
            MR_Box conv1_RHSVar_127;
            MR_Box conv0_ArgMode_128;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv1_RHSVar_127, &conv0_ArgMode_128);
            RHSVar_127 = ((MR_Word) (conv1_RHSVar_127));
            ArgMode_128 = ((MR_Word) (conv0_ArgMode_128));
            ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(LHSVar_9, RHSVar_127, Ptag_49, ArgMode_128, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
          }
          break;
      }
      break;
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
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (RHSVar_10));
        }
        ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(LHSVar_9, Ptag_11, Var_30, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
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
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Integer Var_28;

            {
              Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_25, 0) = ((MR_Box) (LHSVar_9));
            }
            Var_28 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_19);
            {
              Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
            }
            {
              Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_26, 1) = ((MR_Box) (Var_27));
            }
            {
              LHSBodyRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, LHSBodyRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, LHSBodyRval_20, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, LHSBodyRval_20, 2) = ((MR_Box) (Var_25));
              MR_hl_field(3, LHSBodyRval_20, 3) = ((MR_Box) (Var_26));
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
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 1))));

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
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_32, (MR_Integer) 0))))) {
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
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/12", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgModes_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word HeadCode_70;
      MR_Word TailCode_71;
      MR_Word STATE_VARIABLE_ToOrRvals_78_78;
      MR_Unsigned STATE_VARIABLE_ToOrMask_79_79;
      MR_Word STATE_VARIABLE_CLD_80_80;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(HeadVar__1_1, Var_84, ArgMode_62, FieldLvals_4, STATE_VARIABLE_ToOrRvals_0_5, &STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrMask_0_7, &STATE_VARIABLE_ToOrMask_79_79, &HeadCode_70, HeadVar__10_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_80_80);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(HeadVar__1_1, Var_83, ArgModes_63, FieldLvals_4, STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrRvals_6, STATE_VARIABLE_ToOrMask_79_79, STATE_VARIABLE_ToOrMask_8, &TailCode_71, HeadVar__10_10, STATE_VARIABLE_CLD_80_80, STATE_VARIABLE_CLD_12);
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
  MR_Word STATE_VARIABLE_ToOrRvals_0_29,
  MR_Word * STATE_VARIABLE_ToOrRvals_30,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_31,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_32,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  MR_bool succeeded;
  MR_Word RHSVar_22 = ((MR_Word) ((MR_hl_field(0, RHSVarWidth_14, (MR_Integer) 0))));
  MR_Word ArgPosWidth_23 = ((MR_Word) ((MR_hl_field(0, RHSVarWidth_14, (MR_Integer) 1))));
  MR_Word ModuleInfo_24;
  MR_Word VarTable_25;
  MR_Word RHSVarEntry_26;
  MR_Word RHSType_27;
  MR_Word Dir_28;

  ll_backend__code_info__get_module_info_2_p_0(CI_20, &ModuleInfo_24);
  ll_backend__code_info__get_var_table_2_p_0(CI_20, &VarTable_25);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_25, RHSVar_22, &RHSVarEntry_26);
  RHSType_27 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_26, (MR_Integer) 1))));
  ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_24, ArgMode_15, RHSType_27, &Dir_28);
  switch (Dir_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) ArgPosWidth_23)) {
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
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_42 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 3))));
                  MR_Word Mask_44 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 5))));
                  MR_Word Fill_45 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Integer ShiftInt_46 = (MR_Integer) (Shift_42);
                  MR_Integer MaskInt_47 = (MR_Integer) (Mask_44);
                  MR_Word LeftShiftedRHSRval_48;
                  MR_Word Var_62;
                  MR_Unsigned Var_63;
                  MR_Unsigned Var_64;

                  {
                    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_62, 0) = ((MR_Box) (RHSVar_22));
                  }
                  LeftShiftedRHSRval_48 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Var_62, Shift_42, Fill_45);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ToOrRvals_30 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (LeftShiftedRHSRval_48));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_29));
                  }
                  Var_64 = mercury__uint__cast_from_int_1_f_0(MaskInt_47);
                  Var_63 = mercury__uint__f_60_60_2_f_0(Var_64, ShiftInt_46);
                  *STATE_VARIABLE_ToOrMask_32 = (Var_63 | STATE_VARIABLE_ToOrMask_0_31);
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
                  *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
                }
                break;
            }
            break;
        }
        *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_33, RHSVar_22);
        if (succeeded)
          switch (MR_tag((MR_Word) ArgPosWidth_23)) {
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
              switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_69 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 3))));
                    MR_Word Mask_71 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 5))));
                    MR_Word Fill_72 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_23, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Word LeftRval0_73;
                    MR_Integer MaskInt_74;
                    MR_Word MaskedLeftRval0_75;
                    MR_Word MaskedLeftRval_76;
                    MR_Word Var_94;
                    MR_Word Var_95;

                    LeftRval0_73 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(LHSRval_13, Shift_69);
                    MaskInt_74 = (MR_Integer) (Mask_71);
                    {
                      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_95, 0) = ((MR_Box) (MaskInt_74));
                    }
                    {
                      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_95));
                    }
                    {
                      MaskedLeftRval0_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLeftRval0_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLeftRval0_75, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLeftRval0_75, 2) = ((MR_Box) (LeftRval0_73));
                      MR_hl_field(3, MaskedLeftRval0_75, 3) = ((MR_Box) (Var_94));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_72, MaskedLeftRval0_75, &MaskedLeftRval_76);
                    if ((FieldLvals_16 == (MR_Word) ((MR_Unsigned) 0U)))
                      ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_22, MaskedLeftRval_76, Code_19, STATE_VARIABLE_CLD_0_33, STATE_VARIABLE_CLD_34);
                    else
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_22, FieldLvals_16, MaskedLeftRval_76, Code_19, STATE_VARIABLE_CLD_0_33, STATE_VARIABLE_CLD_34);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
                  }
                  break;
              }
              break;
          }
        else
        {
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
        }
        *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
        *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
        *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
        *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTable_1,
  MR_Word LHSPtag_2,
  MR_Word LHSBaseRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
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
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/9", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ArgModes_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word RHSVar_51 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
      MR_Word LHSArgPosWidth_52 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
      MR_Word RHSVarEntry_53;
      MR_Word RHSType_54;
      MR_Word HeadCode_55;
      MR_Word TailCode_56;
      MR_Word STATE_VARIABLE_CLD_59_59;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_1, RHSVar_51, &RHSVarEntry_53);
      RHSType_54 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_53, (MR_Integer) 1))));
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_10_p_0(LHSPtag_2, LHSBaseRval_3, LHSArgPosWidth_52, RHSVar_51, RHSType_54, ArgMode_46, &HeadCode_55, HeadVar__7_7, STATE_VARIABLE_CLD_0_8, &STATE_VARIABLE_CLD_59_59);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTable_1, LHSPtag_2, LHSBaseRval_3, Var_64, ArgModes_47, &TailCode_56, HeadVar__7_7, STATE_VARIABLE_CLD_59_59, STATE_VARIABLE_CLD_9);
      *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_55, TailCode_56);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_10_p_0(
  MR_Word LHSPtag_11,
  MR_Word LHSBaseRval_12,
  MR_Word LHSArgPosWidth_13,
  MR_Word RHSVar_14,
  MR_Word RHSType_15,
  MR_Word ArgMode_16,
  MR_Word * Code_17,
  MR_Word CI_18,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_20;
  MR_Word Dir_21;

  ll_backend__code_info__get_module_info_2_p_0(CI_18, &ModuleInfo_20);
  ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_20, ArgMode_16, RHSType_15, &Dir_21);
  switch (Dir_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_7_p_0(LHSPtag_11, LHSBaseRval_12, LHSArgPosWidth_13, RHSVar_14, Code_17, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
      break;
    case (MR_Integer) 1:
      {
        succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_22, RHSVar_14);
        if (succeeded)
          switch (MR_tag((MR_Word) LHSArgPosWidth_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Code_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer LHSCellOffset_27;
                MR_Word LHSLval_28;
                MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, LHSArgPosWidth_13, (MR_Integer) 1))));
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_49;

                LHSCellOffset_27 = (MR_Integer) (Var_46);
                {
                  Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_47, 0) = ((MR_Box) (LHSPtag_11));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_49, 0) = ((MR_Box) (LHSCellOffset_27));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
                }
                {
                  LHSLval_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLval_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLval_28, 1) = ((MR_Box) (Var_47));
                  MR_hl_field(3, LHSLval_28, 2) = ((MR_Box) (LHSBaseRval_12));
                  MR_hl_field(3, LHSLval_28, 3) = ((MR_Box) (Var_48));
                }
                ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(RHSVar_14, LHSLval_28, Code_17, CI_18, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LHSLvalA_31;
                MR_Word LHSLvalB_32;
                MR_Word LHSRval_33;
                MR_Word Var_50 = ((MR_Word) ((MR_hl_field(2, LHSArgPosWidth_13, (MR_Integer) 1))));
                MR_Word Var_51;
                MR_Word Var_52;
                MR_Word Var_53;
                MR_Word Var_55;
                MR_Word Var_56;
                MR_Integer Var_57;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Integer LHSCellOffset_79 = (MR_Integer) (Var_50);

                {
                  Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_51, 0) = ((MR_Box) (LHSPtag_11));
                }
                {
                  Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_53, 0) = ((MR_Box) (LHSCellOffset_79));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
                }
                {
                  LHSLvalA_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLvalA_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLvalA_31, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(3, LHSLvalA_31, 2) = ((MR_Box) (LHSBaseRval_12));
                  MR_hl_field(3, LHSLvalA_31, 3) = ((MR_Box) (Var_52));
                }
                Var_57 = (MR_Integer) ((MR_Unsigned) LHSCellOffset_79 + (MR_Unsigned) 1);
                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Var_55, 1) = ((MR_Box) (Var_56));
                }
                {
                  LHSLvalB_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSLvalB_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, LHSLvalB_32, 1) = ((MR_Box) (Var_51));
                  MR_hl_field(3, LHSLvalB_32, 2) = ((MR_Box) (LHSBaseRval_12));
                  MR_hl_field(3, LHSLvalB_32, 3) = ((MR_Box) (Var_55));
                }
                {
                  Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_60, 0) = ((MR_Box) (LHSLvalA_31));
                }
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_61, 0) = ((MR_Box) (LHSLvalB_32));
                }
                {
                  LHSRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, LHSRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, LHSRval_33, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(3, LHSRval_33, 2) = ((MR_Box) (Var_60));
                  MR_hl_field(3, LHSRval_33, 3) = ((MR_Box) (Var_61));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (LHSLvalB_32));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (LHSLvalA_31));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
                }
                ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_14, Var_62, LHSRval_33, Code_17, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Shift_35 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 3))));
                    MR_Integer Mask_37;
                    MR_Word Fill_38 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Word LHSRval0_41;
                    MR_Word MaskedLHSRval0_42;
                    MR_Word MaskedLHSRval_43;
                    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 2))));
                    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 5))));
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Integer LHSCellOffset_80 = (MR_Integer) (Var_65);
                    MR_Word LHSLval_81;

                    Mask_37 = (MR_Integer) (Var_66);
                    {
                      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_69, 0) = ((MR_Box) (LHSPtag_11));
                    }
                    {
                      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_71, 0) = ((MR_Box) (LHSCellOffset_80));
                    }
                    {
                      Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
                    }
                    {
                      LHSLval_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSLval_81, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSLval_81, 1) = ((MR_Box) (Var_69));
                      MR_hl_field(3, LHSLval_81, 2) = ((MR_Box) (LHSBaseRval_12));
                      MR_hl_field(3, LHSLval_81, 3) = ((MR_Box) (Var_70));
                    }
                    {
                      Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_72, 0) = ((MR_Box) (LHSLval_81));
                    }
                    LHSRval0_41 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_72, Shift_35);
                    {
                      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Mask_37));
                    }
                    {
                      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
                    }
                    {
                      MaskedLHSRval0_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLHSRval0_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLHSRval0_42, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLHSRval0_42, 2) = ((MR_Box) (LHSRval0_41));
                      MR_hl_field(3, MaskedLHSRval0_42, 3) = ((MR_Box) (Var_75));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_38, MaskedLHSRval0_42, &MaskedLHSRval_43);
                    {
                      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_77, 0) = ((MR_Box) (LHSLval_81));
                      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_14, Var_77, MaskedLHSRval_43, Code_17, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 2))));
                    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 5))));
                    MR_Word Shift_83 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 3))));
                    MR_Integer Mask_84 = (MR_Integer) (Var_68);
                    MR_Word Fill_85 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Word LHSRval0_86;
                    MR_Word MaskedLHSRval0_87;
                    MR_Word MaskedLHSRval_88;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word Var_92;
                    MR_Word Var_95;
                    MR_Word Var_96;
                    MR_Word Var_97;
                    MR_Integer LHSCellOffset_99 = (MR_Integer) (Var_67);
                    MR_Word LHSLval_100;

                    {
                      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_89, 0) = ((MR_Box) (LHSPtag_11));
                    }
                    {
                      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_91, 0) = ((MR_Box) (LHSCellOffset_99));
                    }
                    {
                      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_90, 1) = ((MR_Box) (Var_91));
                    }
                    {
                      LHSLval_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, LHSLval_100, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, LHSLval_100, 1) = ((MR_Box) (Var_89));
                      MR_hl_field(3, LHSLval_100, 2) = ((MR_Box) (LHSBaseRval_12));
                      MR_hl_field(3, LHSLval_100, 3) = ((MR_Box) (Var_90));
                    }
                    {
                      Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_92, 0) = ((MR_Box) (LHSLval_100));
                    }
                    LHSRval0_86 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_92, Shift_83);
                    {
                      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Mask_84));
                    }
                    {
                      Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
                    }
                    {
                      MaskedLHSRval0_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, MaskedLHSRval0_87, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, MaskedLHSRval0_87, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      MR_hl_field(3, MaskedLHSRval0_87, 2) = ((MR_Box) (LHSRval0_86));
                      MR_hl_field(3, MaskedLHSRval0_87, 3) = ((MR_Box) (Var_95));
                    }
                    ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_85, MaskedLHSRval0_87, &MaskedLHSRval_88);
                    {
                      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_97, 0) = ((MR_Box) (LHSLval_100));
                      MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_14, Var_97, MaskedLHSRval_88, Code_17, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *Code_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
                  }
                  break;
              }
              break;
          }
        else
        {
          *Code_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Code_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
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
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, LHSArgPosWidth_10, (MR_Integer) 1))));
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
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(2, LHSArgPosWidth_10, (MR_Integer) 1))));
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
      switch (((MR_Integer) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_30 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 3))));
            MR_Word Mask_32 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 5))));
            MR_Word Fill_33 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_36 = (MR_Integer) (Shift_30);
            MR_Integer MaskInt_37 = (MR_Integer) (Mask_32);
            MR_Word ComplementMask_38;
            MR_Word MaskOld_39;
            MR_Word ShiftedRHSRval_40;
            MR_Word CombinedRval_41;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 2))));
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
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 2))));
            MR_Word Shift_96 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 3))));
            MR_Word Mask_97 = ((MR_Word) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 5))));
            MR_Word Fill_98 = ((MR_Unsigned) ((MR_hl_field(3, LHSArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
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
