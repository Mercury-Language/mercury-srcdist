/*
** Automatically generated from `ml_disj_gen.m'
** by the Mercury compiler,
** version rotd-2018-02-16
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


// :- module ml_backend.ml_disj_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_disj_gen__init
ENDINIT
*/

#include "ml_backend.ml_disj_gen.mih"


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
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ml_backend.ml_util.mih"
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




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(
  MR_Word FirstDisjunct_7,
  MR_Word LaterDisjuncts_8,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
  MR_Word OutVars_7,
  MR_Word Solns_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(
  MR_Word FirstDisjunct_8,
  MR_Word LaterDisjuncts_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);


static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[4][1];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][3];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][6];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][8];




static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_disj_gen_scalar_common_2[1])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_disj_gen_scalar_common_2[3])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__3_3, ((MR_Word) wrapper_arg_3), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(
  MR_Word Disjuncts_8,
  MR_Word GoalInfo_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;

    if ((Disjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_10, Context_11, Stmts_12, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
    else
    {
      MR_Word FirstDisjunct_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_8, (MR_Integer) 0)));
      MR_Word LaterDisjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Disjuncts_8, (MR_Integer) 1)));

      if ((LaterDisjuncts_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_disj\'/7", (MR_String) "single disjunct");
          return;
        }
      }
      else
        switch (CodeModel_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(FirstDisjunct_14, LaterDisjuncts_15, CodeModel_10, Context_11, Stmts_12, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleInfo_19;
              MR_Word Globals_20;
              MR_Word StaticGroundCells_21;
              MR_Word DisjNonLocals_22;
              MR_Word Target_18;

              ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_26, &Target_18);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_26, &ModuleInfo_19);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_20);
              libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 458, &StaticGroundCells_21);
              succeeded = (StaticGroundCells_21 == (MR_Integer) 1);
              if (succeeded)
              {
                DisjNonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(DisjNonLocals_22, Disjuncts_8);
              }
              if (succeeded)
              {
                MR_Word NonLocals_23;
                MR_Word OutVars_24;
                MR_Word Solns_25;
                MR_Word Var_31;
                MR_Word STATE_VARIABLE_Info_32_32;
                MR_Box conv2_STATE_VARIABLE_Info_32_32;

                NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                OutVars_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_23);
                {
                  Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OutVars_24));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_disj_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, Var_31, Disjuncts_8, &Solns_25, ((MR_Box) (STATE_VARIABLE_Info_0_26)), &conv2_STATE_VARIABLE_Info_32_32);
                STATE_VARIABLE_Info_32_32 = ((MR_Word) conv2_STATE_VARIABLE_Info_32_32);
                ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(OutVars_24, Solns_25, Context_11, Stmts_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
              }
              else
              {
                MR_Word FirstLaterDisjunct_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_15, (MR_Integer) 0)));
                MR_Word LaterLaterDisjuncts_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_15, (MR_Integer) 1)));
                MR_Word FirstStmt_56;
                MR_Word LaterStmts_57;
                MR_Word STATE_VARIABLE_Info_20_59;

                ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, FirstDisjunct_14, &FirstStmt_56, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_20_59);
                ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(FirstLaterDisjunct_54, LaterLaterDisjuncts_55, &LaterStmts_57, STATE_VARIABLE_Info_20_59, STATE_VARIABLE_Info_27);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstStmt_56));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterStmts_57));
                }
              }
            }
            break;
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(
  MR_Word FirstDisjunct_7,
  MR_Word LaterDisjuncts_8,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  if ((LaterDisjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Stmt_12;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, FirstDisjunct_7, &Stmt_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
  else
  {
    MR_Word FirstLaterDisjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_8, (MR_Integer) 0)));
    MR_Word LaterLaterDisjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_8, (MR_Integer) 1)));
    MR_Word FirstStmt_15;
    MR_Word LaterStmts_16;
    MR_Word STATE_VARIABLE_Info_20_20;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 2, FirstDisjunct_7, &FirstStmt_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_20_20);
    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_51_93_95_48_6_p_0(FirstLaterDisjunct_13, LaterLaterDisjuncts_14, &LaterStmts_16, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstStmt_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterStmts_16));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
  MR_Word OutVars_7,
  MR_Word Solns_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word ModuleName_13;
    MR_Word MLDS_ModuleName_14;
    MR_Word Target_15;
    MR_Word VarTypes_16;
    MR_Word FieldTypes_17;
    MR_Word MLDS_FieldTypes_18;
    MR_Word GlobalData0_19;
    MR_Word StructTypeNum_20;
    MR_Word StructType_21;
    MR_Word FieldIds_22;
    MR_Word GlobalData1_23;
    MR_Word RowInitializers_24;
    MR_Integer NumRows_25;
    MR_Word VectorCommon_26;
    MR_Word GlobalData_27;
    MR_Word SlotVar_28;
    MR_Word SlotVarType_29;
    MR_Word SlotVarDefn_31;
    MR_Word SlotVarLval_32;
    MR_Word SlotVarRval_33;
    MR_Word LookupStmts_34;
    MR_Word CallContStmt_35;
    MR_Word InitSlotVarStmt_36;
    MR_Word IncrSlotVarStmt_37;
    MR_Word LoopBodyStmt_38;
    MR_Word LoopCond_39;
    MR_Word LoopStmt_40;
    MR_Word Stmt_41;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_12, &ModuleName_13);
    MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_13);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_42, &Target_15);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_42, &VarTypes_16);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_16, OutVars_7, &FieldTypes_17);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleInfo_12));
    }
    MLDS_FieldTypes_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, Var_44, FieldTypes_17);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_42, &GlobalData0_19);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_14, Context_9, Target_15, MLDS_FieldTypes_18, &StructTypeNum_20, &StructType_21, &FieldIds_22, GlobalData0_19, &GlobalData1_23);
    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(StructType_21, Solns_8, &RowInitializers_24);
    mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, RowInitializers_24, &NumRows_25);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_14, StructTypeNum_20, RowInitializers_24, &VectorCommon_26, GlobalData1_23, &GlobalData_27);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_27, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_45_45);
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 1, &SlotVar_28, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_47_47);
    SlotVarType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    SlotVarDefn_31 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(SlotVar_28, SlotVarType_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_9);
    {
      SlotVarLval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SlotVarLval_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), SlotVarLval_32, 1) = ((MR_Box) (SlotVar_28));
      MR_hl_field(MR_mktag(3), SlotVarLval_32, 2) = ((MR_Box) (SlotVarType_29));
    }
    {
      SlotVarRval_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), SlotVarRval_33, 0) = ((MR_Box) (SlotVarLval_32));
    }
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_7, MLDS_FieldTypes_18, FieldIds_22, VectorCommon_26, StructType_21, SlotVarRval_33, Context_9, &LookupStmts_34, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
    ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_9, &CallContStmt_35, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_43);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (SlotVarLval_32));
      MR_hl_field(MR_mktag(2), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_1[1])));
    }
    {
      InitSlotVarStmt_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitSlotVarStmt_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), InitSlotVarStmt_36, 1) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(3), InitSlotVarStmt_36, 2) = ((MR_Box) (Context_9));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_disj_gen_scalar_common_2[2])));
      MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (SlotVarRval_33));
      MR_hl_field(MR_mktag(3), Var_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_1[2])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (SlotVarLval_32));
      MR_hl_field(MR_mktag(2), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      IncrSlotVarStmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), IncrSlotVarStmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), IncrSlotVarStmt_37, 1) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(3), IncrSlotVarStmt_37, 2) = ((MR_Box) (Context_9));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (IncrSlotVarStmt_37));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (CallContStmt_35));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
    }
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, LookupStmts_34, Var_64);
    {
      LoopBodyStmt_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LoopBodyStmt_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LoopBodyStmt_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LoopBodyStmt_38, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), LoopBodyStmt_38, 3) = ((MR_Box) (Context_9));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (NumRows_25));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      LoopCond_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LoopCond_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), LoopCond_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_1[3])));
      MR_hl_field(MR_mktag(3), LoopCond_39, 2) = ((MR_Box) (SlotVarRval_33));
      MR_hl_field(MR_mktag(3), LoopCond_39, 3) = ((MR_Box) (Var_69));
    }
    {
      LoopStmt_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LoopStmt_40, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), LoopStmt_40, 1) = ((MR_Box) (LoopCond_39));
      MR_hl_field(MR_mktag(1), LoopStmt_40, 2) = ((MR_Box) (LoopBodyStmt_38));
      MR_hl_field(MR_mktag(1), LoopStmt_40, 3) = ((MR_Box) (Context_9));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (SlotVarDefn_31));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (LoopStmt_40));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InitSlotVarStmt_36));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Stmt_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_41, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Stmt_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Stmt_41, 2) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), Stmt_41, 3) = ((MR_Box) (Context_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_41));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Soln_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Solns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word RowInitializer_11;
    MR_Word RowInitializers_12;
    MR_Word FieldInitializers_13;

    FieldInitializers_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_disj_gen_scalar_common_4[0], Soln_9);
    {
      RowInitializer_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RowInitializer_11, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(2), RowInitializer_11, 1) = ((MR_Box) (FieldInitializers_13));
    }
    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, Solns_10, &RowInitializers_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RowInitializer_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RowInitializers_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(
  MR_Word FirstDisjunct_8,
  MR_Word LaterDisjuncts_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  if ((LaterDisjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Stmt_14;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_10, FirstDisjunct_8, &Stmt_14, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
  else
  {
    MR_Word FirstLaterDisjunct_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_9, (MR_Integer) 0)));
    MR_Word LaterLaterDisjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterDisjuncts_9, (MR_Integer) 1)));
    MR_Word FirstGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDisjunct_8, (MR_Integer) 1)));
    MR_Word FirstCodeModel_19;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstDisjunct_8, (MR_Integer) 0)));

    FirstCodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(FirstGoalInfo_18);
    switch (FirstCodeModel_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Stmt_46;

          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 0, FirstDisjunct_8, &Stmt_46, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_46));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_ordinary_model_det_semi_disj\'/7", (MR_String) "model_non disjunct in model_det or model_semi disjunction");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstStmt_20;
          MR_Word Succeeded_21;
          MR_Word LaterStmts_22;
          MR_Word LaterStmt_23;
          MR_Word IfStmt_24;
          MR_Word STATE_VARIABLE_Info_30_30;
          MR_Word STATE_VARIABLE_Info_31_31;
          MR_Word Var_35;
          MR_Word Var_39;

          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0((MR_Integer) 1, FirstDisjunct_8, &FirstStmt_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_30_30);
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_21, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
          ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_7_p_0(FirstLaterDisjunct_15, LaterLaterDisjuncts_16, CodeModel_10, Context_11, &LaterStmts_22, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_26);
          LaterStmt_23 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LaterStmts_22, Context_11);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_disj_gen_scalar_common_2[0])));
            MR_hl_field(MR_mktag(3), Var_35, 2) = ((MR_Box) (Succeeded_21));
          }
          {
            IfStmt_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IfStmt_24, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(2), IfStmt_24, 1) = ((MR_Box) (LaterStmt_23));
            MR_hl_field(MR_mktag(2), IfStmt_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), IfStmt_24, 3) = ((MR_Box) (Context_11));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IfStmt_24));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstStmt_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_39));
          }
        }
        break;
    }
  }
}

void mercury__ml_backend__ml_disj_gen__init(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_disj_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_disj_gen.
