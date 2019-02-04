/*
** Automatically generated from `ml_unify_gen.m'
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
#include "backend_libs.foreign.mih"
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
#include "ml_backend.ml_code_gen.mih"
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__112__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__145__1_2_p_0(
  MR_Word MaybeSizeProfInfo_39,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__133__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__79__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_87);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1(
  MR_Box closure_arg);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__112__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__145__1_2_p_0(
  MR_Word MaybeSizeProfInfo_39,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_39)), ((MR_Box) (HeadVar__2_70)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__133__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_66);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__79__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_87)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_87);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__112__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__145__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__133__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__79__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_7_p_0(
  MR_Word Unification_8,
  MR_Word CodeModel_9,
  MR_Word Context_10,
  MR_Word * Defns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 1))));
          MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 2))));
          MR_Word ArgModes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 3))));
          MR_Word HowToConstruct_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 4))));
          MR_Word SubInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 6))));
          MR_Word TakeAddr_37;
          MR_Word Var_63;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "construct not det");
          if ((SubInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
            TakeAddr_37 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word MaybeTakeAddr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 0))));
            MR_Word MaybeSizeProfInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_36, (MR_Integer) 1))));
            MR_Word Var_67;

            if ((MaybeTakeAddr_38 == (MR_Word) ((MR_Unsigned) 0U)))
              TakeAddr_37 = (MR_Word) ((MR_Unsigned) 0U);
            else
              TakeAddr_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_38, (MR_Integer) 0))));
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[1]));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (MaybeSizeProfInfo_39));
              MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "term size profiling not yet supported");
          }
          ml_backend__ml_unify_gen_construct__ml_gen_construct_11_p_0(Var_30, ConsId_31, Args_32, ArgModes_33, TakeAddr_37, HowToConstruct_34, Context_10, Defns_11, Stmts_12, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 4))));
          MR_Word CanCGC_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 5))));
          MR_Word ExpectedCodeModel_42;
          MR_Word UnifyStmts_43;
          MR_Word Stmts0_47;
          MR_Word STATE_VARIABLE_Info_56_56;
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 1))));
          MR_Word Args_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 2))));
          MR_Word ArgModes_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 3))));

          switch (CanFail_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ExpectedCodeModel_42 = (MR_Integer) 1;
                ml_backend__ml_unify_gen_deconstruct__ml_gen_semi_deconstruct_9_p_0(Var_93, ConsId_94, Args_95, ArgModes_96, Context_10, Defns_11, &UnifyStmts_43, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_56_56);
              }
              break;
            case (MR_Integer) 1:
              {
                ExpectedCodeModel_42 = (MR_Integer) 0;
                ml_backend__ml_unify_gen_deconstruct__ml_gen_det_deconstruct_9_p_0(Var_93, ConsId_94, Args_95, ArgModes_96, Context_10, Defns_11, &UnifyStmts_43, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_56_56);
              }
              break;
          }
          switch (CanCGC_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarLval_44;
                MR_Word Delete_45;
                MR_Word CGCStmt_46;
                MR_Word Var_57;
                MR_Word Var_59;
                MR_Word Var_60;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_56_56, Var_93, &VarLval_44);
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (VarLval_44));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_59));
                }
                {
                  Delete_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Delete_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Delete_45, 1) = ((MR_Box) (Var_57));
                }
                {
                  CGCStmt_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 1) = ((MR_Box) (Delete_45));
                  MR_hl_field(MR_mktag(3), CGCStmt_46, 2) = ((MR_Box) (Context_10));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CGCStmt_46));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Stmts0_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), UnifyStmts_43, Var_60);
              }
              break;
            case (MR_Integer) 1:
              Stmts0_47 = UnifyStmts_43;
              break;
          }
          ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_9, ExpectedCodeModel_42, Context_10, Stmts0_47, Stmts_12, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_52);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 0))));
          MR_Word SourceVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 1))));
          MR_Word Type_16;
          MR_Word ModuleInfo_17;
          MR_Word IsDummyType_18;
          MR_Word Var_84;
          MR_Word GroundTerm_22;

          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, TargetVar_14, &Type_16);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_17);
          IsDummyType_18 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, Type_16);
          switch (IsDummyType_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_19;
                MR_Word SourceLval_20;
                MR_Word Stmt_21;
                MR_Word Var_88;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, TargetVar_14, &TargetLval_19);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, SourceVar_15, &SourceLval_20);
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (SourceLval_20));
                }
                Stmt_21 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_19, Var_88, Context_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_21));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_51, SourceVar_15, &GroundTerm_22);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_14, GroundTerm_22, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
          else
            *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
          *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 1))));
              MR_Word VarB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 2))));
              MR_Word EqualityOp_25;
              MR_Word VarALval_27;
              MR_Word VarBLval_28;
              MR_Word Test_29;
              MR_Word Var_72;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Type_91;
              MR_Word Stmt_92;
              MR_Word Var_76;

              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (CodeModel_9));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_51, VarA_23, &Type_91);
              succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
                EqualityOp_25 = (MR_Word) ((MR_Unsigned) 16U);
              else
              {
                MR_Word Var_77;

                succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                  succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                  EqualityOp_25 = (MR_Word) ((MR_Unsigned) 64U);
                else
                {
                  MR_Word IntType_26;
                  MR_Word Var_78;

                  succeeded = ((MR_tag((MR_Word) Type_91)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_91, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 1);
                    if (succeeded)
                      IntType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    {
                      EqualityOp_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), EqualityOp_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), EqualityOp_25, 1) = ((MR_Box) (IntType_26));
                    }
                  else
                    EqualityOp_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[1]));
                }
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, VarA_23, &VarALval_27);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, VarB_24, &VarBLval_28);
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (VarALval_27));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (VarBLval_28));
              }
              {
                Test_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Test_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Test_29, 1) = ((MR_Box) (EqualityOp_25));
                MR_hl_field(MR_mktag(3), Test_29, 2) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(3), Test_29, 3) = ((MR_Box) (Var_81));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Test_29, Context_10, &Stmt_92, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
              *Defns_11 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_92));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/7", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
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
