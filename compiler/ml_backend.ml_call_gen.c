/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_7_p_0(
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_65,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_119,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_120,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_121,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_122);

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__392__1_7_p_0(
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
  MR_Word ml_backend__ml_call_gen__Context_19,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_37,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_54,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_55,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_56,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_57);

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1);

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_3(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_3(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
  MR_Word ml_backend__ml_call_gen__Determinism_13,
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word * ml_backend__ml_call_gen__Decls_15,
  MR_Word * ml_backend__ml_call_gen__Stmts_16,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
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
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word ml_backend__ml_call_gen__Signature_13,
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
  MR_Word ml_backend__ml_call_gen__Detism_19,
  MR_Word ml_backend__ml_call_gen__Context_20,
  MR_Word * ml_backend__ml_call_gen__Decls_21,
  MR_Word * ml_backend__ml_call_gen__Stmts_22,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_42);

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
  MR_Word ml_backend__ml_call_gen__Context_10,
  MR_Word * ml_backend__ml_call_gen__Cont_11,
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);

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

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[4][3];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[5][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[1][15];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[2][10];




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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_4[0])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_4[2])))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[5][1] = {
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

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_signature_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_7_p_0(
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_65,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_119,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_120,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_121,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_122)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__SucceedStmts_75;

    *ml_backend__ml_call_gen__LambdaHeadVar__1_119 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__SucceedStmts_75, ml_backend__ml_call_gen__LambdaHeadVar__3_121, ml_backend__ml_call_gen__LambdaHeadVar__4_122);
    }
    {
      *ml_backend__ml_call_gen__LambdaHeadVar__2_120 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ConvOutputStmts_65, ml_backend__ml_call_gen__SucceedStmts_75);
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__392__1_7_p_0(
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
  MR_Word ml_backend__ml_call_gen__Context_19,
  MR_Word ml_backend__ml_call_gen__ConvOutputStmts_37,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_54,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_55,
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_56,
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_57)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__SucceedStmts_45;

    *ml_backend__ml_call_gen__LambdaHeadVar__1_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, &ml_backend__ml_call_gen__SucceedStmts_45, ml_backend__ml_call_gen__LambdaHeadVar__3_56, ml_backend__ml_call_gen__LambdaHeadVar__4_57);
    }
    {
      *ml_backend__ml_call_gen__LambdaHeadVar__2_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ConvOutputStmts_37, ml_backend__ml_call_gen__SucceedStmts_45);
    }
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(
  MR_Word ml_backend__ml_call_gen__PredId_10,
  MR_Integer ml_backend__ml_call_gen__ProcId_11,
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
  MR_Word ml_backend__ml_call_gen__CodeModel_13,
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word * ml_backend__ml_call_gen__Decls_15,
  MR_Word * ml_backend__ml_call_gen__Stmts_16,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_46)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__ArgLvals_18;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_19;
    MR_Word ml_backend__ml_call_gen__ModuleName_20;
    MR_String ml_backend__ml_call_gen__PredName_21;
    MR_Word ml_backend__ml_call_gen__SimpleCode_22;

    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgLvals_18);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_call_gen__ModuleInfo_19);
    }
    {
      ml_backend__ml_call_gen__ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
    {
      ml_backend__ml_call_gen__PredName_21 = hlds__hlds_module__predicate_name_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
    {
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__ModuleName_20, ml_backend__ml_call_gen__PredName_21, ml_backend__ml_call_gen__ProcId_11, ml_backend__ml_call_gen__ArgLvals_18, &ml_backend__ml_call_gen__SimpleCode_22);
    }
    switch (ml_backend__ml_call_gen__CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_call_gen__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
              MR_Word ml_backend__ml_call_gen__SimpleExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__VarType_26;
              MR_Word ml_backend__ml_call_gen__ProgDataType_27;
              MR_Word ml_backend__ml_call_gen__Var_64;
              MR_Word ml_backend__ml_call_gen___VarName_25;
              MR_Word ml_backend__ml_call_gen__Var_28;
              MR_Word ml_backend__ml_call_gen__Var_29;

              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Lval_23)) == (MR_mktag((MR_Integer) 3)));
              if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen___VarName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 0)));
                  ml_backend__ml_call_gen__VarType_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 1)));
                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarType_26)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__ml_call_gen__succeeded)
                    {
                      ml_backend__ml_call_gen__ProgDataType_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 0)));
                      ml_backend__ml_call_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 1)));
                      ml_backend__ml_call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 2)));
                      {
                        ml_backend__ml_call_gen__Var_64 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__ProgDataType_27);
                      }
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_64 == (MR_Integer) 0);
                    }
                }
              if (ml_backend__ml_call_gen__succeeded)
                *ml_backend__ml_call_gen__Stmts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ml_backend__ml_call_gen__Rval_30;
                  MR_Word ml_backend__ml_call_gen__Stmt_31;

                  {
                    ml_backend__ml_call_gen__Rval_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleExpr_24);
                  }
                  {
                    ml_backend__ml_call_gen__Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Lval_23, ml_backend__ml_call_gen__Rval_30, ml_backend__ml_call_gen__Context_14);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_call_gen__Stmts_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_31));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_call_gen__AddrLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
              MR_Word ml_backend__ml_call_gen__ValueLval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
              MR_Word ml_backend__ml_call_gen__ValueType_35;
              MR_Word ml_backend__ml_call_gen___ValueVarName_34;

              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ValueLval_33)) == (MR_mktag((MR_Integer) 3)));
              if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen___ValueVarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 0)));
                  ml_backend__ml_call_gen__ValueType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 1)));
                  {
                    MR_Word ml_backend__ml_call_gen__Var_58;
                    MR_Word ml_backend__ml_call_gen__Var_59;
                    MR_Word ml_backend__ml_call_gen__Var_60;
                    MR_Word ml_backend__ml_call_gen__Stmt_66;

                    {
                      ml_backend__ml_call_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_call_gen__AddrLval_32));
                    }
                    {
                      ml_backend__ml_call_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_58, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_59));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_call_gen__ValueType_35));
                    }
                    {
                      ml_backend__ml_call_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_60, 0) = ((MR_Box) (ml_backend__ml_call_gen__ValueLval_33));
                    }
                    {
                      ml_backend__ml_call_gen__Stmt_66 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Var_58, ml_backend__ml_call_gen__Var_60, ml_backend__ml_call_gen__Context_14);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__Stmts_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_66));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed ref_assign");
                    return;
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            *ml_backend__ml_call_gen__Stmts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_call_gen__SimpleTest_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
              MR_Word ml_backend__ml_call_gen__TestRval_39;
              MR_Word ml_backend__ml_call_gen__Stmt_69;

              {
                ml_backend__ml_call_gen__TestRval_39 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleTest_38);
              }
              {
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__TestRval_39, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Stmt_69);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_call_gen__Stmts_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_69));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
                return;
              }
            }
            break;
        }
        break;
    }
    *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_call_gen__STATE_VARIABLE_Info_46 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
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
            ml_backend__ml_call_gen__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_5, 0) = ((MR_Box) (ml_backend__ml_call_gen__Int_4));
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
            ml_backend__ml_call_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_7, 0) = ((MR_Box) (ml_backend__ml_call_gen__UInt_6));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
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
              {
                ml_backend__ml_call_gen__Var_25 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__Expr_23);
              }
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

              {
                ml_backend__ml_call_gen__Var_29 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprA_27);
              }
              {
                ml_backend__ml_call_gen__Var_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprB_28);
              }
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

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_3(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_call_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv6_HeadVar__2_2;

    {
      ml_backend__ml_call_gen__conv6_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_call_gen__wrapper_arg_1));
    }
    ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv6_HeadVar__2_2));
    return ml_backend__ml_call_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54;
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55;
    MR_Word ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57;

    {
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__392__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54, &ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57);
    }
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55));
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
    MR_Word ml_backend__ml_call_gen__conv1_Stmts_22;
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42;

    {
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Stmts_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42);
    }
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Stmts_22));
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42));
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0(
  MR_Word ml_backend__ml_call_gen__PredId_13,
  MR_Integer ml_backend__ml_call_gen__ProcId_14,
  MR_Word ml_backend__ml_call_gen__ArgNames_15,
  MR_Word ml_backend__ml_call_gen__ArgLvals_16,
  MR_Word ml_backend__ml_call_gen__ActualArgTypes_17,
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
  MR_Word ml_backend__ml_call_gen__Context_19,
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_20,
  MR_Word * ml_backend__ml_call_gen__Decls_21,
  MR_Word * ml_backend__ml_call_gen__Stmts_22,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_49)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_24;
    MR_Word ml_backend__ml_call_gen__Params_25;
    MR_Word ml_backend__ml_call_gen__Signature_26;
    MR_Word ml_backend__ml_call_gen__FuncRval_27;
    MR_Word ml_backend__ml_call_gen__PredInfo_28;
    MR_Word ml_backend__ml_call_gen__ProcInfo_29;
    MR_Word ml_backend__ml_call_gen__PredOrFunc_30;
    MR_Word ml_backend__ml_call_gen__PredArgTypes_31;
    MR_Word ml_backend__ml_call_gen__ArgModes_32;
    MR_Word ml_backend__ml_call_gen__InputRvals_33;
    MR_Word ml_backend__ml_call_gen__OutputLvals_34;
    MR_Word ml_backend__ml_call_gen__OutputTypes_35;
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_36;
    MR_Word ml_backend__ml_call_gen__ConvOutputStmts_37;
    MR_Word ml_backend__ml_call_gen__ObjectRval_38;
    MR_Word ml_backend__ml_call_gen__Detism_39;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_80;
    MR_Word ml_backend__ml_call_gen__PredLabel_81;
    MR_Word ml_backend__ml_call_gen__PredModule_82;
    MR_Word ml_backend__ml_call_gen__Params_83;
    MR_Word ml_backend__ml_call_gen__Signature_84;
    MR_Word ml_backend__ml_call_gen__ProcLabel_85;
    MR_Word ml_backend__ml_call_gen__QualifiedProcLabel_86;
    MR_Word ml_backend__ml_call_gen__Var_89;
    MR_Word ml_backend__ml_call_gen__Var_90;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__ModuleInfo_24);
    }
    {
      ml_backend__ml_call_gen__Params_25 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14);
    }
    {
      ml_backend__ml_call_gen__Signature_26 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_25);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__ModuleInfo_80);
    }
    {
      ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(ml_backend__ml_call_gen__ModuleInfo_80, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__PredLabel_81, &ml_backend__ml_call_gen__PredModule_82);
    }
    {
      ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__Params_83, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50);
    }
    {
      ml_backend__ml_call_gen__Signature_84 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_83);
    }
    {
      ml_backend__ml_call_gen__ProcLabel_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_85, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredLabel_81));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_85, 1) = ((MR_Box) (ml_backend__ml_call_gen__ProcId_14));
    }
    {
      ml_backend__ml_call_gen__QualifiedProcLabel_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_86, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredModule_82));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_86, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_86, 2) = ((MR_Box) (ml_backend__ml_call_gen__ProcLabel_85));
    }
    {
      ml_backend__ml_call_gen__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Var_90, 0) = ((MR_Box) (ml_backend__ml_call_gen__QualifiedProcLabel_86));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Var_90, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_84));
    }
    {
      ml_backend__ml_call_gen__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_89, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_90));
    }
    {
      ml_backend__ml_call_gen__FuncRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_27, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_89));
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__ProcInfo_29);
    }
    {
      ml_backend__ml_call_gen__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_call_gen__PredInfo_28);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__PredArgTypes_31);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__ArgModes_32);
    }
    {
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_15, ml_backend__ml_call_gen__ArgLvals_16, ml_backend__ml_call_gen__ActualArgTypes_17, ml_backend__ml_call_gen__PredArgTypes_31, ml_backend__ml_call_gen__ArgModes_32, ml_backend__ml_call_gen__PredOrFunc_30, ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__ForClosureWrapper_20, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_33, &ml_backend__ml_call_gen__OutputLvals_34, &ml_backend__ml_call_gen__OutputTypes_35, &ml_backend__ml_call_gen__ConvArgDecls_36, &ml_backend__ml_call_gen__ConvOutputStmts_37, ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52);
    }
    ml_backend__ml_call_gen__ObjectRval_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__Detism_39);
    }
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStmts_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      {
        ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_26, ml_backend__ml_call_gen__ObjectRval_38, ml_backend__ml_call_gen__FuncRval_27, ml_backend__ml_call_gen__InputRvals_33, ml_backend__ml_call_gen__OutputLvals_34, ml_backend__ml_call_gen__OutputTypes_35, ml_backend__ml_call_gen__Detism_39, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__Decls_21, ml_backend__ml_call_gen__Stmts_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
      }
    else
      {
        MR_Word ml_backend__ml_call_gen__TypeCtorInfo_70_70;
        MR_Word ml_backend__ml_call_gen__DoGenCall_40;
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41;
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_46;
        MR_Word ml_backend__ml_call_gen__Var_59;

        {
          ml_backend__ml_call_gen__DoGenCall_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_26));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_38));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_27));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 6) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_33));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_34));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_35));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 9) = ((MR_Box) (ml_backend__ml_call_gen__Detism_39));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
        }
        {
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 3) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_18));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 4) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStmts_37));
        }
        {
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__DoGenCall_40, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, &ml_backend__ml_call_gen__CallAndConvOutputDecls_46, ml_backend__ml_call_gen__Stmts_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
        }
        ml_backend__ml_call_gen__TypeCtorInfo_70_70 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
        {
          ml_backend__ml_call_gen__Var_59 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_call_gen__TypeCtorInfo_70_70, (MR_Word) &ml_backend__ml_call_gen_scalar_common_3[3], ml_backend__ml_call_gen__ConvArgDecls_36);
        }
        {
          *ml_backend__ml_call_gen__Decls_21 = mercury__list__f_43_43_2_f_0(ml_backend__ml_call_gen__TypeCtorInfo_70_70, ml_backend__ml_call_gen__Var_59, ml_backend__ml_call_gen__CallAndConvOutputDecls_46);
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
  MR_Word ml_backend__ml_call_gen__Determinism_13,
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word * ml_backend__ml_call_gen__Decls_15,
  MR_Word * ml_backend__ml_call_gen__Stmts_16,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Stmts_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Stmts_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
        }
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__Stmts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_call_gen__ArgLvals_40;
          MR_Word ml_backend__ml_call_gen__ArgTypes_41;
          MR_Word ml_backend__ml_call_gen__SrcVar_42;
          MR_Word ml_backend__ml_call_gen__DestVar_43;
          MR_Word ml_backend__ml_call_gen__SrcLval_44;
          MR_Word ml_backend__ml_call_gen__DestLval_45;
          MR_Word ml_backend__ml_call_gen__SrcType_46;
          MR_Word ml_backend__ml_call_gen__DestType_47;
          MR_Word ml_backend__ml_call_gen__Var_53;
          MR_Word ml_backend__ml_call_gen__Var_54;
          MR_Word ml_backend__ml_call_gen__Var_55;
          MR_Word ml_backend__ml_call_gen__Var_56;
          MR_Word ml_backend__ml_call_gen__Var_57;
          MR_Word ml_backend__ml_call_gen__Var_58;

          {
            ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ArgLvals_40);
          }
          {
            ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ArgTypes_41);
          }
          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgVars_11)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__ml_call_gen__succeeded)
            {
              ml_backend__ml_call_gen__SrcVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_11, (MR_Integer) 0)));
              ml_backend__ml_call_gen__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_11, (MR_Integer) 1)));
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_53)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_call_gen__DestVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_53, (MR_Integer) 0)));
                  ml_backend__ml_call_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_53, (MR_Integer) 1)));
                  ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ml_backend__ml_call_gen__succeeded)
                    {
                      ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLvals_40)) == (MR_mktag((MR_Integer) 1)));
                      if (ml_backend__ml_call_gen__succeeded)
                        {
                          ml_backend__ml_call_gen__SrcLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_40, (MR_Integer) 0)));
                          ml_backend__ml_call_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_40, (MR_Integer) 1)));
                          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_55)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_call_gen__succeeded)
                            {
                              ml_backend__ml_call_gen__DestLval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_55, (MR_Integer) 0)));
                              ml_backend__ml_call_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_55, (MR_Integer) 1)));
                              ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (ml_backend__ml_call_gen__succeeded)
                                {
                                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgTypes_41)) == (MR_mktag((MR_Integer) 1)));
                                  if (ml_backend__ml_call_gen__succeeded)
                                    {
                                      ml_backend__ml_call_gen__SrcType_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_41, (MR_Integer) 0)));
                                      ml_backend__ml_call_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_41, (MR_Integer) 1)));
                                      ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Var_57)) == (MR_mktag((MR_Integer) 1)));
                                      if (ml_backend__ml_call_gen__succeeded)
                                        {
                                          ml_backend__ml_call_gen__DestType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_57, (MR_Integer) 0)));
                                          ml_backend__ml_call_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_57, (MR_Integer) 1)));
                                          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_Word ml_backend__ml_call_gen__ModuleInfo_48;
              MR_Word ml_backend__ml_call_gen__IsDummy_49;
              MR_Word ml_backend__ml_call_gen__GroundTerm_52;

              {
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, &ml_backend__ml_call_gen__ModuleInfo_48);
              }
              {
                ml_backend__ml_call_gen__IsDummy_49 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_48, ml_backend__ml_call_gen__DestType_47);
              }
              switch (ml_backend__ml_call_gen__IsDummy_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ml_backend__ml_call_gen__Stmts_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_call_gen__CastRval_50;
                    MR_Word ml_backend__ml_call_gen__Assign_51;
                    MR_Word ml_backend__ml_call_gen__Var_60;

                    {
                      ml_backend__ml_call_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_60, 0) = ((MR_Box) (ml_backend__ml_call_gen__SrcLval_44));
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_48, ml_backend__ml_call_gen__SrcType_46, ml_backend__ml_call_gen__DestType_47, (MR_Integer) 0, ml_backend__ml_call_gen__Var_60, &ml_backend__ml_call_gen__CastRval_50);
                    }
                    {
                      ml_backend__ml_call_gen__Assign_51 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__DestLval_45, ml_backend__ml_call_gen__CastRval_50, ml_backend__ml_call_gen__Context_14);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_call_gen__Stmts_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Assign_51));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ml_backend__ml_call_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__SrcVar_42, &ml_backend__ml_call_gen__GroundTerm_52);
              }
              if (ml_backend__ml_call_gen__succeeded)
                {
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_call_gen__DestVar_43, ml_backend__ml_call_gen__GroundTerm_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
                }
              else
                *ml_backend__ml_call_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28;
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/6", (MR_String) "wrong number of args for cast");
                return;
              }
            }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_3(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_call_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv6_HeadVar__2_2;

    {
      ml_backend__ml_call_gen__conv6_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_call_gen__wrapper_arg_1));
    }
    ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv6_HeadVar__2_2));
    return ml_backend__ml_call_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_119;
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_120;
    MR_Word ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_122;

    {
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__245__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_119, &ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_120, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_122);
    }
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_119));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_120));
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_122));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
    MR_Word ml_backend__ml_call_gen__conv1_Stmts_22;
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42;

    {
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Stmts_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42);
    }
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Stmts_22));
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_42));
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
  MR_Word ml_backend__ml_call_gen__Determinism_13,
  MR_Word ml_backend__ml_call_gen__Context_14,
  MR_Word * ml_backend__ml_call_gen__Decls_15,
  MR_Word * ml_backend__ml_call_gen__Stmts_16,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Integer ml_backend__ml_call_gen__NumArgs_18;
    MR_Word ml_backend__ml_call_gen__BoxedArgTypes_19;
    MR_Word ml_backend__ml_call_gen__ModuleInfo_20;
    MR_Word ml_backend__ml_call_gen__VarSet_21;
    MR_Word ml_backend__ml_call_gen__ArgNames_22;
    MR_Word ml_backend__ml_call_gen__PredOrFunc_23;
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
    MR_Word ml_backend__ml_call_gen__Params0_25;
    MR_Word ml_backend__ml_call_gen__ClosureArgType_27;
    MR_Word ml_backend__ml_call_gen__ArgParams0_29;
    MR_Word ml_backend__ml_call_gen__RetParam_30;
    MR_Word ml_backend__ml_call_gen__Params_31;
    MR_Word ml_backend__ml_call_gen__Signature_32;
    MR_Word ml_backend__ml_call_gen__ClosureLval_37;
    MR_Word ml_backend__ml_call_gen__FuncType_40;
    MR_Word ml_backend__ml_call_gen__FuncRval_41;
    MR_Word ml_backend__ml_call_gen__ConvVarSeq_52;
    MR_Integer ml_backend__ml_call_gen__ConvVarNum_53;
    MR_Word ml_backend__ml_call_gen__FuncVarName_54;
    MR_Word ml_backend__ml_call_gen__FuncVarDecl_55;
    MR_Word ml_backend__ml_call_gen__FuncVarLval_56;
    MR_Word ml_backend__ml_call_gen__AssignFuncVar_57;
    MR_Word ml_backend__ml_call_gen__FuncVarRval_58;
    MR_Word ml_backend__ml_call_gen__ArgLvals_59;
    MR_Word ml_backend__ml_call_gen__ActualArgTypes_60;
    MR_Word ml_backend__ml_call_gen__InputRvals_61;
    MR_Word ml_backend__ml_call_gen__OutputLvals_62;
    MR_Word ml_backend__ml_call_gen__OutputTypes_63;
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_64;
    MR_Word ml_backend__ml_call_gen__ConvOutputStmts_65;
    MR_Word ml_backend__ml_call_gen__ClosureRval_66;
    MR_Word ml_backend__ml_call_gen__ObjectRval_67;
    MR_Word ml_backend__ml_call_gen__Decls0_68;
    MR_Word ml_backend__ml_call_gen__Stmts0_69;
    MR_Word ml_backend__ml_call_gen__Var_82;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108;
    MR_Word ml_backend__ml_call_gen__Var_109;
    MR_Word ml_backend__ml_call_gen__Var_110;
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_113_113;
    MR_Word ml_backend__ml_call_gen__Var_115;
    MR_Word ml_backend__ml_call_gen__Var_126;

    {
      ml_backend__ml_call_gen__NumArgs_18 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ml_backend__ml_call_gen__ArgVars_11);
    }
    {
      ml_backend__ml_call_gen__BoxedArgTypes_19 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_call_gen__NumArgs_18);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__ModuleInfo_20);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__VarSet_21);
    }
    {
      ml_backend__ml_call_gen__ArgNames_22 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_call_gen__VarSet_21, ml_backend__ml_call_gen__ArgVars_11);
    }
    {
      ml_backend__ml_call_gen__PredOrFunc_23 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(ml_backend__ml_call_gen__GenericCall_10);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Determinism_13, &ml_backend__ml_call_gen__CodeModel_24);
    }
    {
      ml_backend__ml_call_gen__Params0_25 = ml_backend__ml_code_util__ml_gen_params_6_f_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24);
    }
    ml_backend__ml_call_gen__ClosureArgType_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ml_backend__ml_call_gen__ArgParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 0)));
    ml_backend__ml_call_gen__RetParam_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 1)));
    {
      ml_backend__ml_call_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_82, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[1]));
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_82, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgParams0_29));
    }
    {
      ml_backend__ml_call_gen__Params_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_82));
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 1) = ((MR_Box) (ml_backend__ml_call_gen__RetParam_30));
    }
    {
      ml_backend__ml_call_gen__Signature_32 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_31);
    }
    if (((MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_call_gen__TypeClassInfoVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
        MR_Integer ml_backend__ml_call_gen__MethodNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
        MR_Word ml_backend__ml_call_gen__BaseTypeclassInfoLval_48;
        MR_Integer ml_backend__ml_call_gen__Offset_49;
        MR_Integer ml_backend__ml_call_gen__MethodFieldNum_50;
        MR_Word ml_backend__ml_call_gen__MethodFieldId_51;
        MR_Word ml_backend__ml_call_gen__Var_86;
        MR_Word ml_backend__ml_call_gen__Var_88;
        MR_Word ml_backend__ml_call_gen__Var_90;
        MR_Word ml_backend__ml_call_gen__Var_91;
        MR_Word ml_backend__ml_call_gen__Var_94;
        MR_Word ml_backend__ml_call_gen__Var_97;
        MR_Word ml_backend__ml_call_gen__Var_98;
        MR_Word ml_backend__ml_call_gen__FuncLval_127;
        MR_Word ml_backend__ml_call_gen___ClassId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
        MR_Word ml_backend__ml_call_gen___PredName_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

        {
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__TypeClassInfoVar_42, &ml_backend__ml_call_gen__ClosureLval_37);
        }
        ml_backend__ml_call_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_4[0]);
        {
          ml_backend__ml_call_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_88, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
        }
        {
          ml_backend__ml_call_gen__BaseTypeclassInfoLval_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_86));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_88));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
        }
        {
          ml_backend__ml_call_gen__Offset_49 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
        }
        ml_backend__ml_call_gen__MethodFieldNum_50 = (ml_backend__ml_call_gen__MethodNum_43 + ml_backend__ml_call_gen__Offset_49);
        {
          ml_backend__ml_call_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_91, 0) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldNum_50));
        }
        {
          ml_backend__ml_call_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_90, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_91));
        }
        {
          ml_backend__ml_call_gen__MethodFieldId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__MethodFieldId_51, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_90));
        }
        {
          ml_backend__ml_call_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_94, 0) = ((MR_Box) (ml_backend__ml_call_gen__BaseTypeclassInfoLval_48));
        }
        {
          ml_backend__ml_call_gen__FuncLval_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_127, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_86));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_127, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_94));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_127, 2) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldId_51));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_127, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_127, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        }
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
        {
          ml_backend__ml_call_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_97, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
        }
        {
          ml_backend__ml_call_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_98, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_127));
        }
        {
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_97));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_98));
        }
      }
    else
      {
        MR_Word ml_backend__ml_call_gen__ClosureVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
        MR_Word ml_backend__ml_call_gen__FuncLval_39;
        MR_Word ml_backend__ml_call_gen__Var_104;
        MR_Word ml_backend__ml_call_gen__Var_106;
        MR_Word ml_backend__ml_call_gen__Var_107;
        MR_Word ml_backend__ml_call_gen___Purity_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
        MR_Word ml_backend__ml_call_gen___PredOrFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_call_gen___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

        {
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__ClosureVar_33, &ml_backend__ml_call_gen__ClosureLval_37);
        }
        {
          ml_backend__ml_call_gen__Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_104, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
        }
        {
          ml_backend__ml_call_gen__FuncLval_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_4[0])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_104));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
        }
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
        {
          ml_backend__ml_call_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_106, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
        }
        {
          ml_backend__ml_call_gen__Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_107, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_39));
        }
        {
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_106));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_107));
        }
      }
    {
      ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_call_gen__ConvVarSeq_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108);
    }
    ml_backend__ml_call_gen__ConvVarNum_53 = (MR_Integer) ml_backend__ml_call_gen__ConvVarSeq_52;
    {
      ml_backend__ml_call_gen__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_109, 1) = ((MR_Box) (ml_backend__ml_call_gen__ConvVarNum_53));
    }
    {
      ml_backend__ml_call_gen__FuncVarName_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncVarName_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncVarName_54, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_109));
    }
    {
      ml_backend__ml_call_gen__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Var_110, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarName_54));
    }
    {
      ml_backend__ml_call_gen__FuncVarDecl_55 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_call_gen__Var_110, ml_backend__ml_call_gen__FuncType_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__Context_14);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108, ml_backend__ml_call_gen__FuncVarName_54, ml_backend__ml_call_gen__FuncType_40, &ml_backend__ml_call_gen__FuncVarLval_56);
    }
    {
      ml_backend__ml_call_gen__AssignFuncVar_57 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__FuncVarLval_56, ml_backend__ml_call_gen__FuncRval_41, ml_backend__ml_call_gen__Context_14);
    }
    {
      ml_backend__ml_call_gen__FuncVarRval_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__FuncVarRval_58, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarLval_56));
    }
    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ArgLvals_59);
    }
    {
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ActualArgTypes_60);
    }
    {
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__ArgLvals_59, ml_backend__ml_call_gen__ActualArgTypes_60, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, (MR_Integer) 0, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_61, &ml_backend__ml_call_gen__OutputLvals_62, &ml_backend__ml_call_gen__OutputTypes_63, &ml_backend__ml_call_gen__ConvArgDecls_64, &ml_backend__ml_call_gen__ConvOutputStmts_65, ml_backend__ml_call_gen__STATE_VARIABLE_Info_108_108, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_113_113);
    }
    {
      ml_backend__ml_call_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_115, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
    }
    {
      ml_backend__ml_call_gen__ClosureRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_4[4])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 2) = ((MR_Box) (ml_backend__ml_call_gen__Var_115));
    }
    ml_backend__ml_call_gen__ObjectRval_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStmts_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_call_gen__succeeded)
      {
        MR_Word ml_backend__ml_call_gen__Var_116;

        {
          ml_backend__ml_call_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_116, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_116, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
        }
        {
          ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_32, ml_backend__ml_call_gen__ObjectRval_67, ml_backend__ml_call_gen__FuncVarRval_58, ml_backend__ml_call_gen__Var_116, ml_backend__ml_call_gen__OutputLvals_62, ml_backend__ml_call_gen__OutputTypes_63, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Decls0_68, &ml_backend__ml_call_gen__Stmts0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_113_113, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
      }
    else
      {
        MR_Word ml_backend__ml_call_gen__TypeCtorInfo_138_138;
        MR_Word ml_backend__ml_call_gen__DoGenCall_70;
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71;
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_76;
        MR_Word ml_backend__ml_call_gen__Var_118;
        MR_Word ml_backend__ml_call_gen__Var_124;

        {
          ml_backend__ml_call_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_118, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_118, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
        }
        {
          ml_backend__ml_call_gen__DoGenCall_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_32));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_67));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarRval_58));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 6) = ((MR_Box) (ml_backend__ml_call_gen__Var_118));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_62));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_63));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 9) = ((MR_Box) (ml_backend__ml_call_gen__Determinism_13));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
        }
        {
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 3) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 4) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_24));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStmts_65));
        }
        {
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__DoGenCall_70, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, &ml_backend__ml_call_gen__CallAndConvOutputDecls_76, &ml_backend__ml_call_gen__Stmts0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_113_113, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
        ml_backend__ml_call_gen__TypeCtorInfo_138_138 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
        {
          ml_backend__ml_call_gen__Var_124 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_call_gen__TypeCtorInfo_138_138, (MR_Word) &ml_backend__ml_call_gen_scalar_common_3[2], ml_backend__ml_call_gen__ConvArgDecls_64);
        }
        {
          ml_backend__ml_call_gen__Decls0_68 = mercury__list__f_43_43_2_f_0(ml_backend__ml_call_gen__TypeCtorInfo_138_138, ml_backend__ml_call_gen__Var_124, ml_backend__ml_call_gen__CallAndConvOutputDecls_76);
        }
      }
    ml_backend__ml_call_gen__Var_126 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_call_gen__FuncVarDecl_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__Decls_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_126));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Decls0_68));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__Stmts_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__AssignFuncVar_57));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Stmts0_69));
    }
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
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
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63)
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
        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62;
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
            MR_Word ml_backend__ml_call_gen__ModuleInfo_44;
            MR_Word ml_backend__ml_call_gen__ArgTopFunctorMode_45;
            MR_Word ml_backend__ml_call_gen__CalleeIsDummy_46;
            MR_Integer ml_backend__ml_call_gen__Var_69 = (ml_backend__ml_call_gen__ArgNum_27 + (MR_Integer) 1);
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74;
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;

            {
              ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__VarNamesTail_35, ml_backend__ml_call_gen__VarLvalsTail_37, ml_backend__ml_call_gen__CallerTypesTail_39, ml_backend__ml_call_gen__CalleeTypesTail_41, ml_backend__ml_call_gen__ModesTail_43, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__Var_69, &ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75);
            }
            {
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, &ml_backend__ml_call_gen__ModuleInfo_44);
            }
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__Mode_42, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__ArgTopFunctorMode_45);
            }
            {
              ml_backend__ml_call_gen__CalleeIsDummy_46 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CalleeType_40);
            }
            switch (ml_backend__ml_call_gen__CalleeIsDummy_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74;
                  *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
                }
                break;
              case (MR_Integer) 1:
                switch (ml_backend__ml_call_gen__ArgTopFunctorMode_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_call_gen__CallerIsDummy_47;
                      MR_Word ml_backend__ml_call_gen__VarRval_48;
                      MR_Word ml_backend__ml_call_gen__ArgRval_49;

                      {
                        ml_backend__ml_call_gen__CallerIsDummy_47 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38);
                      }
                      switch (ml_backend__ml_call_gen__CallerIsDummy_47) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[3]);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarRval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__VarLval_36));
                          }
                          break;
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarRval_48, &ml_backend__ml_call_gen__ArgRval_49);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgRval_49));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
                      }
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_call_gen__ArgLval_50;
                      MR_Word ml_backend__ml_call_gen__ThisArgConvDecls_51;
                      MR_Word ml_backend__ml_call_gen__ThisArgConvOutput_53;
                      MR_Word ml_backend__ml_call_gen__Globals_54;
                      MR_Word ml_backend__ml_call_gen__CopyOut_55;
                      MR_Word ml_backend__ml_call_gen___ThisArgConvInput_52;

                      {
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarLval_36, ml_backend__ml_call_gen__VarName_34, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__ArgNum_27, &ml_backend__ml_call_gen__ArgLval_50, &ml_backend__ml_call_gen__ThisArgConvDecls_51, &ml_backend__ml_call_gen___ThisArgConvInput_52, &ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);
                      }
                      {
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_call_gen__ThisArgConvDecls_51, ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73);
                      }
                      {
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, &ml_backend__ml_call_gen__Globals_54);
                      }
                      {
                        ml_backend__ml_call_gen__CopyOut_55 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_call_gen__Globals_54, ml_backend__ml_call_gen__CodeModel_24);
                      }
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CopyOut_55 == (MR_Integer) 1);
                      if (!(ml_backend__ml_call_gen__succeeded))
                        {
                          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNamesTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (ml_backend__ml_call_gen__succeeded)
                            {
                              ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CodeModel_24 == (MR_Integer) 0);
                              if (ml_backend__ml_call_gen__succeeded)
                                ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__PredOrFunc_23 == (MR_Integer) 1);
                            }
                        }
                      if (ml_backend__ml_call_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_call_gen__OutputType_56;

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71));
                          }
                          {
                            ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__OutputType_56);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__OutputType_56));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72));
                          }
                          *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
                        }
                      else
                        {
                          MR_Word ml_backend__ml_call_gen__Var_84;
                          MR_Word ml_backend__ml_call_gen__Rval_94;
                          MR_Word ml_backend__ml_call_gen__Var_95;

                          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLval_50)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_call_gen__succeeded)
                            {
                              ml_backend__ml_call_gen__Rval_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 0)));
                              ml_backend__ml_call_gen__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 1)));
                              ml_backend__ml_call_gen__Var_84 = ml_backend__ml_call_gen__Rval_94;
                            }
                          else
                            {
                              ml_backend__ml_call_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
                            }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Var_84));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
                          }
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStmts_74_74;
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
                    }
                    break;
                }
                break;
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_arg_list\'/17", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0_1(
  MR_Box ml_backend__ml_call_gen__closure_arg,
  MR_Box ml_backend__ml_call_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_call_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
    MR_Word ml_backend__ml_call_gen__conv0_HeadVar__2_2;

    {
      ml_backend__ml_call_gen__conv0_HeadVar__2_2 = ml_backend__mlds__wrap_function_defn_1_f_0(((MR_Word) ml_backend__ml_call_gen__wrapper_arg_1));
    }
    ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv0_HeadVar__2_2));
    return ml_backend__ml_call_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
  MR_Word ml_backend__ml_call_gen__Signature_13,
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
  MR_Word ml_backend__ml_call_gen__Detism_19,
  MR_Word ml_backend__ml_call_gen__Context_20,
  MR_Word * ml_backend__ml_call_gen__Decls_21,
  MR_Word * ml_backend__ml_call_gen__Stmts_22,
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_42)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
    MR_Word ml_backend__ml_call_gen__ArgRvals_32;
    MR_Word ml_backend__ml_call_gen__RetLvals_35;
    MR_Word ml_backend__ml_call_gen__CallKind_37;
    MR_Word ml_backend__ml_call_gen__Warnings_38;
    MR_Word ml_backend__ml_call_gen__Markers_39;
    MR_Word ml_backend__ml_call_gen__Stmt_40;

    {
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Detism_19, &ml_backend__ml_call_gen__CodeModel_24);
    }
    switch (ml_backend__ml_call_gen__CodeModel_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
          ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_42 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_call_gen__Cont_25;
          MR_Word ml_backend__ml_call_gen__ContDecls_26;
          MR_Word ml_backend__ml_call_gen__FuncPtrRval_27;
          MR_Word ml_backend__ml_call_gen__EnvPtrRval_28;
          MR_Word ml_backend__ml_call_gen__UseNestedFuncs_31;
          MR_Word ml_backend__ml_call_gen__Globals_33;
          MR_Word ml_backend__ml_call_gen__NondetCopyOut_34;
          MR_Word ml_backend__ml_call_gen__Var_29;
          MR_Word ml_backend__ml_call_gen__Var_30;

          {
            ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(ml_backend__ml_call_gen__RetTypes0_18, ml_backend__ml_call_gen__RetLvals0_17, ml_backend__ml_call_gen__Context_20, &ml_backend__ml_call_gen__Cont_25, &ml_backend__ml_call_gen__ContDecls_26, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41, ml_backend__ml_call_gen__STATE_VARIABLE_Info_42);
          }
          ml_backend__ml_call_gen__FuncPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 0)));
          ml_backend__ml_call_gen__EnvPtrRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 1)));
          ml_backend__ml_call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 2)));
          ml_backend__ml_call_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 3)));
          {
            ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_call_gen__UseNestedFuncs_31);
          }
          switch (ml_backend__ml_call_gen__UseNestedFuncs_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_call_gen__Var_46;
                MR_Word ml_backend__ml_call_gen__Var_47;

                {
                  ml_backend__ml_call_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_28));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_call_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_46, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_47));
                }
                {
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__Var_46);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_call_gen__Var_49;

                {
                  ml_backend__ml_call_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_49, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__Var_49);
                }
              }
              break;
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_call_gen__Globals_33);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_call_gen__Globals_33, (MR_Integer) 267, &ml_backend__ml_call_gen__NondetCopyOut_34);
          }
          switch (ml_backend__ml_call_gen__NondetCopyOut_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
              break;
            case (MR_Integer) 1:
              ml_backend__ml_call_gen__RetLvals_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          {
            *ml_backend__ml_call_gen__Decls_21 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_call_gen_scalar_common_3[0], ml_backend__ml_call_gen__ContDecls_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_call_gen__Success_36;
          MR_Word ml_backend__ml_call_gen__Var_43;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41, &ml_backend__ml_call_gen__Success_36);
          }
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
          {
            ml_backend__ml_call_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_43, 0) = ((MR_Box) (ml_backend__ml_call_gen__Success_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_call_gen__RetLvals_35 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__Var_43, ml_backend__ml_call_gen__RetLvals0_17);
          }
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_42 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_41;
        }
        break;
    }
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Detism_19 == (MR_Integer) 6);
    if (ml_backend__ml_call_gen__succeeded)
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 0;
    else
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 2;
    {
      ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_call_gen__Warnings_38);
    }
    {
      ml_backend__ml_call_gen__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ml_backend__ml_call_gen__Warnings_38, ((MR_Box) ((MR_Integer) 1)));
    }
    if (ml_backend__ml_call_gen__succeeded)
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          ml_backend__ml_call_gen__Markers_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, ((MR_Box) ((MR_Integer) 0)));
        }
      }
    else
      {
        {
          mercury__set__init_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0, &ml_backend__ml_call_gen__Markers_39);
        }
      }
    {
      ml_backend__ml_call_gen__Stmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 2) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_15));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 3) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 4) = ((MR_Box) (ml_backend__ml_call_gen__ArgRvals_32));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 5) = ((MR_Box) (ml_backend__ml_call_gen__RetLvals_35));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 6) = ((MR_Box) (ml_backend__ml_call_gen__CallKind_37));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 7) = ((MR_Box) (ml_backend__ml_call_gen__Markers_39));
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_40, 8) = ((MR_Box) (ml_backend__ml_call_gen__Context_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_call_gen__Stmts_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_40));
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
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30)
{
  {
    MR_bool ml_backend__ml_call_gen__succeeded;
    MR_Word ml_backend__ml_call_gen__CurrentCont_14;
    MR_Word ml_backend__ml_call_gen__CurrentContArgTypes_17;
    MR_Word ml_backend__ml_call_gen__CurrentContArgLvals_18;
    MR_Word ml_backend__ml_call_gen___FuncPtrRval_15;
    MR_Word ml_backend__ml_call_gen___EnvPtrRval_16;
    MR_Word ml_backend__ml_call_gen__TypeInfo_41_41;

    {
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__CurrentCont_14);
    }
    ml_backend__ml_call_gen___FuncPtrRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 0)));
    ml_backend__ml_call_gen___EnvPtrRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 1)));
    ml_backend__ml_call_gen__CurrentContArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 2)));
    ml_backend__ml_call_gen__CurrentContArgLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 3)));
    {
      ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[1], ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgTypes_17)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8)));
    }
    if (ml_backend__ml_call_gen__succeeded)
      {
        ml_backend__ml_call_gen__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2];
        {
          ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_call_gen__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgLvals_18)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9)));
        }
      }
    if (ml_backend__ml_call_gen__succeeded)
      {
        *ml_backend__ml_call_gen__Cont_11 = ml_backend__ml_call_gen__CurrentCont_14;
        *ml_backend__ml_call_gen__ContDecls_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_30 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29;
      }
    else
      {
        MR_Word ml_backend__ml_call_gen__Params_19;
        MR_Integer ml_backend__ml_call_gen__ContFuncLabel_20;
        MR_Word ml_backend__ml_call_gen__ContFuncLabelRval_21;
        MR_Word ml_backend__ml_call_gen__CopyStmts_23;
        MR_Word ml_backend__ml_call_gen__CallCont_24;
        MR_Word ml_backend__ml_call_gen__CopyStmt_25;
        MR_Word ml_backend__ml_call_gen__ContFuncDefn_26;
        MR_Word ml_backend__ml_call_gen__EnvPtrRval_27;
        MR_Word ml_backend__ml_call_gen__Var_32;
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33;
        MR_Word ml_backend__ml_call_gen__Var_35;
        MR_Word ml_backend__ml_call_gen__Var_36;
        MR_Word ml_backend__ml_call_gen__Args0_47;
        MR_Word ml_backend__ml_call_gen__UseNestedFuncs_48;
        MR_Word ml_backend__ml_call_gen__Args_49;

        {
          ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, &ml_backend__ml_call_gen__Args0_47);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__UseNestedFuncs_48);
        }
        switch (ml_backend__ml_call_gen__UseNestedFuncs_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_call_gen__EnvPtrArg_50;
              MR_Word ml_backend__ml_call_gen__Var_52;

              {
                ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&ml_backend__ml_call_gen__EnvPtrArg_50);
              }
              {
                ml_backend__ml_call_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_52, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrArg_50));
                MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__ml_call_gen__Args_49 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_call_gen__Args0_47, ml_backend__ml_call_gen__Var_52);
              }
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_call_gen__Args_49 = ml_backend__ml_call_gen__Args0_47;
            break;
        }
        {
          ml_backend__ml_call_gen__Params_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_19, 0) = ((MR_Box) (ml_backend__ml_call_gen__Args_49));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_call_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_32, 0) = ((MR_Box) (ml_backend__ml_call_gen__Params_19));
        }
        {
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_call_gen__Var_32, &ml_backend__ml_call_gen__ContFuncLabel_20, &ml_backend__ml_call_gen__ContFuncLabelRval_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33);
        }
        {
          ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__OutputArgLvals_9, ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CopyStmts_23);
        }
        {
          ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CallCont_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);
        }
        {
          ml_backend__ml_call_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_call_gen__CallCont_24));
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_call_gen__Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_call_gen__CopyStmts_23, ml_backend__ml_call_gen__Var_36);
        }
        {
          ml_backend__ml_call_gen__CopyStmt_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__Var_35, ml_backend__ml_call_gen__Context_10);
        }
        {
          ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, ml_backend__ml_call_gen__ContFuncLabel_20, ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__Context_10, ml_backend__ml_call_gen__CopyStmt_25, &ml_backend__ml_call_gen__ContFuncDefn_26);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_call_gen__ContDecls_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncDefn_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, &ml_backend__ml_call_gen__EnvPtrRval_27);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_call_gen__Cont_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncLabelRval_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_27));
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
  {
    MR_bool ml_backend__ml_call_gen__succeeded;

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
            MR_Word ml_backend__ml_call_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ml_backend__ml_call_gen__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ml_backend__ml_call_gen__Stmt_17;
            MR_Word ml_backend__ml_call_gen__Stmts_18;
            MR_Word ml_backend__ml_call_gen__ArgName_19;
            MR_Word ml_backend__ml_call_gen__ArgLval_20;
            MR_Word ml_backend__ml_call_gen__Var_21;
            MR_Word ml_backend__ml_call_gen__Var_22;
            MR_Integer ml_backend__ml_call_gen__Var_23;

            {
              ml_backend__ml_call_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Var_21, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgNum_4));
            }
            {
              ml_backend__ml_call_gen__ArgName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_19, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_21));
            }
            {
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__ArgName_19, ml_backend__ml_call_gen__Type_13, &ml_backend__ml_call_gen__ArgLval_20);
            }
            {
              ml_backend__ml_call_gen__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__Var_22, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_20));
            }
            {
              ml_backend__ml_call_gen__Stmt_17 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Var_42, ml_backend__ml_call_gen__Var_22, ml_backend__ml_call_gen__Context_5);
            }
            ml_backend__ml_call_gen__Var_23 = (ml_backend__ml_call_gen__ArgNum_4 + (MR_Integer) 1);
            {
              ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_loop_6_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__Var_41, ml_backend__ml_call_gen__Types_14, ml_backend__ml_call_gen__Var_23, ml_backend__ml_call_gen__Context_5, &ml_backend__ml_call_gen__Stmts_18);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_call_gen__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Stmts_18));
            }
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
  {
    MR_bool ml_backend__ml_call_gen__succeeded;

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
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ArgName_10, 1) = ((MR_Box) (ml_backend__ml_call_gen__Var_12));
        }
        {
          ml_backend__ml_call_gen__Argument_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_10));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 1) = ((MR_Box) (ml_backend__ml_call_gen__Type_5));
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ml_backend__ml_call_gen__Var_13 = (ml_backend__ml_call_gen__ArgNum_2 + (MR_Integer) 1);
        {
          ml_backend__ml_call_gen__ml_gen_cont_params_loop_3_p_0(ml_backend__ml_call_gen__Types_6, ml_backend__ml_call_gen__Var_13, &ml_backend__ml_call_gen__Arguments_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_call_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Argument_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Arguments_9));
        }
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
