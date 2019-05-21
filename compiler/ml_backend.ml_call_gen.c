/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2017-09-11
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_optimize.mih"
#include "ml_backend.ml_tailcall.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__366__1_2_p_0(
  MR_Word ConvOutputStmts_31,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__365__1_2_p_0(
  MR_Word ConvOutputDefns_30,
  MR_Word HeadVar__2_78);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(
  MR_Word OutputTypes_29,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__363__1_2_p_0(
  MR_Word OutputLvals_28,
  MR_Word HeadVar__2_70);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__254__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_121,
  MR_Word * LambdaHeadVar__2_122,
  MR_Word * LambdaHeadVar__3_123,
  MR_Word LambdaHeadVar__4_124,
  MR_Word * LambdaHeadVar__5_125);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_4(
  MR_Box closure_arg);

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
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ArgVars_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(
  MR_Word PredProcId_6,
  MR_Word * ProcLabel_7,
  MR_Word * CodeAddrRval_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

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
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word Signature_13,
  MR_Word FuncRval_14,
  MR_Word ArgRvals0_15,
  MR_Word RetLvals0_16,
  MR_Word RetTypes0_17,
  MR_Word Detism_18,
  MR_Word Context_19,
  MR_Word * LocalVarDefns_20,
  MR_Word * FuncDefns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
  MR_Word OutputArgTypes_8,
  MR_Word OutputArgLvals_9,
  MR_Word Context_10,
  MR_Word * Cont_11,
  MR_Word * ContDecls_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word Context_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3);


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][15];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[4][5];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_3[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_3[2])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[6])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[7])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "direct tailcall eliminated"))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__366__1_2_p_0(
  MR_Word ConvOutputStmts_31,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[4], ((MR_Box) (ConvOutputStmts_31)), ((MR_Box) (HeadVar__2_82)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__365__1_2_p_0(
  MR_Word ConvOutputDefns_30,
  MR_Word HeadVar__2_78)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[3], ((MR_Box) (ConvOutputDefns_30)), ((MR_Box) (HeadVar__2_78)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(
  MR_Word OutputTypes_29,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (OutputTypes_29)), ((MR_Box) (HeadVar__2_74)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__363__1_2_p_0(
  MR_Word OutputLvals_28,
  MR_Word HeadVar__2_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (OutputLvals_28)), ((MR_Box) (HeadVar__2_70)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__254__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_121,
  MR_Word * LambdaHeadVar__2_122,
  MR_Word * LambdaHeadVar__3_123,
  MR_Word LambdaHeadVar__4_124,
  MR_Word * LambdaHeadVar__5_125)
{
  {
    MR_Word SucceedStmts_78;

    *LambdaHeadVar__1_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_26, Context_15, &SucceedStmts_78, LambdaHeadVar__4_124, LambdaHeadVar__5_125);
    *LambdaHeadVar__3_123 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_67, SucceedStmts_78);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64)
{
  {
    MR_Word SucceedStmts_44;

    *LambdaHeadVar__1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_44, LambdaHeadVar__4_63, LambdaHeadVar__5_64);
    *LambdaHeadVar__3_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_36, SucceedStmts_44);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_36,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64)
{
  {
    MR_Word SucceedStmts_44;

    *LambdaHeadVar__1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_44, LambdaHeadVar__4_63, LambdaHeadVar__5_64);
    *LambdaHeadVar__3_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_36, SucceedStmts_44);
  }
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
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word ArgLvals_20;
    MR_Word ModuleInfo_21;
    MR_Word ModuleName_22;
    MR_String PredName_23;
    MR_Word SimpleCode_24;

    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_0_47, ArgVars_13, &ArgLvals_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_47, &ModuleInfo_21);
    ModuleName_22 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_21, PredId_11);
    PredName_23 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_21, PredId_11);
    backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ModuleName_22, PredName_23, ProcId_12, ArgLvals_20, &SimpleCode_24);
    switch (CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) SimpleCode_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Lval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), SimpleCode_24, (MR_Integer) 0)));
                MR_Word SimpleExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SimpleCode_24, (MR_Integer) 1)));
                MR_Word VarType_28;
                MR_Word ProgDataType_29;
                MR_Word Var_67;
                MR_Word _VarName_27;
                MR_Word Var_30;
                MR_Word Var_31;

                succeeded = ((((MR_tag((MR_Word) Lval_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  _VarName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_25, (MR_Integer) 1)));
                  VarType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_25, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) VarType_28)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    ProgDataType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), VarType_28, (MR_Integer) 0)));
                    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), VarType_28, (MR_Integer) 1)));
                    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), VarType_28, (MR_Integer) 2)));
                    Var_67 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_21, ProgDataType_29);
                    succeeded = (Var_67 == (MR_Integer) 0);
                  }
                }
                if (succeeded)
                  *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word Rval_32;
                  MR_Word Stmt_33;

                  Rval_32 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(SimpleExpr_26);
                  Stmt_33 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(Lval_25, Rval_32, Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_33));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AddrLval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), SimpleCode_24, (MR_Integer) 0)));
                MR_Word ValueLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), SimpleCode_24, (MR_Integer) 1)));
                MR_Word ValueType_37;
                MR_Word _ValueVarName_36;

                succeeded = ((((MR_tag((MR_Word) ValueLval_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ValueLval_35, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  _ValueVarName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ValueLval_35, (MR_Integer) 1)));
                  ValueType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ValueLval_35, (MR_Integer) 2)));
                  {
                    MR_Word Var_61;
                    MR_Word Var_62;
                    MR_Word Var_63;
                    MR_Word Stmt_69;

                    {
                      Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (AddrLval_34));
                    }
                    {
                      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
                      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (ValueType_37));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (ValueLval_35));
                    }
                    Stmt_69 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(Var_61, Var_63, Context_15);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_69));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed ref_assign");
                    return;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_det builtin predicate");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "model_non builtin predicate");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) SimpleCode_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SimpleTest_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), SimpleCode_24, (MR_Integer) 0)));
              MR_Word TestRval_41;
              MR_Word Stmt_72;

              TestRval_41 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(SimpleTest_40);
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TestRval_41, Context_15, &Stmt_72, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_72));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
        }
        break;
    }
    *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Lval_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word Var_5;

          {
            Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Int_4));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned UInt_6 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word Var_7;

          {
            Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (UInt_6));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int8_t Int8_8 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_9;

              {
                Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (MR_Word) (Int8_8));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_11;

              {
                Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (MR_Word) (UInt8_10));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_11));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              int16_t Int16_12 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_13;

              {
                Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (MR_Word) (Int16_12));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_15;

              {
                Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (MR_Word) (UInt16_14));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_17;

              {
                Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (MR_Word) (Int32_16));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_17));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              uint32_t UInt32_18 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_19;

              {
                Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (MR_Word) (UInt32_18));
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_19));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_21;

              {
                Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_21, 1) = MR_box_float(Float_20);
              }
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_21));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Expr_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word Var_24;
              MR_Word Var_25;

              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (Op_22));
              }
              Var_25 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(Expr_23);
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_24));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_25));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Op_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ExprA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ExprB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
              MR_Word Var_29;
              MR_Word Var_30;

              Var_29 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ExprA_27);
              Var_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ExprB_28);
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Op_26));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_29));
                MR_hl_field(MR_mktag(3), HeadVar__2_2, 3) = ((MR_Box) (Var_30));
              }
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_60;
    MR_Word conv6_LambdaHeadVar__2_61;
    MR_Word conv5_LambdaHeadVar__3_62;
    MR_Word conv4_LambdaHeadVar__5_64;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_60, &conv6_LambdaHeadVar__2_61, &conv5_LambdaHeadVar__3_62, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_64);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_60));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_61));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_62));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_64));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LocalVarDefns_20;
    MR_Word conv2_FuncDefns_21;
    MR_Word conv1_Stmts_22;
    MR_Word conv0_STATE_VARIABLE_Info_39;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv3_LocalVarDefns_20, &conv2_FuncDefns_21, &conv1_Stmts_22, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_39);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_20));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_21));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_39));
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word CallerArgs_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_20;
    MR_Word PredProcId_21;
    MR_Word Params_23;
    MR_Word Signature_24;
    MR_Word FuncRval_26;
    MR_Word PredInfo_27;
    MR_Word ProcInfo_28;
    MR_Word PredOrFunc_29;
    MR_Word CalleeArgTypes_30;
    MR_Word CalleeArgModes_31;
    MR_Word InputRvals_32;
    MR_Word OutputLvals_33;
    MR_Word OutputTypes_34;
    MR_Word ConvOutputDefns_35;
    MR_Word ConvOutputStmts_36;
    MR_Word Detism_37;
    MR_Word TailRecInfo0_48;
    MR_Word TargetMap0_49;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word _ArgTuples_22;
    MR_Word _FuncProcLabel_25;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word TargetInfo0_50;
    MR_Box conv8_TargetInfo0_50;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_54, &ModuleInfo_20);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_12));
    }
    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_20, PredProcId_21, &_ArgTuples_22, &Params_23);
    Signature_24 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_23);
    ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(PredProcId_21, &_FuncProcLabel_25, &FuncRval_26, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_56_56);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_27, &ProcInfo_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &CalleeArgTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &CalleeArgModes_31);
    ml_backend__ml_args_util__ml_gen_args_14_p_1(PredOrFunc_29, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_30, CalleeArgModes_31, CallerArgs_15, &InputRvals_32, &OutputLvals_33, &OutputTypes_34, &ConvOutputDefns_35, &ConvOutputStmts_36, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Detism_37);
    succeeded = (ConvOutputDefns_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(Signature_24, FuncRval_26, InputRvals_32, OutputLvals_33, OutputTypes_34, Detism_37, Context_14, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
    else
    {
      MR_Word DoGenCall_38;
      MR_Word DoGenConvOutputAndSucceed_39;
      MR_Word CallAndConvOutputLocalVarDefns_45;

      {
        DoGenCall_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_1));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 3) = ((MR_Box) (Signature_24));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 4) = ((MR_Box) (FuncRval_26));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 5) = ((MR_Box) (InputRvals_32));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 6) = ((MR_Box) (OutputLvals_33));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 7) = ((MR_Box) (OutputTypes_34));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 8) = ((MR_Box) (Detism_37));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 9) = ((MR_Box) (Context_14));
      }
      {
        DoGenConvOutputAndSucceed_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 5) = ((MR_Box) (ConvOutputStmts_36));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_38, DoGenConvOutputAndSucceed_39, &CallAndConvOutputLocalVarDefns_45, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
      *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvOutputDefns_35, CallAndConvOutputLocalVarDefns_45);
    }
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_59_59, &TailRecInfo0_48);
    TargetMap0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 0)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 1)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 2)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 3)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 4)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 5)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap0_49, ((MR_Box) (PredProcId_21)), &conv8_TargetInfo0_50);
    if (succeeded)
    {
      TargetInfo0_50 = ((MR_Word) conv8_TargetInfo0_50);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TargetInfo_51;
      MR_Word TargetMap_52;
      MR_Word TailRecInfo_53;
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 0)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 1)));
      MR_Word Var_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_83;

      {
        TargetInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TargetInfo_51, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), TargetInfo_51, 1) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), TargetInfo_51, 2) = ((MR_Box) ((Var_80 | ((((Var_81 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      }
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_21)), ((MR_Box) (TargetInfo_51)), TargetMap0_49, &TargetMap_52);
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 0)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 1)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 2)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 3)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 4)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 5)));
      {
        TailRecInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 0) = ((MR_Box) (TargetMap_52));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 1) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 2) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 3) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 4) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 5) = ((MR_Box) (Var_88));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_53, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_55);
    }
    else
      *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_59_59;
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word CodeModel_13,
  MR_Word GoalInfo_14,
  MR_Word ArgVars_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word Context_20;

    Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_14, (MR_Integer) 11);
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0(PredId_11, ProcId_12, CodeModel_13, Context_20, ArgVars_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    else
    {
      MR_Word CallerArgs_21;

      CallerArgs_21 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_15);
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0(PredId_11, ProcId_12, CodeModel_13, Context_20, CallerArgs_21, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__366__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__365__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__363__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ArgVars_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
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
    MR_Word OutputLvals_28;
    MR_Word OutputTypes_29;
    MR_Word ConvOutputDefns_30;
    MR_Word ConvOutputStmts_31;
    MR_Word TailRecInfo0_32;
    MR_Word TailRecMap0_33;
    MR_Word PredProcId_34;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word Var_67;
    MR_Word Var_71;
    MR_Word Var_75;
    MR_Word Var_79;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word TailRecTargetInfo0_35;
    MR_Word Var_83;
    MR_Box conv0_TailRecTargetInfo0_35;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_20);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_21, &ProcInfo_22);
    PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &CalleeArgTypes_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &CalleeArgModes_25);
    CallerArgs_26 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_15);
    ml_backend__ml_args_util__ml_gen_args_14_p_0(PredOrFunc_23, CodeModel_13, Context_14, (MR_Integer) 0, CalleeArgTypes_24, CalleeArgModes_25, CallerArgs_26, &InputRvals_27, &OutputLvals_28, &OutputTypes_29, &ConvOutputDefns_30, &ConvOutputStmts_31, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_66_66);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (OutputLvals_28));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "OutputLvals != []");
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (OutputTypes_29));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "OutputTypes != []");
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ConvOutputDefns_30));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputDefns != []");
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_4));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (ConvOutputStmts_31));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputStmts != []");
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_66_66, &TailRecInfo0_32);
    TailRecMap0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
    {
      PredProcId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_34, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_34, 1) = ((MR_Box) (ProcId_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TailRecMap0_33, ((MR_Box) (PredProcId_34)), &conv0_TailRecTargetInfo0_35);
    if (succeeded)
    {
      TailRecTargetInfo0_35 = ((MR_Word) conv0_TailRecTargetInfo0_35);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_83 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(InputRvals_27);
      succeeded = (Var_83 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_164_164;
      MR_Word CommentStmt_36;
      MR_Word ModuleName_37;
      MR_Word MLDS_ModuleName_38;
      MR_Word IdInTSCC_39;
      MR_Word FuncInputArgs_40;
      MR_Word HaveDoneSelfTailRec0_41;
      MR_Word HaveDoneMutualTailRec0_42;
      MR_Word HaveDoneNonTailRec_43;
      MR_Word InitStmts_44;
      MR_Word AssignStmts_45;
      MR_Word LoopKind_46;
      MR_Word TsccKind_47;
      MR_Word SetSelectorStmts_48;
      MR_Word GotoTarget_51;
      MR_Word GotoStmt_53;
      MR_Word CurPredId_54;
      MR_Integer CurProcId_55;
      MR_Word Var_94;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_101;
      MR_Word Var_120;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;

      {
        CommentStmt_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[5])));
        MR_hl_field(MR_mktag(3), CommentStmt_36, 2) = ((MR_Box) (Context_14));
      }
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(STATE_VARIABLE_Info_66_66, &ModuleName_37);
      MLDS_ModuleName_38 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_37);
      IdInTSCC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_35, (MR_Integer) 0)));
      FuncInputArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_35, (MR_Integer) 1)));
      HaveDoneSelfTailRec0_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_35, (MR_Integer) 2)))) & (MR_Integer) 1);
      HaveDoneMutualTailRec0_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_35, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      HaveDoneNonTailRec_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_35, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(MLDS_ModuleName_38, Context_14, FuncInputArgs_40, InputRvals_27, &InitStmts_44, &AssignStmts_45, LocalVarDefns_16);
      *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
      TsccKind_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
      LoopKind_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
      Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
      Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
      Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
      switch (LoopKind_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StartLabel_52;

            SetSelectorStmts_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            StartLabel_52 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_47, IdInTSCC_39);
            {
              GotoTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GotoTarget_51, 0) = ((MR_Box) (StartLabel_52));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            switch (TsccKind_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer TsccProcNum_49 = (MR_Integer) IdInTSCC_39;
                  MR_Word SetSelectorStmt_50;
                  MR_Word Var_86;
                  MR_Word Var_87;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;

                  Var_90 = ml_backend__ml_code_util__ml_int_type_0_f_0();
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[8])));
                    MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (Var_90));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (TsccProcNum_49));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
                  }
                  {
                    Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Var_87));
                    MR_hl_field(MR_mktag(2), Var_86, 1) = ((MR_Box) (Var_91));
                  }
                  {
                    SetSelectorStmt_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_50, 1) = ((MR_Box) (Var_86));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_50, 2) = ((MR_Box) (Context_14));
                  }
                  {
                    SetSelectorStmts_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SetSelectorStmts_48, 0) = ((MR_Box) (SetSelectorStmt_50));
                    MR_hl_field(MR_mktag(1), SetSelectorStmts_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 0:
                SetSelectorStmts_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            GotoTarget_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          }
          break;
      }
      {
        GotoStmt_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GotoStmt_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), GotoStmt_53, 1) = ((MR_Box) (GotoTarget_51));
        MR_hl_field(MR_mktag(3), GotoStmt_53, 2) = ((MR_Box) (Context_14));
      }
      TypeCtorInfo_164_164 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (CommentStmt_36));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (GotoStmt_53));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_98 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_164_164, SetSelectorStmts_48, Var_99);
      Var_97 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_164_164, AssignStmts_45, Var_98);
      Var_96 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_164_164, InitStmts_44, Var_97);
      *Stmts_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_164_164, Var_94, Var_96);
      ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_66_66, &Var_101);
      CurPredId_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 0)));
      CurProcId_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 1)));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_11, CurPredId_54);
      if (succeeded)
        succeeded = (ProcId_12 == CurProcId_55);
      if (succeeded)
        switch (HaveDoneSelfTailRec0_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_66_66;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TailRecTargetInfo_56;
              MR_Word TailRecMap_57;
              MR_Word TailRecInfo_58;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_130;

              {
                TailRecTargetInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 0) = ((MR_Box) (IdInTSCC_39));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 1) = ((MR_Box) (FuncInputArgs_40));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 2) = ((MR_Box) (((MR_Integer) 1 | ((((HaveDoneMutualTailRec0_42 << (MR_Integer) 1)) | ((HaveDoneNonTailRec_43 << (MR_Integer) 2)))))));
              }
              mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_34)), ((MR_Box) (TailRecTargetInfo_56)), TailRecMap0_33, &TailRecMap_57);
              Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
              Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
              Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
              Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
              Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
              Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
              {
                TailRecInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 0) = ((MR_Box) (TailRecMap_57));
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 1) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 2) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 3) = ((MR_Box) (Var_133));
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 4) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(0), TailRecInfo_58, 5) = ((MR_Box) (Var_135));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_58, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_64);
            }
            break;
        }
      else
        switch (HaveDoneMutualTailRec0_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_66_66;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TailRecTargetInfo_108;
              MR_Word TailRecMap_109;
              MR_Word TailRecInfo_110;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_136;

              {
                TailRecTargetInfo_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_108, 0) = ((MR_Box) (IdInTSCC_39));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_108, 1) = ((MR_Box) (FuncInputArgs_40));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_108, 2) = ((MR_Box) ((HaveDoneSelfTailRec0_41 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((HaveDoneNonTailRec_43 << (MR_Integer) 2)))))));
              }
              mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_34)), ((MR_Box) (TailRecTargetInfo_108)), TailRecMap0_33, &TailRecMap_109);
              Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
              Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
              Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
              Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
              Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
              Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
              {
                TailRecInfo_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 0) = ((MR_Box) (TailRecMap_109));
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 1) = ((MR_Box) (Var_137));
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 2) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 3) = ((MR_Box) (Var_139));
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 4) = ((MR_Box) (Var_140));
                MR_hl_field(MR_mktag(0), TailRecInfo_110, 5) = ((MR_Box) (Var_141));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_110, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_64);
            }
            break;
        }
    }
    else
    {
      MR_Word CallerPredProcId_59;
      MR_Word WarnParams_60;
      MR_Word Specs0_61;
      MR_Word Specs_62;
      MR_Word STATE_VARIABLE_Info_106_106;
      MR_Word TailRecInfo_114;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_157;

      ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_66_66, &CallerPredProcId_59);
      Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
      Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
      Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
      Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
      WarnParams_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
      Specs0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
      hlds__mark_tail_calls__maybe_report_nontail_recursive_call_7_p_0(ModuleInfo_20, CallerPredProcId_59, PredProcId_34, Context_14, WarnParams_60, Specs0_61, &Specs_62);
      Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 0)));
      Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 1)));
      Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 2)));
      Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 3)));
      Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 4)));
      Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_32, (MR_Integer) 5)));
      {
        TailRecInfo_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 0) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 1) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 2) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 3) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 4) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), TailRecInfo_114, 5) = ((MR_Box) (Specs_62));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_114, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_106_106);
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0(PredId_11, ProcId_12, CodeModel_13, Context_14, CallerArgs_26, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_106_106, STATE_VARIABLE_Info_64);
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_60;
    MR_Word conv6_LambdaHeadVar__2_61;
    MR_Word conv5_LambdaHeadVar__3_62;
    MR_Word conv4_LambdaHeadVar__5_64;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_60, &conv6_LambdaHeadVar__2_61, &conv5_LambdaHeadVar__3_62, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_64);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_60));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_61));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_62));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_64));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LocalVarDefns_20;
    MR_Word conv2_FuncDefns_21;
    MR_Word conv1_Stmts_22;
    MR_Word conv0_STATE_VARIABLE_Info_39;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv3_LocalVarDefns_20, &conv2_FuncDefns_21, &conv1_Stmts_22, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_39);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_20));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_21));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_39));
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word CallerArgs_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_20;
    MR_Word PredProcId_21;
    MR_Word Params_23;
    MR_Word Signature_24;
    MR_Word FuncRval_26;
    MR_Word PredInfo_27;
    MR_Word ProcInfo_28;
    MR_Word PredOrFunc_29;
    MR_Word CalleeArgTypes_30;
    MR_Word CalleeArgModes_31;
    MR_Word InputRvals_32;
    MR_Word OutputLvals_33;
    MR_Word OutputTypes_34;
    MR_Word ConvOutputDefns_35;
    MR_Word ConvOutputStmts_36;
    MR_Word Detism_37;
    MR_Word TailRecInfo0_48;
    MR_Word TargetMap0_49;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word _ArgTuples_22;
    MR_Word _FuncProcLabel_25;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word TargetInfo0_50;
    MR_Box conv8_TargetInfo0_50;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_54, &ModuleInfo_20);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_12));
    }
    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_20, PredProcId_21, &_ArgTuples_22, &Params_23);
    Signature_24 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_23);
    ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(PredProcId_21, &_FuncProcLabel_25, &FuncRval_26, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_56_56);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_27, &ProcInfo_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &CalleeArgTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &CalleeArgModes_31);
    ml_backend__ml_args_util__ml_gen_args_14_p_0(PredOrFunc_29, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_30, CalleeArgModes_31, CallerArgs_15, &InputRvals_32, &OutputLvals_33, &OutputTypes_34, &ConvOutputDefns_35, &ConvOutputStmts_36, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Detism_37);
    succeeded = (ConvOutputDefns_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(Signature_24, FuncRval_26, InputRvals_32, OutputLvals_33, OutputTypes_34, Detism_37, Context_14, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
    else
    {
      MR_Word DoGenCall_38;
      MR_Word DoGenConvOutputAndSucceed_39;
      MR_Word CallAndConvOutputLocalVarDefns_45;

      {
        DoGenCall_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 3) = ((MR_Box) (Signature_24));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 4) = ((MR_Box) (FuncRval_26));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 5) = ((MR_Box) (InputRvals_32));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 6) = ((MR_Box) (OutputLvals_33));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 7) = ((MR_Box) (OutputTypes_34));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 8) = ((MR_Box) (Detism_37));
        MR_hl_field(MR_mktag(0), DoGenCall_38, 9) = ((MR_Box) (Context_14));
      }
      {
        DoGenConvOutputAndSucceed_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_39, 5) = ((MR_Box) (ConvOutputStmts_36));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_38, DoGenConvOutputAndSucceed_39, &CallAndConvOutputLocalVarDefns_45, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
      *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvOutputDefns_35, CallAndConvOutputLocalVarDefns_45);
    }
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_59_59, &TailRecInfo0_48);
    TargetMap0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 0)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 1)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 2)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 3)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 4)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 5)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap0_49, ((MR_Box) (PredProcId_21)), &conv8_TargetInfo0_50);
    if (succeeded)
    {
      TargetInfo0_50 = ((MR_Word) conv8_TargetInfo0_50);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TargetInfo_51;
      MR_Word TargetMap_52;
      MR_Word TailRecInfo_53;
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 0)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 1)));
      MR_Word Var_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_50, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_83;

      {
        TargetInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TargetInfo_51, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), TargetInfo_51, 1) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), TargetInfo_51, 2) = ((MR_Box) ((Var_80 | ((((Var_81 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      }
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_21)), ((MR_Box) (TargetInfo_51)), TargetMap0_49, &TargetMap_52);
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 0)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 1)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 2)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 3)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 4)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_48, (MR_Integer) 5)));
      {
        TailRecInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 0) = ((MR_Box) (TargetMap_52));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 1) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 2) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 3) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 4) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), TailRecInfo_53, 5) = ((MR_Box) (Var_88));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_53, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_55);
    }
    else
      *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_59_59;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(
  MR_Word PredProcId_6,
  MR_Word * ProcLabel_7,
  MR_Word * CodeAddrRval_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word PredLabel_11;
    MR_Word PredModule_12;
    MR_Word Params_14;
    MR_Word Signature_17;
    MR_Integer ProcId_19;
    MR_Word FuncLabel_20;
    MR_Word QualFuncLabel_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word _ArgTuples_13;
    MR_Word _ByRefOutputVars_15;
    MR_Word _CopiedOutputVars_16;
    MR_Word _PredId_18;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_22, &ModuleInfo_10);
    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_10, PredProcId_6, &PredLabel_11, &PredModule_12);
    ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_6, &_ArgTuples_13, &Params_14, &_ByRefOutputVars_15, &_CopiedOutputVars_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    Signature_17 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_14);
    _PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0)));
    ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ProcLabel_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredLabel_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_19));
    }
    {
      FuncLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_20, 0) = ((MR_Box) (*ProcLabel_7));
      MR_hl_field(MR_mktag(0), FuncLabel_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      QualFuncLabel_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncLabel_21, 0) = ((MR_Box) (PredModule_12));
      MR_hl_field(MR_mktag(0), QualFuncLabel_21, 1) = ((MR_Box) (FuncLabel_20));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (QualFuncLabel_21));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Signature_17));
    }
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *CodeAddrRval_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_26));
    }
  }
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
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GenericCall_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(GenericCall_11, ArgVars_12, ArgModes_13, Determinism_14, Context_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(GenericCall_11, ArgVars_12, ArgModes_13, Determinism_14, Context_15, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        break;
      case (MR_Integer) 2:
        {
          *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgLvals_43;
          MR_Word ArgTypes_44;
          MR_Word SrcVar_45;
          MR_Word DestVar_46;
          MR_Word SrcLval_47;
          MR_Word DestLval_48;
          MR_Word SrcType_49;
          MR_Word DestType_50;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;

          ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_0_30, ArgVars_12, &ArgLvals_43);
          ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_30, ArgVars_12, &ArgTypes_44);
          succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            SrcVar_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0)));
            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              DestVar_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1)));
              succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ArgLvals_43)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SrcLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLvals_43, (MR_Integer) 0)));
                  Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgLvals_43, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    DestLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0)));
                    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1)));
                    succeeded = (Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgTypes_44)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        SrcType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_44, (MR_Integer) 0)));
                        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_44, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          DestType_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                          succeeded = (Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ModuleInfo_51;
            MR_Word IsDummy_52;
            MR_Word GroundTerm_55;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_51);
            IsDummy_52 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_51, DestType_50);
            switch (IsDummy_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CastRval_53;
                  MR_Word Assign_54;
                  MR_Word Var_63;

                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (SrcLval_47));
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_51, SrcType_49, DestType_50, (MR_Integer) 0, Var_63, &CastRval_53);
                  Assign_54 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(DestLval_48, CastRval_53, Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Assign_54));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
            *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_30, SrcVar_45, &GroundTerm_55);
            if (succeeded)
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(DestVar_46, GroundTerm_55, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
            else
              *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/7", (MR_String) "wrong number of args for cast");
              return;
            }
          }
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__1_121;
    MR_Word conv6_LambdaHeadVar__2_122;
    MR_Word conv5_LambdaHeadVar__3_123;
    MR_Word conv4_LambdaHeadVar__5_125;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__254__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_121, &conv6_LambdaHeadVar__2_122, &conv5_LambdaHeadVar__3_123, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_125);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_121));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_122));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_123));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_125));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LocalVarDefns_20;
    MR_Word conv2_FuncDefns_21;
    MR_Word conv1_Stmts_22;
    MR_Word conv0_STATE_VARIABLE_Info_39;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv3_LocalVarDefns_20, &conv2_FuncDefns_21, &conv1_Stmts_22, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_39);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_20));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_21));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_39));
  }
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
  {
    MR_bool succeeded;
    MR_Integer NumArgs_20;
    MR_Word BoxedArgTypes_21;
    MR_Word ModuleInfo_22;
    MR_Word VarSet_23;
    MR_Word ArgNames_24;
    MR_Word PredOrFunc_25;
    MR_Word CodeModel_26;
    MR_Word Params0_28;
    MR_Word ClosureArgType_30;
    MR_Word ArgParams0_32;
    MR_Word RetParam_33;
    MR_Word Params_34;
    MR_Word Signature_35;
    MR_Word ClosureLval_40;
    MR_Word FuncType_43;
    MR_Word FuncRval_44;
    MR_Word ConvVarSeq_55;
    MR_Integer ConvVarNum_56;
    MR_Word FuncVarName_57;
    MR_Word FuncVarDecl_58;
    MR_Word FuncVarLval_59;
    MR_Word AssignFuncVar_60;
    MR_Word FuncVarRval_61;
    MR_Word CallerArgs_62;
    MR_Word InputRvals_63;
    MR_Word OutputLvals_64;
    MR_Word OutputTypes_65;
    MR_Word ConvArgLocalVarDefns_66;
    MR_Word ConvOutputStmts_67;
    MR_Word ClosureRval_68;
    MR_Word LocalVarDefns0_69;
    MR_Word Stmts0_71;
    MR_Word Var_86;
    MR_Word STATE_VARIABLE_Info_112_112;
    MR_Word Var_113;
    MR_Word STATE_VARIABLE_Info_115_115;
    MR_Word Var_117;
    MR_Word _ArgTuples_27;

    NumArgs_20 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ArgVars_12);
    BoxedArgTypes_21 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(NumArgs_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_22);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_82, &VarSet_23);
    ArgNames_24 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_23, ArgVars_12);
    PredOrFunc_25 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(GenericCall_11);
    hlds__code_model__determinism_to_code_model_2_p_0(Determinism_14, &CodeModel_26);
    ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_9_p_0(ModuleInfo_22, PredOrFunc_25, CodeModel_26, ArgVars_12, ArgNames_24, BoxedArgTypes_21, ArgModes_13, &_ArgTuples_27, &Params0_28);
    ClosureArgType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ArgParams0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_28, (MR_Integer) 0)));
    RetParam_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_28, (MR_Integer) 1)));
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (ArgParams0_32));
    }
    {
      Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_34, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Params_34, 1) = ((MR_Box) (RetParam_33));
    }
    Signature_35 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_34);
    if (((MR_tag((MR_Word) GenericCall_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeClassInfoVar_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 0)));
      MR_Integer MethodNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 1)));
      MR_Word BaseTypeclassInfoLval_51;
      MR_Integer Offset_52;
      MR_Integer MethodFieldNum_53;
      MR_Word MethodFieldId_54;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_98;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word FuncLval_127;
      MR_Word _ClassId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 2)));
      MR_Word _PredName_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, TypeClassInfoVar_45, &ClosureLval_40);
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0]);
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (ClosureLval_40));
      }
      {
        BaseTypeclassInfoLval_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 4) = ((MR_Box) (ClosureArgType_30));
      }
      Offset_52 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
      MethodFieldNum_53 = (MethodNum_46 + Offset_52);
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_95, 0) = ((MR_Box) (MethodFieldNum_53));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
      }
      {
        MethodFieldId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MethodFieldId_54, 0) = ((MR_Box) (Var_94));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_98, 0) = ((MR_Box) (BaseTypeclassInfoLval_51));
      }
      {
        FuncLval_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_127, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), FuncLval_127, 1) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), FuncLval_127, 2) = ((MR_Box) (MethodFieldId_54));
        MR_hl_field(MR_mktag(0), FuncLval_127, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_127, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      FuncType_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_34);
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FuncType_43));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_102, 0) = ((MR_Box) (FuncLval_127));
      }
      {
        FuncRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_44, 1) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(3), FuncRval_44, 2) = ((MR_Box) (Var_102));
      }
    }
    else
    {
      MR_Word ClosureVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 0)));
      MR_Word FuncLval_42;
      MR_Word Var_108;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word _Purity_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 1)));
      MR_Word _PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 2)));
      MR_Integer _Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, ClosureVar_36, &ClosureLval_40);
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (ClosureLval_40));
      }
      {
        FuncLval_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), FuncLval_42, 1) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), FuncLval_42, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), FuncLval_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_42, 4) = ((MR_Box) (ClosureArgType_30));
      }
      FuncType_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_34);
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (FuncType_43));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_111, 0) = ((MR_Box) (FuncLval_42));
      }
      {
        FuncRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_44, 1) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(3), FuncRval_44, 2) = ((MR_Box) (Var_111));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_55, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_112_112);
    ConvVarNum_56 = (MR_Integer) ConvVarSeq_55;
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (ConvVarNum_56));
    }
    {
      FuncVarName_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FuncVarName_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), FuncVarName_57, 1) = ((MR_Box) (Var_113));
    }
    FuncVarDecl_58 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(FuncVarName_57, FuncType_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_15);
    {
      FuncVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FuncVarLval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FuncVarLval_59, 1) = ((MR_Box) (FuncVarName_57));
      MR_hl_field(MR_mktag(3), FuncVarLval_59, 2) = ((MR_Box) (FuncType_43));
    }
    AssignFuncVar_60 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FuncVarLval_59, FuncRval_44, Context_15);
    {
      FuncVarRval_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), FuncVarRval_61, 0) = ((MR_Box) (FuncVarLval_59));
    }
    CallerArgs_62 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_12);
    ml_backend__ml_args_util__ml_gen_args_14_p_0(PredOrFunc_25, CodeModel_26, Context_15, (MR_Integer) 1, BoxedArgTypes_21, ArgModes_13, CallerArgs_62, &InputRvals_63, &OutputLvals_64, &OutputTypes_65, &ConvArgLocalVarDefns_66, &ConvOutputStmts_67, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_115_115);
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_117, 0) = ((MR_Box) (ClosureLval_40));
    }
    {
      ClosureRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[4])));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 2) = ((MR_Box) (Var_117));
    }
    succeeded = (ConvArgLocalVarDefns_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word Var_118;

      {
        Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (ClosureRval_68));
        MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (InputRvals_63));
      }
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(Signature_35, FuncVarRval_61, Var_118, OutputLvals_64, OutputTypes_65, Determinism_14, Context_15, &LocalVarDefns0_69, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_115_115, STATE_VARIABLE_Info_83);
    }
    else
    {
      MR_Word DoGenCall_72;
      MR_Word DoGenConvOutputAndSucceed_73;
      MR_Word CallAndConvOutputLocalVarDefns_79;
      MR_Word Var_120;

      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ClosureRval_68));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (InputRvals_63));
      }
      {
        DoGenCall_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 3) = ((MR_Box) (Signature_35));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 4) = ((MR_Box) (FuncVarRval_61));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 5) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 6) = ((MR_Box) (OutputLvals_64));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 7) = ((MR_Box) (OutputTypes_65));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 8) = ((MR_Box) (Determinism_14));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 9) = ((MR_Box) (Context_15));
      }
      {
        DoGenConvOutputAndSucceed_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 4) = ((MR_Box) (CodeModel_26));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_73, 5) = ((MR_Box) (ConvOutputStmts_67));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_26, Context_15, DoGenCall_72, DoGenConvOutputAndSucceed_73, &CallAndConvOutputLocalVarDefns_79, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_115_115, STATE_VARIABLE_Info_83);
      LocalVarDefns0_69 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvArgLocalVarDefns_66, CallAndConvOutputLocalVarDefns_79);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LocalVarDefns_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncVarDecl_58));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LocalVarDefns0_69));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignFuncVar_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts0_71));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word Signature_13,
  MR_Word FuncRval_14,
  MR_Word ArgRvals0_15,
  MR_Word RetLvals0_16,
  MR_Word RetTypes0_17,
  MR_Word Detism_18,
  MR_Word Context_19,
  MR_Word * LocalVarDefns_20,
  MR_Word * FuncDefns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_24;
    MR_Word ArgRvals_30;
    MR_Word RetLvals_32;
    MR_Word CallKind_34;
    MR_Word Warnings_35;
    MR_Word Markers_36;
    MR_Word Stmt_37;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_18, &CodeModel_24);
    switch (CodeModel_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ArgRvals_30 = ArgRvals0_15;
          RetLvals_32 = RetLvals0_16;
          *FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cont_25;
          MR_Word FuncPtrRval_26;
          MR_Word EnvPtrRval_27;
          MR_Word NondetCopyOut_31;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_28;
          MR_Word Var_29;

          ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(RetTypes0_17, RetLvals0_16, Context_19, &Cont_25, FuncDefns_21, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          FuncPtrRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 0)));
          EnvPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 1)));
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 2)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 3)));
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (EnvPtrRval_27));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FuncPtrRval_26));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
          }
          ArgRvals_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ArgRvals0_15, Var_42);
          ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(*STATE_VARIABLE_Info_39, &NondetCopyOut_31);
          switch (NondetCopyOut_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              RetLvals_32 = RetLvals0_16;
              break;
            case (MR_Integer) 1:
              RetLvals_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Success_33;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&Success_33, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          ArgRvals_30 = ArgRvals0_15;
          {
            RetLvals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RetLvals_32, 0) = ((MR_Box) (Success_33));
            MR_hl_field(MR_mktag(1), RetLvals_32, 1) = ((MR_Box) (RetLvals0_16));
          }
          *FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    *LocalVarDefns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (Detism_18 == (MR_Integer) 6);
    if (succeeded)
      CallKind_34 = (MR_Integer) 0;
    else
      CallKind_34 = (MR_Integer) 2;
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(*STATE_VARIABLE_Info_39, &Warnings_35);
    succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, Warnings_35, ((MR_Box) ((MR_Integer) 1)));
    if (succeeded)
    {
      Markers_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &Markers_36);
    }
    {
      Stmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Stmt_37, 1) = ((MR_Box) (Signature_13));
      MR_hl_field(MR_mktag(3), Stmt_37, 2) = ((MR_Box) (FuncRval_14));
      MR_hl_field(MR_mktag(3), Stmt_37, 3) = ((MR_Box) (ArgRvals_30));
      MR_hl_field(MR_mktag(3), Stmt_37, 4) = ((MR_Box) (RetLvals_32));
      MR_hl_field(MR_mktag(3), Stmt_37, 5) = ((MR_Box) (CallKind_34));
      MR_hl_field(MR_mktag(3), Stmt_37, 6) = ((MR_Box) (Markers_36));
      MR_hl_field(MR_mktag(3), Stmt_37, 7) = ((MR_Box) (Context_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_37));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
  MR_Word OutputArgTypes_8,
  MR_Word OutputArgLvals_9,
  MR_Word Context_10,
  MR_Word * Cont_11,
  MR_Word * ContDecls_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word CurrentCont_14;
    MR_Word CurrentContArgTypes_17;
    MR_Word CurrentContArgLvals_18;
    MR_Word _FuncPtrRval_15;
    MR_Word _EnvPtrRval_16;
    MR_Word TypeInfo_42_42;

    ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(STATE_VARIABLE_Info_0_28, &CurrentCont_14);
    _FuncPtrRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_14, (MR_Integer) 0)));
    _EnvPtrRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_14, (MR_Integer) 1)));
    CurrentContArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_14, (MR_Integer) 2)));
    CurrentContArgLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_14, (MR_Integer) 3)));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (CurrentContArgTypes_17)), ((MR_Box) (OutputArgTypes_8)));
    if (succeeded)
    {
      TypeInfo_42_42 = (MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (CurrentContArgLvals_18)), ((MR_Box) (OutputArgLvals_9)));
    }
    if (succeeded)
    {
      *Cont_11 = CurrentCont_14;
      *ContDecls_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word Params_19;
      MR_Word ContFuncLabel_20;
      MR_Word ContFuncLabelRval_21;
      MR_Word CopyStmts_22;
      MR_Word CallContStmt_23;
      MR_Word CopyStmt_24;
      MR_Word ContFuncDefn_25;
      MR_Word EnvPtrRval_26;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Args0_48;
      MR_Word EnvPtrArg_49;
      MR_Word Args_50;
      MR_Word Var_52;

      ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(OutputArgTypes_8, (MR_Integer) 1, &Args0_48);
      ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&EnvPtrArg_49);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (EnvPtrArg_49));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Args_50 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Args0_48, Var_52);
      {
        Params_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Params_19, 0) = ((MR_Box) (Args_50));
        MR_hl_field(MR_mktag(0), Params_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Params_19));
      }
      ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(Var_31, &ContFuncLabel_20, &ContFuncLabelRval_21, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
      ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_5_p_0(OutputArgLvals_9, OutputArgTypes_8, (MR_Integer) 1, Context_10, &CopyStmts_22);
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_10, &CallContStmt_23, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CallContStmt_23));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CopyStmts_22, Var_37);
      CopyStmt_24 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_36, Context_10);
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*STATE_VARIABLE_Info_29, ContFuncLabel_20, Params_19, Context_10, CopyStmt_24, &ContFuncDefn_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ContDecls_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ContFuncDefn_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *Cont_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ContFuncLabelRval_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvPtrRval_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OutputArgTypes_8));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OutputArgLvals_9));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_Word Context_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_loop\'/5", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_loop\'/5", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Types_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Stmt_28;
      MR_Word Stmts_29;
      MR_Word ArgName_30;
      MR_Word ArgLval_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Integer Var_34;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (ArgNum_3));
      }
      {
        ArgName_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgName_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), ArgName_30, 1) = ((MR_Box) (Var_32));
      }
      {
        ArgLval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgLval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ArgLval_31, 1) = ((MR_Box) (ArgName_30));
        MR_hl_field(MR_mktag(3), ArgLval_31, 2) = ((MR_Box) (Type_24));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (ArgLval_31));
      }
      Stmt_28 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(Var_37, Var_33, Context_4);
      Var_34 = (ArgNum_3 + (MR_Integer) 1);
      ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_5_p_0(Var_36, Types_25, Var_34, Context_4, &Stmts_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_29));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Argument_8;
    MR_Word Arguments_9;
    MR_Word ArgName_10;
    MR_Word Var_12;
    MR_Integer Var_13;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (ArgNum_2));
    }
    {
      ArgName_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArgName_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ArgName_10, 1) = ((MR_Box) (Var_12));
    }
    {
      Argument_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Argument_8, 0) = ((MR_Box) (ArgName_10));
      MR_hl_field(MR_mktag(0), Argument_8, 1) = ((MR_Box) (Type_5));
      MR_hl_field(MR_mktag(0), Argument_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_13 = (ArgNum_2 + (MR_Integer) 1);
    ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(Types_6, Var_13, &Arguments_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Argument_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Arguments_9));
    }
  }
}

void mercury__ml_backend__ml_call_gen__init(void)
{
}

void mercury__ml_backend__ml_call_gen__init_type_tables(void)
{
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
