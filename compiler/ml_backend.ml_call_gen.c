/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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
#include "check_hlds.mode_util.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
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

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_8_p_0(
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word ml_backend__ml_call_gen__CodeModel_26,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_67,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_122,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_123,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__3_124,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__4_125,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__5_126);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_call__397__1_8_p_0(
  MR_Word ml_backend__ml_call_gen__CodeModel_19,
  MR_Word ml_backend__ml_call_gen__Context_20,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_39,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_57,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_58,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__3_59,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__4_60,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__5_61);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_11,
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
  MR_Word ml_backend__ml_call_gen__ArgModes_13,
  MR_Word ml_backend__ml_call_gen__Determinism_14,
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_call_gen__Stmts_18,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_83);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_args_17_p_0(
  MR_Word ml_backend__ml_call_gen__VarNames_18,
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
  MR_Word ml_backend__ml_call_gen__Modes_22,
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
  MR_Word ml_backend__ml_call_gen__Context_25,
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_49,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_50);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word ml_backend__ml_call_gen__Signature_13,
  MR_Word ml_backend__ml_call_gen__FuncRval_14,
  MR_Word ml_backend__ml_call_gen__ArgRvals0_15,
  MR_Word ml_backend__ml_call_gen__RetLvals0_16,
  MR_Word ml_backend__ml_call_gen__RetTypes0_17,
  MR_Word ml_backend__ml_call_gen__Detism_18,
  MR_Word ml_backend__ml_call_gen__Context_19,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_20,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_21,
  MR_Word * ml_backend__ml_call_gen__Stmts_22,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
  MR_Word ml_backend__ml_call_gen__Context_10,
  MR_Word * ml_backend__ml_call_gen__Cont_11,
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
  MR_Word ml_backend__ml_call_gen__Context_5,
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3);


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[6][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[5][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[1][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[1][15];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[2][11];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_2[0])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_2[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[3])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[5])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_8_p_0(
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word ml_backend__ml_call_gen__CodeModel_26,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_67,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_122,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_123,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__3_124,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__4_125,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__5_126)
{
  {
    MR_Word ml_backend__ml_call_gen__SucceedStmts_78;

    *ml_backend__ml_call_gen__LambdaHeadVar__1_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_call_gen__LambdaHeadVar__2_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_26, ml_backend__ml_call_gen__Context_15, &ml_backend__ml_call_gen__SucceedStmts_78, ml_backend__ml_call_gen__LambdaHeadVar__4_125, ml_backend__ml_call_gen__LambdaHeadVar__5_126);
    *ml_backend__ml_call_gen__LambdaHeadVar__3_124 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ConvOutputStmts_67, ml_backend__ml_call_gen__SucceedStmts_78);
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_call__397__1_8_p_0(
  MR_Word ml_backend__ml_call_gen__CodeModel_19,
  MR_Word ml_backend__ml_call_gen__Context_20,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_39,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_57,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_58,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__3_59,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__4_60,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__5_61)
{
  {
    MR_Word ml_backend__ml_call_gen__SucceedStmts_47;

    *ml_backend__ml_call_gen__LambdaHeadVar__1_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_call_gen__LambdaHeadVar__2_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_19, ml_backend__ml_call_gen__Context_20, &ml_backend__ml_call_gen__SucceedStmts_47, ml_backend__ml_call_gen__LambdaHeadVar__4_60, ml_backend__ml_call_gen__LambdaHeadVar__5_61);
    *ml_backend__ml_call_gen__LambdaHeadVar__3_59 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ConvOutputStmts_39, ml_backend__ml_call_gen__SucceedStmts_47);
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_builtin_10_p_0(
  MR_Word ml_backend__ml_call_gen__PredId_11,
  MR_Integer ml_backend__ml_call_gen__ProcId_12,
  MR_Word ml_backend__ml_call_gen__ArgVars_13,
  MR_Word ml_backend__ml_call_gen__CodeModel_14,
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_call_gen__Stmts_18,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_47,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_48)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__ArgLvals_20;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_21;
    MR_Word ml_backend__ml_call_gen__ModuleName_22;
    MR_String ml_backend__ml_call_gen__PredName_23;
    MR_Word ml_backend__ml_call_gen__SimpleCode_24;

    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_call_gen__ArgVars_13, &ml_backend__ml_call_gen__ArgLvals_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_call_gen__ModuleInfo_21);
    ml_backend__ml_call_gen__ModuleName_22 = hlds__hlds_module__predicate_module_2_f_0(ml_backend__ml_call_gen__ModuleInfo_21, ml_backend__ml_call_gen__PredId_11);
    ml_backend__ml_call_gen__PredName_23 = hlds__hlds_module__predicate_name_2_f_0(ml_backend__ml_call_gen__ModuleInfo_21, ml_backend__ml_call_gen__PredId_11);
    backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__ModuleName_22, ml_backend__ml_call_gen__PredName_23, ml_backend__ml_call_gen__ProcId_12, ml_backend__ml_call_gen__ArgLvals_20, &ml_backend__ml_call_gen__SimpleCode_24);
    switch (ml_backend__ml_call_gen__CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_call_gen__Lval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_24, (MR_Integer) 0)));
                MR_Word ml_backend__ml_call_gen__SimpleExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_24, (MR_Integer) 1)));
                MR_Word ml_backend__ml_call_gen__VarType_28;
                MR_Word ml_backend__ml_call_gen__ProgDataType_29;
                MR_Word ml_backend__ml_call_gen__Var_67;
                MR_Word ml_backend__ml_call_gen___VarName_27;
                MR_Word ml_backend__ml_call_gen__Var_30;
                MR_Word ml_backend__ml_call_gen__Var_31;

                ml_backend__ml_call_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_call_gen__Lval_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen___VarName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_25, (MR_Integer) 1)));
                  ml_backend__ml_call_gen__VarType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_25, (MR_Integer) 2)));
                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarType_28)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__ml_call_gen__succeeded)
                  {
                    ml_backend__ml_call_gen__ProgDataType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_28, (MR_Integer) 0)));
                    ml_backend__ml_call_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_28, (MR_Integer) 1)));
                    ml_backend__ml_call_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_28, (MR_Integer) 2)));
                    ml_backend__ml_call_gen__Var_67 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_21, ml_backend__ml_call_gen__ProgDataType_29);
                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_67 == (MR_Integer) 0);
                  }
                }
                if (ml_backend__ml_call_gen__succeeded)
                  *ml_backend__ml_call_gen__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word ml_backend__ml_call_gen__Rval_32;
                  MR_Word ml_backend__ml_call_gen__Stmt_33;

                  ml_backend__ml_call_gen__Rval_32 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleExpr_26);
                  ml_backend__ml_call_gen__Stmt_33 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Lval_25, ml_backend__ml_call_gen__Rval_32, ml_backend__ml_call_gen__Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_call_gen__Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_33));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_call_gen__AddrLval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_24, (MR_Integer) 0)));
                MR_Word ml_backend__ml_call_gen__ValueLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_24, (MR_Integer) 1)));
                MR_Word ml_backend__ml_call_gen__ValueType_37;
                MR_Word ml_backend__ml_call_gen___ValueVarName_36;

                ml_backend__ml_call_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_call_gen__ValueLval_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_35, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen___ValueVarName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_35, (MR_Integer) 1)));
                  ml_backend__ml_call_gen__ValueType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_35, (MR_Integer) 2)));
                  {
                    MR_Word ml_backend__ml_call_gen__Var_61;
                    MR_Word ml_backend__ml_call_gen__Var_62;
                    MR_Word ml_backend__ml_call_gen__Var_63;
                    MR_Word ml_backend__ml_call_gen__Stmt_69;

                    {
                      ml_backend__ml_call_gen__Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_62, 0) = ((MR_Box) (ml_backend__ml_call_gen__AddrLval_34));
                    }
                    {
                      ml_backend__ml_call_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_62));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_call_gen__ValueType_37));
                    }
                    {
                      ml_backend__ml_call_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_call_gen__ValueLval_35));
                    }
                    ml_backend__ml_call_gen__Stmt_69 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Var_61, ml_backend__ml_call_gen__Var_63, ml_backend__ml_call_gen__Context_15);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__Stmts_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_69));
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
              *ml_backend__ml_call_gen__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_48 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_47;
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
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_24)) {
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
              MR_Word ml_backend__ml_call_gen__SimpleTest_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__SimpleCode_24, (MR_Integer) 0)));
              MR_Word ml_backend__ml_call_gen__TestRval_41;
              MR_Word ml_backend__ml_call_gen__Stmt_72;

              ml_backend__ml_call_gen__TestRval_41 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleTest_40);
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(ml_backend__ml_call_gen__TestRval_41, ml_backend__ml_call_gen__Context_15, &ml_backend__ml_call_gen__Stmt_72, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_call_gen__STATE_VARIABLE_Info_48);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_call_gen__Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_72));
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
    *ml_backend__ml_call_gen__LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_call_gen__FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1)
{
  {
    MR_Word ml_backend__ml_call_gen__HeadVar__2_2;

    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_call_gen__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));

          {
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_call_gen__Lval_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__ml_call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__ml_call_gen__Var_5;

          {
            ml_backend__ml_call_gen__Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_5, 0) = ((MR_Box) (ml_backend__ml_call_gen__Int_4));
          }
          {
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_5));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned ml_backend__ml_call_gen__UInt_6 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__ml_call_gen__Var_7;

          {
            ml_backend__ml_call_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_7, 1) = ((MR_Box) (ml_backend__ml_call_gen__UInt_6));
          }
          {
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_call_gen__Int8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_9;

              {
                ml_backend__ml_call_gen__Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_9, 1) = ((MR_Box) (ml_backend__ml_call_gen__Int8_8));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ml_backend__ml_call_gen__UInt8_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_11;

              {
                ml_backend__ml_call_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_11, 1) = ((MR_Box) (ml_backend__ml_call_gen__UInt8_10));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_11));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ml_backend__ml_call_gen__Int16_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_13;

              {
                ml_backend__ml_call_gen__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_13, 1) = ((MR_Box) (ml_backend__ml_call_gen__Int16_12));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ml_backend__ml_call_gen__UInt16_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_15;

              {
                ml_backend__ml_call_gen__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_15, 1) = ((MR_Box) (ml_backend__ml_call_gen__UInt16_14));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ml_backend__ml_call_gen__Int32_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_17;

              {
                ml_backend__ml_call_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_call_gen__Int32_16));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_17));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ml_backend__ml_call_gen__UInt32_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_19;

              {
                ml_backend__ml_call_gen__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_19, 1) = ((MR_Box) (ml_backend__ml_call_gen__UInt32_18));
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_19));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Float ml_backend__ml_call_gen__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Var_21;

              {
                ml_backend__ml_call_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_21, 1) = MR_box_float(ml_backend__ml_call_gen__Float_20);
              }
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_21));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__ml_call_gen__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__Expr_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ml_backend__ml_call_gen__Var_24;
              MR_Word ml_backend__ml_call_gen__Var_25;

              {
                ml_backend__ml_call_gen__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_24, 0) = ((MR_Box) (ml_backend__ml_call_gen__Op_22));
              }
              ml_backend__ml_call_gen__Var_25 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__Expr_23);
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_24));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_25));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_call_gen__Op_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__ExprA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ml_backend__ml_call_gen__ExprB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ml_backend__ml_call_gen__Var_29;
              MR_Word ml_backend__ml_call_gen__Var_30;

              ml_backend__ml_call_gen__Var_29 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprA_27);
              ml_backend__ml_call_gen__Var_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprB_28);
              {
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Op_26));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_29));
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 3) = ((MR_Box) (ml_backend__ml_call_gen__Var_30));
              }
            }
            break;
        }
        break;
    }
    return ml_backend__ml_call_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_57;
    MR_Word ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_58;
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_59;
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_61;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_plain_call__397__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_57, &ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_58, &ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_59, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_4), &ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_61);
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_57));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_58));
    *ml_backend__ml_call_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_59));
    *ml_backend__ml_call_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_61));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv3_LocalVarDefns_20;
    MR_Word ml_backend__ml_call_gen__conv2_FuncDefns_21;
    MR_Word ml_backend__ml_call_gen__conv1_Stmts_22;
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), &ml_backend__ml_call_gen__conv3_LocalVarDefns_20, &ml_backend__ml_call_gen__conv2_FuncDefns_21, &ml_backend__ml_call_gen__conv1_Stmts_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_4), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LocalVarDefns_20));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv2_FuncDefns_21));
    *ml_backend__ml_call_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Stmts_22));
    *ml_backend__ml_call_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0(
  MR_Word ml_backend__ml_call_gen__PredId_14,
  MR_Integer ml_backend__ml_call_gen__ProcId_15,
  MR_Word ml_backend__ml_call_gen__ArgNames_16,
  MR_Word ml_backend__ml_call_gen__ArgLvals_17,
  MR_Word ml_backend__ml_call_gen__ActualArgTypes_18,
  MR_Word ml_backend__ml_call_gen__CodeModel_19,
  MR_Word ml_backend__ml_call_gen__Context_20,
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_21,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_22,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_23,
  MR_Word * ml_backend__ml_call_gen__Stmts_24,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_51,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_52)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_26;
    MR_Word ml_backend__ml_call_gen__Params_27;
    MR_Word ml_backend__ml_call_gen__Signature_28;
    MR_Word ml_backend__ml_call_gen__FuncRval_29;
    MR_Word ml_backend__ml_call_gen__PredInfo_30;
    MR_Word ml_backend__ml_call_gen__ProcInfo_31;
    MR_Word ml_backend__ml_call_gen__PredOrFunc_32;
    MR_Word ml_backend__ml_call_gen__PredArgTypes_33;
    MR_Word ml_backend__ml_call_gen__ArgModes_34;
    MR_Word ml_backend__ml_call_gen__InputRvals_35;
    MR_Word ml_backend__ml_call_gen__OutputLvals_36;
    MR_Word ml_backend__ml_call_gen__OutputTypes_37;
    MR_Word ml_backend__ml_call_gen__ConvArgLocalVarDefns_38;
    MR_Word ml_backend__ml_call_gen__ConvOutputStmts_39;
    MR_Word ml_backend__ml_call_gen__Detism_40;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_53_53;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_55_55;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_81;
    MR_Word ml_backend__ml_call_gen__PredLabel_82;
    MR_Word ml_backend__ml_call_gen__PredModule_83;
    MR_Word ml_backend__ml_call_gen__Params_84;
    MR_Word ml_backend__ml_call_gen__Signature_85;
    MR_Word ml_backend__ml_call_gen__ProcLabel_86;
    MR_Word ml_backend__ml_call_gen__FuncLabel_87;
    MR_Word ml_backend__ml_call_gen__QualFuncLabel_88;
    MR_Word ml_backend__ml_call_gen__Var_91;
    MR_Word ml_backend__ml_call_gen__Var_92;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_call_gen__ModuleInfo_26);
    ml_backend__ml_call_gen__Params_27 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_call_gen__ModuleInfo_26, ml_backend__ml_call_gen__PredId_14, ml_backend__ml_call_gen__ProcId_15);
    ml_backend__ml_call_gen__Signature_28 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_27);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_call_gen__ModuleInfo_81);
    ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(ml_backend__ml_call_gen__ModuleInfo_81, ml_backend__ml_call_gen__PredId_14, ml_backend__ml_call_gen__ProcId_15, &ml_backend__ml_call_gen__PredLabel_82, &ml_backend__ml_call_gen__PredModule_83);
    ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_call_gen__PredId_14, ml_backend__ml_call_gen__ProcId_15, &ml_backend__ml_call_gen__Params_84, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_53_53);
    ml_backend__ml_call_gen__Signature_85 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_84);
    {
      ml_backend__ml_call_gen__ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_86, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredLabel_82));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_86, 1) = ((MR_Box) (ml_backend__ml_call_gen__ProcId_15));
    }
    {
      ml_backend__ml_call_gen__FuncLabel_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLabel_87, 0) = ((MR_Box) (ml_backend__ml_call_gen__ProcLabel_86));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLabel_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_call_gen__QualFuncLabel_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualFuncLabel_88, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredModule_83));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualFuncLabel_88, 1) = ((MR_Box) (ml_backend__ml_call_gen__FuncLabel_87));
    }
    {
      ml_backend__ml_call_gen__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Var_92, 0) = ((MR_Box) (ml_backend__ml_call_gen__QualFuncLabel_88));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Var_92, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_85));
    }
    ml_backend__ml_call_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Var_92);
    {
      ml_backend__ml_call_gen__FuncRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_29, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_91));
    }
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_call_gen__ModuleInfo_26, ml_backend__ml_call_gen__PredId_14, ml_backend__ml_call_gen__ProcId_15, &ml_backend__ml_call_gen__PredInfo_30, &ml_backend__ml_call_gen__ProcInfo_31);
    ml_backend__ml_call_gen__PredOrFunc_32 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_call_gen__PredInfo_30);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_call_gen__PredInfo_30, &ml_backend__ml_call_gen__PredArgTypes_33);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_call_gen__ProcInfo_31, &ml_backend__ml_call_gen__ArgModes_34);
    ml_backend__ml_call_gen__ml_gen_args_17_p_0(ml_backend__ml_call_gen__ArgNames_16, ml_backend__ml_call_gen__ArgLvals_17, ml_backend__ml_call_gen__ActualArgTypes_18, ml_backend__ml_call_gen__PredArgTypes_33, ml_backend__ml_call_gen__ArgModes_34, ml_backend__ml_call_gen__PredOrFunc_32, ml_backend__ml_call_gen__CodeModel_19, ml_backend__ml_call_gen__Context_20, ml_backend__ml_call_gen__ForClosureWrapper_21, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_35, &ml_backend__ml_call_gen__OutputLvals_36, &ml_backend__ml_call_gen__OutputTypes_37, &ml_backend__ml_call_gen__ConvArgLocalVarDefns_38, &ml_backend__ml_call_gen__ConvOutputStmts_39, ml_backend__ml_call_gen__STATE_VARIABLE_Info_53_53, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_55_55);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_call_gen__ProcInfo_31, &ml_backend__ml_call_gen__Detism_40);
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgLocalVarDefns_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStmts_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_28, ml_backend__ml_call_gen__FuncRval_29, ml_backend__ml_call_gen__InputRvals_35, ml_backend__ml_call_gen__OutputLvals_36, ml_backend__ml_call_gen__OutputTypes_37, ml_backend__ml_call_gen__Detism_40, ml_backend__ml_call_gen__Context_20, ml_backend__ml_call_gen__LocalVarDefns_22, ml_backend__ml_call_gen__FuncDefns_23, ml_backend__ml_call_gen__Stmts_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52);
    else
    {
      MR_Word ml_backend__ml_call_gen__DoGenCall_41;
      MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42;
      MR_Word ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_48;

      {
        ml_backend__ml_call_gen__DoGenCall_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_28));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 4) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_29));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 5) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_35));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 6) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_36));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_37));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 8) = ((MR_Box) (ml_backend__ml_call_gen__Detism_40));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_41, 9) = ((MR_Box) (ml_backend__ml_call_gen__Context_20));
      }
      {
        ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 3) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_19));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 4) = ((MR_Box) (ml_backend__ml_call_gen__Context_20));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStmts_39));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(ml_backend__ml_call_gen__CodeModel_19, ml_backend__ml_call_gen__Context_20, ml_backend__ml_call_gen__DoGenCall_41, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_42, &ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_48, ml_backend__ml_call_gen__FuncDefns_23, ml_backend__ml_call_gen__Stmts_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52);
      *ml_backend__ml_call_gen__LocalVarDefns_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_call_gen__ConvArgLocalVarDefns_38, ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_48);
    }
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_generic_call_10_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_11,
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
  MR_Word ml_backend__ml_call_gen__ArgModes_13,
  MR_Word ml_backend__ml_call_gen__Determinism_14,
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_call_gen__Stmts_18,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_31)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(ml_backend__ml_call_gen__GenericCall_11, ml_backend__ml_call_gen__ArgVars_12, ml_backend__ml_call_gen__ArgModes_13, ml_backend__ml_call_gen__Determinism_14, ml_backend__ml_call_gen__Context_15, ml_backend__ml_call_gen__LocalVarDefns_16, ml_backend__ml_call_gen__FuncDefns_17, ml_backend__ml_call_gen__Stmts_18, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__STATE_VARIABLE_Info_31);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(ml_backend__ml_call_gen__GenericCall_11, ml_backend__ml_call_gen__ArgVars_12, ml_backend__ml_call_gen__ArgModes_13, ml_backend__ml_call_gen__Determinism_14, ml_backend__ml_call_gen__Context_15, ml_backend__ml_call_gen__LocalVarDefns_16, ml_backend__ml_call_gen__FuncDefns_17, ml_backend__ml_call_gen__Stmts_18, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__STATE_VARIABLE_Info_31);
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_call_gen__LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_31 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_call_gen__ArgLvals_43;
          MR_Word ml_backend__ml_call_gen__ArgTypes_44;
          MR_Word ml_backend__ml_call_gen__SrcVar_45;
          MR_Word ml_backend__ml_call_gen__DestVar_46;
          MR_Word ml_backend__ml_call_gen__SrcLval_47;
          MR_Word ml_backend__ml_call_gen__DestLval_48;
          MR_Word ml_backend__ml_call_gen__SrcType_49;
          MR_Word ml_backend__ml_call_gen__DestType_50;
          MR_Word ml_backend__ml_call_gen__Var_56;
          MR_Word ml_backend__ml_call_gen__Var_57;
          MR_Word ml_backend__ml_call_gen__Var_58;
          MR_Word ml_backend__ml_call_gen__Var_59;
          MR_Word ml_backend__ml_call_gen__Var_60;
          MR_Word ml_backend__ml_call_gen__Var_61;

          ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgLvals_43);
          ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgTypes_44);
          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgVars_12)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__ml_call_gen__succeeded)
          {
            ml_backend__ml_call_gen__SrcVar_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_12, (MR_Integer) 0)));
            ml_backend__ml_call_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_12, (MR_Integer) 1)));
            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_56)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_call_gen__succeeded)
            {
              ml_backend__ml_call_gen__DestVar_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_56, (MR_Integer) 0)));
              ml_backend__ml_call_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_56, (MR_Integer) 1)));
              ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ml_backend__ml_call_gen__succeeded)
              {
                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLvals_43)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen__SrcLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_43, (MR_Integer) 0)));
                  ml_backend__ml_call_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_43, (MR_Integer) 1)));
                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_58)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_call_gen__succeeded)
                  {
                    ml_backend__ml_call_gen__DestLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_58, (MR_Integer) 0)));
                    ml_backend__ml_call_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_58, (MR_Integer) 1)));
                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ml_backend__ml_call_gen__succeeded)
                    {
                      ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgTypes_44)) == (MR_mktag((MR_Integer) 1)));
                      if (ml_backend__ml_call_gen__succeeded)
                      {
                        ml_backend__ml_call_gen__SrcType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_44, (MR_Integer) 0)));
                        ml_backend__ml_call_gen__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_44, (MR_Integer) 1)));
                        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_60)) == (MR_mktag((MR_Integer) 1)));
                        if (ml_backend__ml_call_gen__succeeded)
                        {
                          ml_backend__ml_call_gen__DestType_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_60, (MR_Integer) 0)));
                          ml_backend__ml_call_gen__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_60, (MR_Integer) 1)));
                          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (ml_backend__ml_call_gen__succeeded)
          {
            MR_Word ml_backend__ml_call_gen__ModuleInfo_51;
            MR_Word ml_backend__ml_call_gen__IsDummy_52;
            MR_Word ml_backend__ml_call_gen__GroundTerm_55;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_call_gen__ModuleInfo_51);
            ml_backend__ml_call_gen__IsDummy_52 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_51, ml_backend__ml_call_gen__DestType_50);
            switch (ml_backend__ml_call_gen__IsDummy_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ml_backend__ml_call_gen__Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_call_gen__CastRval_53;
                  MR_Word ml_backend__ml_call_gen__Assign_54;
                  MR_Word ml_backend__ml_call_gen__Var_63;

                  {
                    ml_backend__ml_call_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_call_gen__SrcLval_47));
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_51, ml_backend__ml_call_gen__SrcType_49, ml_backend__ml_call_gen__DestType_50, (MR_Integer) 0, ml_backend__ml_call_gen__Var_63, &ml_backend__ml_call_gen__CastRval_53);
                  ml_backend__ml_call_gen__Assign_54 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__DestLval_48, ml_backend__ml_call_gen__CastRval_53, ml_backend__ml_call_gen__Context_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_call_gen__Stmts_18 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Assign_54));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
            *ml_backend__ml_call_gen__LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_call_gen__FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_call_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__SrcVar_45, &ml_backend__ml_call_gen__GroundTerm_55);
            if (ml_backend__ml_call_gen__succeeded)
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_call_gen__DestVar_46, ml_backend__ml_call_gen__GroundTerm_55, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_call_gen__STATE_VARIABLE_Info_31);
            else
              *ml_backend__ml_call_gen__STATE_VARIABLE_Info_31 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_30;
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
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_122;
    MR_Word ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_123;
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_124;
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_126;

    ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_122, &ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_123, &ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_124, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_4), &ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_126);
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv7_LambdaHeadVar__1_122));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv6_LambdaHeadVar__2_123));
    *ml_backend__ml_call_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__3_124));
    *ml_backend__ml_call_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__5_126));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv3_LocalVarDefns_20;
    MR_Word ml_backend__ml_call_gen__conv2_FuncDefns_21;
    MR_Word ml_backend__ml_call_gen__conv1_Stmts_22;
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

    ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), &ml_backend__ml_call_gen__conv3_LocalVarDefns_20, &ml_backend__ml_call_gen__conv2_FuncDefns_21, &ml_backend__ml_call_gen__conv1_Stmts_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_4), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LocalVarDefns_20));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv2_FuncDefns_21));
    *ml_backend__ml_call_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Stmts_22));
    *ml_backend__ml_call_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_11,
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
  MR_Word ml_backend__ml_call_gen__ArgModes_13,
  MR_Word ml_backend__ml_call_gen__Determinism_14,
  MR_Word ml_backend__ml_call_gen__Context_15,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_call_gen__Stmts_18,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_83)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Integer ml_backend__ml_call_gen__NumArgs_20;
    MR_Word ml_backend__ml_call_gen__BoxedArgTypes_21;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_22;
    MR_Word ml_backend__ml_call_gen__VarSet_23;
    MR_Word ml_backend__ml_call_gen__ArgNames_24;
    MR_Word ml_backend__ml_call_gen__PredOrFunc_25;
    MR_Word ml_backend__ml_call_gen__CodeModel_26;
    MR_Word ml_backend__ml_call_gen__Params0_27;
    MR_Word ml_backend__ml_call_gen__ClosureArgType_29;
    MR_Word ml_backend__ml_call_gen__ArgParams0_31;
    MR_Word ml_backend__ml_call_gen__RetParam_32;
    MR_Word ml_backend__ml_call_gen__Params_33;
    MR_Word ml_backend__ml_call_gen__Signature_34;
    MR_Word ml_backend__ml_call_gen__ClosureLval_39;
    MR_Word ml_backend__ml_call_gen__FuncType_42;
    MR_Word ml_backend__ml_call_gen__FuncRval_43;
    MR_Word ml_backend__ml_call_gen__ConvVarSeq_54;
    MR_Integer ml_backend__ml_call_gen__ConvVarNum_55;
    MR_Word ml_backend__ml_call_gen__FuncVarName_56;
    MR_Word ml_backend__ml_call_gen__FuncVarDecl_57;
    MR_Word ml_backend__ml_call_gen__FuncVarLval_58;
    MR_Word ml_backend__ml_call_gen__AssignFuncVar_59;
    MR_Word ml_backend__ml_call_gen__FuncVarRval_60;
    MR_Word ml_backend__ml_call_gen__ArgLvals_61;
    MR_Word ml_backend__ml_call_gen__ActualArgTypes_62;
    MR_Word ml_backend__ml_call_gen__InputRvals_63;
    MR_Word ml_backend__ml_call_gen__OutputLvals_64;
    MR_Word ml_backend__ml_call_gen__OutputTypes_65;
    MR_Word ml_backend__ml_call_gen__ConvArgLocalVarDefns_66;
    MR_Word ml_backend__ml_call_gen__ConvOutputStmts_67;
    MR_Word ml_backend__ml_call_gen__ClosureRval_68;
    MR_Word ml_backend__ml_call_gen__LocalVarDefns0_69;
    MR_Word ml_backend__ml_call_gen__Stmts0_71;
    MR_Word ml_backend__ml_call_gen__Var_86;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112;
    MR_Word ml_backend__ml_call_gen__Var_113;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_116_116;
    MR_Word ml_backend__ml_call_gen__Var_118;

    ml_backend__ml_call_gen__NumArgs_20 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ml_backend__ml_call_gen__ArgVars_12);
    ml_backend__ml_call_gen__BoxedArgTypes_21 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_call_gen__NumArgs_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82, &ml_backend__ml_call_gen__ModuleInfo_22);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82, &ml_backend__ml_call_gen__VarSet_23);
    ml_backend__ml_call_gen__ArgNames_24 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(ml_backend__ml_call_gen__VarSet_23, ml_backend__ml_call_gen__ArgVars_12);
    ml_backend__ml_call_gen__PredOrFunc_25 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(ml_backend__ml_call_gen__GenericCall_11);
    hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Determinism_14, &ml_backend__ml_call_gen__CodeModel_26);
    ml_backend__ml_call_gen__Params0_27 = ml_backend__ml_code_util__ml_gen_params_6_f_0(ml_backend__ml_call_gen__ModuleInfo_22, ml_backend__ml_call_gen__ArgNames_24, ml_backend__ml_call_gen__BoxedArgTypes_21, ml_backend__ml_call_gen__ArgModes_13, ml_backend__ml_call_gen__PredOrFunc_25, ml_backend__ml_call_gen__CodeModel_26);
    ml_backend__ml_call_gen__ClosureArgType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ml_backend__ml_call_gen__ArgParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_27, (MR_Integer) 0)));
    ml_backend__ml_call_gen__RetParam_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_27, (MR_Integer) 1)));
    {
      ml_backend__ml_call_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_86, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_86, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgParams0_31));
    }
    {
      ml_backend__ml_call_gen__Params_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_33, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_86));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_33, 1) = ((MR_Box) (ml_backend__ml_call_gen__RetParam_32));
    }
    ml_backend__ml_call_gen__Signature_34 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_33);
    if (((MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ml_backend__ml_call_gen__TypeClassInfoVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 0)));
      MR_Integer ml_backend__ml_call_gen__MethodNum_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 1)));
      MR_Word ml_backend__ml_call_gen__BaseTypeclassInfoLval_50;
      MR_Integer ml_backend__ml_call_gen__Offset_51;
      MR_Integer ml_backend__ml_call_gen__MethodFieldNum_52;
      MR_Word ml_backend__ml_call_gen__MethodFieldId_53;
      MR_Word ml_backend__ml_call_gen__Var_90;
      MR_Word ml_backend__ml_call_gen__Var_92;
      MR_Word ml_backend__ml_call_gen__Var_94;
      MR_Word ml_backend__ml_call_gen__Var_95;
      MR_Word ml_backend__ml_call_gen__Var_98;
      MR_Word ml_backend__ml_call_gen__Var_101;
      MR_Word ml_backend__ml_call_gen__Var_102;
      MR_Word ml_backend__ml_call_gen__FuncLval_128;
      MR_Word ml_backend__ml_call_gen___ClassId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 2)));
      MR_Word ml_backend__ml_call_gen___PredName_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_call_gen__TypeClassInfoVar_44, &ml_backend__ml_call_gen__ClosureLval_39);
      ml_backend__ml_call_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[0]);
      {
        ml_backend__ml_call_gen__Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_92, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_39));
      }
      {
        ml_backend__ml_call_gen__BaseTypeclassInfoLval_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_50, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_90));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_50, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_92));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_50, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_50, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_29));
      }
      ml_backend__ml_call_gen__Offset_51 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
      ml_backend__ml_call_gen__MethodFieldNum_52 = (ml_backend__ml_call_gen__MethodNum_45 + ml_backend__ml_call_gen__Offset_51);
      {
        ml_backend__ml_call_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_95, 0) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldNum_52));
      }
      {
        ml_backend__ml_call_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_94, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_95));
      }
      {
        ml_backend__ml_call_gen__MethodFieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__MethodFieldId_53, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_94));
      }
      {
        ml_backend__ml_call_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_98, 0) = ((MR_Box) (ml_backend__ml_call_gen__BaseTypeclassInfoLval_50));
      }
      {
        ml_backend__ml_call_gen__FuncLval_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_128, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_90));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_128, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_98));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_128, 2) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldId_53));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_128, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_128, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      ml_backend__ml_call_gen__FuncType_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_33);
      {
        ml_backend__ml_call_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_101, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_42));
      }
      {
        ml_backend__ml_call_gen__Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_102, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_128));
      }
      {
        ml_backend__ml_call_gen__FuncRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_101));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_102));
      }
    }
    else
    {
      MR_Word ml_backend__ml_call_gen__ClosureVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 0)));
      MR_Word ml_backend__ml_call_gen__FuncLval_41;
      MR_Word ml_backend__ml_call_gen__Var_108;
      MR_Word ml_backend__ml_call_gen__Var_110;
      MR_Word ml_backend__ml_call_gen__Var_111;
      MR_Word ml_backend__ml_call_gen___Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 1)));
      MR_Word ml_backend__ml_call_gen___PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 2)));
      MR_Integer ml_backend__ml_call_gen___Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_11, (MR_Integer) 3)));

      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_call_gen__ClosureVar_35, &ml_backend__ml_call_gen__ClosureLval_39);
      {
        ml_backend__ml_call_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_108, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_39));
      }
      {
        ml_backend__ml_call_gen__FuncLval_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_108));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_41, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[3]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_41, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_29));
      }
      ml_backend__ml_call_gen__FuncType_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_33);
      {
        ml_backend__ml_call_gen__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_110, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_42));
      }
      {
        ml_backend__ml_call_gen__Var_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_111, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_41));
      }
      {
        ml_backend__ml_call_gen__FuncRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_110));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_43, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_111));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_call_gen__ConvVarSeq_54, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_82, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112);
    ml_backend__ml_call_gen__ConvVarNum_55 = (MR_Integer) ml_backend__ml_call_gen__ConvVarSeq_54;
    {
      ml_backend__ml_call_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_113, 1) = ((MR_Box) (ml_backend__ml_call_gen__ConvVarNum_55));
    }
    {
      ml_backend__ml_call_gen__FuncVarName_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncVarName_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncVarName_56, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_113));
    }
    ml_backend__ml_call_gen__FuncVarDecl_57 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_call_gen__FuncVarName_56, ml_backend__ml_call_gen__FuncType_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__Context_15);
    ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112, ml_backend__ml_call_gen__FuncVarName_56, ml_backend__ml_call_gen__FuncType_42, &ml_backend__ml_call_gen__FuncVarLval_58);
    ml_backend__ml_call_gen__AssignFuncVar_59 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__FuncVarLval_58, ml_backend__ml_call_gen__FuncRval_43, ml_backend__ml_call_gen__Context_15);
    {
      ml_backend__ml_call_gen__FuncVarRval_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__FuncVarRval_60, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarLval_58));
    }
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgLvals_61);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ActualArgTypes_62);
    ml_backend__ml_call_gen__ml_gen_args_17_p_0(ml_backend__ml_call_gen__ArgNames_24, ml_backend__ml_call_gen__ArgLvals_61, ml_backend__ml_call_gen__ActualArgTypes_62, ml_backend__ml_call_gen__BoxedArgTypes_21, ml_backend__ml_call_gen__ArgModes_13, ml_backend__ml_call_gen__PredOrFunc_25, ml_backend__ml_call_gen__CodeModel_26, ml_backend__ml_call_gen__Context_15, (MR_Integer) 0, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_63, &ml_backend__ml_call_gen__OutputLvals_64, &ml_backend__ml_call_gen__OutputTypes_65, &ml_backend__ml_call_gen__ConvArgLocalVarDefns_66, &ml_backend__ml_call_gen__ConvOutputStmts_67, ml_backend__ml_call_gen__STATE_VARIABLE_Info_112_112, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_116_116);
    {
      ml_backend__ml_call_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_118, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_39));
    }
    {
      ml_backend__ml_call_gen__ClosureRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[4])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_68, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_118));
    }
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgLocalVarDefns_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStmts_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
    {
      MR_Word ml_backend__ml_call_gen__Var_119;

      {
        ml_backend__ml_call_gen__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_119, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_68));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_119, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_63));
      }
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_34, ml_backend__ml_call_gen__FuncVarRval_60, ml_backend__ml_call_gen__Var_119, ml_backend__ml_call_gen__OutputLvals_64, ml_backend__ml_call_gen__OutputTypes_65, ml_backend__ml_call_gen__Determinism_14, ml_backend__ml_call_gen__Context_15, &ml_backend__ml_call_gen__LocalVarDefns0_69, ml_backend__ml_call_gen__FuncDefns_17, &ml_backend__ml_call_gen__Stmts0_71, ml_backend__ml_call_gen__STATE_VARIABLE_Info_116_116, ml_backend__ml_call_gen__STATE_VARIABLE_Info_83);
    }
    else
    {
      MR_Word ml_backend__ml_call_gen__DoGenCall_72;
      MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73;
      MR_Word ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_79;
      MR_Word ml_backend__ml_call_gen__Var_121;

      {
        ml_backend__ml_call_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_121, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_68));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_121, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_63));
      }
      {
        ml_backend__ml_call_gen__DoGenCall_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_34));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 4) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarRval_60));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 5) = ((MR_Box) (ml_backend__ml_call_gen__Var_121));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 6) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_64));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_65));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 8) = ((MR_Box) (ml_backend__ml_call_gen__Determinism_14));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_72, 9) = ((MR_Box) (ml_backend__ml_call_gen__Context_15));
      }
      {
        ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_10_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 3) = ((MR_Box) (ml_backend__ml_call_gen__Context_15));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 4) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_26));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStmts_67));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(ml_backend__ml_call_gen__CodeModel_26, ml_backend__ml_call_gen__Context_15, ml_backend__ml_call_gen__DoGenCall_72, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_73, &ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_79, ml_backend__ml_call_gen__FuncDefns_17, &ml_backend__ml_call_gen__Stmts0_71, ml_backend__ml_call_gen__STATE_VARIABLE_Info_116_116, ml_backend__ml_call_gen__STATE_VARIABLE_Info_83);
      ml_backend__ml_call_gen__LocalVarDefns0_69 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_call_gen__ConvArgLocalVarDefns_66, ml_backend__ml_call_gen__CallAndConvOutputLocalVarDefns_79);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__LocalVarDefns_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarDecl_57));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__LocalVarDefns0_69));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__AssignFuncVar_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Stmts0_71));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_args_17_p_0(
  MR_Word ml_backend__ml_call_gen__VarNames_18,
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
  MR_Word ml_backend__ml_call_gen__Modes_22,
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
  MR_Word ml_backend__ml_call_gen__Context_25,
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_49,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_50)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_call_gen__succeeded)
    {
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarLvals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ml_backend__ml_call_gen__succeeded)
      {
        ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CallerTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_call_gen__succeeded)
        {
          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CalleeTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (ml_backend__ml_call_gen__succeeded)
            ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Modes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (ml_backend__ml_call_gen__succeeded)
    {
      *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_49;
    }
    else
    {
      MR_Word ml_backend__ml_call_gen__VarName_34;
      MR_Word ml_backend__ml_call_gen__VarNamesTail_35;
      MR_Word ml_backend__ml_call_gen__VarLval_36;
      MR_Word ml_backend__ml_call_gen__VarLvalsTail_37;
      MR_Word ml_backend__ml_call_gen__CallerType_38;
      MR_Word ml_backend__ml_call_gen__CallerTypesTail_39;
      MR_Word ml_backend__ml_call_gen__CalleeType_40;
      MR_Word ml_backend__ml_call_gen__CalleeTypesTail_41;
      MR_Word ml_backend__ml_call_gen__Mode_42;
      MR_Word ml_backend__ml_call_gen__ModesTail_43;

      ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarNames_18)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_call_gen__succeeded)
      {
        ml_backend__ml_call_gen__VarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 0)));
        ml_backend__ml_call_gen__VarNamesTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 1)));
        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarLvals_19)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_call_gen__succeeded)
        {
          ml_backend__ml_call_gen__VarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 0)));
          ml_backend__ml_call_gen__VarLvalsTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 1)));
          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CallerTypes_20)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__ml_call_gen__succeeded)
          {
            ml_backend__ml_call_gen__CallerType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 0)));
            ml_backend__ml_call_gen__CallerTypesTail_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 1)));
            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CalleeTypes_21)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_call_gen__succeeded)
            {
              ml_backend__ml_call_gen__CalleeType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 0)));
              ml_backend__ml_call_gen__CalleeTypesTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 1)));
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Modes_22)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_call_gen__succeeded)
              {
                ml_backend__ml_call_gen__Mode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 0)));
                ml_backend__ml_call_gen__ModesTail_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 1)));
              }
            }
          }
        }
      }
      if (ml_backend__ml_call_gen__succeeded)
      {
        MR_Integer ml_backend__ml_call_gen__Var_56 = (ml_backend__ml_call_gen__ArgNum_27 + (MR_Integer) 1);
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62;
        MR_Word ml_backend__ml_call_gen__ModuleInfo_101;
        MR_Word ml_backend__ml_call_gen__ArgTopFunctorMode_102;
        MR_Word ml_backend__ml_call_gen__CalleeIsDummy_103;

        ml_backend__ml_call_gen__ml_gen_args_17_p_0(ml_backend__ml_call_gen__VarNamesTail_35, ml_backend__ml_call_gen__VarLvalsTail_37, ml_backend__ml_call_gen__CallerTypesTail_39, ml_backend__ml_call_gen__CalleeTypesTail_41, ml_backend__ml_call_gen__ModesTail_43, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__Var_56, &ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_49, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62, &ml_backend__ml_call_gen__ModuleInfo_101);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_call_gen__ModuleInfo_101, ml_backend__ml_call_gen__Mode_42, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__ArgTopFunctorMode_102);
        ml_backend__ml_call_gen__CalleeIsDummy_103 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_101, ml_backend__ml_call_gen__CalleeType_40);
        switch (ml_backend__ml_call_gen__CalleeIsDummy_103) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57;
              *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58;
              *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59;
              *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60;
              *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61;
              *ml_backend__ml_call_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62;
            }
            break;
          case (MR_Integer) 1:
            switch (ml_backend__ml_call_gen__ArgTopFunctorMode_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_call_gen__CallerIsDummy_104;
                  MR_Word ml_backend__ml_call_gen__VarRval_105;
                  MR_Word ml_backend__ml_call_gen__ArgRval_106;

                  ml_backend__ml_call_gen__CallerIsDummy_104 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_101, ml_backend__ml_call_gen__CallerType_38);
                  switch (ml_backend__ml_call_gen__CallerIsDummy_104) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_call_gen__VarRval_105 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[3]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ml_backend__ml_call_gen__VarRval_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarRval_105, 0) = ((MR_Box) (ml_backend__ml_call_gen__VarLval_36));
                      }
                      break;
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_101, ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarRval_105, &ml_backend__ml_call_gen__ArgRval_106);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgRval_106));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57));
                  }
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_call_gen__ArgLval_107;
                  MR_Word ml_backend__ml_call_gen__ThisArgConvDecls_108;
                  MR_Word ml_backend__ml_call_gen__ThisArgConvOutput_110;
                  MR_Word ml_backend__ml_call_gen___ThisArgConvInput_109;

                  ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarLval_36, ml_backend__ml_call_gen__VarName_34, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__ArgNum_27, &ml_backend__ml_call_gen__ArgLval_107, &ml_backend__ml_call_gen__ThisArgConvDecls_108, &ml_backend__ml_call_gen___ThisArgConvInput_109, &ml_backend__ml_call_gen__ThisArgConvOutput_110, ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62, ml_backend__ml_call_gen__STATE_VARIABLE_Info_50);
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_call_gen__ThisArgConvDecls_108, ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60);
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ThisArgConvOutput_110, ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61);
                  ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNamesTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ml_backend__ml_call_gen__succeeded)
                  {
                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CodeModel_24 == (MR_Integer) 0);
                    if (ml_backend__ml_call_gen__succeeded)
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__PredOrFunc_23 == (MR_Integer) 1);
                  }
                  if (!(ml_backend__ml_call_gen__succeeded))
                  {
                    MR_Word ml_backend__ml_call_gen__Globals_111;
                    MR_Word ml_backend__ml_call_gen__Var_117;

                    ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_50, &ml_backend__ml_call_gen__Globals_111);
                    ml_backend__ml_call_gen__Var_117 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_call_gen__Globals_111, ml_backend__ml_call_gen__CodeModel_24);
                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_117 == (MR_Integer) 1);
                  }
                  if (ml_backend__ml_call_gen__succeeded)
                  {
                    MR_Word ml_backend__ml_call_gen__OutputType_112;

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_107));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58));
                    }
                    ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_50, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__OutputType_112);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__OutputType_112));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59));
                    }
                    *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57;
                  }
                  else
                  {
                    MR_Word ml_backend__ml_call_gen__Var_121;
                    MR_Word ml_backend__ml_call_gen__Rval_129;
                    MR_Word ml_backend__ml_call_gen__Var_130;

                    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLval_107)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_call_gen__succeeded)
                    {
                      ml_backend__ml_call_gen__Rval_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_107, (MR_Integer) 0)));
                      ml_backend__ml_call_gen__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_107, (MR_Integer) 1)));
                      ml_backend__ml_call_gen__Var_121 = ml_backend__ml_call_gen__Rval_129;
                    }
                    else
                      {
                        ml_backend__ml_call_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_121, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_107));
                      }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_121));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57));
                    }
                    *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59;
                    *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_44 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57_57;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_45 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58_58;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_46 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59_59;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_47 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60_60;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_48 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61_61;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_62_62;
                }
                break;
            }
            break;
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_args\'/17", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word ml_backend__ml_call_gen__Signature_13,
  MR_Word ml_backend__ml_call_gen__FuncRval_14,
  MR_Word ml_backend__ml_call_gen__ArgRvals0_15,
  MR_Word ml_backend__ml_call_gen__RetLvals0_16,
  MR_Word ml_backend__ml_call_gen__RetTypes0_17,
  MR_Word ml_backend__ml_call_gen__Detism_18,
  MR_Word ml_backend__ml_call_gen__Context_19,
  MR_Word * ml_backend__ml_call_gen__LocalVarDefns_20,
  MR_Word * ml_backend__ml_call_gen__FuncDefns_21,
  MR_Word * ml_backend__ml_call_gen__Stmts_22,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
    MR_Word ml_backend__ml_call_gen__ArgRvals_31;
    MR_Word ml_backend__ml_call_gen__RetLvals_34;
    MR_Word ml_backend__ml_call_gen__CallKind_36;
    MR_Word ml_backend__ml_call_gen__Warnings_37;
    MR_Word ml_backend__ml_call_gen__Markers_38;
    MR_Word ml_backend__ml_call_gen__Stmt_39;

    hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Detism_18, &ml_backend__ml_call_gen__CodeModel_24);
    switch (ml_backend__ml_call_gen__CodeModel_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_call_gen__ArgRvals_31 = ml_backend__ml_call_gen__ArgRvals0_15;
          ml_backend__ml_call_gen__RetLvals_34 = ml_backend__ml_call_gen__RetLvals0_16;
          *ml_backend__ml_call_gen__FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_call_gen__Cont_25;
          MR_Word ml_backend__ml_call_gen__FuncPtrRval_26;
          MR_Word ml_backend__ml_call_gen__EnvPtrRval_27;
          MR_Word ml_backend__ml_call_gen__UseNestedFuncs_30;
          MR_Word ml_backend__ml_call_gen__Globals_32;
          MR_Word ml_backend__ml_call_gen__NondetCopyOut_33;
          MR_Word ml_backend__ml_call_gen__Var_28;
          MR_Word ml_backend__ml_call_gen__Var_29;

          ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(ml_backend__ml_call_gen__RetTypes0_17, ml_backend__ml_call_gen__RetLvals0_16, ml_backend__ml_call_gen__Context_19, &ml_backend__ml_call_gen__Cont_25, ml_backend__ml_call_gen__FuncDefns_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);
          ml_backend__ml_call_gen__FuncPtrRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 0)));
          ml_backend__ml_call_gen__EnvPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 1)));
          ml_backend__ml_call_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 2)));
          ml_backend__ml_call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 3)));
          ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__UseNestedFuncs_30);
          switch (ml_backend__ml_call_gen__UseNestedFuncs_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_call_gen__Var_44;
                MR_Word ml_backend__ml_call_gen__Var_45;

                {
                  ml_backend__ml_call_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_45, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_27));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_call_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_44, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_26));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_44, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_45));
                }
                ml_backend__ml_call_gen__ArgRvals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_15, ml_backend__ml_call_gen__Var_44);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_call_gen__Var_47;

                {
                  ml_backend__ml_call_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_26));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ml_backend__ml_call_gen__ArgRvals_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_15, ml_backend__ml_call_gen__Var_47);
              }
              break;
          }
          ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__Globals_32);
          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_call_gen__Globals_32, (MR_Integer) 268, &ml_backend__ml_call_gen__NondetCopyOut_33);
          switch (ml_backend__ml_call_gen__NondetCopyOut_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_call_gen__RetLvals_34 = ml_backend__ml_call_gen__RetLvals0_16;
              break;
            case (MR_Integer) 1:
              ml_backend__ml_call_gen__RetLvals_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_call_gen__Success_35;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_call_gen__Success_35, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);
          ml_backend__ml_call_gen__ArgRvals_31 = ml_backend__ml_call_gen__ArgRvals0_15;
          {
            ml_backend__ml_call_gen__RetLvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__RetLvals_34, 0) = ((MR_Box) (ml_backend__ml_call_gen__Success_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__RetLvals_34, 1) = ((MR_Box) (ml_backend__ml_call_gen__RetLvals0_16));
          }
          *ml_backend__ml_call_gen__FuncDefns_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    *ml_backend__ml_call_gen__LocalVarDefns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Detism_18 == (MR_Integer) 6);
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__CallKind_36 = (MR_Integer) 0;
    else
      ml_backend__ml_call_gen__CallKind_36 = (MR_Integer) 2;
    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__Warnings_37);
    ml_backend__ml_call_gen__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ml_backend__ml_call_gen__Warnings_37, ((MR_Box) ((MR_Integer) 1)));
    if (ml_backend__ml_call_gen__succeeded)
    {
      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      ml_backend__ml_call_gen__Markers_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &ml_backend__ml_call_gen__Markers_38);
    }
    {
      ml_backend__ml_call_gen__Stmt_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 2) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 3) = ((MR_Box) (ml_backend__ml_call_gen__ArgRvals_31));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 4) = ((MR_Box) (ml_backend__ml_call_gen__RetLvals_34));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 5) = ((MR_Box) (ml_backend__ml_call_gen__CallKind_36));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 6) = ((MR_Box) (ml_backend__ml_call_gen__Markers_38));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_39, 7) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__Stmts_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_39));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
  MR_Word ml_backend__ml_call_gen__Context_10,
  MR_Word * ml_backend__ml_call_gen__Cont_11,
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__CurrentCont_14;
    MR_Word ml_backend__ml_call_gen__CurrentContArgTypes_17;
    MR_Word ml_backend__ml_call_gen__CurrentContArgLvals_18;
    MR_Word ml_backend__ml_call_gen___FuncPtrRval_15;
    MR_Word ml_backend__ml_call_gen___EnvPtrRval_16;
    MR_Word ml_backend__ml_call_gen__TypeInfo_42_42;

    ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, &ml_backend__ml_call_gen__CurrentCont_14);
    ml_backend__ml_call_gen___FuncPtrRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 0)));
    ml_backend__ml_call_gen___EnvPtrRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 1)));
    ml_backend__ml_call_gen__CurrentContArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 2)));
    ml_backend__ml_call_gen__CurrentContArgLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 3)));
    ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgTypes_17)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8)));
    if (ml_backend__ml_call_gen__succeeded)
    {
      ml_backend__ml_call_gen__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2];
      ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_call_gen__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgLvals_18)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9)));
    }
    if (ml_backend__ml_call_gen__succeeded)
    {
      *ml_backend__ml_call_gen__Cont_11 = ml_backend__ml_call_gen__CurrentCont_14;
      *ml_backend__ml_call_gen__ContDecls_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word ml_backend__ml_call_gen__Params_19;
      MR_Word ml_backend__ml_call_gen__ContFuncLabel_20;
      MR_Word ml_backend__ml_call_gen__ContFuncLabelRval_21;
      MR_Word ml_backend__ml_call_gen__CopyStmts_22;
      MR_Word ml_backend__ml_call_gen__CallContStmt_23;
      MR_Word ml_backend__ml_call_gen__CopyStmt_24;
      MR_Word ml_backend__ml_call_gen__ContFuncDefn_25;
      MR_Word ml_backend__ml_call_gen__EnvPtrRval_26;
      MR_Word ml_backend__ml_call_gen__Var_31;
      MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_32_32;
      MR_Word ml_backend__ml_call_gen__Var_36;
      MR_Word ml_backend__ml_call_gen__Var_37;
      MR_Word ml_backend__ml_call_gen__Args0_48;
      MR_Word ml_backend__ml_call_gen__UseNestedFuncs_49;
      MR_Word ml_backend__ml_call_gen__Args_50;

      ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, &ml_backend__ml_call_gen__Args0_48);
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, &ml_backend__ml_call_gen__UseNestedFuncs_49);
      switch (ml_backend__ml_call_gen__UseNestedFuncs_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_call_gen__EnvPtrArg_51;
            MR_Word ml_backend__ml_call_gen__Var_53;

            ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&ml_backend__ml_call_gen__EnvPtrArg_51);
            {
              ml_backend__ml_call_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_53, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrArg_51));
              MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ml_backend__ml_call_gen__Args_50 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_call_gen__Args0_48, ml_backend__ml_call_gen__Var_53);
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_call_gen__Args_50 = ml_backend__ml_call_gen__Args0_48;
          break;
      }
      {
        ml_backend__ml_call_gen__Params_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_19, 0) = ((MR_Box) (ml_backend__ml_call_gen__Args_50));
        MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__ml_call_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_31, 0) = ((MR_Box) (ml_backend__ml_call_gen__Params_19));
      }
      ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_call_gen__Var_31, &ml_backend__ml_call_gen__ContFuncLabel_20, &ml_backend__ml_call_gen__ContFuncLabelRval_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_32_32);
      ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_32_32, ml_backend__ml_call_gen__OutputArgLvals_9, ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CopyStmts_22);
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CallContStmt_23, ml_backend__ml_call_gen__STATE_VARIABLE_Info_32_32, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
      {
        ml_backend__ml_call_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_call_gen__CallContStmt_23));
        MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ml_backend__ml_call_gen__Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__CopyStmts_22, ml_backend__ml_call_gen__Var_37);
      ml_backend__ml_call_gen__CopyStmt_24 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__Var_36, ml_backend__ml_call_gen__Context_10);
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_29, ml_backend__ml_call_gen__ContFuncLabel_20, ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__Context_10, ml_backend__ml_call_gen__CopyStmt_24, &ml_backend__ml_call_gen__ContFuncDefn_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_call_gen__ContDecls_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncDefn_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_29, &ml_backend__ml_call_gen__EnvPtrRval_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *ml_backend__ml_call_gen__Cont_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncLabelRval_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_26));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
  MR_Word ml_backend__ml_call_gen__Context_5,
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6)
{
  if ((ml_backend__ml_call_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_call_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_loop\'/6", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word ml_backend__ml_call_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_call_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 0)));

    if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_loop\'/6", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ml_backend__ml_call_gen__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_call_gen__Types_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_call_gen__Stmt_33;
      MR_Word ml_backend__ml_call_gen__Stmts_34;
      MR_Word ml_backend__ml_call_gen__ArgName_35;
      MR_Word ml_backend__ml_call_gen__ArgLval_36;
      MR_Word ml_backend__ml_call_gen__Var_37;
      MR_Word ml_backend__ml_call_gen__Var_38;
      MR_Integer ml_backend__ml_call_gen__Var_39;

      {
        ml_backend__ml_call_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgNum_4));
      }
      {
        ml_backend__ml_call_gen__ArgName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_35, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_37));
      }
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__ArgName_35, ml_backend__ml_call_gen__Type_29, &ml_backend__ml_call_gen__ArgLval_36);
      {
        ml_backend__ml_call_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_36));
      }
      ml_backend__ml_call_gen__Stmt_33 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Var_42, ml_backend__ml_call_gen__Var_38, ml_backend__ml_call_gen__Context_5);
      ml_backend__ml_call_gen__Var_39 = (ml_backend__ml_call_gen__ArgNum_4 + (MR_Integer) 1);
      ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__Var_41, ml_backend__ml_call_gen__Types_30, ml_backend__ml_call_gen__Var_39, ml_backend__ml_call_gen__Context_5, &ml_backend__ml_call_gen__Stmts_34);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_call_gen__HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Stmts_34));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3)
{
  if ((ml_backend__ml_call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ml_backend__ml_call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word ml_backend__ml_call_gen__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__ml_call_gen__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ml_backend__ml_call_gen__Argument_8;
    MR_Word ml_backend__ml_call_gen__Arguments_9;
    MR_Word ml_backend__ml_call_gen__ArgName_10;
    MR_Word ml_backend__ml_call_gen__Var_12;
    MR_Integer ml_backend__ml_call_gen__Var_13;

    {
      ml_backend__ml_call_gen__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_12, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgNum_2));
    }
    {
      ml_backend__ml_call_gen__ArgName_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_10, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_12));
    }
    {
      ml_backend__ml_call_gen__Argument_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 1) = ((MR_Box) (ml_backend__ml_call_gen__Type_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_call_gen__Var_13 = (ml_backend__ml_call_gen__ArgNum_2 + (MR_Integer) 1);
    ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(ml_backend__ml_call_gen__Types_6, ml_backend__ml_call_gen__Var_13, &ml_backend__ml_call_gen__Arguments_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Argument_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Arguments_9));
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
