/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2022-12-28
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
#include "cord.mih"
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
#include "term_context.mih"
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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(
  MR_Word MaybeSizeProfInfo_28,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_39);

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
  MR_Word HeadVar__2_44)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_44);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(
  MR_Word MaybeSizeProfInfo_28,
  MR_Word HeadVar__2_54)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_28)), ((MR_Box) (HeadVar__2_54)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_50)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_50);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_39)
{
  MR_bool succeeded = (CodeModel_8 == HeadVar__2_39);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
        MR_Word LHSVar_19 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 0))));
        MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 1))));
        MR_Word RHSVars_21 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 3))));
        MR_Word HowToConstruct_23 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 4))));
        MR_Word SubInfo_25 = ((MR_Word) ((MR_hl_field(0, Unification_9, (MR_Integer) 6))));
        MR_Word TakeAddr_26;
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_47, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(0, Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2));
          MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_47, 3) = ((MR_Box) (CodeModel_8));
          MR_hl_field(0, Var_47, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "construct not det");
        if ((SubInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
          TakeAddr_26 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word MaybeTakeAddr_27 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, (MR_Integer) 0))));
          MR_Word MaybeSizeProfInfo_28 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, (MR_Integer) 1))));
          MR_Word Var_51;

          if ((MaybeTakeAddr_27 == (MR_Word) ((MR_Unsigned) 0U)))
            TakeAddr_26 = (MR_Word) ((MR_Unsigned) 0U);
          else
            TakeAddr_26 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_27, (MR_Integer) 0))));
          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[1]));
            MR_hl_field(0, Var_51, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3));
            MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_51, 3) = ((MR_Box) (MaybeSizeProfInfo_28));
            MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "term size profiling not yet supported");
        }
        ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0(LHSVar_19, ConsId_20, RHSVars_21, ArgModes_22, TakeAddr_26, HowToConstruct_23, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_29 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_9, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_30 = ((MR_Unsigned) ((MR_hl_field(1, Unification_9, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_Word LHSVar_59 = ((MR_Word) ((MR_hl_field(1, Unification_9, (MR_Integer) 0))));
        MR_Word ConsId_60 = ((MR_Word) ((MR_hl_field(1, Unification_9, (MR_Integer) 1))));
        MR_Word RHSVars_61 = ((MR_Word) ((MR_hl_field(1, Unification_9, (MR_Integer) 2))));
        MR_Word ArgModes_62 = ((MR_Word) ((MR_hl_field(1, Unification_9, (MR_Integer) 3))));

        ml_backend__ml_unify_gen_deconstruct__ml_generate_deconstruction_unification_12_p_0(LHSVar_59, ConsId_60, RHSVars_61, ArgModes_62, CanFail_29, CanCGC_30, CodeModel_8, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetVar_14 = ((MR_Word) ((MR_hl_field(2, Unification_9, (MR_Integer) 0))));
        MR_Word SourceVar_15 = ((MR_Word) ((MR_hl_field(2, Unification_9, (MR_Integer) 1))));
        MR_Word Var_36;
        MR_Word VarTable_63;
        MR_Word TargetVarEntry_64;
        MR_Word IsDummyType_67;
        MR_Word GroundTerm_72;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (CodeModel_8));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "assign not det");
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_34, &VarTable_63);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_63, TargetVar_14, &TargetVarEntry_64);
        IsDummyType_67 = ((MR_Unsigned) ((MR_hl_field(0, TargetVarEntry_64, (MR_Integer) 2))) & (MR_Integer) 1);
        switch (IsDummyType_67) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word SourceVarEntry_68;
              MR_Word TargetLval_69;
              MR_Word SourceLval_70;
              MR_Word Stmt_71;
              MR_Word Var_73;

              parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_63, SourceVar_15, &SourceVarEntry_68);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, TargetVar_14, TargetVarEntry_64, &TargetLval_69);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, SourceVarEntry_68, &SourceLval_70);
              {
                Var_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_73, 0) = ((MR_Box) (SourceLval_70));
              }
              Stmt_71 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_69, Var_73, Context_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_71));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, &GroundTerm_72);
        if (succeeded)
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_72, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        else
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarA_16 = ((MR_Word) ((MR_hl_field(3, Unification_9, (MR_Integer) 1))));
            MR_Word VarB_17 = ((MR_Word) ((MR_hl_field(3, Unification_9, (MR_Integer) 2))));
            MR_Word Stmt_18;
            MR_Word Var_41;
            MR_Word VarTable_75;
            MR_Word VarAEntry_76;
            MR_Word Type_78;
            MR_Word IsDummyType_79;
            MR_Word SidesAreEqualRval_80;

            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
              MR_hl_field(0, Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4));
              MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_41, 3) = ((MR_Box) (CodeModel_8));
              MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "simple_test not semidet");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_34, &VarTable_75);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_75, VarA_16, &VarAEntry_76);
            Type_78 = ((MR_Word) ((MR_hl_field(0, VarAEntry_76, (MR_Integer) 1))));
            IsDummyType_79 = ((MR_Unsigned) ((MR_hl_field(0, VarAEntry_76, (MR_Integer) 2))) & (MR_Integer) 1);
            switch (IsDummyType_79) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SidesAreEqualRval_80 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[1]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word EqOp_82;
                  MR_Word VarBEntry_84;
                  MR_Word VarLvalA_85;
                  MR_Word VarLvalB_86;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word BuiltinType_81;

                  succeeded = ((MR_tag((MR_Word) Type_78)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    BuiltinType_81 = ((MR_Word) ((MR_hl_field(2, Type_78, (MR_Integer) 0))));
                    switch (MR_tag((MR_Word) BuiltinType_81)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(BuiltinType_81)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            EqOp_82 = (MR_Word) ((MR_Unsigned) 68U);
                            break;
                          case (MR_Integer) 1:
                            EqOp_82 = (MR_Word) ((MR_Unsigned) 16U);
                            break;
                          case (MR_Integer) 2:
                            EqOp_82 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[2]));
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word IntType_83 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_81, (MR_Integer) 0))) & (MR_Integer) 15);

                          {
                            EqOp_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, EqOp_82, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                            MR_hl_field(3, EqOp_82, 1) = (MR_Box) ((MR_Unsigned) (IntType_83));
                          }
                        }
                        break;
                    }
                  }
                  else
                    EqOp_82 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[2]));
                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_75, VarB_17, &VarBEntry_84);
                  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, VarA_16, VarAEntry_76, &VarLvalA_85);
                  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_34, VarB_17, VarBEntry_84, &VarLvalB_86);
                  {
                    Var_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_90, 0) = ((MR_Box) (VarLvalA_85));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_91, 0) = ((MR_Box) (VarLvalB_86));
                  }
                  {
                    SidesAreEqualRval_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, SidesAreEqualRval_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, SidesAreEqualRval_80, 1) = ((MR_Box) (EqOp_82));
                    MR_hl_field(3, SidesAreEqualRval_80, 2) = ((MR_Box) (Var_90));
                    MR_hl_field(3, SidesAreEqualRval_80, 3) = ((MR_Box) (Var_91));
                  }
                }
                break;
            }
            ml_backend__ml_code_util__ml_gen_set_success_5_p_0(SidesAreEqualRval_80, Context_10, &Stmt_18, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_18));
              MR_hl_field(1, base, 1) = ((MR_Box) (*Defns_11));
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
