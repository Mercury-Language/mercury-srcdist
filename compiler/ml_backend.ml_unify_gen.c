/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2022-04-01
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


// :- module ml_backend.ml_unify_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.var_table.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_construct.mih"
#include "ml_backend.ml_unify_gen_deconstruct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_51);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(
  MR_Word MaybeSizeProfInfo_28,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_generate_simple_test_unification_6_p_0(
  MR_Word VarA_7,
  MR_Word VarB_8,
  MR_Word Context_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
};



#include "array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_51)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_51);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(
  MR_Word MaybeSizeProfInfo_28,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_28)), ((MR_Box) (HeadVar__2_46)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_42);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_57)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_57);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0(
  MR_Word CodeModel_8,
  MR_Word Unification_9,
  MR_Word Context_10,
  MR_Word * Defns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LHSVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 0))));
        MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 1))));
        MR_Word RHSVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 3))));
        MR_Word HowToConstruct_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 4))));
        MR_Word SubInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_9, (MR_Integer) 6))));
        MR_Word TakeAddr_26;
        MR_Word Var_39;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (CodeModel_8));
          MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "construct not det");
        if ((SubInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
          TakeAddr_26 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word MaybeTakeAddr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_25, (MR_Integer) 0))));
          MR_Word MaybeSizeProfInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_25, (MR_Integer) 1))));
          MR_Word Var_43;

          if ((MaybeTakeAddr_27 == (MR_Word) ((MR_Unsigned) 0U)))
            TakeAddr_26 = (MR_Word) ((MR_Unsigned) 0U);
          else
            TakeAddr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_27, (MR_Integer) 0))));
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (MaybeSizeProfInfo_28));
            MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "term size profiling not yet supported");
        }
        ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0(LHSVar_19, ConsId_20, RHSVars_21, ArgModes_22, TakeAddr_26, HowToConstruct_23, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_Word LHSVar_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 0))));
        MR_Word ConsId_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 1))));
        MR_Word RHSVars_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 2))));
        MR_Word ArgModes_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_9, (MR_Integer) 3))));

        ml_backend__ml_unify_gen_deconstruct__ml_generate_deconstruction_unification_12_p_0(LHSVar_59, ConsId_60, RHSVars_61, ArgModes_62, CanFail_29, CanCGC_30, CodeModel_8, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_9, (MR_Integer) 0))));
        MR_Word SourceVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_9, (MR_Integer) 1))));
        MR_Word Var_54;
        MR_Word VarTable_74;
        MR_Word TargetVarEntry_75;
        MR_Word IsDummyType_78;
        MR_Word GroundTerm_83;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (CodeModel_8));
          MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "assign not det");
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_34, &VarTable_74);
        hlds__var_table__lookup_var_entry_3_p_0(VarTable_74, TargetVar_14, &TargetVarEntry_75);
        IsDummyType_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetVarEntry_75, (MR_Integer) 2))) & (MR_Integer) 1);
        switch (IsDummyType_78) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word SourceVarEntry_79;
              MR_Word TargetLval_80;
              MR_Word SourceLval_81;
              MR_Word Stmt_82;
              MR_Word Var_84;

              hlds__var_table__lookup_var_entry_3_p_0(VarTable_74, SourceVar_15, &SourceVarEntry_79);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, TargetVar_14, TargetVarEntry_75, &TargetLval_80);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, SourceVarEntry_79, &SourceLval_81);
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (SourceLval_81));
              }
              Stmt_82 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_80, Var_84, Context_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_82));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, &GroundTerm_83);
        if (succeeded)
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_83, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        else
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_9, (MR_Integer) 1))));
            MR_Word VarB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_9, (MR_Integer) 2))));
            MR_Word Stmt_18;
            MR_Word Var_48;

            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4));
              MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (CodeModel_8));
              MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "simple_test not semidet");
            ml_backend__ml_unify_gen__ml_generate_simple_test_unification_6_p_0(VarA_16, VarB_17, Context_10, &Stmt_18, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*Defns_11));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "complicated unify");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_generate_simple_test_unification_6_p_0(
  MR_Word VarA_7,
  MR_Word VarB_8,
  MR_Word Context_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word VarTable_12;
  MR_Word VarAEntry_13;
  MR_Word Type_15;
  MR_Word IsDummyType_16;
  MR_Word SidesAreEqualRval_17;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_24, &VarTable_12);
  hlds__var_table__lookup_var_entry_3_p_0(VarTable_12, VarA_7, &VarAEntry_13);
  Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarAEntry_13, (MR_Integer) 1))));
  IsDummyType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarAEntry_13, (MR_Integer) 2))) & (MR_Integer) 1);
  switch (IsDummyType_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SidesAreEqualRval_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[1]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word EqOp_19;
        MR_Word VarBEntry_21;
        MR_Word VarLvalA_22;
        MR_Word VarLvalB_23;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word BuiltinType_18;

        succeeded = ((MR_tag((MR_Word) Type_15)) == (MR_Integer) 2);
        if (succeeded)
        {
          BuiltinType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_15, (MR_Integer) 0))));
          switch (MR_tag((MR_Word) BuiltinType_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  EqOp_19 = (MR_Word) ((MR_Unsigned) 68U);
                  break;
                case (MR_Integer) 1:
                  EqOp_19 = (MR_Word) ((MR_Unsigned) 16U);
                  break;
                case (MR_Integer) 2:
                  EqOp_19 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[2]));
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_18, (MR_Integer) 0))) & (MR_Integer) 15);

                {
                  EqOp_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), EqOp_19, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(MR_mktag(3), EqOp_19, 1) = (MR_Box) ((MR_Unsigned) (IntType_20));
                }
              }
              break;
          }
        }
        else
          EqOp_19 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[2]));
        hlds__var_table__lookup_var_entry_3_p_0(VarTable_12, VarB_8, &VarBEntry_21);
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_24, VarA_7, VarAEntry_13, &VarLvalA_22);
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_24, VarB_8, VarBEntry_21, &VarLvalB_23);
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (VarLvalA_22));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (VarLvalB_23));
        }
        {
          SidesAreEqualRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SidesAreEqualRval_17, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), SidesAreEqualRval_17, 1) = ((MR_Box) (EqOp_19));
          MR_hl_field(MR_mktag(3), SidesAreEqualRval_17, 2) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(3), SidesAreEqualRval_17, 3) = ((MR_Box) (Var_29));
        }
      }
      break;
  }
  ml_backend__ml_code_util__ml_gen_set_success_5_p_0(SidesAreEqualRval_17, Context_9, Stmt_10, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
}

void mercury__ml_backend__ml_unify_gen__init(void)
{
}

void mercury__ml_backend__ml_unify_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen.
