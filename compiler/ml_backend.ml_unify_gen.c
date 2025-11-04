/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2025-11-04
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
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
#include "sparse_bitset.mih"
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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "libs.file_util.mih"
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__65__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__84__1_2_p_0(
  MR_Word MaybeSizeProfInfo_30,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__72__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__59__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_1(
  MR_Box closure_arg);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[5][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0) }
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__65__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_47)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_47);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__84__1_2_p_0(
  MR_Word MaybeSizeProfInfo_30,
  MR_Word HeadVar__2_57)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_30)), ((MR_Box) (HeadVar__2_57)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__72__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_53);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__59__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded = (CodeModel_9 == HeadVar__2_42);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__65__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__84__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__72__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__59__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_8_p_0(
  MR_Word CodeModel_9,
  MR_Word GoalInfo_10,
  MR_Word Context_11,
  MR_Word Unification_12,
  MR_Word * Defns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LHSVar_21 = ((MR_Word) ((MR_hl_field(0, Unification_12, 0))));
        MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, Unification_12, 1))));
        MR_Word RHSVars_23 = ((MR_Word) ((MR_hl_field(0, Unification_12, 2))));
        MR_Word ArgModes_24 = ((MR_Word) ((MR_hl_field(0, Unification_12, 3))));
        MR_Word HowToConstruct_25 = ((MR_Word) ((MR_hl_field(0, Unification_12, 4))));
        MR_Word SubInfo_27 = ((MR_Word) ((MR_hl_field(0, Unification_12, 6))));
        MR_Word TakeAddr_28;
        MR_Word NonLocals_31;
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (CodeModel_9));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/8", (MR_String) "construct not det");
        if ((SubInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
          TakeAddr_28 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word MaybeTakeAddr_29 = ((MR_Word) ((MR_hl_field(1, SubInfo_27, 0))));
          MR_Word MaybeSizeProfInfo_30 = ((MR_Word) ((MR_hl_field(1, SubInfo_27, 1))));
          MR_Word Var_54;

          if ((MaybeTakeAddr_29 == (MR_Word) ((MR_Unsigned) 0U)))
            TakeAddr_28 = (MR_Word) ((MR_Unsigned) 0U);
          else
            TakeAddr_28 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_29, 0))));
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[1]));
            MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_3));
            MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_54, 3) = ((MR_Box) (MaybeSizeProfInfo_30));
            MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/8", (MR_String) "term size profiling not yet supported");
        }
        NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_10);
        ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_12_p_0(NonLocals_31, LHSVar_21, ConsId_22, RHSVars_23, ArgModes_24, TakeAddr_28, HowToConstruct_25, Context_11, Defns_13, Stmts_14, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_32 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_12, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_33 = ((MR_Unsigned) ((MR_hl_field(1, Unification_12, 4))) & (MR_Integer) 1);
        MR_Word LHSVar_62 = ((MR_Word) ((MR_hl_field(1, Unification_12, 0))));
        MR_Word ConsId_63 = ((MR_Word) ((MR_hl_field(1, Unification_12, 1))));
        MR_Word RHSVars_64 = ((MR_Word) ((MR_hl_field(1, Unification_12, 2))));
        MR_Word ArgModes_65 = ((MR_Word) ((MR_hl_field(1, Unification_12, 3))));
        MR_Word NonLocals_66;

        NonLocals_66 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_10);
        ml_backend__ml_unify_gen_deconstruct__ml_generate_deconstruction_unification_13_p_0(NonLocals_66, LHSVar_62, ConsId_63, RHSVars_64, ArgModes_65, CanFail_32, CanCGC_33, CodeModel_9, Context_11, Defns_13, Stmts_14, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TargetVar_16 = ((MR_Word) ((MR_hl_field(2, Unification_12, 0))));
        MR_Word SourceVar_17 = ((MR_Word) ((MR_hl_field(2, Unification_12, 1))));
        MR_Word Var_39;
        MR_Word VarTable_67;
        MR_Word TargetVarEntry_68;
        MR_Word IsDummyType_71;
        MR_Word GroundTerm_76;

        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
          MR_hl_field(0, Var_39, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_1));
          MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_39, 3) = ((MR_Box) (CodeModel_9));
          MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/8", (MR_String) "assign not det");
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_37, &VarTable_67);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_67, TargetVar_16, &TargetVarEntry_68);
        IsDummyType_71 = ((MR_Unsigned) ((MR_hl_field(0, TargetVarEntry_68, 2))) & (MR_Integer) 1);
        switch (IsDummyType_71) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Stmts_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word SourceVarEntry_72;
              MR_Word TargetLval_73;
              MR_Word SourceLval_74;
              MR_Word Stmt_75;
              MR_Word Var_77;

              parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_67, SourceVar_17, &SourceVarEntry_72);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_37, TargetVar_16, TargetVarEntry_68, &TargetLval_73);
              ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_37, SourceVar_17, SourceVarEntry_72, &SourceLval_74);
              {
                Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_77, 0) = ((MR_Box) (SourceLval_74));
              }
              Stmt_75 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_73, Var_77, Context_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_14 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_75));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_37, SourceVar_17, &GroundTerm_76);
        if (succeeded)
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_16, GroundTerm_76, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        else
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
        *Defns_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarA_18 = ((MR_Word) ((MR_hl_field(3, Unification_12, 1))));
            MR_Word VarB_19 = ((MR_Word) ((MR_hl_field(3, Unification_12, 2))));
            MR_Word Stmt_20;
            MR_Word Var_44;
            MR_Word VarTable_79;
            MR_Word VarAEntry_80;
            MR_Word Type_82;
            MR_Word IsDummyType_83;
            MR_Word SidesAreEqualRval_84;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_8_p_0_4));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (CodeModel_9));
              MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/8", (MR_String) "simple_test not semidet");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_37, &VarTable_79);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_79, VarA_18, &VarAEntry_80);
            Type_82 = ((MR_Word) ((MR_hl_field(0, VarAEntry_80, 1))));
            IsDummyType_83 = ((MR_Unsigned) ((MR_hl_field(0, VarAEntry_80, 2))) & (MR_Integer) 1);
            switch (IsDummyType_83) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SidesAreEqualRval_84 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[1]));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word EqOp_86;
                  MR_Word VarBEntry_88;
                  MR_Word VarLvalA_89;
                  MR_Word VarLvalB_90;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word BuiltinType_85;

                  succeeded = ((MR_tag((MR_Word) Type_82)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    BuiltinType_85 = ((MR_Word) ((MR_hl_field(2, Type_82, 0))));
                    switch (MR_tag((MR_Word) BuiltinType_85)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(BuiltinType_85)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            EqOp_86 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[3]));
                            break;
                          case (MR_Integer) 1:
                            EqOp_86 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[4]));
                            break;
                          case (MR_Integer) 2:
                            EqOp_86 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[2]));
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word IntType_87 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_85, 0))) & (MR_Integer) 15);

                          {
                            EqOp_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, EqOp_86, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, EqOp_86, 1) = (MR_Box) (((((MR_Unsigned) (IntType_87) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                          }
                        }
                        break;
                    }
                  }
                  else
                    EqOp_86 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_scalar_common_1[2]));
                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_79, VarB_19, &VarBEntry_88);
                  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_37, VarA_18, VarAEntry_80, &VarLvalA_89);
                  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_37, VarB_19, VarBEntry_88, &VarLvalB_90);
                  {
                    Var_99 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_99, 0) = ((MR_Box) (VarLvalA_89));
                  }
                  {
                    Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_100, 0) = ((MR_Box) (VarLvalB_90));
                  }
                  {
                    SidesAreEqualRval_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, SidesAreEqualRval_84, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, SidesAreEqualRval_84, 1) = ((MR_Box) (EqOp_86));
                    MR_hl_field(3, SidesAreEqualRval_84, 2) = ((MR_Box) (Var_99));
                    MR_hl_field(3, SidesAreEqualRval_84, 3) = ((MR_Box) (Var_100));
                  }
                }
                break;
            }
            ml_backend__ml_code_util__ml_gen_set_success_5_p_0(SidesAreEqualRval_84, Context_11, &Stmt_20, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            *Defns_13 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (*Defns_13));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/8", (MR_String) "complicated unify");
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
