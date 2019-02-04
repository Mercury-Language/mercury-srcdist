/*
** Automatically generated from `erl_unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-09-10
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


// :- module erl_backend.erl_unify_gen.
// :- implementation.

/*
INIT mercury__erl_backend__erl_unify_gen__init
ENDINIT
*/

#include "erl_backend.erl_unify_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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




static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__126__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__157__1_2_p_0(
  MR_Word MaybeSizeProfInfo_33,
  MR_Word HeadVar__2_59);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__151__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word ArgType_8,
  MR_Word ArgMode_9,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word SuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word ArgTypes_13,
  MR_Word ArgModes_14,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
  MR_Word ShroudedPredProcId_6,
  MR_Word CurriedArgs_7,
  MR_Word * FunExpr_8,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_1[3][2];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_2[2][8];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_3[2][1];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_4[3][5];

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_5[1][3];




static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_unify_gen_scalar_common_1[2])))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_unify_gen_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&erl_backend__erl_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__126__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__157__1_2_p_0(
  MR_Word MaybeSizeProfInfo_33,
  MR_Word HeadVar__2_59)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[0]), ((MR_Box) (MaybeSizeProfInfo_33)), ((MR_Box) (HeadVar__2_59)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__151__1_2_p_0(
  MR_Word CodeModel_9,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded = (CodeModel_9 == HeadVar__2_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__assign_free_var_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word ArgType_8,
  MR_Word ArgMode_9,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_Word RHSFromToInsts_11;
    MR_Word Var_13;
    MR_Word Var_14;

    *HeadVar__5_5 = erl_backend__elds__var_eq_false_1_f_0(Var_7);
    RHSFromToInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_9, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_6, RHSFromToInsts_11, ArgType_8, &Var_14);
    succeeded = ((MR_Integer) 0 == Var_14);
    if (succeeded)
    {
      Var_13 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, ArgType_8);
      succeeded = (Var_13 == (MR_Integer) 1);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(
  MR_Word Unification_8,
  MR_Word CodeModel_9,
  MR_Word Context_10,
  MR_Word MaybeSuccessExpr_11,
  MR_Word * Statement_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(Unification_8, CodeModel_9, MaybeSuccessExpr_11, Statement_12, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__126__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__157__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_unify_gen__IntroducedFrom__pred__erl_gen_unification__151__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0(
  MR_Word Unification_8,
  MR_Word CodeModel_9,
  MR_Word MaybeSuccessExpr_11,
  MR_Word * Statement_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 1))));
          MR_Word Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 2))));
          MR_Word ArgModes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 3))));
          MR_Word SubInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 6))));
          MR_Word Var_50;
          MR_Word ModuleInfo_82;
          MR_Word VarType_83;
          MR_Word IsDummy_84;
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 5)));

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (CodeModel_9));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_4_p_0(Var_50, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "construct not det");
          if (!((SubInfo_31 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word MaybeSizeProfInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_31, (MR_Integer) 1))));
            MR_Word Var_55;

            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (MaybeSizeProfInfo_33));
              MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_4_p_0(Var_55, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "term size profiling not yet supported");
          }
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_82);
          erl_backend__erl_code_util__erl_variable_type_3_p_0(STATE_VARIABLE_Info_0_43, Var_25, &VarType_83);
          IsDummy_84 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_82, VarType_83);
          switch (IsDummy_84) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Statement_12 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_11);
                *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgTypes_34;
                MR_Word Construct_35;

                erl_backend__erl_code_util__erl_variable_types_3_p_0(STATE_VARIABLE_Info_0_43, Args_27, &ArgTypes_34);
                erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(Var_25, ConsId_26, Args_27, ArgTypes_34, ArgModes_28, &Construct_35, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                *Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(Construct_35, MaybeSuccessExpr_11);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 0))));
          MR_Word ConsId_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 1))));
          MR_Word Args_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 4)));

          switch (CanFail_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SuccessExpr_38;

                SuccessExpr_38 = erl_backend__elds__det_expr_1_f_0(MaybeSuccessExpr_11);
                erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(Var_85, ConsId_86, Args_87, SuccessExpr_38, Statement_12, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Statement0_39;

                erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(Var_85, ConsId_86, Args_87, &Statement0_39, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                *Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(Statement0_39, MaybeSuccessExpr_11);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 0))));
          MR_Word SourceVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 1))));
          MR_Word ModuleInfo_16;
          MR_Word VarType_17;
          MR_Word IsDummy_18;

          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_16);
          erl_backend__erl_code_util__erl_variable_type_3_p_0(STATE_VARIABLE_Info_0_43, TargetVar_14, &VarType_17);
          IsDummy_18 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_17);
          switch (IsDummy_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Statement_12 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_11);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Assign_19;
                MR_Word Var_77;
                MR_Word Var_78;

                Var_77 = erl_backend__elds__expr_from_var_1_f_0(TargetVar_14);
                Var_78 = erl_backend__elds__expr_from_var_1_f_0(SourceVar_15);
                {
                  Assign_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Assign_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Assign_19, 1) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(3), Assign_19, 2) = ((MR_Box) (Var_78));
                }
                *Statement_12 = erl_backend__elds__maybe_join_exprs_2_f_0(Assign_19, MaybeSuccessExpr_11);
              }
              break;
          }
          *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 1))));
              MR_Word Var2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 2))));
              MR_Word Var_61;
              MR_Word ModuleInfo_79;
              MR_Word VarType_80;
              MR_Word IsDummy_81;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_7_p_0_3));
                MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (CodeModel_9));
                MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_4_p_0(Var_61, (MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "simple_test not semidet");
              erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_79);
              erl_backend__erl_code_util__erl_variable_type_3_p_0(STATE_VARIABLE_Info_0_43, Var1_20, &VarType_80);
              IsDummy_81 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_79, VarType_80);
              switch (IsDummy_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Statement_12 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_11);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Test_22;
                    MR_Word TrueCase_23;
                    MR_Word FalseCase_24;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;

                    Var_67 = erl_backend__elds__expr_from_var_1_f_0(Var1_20);
                    Var_68 = erl_backend__elds__expr_from_var_1_f_0(Var2_21);
                    {
                      Test_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Test_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Test_22, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), Test_22, 2) = ((MR_Box) (Var_67));
                      MR_hl_field(MR_mktag(3), Test_22, 3) = ((MR_Box) (Var_68));
                    }
                    Var_69 = erl_backend__elds__elds_true_0_f_0();
                    Var_70 = erl_backend__elds__expr_or_void_1_f_0(MaybeSuccessExpr_11);
                    {
                      TrueCase_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TrueCase_23, 0) = ((MR_Box) (Var_69));
                      MR_hl_field(MR_mktag(0), TrueCase_23, 1) = ((MR_Box) (Var_70));
                    }
                    Var_71 = erl_backend__elds__elds_false_0_f_0();
                    Var_73 = erl_backend__elds__elds_fail_0_f_0();
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Var_73));
                    }
                    {
                      FalseCase_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FalseCase_24, 0) = ((MR_Box) (Var_71));
                      MR_hl_field(MR_mktag(0), FalseCase_24, 1) = ((MR_Box) (Var_72));
                    }
                    {
                      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FalseCase_24));
                      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (TrueCase_23));
                      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Statement_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Test_22));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_74));
                    }
                  }
                  break;
              }
              *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_unification\'/7", (MR_String) "complicated unify");
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
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_101_109_105_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word SuccessExpr_15,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word Pattern_19;
    MR_Word SucceedCase_20;
    MR_Word FailCase_21;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Pattern0_18;
    MR_Word STATE_VARIABLE_Info_25_25;

    succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(ConsId_11, Args_12, (MR_Word) ((MR_Unsigned) 0U), &Pattern0_18, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_25_25);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_25_25;
      Pattern_19 = Pattern0_18;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.erl_gen_semidet_deconstruct\'/9", (MR_String) "undeconstructable object");
        return;
      }
    }
    {
      SucceedCase_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SucceedCase_20, 0) = ((MR_Box) (Pattern_19));
      MR_hl_field(MR_mktag(0), SucceedCase_20, 1) = ((MR_Box) (SuccessExpr_15));
    }
    Var_32 = erl_backend__elds__elds_fail_0_f_0();
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (Var_32));
    }
    {
      FailCase_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailCase_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FailCase_21, 1) = ((MR_Box) (Var_31));
    }
    Var_33 = erl_backend__elds__expr_from_var_1_f_0(Var_10);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (FailCase_21));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (SucceedCase_20));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Statement_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_34));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

MR_bool MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word DummyVarReplacement_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Word Functor_15;
              MR_Word ModuleInfo_16;
              MR_Word VarTypes_17;
              MR_Word TermArgs_18;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;

              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Name_12));
              }
              {
                Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Functor_15, 0) = ((MR_Box) (Var_35));
              }
              erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_16);
              erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_32, &VarTypes_17);
              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleInfo_16));
                MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (VarTypes_17));
                MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (DummyVarReplacement_9));
              }
              TermArgs_18 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_36, Args_8);
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_15));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (TermArgs_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_37));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleInfo_48;
              MR_Word VarTypes_49;
              MR_Word TermArgs_50;
              MR_Word Var_52;
              MR_Word Var_53;

              erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_48);
              erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_32, &VarTypes_49);
              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_48));
                MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (VarTypes_49));
                MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (DummyVarReplacement_9));
              }
              TermArgs_50 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_52, Args_8);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (TermArgs_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_53));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Int_19));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UInt_20));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8_21));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_22 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8_22));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_23 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16_23));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_24 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16_24));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_25 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32_25));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_26 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32_26));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_27 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64_27);
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_28 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64_28);
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(Float_29);
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_30));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String String_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (String_31));
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_53_93_95_48_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word * Statement_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word LHS_16;
    MR_Word Var_21;

    erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(ConsId_10, Args_11, (MR_Word) ((MR_Unsigned) 0U), &LHS_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    Var_21 = erl_backend__elds__expr_from_var_1_f_0(Var_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Statement_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LHS_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_21));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    succeeded = erl_backend__erl_unify_gen__assign_free_var_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word ArgTypes_13,
  MR_Word ArgModes_14,
  MR_Word * Statement_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word RHS_18;
    MR_Word Construct_19;
    MR_Word ModuleInfo_20;
    MR_Word AssignFreeVars_21;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;

    Var_26 = erl_backend__elds__elds_false_0_f_0();
    erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(ConsId_11, Args_12, Var_26, &RHS_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
    Var_28 = erl_backend__elds__expr_from_var_1_f_0(Var_10);
    {
      Construct_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Construct_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Construct_19, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(3), Construct_19, 2) = ((MR_Box) (RHS_18));
    }
    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_25, &ModuleInfo_20);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (erl_backend__erl_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_20));
    }
    AssignFreeVars_21 = mercury__list__filter_map_corresponding3_4_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_29, Args_12, ArgTypes_13, ArgModes_14);
    if ((AssignFreeVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *Statement_16 = Construct_19;
    else
    {
      MR_Word Var_30;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (AssignFreeVars_21));
      }
      *Statement_16 = erl_backend__elds__join_exprs_2_f_0(Var_30, Construct_19);
    }
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_expr_6_p_0(
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word DummyVarReplacement_9,
  MR_Word * Expr_10,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_67;
          MR_Word Var_68;

          Var_68 = erl_backend__elds__exprs_from_vars_1_f_0(Args_8);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Expr_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_67));
          }
          *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_67;
          MR_Word Var_68;

          Var_68 = erl_backend__elds__exprs_from_vars_1_f_0(Args_8);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Expr_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_67));
          }
          *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "tabling and deep profiling not supported on Erlang backend");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "tabling and deep profiling not supported on Erlang backend");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
            {
              MR_Word Term_29;

              erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(ConsId_7, Args_8, DummyVarReplacement_9, &Term_29, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Expr_10 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Term_29));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(ShroudedPredProcId_31, Args_8, Expr_10, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
            }
            break;
          case (MR_Integer) 18:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "impl_defined_const");
                return;
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ModuleName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_String TypeCtor_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
              MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_35;
              MR_Word RttiId_36;

              {
                RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 0) = ((MR_Box) (ModuleName_32));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 1) = ((MR_Box) (TypeCtor_33));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 2) = ((MR_Box) (Arity_34));
              }
              {
                RttiId_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_36, 0) = ((MR_Box) (RttiTypeCtor_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Expr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RttiId_36));
              }
              *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word InstanceModule_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Word ClassName_38;
              MR_String InstanceStr_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 4))));
              MR_Word ClassModuleName_42;
              MR_String ClassNameStr_43;
              MR_Word TCName_44;
              MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
              MR_Integer Arity_79;
              MR_Word RttiId_80;
              MR_Word ClassModuleName0_41;

              ClassName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
              Arity_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1))));
              succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(ClassName_38, &ClassModuleName0_41);
              if (succeeded)
                ClassModuleName_42 = ClassModuleName0_41;
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "class has no module name");
                  return;
                }
              }
              ClassNameStr_43 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_38);
              {
                TCName_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TCName_44, 0) = ((MR_Box) (ClassModuleName_42));
                MR_hl_field(MR_mktag(0), TCName_44, 1) = ((MR_Box) (ClassNameStr_43));
                MR_hl_field(MR_mktag(0), TCName_44, 2) = ((MR_Box) (Arity_79));
              }
              {
                RttiId_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RttiId_80, 0) = ((MR_Box) (TCName_44));
                MR_hl_field(MR_mktag(3), RttiId_80, 1) = ((MR_Box) (InstanceModule_37));
                MR_hl_field(MR_mktag(3), RttiId_80, 2) = ((MR_Box) (InstanceStr_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Expr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RttiId_80));
              }
              *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
            }
            break;
          case (MR_Integer) 21:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "type_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 22:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "typeclass_info_const");
                return;
              }
            }
            break;
          case (MR_Integer) 23:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_unify_gen", (MR_String) "predicate \140erl_backend.erl_unify_gen.cons_id_to_expr\'/6", (MR_String) "ground_term_const");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_unify_gen__pred_const_to_closure_5_p_0(
  MR_Word ShroudedPredProcId_6,
  MR_Word CurriedArgs_7,
  MR_Word * FunExpr_8,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word PredProcId_11;
    MR_Word PredInfo_12;
    MR_Word ProcInfo_13;
    MR_Word CalleeTypes_14;
    MR_Word ArgModes_15;
    MR_Word CodeModel_16;
    MR_Integer NumExtraVars_17;
    MR_Word AllExtraVars_18;
    MR_Word CurriedAndExtraArgs_19;
    MR_Word CallInputVars_20;
    MR_Word CallOutputVars_21;
    MR_Word OutputVarsInclDummy_23;
    MR_Word InputExtraVars_24;
    MR_Word OutputVarsInclDummyExprs_25;
    MR_Word ClosureInputArgs_26;
    MR_Word SuccessExpr0_27;
    MR_Word DummyOutputVars_29;
    MR_Word MaterialiseDummyOutputs_30;
    MR_Word SuccessExpr_31;
    MR_Word CallTarget_32;
    MR_Word DoCall_33;
    MR_Integer Var_36;
    MR_Integer Var_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word _InputVarsInclDummy_22;

    erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_10);
    PredProcId_11 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_6);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_10, PredProcId_11, &PredInfo_12, &ProcInfo_13);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_12, &CalleeTypes_14);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_13, &ArgModes_15);
    CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_13);
    Var_36 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), CalleeTypes_14);
    Var_37 = mercury__list__length_1_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), CurriedArgs_7);
    NumExtraVars_17 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) Var_37);
    erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(NumExtraVars_17, &AllExtraVars_18, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_38_38);
    CurriedAndExtraArgs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), CurriedArgs_7, AllExtraVars_18);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), ModuleInfo_10, (MR_Integer) 0, CurriedAndExtraArgs_19, CalleeTypes_14, ArgModes_15, &CallInputVars_20, &CallOutputVars_21);
    erl_backend__erl_code_util__erl_gen_arg_list_7_p_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), ModuleInfo_10, (MR_Integer) 1, CurriedAndExtraArgs_19, CalleeTypes_14, ArgModes_15, &_InputVarsInclDummy_22, &OutputVarsInclDummy_23);
    InputExtraVars_24 = mercury__list__delete_elems_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), AllExtraVars_18, OutputVarsInclDummy_23);
    OutputVarsInclDummyExprs_25 = erl_backend__elds__exprs_from_vars_1_f_0(OutputVarsInclDummy_23);
    switch (CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ClosureInputArgs_26 = InputExtraVars_24;
          SuccessExpr0_27 = erl_backend__elds__tuple_or_single_expr_1_f_0(OutputVarsInclDummyExprs_25);
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SucceedVar_28;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_46;

          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Succeed", &SucceedVar_28, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_35);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (SucceedVar_28));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ClosureInputArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), InputExtraVars_24, Var_43);
          Var_46 = erl_backend__elds__expr_from_var_1_f_0(SucceedVar_28);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
          }
          {
            SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SuccessExpr0_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), SuccessExpr0_27, 1) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(3), SuccessExpr0_27, 2) = ((MR_Box) (OutputVarsInclDummyExprs_25));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_47;

          ClosureInputArgs_26 = InputExtraVars_24;
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (OutputVarsInclDummyExprs_25));
          }
          {
            SuccessExpr0_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SuccessExpr0_27, 0) = ((MR_Box) (Var_47));
          }
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_38_38;
        }
        break;
    }
    DummyOutputVars_29 = mercury__list__delete_elems_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), OutputVarsInclDummy_23, CallOutputVars_21);
    MaterialiseDummyOutputs_30 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_unify_gen_scalar_common_5[0]), DummyOutputVars_29);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MaterialiseDummyOutputs_30));
    }
    SuccessExpr_31 = erl_backend__elds__join_exprs_2_f_0(Var_49, SuccessExpr0_27);
    {
      CallTarget_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallTarget_32, 0) = ((MR_Box) (PredProcId_11));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (SuccessExpr_31));
    }
    erl_backend__erl_call_gen__erl_make_call_6_p_0(CodeModel_16, CallTarget_32, CallInputVars_20, CallOutputVars_21, Var_50, &DoCall_33);
    Var_52 = erl_backend__elds__terms_from_vars_1_f_0(ClosureInputArgs_26);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (DoCall_33));
    }
    *FunExpr_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Var_51)));
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    conv1_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    conv0_HeadVar__5_5 = erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_unify_gen__cons_id_to_term_6_p_1(
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word DummyVarReplacement_9,
  MR_Word * Term_10,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
          MR_Word Functor_15;
          MR_Word ModuleInfo_16;
          MR_Word VarTypes_17;
          MR_Word TermArgs_18;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Name_12));
          }
          {
            Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Functor_15, 0) = ((MR_Box) (Var_35));
          }
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_16);
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_32, &VarTypes_17);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_1));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleInfo_16));
            MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (VarTypes_17));
            MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (DummyVarReplacement_9));
          }
          TermArgs_18 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_36, Args_8);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Functor_15));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (TermArgs_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_37));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ModuleInfo_48;
          MR_Word VarTypes_49;
          MR_Word TermArgs_50;
          MR_Word Var_52;
          MR_Word Var_53;

          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_48);
          erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_32, &VarTypes_49);
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&erl_backend__erl_unify_gen_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (erl_backend__erl_unify_gen__cons_id_to_term_6_p_1_2));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_48));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (VarTypes_49));
            MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (DummyVarReplacement_9));
          }
          TermArgs_50 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_unify_gen_scalar_common_1[1]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_52, Args_8);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_unify_gen_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (TermArgs_50));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_53));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Int_19));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Unsigned UInt_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UInt_20));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8_21));
          }
        }
        break;
      case (MR_Integer) 8:
        {
          uint8_t UInt8_22 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8_22));
          }
        }
        break;
      case (MR_Integer) 9:
        {
          int16_t Int16_23 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16_23));
          }
        }
        break;
      case (MR_Integer) 10:
        {
          uint16_t UInt16_24 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16_24));
          }
        }
        break;
      case (MR_Integer) 11:
        {
          int32_t Int32_25 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32_25));
          }
        }
        break;
      case (MR_Integer) 12:
        {
          uint32_t UInt32_26 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32_26));
          }
        }
        break;
      case (MR_Integer) 13:
        {
          int64_t Int64_27 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64_27);
          }
        }
        break;
      case (MR_Integer) 14:
        {
          uint64_t UInt64_28 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64_28);
          }
        }
        break;
      case (MR_Integer) 15:
        {
          MR_Float Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(Float_29);
          }
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Char Char_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_30));
          }
        }
        break;
      case (MR_Integer) 17:
        {
          MR_String String_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Term_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (String_31));
          }
        }
        break;
    }
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
  }
}

void mercury__erl_backend__erl_unify_gen__init(void)
{
}

void mercury__erl_backend__erl_unify_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.erl_unify_gen.
