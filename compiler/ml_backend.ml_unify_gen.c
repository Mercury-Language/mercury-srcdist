/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2019-06-04
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


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_construct.mih"
#include "ml_backend.ml_unify_gen_deconstruct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
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
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_51);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(
  MR_Word MaybeSizeProfInfo_28,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_28)), ((MR_Box) (HeadVar__2_46)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_57)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_57);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__64__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__83__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__71__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_generate_unification__58__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
          MR_Word Type_74;
          MR_Word ModuleInfo_75;
          MR_Word IsDummyType_76;
          MR_Word GroundTerm_80;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_generate_unification_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_34, TargetVar_14, &Type_74);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_75);
          IsDummyType_76 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_75, Type_74);
          switch (IsDummyType_76) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_77;
                MR_Word SourceLval_78;
                MR_Word Stmt_79;
                MR_Word Var_81;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_34, TargetVar_14, &TargetLval_77);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, &SourceLval_78);
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (SourceLval_78));
                }
                Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_77, Var_81, Context_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_34, SourceVar_15, &GroundTerm_80);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_80, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_generate_unification\'/7", (MR_String) "complicated unify");
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
ml_backend__ml_unify_gen__ml_generate_simple_test_unification_6_p_0(
  MR_Word VarA_7,
  MR_Word VarB_8,
  MR_Word Context_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word Type_12;
    MR_Word ModuleInfo_13;
    MR_Word IsDummyType_14;
    MR_Word SidesAreEqualRval_15;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_21, VarA_7, &Type_12);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo_13);
    IsDummyType_14 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_13, Type_12);
    switch (IsDummyType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SidesAreEqualRval_15 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[1]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqOp_17;
          MR_Word VarLvalA_19;
          MR_Word VarLvalB_20;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word BuiltinType_16;

          succeeded = ((MR_tag((MR_Word) Type_12)) == (MR_Integer) 2);
          if (succeeded)
          {
            BuiltinType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_12, (MR_Integer) 0))));
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
                    EqOp_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[2]));
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
            EqOp_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[2]));
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_21, VarA_7, &VarLvalA_19);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_21, VarB_8, &VarLvalB_20);
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (VarLvalA_19));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (VarLvalB_20));
          }
          {
            SidesAreEqualRval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SidesAreEqualRval_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), SidesAreEqualRval_15, 1) = ((MR_Box) (EqOp_17));
            MR_hl_field(MR_mktag(3), SidesAreEqualRval_15, 2) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(3), SidesAreEqualRval_15, 3) = ((MR_Box) (Var_26));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(SidesAreEqualRval_15, Context_9, Stmt_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
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
