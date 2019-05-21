/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-14
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ml_backend.ml_call_gen. */
/* :- implementation. */

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
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__371__1_2_p_0(
  MR_Word ConvOutputStmts_36,
  MR_Word HeadVar__2_87);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__370__1_2_p_0(
  MR_Word ConvOutputDefns_35,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__369__1_2_p_0(
  MR_Word OutputTypes_34,
  MR_Word HeadVar__2_79);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__368__1_2_p_0(
  MR_Word OutputLvals_33,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__350__1_2_p_0(
  MR_Word ForClosureWrapper_21,
  MR_Word HeadVar__2_68);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__256__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_123,
  MR_Word * LambdaHeadVar__2_124,
  MR_Word * LambdaHeadVar__3_125,
  MR_Word LambdaHeadVar__4_126,
  MR_Word * LambdaHeadVar__5_127);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__523__1_8_p_0(
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word ConvOutputStmts_41,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0(
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word ArgNames_16,
  MR_Word ArgLvals_17,
  MR_Word ActualArgTypes_18,
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word ForClosureWrapper_21,
  MR_Word * LocalVarDefns_22,
  MR_Word * FuncDefns_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_1(
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
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

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
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

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


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][15];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[5][5];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[8][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
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

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 4 */
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
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__371__1_2_p_0(
  MR_Word ConvOutputStmts_36,
  MR_Word HeadVar__2_87)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[4], ((MR_Box) (ConvOutputStmts_36)), ((MR_Box) (HeadVar__2_87)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__370__1_2_p_0(
  MR_Word ConvOutputDefns_35,
  MR_Word HeadVar__2_83)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[3], ((MR_Box) (ConvOutputDefns_35)), ((MR_Box) (HeadVar__2_83)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__369__1_2_p_0(
  MR_Word OutputTypes_34,
  MR_Word HeadVar__2_79)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (OutputTypes_34)), ((MR_Box) (HeadVar__2_79)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__368__1_2_p_0(
  MR_Word OutputLvals_33,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (OutputLvals_33)), ((MR_Box) (HeadVar__2_75)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__350__1_2_p_0(
  MR_Word ForClosureWrapper_21,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded = (ForClosureWrapper_21 == HeadVar__2_68);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__256__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_67,
  MR_Word * LambdaHeadVar__1_123,
  MR_Word * LambdaHeadVar__2_124,
  MR_Word * LambdaHeadVar__3_125,
  MR_Word LambdaHeadVar__4_126,
  MR_Word * LambdaHeadVar__5_127)
{
  {
    MR_Word SucceedStmts_78;

    *LambdaHeadVar__1_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_26, Context_15, &SucceedStmts_78, LambdaHeadVar__4_126, LambdaHeadVar__5_127);
    *LambdaHeadVar__3_125 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_67, SucceedStmts_78);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__523__1_8_p_0(
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word ConvOutputStmts_41,
  MR_Word * LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61,
  MR_Word * LambdaHeadVar__3_62,
  MR_Word LambdaHeadVar__4_63,
  MR_Word * LambdaHeadVar__5_64)
{
  {
    MR_Word SucceedStmts_49;

    *LambdaHeadVar__1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_19, Context_20, &SucceedStmts_49, LambdaHeadVar__4_63, LambdaHeadVar__5_64);
    *LambdaHeadVar__3_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_41, SucceedStmts_49);
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
              MR_Integer Int8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_9;

              {
                Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Int8_8));
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
              MR_Integer UInt8_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_11;

              {
                Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (UInt8_10));
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
              MR_Integer Int16_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_13;

              {
                Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Int16_12));
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
              MR_Integer UInt16_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_15;

              {
                Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (UInt16_14));
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
              MR_Integer Int32_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_17;

              {
                Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Int32_16));
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
              MR_Integer UInt32_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word Var_19;

              {
                Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (UInt32_18));
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

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_14_p_0(
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word ArgNames_17,
  MR_Word ArgLvals_18,
  MR_Word ActualArgTypes_19,
  MR_Word CodeModel_20,
  MR_Word Context_21,
  MR_Word GoalInfo_22,
  MR_Word ForClosureWrapper_23,
  MR_Word * LocalVarDefns_24,
  MR_Word * FuncDefns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_22, (MR_Integer) 11);
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0(PredId_15, ProcId_16, ArgNames_17, ArgLvals_18, ActualArgTypes_19, CodeModel_20, Context_21, ForClosureWrapper_23, LocalVarDefns_24, FuncDefns_25, Stmts_26, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    else
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0(PredId_15, ProcId_16, ArgNames_17, ArgLvals_18, ActualArgTypes_19, CodeModel_20, Context_21, ForClosureWrapper_23, LocalVarDefns_24, FuncDefns_25, Stmts_26, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__371__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__370__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__369__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__368__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__350__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0(
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word ArgNames_16,
  MR_Word ArgLvals_17,
  MR_Word ActualArgTypes_18,
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word ForClosureWrapper_21,
  MR_Word * LocalVarDefns_22,
  MR_Word * FuncDefns_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_26;
    MR_Word PredInfo_27;
    MR_Word ProcInfo_28;
    MR_Word PredOrFunc_29;
    MR_Word PredArgTypes_30;
    MR_Word ArgModes_31;
    MR_Word InputRvals_32;
    MR_Word OutputLvals_33;
    MR_Word OutputTypes_34;
    MR_Word ConvOutputDefns_35;
    MR_Word ConvOutputStmts_36;
    MR_Word TailRecInfo0_37;
    MR_Word TailRecMap0_38;
    MR_Word PredProcId_39;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_71_71;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_80;
    MR_Word Var_84;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word TailRecTargetInfo0_40;
    MR_Word Var_88;
    MR_Box conv0_TailRecTargetInfo0_40;

    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ForClosureWrapper_21));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/13", (MR_String) "tail recursive closure wrapper call");
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo_26);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_14, ProcId_15, &PredInfo_27, &ProcInfo_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &PredArgTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &ArgModes_31);
    ml_backend__ml_args_util__ml_gen_args_18_p_0(ArgNames_16, ArgLvals_17, ActualArgTypes_18, PredArgTypes_30, ArgModes_31, PredOrFunc_29, CodeModel_19, Context_20, ForClosureWrapper_21, (MR_Integer) 0, (MR_Integer) 1, &InputRvals_32, &OutputLvals_33, &OutputTypes_34, &ConvOutputDefns_35, &ConvOutputStmts_36, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_71_71);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_2));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (OutputLvals_33));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/13", (MR_String) "OutputLvals != []");
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_3));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (OutputTypes_34));
      MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/13", (MR_String) "OutputTypes != []");
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_4));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (ConvOutputDefns_35));
      MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/13", (MR_String) "ConvOutputDefns != []");
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_13_p_0_5));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (ConvOutputStmts_36));
      MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/13", (MR_String) "ConvOutputStmts != []");
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_71_71, &TailRecInfo0_37);
    TailRecMap0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 0)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 1)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 2)));
    {
      PredProcId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_39, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), PredProcId_39, 1) = ((MR_Box) (ProcId_15));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TailRecMap0_38, ((MR_Box) (PredProcId_39)), &conv0_TailRecTargetInfo0_40);
    if (succeeded)
    {
      TailRecTargetInfo0_40 = ((MR_Word) conv0_TailRecTargetInfo0_40);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_88 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(InputRvals_32);
      succeeded = (Var_88 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word CommentStmt_41;
      MR_Word ModuleName_42;
      MR_Word MLDS_ModuleName_43;
      MR_Word TailRecMechanism_44;
      MR_Word FuncInputArgs_45;
      MR_Word HaveDone0_46;
      MR_Word InitStmts_47;
      MR_Word AssignStmts_48;
      MR_Word TempDefns_49;
      MR_Word GotoTarget_50;
      MR_Word GotoStmt_52;
      MR_Word AssignVarsStmt_53;
      MR_Word CallReplaceStmts_54;
      MR_Word Stmt_55;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;

      {
        CommentStmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[5])));
        MR_hl_field(MR_mktag(3), CommentStmt_41, 2) = ((MR_Box) (Context_20));
      }
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(STATE_VARIABLE_Info_71_71, &ModuleName_42);
      MLDS_ModuleName_43 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_42);
      TailRecMechanism_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, (MR_Integer) 0)));
      FuncInputArgs_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, (MR_Integer) 1)));
      HaveDone0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_40, (MR_Integer) 2)));
      ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(MLDS_ModuleName_43, Context_20, FuncInputArgs_45, InputRvals_32, &InitStmts_47, &AssignStmts_48, &TempDefns_49);
      if ((TailRecMechanism_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        GotoTarget_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      else
      {
        MR_String StartLabel_51 = ((MR_String) (MR_hl_field(MR_mktag(1), TailRecMechanism_44, (MR_Integer) 0)));

        {
          GotoTarget_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GotoTarget_50, 0) = ((MR_Box) (StartLabel_51));
        }
      }
      {
        GotoStmt_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 1) = ((MR_Box) (GotoTarget_50));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 2) = ((MR_Box) (Context_20));
      }
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, InitStmts_47, AssignStmts_48);
      {
        AssignVarsStmt_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AssignVarsStmt_53, 0) = ((MR_Box) (TempDefns_49));
        MR_hl_field(MR_mktag(0), AssignVarsStmt_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), AssignVarsStmt_53, 2) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), AssignVarsStmt_53, 3) = ((MR_Box) (Context_20));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (GotoStmt_52));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (AssignVarsStmt_53));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
      }
      {
        CallReplaceStmts_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CallReplaceStmts_54, 0) = ((MR_Box) (CommentStmt_41));
        MR_hl_field(MR_mktag(1), CallReplaceStmts_54, 1) = ((MR_Box) (Var_93));
      }
      {
        Stmt_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Stmt_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Stmt_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Stmt_55, 2) = ((MR_Box) (CallReplaceStmts_54));
        MR_hl_field(MR_mktag(0), Stmt_55, 3) = ((MR_Box) (Context_20));
      }
      *LocalVarDefns_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *FuncDefns_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_55));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      switch (HaveDone0_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_64 = STATE_VARIABLE_Info_71_71;
          break;
        case (MR_Integer) 0:
          {
            MR_Word TailRecTargetInfo_56;
            MR_Word TailRecMap_57;
            MR_Word TailRecInfo_58;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_106;

            {
              TailRecTargetInfo_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 0) = ((MR_Box) (TailRecMechanism_44));
              MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 1) = ((MR_Box) (FuncInputArgs_45));
              MR_hl_field(MR_mktag(0), TailRecTargetInfo_56, 2) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_39)), ((MR_Box) (TailRecTargetInfo_56)), TailRecMap0_38, &TailRecMap_57);
            Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 0)));
            Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 1)));
            Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 2)));
            {
              TailRecInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TailRecInfo_58, 0) = ((MR_Box) (TailRecMap_57));
              MR_hl_field(MR_mktag(0), TailRecInfo_58, 1) = ((MR_Box) (Var_107));
              MR_hl_field(MR_mktag(0), TailRecInfo_58, 2) = ((MR_Box) (Var_108));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_58, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_64);
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
      MR_Word STATE_VARIABLE_Info_101_101;
      MR_Word TailRecInfo_103;
      MR_Word Var_109;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;

      ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_71_71, &CallerPredProcId_59);
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 0)));
      WarnParams_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 1)));
      Specs0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 2)));
      hlds__mark_tail_calls__maybe_report_nontail_recursive_call_7_p_0(ModuleInfo_26, CallerPredProcId_59, PredProcId_39, Context_20, WarnParams_60, Specs0_61, &Specs_62);
      Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 0)));
      Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 1)));
      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_37, (MR_Integer) 2)));
      {
        TailRecInfo_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_103, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), TailRecInfo_103, 1) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), TailRecInfo_103, 2) = ((MR_Box) (Specs_62));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_103, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_101_101);
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0(PredId_14, ProcId_15, ArgNames_16, ArgLvals_17, ActualArgTypes_18, CodeModel_19, Context_20, ForClosureWrapper_21, LocalVarDefns_22, FuncDefns_23, Stmts_24, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_64);
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_2(
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

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__523__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_60, &conv6_LambdaHeadVar__2_61, &conv5_LambdaHeadVar__3_62, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_64);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_60));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_61));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_62));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_64));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_1(
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
    MR_Word conv0_STATE_VARIABLE_Info_41;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv3_LocalVarDefns_20, &conv2_FuncDefns_21, &conv1_Stmts_22, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_41);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_20));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_21));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_41));
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0(
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word ArgNames_16,
  MR_Word ArgLvals_17,
  MR_Word ActualArgTypes_18,
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word ForClosureWrapper_21,
  MR_Word * LocalVarDefns_22,
  MR_Word * FuncDefns_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_26;
    MR_Word PredProcId_27;
    MR_Word Params_28;
    MR_Word Signature_29;
    MR_Word FuncRval_31;
    MR_Word PredInfo_32;
    MR_Word ProcInfo_33;
    MR_Word PredOrFunc_34;
    MR_Word PredArgTypes_35;
    MR_Word ArgModes_36;
    MR_Word InputRvals_37;
    MR_Word OutputLvals_38;
    MR_Word OutputTypes_39;
    MR_Word ConvOutputDefns_40;
    MR_Word ConvOutputStmts_41;
    MR_Word Detism_42;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word _FuncProcLabel_30;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_53, &ModuleInfo_26);
    {
      PredProcId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_27, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), PredProcId_27, 1) = ((MR_Box) (ProcId_15));
    }
    Params_28 = ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_2_f_0(ModuleInfo_26, PredProcId_27);
    Signature_29 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_28);
    ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(PredProcId_27, &_FuncProcLabel_30, &FuncRval_31, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_14, ProcId_15, &PredInfo_32, &ProcInfo_33);
    PredOrFunc_34 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_32);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_32, &PredArgTypes_35);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_33, &ArgModes_36);
    ml_backend__ml_args_util__ml_gen_args_18_p_0(ArgNames_16, ArgLvals_17, ActualArgTypes_18, PredArgTypes_35, ArgModes_36, PredOrFunc_34, CodeModel_19, Context_20, ForClosureWrapper_21, (MR_Integer) 1, (MR_Integer) 1, &InputRvals_37, &OutputLvals_38, &OutputTypes_39, &ConvOutputDefns_40, &ConvOutputStmts_41, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_58_58);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_33, &Detism_42);
    succeeded = (ConvOutputDefns_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(Signature_29, FuncRval_31, InputRvals_37, OutputLvals_38, OutputTypes_39, Detism_42, Context_20, LocalVarDefns_22, FuncDefns_23, Stmts_24, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_54);
    else
    {
      MR_Word DoGenCall_43;
      MR_Word DoGenConvOutputAndSucceed_44;
      MR_Word CallAndConvOutputLocalVarDefns_50;

      {
        DoGenCall_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_43, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 3) = ((MR_Box) (Signature_29));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 4) = ((MR_Box) (FuncRval_31));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 5) = ((MR_Box) (InputRvals_37));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 6) = ((MR_Box) (OutputLvals_38));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 7) = ((MR_Box) (OutputTypes_39));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 8) = ((MR_Box) (Detism_42));
        MR_hl_field(MR_mktag(0), DoGenCall_43, 9) = ((MR_Box) (Context_20));
      }
      {
        DoGenConvOutputAndSucceed_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_13_p_0_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 3) = ((MR_Box) (CodeModel_19));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 4) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_44, 5) = ((MR_Box) (ConvOutputStmts_41));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_19, Context_20, DoGenCall_43, DoGenConvOutputAndSucceed_44, &CallAndConvOutputLocalVarDefns_50, FuncDefns_23, Stmts_24, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_54);
      *LocalVarDefns_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvOutputDefns_40, CallAndConvOutputLocalVarDefns_50);
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(
  MR_Word PredProcId_6,
  MR_Word * ProcLabel_7,
  MR_Word * CodeAddrRval_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word PredLabel_11;
    MR_Word PredModule_12;
    MR_Word Params_13;
    MR_Word Signature_14;
    MR_Integer ProcId_16;
    MR_Word FuncLabel_17;
    MR_Word QualFuncLabel_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word _PredId_15;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_19, &ModuleInfo_10);
    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_10, PredProcId_6, &PredLabel_11, &PredModule_12);
    ml_backend__ml_args_util__ml_gen_info_proc_params_4_p_0(PredProcId_6, &Params_13, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    Signature_14 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_13);
    _PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0)));
    ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ProcLabel_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredLabel_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_16));
    }
    {
      FuncLabel_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_17, 0) = ((MR_Box) (*ProcLabel_7));
      MR_hl_field(MR_mktag(0), FuncLabel_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      QualFuncLabel_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncLabel_18, 0) = ((MR_Box) (PredModule_12));
      MR_hl_field(MR_mktag(0), QualFuncLabel_18, 1) = ((MR_Box) (FuncLabel_17));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (QualFuncLabel_18));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Signature_14));
    }
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *CodeAddrRval_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_23));
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
    MR_Word conv7_LambdaHeadVar__1_123;
    MR_Word conv6_LambdaHeadVar__2_124;
    MR_Word conv5_LambdaHeadVar__3_125;
    MR_Word conv4_LambdaHeadVar__5_127;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__256__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_123, &conv6_LambdaHeadVar__2_124, &conv5_LambdaHeadVar__3_125, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_127);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_123));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_124));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_125));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_127));
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
    MR_Word conv0_STATE_VARIABLE_Info_41;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), &conv3_LocalVarDefns_20, &conv2_FuncDefns_21, &conv1_Stmts_22, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_41);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_20));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_21));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_22));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_41));
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
    MR_Word Params0_27;
    MR_Word ClosureArgType_29;
    MR_Word ArgParams0_31;
    MR_Word RetParam_32;
    MR_Word Params_33;
    MR_Word Signature_34;
    MR_Word ClosureLval_39;
    MR_Word FuncType_42;
    MR_Word FuncRval_43;
    MR_Word ConvVarSeq_54;
    MR_Integer ConvVarNum_55;
    MR_Word FuncVarName_56;
    MR_Word FuncVarDecl_57;
    MR_Word FuncVarLval_58;
    MR_Word AssignFuncVar_59;
    MR_Word FuncVarRval_60;
    MR_Word ArgLvals_61;
    MR_Word ActualArgTypes_62;
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
    MR_Word STATE_VARIABLE_Info_117_117;
    MR_Word Var_119;

    NumArgs_20 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ArgVars_12);
    BoxedArgTypes_21 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(NumArgs_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_22);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_82, &VarSet_23);
    ArgNames_24 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_23, ArgVars_12);
    PredOrFunc_25 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(GenericCall_11);
    hlds__code_model__determinism_to_code_model_2_p_0(Determinism_14, &CodeModel_26);
    Params0_27 = ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_6_f_0(ModuleInfo_22, ArgNames_24, BoxedArgTypes_21, ArgModes_13, PredOrFunc_25, CodeModel_26);
    ClosureArgType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ArgParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_27, (MR_Integer) 0)));
    RetParam_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_27, (MR_Integer) 1)));
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (ArgParams0_31));
    }
    {
      Params_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_33, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Params_33, 1) = ((MR_Box) (RetParam_32));
    }
    Signature_34 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_33);
    if (((MR_tag((MR_Word) GenericCall_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeClassInfoVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 0)));
      MR_Integer MethodNum_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 1)));
      MR_Word BaseTypeclassInfoLval_50;
      MR_Integer Offset_51;
      MR_Integer MethodFieldNum_52;
      MR_Word MethodFieldId_53;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_98;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word FuncLval_129;
      MR_Word _ClassId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 2)));
      MR_Word _PredName_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, TypeClassInfoVar_44, &ClosureLval_39);
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0]);
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (ClosureLval_39));
      }
      {
        BaseTypeclassInfoLval_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_50, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_50, 1) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_50, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_50, 4) = ((MR_Box) (ClosureArgType_29));
      }
      Offset_51 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
      MethodFieldNum_52 = (MethodNum_45 + Offset_51);
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_95, 0) = ((MR_Box) (MethodFieldNum_52));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
      }
      {
        MethodFieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MethodFieldId_53, 0) = ((MR_Box) (Var_94));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_98, 0) = ((MR_Box) (BaseTypeclassInfoLval_50));
      }
      {
        FuncLval_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_129, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), FuncLval_129, 1) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), FuncLval_129, 2) = ((MR_Box) (MethodFieldId_53));
        MR_hl_field(MR_mktag(0), FuncLval_129, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_129, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      FuncType_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_33);
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FuncType_42));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_102, 0) = ((MR_Box) (FuncLval_129));
      }
      {
        FuncRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_43, 1) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(3), FuncRval_43, 2) = ((MR_Box) (Var_102));
      }
    }
    else
    {
      MR_Word ClosureVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 0)));
      MR_Word FuncLval_41;
      MR_Word Var_108;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word _Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 1)));
      MR_Word _PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 2)));
      MR_Integer _Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, ClosureVar_35, &ClosureLval_39);
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (ClosureLval_39));
      }
      {
        FuncLval_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), FuncLval_41, 1) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), FuncLval_41, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), FuncLval_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_41, 4) = ((MR_Box) (ClosureArgType_29));
      }
      FuncType_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_33);
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (FuncType_42));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_111, 0) = ((MR_Box) (FuncLval_41));
      }
      {
        FuncRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_43, 1) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(3), FuncRval_43, 2) = ((MR_Box) (Var_111));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_54, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_112_112);
    ConvVarNum_55 = (MR_Integer) ConvVarSeq_54;
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (ConvVarNum_55));
    }
    {
      FuncVarName_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FuncVarName_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), FuncVarName_56, 1) = ((MR_Box) (Var_113));
    }
    FuncVarDecl_57 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(FuncVarName_56, FuncType_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_15);
    {
      FuncVarLval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FuncVarLval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FuncVarLval_58, 1) = ((MR_Box) (FuncVarName_56));
      MR_hl_field(MR_mktag(3), FuncVarLval_58, 2) = ((MR_Box) (FuncType_42));
    }
    AssignFuncVar_59 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FuncVarLval_58, FuncRval_43, Context_15);
    {
      FuncVarRval_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), FuncVarRval_60, 0) = ((MR_Box) (FuncVarLval_58));
    }
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_112_112, ArgVars_12, &ArgLvals_61);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_112_112, ArgVars_12, &ActualArgTypes_62);
    ml_backend__ml_args_util__ml_gen_args_18_p_0(ArgNames_24, ArgLvals_61, ActualArgTypes_62, BoxedArgTypes_21, ArgModes_13, PredOrFunc_25, CodeModel_26, Context_15, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 1, &InputRvals_63, &OutputLvals_64, &OutputTypes_65, &ConvArgLocalVarDefns_66, &ConvOutputStmts_67, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_117_117);
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_119, 0) = ((MR_Box) (ClosureLval_39));
    }
    {
      ClosureRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[4])));
      MR_hl_field(MR_mktag(3), ClosureRval_68, 2) = ((MR_Box) (Var_119));
    }
    succeeded = (ConvArgLocalVarDefns_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word Var_120;

      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ClosureRval_68));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (InputRvals_63));
      }
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(Signature_34, FuncVarRval_60, Var_120, OutputLvals_64, OutputTypes_65, Determinism_14, Context_15, &LocalVarDefns0_69, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Info_83);
    }
    else
    {
      MR_Word DoGenCall_72;
      MR_Word DoGenConvOutputAndSucceed_73;
      MR_Word CallAndConvOutputLocalVarDefns_79;
      MR_Word Var_122;

      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ClosureRval_68));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (InputRvals_63));
      }
      {
        DoGenCall_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 3) = ((MR_Box) (Signature_34));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 4) = ((MR_Box) (FuncVarRval_60));
        MR_hl_field(MR_mktag(0), DoGenCall_72, 5) = ((MR_Box) (Var_122));
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
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_26, Context_15, DoGenCall_72, DoGenConvOutputAndSucceed_73, &CallAndConvOutputLocalVarDefns_79, FuncDefns_17, &Stmts0_71, STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Info_83);
      LocalVarDefns0_69 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvArgLocalVarDefns_66, CallAndConvOutputLocalVarDefns_79);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LocalVarDefns_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncVarDecl_57));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LocalVarDefns0_69));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignFuncVar_59));
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
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_24;
    MR_Word ArgRvals_31;
    MR_Word RetLvals_34;
    MR_Word CallKind_36;
    MR_Word Warnings_37;
    MR_Word Markers_38;
    MR_Word Stmt_39;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_18, &CodeModel_24);
    switch (CodeModel_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ArgRvals_31 = ArgRvals0_15;
          RetLvals_34 = RetLvals0_16;
          *FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cont_25;
          MR_Word FuncPtrRval_26;
          MR_Word EnvPtrRval_27;
          MR_Word UseNestedFuncs_30;
          MR_Word Globals_32;
          MR_Word NondetCopyOut_33;
          MR_Word Var_28;
          MR_Word Var_29;

          ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(RetTypes0_17, RetLvals0_16, Context_19, &Cont_25, FuncDefns_21, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
          FuncPtrRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 0)));
          EnvPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 1)));
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 2)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_25, (MR_Integer) 3)));
          ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*STATE_VARIABLE_Info_41, &UseNestedFuncs_30);
          switch (UseNestedFuncs_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_44;
                MR_Word Var_45;

                {
                  Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (EnvPtrRval_27));
                  MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FuncPtrRval_26));
                  MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
                }
                ArgRvals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ArgRvals0_15, Var_44);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_47;

                {
                  Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (FuncPtrRval_26));
                  MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ArgRvals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ArgRvals0_15, Var_47);
              }
              break;
          }
          ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*STATE_VARIABLE_Info_41, &Globals_32);
          libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 268, &NondetCopyOut_33);
          switch (NondetCopyOut_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              RetLvals_34 = RetLvals0_16;
              break;
            case (MR_Integer) 1:
              RetLvals_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Success_35;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&Success_35, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
          ArgRvals_31 = ArgRvals0_15;
          {
            RetLvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RetLvals_34, 0) = ((MR_Box) (Success_35));
            MR_hl_field(MR_mktag(1), RetLvals_34, 1) = ((MR_Box) (RetLvals0_16));
          }
          *FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    *LocalVarDefns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (Detism_18 == (MR_Integer) 6);
    if (succeeded)
      CallKind_36 = (MR_Integer) 0;
    else
      CallKind_36 = (MR_Integer) 2;
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(*STATE_VARIABLE_Info_41, &Warnings_37);
    succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, Warnings_37, ((MR_Box) ((MR_Integer) 1)));
    if (succeeded)
    {
      Markers_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &Markers_38);
    }
    {
      Stmt_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Stmt_39, 1) = ((MR_Box) (Signature_13));
      MR_hl_field(MR_mktag(3), Stmt_39, 2) = ((MR_Box) (FuncRval_14));
      MR_hl_field(MR_mktag(3), Stmt_39, 3) = ((MR_Box) (ArgRvals_31));
      MR_hl_field(MR_mktag(3), Stmt_39, 4) = ((MR_Box) (RetLvals_34));
      MR_hl_field(MR_mktag(3), Stmt_39, 5) = ((MR_Box) (CallKind_36));
      MR_hl_field(MR_mktag(3), Stmt_39, 6) = ((MR_Box) (Markers_38));
      MR_hl_field(MR_mktag(3), Stmt_39, 7) = ((MR_Box) (Context_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_39));
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
      MR_Word UseNestedFuncs_49;
      MR_Word Args_50;

      ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(OutputArgTypes_8, (MR_Integer) 1, &Args0_48);
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(STATE_VARIABLE_Info_0_28, &UseNestedFuncs_49);
      switch (UseNestedFuncs_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EnvPtrArg_51;
            MR_Word Var_53;

            ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&EnvPtrArg_51);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (EnvPtrArg_51));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            Args_50 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Args0_48, Var_53);
          }
          break;
        case (MR_Integer) 1:
          Args_50 = Args0_48;
          break;
      }
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
        MR_hl_field(MR_mktag(3), ArgName_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
      MR_hl_field(MR_mktag(3), ArgName_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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

/* :- end_module ml_backend.ml_call_gen. */
