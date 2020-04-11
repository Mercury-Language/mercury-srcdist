/*
** Automatically generated from `erl_call_gen.m'
** by the Mercury compiler,
** version rotd-2020-04-11
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


// :- module erl_backend.erl_call_gen.
// :- implementation.

/*
INIT mercury__erl_backend__erl_call_gen__init
ENDINIT
*/

#include "erl_backend.erl_call_gen.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_code_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_6,
  MR_Word * Mode_8);

static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word Var_7);

static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
  MR_Word TraceExpr_5,
  MR_Word * CondExpr_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
  MR_Word ForeignArgs_9,
  MR_String ForeignCode_10,
  MR_Word CodeModel_11,
  MR_Word OuterContext_12,
  MR_Word MaybeSuccessExpr_13,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word SimpleExpr_7);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
  MR_Word CodeModel_7,
  MR_Word CallTarget_8,
  MR_Word InputExprs_9,
  MR_Word OutputVars_10,
  MR_Word MaybeSuccessExpr_11,
  MR_Word * Statement_12);


static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_2[1][7];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_3[1][6];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_4[5][3];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_5[2][5];

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_6[6][1];




static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "env_var"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "ML_erlang_global_server"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "trace_evaluate_runtime_condition"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "trace_evaluate_runtime_condition_ack"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_4[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_3[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_5[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_5[0])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_5[1])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_5[1])),
    ((MR_Box) (erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_call_gen_scalar_common_6[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[2])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[3])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[4])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[5])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[6])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_call_gen_scalar_common_1[7])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_call_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&erl_backend__erl_call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_String MR_CALL 
erl_backend__erl_call_gen__foreign_arg_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Name_7;
    MR_Word MaybeNameMode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    if ((MaybeNameMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Name_7 = (MR_String) "_";
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_4, (MR_Integer) 0))));

      Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    }
    return Name_7;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_6,
  MR_Word * Mode_8)
{
  {
    MR_Word MaybeNameMode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    *Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    if ((MaybeNameMode_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Mode_8 = (MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[8]);
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_5, (MR_Integer) 0))));

      *Mode_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
    }
  }
}

static MR_Word MR_CALL 
erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word Var_7)
{
  {
    MR_bool succeeded;
    MR_Word Expr_8;
    MR_Word Type_9;
    MR_Word Var_10;

    succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_6, Var_7, &Type_9);
    if (succeeded)
    {
      Var_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_5, Type_9);
      succeeded = (Var_10 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word Var_11;

      Var_11 = erl_backend__elds__elds_false_0_f_0();
      {
        Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_11));
      }
    }
    else
      Expr_8 = erl_backend__elds__expr_from_var_1_f_0(Var_7);
    return Expr_8;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(
  MR_Word ForeignArgs_10,
  MR_Word MaybeTraceRuntimeCond_11,
  MR_Word PragmaImpl_12,
  MR_Word CodeModel_13,
  MR_Word OuterContext_14,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_String ForeignCode_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaImpl_12, (MR_Integer) 0))));
    MR_Word MaybeContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaImpl_12, (MR_Integer) 1))));

    if ((MaybeTraceRuntimeCond_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Context_20;

      if ((MaybeContext_19 == (MR_Word) ((MR_Unsigned) 0U)))
        Context_20 = OuterContext_14;
      else
        Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContext_19, (MR_Integer) 0))));
      erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(ForeignArgs_10, ForeignCode_18, CodeModel_13, Context_20, MaybeSuccessExpr_15, Statement_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    }
    else
    {
      MR_Word TraceRuntimeCond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_11, (MR_Integer) 0))));
      MR_Word CondExpr_31;
      MR_Word Send_32;
      MR_Word SendMsg_34;
      MR_Word Result_35;
      MR_Word ResultExpr_36;
      MR_Word Receive_37;
      MR_Word AckPattern_38;
      MR_Word SendAndRecv_39;
      MR_Word TrueCase_40;
      MR_Word FalseCase_41;
      MR_Word STATE_VARIABLE_Info_21_42;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;

      erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(TraceRuntimeCond_21, &CondExpr_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_21_42);
      Var_52 = erl_backend__elds__elds_call_self_0_f_0();
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (CondExpr_31));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[4])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
      }
      {
        SendMsg_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), SendMsg_34, 0) = ((MR_Box) (Var_45));
      }
      {
        Send_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Send_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Send_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[3])));
        MR_hl_field(MR_mktag(3), Send_32, 2) = ((MR_Box) (SendMsg_34));
      }
      erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Result", &Result_35, STATE_VARIABLE_Info_21_42, STATE_VARIABLE_Info_23);
      ResultExpr_36 = erl_backend__elds__expr_from_var_1_f_0(Result_35);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ResultExpr_36));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[5])));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_63));
      }
      {
        AckPattern_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), AckPattern_38, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(MR_mktag(3), AckPattern_38, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (AckPattern_38));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ResultExpr_36));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Receive_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Receive_37, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Receive_37, 1) = ((MR_Box) (Var_56));
      }
      SendAndRecv_39 = erl_backend__elds__join_exprs_2_f_0(Send_32, Receive_37);
      Var_68 = erl_backend__elds__elds_true_0_f_0();
      Var_70 = erl_backend__elds__elds_empty_tuple_0_f_0();
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (Var_70));
      }
      {
        TrueCase_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TrueCase_40, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), TrueCase_40, 1) = ((MR_Box) (Var_69));
      }
      Var_71 = erl_backend__elds__elds_false_0_f_0();
      Var_73 = erl_backend__elds__elds_fail_0_f_0();
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Var_73));
      }
      {
        FalseCase_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FalseCase_41, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), FalseCase_41, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (FalseCase_41));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TrueCase_40));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Statement_16 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SendAndRecv_39));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_65));
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(
  MR_Word TraceExpr_5,
  MR_Word * CondExpr_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Args_9;
    MR_Word Var_40;

    switch (MR_tag((MR_Word) TraceExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String EnvVar_8;
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_5, (MR_Integer) 0))));
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          EnvVar_8 = (MR_String) (Var_31);
          erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(EnvVar_8, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (EnvVar_8));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Var_38));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[1])));
            MR_hl_field(MR_mktag(1), Args_9, 1) = ((MR_Box) (Var_36));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExprA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_5, (MR_Integer) 0))));
          MR_Word CondA_11;
          MR_Word Var_29;

          erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(ExprA_10, &CondA_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (CondA_11));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[2])));
            MR_hl_field(MR_mktag(1), Args_9, 1) = ((MR_Box) (Var_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TraceOp_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ExprB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_5, (MR_Integer) 2))));
          MR_Word CondB_14;
          MR_String Op_15;
          MR_Word STATE_VARIABLE_Info_18_18;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word ExprA_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_5, (MR_Integer) 1))));
          MR_Word CondA_42;

          erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(ExprA_41, &CondA_42, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_18_18);
          erl_backend__erl_call_gen__erl_generate_runtime_cond_expr_4_p_0(ExprB_13, &CondB_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_17);
          switch (TraceOp_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Op_15 = (MR_String) "and";
              break;
            case (MR_Integer) 0:
              Op_15 = (MR_String) "or";
              break;
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Op_15));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Var_21));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (CondB_14));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (CondA_42));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            Args_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_9, 0) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(1), Args_9, 1) = ((MR_Box) (Var_22));
          }
        }
        break;
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Args_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *CondExpr_6 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_40));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv5_Name_7;

    conv5_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_Name_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_Name_7;

    conv4_Name_7 = erl_backend__erl_call_gen__foreign_arg_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_Name_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;
    MR_Word conv0_Mode_8;

    erl_backend__erl_call_gen__foreign_arg_type_mode_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_6, &conv0_Mode_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_Mode_8));
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_gen_ordinary_pragma_foreign_proc_8_p_0(
  MR_Word ForeignArgs_9,
  MR_String ForeignCode_10,
  MR_Word CodeModel_11,
  MR_Word OuterContext_12,
  MR_Word MaybeSuccessExpr_13,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word ModuleInfo_16;
    MR_Word ArgTypes_17;
    MR_Word ArgModes_18;
    MR_Word InputForeignArgs_19;
    MR_Word OutputForeignArgs_20;
    MR_Word InputVars_21;
    MR_Word OutputVars_22;
    MR_Word InputVarsNames_23;
    MR_Word OutputVarsNames_24;
    MR_Word ForeignCodeExpr_25;
    MR_Word InnerFunStatement_27;
    MR_Word InnerFun_33;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word InputExprs_81;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_16);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_4[0]), ForeignArgs_9, &ArgTypes_17, &ArgModes_18);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ModuleInfo_16, (MR_Integer) 0, ForeignArgs_9, ArgTypes_17, ArgModes_18, &InputForeignArgs_19, &OutputForeignArgs_20);
    InputVars_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_4[1]), InputForeignArgs_19);
    OutputVars_22 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_4[2]), OutputForeignArgs_20);
    InputVarsNames_23 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_4[3]), InputForeignArgs_19);
    OutputVarsNames_24 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__erl_call_gen_scalar_common_4[4]), OutputForeignArgs_20);
    {
      ForeignCodeExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ForeignCodeExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), ForeignCodeExpr_25, 1) = ((MR_Box) (ForeignCode_10));
      MR_hl_field(MR_mktag(3), ForeignCodeExpr_25, 2) = ((MR_Box) (OuterContext_12));
    }
    switch (CodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OutputExpr_26;
          MR_Word Var_55;

          Var_55 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(OutputVarsNames_24);
          OutputExpr_26 = erl_backend__elds__tuple_or_single_expr_1_f_0(Var_55);
          InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(ForeignCodeExpr_25, OutputExpr_26);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_ordinary_pragma_foreign_proc\'/8", (MR_String) "model_non foreign_procs in Erlang backend");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybePlaceOutputs_28;
          MR_Word OutputTuple_29;
          MR_Word OnTrue_31;
          MR_Word OnFalse_32;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;

          Var_45 = erl_backend__elds__exprs_from_fixed_vars_1_f_0(OutputVarsNames_24);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            OutputTuple_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), OutputTuple_29, 0) = ((MR_Box) (Var_44));
          }
          Var_51 = erl_backend__elds__elds_true_0_f_0();
          {
            OnTrue_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OnTrue_31, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), OnTrue_31, 1) = ((MR_Box) (OutputTuple_29));
          }
          Var_52 = erl_backend__elds__elds_false_0_f_0();
          Var_54 = erl_backend__elds__elds_fail_0_f_0();
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Var_54));
          }
          {
            OnFalse_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OnFalse_32, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), OnFalse_32, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (OnFalse_32));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (OnTrue_31));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            MaybePlaceOutputs_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MaybePlaceOutputs_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), MaybePlaceOutputs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_call_gen_scalar_common_6[0])));
            MR_hl_field(MR_mktag(3), MaybePlaceOutputs_28, 2) = ((MR_Box) (Var_46));
          }
          InnerFunStatement_27 = erl_backend__elds__join_exprs_2_f_0(ForeignCodeExpr_25, MaybePlaceOutputs_28);
        }
        break;
    }
    Var_57 = erl_backend__elds__terms_from_fixed_vars_1_f_0(InputVarsNames_23);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (InnerFunStatement_27));
    }
    InnerFun_33 = (MR_Word) ((MR_Word) (Var_56));
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (InnerFun_33));
    }
    InputExprs_81 = erl_backend__elds__exprs_from_vars_1_f_0(InputVars_21);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CodeModel_11, Var_58, InputExprs_81, OutputVars_22, MaybeSuccessExpr_13, Statement_14);
    *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ArgVars_12,
  MR_Word CodeModel_13,
  MR_Word _Context_14,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(PredId_10, ProcId_11, ArgVars_12, CodeModel_13, MaybeSuccessExpr_15, Statement_16, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_98_117_105_108_116_105_110_95_95_91_53_93_95_48_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ArgVars_12,
  MR_Word CodeModel_13,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word VarTypes_19;
    MR_Word ModuleName_20;
    MR_String PredName_21;
    MR_Word SimpleCode_22;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_41, &ModuleInfo_18);
    erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_41, &VarTypes_19);
    ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_18, PredId_10);
    PredName_21 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_18, PredId_10);
    backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), ModuleName_20, PredName_21, ProcId_11, ArgVars_12, &SimpleCode_22);
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Lval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_22, (MR_Integer) 0))));
              MR_Word SimpleExpr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_22, (MR_Integer) 1))));
              MR_Word LvalType_25;
              MR_Word Var_59;

              hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Lval_23, &LvalType_25);
              Var_59 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_18, LvalType_25);
              succeeded = (Var_59 == (MR_Integer) 0);
              if (succeeded)
                *Statement_16 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_15);
              else
              {
                MR_Word Rval_26;
                MR_Word Assign_27;
                MR_Word Var_60;

                Rval_26 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(ModuleInfo_18, VarTypes_19, SimpleExpr_24);
                Var_60 = erl_backend__elds__expr_from_var_1_f_0(Lval_23);
                {
                  Assign_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Assign_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Assign_27, 1) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(3), Assign_27, 2) = ((MR_Box) (Rval_26));
                }
                *Statement_16 = erl_backend__elds__maybe_join_exprs_2_f_0(Assign_27, MaybeSuccessExpr_15);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "ref_assign not supported in Erlang backend");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
              return;
            }
            break;
          case (MR_Integer) 3:
            *Statement_16 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_15);
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
          return;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SimpleTest_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleCode_22, (MR_Integer) 0))));
              MR_Word TestRval_33;
              MR_Word TrueCase_34;
              MR_Word FalseCase_35;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;

              TestRval_33 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(ModuleInfo_18, VarTypes_19, SimpleTest_32);
              Var_50 = erl_backend__elds__elds_true_0_f_0();
              Var_51 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_15);
              {
                TrueCase_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TrueCase_34, 0) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(0), TrueCase_34, 1) = ((MR_Box) (Var_51));
              }
              Var_52 = erl_backend__elds__elds_false_0_f_0();
              Var_54 = erl_backend__elds__elds_fail_0_f_0();
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Var_54));
              }
              {
                FalseCase_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FalseCase_35, 0) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(0), FalseCase_35, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (FalseCase_35));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (TrueCase_34));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Statement_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TestRval_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_47));
              }
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word SimpleExpr_7)
{
  {
    MR_bool succeeded;
    MR_Word Expr_8;

    switch (MR_tag((MR_Word) SimpleExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleExpr_7, (MR_Integer) 0))));
          MR_Word Var_44;

          Var_44 = erl_backend__elds__elds_false_0_f_0();
          Expr_8 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(ModuleInfo_5, VarTypes_6, Var_44, Var_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Int_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SimpleExpr_7, (MR_Integer) 0))));
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (Int_10));
          }
          {
            Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned UInt_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SimpleExpr_7, (MR_Integer) 0))));
          MR_Word Var_42;

          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (UInt_11));
          }
          {
            Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_42));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int8_t Int8_12 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (MR_Word) (Int8_12));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_41));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_40;

              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (MR_Word) (UInt8_13));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              int16_t Int16_14 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (MR_Word) (Int16_14));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_39));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              uint16_t UInt16_15 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MR_Word) (UInt16_15));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_38));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_37;

              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MR_Word) (Int32_16));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              uint32_t UInt32_17 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_36;

              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (MR_Word) (UInt32_17));
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_36));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              int64_t Int64_18 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_35;

              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_35, 1) = MR_box_int64(Int64_18);
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_35));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              uint64_t UInt64_19 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Var_34, 1) = MR_box_uint64(UInt64_19);
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_34));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Float Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1)));
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_33, 1) = MR_box_float(Float_20);
              }
              {
                Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_33));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word StdOp_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1))));
              MR_Word Expr0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 2))));
              MR_Word Op_23;

              if ((StdOp_21 == (MR_Word) ((MR_Unsigned) 16U)))
              {
                Op_23 = (MR_Integer) 3;
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) StdOp_21)) == (MR_Integer) 1))
              {
                Op_23 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                MR_Word SimpleExpr1_24;

                SimpleExpr1_24 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(ModuleInfo_5, VarTypes_6, Expr0_22);
                {
                  Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Expr_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Expr_8, 1) = (MR_Box) ((MR_Unsigned) (Op_23));
                  MR_hl_field(MR_mktag(3), Expr_8, 2) = ((MR_Box) (SimpleExpr1_24));
                }
              }
              else
                mercury__require__sorry_2_p_0((MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "unary builtin not supported on erlang target");
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Expr1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 2))));
              MR_Word Expr2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 3))));
              MR_Word StdOp_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleExpr_7, (MR_Integer) 1))));
              MR_Word Op_46;

              switch (MR_tag((MR_Word) StdOp_48)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(StdOp_48)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        Op_46 = (MR_Integer) 17;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Op_46 = (MR_Integer) 18;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        Op_46 = (MR_Integer) 15;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        Op_46 = (MR_Integer) 16;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        Op_46 = (MR_Integer) 12;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        Op_46 = (MR_Integer) 14;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        Op_46 = (MR_Integer) 11;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        Op_46 = (MR_Integer) 13;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        Op_46 = (MR_Integer) 5;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        Op_46 = (MR_Integer) 6;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        Op_46 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        Op_46 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        Op_46 = (MR_Integer) 15;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        Op_46 = (MR_Integer) 16;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        Op_46 = (MR_Integer) 12;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        Op_46 = (MR_Integer) 14;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        Op_46 = (MR_Integer) 11;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        Op_46 = (MR_Integer) 13;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        Op_46 = (MR_Integer) 15;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 27:
                      {
                        Op_46 = (MR_Integer) 12;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Op_46 = (MR_Integer) 5;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Op_46 = (MR_Integer) 6;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdOp_48, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        Op_46 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Op_46 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        Op_46 = (MR_Integer) 3;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        Op_46 = (MR_Integer) 9;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        Op_46 = (MR_Integer) 10;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        Op_46 = (MR_Integer) 4;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        Op_46 = (MR_Integer) 7;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        Op_46 = (MR_Integer) 8;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        Op_46 = (MR_Integer) 15;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        Op_46 = (MR_Integer) 16;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        Op_46 = (MR_Integer) 15;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        Op_46 = (MR_Integer) 12;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        Op_46 = (MR_Integer) 14;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        Op_46 = (MR_Integer) 11;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        Op_46 = (MR_Integer) 13;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                MR_Word SimpleExpr2_27;
                MR_Word SimpleExpr1_45;

                SimpleExpr1_45 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(ModuleInfo_5, VarTypes_6, Expr1_25);
                SimpleExpr2_27 = erl_backend__erl_call_gen__erl_gen_simple_expr_3_f_0(ModuleInfo_5, VarTypes_6, Expr2_26);
                {
                  Expr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Expr_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), Expr_8, 1) = (MR_Box) ((MR_Unsigned) (Op_46));
                  MR_hl_field(MR_mktag(3), Expr_8, 2) = ((MR_Box) (SimpleExpr1_45));
                  MR_hl_field(MR_mktag(3), Expr_8, 3) = ((MR_Box) (SimpleExpr2_27));
                }
              }
              else
              {
                succeeded = (StdOp_48 == (MR_Word) ((MR_Unsigned) 100U));
                if (succeeded)
                {
                  MR_Word Var_28;

                  Var_28 = erl_backend__elds__elds_false_0_f_0();
                  {
                    Expr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Expr_8, 0) = ((MR_Box) (Var_28));
                  }
                }
                else
                  mercury__require__sorry_2_p_0((MR_String) "function \140erl_backend.erl_call_gen.erl_gen_simple_expr\'/3", (MR_String) "binary builtin not supported on erlang target");
              }
            }
            break;
        }
        break;
    }
    return Expr_8;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_cast_6_p_0(
  MR_Word _Context_7,
  MR_Word ArgVars_8,
  MR_Word MaybeSuccessExpr_9,
  MR_Word * Statement_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(ArgVars_8, MaybeSuccessExpr_9, Statement_10, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_115_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word ArgVars_8,
  MR_Word MaybeSuccessExpr_9,
  MR_Word * Statement_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypes_12;
    MR_Word SrcVar_13;
    MR_Word DestVar_14;
    MR_Word DestType_16;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_22, ArgVars_8, &ArgTypes_12);
    succeeded = (ArgVars_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SrcVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_8, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_8, (MR_Integer) 1))));
      succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DestVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
        succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (ArgTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_12, (MR_Integer) 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DestType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
              succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_17;
      MR_Word IsDummy_18;

      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_22, &ModuleInfo_17);
      IsDummy_18 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, DestType_16);
      switch (IsDummy_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Statement_10 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_9);
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarTypes_19;
            MR_Word SrcVarExpr_20;
            MR_Word Assign_21;
            MR_Word Var_28;
            MR_Word Type_35;
            MR_Word Var_36;

            erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_22, &VarTypes_19);
            succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_19, SrcVar_13, &Type_35);
            if (succeeded)
            {
              Var_36 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, Type_35);
              succeeded = (Var_36 == (MR_Integer) 0);
            }
            if (succeeded)
            {
              MR_Word Var_37;

              Var_37 = erl_backend__elds__elds_false_0_f_0();
              {
                SrcVarExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), SrcVarExpr_20, 0) = ((MR_Box) (Var_37));
              }
            }
            else
              SrcVarExpr_20 = erl_backend__elds__expr_from_var_1_f_0(SrcVar_13);
            Var_28 = erl_backend__elds__expr_from_var_1_f_0(DestVar_14);
            {
              Assign_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Assign_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Assign_21, 1) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(3), Assign_21, 2) = ((MR_Box) (SrcVarExpr_20));
            }
            *Statement_10 = erl_backend__elds__maybe_join_exprs_2_f_0(Assign_21, MaybeSuccessExpr_9);
          }
          break;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_call_gen.erl_gen_cast\'/6", (MR_String) "wrong number of args for cast");
        return;
      }
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(
  MR_Word GenericCall_10,
  MR_Word ArgVars_11,
  MR_Word Modes_12,
  MR_Word Detism_13,
  MR_Word _Context_14,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(GenericCall_10, ArgVars_11, Modes_12, Detism_13, MaybeSuccessExpr_15, Statement_16, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_8;

    conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Expr_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word GenericCall_10,
  MR_Word ArgVars_11,
  MR_Word Modes_12,
  MR_Word Detism_13,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_Word TCIVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_10, (MR_Integer) 0))));
    MR_Integer MethodNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCall_10, (MR_Integer) 1))));
    MR_Word BaseTCIVar_22;
    MR_Word MethodWrapperVar_23;
    MR_Word BaseTCIVarExpr_24;
    MR_Word MethodWrapperVarExpr_25;
    MR_Word ModuleInfo_26;
    MR_Word ArgTypes_27;
    MR_Word CallInputVars_28;
    MR_Word CallOutputVars_29;
    MR_Word ExtractBaseTypeclassInfo_31;
    MR_Integer MethodFieldNum_32;
    MR_Word ExtractMethodWrapper_33;
    MR_Word CallCodeModel_34;
    MR_Word CallTarget_35;
    MR_Word DoCall_36;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word Var_44;
    MR_Integer Var_45;
    MR_Integer Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word ModuleInfo_59;
    MR_Word VarTypes_60;
    MR_Word InputExprs_61;
    MR_Word Var_62;

    erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "BaseTypeClassInfo", &BaseTCIVar_22, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
    erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "MethodWrapper", &MethodWrapperVar_23, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
    BaseTCIVarExpr_24 = erl_backend__elds__expr_from_var_1_f_0(BaseTCIVar_22);
    MethodWrapperVarExpr_25 = erl_backend__elds__expr_from_var_1_f_0(MethodWrapperVar_23);
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_38, &ModuleInfo_26);
    erl_backend__erl_code_util__erl_variable_types_3_p_0(*STATE_VARIABLE_Info_38, ArgVars_11, &ArgTypes_27);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), ModuleInfo_26, (MR_Integer) 1, ArgVars_11, ArgTypes_27, Modes_12, &CallInputVars_28, &CallOutputVars_29);
    Var_44 = erl_backend__elds__elds_call_element_2_f_0(TCIVar_18, (MR_Integer) 1);
    {
      ExtractBaseTypeclassInfo_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ExtractBaseTypeclassInfo_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ExtractBaseTypeclassInfo_31, 1) = ((MR_Box) (BaseTCIVarExpr_24));
      MR_hl_field(MR_mktag(3), ExtractBaseTypeclassInfo_31, 2) = ((MR_Box) (Var_44));
    }
    Var_45 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) MethodNum_19);
    Var_47 = erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0();
    MethodFieldNum_32 = (MR_Integer) ((MR_Unsigned) Var_45 + (MR_Unsigned) Var_47);
    Var_48 = erl_backend__elds__elds_call_element_2_f_0(BaseTCIVar_22, MethodFieldNum_32);
    {
      ExtractMethodWrapper_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ExtractMethodWrapper_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ExtractMethodWrapper_33, 1) = ((MR_Box) (MethodWrapperVarExpr_25));
      MR_hl_field(MR_mktag(3), ExtractMethodWrapper_33, 2) = ((MR_Box) (Var_48));
    }
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_13, &CallCodeModel_34);
    {
      CallTarget_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallTarget_35, 0) = ((MR_Box) (MethodWrapperVarExpr_25));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TCIVar_18));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (CallInputVars_28));
    }
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_38, &ModuleInfo_59);
    erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(*STATE_VARIABLE_Info_38, &VarTypes_60);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_108_97_115_115_95_109_101_116_104_111_100_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ModuleInfo_59));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (VarTypes_60));
    }
    InputExprs_61 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_62, Var_49);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CallCodeModel_34, CallTarget_35, InputExprs_61, CallOutputVars_29, MaybeSuccessExpr_15, &DoCall_36);
    Var_50 = erl_backend__elds__join_exprs_2_f_0(ExtractMethodWrapper_33, DoCall_36);
    *Statement_16 = erl_backend__elds__join_exprs_2_f_0(ExtractBaseTypeclassInfo_31, Var_50);
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(
  MR_Word GenericCall_10,
  MR_Word ArgVars_11,
  MR_Word Modes_12,
  MR_Word Detism_13,
  MR_Word _Context_14,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(GenericCall_10, ArgVars_11, Modes_12, Detism_13, MaybeSuccessExpr_15, Statement_16, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_8;

    conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Expr_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0(
  MR_Word GenericCall_10,
  MR_Word ArgVars_11,
  MR_Word Modes_12,
  MR_Word Detism_13,
  MR_Word MaybeSuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word ClosureVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_10, (MR_Integer) 0))));
    MR_Word ModuleInfo_22;
    MR_Word ArgTypes_23;
    MR_Word InputVars_24;
    MR_Word OutputVars_25;
    MR_Word CallCodeModel_26;
    MR_Word CallTarget_27;
    MR_Word Var_31;
    MR_Word ModuleInfo_40;
    MR_Word VarTypes_41;
    MR_Word InputExprs_42;
    MR_Word Var_43;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_28, &ModuleInfo_22);
    erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_28, ArgVars_11, &ArgTypes_23);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), ModuleInfo_22, (MR_Integer) 1, ArgVars_11, ArgTypes_23, Modes_12, &InputVars_24, &OutputVars_25);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_13, &CallCodeModel_26);
    Var_31 = erl_backend__elds__expr_from_var_1_f_0(ClosureVar_18);
    {
      CallTarget_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallTarget_27, 0) = ((MR_Box) (Var_31));
    }
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_28, &ModuleInfo_40);
    erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_28, &VarTypes_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_97_108_108_95_95_91_53_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ModuleInfo_40));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (VarTypes_41));
    }
    InputExprs_42 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_43, InputVars_24);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CallCodeModel_26, CallTarget_27, InputExprs_42, OutputVars_25, MaybeSuccessExpr_15, Statement_16);
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_8;

    conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Expr_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0(
  MR_Word Info_8,
  MR_Word CodeModel_9,
  MR_Word CallTarget_10,
  MR_Word InputVars_11,
  MR_Word OutputVars_12,
  MR_Word MaybeSuccessExpr_13,
  MR_Word * Statement_14)
{
  {
    MR_Word ModuleInfo_15;
    MR_Word VarTypes_16;
    MR_Word InputExprs_17;
    MR_Word Var_18;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_15);
    erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(Info_8, &VarTypes_16);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (erl_backend__erl_call_gen__erl_make_call_replace_dummies_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleInfo_15));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (VarTypes_16));
    }
    InputExprs_17 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_18, InputVars_11);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CodeModel_9, CallTarget_10, InputExprs_17, OutputVars_12, MaybeSuccessExpr_13, Statement_14);
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_6_p_0(
  MR_Word CodeModel_7,
  MR_Word CallTarget_8,
  MR_Word InputVars_9,
  MR_Word OutputVars_10,
  MR_Word MaybeSuccessExpr_11,
  MR_Word * Statement_12)
{
  {
    MR_Word InputExprs_13;

    InputExprs_13 = erl_backend__elds__exprs_from_vars_1_f_0(InputVars_9);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CodeModel_7, CallTarget_8, InputExprs_13, OutputVars_10, MaybeSuccessExpr_11, Statement_12);
  }
}

void MR_CALL 
erl_backend__erl_call_gen__erl_gen_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word ArgVars_13,
  MR_Word _ActualArgTypes_14,
  MR_Word CodeModel_15,
  MR_Word _Context_16,
  MR_Word MaybeSuccessExpr_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(PredId_11, ProcId_12, ArgVars_13, CodeModel_15, MaybeSuccessExpr_17, Statement_18, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
}

static MR_Box MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_8;

    conv0_Expr_8 = erl_backend__erl_call_gen__var_to_expr_or_false_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Expr_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word ArgVars_13,
  MR_Word CodeModel_15,
  MR_Word MaybeSuccessExpr_17,
  MR_Word * Statement_18,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word ModuleInfo_20;
    MR_Word PredInfo_21;
    MR_Word ProcInfo_22;
    MR_Word CalleeTypes_23;
    MR_Word ArgModes_24;
    MR_Word InputVars_25;
    MR_Word OutputVars_26;
    MR_Word CallTarget_27;
    MR_Word Var_31;
    MR_Word ModuleInfo_40;
    MR_Word VarTypes_41;
    MR_Word InputExprs_42;
    MR_Word Var_43;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_28, &ModuleInfo_20);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_21, &ProcInfo_22);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &CalleeTypes_23);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &ArgModes_24);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), ModuleInfo_20, (MR_Integer) 0, ArgVars_13, CalleeTypes_23, ArgModes_24, &InputVars_25, &OutputVars_26);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ProcId_12));
    }
    {
      CallTarget_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallTarget_27, 0) = ((MR_Box) (Var_31));
    }
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_28, &ModuleInfo_40);
    erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_28, &VarTypes_41);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&erl_backend__erl_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (erl_backend__erl_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_97_108_108_95_95_91_52_44_32_54_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ModuleInfo_40));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (VarTypes_41));
    }
    InputExprs_42 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_43, InputVars_25);
    erl_backend__erl_call_gen__erl_make_call_2_6_p_0(CodeModel_15, CallTarget_27, InputExprs_42, OutputVars_26, MaybeSuccessExpr_17, Statement_18);
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
}

static void MR_CALL 
erl_backend__erl_call_gen__erl_make_call_2_6_p_0(
  MR_Word CodeModel_7,
  MR_Word CallTarget_8,
  MR_Word InputExprs_9,
  MR_Word OutputVars_10,
  MR_Word MaybeSuccessExpr_11,
  MR_Word * Statement_12)
{
  {
    MR_bool succeeded;

    switch (CodeModel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CallExpr_20;

          {
            CallExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CallExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), CallExpr_20, 1) = ((MR_Box) (CallTarget_8));
            MR_hl_field(MR_mktag(3), CallExpr_20, 2) = ((MR_Box) (InputExprs_9));
          }
          if ((OutputVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeSuccessExpr_11 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccessExpr_11, (MR_Integer) 0))));
              MR_Word Var_27;
              MR_Word Var_28;

              succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_26, (MR_Integer) 0))));
                Var_28 = erl_backend__elds__elds_empty_tuple_0_f_0();
                succeeded = erl_backend__elds____Unify____elds_term_0_0(Var_27, Var_28);
              }
            }
            if (succeeded)
              *Statement_12 = CallExpr_20;
            else
              *Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(CallExpr_20, MaybeSuccessExpr_11);
          }
          else
          {
            MR_Word UnpackTerm_23;
            MR_Word Var_25;
            MR_Word Var_29;

            Var_25 = erl_backend__elds__exprs_from_vars_1_f_0(OutputVars_10);
            UnpackTerm_23 = erl_backend__elds__tuple_or_single_expr_1_f_0(Var_25);
            succeeded = (MaybeSuccessExpr_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccessExpr_11, (MR_Integer) 0))));
              succeeded = erl_backend__elds____Unify____elds_expr_0_0(UnpackTerm_23, Var_29);
            }
            if (succeeded)
              *Statement_12 = CallExpr_20;
            else
            {
              MR_Word AssignCall_24;

              {
                AssignCall_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), AssignCall_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), AssignCall_24, 1) = ((MR_Box) (UnpackTerm_23));
                MR_hl_field(MR_mktag(3), AssignCall_24, 2) = ((MR_Box) (CallExpr_20));
              }
              *Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(AssignCall_24, MaybeSuccessExpr_11);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SuccessExpr_14;
          MR_Word SuccessCont_38;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word SuccessCont1_37;
          MR_Word TypeInfo_22_48;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_47;

          SuccessExpr_14 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_11);
          succeeded = ((((MR_tag((MR_Word) SuccessExpr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SuccessExpr_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SuccessExpr_14, (MR_Integer) 1))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SuccessExpr_14, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 1);
            if (succeeded)
            {
              SuccessCont1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
              Var_47 = erl_backend__elds__exprs_from_vars_1_f_0(OutputVars_10);
              TypeInfo_22_48 = (MR_Word) (&erl_backend__erl_call_gen_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_48, ((MR_Box) (Var_40)), ((MR_Box) (Var_47)));
            }
          }
          if (succeeded)
            SuccessCont_38 = SuccessCont1_37;
          else
          {
            MR_Word Var_41;
            MR_Word Var_42;

            Var_42 = erl_backend__elds__terms_from_vars_1_f_0(OutputVars_10);
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (SuccessExpr_14));
            }
            SuccessCont_38 = (MR_Word) ((MR_Word) (Var_41));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (SuccessCont_38));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), InputExprs_9, Var_44);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Statement_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CallTarget_8));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SuccessExpr_13;
          MR_Word CallExpr_54;
          MR_Word UnpackTerm_55;
          MR_Word Var_59;
          MR_Word Var_66;

          SuccessExpr_13 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_11);
          {
            CallExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CallExpr_54, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), CallExpr_54, 1) = ((MR_Box) (CallTarget_8));
            MR_hl_field(MR_mktag(3), CallExpr_54, 2) = ((MR_Box) (InputExprs_9));
          }
          Var_59 = erl_backend__elds__exprs_from_vars_1_f_0(OutputVars_10);
          {
            UnpackTerm_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnpackTerm_55, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), UnpackTerm_55, 1) = ((MR_Box) (Var_59));
          }
          succeeded = ((MR_tag((MR_Word) SuccessExpr_13)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SuccessExpr_13, (MR_Integer) 0))));
            succeeded = erl_backend__elds____Unify____elds_term_0_0(UnpackTerm_55, Var_66);
          }
          if (succeeded)
            *Statement_12 = CallExpr_54;
          else
          {
            MR_Word Statement0_56;
            MR_Word TrueCase_57;
            MR_Word FalseCase_58;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;

            {
              TrueCase_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TrueCase_57, 0) = ((MR_Box) (UnpackTerm_55));
              MR_hl_field(MR_mktag(0), TrueCase_57, 1) = ((MR_Box) (SuccessExpr_13));
            }
            Var_65 = erl_backend__elds__elds_fail_0_f_0();
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Var_65));
            }
            {
              FalseCase_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FalseCase_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FalseCase_58, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (FalseCase_58));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TrueCase_57));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Statement0_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Statement0_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Statement0_56, 1) = ((MR_Box) (CallExpr_54));
              MR_hl_field(MR_mktag(3), Statement0_56, 2) = ((MR_Box) (Var_60));
            }
            erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(Statement0_56, Statement_12);
          }
        }
        break;
    }
  }
}

void mercury__erl_backend__erl_call_gen__init(void)
{
}

void mercury__erl_backend__erl_call_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_call_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_call_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.erl_call_gen.
