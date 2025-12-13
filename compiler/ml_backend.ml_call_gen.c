/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2025-12-13
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


// :- module ml_backend.ml_call_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_call_gen__init
ENDINIT
*/

#include "ml_backend.ml_call_gen.mih"


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
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_EnumFunctorDesc ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_ordinal_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_name_ordered_may_yield_dangling_stack_ref_0[2];

static const MR_Integer ml_backend__ml_call_gen__ml_backend__ml_call_gen__functor_number_map_may_yield_dangling_stack_ref_0[2];

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__387__1_2_p_0(
  MR_Word ConvOutputStmts_30,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__386__1_2_p_0(
  MR_Word ConvOutputDefns_29,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__385__1_2_p_0(
  MR_Word OutputLvalsTypes_28,
  MR_Word HeadVar__2_69);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__267__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_122,
  MR_Word * LambdaHeadVar__2_123,
  MR_Word * LambdaHeadVar__3_124,
  MR_Word LambdaHeadVar__4_125,
  MR_Word * LambdaHeadVar__5_126);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68,
  MR_Word * LambdaHeadVar__3_69,
  MR_Word LambdaHeadVar__4_70,
  MR_Word * LambdaHeadVar__5_71);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68,
  MR_Word * LambdaHeadVar__3_69,
  MR_Word LambdaHeadVar__4_70,
  MR_Word * LambdaHeadVar__5_71);

static void MR_CALL 
ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_assigned_expr_1_f_0(
  MR_Word AssignedExpr_3);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0(
  MR_Word CalleePredProcId_11,
  MR_Word CodeModel_12,
  MR_Word Context_13,
  MR_Word ArgVars_14,
  MR_Word Features_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
ml_backend__ml_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_105_108_95_114_101_99_95_99_97_108_108_95_97_115_115_105_103_110_95_105_110_112_117_116_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__may_rvals_yield_dangling_stack_ref_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word Rval_3);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(
  MR_Word GenericCall_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Determinism_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(
  MR_Word Signature_12,
  MR_Word FuncRval_13,
  MR_Word ArgRvals0_14,
  MR_Word RetLvalsTypes0_15,
  MR_Word Detism_16,
  MR_Word Context_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[3][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][14];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[3][5];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_call_gen_scalar_common_3[0])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_call_gen_scalar_common_3[3])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_1[5]))) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_1[6]))) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "direct tailcall eliminated")) },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0) }
};

static const MR_EnumFunctorDesc ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
  (MR_String) "may_yield_dangling_stack_ref",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
  (MR_String) "will_not_yield_dangling_stack_ref",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_ordinal_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_name_ordered_may_yield_dangling_stack_ref_0[2] = {
  &ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
  &ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

static const MR_Integer ml_backend__ml_call_gen__ml_backend__ml_call_gen__functor_number_map_may_yield_dangling_stack_ref_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_call_gen__ml_backend__ml_call_gen__type_ctor_info_may_yield_dangling_stack_ref_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0_10001)),
  ((MR_Box) (ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0_10001)),
  (MR_String) "ml_backend.ml_call_gen",
  (MR_String) "may_yield_dangling_stack_ref",
  { ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_name_ordered_may_yield_dangling_stack_ref_0 },
  { ml_backend__ml_call_gen__ml_backend__ml_call_gen__enum_ordinal_ordered_may_yield_dangling_stack_ref_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_call_gen__ml_backend__ml_call_gen__functor_number_map_may_yield_dangling_stack_ref_0,

};

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__387__1_2_p_0(
  MR_Word ConvOutputStmts_30,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_call_gen_scalar_common_1[3]), ((MR_Box) (ConvOutputStmts_30)), ((MR_Box) (HeadVar__2_77)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__386__1_2_p_0(
  MR_Word ConvOutputDefns_29,
  MR_Word HeadVar__2_73)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_call_gen_scalar_common_1[2]), ((MR_Box) (ConvOutputDefns_29)), ((MR_Box) (HeadVar__2_73)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__385__1_2_p_0(
  MR_Word OutputLvalsTypes_28,
  MR_Word HeadVar__2_69)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_call_gen_scalar_common_1[1]), ((MR_Box) (OutputLvalsTypes_28)), ((MR_Box) (HeadVar__2_69)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__267__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_122,
  MR_Word * LambdaHeadVar__2_123,
  MR_Word * LambdaHeadVar__3_124,
  MR_Word LambdaHeadVar__4_125,
  MR_Word * LambdaHeadVar__5_126)
{
  MR_Word SucceedStmts_78;

  *LambdaHeadVar__1_122 = (MR_Word) ((MR_Unsigned) 0U);
  *LambdaHeadVar__2_123 = (MR_Word) ((MR_Unsigned) 0U);
  ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_26, Context_15, &SucceedStmts_78, LambdaHeadVar__4_125, LambdaHeadVar__5_126);
  *LambdaHeadVar__3_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvOutputStmts_67, SucceedStmts_78);
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68,
  MR_Word * LambdaHeadVar__3_69,
  MR_Word LambdaHeadVar__4_70,
  MR_Word * LambdaHeadVar__5_71)
{
  MR_Word SucceedStmts_44;

  *LambdaHeadVar__1_67 = (MR_Word) ((MR_Unsigned) 0U);
  *LambdaHeadVar__2_68 = (MR_Word) ((MR_Unsigned) 0U);
  ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_44, LambdaHeadVar__4_70, LambdaHeadVar__5_71);
  *LambdaHeadVar__3_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvOutputStmts_36, SucceedStmts_44);
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68,
  MR_Word * LambdaHeadVar__3_69,
  MR_Word LambdaHeadVar__4_70,
  MR_Word * LambdaHeadVar__5_71)
{
  MR_Word SucceedStmts_44;

  *LambdaHeadVar__1_67 = (MR_Word) ((MR_Unsigned) 0U);
  *LambdaHeadVar__2_68 = (MR_Word) ((MR_Unsigned) 0U);
  ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_44, LambdaHeadVar__4_70, LambdaHeadVar__5_71);
  *LambdaHeadVar__3_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvOutputStmts_36, SucceedStmts_44);
}

static void MR_CALL 
ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_builtin_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word ArgVars_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  MR_bool succeeded;
  MR_Word ArgLvals_20;
  MR_Word ModuleInfo_21;
  MR_Word ModuleName_22;
  MR_String PredName_23;
  MR_Word SimpleCode_24;

  ml_backend__ml_code_util__ml_gen_var_direct_list_3_p_0(STATE_VARIABLE_Info_0_49, ArgVars_13, &ArgLvals_20);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_21);
  ModuleName_22 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_21, PredId_11);
  PredName_23 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_21, PredId_11);
  backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), ModuleName_22, PredName_23, ProcId_12, ArgLvals_20, &SimpleCode_24);
  switch (CodeModel_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) SimpleCode_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Lval_25 = ((MR_Word) ((MR_hl_field(0, SimpleCode_24, 0))));
              MR_Word SimpleAssignedExpr_26 = ((MR_Word) ((MR_hl_field(0, SimpleCode_24, 1))));
              MR_Word VarType_28;
              MR_Word ProgDataType_29;
              MR_Word Var_51;

              succeeded = ((((MR_tag((MR_Word) Lval_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_25, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                VarType_28 = ((MR_Word) ((MR_hl_field(3, Lval_25, 2))));
                succeeded = ((((MR_tag((MR_Word) VarType_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, VarType_28, 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ProgDataType_29 = ((MR_Word) ((MR_hl_field(3, VarType_28, 1))));
                  Var_51 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_21, ProgDataType_29);
                  succeeded = (Var_51 == (MR_Integer) 0);
                }
              }
              if (succeeded)
                *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word Rval_31;
                MR_Word Stmt_32;

                Rval_31 = ml_backend__ml_call_gen__ml_gen_simple_assigned_expr_1_f_0(SimpleAssignedExpr_26);
                Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(Lval_25, Rval_31, Context_15);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_18 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_32));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AddrLval_33 = ((MR_Word) ((MR_hl_field(1, SimpleCode_24, 0))));
              MR_Word ValueLval_34 = ((MR_Word) ((MR_hl_field(1, SimpleCode_24, 1))));
              MR_Word ValueType_36;

              succeeded = ((((MR_tag((MR_Word) ValueLval_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ValueLval_34, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ValueType_36 = ((MR_Word) ((MR_hl_field(3, ValueLval_34, 2))));
                {
                  MR_Word Var_53;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Stmt_69;

                  {
                    Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_54, 0) = ((MR_Box) (AddrLval_33));
                  }
                  {
                    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(1, Var_53, 1) = ((MR_Box) (ValueType_36));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_55, 0) = ((MR_Box) (ValueLval_34));
                  }
                  Stmt_69 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(Var_53, Var_55, Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_69));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed ref_assign");
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_det builtin predicate");
              return;
            }
            break;
          case (MR_Integer) 3:
            *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "model_non builtin predicate");
        return;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) SimpleCode_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SimpleTest_39 = ((MR_Word) ((MR_hl_field(2, SimpleCode_24, 0))));
            MR_Word BinOp_40 = ((MR_Word) ((MR_hl_field(0, SimpleTest_39, 0))));
            MR_Word LvalX_41 = ((MR_Word) ((MR_hl_field(0, SimpleTest_39, 1))));
            MR_Word LvalY_42 = ((MR_Word) ((MR_hl_field(0, SimpleTest_39, 2))));
            MR_Word TestRval_43;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Stmt_72;

            {
              Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_61, 0) = ((MR_Box) (LvalX_41));
            }
            {
              Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_62, 0) = ((MR_Box) (LvalY_42));
            }
            {
              TestRval_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TestRval_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, TestRval_43, 1) = ((MR_Box) (BinOp_40));
              MR_hl_field(3, TestRval_43, 2) = ((MR_Box) (Var_61));
              MR_hl_field(3, TestRval_43, 3) = ((MR_Box) (Var_62));
            }
            ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TestRval_43, Context_15, &Stmt_72, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_72));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
  *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
  *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_assigned_expr_1_f_0(
  MR_Word AssignedExpr_3)
{
  MR_Word Rval_4;

  switch (MR_tag((MR_Word) AssignedExpr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(0, AssignedExpr_3, 0))));

        {
          Rval_4 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Rval_4, 0) = ((MR_Box) (Lval_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Const_6 = ((MR_Word) ((MR_hl_field(1, AssignedExpr_3, 0))));

        switch (MR_tag((MR_Word) Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_42 = ((MR_Integer) ((MR_hl_field(0, Const_6, 0))));
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_43, 0) = ((MR_Box) (Int_42));
              }
              {
                Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned UInt_52 = ((MR_Unsigned) ((MR_hl_field(1, Const_6, 0))));
              MR_Word Var_53;

              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (UInt_52));
              }
              {
                Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_53));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              int8_t Int8_44 = ((int8_t) (MR_Word) (MR_hl_field(2, Const_6, 0)));
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_45, 1) = ((MR_Box) (MR_Word) (Int8_44));
              }
              {
                Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Const_6, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  uint8_t UInt8_54 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_55;

                  {
                    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_55, 1) = ((MR_Box) (MR_Word) (UInt8_54));
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_55));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  int16_t Int16_46 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_47;

                  {
                    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_47, 1) = ((MR_Box) (MR_Word) (Int16_46));
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_47));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  uint16_t UInt16_56 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_57;

                  {
                    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Var_57, 1) = ((MR_Box) (MR_Word) (UInt16_56));
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_57));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  int32_t Int32_48 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_49;

                  {
                    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Var_49, 1) = ((MR_Box) (MR_Word) (Int32_48));
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_49));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  uint32_t UInt32_58 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_59;

                  {
                    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_59, 1) = ((MR_Box) (MR_Word) (UInt32_58));
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_59));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  int64_t Int64_50 = MR_unbox_int64((MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_51;

                  {
                    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Var_51, 1) = MR_box_int64(Int64_50);
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_51));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  uint64_t UInt64_60 = MR_unbox_uint64((MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_61;

                  {
                    Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Var_61, 1) = MR_box_uint64(UInt64_60);
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_61));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Float Float_62 = MR_unbox_float((MR_hl_field(3, Const_6, 1)));
                  MR_Word Var_63;

                  {
                    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(3, Var_63, 1) = MR_box_float(Float_62);
                  }
                  {
                    Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Rval_4, 1) = ((MR_Box) (Var_63));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BinOp_7 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_3, 0))));
        MR_Word LvalX_8 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_3, 1))));
        MR_Word LvalY_9 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_3, 2))));
        MR_Word Var_11;
        MR_Word Var_12;

        {
          Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_11, 0) = ((MR_Box) (LvalX_8));
        }
        {
          Var_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_12, 0) = ((MR_Box) (LvalY_9));
        }
        {
          Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Rval_4, 1) = ((MR_Box) (BinOp_7));
          MR_hl_field(3, Rval_4, 2) = ((MR_Box) (Var_11));
          MR_hl_field(3, Rval_4, 3) = ((MR_Box) (Var_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AssignedExpr_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13;
            MR_Word Var_14;
            MR_Word Const_16 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_3, 2))));
            MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_3, 1))));
            MR_Word LvalY_18 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_3, 3))));

            switch (MR_tag((MR_Word) Const_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_20 = ((MR_Integer) ((MR_hl_field(0, Const_16, 0))));
                  MR_Word Var_21;

                  {
                    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_21, 0) = ((MR_Box) (Int_20));
                  }
                  {
                    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_21));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_30 = ((MR_Unsigned) ((MR_hl_field(1, Const_16, 0))));
                  MR_Word Var_31;

                  {
                    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_31, 1) = ((MR_Box) (UInt_30));
                  }
                  {
                    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_31));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_22 = ((int8_t) (MR_Word) (MR_hl_field(2, Const_16, 0)));
                  MR_Word Var_23;

                  {
                    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_23, 1) = ((MR_Box) (MR_Word) (Int8_22));
                  }
                  {
                    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_23));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Const_16, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_32 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_33;

                      {
                        Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_33, 1) = ((MR_Box) (MR_Word) (UInt8_32));
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_33));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_24 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_25;

                      {
                        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, Var_25, 1) = ((MR_Box) (MR_Word) (Int16_24));
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_25));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_34 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_35;

                      {
                        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Var_35, 1) = ((MR_Box) (MR_Word) (UInt16_34));
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_35));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_26 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_27;

                      {
                        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, Var_27, 1) = ((MR_Box) (MR_Word) (Int32_26));
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_27));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_36 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_37;

                      {
                        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, Var_37, 1) = ((MR_Box) (MR_Word) (UInt32_36));
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_37));
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_28 = MR_unbox_int64((MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_29;

                      {
                        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                        MR_hl_field(3, Var_29, 1) = MR_box_int64(Int64_28);
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_29));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_38 = MR_unbox_uint64((MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_39;

                      {
                        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                        MR_hl_field(3, Var_39, 1) = MR_box_uint64(UInt64_38);
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_39));
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Float Float_40 = MR_unbox_float((MR_hl_field(3, Const_16, 1)));
                      MR_Word Var_41;

                      {
                        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                        MR_hl_field(3, Var_41, 1) = MR_box_float(Float_40);
                      }
                      {
                        Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_41));
                      }
                    }
                    break;
                }
                break;
            }
            {
              Var_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_14, 0) = ((MR_Box) (LvalY_18));
            }
            {
              Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Rval_4, 1) = ((MR_Box) (BinOp_17));
              MR_hl_field(3, Rval_4, 2) = ((MR_Box) (Var_13));
              MR_hl_field(3, Rval_4, 3) = ((MR_Box) (Var_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnOp_10 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_3, 1))));
            MR_Word Var_15;
            MR_Word LvalX_19 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_3, 2))));

            {
              Var_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_15, 0) = ((MR_Box) (LvalX_19));
            }
            {
              Rval_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_4, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Rval_4, 1) = ((MR_Box) (UnOp_10));
              MR_hl_field(3, Rval_4, 2) = ((MR_Box) (Var_15));
            }
          }
          break;
      }
      break;
  }
  return Rval_4;
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__1_67;
  MR_Word conv6_LambdaHeadVar__2_68;
  MR_Word conv5_LambdaHeadVar__3_69;
  MR_Word conv4_LambdaHeadVar__5_71;

  ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), &conv7_LambdaHeadVar__1_67, &conv6_LambdaHeadVar__2_68, &conv5_LambdaHeadVar__3_69, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_71);
  *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_67));
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_68));
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_69));
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_71));
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LocalVarDefns_18;
  MR_Word conv2_FuncDefns_19;
  MR_Word conv1_Stmts_20;
  MR_Word conv0_STATE_VARIABLE_Info_35;

  ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_35);
  *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
  *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
  *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1(
  MR_Word CalleePredProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word CallerArgs_15,
  MR_Word NonTailCallReason_16,
  MR_Word Features_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word Params_24;
  MR_Word Signature_25;
  MR_Word _FuncProcLabel_26;
  MR_Word FuncRval_27;
  MR_Word PredInfo_28;
  MR_Word ProcInfo_29;
  MR_Word PredOrFunc_30;
  MR_Word CalleeArgTypes_31;
  MR_Word CalleeArgModes_32;
  MR_Word InputRvals_33;
  MR_Word OutputLvalsTypes_34;
  MR_Word ConvOutputDefns_35;
  MR_Word ConvOutputStmts_36;
  MR_Word Detism_37;
  MR_Word TailRecInfo0_48;
  MR_Word InSccMap0_49;
  MR_Word STATE_VARIABLE_Info_1_63;
  MR_Word STATE_VARIABLE_Info_2_65;
  MR_Word STATE_VARIABLE_Info_3_66;
  MR_Word ModuleInfo_106;
  MR_Word PredLabel_107;
  MR_Word PredModule_108;
  MR_Word Params_110;
  MR_Word Signature_113;
  MR_Integer ProcId_115;
  MR_Word FuncLabel_116;
  MR_Word QualFuncLabel_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word _ArgTuples_23;
  MR_Word _ArgTuples_109;
  MR_Word _ByRefOutputVars_111;
  MR_Word _CopiedOutputVars_112;
  MR_Word InSccInfo0_50;
  MR_Box conv8_InSccInfo0_50;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_22);
  ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_22, CalleePredProcId_12, &_ArgTuples_23, &Params_24);
  Signature_25 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_24);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_106);
  ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_106, CalleePredProcId_12, &PredLabel_107, &PredModule_108);
  ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(CalleePredProcId_12, &_ArgTuples_109, &Params_110, &_ByRefOutputVars_111, &_CopiedOutputVars_112, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_1_63);
  Signature_113 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_110);
  ProcId_115 = ((MR_Integer) ((MR_hl_field(0, CalleePredProcId_12, 1))));
  {
    _FuncProcLabel_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, _FuncProcLabel_26, 0) = ((MR_Box) (PredLabel_107));
    MR_hl_field(0, _FuncProcLabel_26, 1) = ((MR_Box) (ProcId_115));
  }
  {
    FuncLabel_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_116, 0) = ((MR_Box) (_FuncProcLabel_26));
    MR_hl_field(0, FuncLabel_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    QualFuncLabel_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncLabel_117, 0) = ((MR_Box) (PredModule_108));
    MR_hl_field(0, QualFuncLabel_117, 1) = ((MR_Box) (FuncLabel_116));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (QualFuncLabel_117));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (Signature_113));
  }
  Var_119 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_120)));
  {
    FuncRval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FuncRval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, FuncRval_27, 1) = ((MR_Box) (Var_119));
  }
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_22, CalleePredProcId_12, &PredInfo_28, &ProcInfo_29);
  PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_28);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_28, &CalleeArgTypes_31);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_29, &CalleeArgModes_32);
  ml_backend__ml_args_util__ml_gen_args_13_p_1(PredOrFunc_30, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_31, CalleeArgModes_32, CallerArgs_15, &InputRvals_33, &OutputLvalsTypes_34, &ConvOutputDefns_35, &ConvOutputStmts_36, STATE_VARIABLE_Info_1_63, &STATE_VARIABLE_Info_2_65);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_29, &Detism_37);
  succeeded = (ConvOutputDefns_35 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ConvOutputStmts_36 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_25, FuncRval_27, InputRvals_33, OutputLvalsTypes_34, Detism_37, Context_14, LocalVarDefns_18, FuncDefns_19, Stmts_20, STATE_VARIABLE_Info_2_65, &STATE_VARIABLE_Info_3_66);
  else
  {
    MR_Word DoGenCall_38;
    MR_Word DoGenConvOutputAndSucceed_39;
    MR_Word CallAndConvOutputLocalVarDefns_45;

    {
      DoGenCall_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenCall_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
      MR_hl_field(0, DoGenCall_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_1));
      MR_hl_field(0, DoGenCall_38, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, DoGenCall_38, 3) = ((MR_Box) (Signature_25));
      MR_hl_field(0, DoGenCall_38, 4) = ((MR_Box) (FuncRval_27));
      MR_hl_field(0, DoGenCall_38, 5) = ((MR_Box) (InputRvals_33));
      MR_hl_field(0, DoGenCall_38, 6) = ((MR_Box) (OutputLvalsTypes_34));
      MR_hl_field(0, DoGenCall_38, 7) = ((MR_Box) (Detism_37));
      MR_hl_field(0, DoGenCall_38, 8) = ((MR_Box) (Context_14));
    }
    {
      DoGenConvOutputAndSucceed_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1_2));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 3) = ((MR_Box) (CodeModel_13));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 4) = ((MR_Box) (Context_14));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 5) = ((MR_Box) (ConvOutputStmts_36));
    }
    ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_38, DoGenConvOutputAndSucceed_39, &CallAndConvOutputLocalVarDefns_45, FuncDefns_19, Stmts_20, STATE_VARIABLE_Info_2_65, &STATE_VARIABLE_Info_3_66);
    *LocalVarDefns_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvOutputDefns_35, CallAndConvOutputLocalVarDefns_45);
  }
  ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_3_66, &TailRecInfo0_48);
  InSccMap0_49 = ((MR_Word) ((MR_hl_field(0, TailRecInfo0_48, 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), InSccMap0_49, ((MR_Box) (CalleePredProcId_12)), &conv8_InSccInfo0_50);
  if (succeeded)
  {
    InSccInfo0_50 = ((MR_Word) (conv8_InSccInfo0_50));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word CallerPredProcId_51;
    MR_Word Warnings_52;
    MR_Word Status_53;
    MR_Word Obviousness_54;
    MR_Word NonTailRecCall_55;
    MR_Word NonTailRecCalls0_56;
    MR_Word NonTailRecCalls_57;
    MR_Word InSccInfo_58;
    MR_Word InSccMap_59;
    MR_Word TailRecInfo_60;
    MR_Word Var_83;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;

    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_3_66, &CallerPredProcId_51);
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(STATE_VARIABLE_Info_3_66, &Warnings_52);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_52, ((MR_Box) ((MR_Integer) 3)));
    if (succeeded)
      Status_53 = (MR_Integer) 0;
    else
      Status_53 = (MR_Integer) 1;
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), Features_17, ((MR_Box) ((MR_Integer) 13)));
    if (succeeded)
      Obviousness_54 = (MR_Integer) 1;
    else
      Obviousness_54 = (MR_Integer) 0;
    {
      NonTailRecCall_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NonTailRecCall_55, 0) = ((MR_Box) (CallerPredProcId_51));
      MR_hl_field(0, NonTailRecCall_55, 1) = ((MR_Box) (CalleePredProcId_12));
      MR_hl_field(0, NonTailRecCall_55, 2) = ((MR_Box) (Context_14));
      MR_hl_field(0, NonTailRecCall_55, 3) = (MR_Box) (((((MR_Unsigned) (NonTailCallReason_16) << 2)) | (((((MR_Unsigned) (Obviousness_54) << 1)) | (MR_Unsigned) (Status_53)))));
    }
    Var_83 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_50, 0))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, InSccInfo0_50, 1)));
    NonTailRecCalls0_56 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_50, 2))));
    {
      NonTailRecCalls_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NonTailRecCalls_57, 0) = ((MR_Box) (NonTailRecCall_55));
      MR_hl_field(1, NonTailRecCalls_57, 1) = ((MR_Box) (NonTailRecCalls0_56));
    }
    {
      InSccInfo_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InSccInfo_58, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, InSccInfo_58, 1) = (MR_Box) (packed_word_0);
      MR_hl_field(0, InSccInfo_58, 2) = ((MR_Box) (NonTailRecCalls_57));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (CalleePredProcId_12)), ((MR_Box) (InSccInfo_58)), InSccMap0_49, &InSccMap_59);
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_48, 1)));
    {
      TailRecInfo_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TailRecInfo_60, 0) = ((MR_Box) (InSccMap_59));
      MR_hl_field(0, TailRecInfo_60, 1) = (MR_Box) (packed_word_1);
    }
    ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_60, STATE_VARIABLE_Info_3_66, STATE_VARIABLE_Info_62);
  }
  else
    *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_3_66;
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_10_p_0(
  MR_Word CalleePredId_11,
  MR_Integer CalleeProcId_12,
  MR_Word CodeModel_13,
  MR_Word GoalInfo_14,
  MR_Word ArgVars_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word CalleePredProcId_20;
  MR_Word Context_21;
  MR_Word Features_22;

  {
    CalleePredProcId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CalleePredProcId_20, 0) = ((MR_Box) (CalleePredId_11));
    MR_hl_field(0, CalleePredProcId_20, 1) = ((MR_Box) (CalleeProcId_12));
  }
  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
  Features_22 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_14);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), Features_22, ((MR_Box) ((MR_Integer) 12)));
  if (succeeded)
    ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0(CalleePredProcId_20, CodeModel_13, Context_21, ArgVars_15, Features_22, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  else
  {
    MR_Word CallerArgs_23;

    CallerArgs_23 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_15);
    ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(CalleePredProcId_20, CodeModel_13, Context_21, CallerArgs_23, (MR_Integer) 0, Features_22, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__387__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__386__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__385__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0(
  MR_Word CalleePredProcId_11,
  MR_Word CodeModel_12,
  MR_Word Context_13,
  MR_Word ArgVars_14,
  MR_Word Features_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_20;
  MR_Word PredInfo_21;
  MR_Word ProcInfo_22;
  MR_Word PredOrFunc_23;
  MR_Word CalleeArgTypes_24;
  MR_Word CalleeArgModes_25;
  MR_Word CallerArgs_26;
  MR_Word InputRvals_27;
  MR_Word OutputLvalsTypes_28;
  MR_Word ConvOutputDefns_29;
  MR_Word ConvOutputStmts_30;
  MR_Word TailRecInfo0_31;
  MR_Word InSccMap0_32;
  MR_Word STATE_VARIABLE_Info_1_65;
  MR_Word Var_66;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_Word InSccInfo0_33;
  MR_Box conv0_InSccInfo0_33;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_20);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_20, CalleePredProcId_11, &PredInfo_21, &ProcInfo_22);
  PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &CalleeArgTypes_24);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &CalleeArgModes_25);
  CallerArgs_26 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_14);
  ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_23, CodeModel_12, Context_13, (MR_Integer) 0, CalleeArgTypes_24, CalleeArgModes_25, CallerArgs_26, &InputRvals_27, &OutputLvalsTypes_28, &ConvOutputDefns_29, &ConvOutputStmts_30, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_1_65);
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[0]));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_66, 3) = ((MR_Box) (OutputLvalsTypes_28));
    MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "OutputLvalsTypes != []");
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[1]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (ConvOutputDefns_29));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputDefns != []");
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[2]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (ConvOutputStmts_30));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputStmts != []");
  ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_1_65, &TailRecInfo0_31);
  InSccMap0_32 = ((MR_Word) ((MR_hl_field(0, TailRecInfo0_31, 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), InSccMap0_32, ((MR_Box) (CalleePredProcId_11)), &conv0_InSccInfo0_33);
  if (succeeded)
  {
    InSccInfo0_33 = ((MR_Word) (conv0_InSccInfo0_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeInTscc_34 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_33, 0))));
    MR_Word IsTargetOfSelfTRCall0_35 = ((((MR_Unsigned) ((MR_hl_field(0, InSccInfo0_33, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word IsTargetOfMutualTRCall0_36 = ((MR_Unsigned) ((MR_hl_field(0, InSccInfo0_33, 1))) & (MR_Integer) 1);

    if ((MaybeInTscc_34 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(CalleePredProcId_11, CodeModel_12, Context_13, CallerArgs_26, (MR_Integer) 1, Features_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
    else
    {
      MR_Word IdInTSCC_38 = ((MR_Word) ((MR_hl_field(1, MaybeInTscc_34, 0))));
      MR_Word FuncInputArgs_39 = ((MR_Word) ((MR_hl_field(1, MaybeInTscc_34, 1))));
      MR_Word DanglingStackRef_40;

      DanglingStackRef_40 = ml_backend__ml_call_gen__may_rvals_yield_dangling_stack_ref_1_f_0(InputRvals_27);
      switch (DanglingStackRef_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(CalleePredProcId_11, CodeModel_12, Context_13, CallerArgs_26, (MR_Integer) 2, Features_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
          break;
        case (MR_Integer) 1:
          {
            MR_Integer FuncNestDepth_41;

            ml_backend__ml_gen_info__ml_gen_info_get_func_nest_depth_2_p_0(STATE_VARIABLE_Info_1_65, &FuncNestDepth_41);
            succeeded = (FuncNestDepth_41 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word CommentStmt_42;
              MR_Word ModuleName_43;
              MR_Word InitStmts_45;
              MR_Word AssignStmts_46;
              MR_Word LoopKind_47;
              MR_Word TsccKind_48;
              MR_Word SetSelectorStmts_49;
              MR_Word GotoTarget_55;
              MR_Word GotoStmt_57;
              MR_Word CallerPredProcId_58;
              MR_Word Var_86;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word MLDS_ModuleName_44;

              {
                CommentStmt_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, CommentStmt_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, CommentStmt_42, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_call_gen_scalar_common_3[5])));
                MR_hl_field(3, CommentStmt_42, 2) = ((MR_Box) (Context_13));
              }
              ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(STATE_VARIABLE_Info_1_65, &ModuleName_43);
              MLDS_ModuleName_44 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_43);
              ml_backend__ml_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_105_108_95_114_101_99_95_99_97_108_108_95_97_115_115_105_103_110_95_105_110_112_117_116_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(Context_13, FuncInputArgs_39, InputRvals_27, &InitStmts_45, &AssignStmts_46, LocalVarDefns_16);
              *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
              LoopKind_47 = ((((MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_31, 1))) >> 1)) & (MR_Integer) 1);
              TsccKind_48 = ((MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_31, 1))) & (MR_Integer) 1);
              switch (LoopKind_47) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word StartLabel_56;

                    SetSelectorStmts_49 = (MR_Word) ((MR_Unsigned) 0U);
                    StartLabel_56 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_48, IdInTSCC_38);
                    {
                      GotoTarget_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, GotoTarget_55, 0) = ((MR_Box) (StartLabel_56));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    switch (TsccKind_48) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Integer TsccProcNum_50 = (MR_Integer) (IdInTSCC_38);
                          MR_Word SetSelectorStmt_54;
                          MR_Word Var_82;
                          MR_Word Var_83;
                          MR_Word Var_84;

                          {
                            Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_84, 0) = ((MR_Box) (TsccProcNum_50));
                          }
                          {
                            Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
                          }
                          {
                            Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_82, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_call_gen_scalar_common_2[2])));
                            MR_hl_field(2, Var_82, 1) = ((MR_Box) (Var_83));
                          }
                          {
                            SetSelectorStmt_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, SetSelectorStmt_54, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                            MR_hl_field(3, SetSelectorStmt_54, 1) = ((MR_Box) (Var_82));
                            MR_hl_field(3, SetSelectorStmt_54, 2) = ((MR_Box) (Context_13));
                          }
                          {
                            SetSelectorStmts_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SetSelectorStmts_49, 0) = ((MR_Box) (SetSelectorStmt_54));
                            MR_hl_field(1, SetSelectorStmts_49, 1) = ((MR_Box) (*FuncDefns_17));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        SetSelectorStmts_49 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                    }
                    GotoTarget_55 = (MR_Word) ((MR_Unsigned) 8U);
                  }
                  break;
              }
              {
                GotoStmt_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GotoStmt_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GotoStmt_57, 1) = ((MR_Box) (GotoTarget_55));
                MR_hl_field(3, GotoStmt_57, 2) = ((MR_Box) (Context_13));
              }
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (CommentStmt_42));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) (*FuncDefns_17));
              }
              {
                Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_91, 0) = ((MR_Box) (GotoStmt_57));
                MR_hl_field(1, Var_91, 1) = ((MR_Box) (*FuncDefns_17));
              }
              Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), SetSelectorStmts_49, Var_91);
              Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), AssignStmts_46, Var_90);
              Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitStmts_45, Var_89);
              *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_86, Var_88);
              ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_1_65, &CallerPredProcId_58);
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CalleePredProcId_11, CallerPredProcId_58);
              if (succeeded)
                switch (IsTargetOfSelfTRCall0_35) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word InSccInfo_59;
                      MR_Word InSccMap_60;
                      MR_Word TailRecInfo_61;
                      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_33, 0))));
                      MR_Word Var_116 = ((MR_Unsigned) ((MR_hl_field(0, InSccInfo0_33, 1))) & (MR_Integer) 1);
                      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_33, 2))));
                      MR_Unsigned packed_word_2;

                      {
                        InSccInfo_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InSccInfo_59, 0) = ((MR_Box) (Var_114));
                        MR_hl_field(0, InSccInfo_59, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_116)));
                        MR_hl_field(0, InSccInfo_59, 2) = ((MR_Box) (Var_117));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (CalleePredProcId_11)), ((MR_Box) (InSccInfo_59)), InSccMap0_32, &InSccMap_60);
                      packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_31, 1)));
                      {
                        TailRecInfo_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TailRecInfo_61, 0) = ((MR_Box) (InSccMap_60));
                        MR_hl_field(0, TailRecInfo_61, 1) = (MR_Box) (packed_word_2);
                      }
                      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_61, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
                    }
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_1_65;
                    break;
                }
              else
                switch (IsTargetOfMutualTRCall0_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word InSccInfo_105;
                      MR_Word InSccMap_106;
                      MR_Word TailRecInfo_107;
                      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_33, 0))));
                      MR_Word Var_122 = ((((MR_Unsigned) ((MR_hl_field(0, InSccInfo0_33, 1))) >> 1)) & (MR_Integer) 1);
                      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_33, 2))));
                      MR_Unsigned packed_word_3;

                      {
                        InSccInfo_105 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InSccInfo_105, 0) = ((MR_Box) (Var_121));
                        MR_hl_field(0, InSccInfo_105, 1) = (MR_Box) (((((MR_Unsigned) (Var_122) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                        MR_hl_field(0, InSccInfo_105, 2) = ((MR_Box) (Var_124));
                      }
                      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (CalleePredProcId_11)), ((MR_Box) (InSccInfo_105)), InSccMap0_32, &InSccMap_106);
                      packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_31, 1)));
                      {
                        TailRecInfo_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TailRecInfo_107, 0) = ((MR_Box) (InSccMap_106));
                        MR_hl_field(0, TailRecInfo_107, 1) = (MR_Box) (packed_word_3);
                      }
                      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_107, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
                    }
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_1_65;
                    break;
                }
            }
            else
              ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(CalleePredProcId_11, CodeModel_12, Context_13, CallerArgs_26, (MR_Integer) 3, Features_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
          }
          break;
      }
    }
  }
  else
    ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(CalleePredProcId_11, CodeModel_12, Context_13, CallerArgs_26, (MR_Integer) 0, Features_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_63);
}

static void MR_CALL 
ml_backend__ml_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_105_108_95_114_101_99_95_99_97_108_108_95_97_115_115_105_103_110_95_105_110_112_117_116_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.tail_rec_call_assign_input_args\'/7", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.tail_rec_call_assign_input_args\'/7", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgRval_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgRvals_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word VarName_31;
      MR_Word Type_32;
      MR_Word STATE_VARIABLE_InitStmts_1_44;
      MR_Word STATE_VARIABLE_AssignStmts_1_45;
      MR_Word STATE_VARIABLE_TempDefns_1_46;
      MR_Word Var_47;
      MR_Word Var_61;

      ml_backend__ml_call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_105_108_95_114_101_99_95_99_97_108_108_95_97_115_115_105_103_110_95_105_110_112_117_116_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(Context_2, Var_62, ArgRvals_27, &STATE_VARIABLE_InitStmts_1_44, &STATE_VARIABLE_AssignStmts_1_45, &STATE_VARIABLE_TempDefns_1_46);
      VarName_31 = ((MR_Word) ((MR_hl_field(0, Var_63, 0))));
      Type_32 = ((MR_Word) ((MR_hl_field(0, Var_63, 1))));
      succeeded = ((MR_tag((MR_Word) ArgRval_26)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(2, ArgRval_26, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_47, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_61 = ((MR_Word) ((MR_hl_field(3, Var_47, 1))));
          succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_31, Var_61);
        }
      }
      if (succeeded)
      {
        *HeadVar__7_7 = STATE_VARIABLE_TempDefns_1_46;
        *HeadVar__6_6 = STATE_VARIABLE_AssignStmts_1_45;
        *HeadVar__5_5 = STATE_VARIABLE_InitStmts_1_44;
      }
      else
      {
        MR_Word NextValueName_37;
        MR_Word NextValueInitStmt_38;
        MR_Word AssignStmt_39;
        MR_Word TempDefn_40;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_String VarNameStr_35;
        MR_Integer VarNum_36;

        succeeded = ((MR_tag((MR_Word) VarName_31)) == (MR_Integer) 1);
        if (succeeded)
        {
          VarNameStr_35 = ((MR_String) ((MR_hl_field(1, VarName_31, 0))));
          VarNum_36 = ((MR_Integer) ((MR_hl_field(1, VarName_31, 1))));
          {
            NextValueName_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NextValueName_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, NextValueName_37, 1) = ((MR_Box) (VarNameStr_35));
            MR_hl_field(3, NextValueName_37, 2) = ((MR_Box) (VarNum_36));
          }
        }
        else
        {
          MR_Word Var_48;
          MR_String VarNameStr_60;

          VarNameStr_60 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_31);
          {
            Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_48, 1) = ((MR_Box) (VarNameStr_60));
          }
          {
            NextValueName_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NextValueName_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, NextValueName_37, 1) = ((MR_Box) (Var_48));
          }
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (NextValueName_37));
          MR_hl_field(3, Var_50, 2) = ((MR_Box) (Type_32));
        }
        {
          Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(2, Var_49, 1) = ((MR_Box) (ArgRval_26));
        }
        {
          NextValueInitStmt_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, NextValueInitStmt_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, NextValueInitStmt_38, 1) = ((MR_Box) (Var_49));
          MR_hl_field(3, NextValueInitStmt_38, 2) = ((MR_Box) (Context_2));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (NextValueInitStmt_38));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InitStmts_1_44));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (VarName_31));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (Type_32));
        }
        {
          Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_54, 0) = ((MR_Box) (Var_50));
        }
        {
          Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(2, Var_52, 1) = ((MR_Box) (Var_54));
        }
        {
          AssignStmt_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, AssignStmt_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, AssignStmt_39, 1) = ((MR_Box) (Var_52));
          MR_hl_field(3, AssignStmt_39, 2) = ((MR_Box) (Context_2));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (AssignStmt_39));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_AssignStmts_1_45));
        }
        TempDefn_40 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(NextValueName_37, Type_32, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_2);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TempDefn_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TempDefns_1_46));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__may_rvals_yield_dangling_stack_ref_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Rval_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Rvals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MayYieldDanglingStackRef0_6;

      MayYieldDanglingStackRef0_6 = ml_backend__ml_call_gen__may_rval_yield_dangling_stack_ref_1_f_0(Rval_3);
      switch (MayYieldDanglingStackRef0_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Rvals_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__may_rval_yield_dangling_stack_ref_1_f_0(
  MR_Word Rval_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MayYieldDanglingStackRef_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        MayYieldDanglingStackRef_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        MayYieldDanglingStackRef_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_7 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = SubRval_7;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_8 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));

              switch (MR_tag((MR_Word) Const_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CodeAddr_27 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
                    MR_Word QualFuncLabel_57 = ((MR_Word) ((MR_hl_field(0, CodeAddr_27, 0))));
                    MR_Word FuncLabel_60 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_57, 1))));
                    MR_Word MaybeAux_62 = ((MR_Word) ((MR_hl_field(0, FuncLabel_60, 1))));

                    switch (MR_tag((MR_Word) MaybeAux_62)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(MaybeAux_62)) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                    else
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_8, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
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
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 16:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_22 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = SubRval_22;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_25 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = SubRval_25;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_24 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = SubRval_24;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_26 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = SubRval_26;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalA_11 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word SubRvalB_12 = ((MR_Word) ((MR_hl_field(3, Rval_3, 3))));
              MR_Word MayYieldDanglingStackRefA_13;

              MayYieldDanglingStackRefA_13 = ml_backend__ml_call_gen__may_rval_yield_dangling_stack_ref_1_f_0(SubRvalA_11);
              switch (MayYieldDanglingStackRefA_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_Rval_3 = SubRvalB_12;

                    // direct tailcall eliminated
                    ;
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));

              switch (MR_tag((MR_Word) Lval_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_68 = ((MR_Word) ((MR_hl_field(0, Lval_14, 1))));
                    MR_Word next_value_of_Rval_3 = Rval_68;

                    // direct tailcall eliminated
                    ;
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Lval_14, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      MayYieldDanglingStackRef_4 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word RowRval_16 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
              MR_Word next_value_of_Rval_3 = RowRval_16;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 9:
            MayYieldDanglingStackRef_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return MayYieldDanglingStackRef_4;
    break;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__1_67;
  MR_Word conv6_LambdaHeadVar__2_68;
  MR_Word conv5_LambdaHeadVar__3_69;
  MR_Word conv4_LambdaHeadVar__5_71;

  ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__679__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), &conv7_LambdaHeadVar__1_67, &conv6_LambdaHeadVar__2_68, &conv5_LambdaHeadVar__3_69, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_71);
  *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_67));
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_68));
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_69));
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_71));
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LocalVarDefns_18;
  MR_Word conv2_FuncDefns_19;
  MR_Word conv1_Stmts_20;
  MR_Word conv0_STATE_VARIABLE_Info_35;

  ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_35);
  *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
  *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
  *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0(
  MR_Word CalleePredProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word CallerArgs_15,
  MR_Word NonTailCallReason_16,
  MR_Word Features_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word Params_24;
  MR_Word Signature_25;
  MR_Word _FuncProcLabel_26;
  MR_Word FuncRval_27;
  MR_Word PredInfo_28;
  MR_Word ProcInfo_29;
  MR_Word PredOrFunc_30;
  MR_Word CalleeArgTypes_31;
  MR_Word CalleeArgModes_32;
  MR_Word InputRvals_33;
  MR_Word OutputLvalsTypes_34;
  MR_Word ConvOutputDefns_35;
  MR_Word ConvOutputStmts_36;
  MR_Word Detism_37;
  MR_Word TailRecInfo0_48;
  MR_Word InSccMap0_49;
  MR_Word STATE_VARIABLE_Info_1_63;
  MR_Word STATE_VARIABLE_Info_2_65;
  MR_Word STATE_VARIABLE_Info_3_66;
  MR_Word ModuleInfo_106;
  MR_Word PredLabel_107;
  MR_Word PredModule_108;
  MR_Word Params_110;
  MR_Word Signature_113;
  MR_Integer ProcId_115;
  MR_Word FuncLabel_116;
  MR_Word QualFuncLabel_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word _ArgTuples_23;
  MR_Word _ArgTuples_109;
  MR_Word _ByRefOutputVars_111;
  MR_Word _CopiedOutputVars_112;
  MR_Word InSccInfo0_50;
  MR_Box conv8_InSccInfo0_50;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_22);
  ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_22, CalleePredProcId_12, &_ArgTuples_23, &Params_24);
  Signature_25 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_24);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_106);
  ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_106, CalleePredProcId_12, &PredLabel_107, &PredModule_108);
  ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(CalleePredProcId_12, &_ArgTuples_109, &Params_110, &_ByRefOutputVars_111, &_CopiedOutputVars_112, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_1_63);
  Signature_113 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_110);
  ProcId_115 = ((MR_Integer) ((MR_hl_field(0, CalleePredProcId_12, 1))));
  {
    _FuncProcLabel_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, _FuncProcLabel_26, 0) = ((MR_Box) (PredLabel_107));
    MR_hl_field(0, _FuncProcLabel_26, 1) = ((MR_Box) (ProcId_115));
  }
  {
    FuncLabel_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_116, 0) = ((MR_Box) (_FuncProcLabel_26));
    MR_hl_field(0, FuncLabel_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    QualFuncLabel_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncLabel_117, 0) = ((MR_Box) (PredModule_108));
    MR_hl_field(0, QualFuncLabel_117, 1) = ((MR_Box) (FuncLabel_116));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (QualFuncLabel_117));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (Signature_113));
  }
  Var_119 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_120)));
  {
    FuncRval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FuncRval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, FuncRval_27, 1) = ((MR_Box) (Var_119));
  }
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_22, CalleePredProcId_12, &PredInfo_28, &ProcInfo_29);
  PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_28);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_28, &CalleeArgTypes_31);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_29, &CalleeArgModes_32);
  ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_30, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_31, CalleeArgModes_32, CallerArgs_15, &InputRvals_33, &OutputLvalsTypes_34, &ConvOutputDefns_35, &ConvOutputStmts_36, STATE_VARIABLE_Info_1_63, &STATE_VARIABLE_Info_2_65);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_29, &Detism_37);
  succeeded = (ConvOutputDefns_35 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ConvOutputStmts_36 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_25, FuncRval_27, InputRvals_33, OutputLvalsTypes_34, Detism_37, Context_14, LocalVarDefns_18, FuncDefns_19, Stmts_20, STATE_VARIABLE_Info_2_65, &STATE_VARIABLE_Info_3_66);
  else
  {
    MR_Word DoGenCall_38;
    MR_Word DoGenConvOutputAndSucceed_39;
    MR_Word CallAndConvOutputLocalVarDefns_45;

    {
      DoGenCall_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenCall_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
      MR_hl_field(0, DoGenCall_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_1));
      MR_hl_field(0, DoGenCall_38, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, DoGenCall_38, 3) = ((MR_Box) (Signature_25));
      MR_hl_field(0, DoGenCall_38, 4) = ((MR_Box) (FuncRval_27));
      MR_hl_field(0, DoGenCall_38, 5) = ((MR_Box) (InputRvals_33));
      MR_hl_field(0, DoGenCall_38, 6) = ((MR_Box) (OutputLvalsTypes_34));
      MR_hl_field(0, DoGenCall_38, 7) = ((MR_Box) (Detism_37));
      MR_hl_field(0, DoGenCall_38, 8) = ((MR_Box) (Context_14));
    }
    {
      DoGenConvOutputAndSucceed_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_0_2));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 3) = ((MR_Box) (CodeModel_13));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 4) = ((MR_Box) (Context_14));
      MR_hl_field(0, DoGenConvOutputAndSucceed_39, 5) = ((MR_Box) (ConvOutputStmts_36));
    }
    ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_38, DoGenConvOutputAndSucceed_39, &CallAndConvOutputLocalVarDefns_45, FuncDefns_19, Stmts_20, STATE_VARIABLE_Info_2_65, &STATE_VARIABLE_Info_3_66);
    *LocalVarDefns_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvOutputDefns_35, CallAndConvOutputLocalVarDefns_45);
  }
  ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_3_66, &TailRecInfo0_48);
  InSccMap0_49 = ((MR_Word) ((MR_hl_field(0, TailRecInfo0_48, 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), InSccMap0_49, ((MR_Box) (CalleePredProcId_12)), &conv8_InSccInfo0_50);
  if (succeeded)
  {
    InSccInfo0_50 = ((MR_Word) (conv8_InSccInfo0_50));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word CallerPredProcId_51;
    MR_Word Warnings_52;
    MR_Word Status_53;
    MR_Word Obviousness_54;
    MR_Word NonTailRecCall_55;
    MR_Word NonTailRecCalls0_56;
    MR_Word NonTailRecCalls_57;
    MR_Word InSccInfo_58;
    MR_Word InSccMap_59;
    MR_Word TailRecInfo_60;
    MR_Word Var_83;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;

    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_3_66, &CallerPredProcId_51);
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(STATE_VARIABLE_Info_3_66, &Warnings_52);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_52, ((MR_Box) ((MR_Integer) 3)));
    if (succeeded)
      Status_53 = (MR_Integer) 0;
    else
      Status_53 = (MR_Integer) 1;
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), Features_17, ((MR_Box) ((MR_Integer) 13)));
    if (succeeded)
      Obviousness_54 = (MR_Integer) 1;
    else
      Obviousness_54 = (MR_Integer) 0;
    {
      NonTailRecCall_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NonTailRecCall_55, 0) = ((MR_Box) (CallerPredProcId_51));
      MR_hl_field(0, NonTailRecCall_55, 1) = ((MR_Box) (CalleePredProcId_12));
      MR_hl_field(0, NonTailRecCall_55, 2) = ((MR_Box) (Context_14));
      MR_hl_field(0, NonTailRecCall_55, 3) = (MR_Box) (((((MR_Unsigned) (NonTailCallReason_16) << 2)) | (((((MR_Unsigned) (Obviousness_54) << 1)) | (MR_Unsigned) (Status_53)))));
    }
    Var_83 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_50, 0))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, InSccInfo0_50, 1)));
    NonTailRecCalls0_56 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_50, 2))));
    {
      NonTailRecCalls_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NonTailRecCalls_57, 0) = ((MR_Box) (NonTailRecCall_55));
      MR_hl_field(1, NonTailRecCalls_57, 1) = ((MR_Box) (NonTailRecCalls0_56));
    }
    {
      InSccInfo_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InSccInfo_58, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, InSccInfo_58, 1) = (MR_Box) (packed_word_0);
      MR_hl_field(0, InSccInfo_58, 2) = ((MR_Box) (NonTailRecCalls_57));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (CalleePredProcId_12)), ((MR_Box) (InSccInfo_58)), InSccMap0_49, &InSccMap_59);
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, TailRecInfo0_48, 1)));
    {
      TailRecInfo_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TailRecInfo_60, 0) = ((MR_Box) (InSccMap_59));
      MR_hl_field(0, TailRecInfo_60, 1) = (MR_Box) (packed_word_1);
    }
    ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_60, STATE_VARIABLE_Info_3_66, STATE_VARIABLE_Info_62);
  }
  else
    *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_3_66;
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_generic_call_10_p_0(
  MR_Word GenericCall_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Determinism_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenericCall_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(GenericCall_11, ArgVars_12, ArgModes_13, Determinism_14, Context_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
      break;
    case (MR_Integer) 1:
      ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(GenericCall_11, ArgVars_12, ArgModes_13, Determinism_14, Context_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
      break;
    case (MR_Integer) 2:
      {
        *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
        *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
        *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      break;
    case (MR_Integer) 3:
      if ((ArgVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/7", (MR_String) "wrong number of args for cast");
          return;
        }
      else
      {
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, ArgVars_12, 1))));
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, ArgVars_12, 0))));

        if ((Var_70 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/7", (MR_String) "wrong number of args for cast");
            return;
          }
        else
        {
          MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, Var_70, 1))));
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, Var_70, 0))));

          if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word VarTable_35;
            MR_Word SrcVarEntry_36;
            MR_Word DstVarEntry_37;
            MR_Word SrcLval_38;
            MR_Word DstLval_39;
            MR_Word SrcType_41;
            MR_Word DstType_44;
            MR_Word DstIsDummy_45;
            MR_Word GroundTerm_49;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_31, &VarTable_35);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_35, Var_71, &SrcVarEntry_36);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_35, Var_73, &DstVarEntry_37);
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_31, Var_71, SrcVarEntry_36, &SrcLval_38);
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_31, Var_73, DstVarEntry_37, &DstLval_39);
            SrcType_41 = ((MR_Word) ((MR_hl_field(0, SrcVarEntry_36, 1))));
            DstType_44 = ((MR_Word) ((MR_hl_field(0, DstVarEntry_37, 1))));
            DstIsDummy_45 = ((MR_Unsigned) ((MR_hl_field(0, DstVarEntry_37, 2))) & (MR_Integer) 1);
            switch (DstIsDummy_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ModuleInfo_46;
                  MR_Word CastRval_47;
                  MR_Word Assign_48;
                  MR_Word Var_57;

                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_31, &ModuleInfo_46);
                  {
                    Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_57, 0) = ((MR_Box) (SrcLval_38));
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_46, SrcType_41, DstType_44, Var_57, &CastRval_47);
                  Assign_48 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(DstLval_39, CastRval_47, Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Assign_48));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
            *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_31, Var_71, &GroundTerm_49);
            if (succeeded)
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_73, GroundTerm_49, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
            else
              *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/7", (MR_String) "wrong number of args for cast");
              return;
            }
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__1_122;
  MR_Word conv6_LambdaHeadVar__2_123;
  MR_Word conv5_LambdaHeadVar__3_124;
  MR_Word conv4_LambdaHeadVar__5_126;

  ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__267__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), &conv7_LambdaHeadVar__1_122, &conv6_LambdaHeadVar__2_123, &conv5_LambdaHeadVar__3_124, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_126);
  *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_122));
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_123));
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_124));
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_126));
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LocalVarDefns_18;
  MR_Word conv2_FuncDefns_19;
  MR_Word conv1_Stmts_20;
  MR_Word conv0_STATE_VARIABLE_Info_35;

  ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_35);
  *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
  *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
  *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(
  MR_Word GenericCall_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Determinism_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83)
{
  MR_bool succeeded;
  MR_Integer NumArgs_20;
  MR_Word BoxedArgTypes_21;
  MR_Word ModuleInfo_22;
  MR_Word VarTable_23;
  MR_Word ArgNames_24;
  MR_Word PredOrFunc_25;
  MR_Word CodeModel_26;
  MR_Word Params0_28;
  MR_Word ArgParams0_32;
  MR_Word RetParam_33;
  MR_Word Params_34;
  MR_Word Signature_35;
  MR_Word ClosureLval_41;
  MR_Word FuncType_44;
  MR_Word FuncRval_45;
  MR_Word ConvVarSeq_56;
  MR_Integer ConvVarNum_57;
  MR_Word FuncVarName_58;
  MR_Word FuncVarDecl_59;
  MR_Word FuncVarLval_60;
  MR_Word AssignFuncVar_61;
  MR_Word FuncVarRval_62;
  MR_Word CallerArgs_63;
  MR_Word InputRvals_64;
  MR_Word OutputLvalsTypes_65;
  MR_Word ConvArgLocalVarDefns_66;
  MR_Word ConvOutputStmts_67;
  MR_Word ClosureRval_68;
  MR_Word LocalVarDefns0_69;
  MR_Word Stmts0_71;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_Info_1_114;
  MR_Word Var_115;
  MR_Word STATE_VARIABLE_Info_2_117;
  MR_Word Var_118;
  MR_Word _ArgTuples_27;

  NumArgs_20 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__ml_call_gen_scalar_common_1[0]), ArgVars_12);
  BoxedArgTypes_21 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(NumArgs_20);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_22);
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_82, &VarTable_23);
  ArgNames_24 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarTable_23, ArgVars_12);
  PredOrFunc_25 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(GenericCall_11);
  hlds__code_model__determinism_to_code_model_2_p_0(Determinism_14, &CodeModel_26);
  ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_9_p_0(ModuleInfo_22, PredOrFunc_25, CodeModel_26, ArgVars_12, ArgNames_24, BoxedArgTypes_21, ArgModes_13, &_ArgTuples_27, &Params0_28);
  ArgParams0_32 = ((MR_Word) ((MR_hl_field(0, Params0_28, 0))));
  RetParam_33 = ((MR_Word) ((MR_hl_field(0, Params0_28, 1))));
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[1]));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (ArgParams0_32));
  }
  {
    Params_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_34, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, Params_34, 1) = ((MR_Box) (RetParam_33));
  }
  Signature_35 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_34);
  if (((MR_tag((MR_Word) GenericCall_11)) == (MR_Integer) 1))
  {
    MR_Word TypeClassInfoVar_46 = ((MR_Word) ((MR_hl_field(1, GenericCall_11, 0))));
    MR_Integer MethodNum_47;
    MR_Word BaseTypeclassInfoLval_52;
    MR_Integer Offset_53;
    MR_Integer MethodFieldNum_54;
    MR_Word MethodFieldId_55;
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, GenericCall_11, 1))));
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_110;
    MR_Word Var_113;
    MR_Word FuncLval_128;

    MethodNum_47 = (MR_Integer) (Var_96);
    ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(STATE_VARIABLE_Info_0_82, TypeClassInfoVar_46, &ClosureLval_41);
    {
      Var_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_103, 0) = ((MR_Box) (ClosureLval_41));
    }
    {
      BaseTypeclassInfoLval_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BaseTypeclassInfoLval_52, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_call_gen_scalar_common_3[2])));
      MR_hl_field(0, BaseTypeclassInfoLval_52, 1) = ((MR_Box) (Var_103));
      MR_hl_field(0, BaseTypeclassInfoLval_52, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, BaseTypeclassInfoLval_52, 3) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[1]));
      MR_hl_field(0, BaseTypeclassInfoLval_52, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    Offset_53 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
    MethodFieldNum_54 = (MR_Integer) ((MR_Unsigned) MethodNum_47 + (MR_Unsigned) Offset_53);
    {
      Var_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_106, 0) = ((MR_Box) (MethodFieldNum_54));
    }
    {
      Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
    }
    {
      MethodFieldId_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MethodFieldId_55, 0) = ((MR_Box) (Var_105));
    }
    {
      Var_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_110, 0) = ((MR_Box) (BaseTypeclassInfoLval_52));
    }
    {
      FuncLval_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FuncLval_128, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_call_gen_scalar_common_3[2])));
      MR_hl_field(0, FuncLval_128, 1) = ((MR_Box) (Var_110));
      MR_hl_field(0, FuncLval_128, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, FuncLval_128, 3) = ((MR_Box) (MethodFieldId_55));
      MR_hl_field(0, FuncLval_128, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    {
      FuncType_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FuncType_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, FuncType_44, 1) = ((MR_Box) (Params_34));
    }
    {
      Var_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_113, 0) = ((MR_Box) (FuncLval_128));
    }
    {
      FuncRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FuncRval_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, FuncRval_45, 1) = ((MR_Box) (FuncType_44));
      MR_hl_field(3, FuncRval_45, 2) = ((MR_Box) (Var_113));
    }
  }
  else
  {
    MR_Word ClosureVar_36 = ((MR_Word) ((MR_hl_field(0, GenericCall_11, 0))));
    MR_Word FuncLval_43;
    MR_Word Var_93;
    MR_Word Var_95;

    ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(STATE_VARIABLE_Info_0_82, ClosureVar_36, &ClosureLval_41);
    {
      Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_93, 0) = ((MR_Box) (ClosureLval_41));
    }
    {
      FuncLval_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FuncLval_43, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_call_gen_scalar_common_3[2])));
      MR_hl_field(0, FuncLval_43, 1) = ((MR_Box) (Var_93));
      MR_hl_field(0, FuncLval_43, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, FuncLval_43, 3) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[4]));
      MR_hl_field(0, FuncLval_43, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    {
      FuncType_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FuncType_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, FuncType_44, 1) = ((MR_Box) (Params_34));
    }
    {
      Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_95, 0) = ((MR_Box) (FuncLval_43));
    }
    {
      FuncRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FuncRval_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, FuncRval_45, 1) = ((MR_Box) (FuncType_44));
      MR_hl_field(3, FuncRval_45, 2) = ((MR_Box) (Var_95));
    }
  }
  ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_56, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_1_114);
  ConvVarNum_57 = (MR_Integer) (ConvVarSeq_56);
  {
    Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_115, 1) = ((MR_Box) (ConvVarNum_57));
  }
  {
    FuncVarName_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FuncVarName_58, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, FuncVarName_58, 1) = ((MR_Box) (Var_115));
  }
  FuncVarDecl_59 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(FuncVarName_58, FuncType_44, (MR_Word) ((MR_Unsigned) 0U), Context_15);
  {
    FuncVarLval_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FuncVarLval_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, FuncVarLval_60, 1) = ((MR_Box) (FuncVarName_58));
    MR_hl_field(3, FuncVarLval_60, 2) = ((MR_Box) (FuncType_44));
  }
  AssignFuncVar_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FuncVarLval_60, FuncRval_45, Context_15);
  {
    FuncVarRval_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FuncVarRval_62, 0) = ((MR_Box) (FuncVarLval_60));
  }
  CallerArgs_63 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_12);
  ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_25, CodeModel_26, Context_15, (MR_Integer) 1, BoxedArgTypes_21, ArgModes_13, CallerArgs_63, &InputRvals_64, &OutputLvalsTypes_65, &ConvArgLocalVarDefns_66, &ConvOutputStmts_67, STATE_VARIABLE_Info_1_114, &STATE_VARIABLE_Info_2_117);
  {
    Var_118 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_118, 0) = ((MR_Box) (ClosureLval_41));
  }
  {
    ClosureRval_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ClosureRval_68, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, ClosureRval_68, 1) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, ClosureRval_68, 2) = ((MR_Box) (Var_118));
  }
  succeeded = (ConvArgLocalVarDefns_66 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ConvOutputStmts_67 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Var_119;

    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (ClosureRval_68));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (InputRvals_64));
    }
    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_35, FuncVarRval_62, Var_119, OutputLvalsTypes_65, Determinism_14, Context_15, &LocalVarDefns0_69, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_2_117, STATE_VARIABLE_Info_83);
  }
  else
  {
    MR_Word DoGenCall_72;
    MR_Word DoGenConvOutputAndSucceed_73;
    MR_Word CallAndConvOutputLocalVarDefns_79;
    MR_Word Var_121;

    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (ClosureRval_68));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (InputRvals_64));
    }
    {
      DoGenCall_72 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenCall_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
      MR_hl_field(0, DoGenCall_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1));
      MR_hl_field(0, DoGenCall_72, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, DoGenCall_72, 3) = ((MR_Box) (Signature_35));
      MR_hl_field(0, DoGenCall_72, 4) = ((MR_Box) (FuncVarRval_62));
      MR_hl_field(0, DoGenCall_72, 5) = ((MR_Box) (Var_121));
      MR_hl_field(0, DoGenCall_72, 6) = ((MR_Box) (OutputLvalsTypes_65));
      MR_hl_field(0, DoGenCall_72, 7) = ((MR_Box) (Determinism_14));
      MR_hl_field(0, DoGenCall_72, 8) = ((MR_Box) (Context_15));
    }
    {
      DoGenConvOutputAndSucceed_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2));
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 4) = ((MR_Box) (CodeModel_26));
      MR_hl_field(0, DoGenConvOutputAndSucceed_73, 5) = ((MR_Box) (ConvOutputStmts_67));
    }
    ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_26, Context_15, DoGenCall_72, DoGenConvOutputAndSucceed_73, &CallAndConvOutputLocalVarDefns_79, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_2_117, STATE_VARIABLE_Info_83);
    LocalVarDefns0_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvArgLocalVarDefns_66, CallAndConvOutputLocalVarDefns_79);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LocalVarDefns_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FuncVarDecl_59));
    MR_hl_field(1, base, 1) = ((MR_Box) (LocalVarDefns0_69));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (AssignFuncVar_61));
    MR_hl_field(1, base, 1) = ((MR_Box) (Stmts0_71));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(
  MR_Word Signature_12,
  MR_Word FuncRval_13,
  MR_Word ArgRvals0_14,
  MR_Word RetLvalsTypes0_15,
  MR_Word Detism_16,
  MR_Word Context_17,
  MR_Word * LocalVarDefns_18,
  MR_Word * FuncDefns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word CodeModel_22;
  MR_Word ArgRvals_27;
  MR_Word RetLvals_29;
  MR_Word CallKind_32;
  MR_Word Stmt_33;

  hlds__code_model__determinism_to_code_model_2_p_0(Detism_16, &CodeModel_22);
  switch (CodeModel_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ArgRvals_27 = ArgRvals0_14;
        mercury__assoc_list__keys_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetLvalsTypes0_15, &RetLvals_29);
        *FuncDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cont_23;
        MR_Word FuncPtrRval_24;
        MR_Word EnvPtrRval_25;
        MR_Word NondetCopyOut_28;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word CurrentCont_49;
        MR_Word CurrentContArgLvalsTypes_52;

        ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(STATE_VARIABLE_Info_0_34, &CurrentCont_49);
        CurrentContArgLvalsTypes_52 = ((MR_Word) ((MR_hl_field(0, CurrentCont_49, 2))));
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_call_gen_scalar_common_1[1]), ((MR_Box) (CurrentContArgLvalsTypes_52)), ((MR_Box) (RetLvalsTypes0_15)));
        if (succeeded)
        {
          Cont_23 = CurrentCont_49;
          *FuncDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
        else
        {
          MR_Word Params_53;
          MR_Word ContFuncLabel_54;
          MR_Word ContFuncLabelRval_55;
          MR_Word CopyStmts_56;
          MR_Word CallContStmt_57;
          MR_Word CopyStmt_58;
          MR_Word ContFuncDefn_59;
          MR_Word EnvPtrRval_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Args0_71;
          MR_Word EnvPtrArg_72;
          MR_Word Args_73;
          MR_Word Var_75;

          ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(RetLvalsTypes0_15, (MR_Integer) 1, &Args0_71);
          ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&EnvPtrArg_72);
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (EnvPtrArg_72));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Args_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Args0_71, Var_75);
          {
            Params_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Params_53, 0) = ((MR_Box) (Args_73));
            MR_hl_field(0, Params_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Params_53));
          }
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(Var_61, &ContFuncLabel_54, &ContFuncLabelRval_55, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
          ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(RetLvalsTypes0_15, (MR_Integer) 1, Context_17, &CopyStmts_56);
          ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0(*STATE_VARIABLE_Info_35, Context_17, &CallContStmt_57);
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (CallContStmt_57));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CopyStmts_56, Var_65);
          CopyStmt_58 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_64, Context_17);
          ml_backend__ml_code_util__ml_gen_label_func_7_p_0(*STATE_VARIABLE_Info_35, ContFuncLabel_54, (MR_Word) ((MR_Unsigned) 4U), Params_53, Context_17, CopyStmt_58, &ContFuncDefn_59);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *FuncDefns_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ContFuncDefn_59));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_60);
          {
            Cont_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Cont_23, 0) = ((MR_Box) (ContFuncLabelRval_55));
            MR_hl_field(0, Cont_23, 1) = ((MR_Box) (EnvPtrRval_60));
            MR_hl_field(0, Cont_23, 2) = ((MR_Box) (RetLvalsTypes0_15));
          }
        }
        FuncPtrRval_24 = ((MR_Word) ((MR_hl_field(0, Cont_23, 0))));
        EnvPtrRval_25 = ((MR_Word) ((MR_hl_field(0, Cont_23, 1))));
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (EnvPtrRval_25));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (FuncPtrRval_24));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
        }
        ArgRvals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ArgRvals0_14, Var_37);
        ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(*STATE_VARIABLE_Info_35, &NondetCopyOut_28);
        switch (NondetCopyOut_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__assoc_list__keys_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetLvalsTypes0_15, &RetLvals_29);
            break;
          case (MR_Integer) 1:
            RetLvals_29 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Success_30;
        MR_Word RetLvals0_31;

        ml_backend__ml_code_util__ml_success_lval_3_p_0(&Success_30, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        ArgRvals_27 = ArgRvals0_14;
        mercury__assoc_list__keys_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetLvalsTypes0_15, &RetLvals0_31);
        {
          RetLvals_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RetLvals_29, 0) = ((MR_Box) (Success_30));
          MR_hl_field(1, RetLvals_29, 1) = ((MR_Box) (RetLvals0_31));
        }
        *FuncDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  *LocalVarDefns_18 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (Detism_16 == (MR_Integer) 6);
  if (succeeded)
    CallKind_32 = (MR_Integer) 0;
  else
    CallKind_32 = (MR_Integer) 2;
  {
    Stmt_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Stmt_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Stmt_33, 1) = ((MR_Box) (Signature_12));
    MR_hl_field(3, Stmt_33, 2) = ((MR_Box) (FuncRval_13));
    MR_hl_field(3, Stmt_33, 3) = ((MR_Box) (ArgRvals_27));
    MR_hl_field(3, Stmt_33, 4) = ((MR_Box) (RetLvals_29));
    MR_hl_field(3, Stmt_33, 5) = (MR_Box) ((MR_Unsigned) (CallKind_32));
    MR_hl_field(3, Stmt_33, 6) = ((MR_Box) (Context_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_33));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word LocalLvalType_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word LocalLvalsTypes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Stmt_11;
    MR_Word Stmts_12;
    MR_Word LocalLval_13 = ((MR_Word) ((MR_hl_field(0, LocalLvalType_7, 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, LocalLvalType_7, 1))));
    MR_Word ArgName_15;
    MR_Word ArgLval_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;

    {
      Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_17, 1) = ((MR_Box) (ArgNum_2));
    }
    {
      ArgName_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ArgName_15, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ArgName_15, 1) = ((MR_Box) (Var_17));
    }
    {
      ArgLval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ArgLval_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ArgLval_16, 1) = ((MR_Box) (ArgName_15));
      MR_hl_field(3, ArgLval_16, 2) = ((MR_Box) (Type_14));
    }
    {
      Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_18, 0) = ((MR_Box) (ArgLval_16));
    }
    Stmt_11 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LocalLval_13, Var_18, Context_3);
    Var_19 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
    ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(LocalLvalsTypes_8, Var_19, Context_3, &Stmts_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Stmts_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Type_6;
    MR_Word LvalsTypes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Argument_9;
    MR_Word Arguments_10;
    MR_Word ArgName_11;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_14;
    MR_Integer Var_15;

    Type_6 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
    {
      Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_14, 1) = ((MR_Box) (ArgNum_2));
    }
    {
      ArgName_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ArgName_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ArgName_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Argument_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Argument_9, 0) = ((MR_Box) (ArgName_11));
      MR_hl_field(0, Argument_9, 1) = ((MR_Box) (Type_6));
      MR_hl_field(0, Argument_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
    ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(LvalsTypes_7, Var_15, &Arguments_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Argument_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Arguments_10));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_call_gen____Unify____may_yield_dangling_stack_ref_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_call_gen____Compare____may_yield_dangling_stack_ref_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_call_gen__init(void)
{
}

void mercury__ml_backend__ml_call_gen__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__ml_call_gen__ml_backend__ml_call_gen__type_ctor_info_may_yield_dangling_stack_ref_0);
}

void mercury__ml_backend__ml_call_gen__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_call_gen__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_call_gen.
