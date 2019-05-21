/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version DEV
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

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__366__1_2_p_0(
  MR_Word ConvOutputStmts_30,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__365__1_2_p_0(
  MR_Word ConvOutputDefns_29,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(
  MR_Word OutputLvalsTypes_28,
  MR_Word HeadVar__2_69);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__255__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_66,
  MR_Word * LambdaHeadVar__1_120,
  MR_Word * LambdaHeadVar__2_121,
  MR_Word * LambdaHeadVar__3_122,
  MR_Word LambdaHeadVar__4_123,
  MR_Word * LambdaHeadVar__5_124);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_35,
  MR_Word * LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61,
  MR_Word LambdaHeadVar__4_62,
  MR_Word * LambdaHeadVar__5_63);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_35,
  MR_Word * LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61,
  MR_Word LambdaHeadVar__4_62,
  MR_Word * LambdaHeadVar__5_63);

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
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

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
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82);

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
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_6_p_0(
  MR_Word OutputArgLvalsTypes_7,
  MR_Word Context_8,
  MR_Word * NewCont_9,
  MR_Word * ContDecls_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

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


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][14];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[3][5];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_3[0])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_3[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[5])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[6])))
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

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
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

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 2 */
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

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_call_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_lval_0ml_backend__mlds__type_ctor_info_mlds_type_0
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
  MR_Word ConvOutputStmts_30,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[3], ((MR_Box) (ConvOutputStmts_30)), ((MR_Box) (HeadVar__2_77)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__365__1_2_p_0(
  MR_Word ConvOutputDefns_29,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (ConvOutputDefns_29)), ((MR_Box) (HeadVar__2_73)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(
  MR_Word OutputLvalsTypes_28,
  MR_Word HeadVar__2_69)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (OutputLvalsTypes_28)), ((MR_Box) (HeadVar__2_69)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__255__1_8_p_0(
  MR_Word Context_15,
  MR_Word CodeModel_26,
  MR_Word ConvOutputStmts_66,
  MR_Word * LambdaHeadVar__1_120,
  MR_Word * LambdaHeadVar__2_121,
  MR_Word * LambdaHeadVar__3_122,
  MR_Word LambdaHeadVar__4_123,
  MR_Word * LambdaHeadVar__5_124)
{
  {
    MR_Word SucceedStmts_77;

    *LambdaHeadVar__1_120 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_26, Context_15, &SucceedStmts_77, LambdaHeadVar__4_123, LambdaHeadVar__5_124);
    *LambdaHeadVar__3_122 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_66, SucceedStmts_77);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_35,
  MR_Word * LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61,
  MR_Word LambdaHeadVar__4_62,
  MR_Word * LambdaHeadVar__5_63)
{
  {
    MR_Word SucceedStmts_43;

    *LambdaHeadVar__1_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_43, LambdaHeadVar__4_62, LambdaHeadVar__5_63);
    *LambdaHeadVar__3_61 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_35, SucceedStmts_43);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(
  MR_Word CodeModel_13,
  MR_Word Context_14,
  MR_Word ConvOutputStmts_35,
  MR_Word * LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60,
  MR_Word * LambdaHeadVar__3_61,
  MR_Word LambdaHeadVar__4_62,
  MR_Word * LambdaHeadVar__5_63)
{
  {
    MR_Word SucceedStmts_43;

    *LambdaHeadVar__1_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *LambdaHeadVar__2_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_13, Context_14, &SucceedStmts_43, LambdaHeadVar__4_62, LambdaHeadVar__5_63);
    *LambdaHeadVar__3_61 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvOutputStmts_35, SucceedStmts_43);
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
    MR_Word conv7_LambdaHeadVar__1_59;
    MR_Word conv6_LambdaHeadVar__2_60;
    MR_Word conv5_LambdaHeadVar__3_61;
    MR_Word conv4_LambdaHeadVar__5_63;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_59, &conv6_LambdaHeadVar__2_60, &conv5_LambdaHeadVar__3_61, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_63);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_59));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_60));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_61));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_63));
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
    MR_Word conv3_LocalVarDefns_18;
    MR_Word conv2_FuncDefns_19;
    MR_Word conv1_Stmts_20;
    MR_Word conv0_STATE_VARIABLE_Info_37;

    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_37);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_37));
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
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
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
    MR_Word OutputLvalsTypes_33;
    MR_Word ConvOutputDefns_34;
    MR_Word ConvOutputStmts_35;
    MR_Word Detism_36;
    MR_Word TailRecInfo0_47;
    MR_Word TargetMap0_48;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word _ArgTuples_22;
    MR_Word _FuncProcLabel_25;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word TargetInfo0_49;
    MR_Box conv8_TargetInfo0_49;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_53, &ModuleInfo_20);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_12));
    }
    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_20, PredProcId_21, &_ArgTuples_22, &Params_23);
    Signature_24 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_23);
    ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(PredProcId_21, &_FuncProcLabel_25, &FuncRval_26, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_27, &ProcInfo_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &CalleeArgTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &CalleeArgModes_31);
    ml_backend__ml_args_util__ml_gen_args_13_p_1(PredOrFunc_29, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_30, CalleeArgModes_31, CallerArgs_15, &InputRvals_32, &OutputLvalsTypes_33, &ConvOutputDefns_34, &ConvOutputStmts_35, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_57_57);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Detism_36);
    succeeded = (ConvOutputDefns_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_24, FuncRval_26, InputRvals_32, OutputLvalsTypes_33, Detism_36, Context_14, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_58_58);
    else
    {
      MR_Word DoGenCall_37;
      MR_Word DoGenConvOutputAndSucceed_38;
      MR_Word CallAndConvOutputLocalVarDefns_44;

      {
        DoGenCall_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_37, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_1));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 3) = ((MR_Box) (Signature_24));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 4) = ((MR_Box) (FuncRval_26));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 5) = ((MR_Box) (InputRvals_32));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 6) = ((MR_Box) (OutputLvalsTypes_33));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 7) = ((MR_Box) (Detism_36));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 8) = ((MR_Box) (Context_14));
      }
      {
        DoGenConvOutputAndSucceed_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_1_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 5) = ((MR_Box) (ConvOutputStmts_35));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_37, DoGenConvOutputAndSucceed_38, &CallAndConvOutputLocalVarDefns_44, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_58_58);
      *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvOutputDefns_34, CallAndConvOutputLocalVarDefns_44);
    }
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_58_58, &TailRecInfo0_47);
    TargetMap0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 0)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 1)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 2)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 3)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 4)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 5)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap0_48, ((MR_Box) (PredProcId_21)), &conv8_TargetInfo0_49);
    if (succeeded)
    {
      TargetInfo0_49 = ((MR_Word) conv8_TargetInfo0_49);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TargetInfo_50;
      MR_Word TargetMap_51;
      MR_Word TailRecInfo_52;
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 0)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 1)));
      MR_Word Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_82;

      {
        TargetInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TargetInfo_50, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), TargetInfo_50, 1) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), TargetInfo_50, 2) = ((MR_Box) ((Var_79 | ((((Var_80 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      }
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_21)), ((MR_Box) (TargetInfo_50)), TargetMap0_48, &TargetMap_51);
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 0)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 1)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 2)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 3)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 4)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 5)));
      {
        TailRecInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 0) = ((MR_Box) (TargetMap_51));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 1) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 2) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 4) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 5) = ((MR_Box) (Var_87));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_52, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_54);
    }
    else
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_58_58;
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
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3(
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
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2(
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
ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_tail_call__364__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
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
    MR_Word OutputLvalsTypes_28;
    MR_Word ConvOutputDefns_29;
    MR_Word ConvOutputStmts_30;
    MR_Word TailRecInfo0_31;
    MR_Word TailRecMap0_32;
    MR_Word PredProcId_33;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_66;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word TailRecTargetInfo0_34;
    MR_Word Var_78;
    MR_Box conv0_TailRecTargetInfo0_34;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_20);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_21, &ProcInfo_22);
    PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &CalleeArgTypes_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_22, &CalleeArgModes_25);
    CallerArgs_26 = ml_backend__ml_args_util__wrap_plain_not_fcw_args_1_f_0(ArgVars_15);
    ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_23, CodeModel_13, Context_14, (MR_Integer) 0, CalleeArgTypes_24, CalleeArgModes_25, CallerArgs_26, &InputRvals_27, &OutputLvalsTypes_28, &ConvOutputDefns_29, &ConvOutputStmts_30, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_65_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (OutputLvalsTypes_28));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "OutputLvalsTypes != []");
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ConvOutputDefns_29));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputDefns != []");
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_tail_call_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ConvOutputStmts_30));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_plain_tail_call\'/10", (MR_String) "ConvOutputStmts != []");
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_65_65, &TailRecInfo0_31);
    TailRecMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
    Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
    {
      PredProcId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_33, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_33, 1) = ((MR_Box) (ProcId_12));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TailRecMap0_32, ((MR_Box) (PredProcId_33)), &conv0_TailRecTargetInfo0_34);
    if (succeeded)
    {
      TailRecTargetInfo0_34 = ((MR_Word) conv0_TailRecTargetInfo0_34);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_78 = ml_backend__ml_tailcall__may_rvals_yield_dangling_stack_ref_1_f_0(InputRvals_27);
      succeeded = (Var_78 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_158_158;
      MR_Word CommentStmt_35;
      MR_Word ModuleName_36;
      MR_Word MLDS_ModuleName_37;
      MR_Word IdInTSCC_38;
      MR_Word FuncInputArgs_39;
      MR_Word HaveDoneSelfTailRec0_40;
      MR_Word HaveDoneMutualTailRec0_41;
      MR_Word HaveDoneNonTailRec_42;
      MR_Word InitStmts_43;
      MR_Word AssignStmts_44;
      MR_Word LoopKind_45;
      MR_Word TsccKind_46;
      MR_Word SetSelectorStmts_47;
      MR_Word GotoTarget_50;
      MR_Word GotoStmt_52;
      MR_Word CurPredId_53;
      MR_Integer CurProcId_54;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_96;
      MR_Word Var_115;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;

      {
        CommentStmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CommentStmt_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), CommentStmt_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[5])));
        MR_hl_field(MR_mktag(3), CommentStmt_35, 2) = ((MR_Box) (Context_14));
      }
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(STATE_VARIABLE_Info_65_65, &ModuleName_36);
      MLDS_ModuleName_37 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_36);
      IdInTSCC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_34, (MR_Integer) 0)));
      FuncInputArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_34, (MR_Integer) 1)));
      HaveDoneSelfTailRec0_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_34, (MR_Integer) 2)))) & (MR_Integer) 1);
      HaveDoneMutualTailRec0_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_34, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      HaveDoneNonTailRec_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TailRecTargetInfo0_34, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ml_backend__ml_optimize__tail_rec_call_assign_input_args_7_p_0(MLDS_ModuleName_37, Context_14, FuncInputArgs_39, InputRvals_27, &InitStmts_43, &AssignStmts_44, LocalVarDefns_16);
      *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
      TsccKind_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
      LoopKind_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
      Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
      Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
      Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
      switch (LoopKind_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StartLabel_51;

            SetSelectorStmts_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            StartLabel_51 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_46, IdInTSCC_38);
            {
              GotoTarget_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GotoTarget_50, 0) = ((MR_Box) (StartLabel_51));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            switch (TsccKind_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer TsccProcNum_48 = (MR_Integer) IdInTSCC_38;
                  MR_Word SetSelectorStmt_49;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_85;
                  MR_Word Var_86;
                  MR_Word Var_87;

                  Var_85 = ml_backend__ml_code_util__ml_int_type_0_f_0();
                  {
                    Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[7])));
                    MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_85));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (TsccProcNum_48));
                  }
                  {
                    Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
                  }
                  {
                    Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(2), Var_81, 1) = ((MR_Box) (Var_86));
                  }
                  {
                    SetSelectorStmt_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_49, 1) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(3), SetSelectorStmt_49, 2) = ((MR_Box) (Context_14));
                  }
                  {
                    SetSelectorStmts_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SetSelectorStmts_47, 0) = ((MR_Box) (SetSelectorStmt_49));
                    MR_hl_field(MR_mktag(1), SetSelectorStmts_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 0:
                SetSelectorStmts_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            GotoTarget_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          }
          break;
      }
      {
        GotoStmt_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 1) = ((MR_Box) (GotoTarget_50));
        MR_hl_field(MR_mktag(3), GotoStmt_52, 2) = ((MR_Box) (Context_14));
      }
      TypeCtorInfo_158_158 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (CommentStmt_35));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (GotoStmt_52));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_93 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_158_158, SetSelectorStmts_47, Var_94);
      Var_92 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_158_158, AssignStmts_44, Var_93);
      Var_91 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_158_158, InitStmts_43, Var_92);
      *Stmts_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_158_158, Var_89, Var_91);
      ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_65_65, &Var_96);
      CurPredId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0)));
      CurProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 1)));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_11, CurPredId_53);
      if (succeeded)
        succeeded = (ProcId_12 == CurProcId_54);
      if (succeeded)
        switch (HaveDoneSelfTailRec0_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_65_65;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TailRecTargetInfo_55;
              MR_Word TailRecMap_56;
              MR_Word TailRecInfo_57;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_125;

              {
                TailRecTargetInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_55, 0) = ((MR_Box) (IdInTSCC_38));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_55, 1) = ((MR_Box) (FuncInputArgs_39));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_55, 2) = ((MR_Box) (((MR_Integer) 1 | ((((HaveDoneMutualTailRec0_41 << (MR_Integer) 1)) | ((HaveDoneNonTailRec_42 << (MR_Integer) 2)))))));
              }
              mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_33)), ((MR_Box) (TailRecTargetInfo_55)), TailRecMap0_32, &TailRecMap_56);
              Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
              Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
              Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
              Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
              Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
              Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
              {
                TailRecInfo_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 0) = ((MR_Box) (TailRecMap_56));
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 1) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 2) = ((MR_Box) (Var_127));
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 3) = ((MR_Box) (Var_128));
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 4) = ((MR_Box) (Var_129));
                MR_hl_field(MR_mktag(0), TailRecInfo_57, 5) = ((MR_Box) (Var_130));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_57, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_63);
            }
            break;
        }
      else
        switch (HaveDoneMutualTailRec0_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_65_65;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TailRecTargetInfo_103;
              MR_Word TailRecMap_104;
              MR_Word TailRecInfo_105;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_131;

              {
                TailRecTargetInfo_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_103, 0) = ((MR_Box) (IdInTSCC_38));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_103, 1) = ((MR_Box) (FuncInputArgs_39));
                MR_hl_field(MR_mktag(0), TailRecTargetInfo_103, 2) = ((MR_Box) ((HaveDoneSelfTailRec0_40 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((HaveDoneNonTailRec_42 << (MR_Integer) 2)))))));
              }
              mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_33)), ((MR_Box) (TailRecTargetInfo_103)), TailRecMap0_32, &TailRecMap_104);
              Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
              Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
              Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
              Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
              Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
              Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
              {
                TailRecInfo_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 0) = ((MR_Box) (TailRecMap_104));
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 1) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 2) = ((MR_Box) (Var_133));
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 3) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 4) = ((MR_Box) (Var_135));
                MR_hl_field(MR_mktag(0), TailRecInfo_105, 5) = ((MR_Box) (Var_136));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_105, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_63);
            }
            break;
        }
    }
    else
    {
      MR_Word CallerPredProcId_58;
      MR_Word WarnParams_59;
      MR_Word Specs0_60;
      MR_Word Specs_61;
      MR_Word STATE_VARIABLE_Info_101_101;
      MR_Word TailRecInfo_109;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;

      ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_65_65, &CallerPredProcId_58);
      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
      Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
      Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
      WarnParams_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
      Specs0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
      hlds__mark_tail_calls__maybe_report_nontail_recursive_call_7_p_0(ModuleInfo_20, CallerPredProcId_58, PredProcId_33, Context_14, WarnParams_59, Specs0_60, &Specs_61);
      Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 0)));
      Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 1)));
      Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 2)));
      Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 3)));
      Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 4)));
      Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_31, (MR_Integer) 5)));
      {
        TailRecInfo_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 0) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 1) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 2) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 3) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 4) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(0), TailRecInfo_109, 5) = ((MR_Box) (Specs_61));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_109, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_101_101);
      ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0(PredId_11, ProcId_12, CodeModel_13, Context_14, CallerArgs_26, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_63);
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
    MR_Word conv7_LambdaHeadVar__1_59;
    MR_Word conv6_LambdaHeadVar__2_60;
    MR_Word conv5_LambdaHeadVar__3_61;
    MR_Word conv4_LambdaHeadVar__5_63;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_non_tail_call__541__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_59, &conv6_LambdaHeadVar__2_60, &conv5_LambdaHeadVar__3_61, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_63);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_59));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_60));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_61));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_63));
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
    MR_Word conv3_LocalVarDefns_18;
    MR_Word conv2_FuncDefns_19;
    MR_Word conv1_Stmts_20;
    MR_Word conv0_STATE_VARIABLE_Info_37;

    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_37);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_37));
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
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
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
    MR_Word OutputLvalsTypes_33;
    MR_Word ConvOutputDefns_34;
    MR_Word ConvOutputStmts_35;
    MR_Word Detism_36;
    MR_Word TailRecInfo0_47;
    MR_Word TargetMap0_48;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word _ArgTuples_22;
    MR_Word _FuncProcLabel_25;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word TargetInfo0_49;
    MR_Box conv8_TargetInfo0_49;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_53, &ModuleInfo_20);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_21, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), PredProcId_21, 1) = ((MR_Box) (ProcId_12));
    }
    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_20, PredProcId_21, &_ArgTuples_22, &Params_23);
    Signature_24 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_23);
    ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(PredProcId_21, &_FuncProcLabel_25, &FuncRval_26, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_11, ProcId_12, &PredInfo_27, &ProcInfo_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &CalleeArgTypes_30);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &CalleeArgModes_31);
    ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_29, CodeModel_13, Context_14, (MR_Integer) 1, CalleeArgTypes_30, CalleeArgModes_31, CallerArgs_15, &InputRvals_32, &OutputLvalsTypes_33, &ConvOutputDefns_34, &ConvOutputStmts_35, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_57_57);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Detism_36);
    succeeded = (ConvOutputDefns_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_24, FuncRval_26, InputRvals_32, OutputLvalsTypes_33, Detism_36, Context_14, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_58_58);
    else
    {
      MR_Word DoGenCall_37;
      MR_Word DoGenConvOutputAndSucceed_38;
      MR_Word CallAndConvOutputLocalVarDefns_44;

      {
        DoGenCall_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_37, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 3) = ((MR_Box) (Signature_24));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 4) = ((MR_Box) (FuncRval_26));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 5) = ((MR_Box) (InputRvals_32));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 6) = ((MR_Box) (OutputLvalsTypes_33));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 7) = ((MR_Box) (Detism_36));
        MR_hl_field(MR_mktag(0), DoGenCall_37, 8) = ((MR_Box) (Context_14));
      }
      {
        DoGenConvOutputAndSucceed_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_10_p_0_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 3) = ((MR_Box) (CodeModel_13));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_38, 5) = ((MR_Box) (ConvOutputStmts_35));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_13, Context_14, DoGenCall_37, DoGenConvOutputAndSucceed_38, &CallAndConvOutputLocalVarDefns_44, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_58_58);
      *LocalVarDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvOutputDefns_34, CallAndConvOutputLocalVarDefns_44);
    }
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_58_58, &TailRecInfo0_47);
    TargetMap0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 0)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 1)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 2)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 3)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 4)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 5)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, TargetMap0_48, ((MR_Box) (PredProcId_21)), &conv8_TargetInfo0_49);
    if (succeeded)
    {
      TargetInfo0_49 = ((MR_Word) conv8_TargetInfo0_49);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TargetInfo_50;
      MR_Word TargetMap_51;
      MR_Word TailRecInfo_52;
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 0)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 1)));
      MR_Word Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TargetInfo0_49, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_82;

      {
        TargetInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TargetInfo_50, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), TargetInfo_50, 1) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), TargetInfo_50, 2) = ((MR_Box) ((Var_79 | ((((Var_80 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      }
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_target_info_0, ((MR_Box) (PredProcId_21)), ((MR_Box) (TargetInfo_50)), TargetMap0_48, &TargetMap_51);
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 0)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 1)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 2)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 3)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 4)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), TailRecInfo0_47, (MR_Integer) 5)));
      {
        TailRecInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 0) = ((MR_Box) (TargetMap_51));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 1) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 2) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 4) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), TailRecInfo_52, 5) = ((MR_Box) (Var_87));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_tail_rec_info_3_p_0(TailRecInfo_52, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_54);
    }
    else
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_58_58;
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
    MR_Word conv7_LambdaHeadVar__1_120;
    MR_Word conv6_LambdaHeadVar__2_121;
    MR_Word conv5_LambdaHeadVar__3_122;
    MR_Word conv4_LambdaHeadVar__5_124;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__255__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LambdaHeadVar__1_120, &conv6_LambdaHeadVar__2_121, &conv5_LambdaHeadVar__3_122, ((MR_Word) wrapper_arg_4), &conv4_LambdaHeadVar__5_124);
    *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_120));
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_121));
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_122));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_124));
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
    MR_Word conv3_LocalVarDefns_18;
    MR_Word conv2_FuncDefns_19;
    MR_Word conv1_Stmts_20;
    MR_Word conv0_STATE_VARIABLE_Info_37;

    ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), &conv3_LocalVarDefns_18, &conv2_FuncDefns_19, &conv1_Stmts_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_37);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_18));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_19));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_37));
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
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82)
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
    MR_Word OutputLvalsTypes_64;
    MR_Word ConvArgLocalVarDefns_65;
    MR_Word ConvOutputStmts_66;
    MR_Word ClosureRval_67;
    MR_Word LocalVarDefns0_68;
    MR_Word Stmts0_70;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Word Var_112;
    MR_Word STATE_VARIABLE_Info_114_114;
    MR_Word Var_116;
    MR_Word _ArgTuples_27;

    NumArgs_20 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ArgVars_12);
    BoxedArgTypes_21 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(NumArgs_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_81, &ModuleInfo_22);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_81, &VarSet_23);
    ArgNames_24 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarSet_23, ArgVars_12);
    PredOrFunc_25 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(GenericCall_11);
    hlds__code_model__determinism_to_code_model_2_p_0(Determinism_14, &CodeModel_26);
    ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_9_p_0(ModuleInfo_22, PredOrFunc_25, CodeModel_26, ArgVars_12, ArgNames_24, BoxedArgTypes_21, ArgModes_13, &_ArgTuples_27, &Params0_28);
    ClosureArgType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ArgParams0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_28, (MR_Integer) 0)));
    RetParam_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params0_28, (MR_Integer) 1)));
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[1]));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (ArgParams0_32));
    }
    {
      Params_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_34, 0) = ((MR_Box) (Var_85));
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
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word FuncLval_126;
      MR_Word _ClassId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 2)));
      MR_Word _PredName_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_81, TypeClassInfoVar_45, &ClosureLval_40);
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0]);
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (ClosureLval_40));
      }
      {
        BaseTypeclassInfoLval_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 1) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), BaseTypeclassInfoLval_51, 4) = ((MR_Box) (ClosureArgType_30));
      }
      Offset_52 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
      MethodFieldNum_53 = (MethodNum_46 + Offset_52);
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_94, 0) = ((MR_Box) (MethodFieldNum_53));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var_94));
      }
      {
        MethodFieldId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MethodFieldId_54, 0) = ((MR_Box) (Var_93));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (BaseTypeclassInfoLval_51));
      }
      {
        FuncLval_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_126, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), FuncLval_126, 1) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), FuncLval_126, 2) = ((MR_Box) (MethodFieldId_54));
        MR_hl_field(MR_mktag(0), FuncLval_126, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_126, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      FuncType_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_34);
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (FuncType_43));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (FuncLval_126));
      }
      {
        FuncRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_44, 1) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(3), FuncRval_44, 2) = ((MR_Box) (Var_101));
      }
    }
    else
    {
      MR_Word ClosureVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 0)));
      MR_Word FuncLval_42;
      MR_Word Var_107;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word _Purity_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 1)));
      MR_Word _PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 2)));
      MR_Integer _Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_81, ClosureVar_36, &ClosureLval_40);
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_107, 0) = ((MR_Box) (ClosureLval_40));
      }
      {
        FuncLval_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncLval_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), FuncLval_42, 1) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), FuncLval_42, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), FuncLval_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FuncLval_42, 4) = ((MR_Box) (ClosureArgType_30));
      }
      FuncType_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Params_34);
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (FuncType_43));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) (FuncLval_42));
      }
      {
        FuncRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FuncRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FuncRval_44, 1) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(3), FuncRval_44, 2) = ((MR_Box) (Var_110));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_55, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_111_111);
    ConvVarNum_56 = (MR_Integer) ConvVarSeq_55;
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ConvVarNum_56));
    }
    {
      FuncVarName_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FuncVarName_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), FuncVarName_57, 1) = ((MR_Box) (Var_112));
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
    ml_backend__ml_args_util__ml_gen_args_13_p_0(PredOrFunc_25, CodeModel_26, Context_15, (MR_Integer) 1, BoxedArgTypes_21, ArgModes_13, CallerArgs_62, &InputRvals_63, &OutputLvalsTypes_64, &ConvArgLocalVarDefns_65, &ConvOutputStmts_66, STATE_VARIABLE_Info_111_111, &STATE_VARIABLE_Info_114_114);
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_116, 0) = ((MR_Box) (ClosureLval_40));
    }
    {
      ClosureRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ClosureRval_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_3[4])));
      MR_hl_field(MR_mktag(3), ClosureRval_67, 2) = ((MR_Box) (Var_116));
    }
    succeeded = (ConvArgLocalVarDefns_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (ConvOutputStmts_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word Var_117;

      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ClosureRval_67));
        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (InputRvals_63));
      }
      ml_backend__ml_call_gen__ml_gen_mlds_call_11_p_0(Signature_35, FuncVarRval_61, Var_117, OutputLvalsTypes_64, Determinism_14, Context_15, &LocalVarDefns0_68, FuncDefns_17, &Stmts0_70, STATE_VARIABLE_Info_114_114, STATE_VARIABLE_Info_82);
    }
    else
    {
      MR_Word DoGenCall_71;
      MR_Word DoGenConvOutputAndSucceed_72;
      MR_Word CallAndConvOutputLocalVarDefns_78;
      MR_Word Var_119;

      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ClosureRval_67));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (InputRvals_63));
      }
      {
        DoGenCall_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenCall_71, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 3) = ((MR_Box) (Signature_35));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 4) = ((MR_Box) (FuncVarRval_61));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 5) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 6) = ((MR_Box) (OutputLvalsTypes_64));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 7) = ((MR_Box) (Determinism_14));
        MR_hl_field(MR_mktag(0), DoGenCall_71, 8) = ((MR_Box) (Context_15));
      }
      {
        DoGenConvOutputAndSucceed_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 4) = ((MR_Box) (CodeModel_26));
        MR_hl_field(MR_mktag(0), DoGenConvOutputAndSucceed_72, 5) = ((MR_Box) (ConvOutputStmts_66));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_26, Context_15, DoGenCall_71, DoGenConvOutputAndSucceed_72, &CallAndConvOutputLocalVarDefns_78, FuncDefns_17, &Stmts0_70, STATE_VARIABLE_Info_114_114, STATE_VARIABLE_Info_82);
      LocalVarDefns0_68 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvArgLocalVarDefns_65, CallAndConvOutputLocalVarDefns_78);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *LocalVarDefns_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncVarDecl_58));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LocalVarDefns0_68));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignFuncVar_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts0_70));
    }
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
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_22;
    MR_Word ArgRvals_27;
    MR_Word RetLvals_29;
    MR_Word CallKind_32;
    MR_Word Warnings_33;
    MR_Word Markers_34;
    MR_Word Stmt_35;

    hlds__code_model__determinism_to_code_model_2_p_0(Detism_16, &CodeModel_22);
    switch (CodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ArgRvals_27 = ArgRvals0_14;
          mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, RetLvalsTypes0_15, &RetLvals_29);
          *FuncDefns_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cont_23;
          MR_Word FuncPtrRval_24;
          MR_Word EnvPtrRval_25;
          MR_Word NondetCopyOut_28;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_26;

          ml_backend__ml_call_gen__ml_gen_success_cont_6_p_0(RetLvalsTypes0_15, Context_17, &Cont_23, FuncDefns_19, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          FuncPtrRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_23, (MR_Integer) 0)));
          EnvPtrRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_23, (MR_Integer) 1)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cont_23, (MR_Integer) 2)));
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (EnvPtrRval_25));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (FuncPtrRval_24));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
          }
          ArgRvals_27 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ArgRvals0_14, Var_40);
          ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(*STATE_VARIABLE_Info_37, &NondetCopyOut_28);
          switch (NondetCopyOut_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, RetLvalsTypes0_15, &RetLvals_29);
              }
              break;
            case (MR_Integer) 1:
              RetLvals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Success_30;
          MR_Word RetLvals0_31;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&Success_30, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          ArgRvals_27 = ArgRvals0_14;
          mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, RetLvalsTypes0_15, &RetLvals0_31);
          {
            RetLvals_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RetLvals_29, 0) = ((MR_Box) (Success_30));
            MR_hl_field(MR_mktag(1), RetLvals_29, 1) = ((MR_Box) (RetLvals0_31));
          }
          *FuncDefns_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    *LocalVarDefns_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (Detism_16 == (MR_Integer) 6);
    if (succeeded)
      CallKind_32 = (MR_Integer) 0;
    else
      CallKind_32 = (MR_Integer) 2;
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(*STATE_VARIABLE_Info_37, &Warnings_33);
    succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, Warnings_33, ((MR_Box) ((MR_Integer) 1)));
    if (succeeded)
    {
      Markers_34 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &Markers_34);
    }
    {
      Stmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Stmt_35, 1) = ((MR_Box) (Signature_12));
      MR_hl_field(MR_mktag(3), Stmt_35, 2) = ((MR_Box) (FuncRval_13));
      MR_hl_field(MR_mktag(3), Stmt_35, 3) = ((MR_Box) (ArgRvals_27));
      MR_hl_field(MR_mktag(3), Stmt_35, 4) = ((MR_Box) (RetLvals_29));
      MR_hl_field(MR_mktag(3), Stmt_35, 5) = ((MR_Box) (CallKind_32));
      MR_hl_field(MR_mktag(3), Stmt_35, 6) = ((MR_Box) (Markers_34));
      MR_hl_field(MR_mktag(3), Stmt_35, 7) = ((MR_Box) (Context_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_35));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_6_p_0(
  MR_Word OutputArgLvalsTypes_7,
  MR_Word Context_8,
  MR_Word * NewCont_9,
  MR_Word * ContDecls_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word CurrentCont_12;
    MR_Word CurrentContArgLvalsTypes_15;
    MR_Word _FuncPtrRval_13;
    MR_Word _EnvPtrRval_14;

    ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(STATE_VARIABLE_Info_0_24, &CurrentCont_12);
    _FuncPtrRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_12, (MR_Integer) 0)));
    _EnvPtrRval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_12, (MR_Integer) 1)));
    CurrentContArgLvalsTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentCont_12, (MR_Integer) 2)));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (CurrentContArgLvalsTypes_15)), ((MR_Box) (OutputArgLvalsTypes_7)));
    if (succeeded)
    {
      *NewCont_9 = CurrentCont_12;
      *ContDecls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
    }
    else
    {
      MR_Word Params_16;
      MR_Word ContFuncLabel_17;
      MR_Word ContFuncLabelRval_18;
      MR_Word CopyStmts_19;
      MR_Word CallContStmt_20;
      MR_Word CopyStmt_21;
      MR_Word ContFuncDefn_22;
      MR_Word EnvPtrRval_23;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_Info_28_28;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Args0_43;
      MR_Word EnvPtrArg_44;
      MR_Word Args_45;
      MR_Word Var_47;

      ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(OutputArgLvalsTypes_7, (MR_Integer) 1, &Args0_43);
      ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&EnvPtrArg_44);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (EnvPtrArg_44));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Args_45 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Args0_43, Var_47);
      {
        Params_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Params_16, 0) = ((MR_Box) (Args_45));
        MR_hl_field(MR_mktag(0), Params_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Params_16));
      }
      ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(Var_27, &ContFuncLabel_17, &ContFuncLabelRval_18, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
      ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(OutputArgLvalsTypes_7, (MR_Integer) 1, Context_8, &CopyStmts_19);
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_8, &CallContStmt_20, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (CallContStmt_20));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CopyStmts_19, Var_33);
      CopyStmt_21 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_32, Context_8);
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*STATE_VARIABLE_Info_25, ContFuncLabel_17, Params_16, Context_8, CopyStmt_21, &ContFuncDefn_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ContDecls_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ContFuncDefn_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *NewCont_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ContFuncLabelRval_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvPtrRval_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OutputArgLvalsTypes_7));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word LocalLvalType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word LocalLvalsTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Stmt_11;
    MR_Word Stmts_12;
    MR_Word LocalLval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalLvalType_7, (MR_Integer) 0)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalLvalType_7, (MR_Integer) 1)));
    MR_Word ArgName_15;
    MR_Word ArgLval_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ArgNum_2));
    }
    {
      ArgName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArgName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ArgName_15, 1) = ((MR_Box) (Var_17));
    }
    {
      ArgLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArgLval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ArgLval_16, 1) = ((MR_Box) (ArgName_15));
      MR_hl_field(MR_mktag(3), ArgLval_16, 2) = ((MR_Box) (Type_14));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (ArgLval_16));
    }
    Stmt_11 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LocalLval_13, Var_18, Context_3);
    Var_19 = (ArgNum_2 + (MR_Integer) 1);
    ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_4_p_0(LocalLvalsTypes_8, Var_19, Context_3, &Stmts_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_12));
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
    MR_Word Type_6;
    MR_Word LvalsTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Argument_9;
    MR_Word Arguments_10;
    MR_Word ArgName_11;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_14;
    MR_Integer Var_15;
    MR_Word _Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));

    Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (ArgNum_2));
    }
    {
      ArgName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArgName_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ArgName_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Argument_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Argument_9, 0) = ((MR_Box) (ArgName_11));
      MR_hl_field(MR_mktag(0), Argument_9, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), Argument_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_15 = (ArgNum_2 + (MR_Integer) 1);
    ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(LvalsTypes_7, Var_15, &Arguments_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Argument_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Arguments_10));
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
