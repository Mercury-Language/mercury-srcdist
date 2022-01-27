/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




#line 157 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 160 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 163 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0;

#line 166 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 169 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 172 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 266 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__266__1_7_p_0(
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_128,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_129,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_130,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_131);

#line 399 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__399__1_7_p_0(
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_54,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_55,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_56,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_57);

#line 795 "ml_call_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
#line 795 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1);

#line 608 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarNames_18,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Modes_22,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_25,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
#line 608 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);

#line 574 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
#line 574 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_5,
#line 574 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6);

#line 549 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(
#line 549 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 549 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
#line 549 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3);

#line 487 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_10,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Cont_11,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);

#line 421 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Signature_13,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Detism_19,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_20,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);

#line 266 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
#line 266 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 266 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
#line 260 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 260 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

#line 143 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);

#line 399 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
#line 399 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 399 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

#line 394 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
#line 394 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 394 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);


static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[6][2];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[7][1];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[1][15];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[2][10];

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[1][3];




static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "closure_arg")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_2[1])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_call_gen_scalar_common_2[3])))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_2[7][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_1[1])))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[5])))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_3[1][15] = {
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
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_4[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_call_gen_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 551 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 559 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 567 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

#line 575 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 583 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 591 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 266 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__266__1_7_p_0(
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_128,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_129,
#line 266 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_130,
#line 266 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_131)
#line 266 "ml_call_gen.m"
{
#line 266 "ml_call_gen.m"
  {
#line 266 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 266 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SucceedStmts_75;

#line 269 "ml_call_gen.m"
    *ml_backend__ml_call_gen__LambdaHeadVar__1_128 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "ml_call_gen.m"
    {
#line 270 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__SucceedStmts_75, ml_backend__ml_call_gen__LambdaHeadVar__3_130, ml_backend__ml_call_gen__LambdaHeadVar__4_131);
    }
#line 271 "ml_call_gen.m"
    {
#line 271 "ml_call_gen.m"
      *ml_backend__ml_call_gen__LambdaHeadVar__2_129 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ConvOutputStatements_65, ml_backend__ml_call_gen__SucceedStmts_75);
    }
#line 266 "ml_call_gen.m"
  }
#line 266 "ml_call_gen.m"
}

#line 399 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__399__1_7_p_0(
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__1_54,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__2_55,
#line 399 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__LambdaHeadVar__3_56,
#line 399 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__LambdaHeadVar__4_57)
#line 399 "ml_call_gen.m"
{
#line 399 "ml_call_gen.m"
  {
#line 399 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 399 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SucceedStmts_45;

#line 402 "ml_call_gen.m"
    *ml_backend__ml_call_gen__LambdaHeadVar__1_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "ml_call_gen.m"
    {
#line 403 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, &ml_backend__ml_call_gen__SucceedStmts_45, ml_backend__ml_call_gen__LambdaHeadVar__3_56, ml_backend__ml_call_gen__LambdaHeadVar__4_57);
    }
#line 404 "ml_call_gen.m"
    {
#line 404 "ml_call_gen.m"
      *ml_backend__ml_call_gen__LambdaHeadVar__2_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ConvOutputStatements_37, ml_backend__ml_call_gen__SucceedStmts_45);
    }
#line 399 "ml_call_gen.m"
  }
#line 399 "ml_call_gen.m"
}

#line 795 "ml_call_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
#line 795 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1)
#line 795 "ml_call_gen.m"
{
#line 797 "ml_call_gen.m"
  {
#line 797 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 797 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__HeadVar__2_2;

#line 797 "ml_call_gen.m"
#line 797 "ml_call_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__HeadVar__1_1)) {
#line 797 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 797 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 797 "ml_call_gen.m"
        {
#line 797 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 797 "ml_call_gen.m"
          {
#line 797 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_call_gen__Lval_3));
#line 797 "ml_call_gen.m"
          }
#line 797 "ml_call_gen.m"
        }
#line 797 "ml_call_gen.m"
        break;
#line 797 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 798 "ml_call_gen.m"
        {
#line 798 "ml_call_gen.m"
          MR_Integer ml_backend__ml_call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 798 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_5_5;

#line 798 "ml_call_gen.m"
          {
#line 798 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "ml_call_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__V_5_5, 0) = ((MR_Box) (ml_backend__ml_call_gen__Int_4));
#line 798 "ml_call_gen.m"
          }
#line 798 "ml_call_gen.m"
          {
#line 798 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 798 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_5_5));
#line 798 "ml_call_gen.m"
          }
#line 798 "ml_call_gen.m"
        }
#line 797 "ml_call_gen.m"
        break;
#line 797 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 799 "ml_call_gen.m"
        {
#line 799 "ml_call_gen.m"
          MR_Float ml_backend__ml_call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 799 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_7_7;

#line 799 "ml_call_gen.m"
          {
#line 799 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 799 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_7_7, 1) = MR_box_float(ml_backend__ml_call_gen__Float_6);
#line 799 "ml_call_gen.m"
          }
#line 799 "ml_call_gen.m"
          {
#line 799 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 799 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_7_7));
#line 799 "ml_call_gen.m"
          }
#line 799 "ml_call_gen.m"
        }
#line 797 "ml_call_gen.m"
        break;
#line 797 "ml_call_gen.m"
      case (MR_Integer) 3:
#line 797 "ml_call_gen.m"
#line 797 "ml_call_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 797 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 797 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 800 "ml_call_gen.m"
            {
#line 800 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Op_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 800 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_10_10;
#line 800 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_11_11;

#line 801 "ml_call_gen.m"
              {
#line 801 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_10_10, 0) = ((MR_Box) (ml_backend__ml_call_gen__Op_8));
#line 801 "ml_call_gen.m"
              }
#line 801 "ml_call_gen.m"
              {
#line 801 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_11_11 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__Expr_9);
              }
#line 801 "ml_call_gen.m"
              {
#line 801 "ml_call_gen.m"
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 801 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_10_10));
#line 801 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_11_11));
#line 801 "ml_call_gen.m"
              }
#line 800 "ml_call_gen.m"
            }
#line 797 "ml_call_gen.m"
            break;
#line 797 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 802 "ml_call_gen.m"
            {
#line 802 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 802 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 802 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_15_15;
#line 802 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_16_16;

#line 803 "ml_call_gen.m"
              {
#line 803 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_15_15 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprA_13);
              }
#line 803 "ml_call_gen.m"
              {
#line 803 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_16_16 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprB_14);
              }
#line 803 "ml_call_gen.m"
              {
#line 803 "ml_call_gen.m"
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 803 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 803 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Op_12));
#line 803 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_15_15));
#line 803 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 3) = ((MR_Box) (ml_backend__ml_call_gen__V_16_16));
#line 803 "ml_call_gen.m"
              }
#line 802 "ml_call_gen.m"
            }
#line 797 "ml_call_gen.m"
            break;
#line 797 "ml_call_gen.m"
        }
#line 797 "ml_call_gen.m"
        break;
#line 797 "ml_call_gen.m"
    }
#line 797 "ml_call_gen.m"
    return ml_backend__ml_call_gen__HeadVar__2_2;
#line 797 "ml_call_gen.m"
  }
#line 795 "ml_call_gen.m"
}

#line 608 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarNames_18,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Modes_22,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_25,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
#line 608 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61,
#line 608 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
#line 608 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63)
#line 608 "ml_call_gen.m"
{
#line 619 "ml_call_gen.m"
  {
#line 619 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 620 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 620 "ml_call_gen.m"
      {
#line 621 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarLvals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 620 "ml_call_gen.m"
          {
#line 622 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CallerTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 620 "ml_call_gen.m"
              {
#line 623 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CalleeTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 624 "ml_call_gen.m"
                  ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Modes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "ml_call_gen.m"
              }
#line 620 "ml_call_gen.m"
          }
#line 620 "ml_call_gen.m"
      }
#line 619 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 626 "ml_call_gen.m"
      {
#line 626 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62;
#line 626 "ml_call_gen.m"
      }
#line 619 "ml_call_gen.m"
    else
#line 631 "ml_call_gen.m"
      {
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarName_34;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarNamesTail_35;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarLval_36;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarLvalsTail_37;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallerType_38;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallerTypesTail_39;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CalleeType_40;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CalleeTypesTail_41;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Mode_42;
#line 631 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ModesTail_43;

#line 632 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarNames_18)) == (MR_mktag((MR_Integer) 1)));
#line 632 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 632 "ml_call_gen.m"
          {
#line 632 "ml_call_gen.m"
            ml_backend__ml_call_gen__VarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 0)));
#line 632 "ml_call_gen.m"
            ml_backend__ml_call_gen__VarNamesTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 1)));
#line 633 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarLvals_19)) == (MR_mktag((MR_Integer) 1)));
#line 633 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 633 "ml_call_gen.m"
              {
#line 633 "ml_call_gen.m"
                ml_backend__ml_call_gen__VarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 0)));
#line 633 "ml_call_gen.m"
                ml_backend__ml_call_gen__VarLvalsTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 1)));
#line 634 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CallerTypes_20)) == (MR_mktag((MR_Integer) 1)));
#line 634 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 634 "ml_call_gen.m"
                  {
#line 634 "ml_call_gen.m"
                    ml_backend__ml_call_gen__CallerType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 0)));
#line 634 "ml_call_gen.m"
                    ml_backend__ml_call_gen__CallerTypesTail_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 1)));
#line 635 "ml_call_gen.m"
                    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CalleeTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 635 "ml_call_gen.m"
                    if (ml_backend__ml_call_gen__succeeded)
#line 635 "ml_call_gen.m"
                      {
#line 635 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CalleeType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 0)));
#line 635 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CalleeTypesTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 1)));
#line 636 "ml_call_gen.m"
                        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Modes_22)) == (MR_mktag((MR_Integer) 1)));
#line 636 "ml_call_gen.m"
                        if (ml_backend__ml_call_gen__succeeded)
#line 636 "ml_call_gen.m"
                          {
#line 636 "ml_call_gen.m"
                            ml_backend__ml_call_gen__Mode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 0)));
#line 636 "ml_call_gen.m"
                            ml_backend__ml_call_gen__ModesTail_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 1)));
#line 636 "ml_call_gen.m"
                          }
#line 635 "ml_call_gen.m"
                      }
#line 634 "ml_call_gen.m"
                  }
#line 633 "ml_call_gen.m"
              }
#line 632 "ml_call_gen.m"
          }
#line 631 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 641 "ml_call_gen.m"
          {
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ModuleInfo_44;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgMode_45;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__CalleeIsDummy_46;
#line 641 "ml_call_gen.m"
            MR_Integer ml_backend__ml_call_gen__V_69_69 = (ml_backend__ml_call_gen__ArgNum_27 + (MR_Integer) 1);
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 641 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;

#line 638 "ml_call_gen.m"
            {
#line 638 "ml_call_gen.m"
              ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__VarNamesTail_35, ml_backend__ml_call_gen__VarLvalsTail_37, ml_backend__ml_call_gen__CallerTypesTail_39, ml_backend__ml_call_gen__CalleeTypesTail_41, ml_backend__ml_call_gen__ModesTail_43, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__V_69_69, &ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75);
            }
#line 642 "ml_call_gen.m"
            {
#line 642 "ml_call_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, &ml_backend__ml_call_gen__ModuleInfo_44);
            }
#line 643 "ml_call_gen.m"
            {
#line 643 "ml_call_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__Mode_42, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__ArgMode_45);
            }
#line 644 "ml_call_gen.m"
            {
#line 644 "ml_call_gen.m"
              ml_backend__ml_call_gen__CalleeIsDummy_46 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CalleeType_40);
            }
#line 648 "ml_call_gen.m"
#line 648 "ml_call_gen.m"
            switch (ml_backend__ml_call_gen__CalleeIsDummy_46) {
#line 648 "ml_call_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 648 "ml_call_gen.m"
              case (MR_Integer) 0:
#line 646 "ml_call_gen.m"
                {
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 646 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 646 "ml_call_gen.m"
                }
#line 648 "ml_call_gen.m"
                break;
#line 648 "ml_call_gen.m"
              case (MR_Integer) 1:
#line 653 "ml_call_gen.m"
#line 653 "ml_call_gen.m"
                switch (ml_backend__ml_call_gen__ArgMode_45) {
#line 653 "ml_call_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 653 "ml_call_gen.m"
                  case (MR_Integer) 0:
#line 654 "ml_call_gen.m"
                    {
#line 654 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__CallerIsDummy_47;
#line 654 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__VarRval_48;
#line 654 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ArgRval_49;

#line 656 "ml_call_gen.m"
                      {
#line 656 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CallerIsDummy_47 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38);
                      }
#line 664 "ml_call_gen.m"
#line 664 "ml_call_gen.m"
                      switch (ml_backend__ml_call_gen__CallerIsDummy_47) {
#line 664 "ml_call_gen.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 664 "ml_call_gen.m"
                        case (MR_Integer) 0:
#line 658 "ml_call_gen.m"
                          {
#line 663 "ml_call_gen.m"
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4]);
#line 658 "ml_call_gen.m"
                          }
#line 664 "ml_call_gen.m"
                          break;
#line 664 "ml_call_gen.m"
                        case (MR_Integer) 1:
#line 666 "ml_call_gen.m"
                          {
#line 666 "ml_call_gen.m"
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarRval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__VarLval_36));
#line 666 "ml_call_gen.m"
                          }
#line 664 "ml_call_gen.m"
                          break;
#line 664 "ml_call_gen.m"
                      }
#line 668 "ml_call_gen.m"
                      {
#line 668 "ml_call_gen.m"
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarRval_48, &ml_backend__ml_call_gen__ArgRval_49);
                      }
#line 670 "ml_call_gen.m"
                      {
#line 670 "ml_call_gen.m"
                        MR_Word base;
#line 670 "ml_call_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
#line 670 "ml_call_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgRval_49));
#line 670 "ml_call_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
#line 670 "ml_call_gen.m"
                      }
#line 654 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 654 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 654 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 654 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 654 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 654 "ml_call_gen.m"
                    }
#line 653 "ml_call_gen.m"
                    break;
#line 653 "ml_call_gen.m"
                  case (MR_Integer) 1:
#line 672 "ml_call_gen.m"
                    {
#line 672 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ArgLval_50;
#line 672 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ThisArgConvDecls_51;
#line 672 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ThisArgConvOutput_53;
#line 672 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__Globals_54;
#line 672 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__CopyOut_55;
#line 674 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen___ThisArgConvInput_52;

#line 674 "ml_call_gen.m"
                      {
#line 674 "ml_call_gen.m"
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarLval_36, ml_backend__ml_call_gen__VarName_34, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__ArgNum_27, &ml_backend__ml_call_gen__ArgLval_50, &ml_backend__ml_call_gen__ThisArgConvDecls_51, &ml_backend__ml_call_gen___ThisArgConvInput_52, &ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);
                      }
#line 678 "ml_call_gen.m"
                      {
#line 678 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ThisArgConvDecls_51, ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73);
                      }
#line 679 "ml_call_gen.m"
                      {
#line 679 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74);
                      }
#line 682 "ml_call_gen.m"
                      {
#line 682 "ml_call_gen.m"
                        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, &ml_backend__ml_call_gen__Globals_54);
                      }
#line 683 "ml_call_gen.m"
                      {
#line 683 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CopyOut_55 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_call_gen__Globals_54, ml_backend__ml_call_gen__CodeModel_24);
                      }
#line 688 "ml_call_gen.m"
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CopyOut_55 == (MR_Integer) 1);
#line 689 "ml_call_gen.m"
                      if (!(ml_backend__ml_call_gen__succeeded))
#line 693 "ml_call_gen.m"
                        {
#line 693 "ml_call_gen.m"
                          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNamesTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "ml_call_gen.m"
                          if (ml_backend__ml_call_gen__succeeded)
#line 693 "ml_call_gen.m"
                            {
#line 694 "ml_call_gen.m"
                              ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CodeModel_24 == (MR_Integer) 0);
#line 693 "ml_call_gen.m"
                              if (ml_backend__ml_call_gen__succeeded)
#line 695 "ml_call_gen.m"
                                ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__PredOrFunc_23 == (MR_Integer) 1);
#line 693 "ml_call_gen.m"
                            }
#line 693 "ml_call_gen.m"
                        }
#line 684 "ml_call_gen.m"
                      if (ml_backend__ml_call_gen__succeeded)
#line 699 "ml_call_gen.m"
                        {
#line 699 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__OutputType_56;

#line 699 "ml_call_gen.m"
                          {
#line 699 "ml_call_gen.m"
                            MR_Word base;
#line 699 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = base;
#line 699 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
#line 699 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71));
#line 699 "ml_call_gen.m"
                          }
#line 700 "ml_call_gen.m"
                          {
#line 700 "ml_call_gen.m"
                            ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__OutputType_56);
                          }
#line 701 "ml_call_gen.m"
                          {
#line 701 "ml_call_gen.m"
                            MR_Word base;
#line 701 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = base;
#line 701 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__OutputType_56));
#line 701 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72));
#line 701 "ml_call_gen.m"
                          }
#line 699 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 699 "ml_call_gen.m"
                        }
#line 684 "ml_call_gen.m"
                      else
#line 705 "ml_call_gen.m"
                        {
#line 705 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__V_84_84;
#line 719 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__Rval_95;
#line 720 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__V_96_96;

#line 720 "ml_call_gen.m"
                          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLval_50)) == (MR_mktag((MR_Integer) 1)));
#line 720 "ml_call_gen.m"
                          if (ml_backend__ml_call_gen__succeeded)
#line 720 "ml_call_gen.m"
                            {
#line 720 "ml_call_gen.m"
                              ml_backend__ml_call_gen__Rval_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 0)));
#line 720 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 1)));
#line 720 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_84_84 = ml_backend__ml_call_gen__Rval_95;
#line 720 "ml_call_gen.m"
                            }
#line 720 "ml_call_gen.m"
                          else
#line 720 "ml_call_gen.m"
                            {
#line 720 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "ml_call_gen.m"
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 720 "ml_call_gen.m"
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
#line 720 "ml_call_gen.m"
                            }
#line 705 "ml_call_gen.m"
                          {
#line 705 "ml_call_gen.m"
                            MR_Word base;
#line 705 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
#line 705 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_84_84));
#line 705 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
#line 705 "ml_call_gen.m"
                          }
#line 705 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 705 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 705 "ml_call_gen.m"
                        }
#line 672 "ml_call_gen.m"
                    }
#line 653 "ml_call_gen.m"
                    break;
#line 653 "ml_call_gen.m"
                  case (MR_Integer) 2:
#line 651 "ml_call_gen.m"
                    {
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 651 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 651 "ml_call_gen.m"
                    }
#line 653 "ml_call_gen.m"
                    break;
#line 653 "ml_call_gen.m"
                }
#line 648 "ml_call_gen.m"
                break;
#line 648 "ml_call_gen.m"
            }
#line 641 "ml_call_gen.m"
          }
#line 631 "ml_call_gen.m"
        else
#line 710 "ml_call_gen.m"
          {
#line 710 "ml_call_gen.m"
            {
#line 710 "ml_call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_arg_list\'/17", (MR_String) "length mismatch");
#line 710 "ml_call_gen.m"
              return;
            }
#line 710 "ml_call_gen.m"
          }
#line 631 "ml_call_gen.m"
      }
#line 619 "ml_call_gen.m"
  }
#line 608 "ml_call_gen.m"
}

#line 574 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
#line 574 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
#line 574 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_5,
#line 574 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6)
#line 574 "ml_call_gen.m"
{
#line 578 "ml_call_gen.m"
  {
#line 578 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 578 "ml_call_gen.m"
    if ((ml_backend__ml_call_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "ml_call_gen.m"
      if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "ml_call_gen.m"
        *ml_backend__ml_call_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "ml_call_gen.m"
      else
#line 586 "ml_call_gen.m"
        {
#line 587 "ml_call_gen.m"
          {
#line 587 "ml_call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_2\'/6", (MR_String) "length mismatch");
#line 587 "ml_call_gen.m"
            return;
          }
#line 586 "ml_call_gen.m"
        }
#line 578 "ml_call_gen.m"
    else
#line 578 "ml_call_gen.m"
      {
#line 578 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 578 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 578 "ml_call_gen.m"
        if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "ml_call_gen.m"
          {
#line 589 "ml_call_gen.m"
            {
#line 589 "ml_call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_2\'/6", (MR_String) "length mismatch");
#line 589 "ml_call_gen.m"
              return;
            }
#line 588 "ml_call_gen.m"
          }
#line 578 "ml_call_gen.m"
        else
#line 580 "ml_call_gen.m"
          {
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Statement_17;
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Statements_18;
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgName_19;
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgLval_20;
#line 580 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__V_21_21;
#line 580 "ml_call_gen.m"
            MR_Integer ml_backend__ml_call_gen__V_22_22;
#line 580 "ml_call_gen.m"
            MR_String ml_backend__ml_call_gen__ArgName_45;
#line 580 "ml_call_gen.m"
            MR_String ml_backend__ml_call_gen__V_51_51;

#line 594 "ml_call_gen.m"
            {
#line 594 "ml_call_gen.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ArgNum_4, &ml_backend__ml_call_gen__V_51_51);
            }
#line 594 "ml_call_gen.m"
            {
#line 594 "ml_call_gen.m"
              ml_backend__ml_call_gen__ArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "arg", ml_backend__ml_call_gen__V_51_51);
            }
#line 593 "ml_call_gen.m"
            {
#line 593 "ml_call_gen.m"
              ml_backend__ml_call_gen__ArgName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "ml_call_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_19, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_45));
#line 593 "ml_call_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "ml_call_gen.m"
            }
#line 582 "ml_call_gen.m"
            {
#line 582 "ml_call_gen.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__ArgName_19, ml_backend__ml_call_gen__Type_13, &ml_backend__ml_call_gen__ArgLval_20);
            }
#line 583 "ml_call_gen.m"
            {
#line 583 "ml_call_gen.m"
              ml_backend__ml_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_21_21, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_20));
#line 583 "ml_call_gen.m"
            }
#line 583 "ml_call_gen.m"
            {
#line 583 "ml_call_gen.m"
              ml_backend__ml_call_gen__Statement_17 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__V_43_43, ml_backend__ml_call_gen__V_21_21, ml_backend__ml_call_gen__Context_5);
            }
#line 584 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_22_22 = (ml_backend__ml_call_gen__ArgNum_4 + (MR_Integer) 1);
#line 584 "ml_call_gen.m"
            {
#line 584 "ml_call_gen.m"
              ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__V_42_42, ml_backend__ml_call_gen__Types_14, ml_backend__ml_call_gen__V_22_22, ml_backend__ml_call_gen__Context_5, &ml_backend__ml_call_gen__Statements_18);
            }
#line 580 "ml_call_gen.m"
            {
#line 580 "ml_call_gen.m"
              MR_Word base;
#line 580 "ml_call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "ml_call_gen.m"
              *ml_backend__ml_call_gen__HeadVar__6_6 = base;
#line 580 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_17));
#line 580 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Statements_18));
#line 580 "ml_call_gen.m"
            }
#line 580 "ml_call_gen.m"
          }
#line 578 "ml_call_gen.m"
      }
#line 578 "ml_call_gen.m"
  }
#line 574 "ml_call_gen.m"
}

#line 549 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(
#line 549 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 549 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
#line 549 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3)
#line 549 "ml_call_gen.m"
{
#line 552 "ml_call_gen.m"
  {
#line 552 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 552 "ml_call_gen.m"
    if ((ml_backend__ml_call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "ml_call_gen.m"
      *ml_backend__ml_call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "ml_call_gen.m"
    else
#line 553 "ml_call_gen.m"
      {
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Argument_8;
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Arguments_9;
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ArgName_10;
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_12_12;
#line 553 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_13_13;
#line 553 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__V_14_14;
#line 553 "ml_call_gen.m"
        MR_String ml_backend__ml_call_gen__ArgName_17;
#line 553 "ml_call_gen.m"
        MR_String ml_backend__ml_call_gen__V_23_23;

#line 594 "ml_call_gen.m"
        {
#line 594 "ml_call_gen.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ArgNum_2, &ml_backend__ml_call_gen__V_23_23);
        }
#line 594 "ml_call_gen.m"
        {
#line 594 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgName_17 = mercury__string__f_43_43_2_f_0((MR_String) "arg", ml_backend__ml_call_gen__V_23_23);
        }
#line 593 "ml_call_gen.m"
        {
#line 593 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgName_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_10, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_17));
#line 593 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "ml_call_gen.m"
        }
#line 561 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__ArgName_10);
#line 561 "ml_call_gen.m"
        {
#line 561 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 561 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_12_12, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_13_13));
#line 561 "ml_call_gen.m"
        }
#line 561 "ml_call_gen.m"
        {
#line 561 "ml_call_gen.m"
          ml_backend__ml_call_gen__Argument_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 561 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_12_12));
#line 561 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 1) = ((MR_Box) (ml_backend__ml_call_gen__Type_5));
#line 561 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "ml_call_gen.m"
        }
#line 562 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_14_14 = (ml_backend__ml_call_gen__ArgNum_2 + (MR_Integer) 1);
#line 562 "ml_call_gen.m"
        {
#line 562 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(ml_backend__ml_call_gen__Types_6, ml_backend__ml_call_gen__V_14_14, &ml_backend__ml_call_gen__Arguments_9);
        }
#line 553 "ml_call_gen.m"
        {
#line 553 "ml_call_gen.m"
          MR_Word base;
#line 553 "ml_call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "ml_call_gen.m"
          *ml_backend__ml_call_gen__HeadVar__3_3 = base;
#line 553 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Argument_8));
#line 553 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Arguments_9));
#line 553 "ml_call_gen.m"
        }
#line 553 "ml_call_gen.m"
      }
#line 552 "ml_call_gen.m"
  }
#line 549 "ml_call_gen.m"
}

#line 487 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_10,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Cont_11,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
#line 487 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
#line 487 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30)
#line 487 "ml_call_gen.m"
{
#line 492 "ml_call_gen.m"
  {
#line 492 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 492 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentCont_14;
#line 492 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentContArgTypes_17;
#line 492 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentContArgLvals_18;
#line 494 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen___FuncPtrRval_15;
#line 494 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen___EnvPtrRval_16;
#line 502 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__TypeInfo_41_41;

#line 493 "ml_call_gen.m"
    {
#line 493 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__CurrentCont_14);
    }
#line 494 "ml_call_gen.m"
    ml_backend__ml_call_gen___FuncPtrRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 0)));
#line 494 "ml_call_gen.m"
    ml_backend__ml_call_gen___EnvPtrRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 1)));
#line 494 "ml_call_gen.m"
    ml_backend__ml_call_gen__CurrentContArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 2)));
#line 494 "ml_call_gen.m"
    ml_backend__ml_call_gen__CurrentContArgLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 3)));
#line 502 "ml_call_gen.m"
    {
#line 502 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgTypes_17)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8)));
    }
#line 502 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 502 "ml_call_gen.m"
      {
#line 1768 "ml_backend.ml_call_gen.c"
        ml_backend__ml_call_gen__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_call_gen_scalar_common_1[3];
#line 503 "ml_call_gen.m"
        {
#line 503 "ml_call_gen.m"
          ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_call_gen__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgLvals_18)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9)));
        }
#line 502 "ml_call_gen.m"
      }
#line 496 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 505 "ml_call_gen.m"
      {
#line 505 "ml_call_gen.m"
        *ml_backend__ml_call_gen__Cont_11 = ml_backend__ml_call_gen__CurrentCont_14;
#line 506 "ml_call_gen.m"
        *ml_backend__ml_call_gen__ContDecls_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_30 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29;
#line 505 "ml_call_gen.m"
      }
#line 496 "ml_call_gen.m"
    else
#line 516 "ml_call_gen.m"
      {
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Params_19;
#line 516 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__ContFuncLabel_20;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ContFuncLabelRval_21;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CopyStatements_23;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallCont_24;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CopyStatement_25;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ContFuncDefn_26;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__EnvPtrRval_27;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_32_32;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_35_35;
#line 516 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_36_36;

#line 516 "ml_call_gen.m"
        {
#line 516 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cont_params_4_p_0(ml_backend__ml_call_gen__OutputArgTypes_8, &ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31);
        }
#line 517 "ml_call_gen.m"
        {
#line 517 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_32_32, 0) = ((MR_Box) (ml_backend__ml_call_gen__Params_19));
#line 517 "ml_call_gen.m"
        }
#line 517 "ml_call_gen.m"
        {
#line 517 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_call_gen__V_32_32, &ml_backend__ml_call_gen__ContFuncLabel_20, &ml_backend__ml_call_gen__ContFuncLabelRval_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33);
        }
#line 571 "ml_call_gen.m"
        {
#line 571 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__OutputArgLvals_9, ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CopyStatements_23);
        }
#line 522 "ml_call_gen.m"
        {
#line 522 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CallCont_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);
        }
#line 524 "ml_call_gen.m"
        {
#line 524 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_36_36, 0) = ((MR_Box) (ml_backend__ml_call_gen__CallCont_24));
#line 524 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "ml_call_gen.m"
        }
#line 524 "ml_call_gen.m"
        {
#line 524 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__CopyStatements_23, ml_backend__ml_call_gen__V_36_36);
        }
#line 523 "ml_call_gen.m"
        {
#line 523 "ml_call_gen.m"
          ml_backend__ml_call_gen__CopyStatement_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__V_35_35, ml_backend__ml_call_gen__Context_10);
        }
#line 526 "ml_call_gen.m"
        {
#line 526 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, ml_backend__ml_call_gen__ContFuncLabel_20, ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__Context_10, ml_backend__ml_call_gen__CopyStatement_25, &ml_backend__ml_call_gen__ContFuncDefn_26);
        }
#line 528 "ml_call_gen.m"
        {
#line 528 "ml_call_gen.m"
          MR_Word base;
#line 528 "ml_call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "ml_call_gen.m"
          *ml_backend__ml_call_gen__ContDecls_12 = base;
#line 528 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncDefn_26));
#line 528 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "ml_call_gen.m"
        }
#line 530 "ml_call_gen.m"
        {
#line 530 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, &ml_backend__ml_call_gen__EnvPtrRval_27);
        }
#line 531 "ml_call_gen.m"
        {
#line 531 "ml_call_gen.m"
          MR_Word base;
#line 531 "ml_call_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Cont_11 = base;
#line 531 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncLabelRval_21));
#line 531 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_27));
#line 531 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8));
#line 531 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9));
#line 531 "ml_call_gen.m"
        }
#line 516 "ml_call_gen.m"
      }
#line 492 "ml_call_gen.m"
  }
#line 487 "ml_call_gen.m"
}

#line 421 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Signature_13,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Detism_19,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_20,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 421 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
#line 421 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41)
#line 421 "ml_call_gen.m"
{
#line 428 "ml_call_gen.m"
  {
#line 428 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgRvals_32;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__RetLvals_35;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CallKind_37;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Stmt_38;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Statement_39;
#line 428 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_51_51;

#line 430 "ml_call_gen.m"
    {
#line 430 "ml_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Detism_19, &ml_backend__ml_call_gen__CodeModel_24);
    }
#line 458 "ml_call_gen.m"
#line 458 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__CodeModel_24) {
#line 458 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 458 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 466 "ml_call_gen.m"
        {
#line 467 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
#line 468 "ml_call_gen.m"
          ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
#line 469 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40;
#line 466 "ml_call_gen.m"
        }
#line 458 "ml_call_gen.m"
        break;
#line 458 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 432 "ml_call_gen.m"
        {
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Cont_25;
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__FuncPtrRval_27;
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__EnvPtrRval_28;
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__UseNestedFuncs_31;
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Globals_33;
#line 432 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__NondetCopyOut_34;
#line 437 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_29_29;
#line 437 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_30_30;

#line 434 "ml_call_gen.m"
          {
#line 434 "ml_call_gen.m"
            ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(ml_backend__ml_call_gen__RetTypes0_18, ml_backend__ml_call_gen__RetLvals0_17, ml_backend__ml_call_gen__Context_20, &ml_backend__ml_call_gen__Cont_25, ml_backend__ml_call_gen__Decls_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);
          }
#line 437 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 0)));
#line 437 "ml_call_gen.m"
          ml_backend__ml_call_gen__EnvPtrRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 1)));
#line 437 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 2)));
#line 437 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 3)));
#line 438 "ml_call_gen.m"
          {
#line 438 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__UseNestedFuncs_31);
          }
#line 442 "ml_call_gen.m"
#line 442 "ml_call_gen.m"
          switch (ml_backend__ml_call_gen__UseNestedFuncs_31) {
#line 442 "ml_call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 442 "ml_call_gen.m"
            case (MR_Integer) 0:
#line 443 "ml_call_gen.m"
              {
#line 443 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_45_45;
#line 443 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_46_46;

#line 444 "ml_call_gen.m"
                {
#line 444 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_28));
#line 444 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "ml_call_gen.m"
                }
#line 444 "ml_call_gen.m"
                {
#line 444 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_45_45, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
#line 444 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_45_45, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_46_46));
#line 444 "ml_call_gen.m"
                }
#line 444 "ml_call_gen.m"
                {
#line 444 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__V_45_45);
                }
#line 443 "ml_call_gen.m"
              }
#line 442 "ml_call_gen.m"
              break;
#line 442 "ml_call_gen.m"
            case (MR_Integer) 1:
#line 440 "ml_call_gen.m"
              {
#line 440 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_48_48;

#line 441 "ml_call_gen.m"
                {
#line 441 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
#line 441 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "ml_call_gen.m"
                }
#line 441 "ml_call_gen.m"
                {
#line 441 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__V_48_48);
                }
#line 440 "ml_call_gen.m"
              }
#line 442 "ml_call_gen.m"
              break;
#line 442 "ml_call_gen.m"
          }
#line 448 "ml_call_gen.m"
          {
#line 448 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__Globals_33);
          }
#line 449 "ml_call_gen.m"
          {
#line 449 "ml_call_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_call_gen__Globals_33, (MR_Integer) 256, &ml_backend__ml_call_gen__NondetCopyOut_34);
          }
#line 453 "ml_call_gen.m"
#line 453 "ml_call_gen.m"
          switch (ml_backend__ml_call_gen__NondetCopyOut_34) {
#line 453 "ml_call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 453 "ml_call_gen.m"
            case (MR_Integer) 0:
#line 455 "ml_call_gen.m"
              ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
#line 453 "ml_call_gen.m"
              break;
#line 453 "ml_call_gen.m"
            case (MR_Integer) 1:
#line 452 "ml_call_gen.m"
              ml_backend__ml_call_gen__RetLvals_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "ml_call_gen.m"
              break;
#line 453 "ml_call_gen.m"
          }
#line 432 "ml_call_gen.m"
        }
#line 458 "ml_call_gen.m"
        break;
#line 458 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 459 "ml_call_gen.m"
        {
#line 459 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Success_36;
#line 459 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_42_42;

#line 461 "ml_call_gen.m"
          {
#line 461 "ml_call_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_call_gen__Success_36);
          }
#line 462 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
#line 463 "ml_call_gen.m"
          {
#line 463 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_42_42, 0) = ((MR_Box) (ml_backend__ml_call_gen__Success_36));
#line 463 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "ml_call_gen.m"
          }
#line 463 "ml_call_gen.m"
          {
#line 463 "ml_call_gen.m"
            ml_backend__ml_call_gen__RetLvals_35 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__V_42_42, ml_backend__ml_call_gen__RetLvals0_17);
          }
#line 464 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40;
#line 459 "ml_call_gen.m"
        }
#line 458 "ml_call_gen.m"
        break;
#line 458 "ml_call_gen.m"
    }
#line 477 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Detism_19 == (MR_Integer) 6);
#line 477 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 478 "ml_call_gen.m"
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 0;
#line 477 "ml_call_gen.m"
    else
#line 480 "ml_call_gen.m"
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 2;
#line 482 "ml_call_gen.m"
    {
#line 482 "ml_call_gen.m"
      ml_backend__ml_call_gen__Stmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_13));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 2) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_15));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 3) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_14));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 4) = ((MR_Box) (ml_backend__ml_call_gen__ArgRvals_32));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 5) = ((MR_Box) (ml_backend__ml_call_gen__RetLvals_35));
#line 482 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 6) = ((MR_Box) (ml_backend__ml_call_gen__CallKind_37));
#line 482 "ml_call_gen.m"
    }
#line 484 "ml_call_gen.m"
    {
#line 484 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_51_51 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_call_gen__Context_20);
    }
#line 484 "ml_call_gen.m"
    {
#line 484 "ml_call_gen.m"
      ml_backend__ml_call_gen__Statement_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Statement_39, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_38));
#line 484 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Statement_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_51_51));
#line 484 "ml_call_gen.m"
    }
#line 485 "ml_call_gen.m"
    {
#line 485 "ml_call_gen.m"
      MR_Word base;
#line 485 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Statements_22 = base;
#line 485 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_39));
#line 485 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "ml_call_gen.m"
    }
#line 428 "ml_call_gen.m"
  }
#line 421 "ml_call_gen.m"
}

#line 266 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
#line 266 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 266 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 266 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 266 "ml_call_gen.m"
{
#line 266 "ml_call_gen.m"
  {
#line 266 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 266 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_128;
#line 266 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_129;
#line 266 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_131;

#line 266 "ml_call_gen.m"
    {
#line 266 "ml_call_gen.m"
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__266__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_128, &ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_129, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_131);
    }
#line 266 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_128));
#line 266 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_129));
#line 266 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_131));
#line 266 "ml_call_gen.m"
  }
#line 266 "ml_call_gen.m"
}

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
#line 260 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 260 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 260 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 260 "ml_call_gen.m"
{
#line 260 "ml_call_gen.m"
  {
#line 260 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv1_Statements_22;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

#line 260 "ml_call_gen.m"
    {
#line 260 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Statements_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    }
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Statements_22));
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
#line 260 "ml_call_gen.m"
  }
#line 260 "ml_call_gen.m"
}

#line 143 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 143 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
#line 143 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79)
#line 143 "ml_call_gen.m"
{
#line 149 "ml_call_gen.m"
  {
#line 149 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 149 "ml_call_gen.m"
    MR_Integer ml_backend__ml_call_gen__NumArgs_18;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__BoxedArgTypes_19;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_20;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__VarSet_21;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgNames_22;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredOrFunc_23;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params0_25;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureArgType_27;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgParams0_29;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__RetParam_30;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_31;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_32;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureLval_37;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncType_40;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncRval_41;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvVarSeq_52;
#line 149 "ml_call_gen.m"
    MR_Integer ml_backend__ml_call_gen__ConvVarNum_53;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarName_54;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarDecl_55;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarLval_56;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__AssignFuncVar_57;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarRval_58;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_59;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ActualArgTypes_60;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__InputRvals_61;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputLvals_62;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputTypes_63;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_64;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureRval_66;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ObjectRval_67;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Decls0_68;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Statements0_69;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_85_85;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111;
#line 149 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__V_112_112;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_118_118;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_119_119;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122;
#line 149 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_124_124;
#line 149 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__V_145_145;

#line 152 "ml_call_gen.m"
    {
#line 152 "ml_call_gen.m"
      ml_backend__ml_call_gen__NumArgs_18 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ml_backend__ml_call_gen__ArgVars_11);
    }
#line 153 "ml_call_gen.m"
    {
#line 153 "ml_call_gen.m"
      ml_backend__ml_call_gen__BoxedArgTypes_19 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_call_gen__NumArgs_18);
    }
#line 156 "ml_call_gen.m"
    {
#line 156 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__ModuleInfo_20);
    }
#line 157 "ml_call_gen.m"
    {
#line 157 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__VarSet_21);
    }
#line 158 "ml_call_gen.m"
    {
#line 158 "ml_call_gen.m"
      ml_backend__ml_call_gen__ArgNames_22 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_call_gen__VarSet_21, ml_backend__ml_call_gen__ArgVars_11);
    }
#line 159 "ml_call_gen.m"
    {
#line 159 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredOrFunc_23 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(ml_backend__ml_call_gen__GenericCall_10);
    }
#line 160 "ml_call_gen.m"
    {
#line 160 "ml_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Determinism_13, &ml_backend__ml_call_gen__CodeModel_24);
    }
#line 161 "ml_call_gen.m"
    {
#line 161 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params0_25 = ml_backend__ml_code_util__ml_gen_params_6_f_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24);
    }
#line 172 "ml_call_gen.m"
    ml_backend__ml_call_gen__ClosureArgType_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 176 "ml_call_gen.m"
    ml_backend__ml_call_gen__ArgParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 0)));
#line 176 "ml_call_gen.m"
    ml_backend__ml_call_gen__RetParam_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 1)));
#line 177 "ml_call_gen.m"
    {
#line 177 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
#line 177 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgParams0_29));
#line 177 "ml_call_gen.m"
    }
#line 177 "ml_call_gen.m"
    {
#line 177 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_85_85));
#line 177 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 1) = ((MR_Box) (ml_backend__ml_call_gen__RetParam_30));
#line 177 "ml_call_gen.m"
    }
#line 178 "ml_call_gen.m"
    {
#line 178 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_32 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_31);
    }
#line 190 "ml_call_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 1))))
#line 192 "ml_call_gen.m"
      {
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__TypeClassInfoVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 192 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__MethodNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__BaseTypeclassInfoLval_48;
#line 192 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__Offset_49;
#line 192 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__MethodFieldNum_50;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__MethodFieldId_51;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_89_89;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_91_91;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_93_93;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_94_94;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_97_97;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_100_100;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_101_101;
#line 192 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__FuncLval_133;
#line 191 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___ClassId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 191 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___PredName_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 196 "ml_call_gen.m"
        {
#line 196 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__TypeClassInfoVar_42, &ml_backend__ml_call_gen__ClosureLval_37);
        }
#line 201 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[1]);
#line 202 "ml_call_gen.m"
        {
#line 202 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 202 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_91_91, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 202 "ml_call_gen.m"
        }
#line 201 "ml_call_gen.m"
        {
#line 201 "ml_call_gen.m"
          ml_backend__ml_call_gen__BaseTypeclassInfoLval_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 201 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_89_89));
#line 201 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_91_91));
#line 201 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[2]));
#line 201 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 201 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
#line 201 "ml_call_gen.m"
        }
#line 206 "ml_call_gen.m"
        {
#line 206 "ml_call_gen.m"
          ml_backend__ml_call_gen__Offset_49 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
        }
#line 207 "ml_call_gen.m"
        ml_backend__ml_call_gen__MethodFieldNum_50 = (ml_backend__ml_call_gen__MethodNum_43 + ml_backend__ml_call_gen__Offset_49);
#line 208 "ml_call_gen.m"
        {
#line 208 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "ml_call_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldNum_50));
#line 208 "ml_call_gen.m"
        }
#line 208 "ml_call_gen.m"
        {
#line 208 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 208 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_93_93, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_94_94));
#line 208 "ml_call_gen.m"
        }
#line 208 "ml_call_gen.m"
        {
#line 208 "ml_call_gen.m"
          ml_backend__ml_call_gen__MethodFieldId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__MethodFieldId_51, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_93_93));
#line 208 "ml_call_gen.m"
        }
#line 209 "ml_call_gen.m"
        {
#line 209 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_97_97, 0) = ((MR_Box) (ml_backend__ml_call_gen__BaseTypeclassInfoLval_48));
#line 209 "ml_call_gen.m"
        }
#line 209 "ml_call_gen.m"
        {
#line 209 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncLval_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_89_89));
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_97_97));
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 2) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldId_51));
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 209 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 209 "ml_call_gen.m"
        }
#line 211 "ml_call_gen.m"
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
#line 212 "ml_call_gen.m"
        {
#line 212 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_100_100, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
#line 212 "ml_call_gen.m"
        }
#line 212 "ml_call_gen.m"
        {
#line 212 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_101_101, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_133));
#line 212 "ml_call_gen.m"
        }
#line 212 "ml_call_gen.m"
        {
#line 212 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 212 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 212 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_100_100));
#line 212 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_101_101));
#line 212 "ml_call_gen.m"
        }
#line 192 "ml_call_gen.m"
      }
#line 190 "ml_call_gen.m"
    else
#line 182 "ml_call_gen.m"
      {
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ClosureVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__FuncLval_39;
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_107_107;
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_109_109;
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_110_110;
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___Purity_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 182 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___PredOrFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 182 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 183 "ml_call_gen.m"
        {
#line 183 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__ClosureVar_33, &ml_backend__ml_call_gen__ClosureLval_37);
        }
#line 186 "ml_call_gen.m"
        {
#line 186 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 186 "ml_call_gen.m"
        }
#line 186 "ml_call_gen.m"
        {
#line 186 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncLval_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[1])));
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_107_107));
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[4]));
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 186 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
#line 186 "ml_call_gen.m"
        }
#line 188 "ml_call_gen.m"
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
#line 189 "ml_call_gen.m"
        {
#line 189 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 189 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
#line 189 "ml_call_gen.m"
        }
#line 189 "ml_call_gen.m"
        {
#line 189 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 189 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_39));
#line 189 "ml_call_gen.m"
        }
#line 189 "ml_call_gen.m"
        {
#line 189 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 189 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 189 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_109_109));
#line 189 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_110_110));
#line 189 "ml_call_gen.m"
        }
#line 182 "ml_call_gen.m"
      }
#line 221 "ml_call_gen.m"
    {
#line 221 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_call_gen__ConvVarSeq_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111);
    }
#line 222 "ml_call_gen.m"
    ml_backend__ml_call_gen__ConvVarNum_53 = (MR_Integer) ml_backend__ml_call_gen__ConvVarSeq_52;
#line 223 "ml_call_gen.m"
    {
#line 223 "ml_call_gen.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ConvVarNum_53, &ml_backend__ml_call_gen__V_145_145);
    }
#line 223 "ml_call_gen.m"
    {
#line 223 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) "func_", ml_backend__ml_call_gen__V_145_145);
    }
#line 223 "ml_call_gen.m"
    {
#line 223 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 223 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncVarName_54, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_112_112));
#line 223 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncVarName_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "ml_call_gen.m"
    }
#line 227 "ml_call_gen.m"
    ml_backend__ml_call_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__FuncVarName_54);
#line 228 "ml_call_gen.m"
    {
#line 228 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_119_119 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_call_gen__Context_14);
    }
#line 227 "ml_call_gen.m"
    {
#line 227 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarDecl_55 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_call_gen__V_118_118, ml_backend__ml_call_gen__FuncType_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__V_119_119);
    }
#line 229 "ml_call_gen.m"
    {
#line 229 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__FuncVarName_54, ml_backend__ml_call_gen__FuncType_40, &ml_backend__ml_call_gen__FuncVarLval_56);
    }
#line 230 "ml_call_gen.m"
    {
#line 230 "ml_call_gen.m"
      ml_backend__ml_call_gen__AssignFuncVar_57 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__FuncVarLval_56, ml_backend__ml_call_gen__FuncRval_41, ml_backend__ml_call_gen__Context_14);
    }
#line 231 "ml_call_gen.m"
    {
#line 231 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarRval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__FuncVarRval_58, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarLval_56));
#line 231 "ml_call_gen.m"
    }
#line 236 "ml_call_gen.m"
    {
#line 236 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ArgLvals_59);
    }
#line 237 "ml_call_gen.m"
    {
#line 237 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ActualArgTypes_60);
    }
#line 238 "ml_call_gen.m"
    {
#line 238 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__ArgLvals_59, ml_backend__ml_call_gen__ActualArgTypes_60, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, (MR_Integer) 0, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_61, &ml_backend__ml_call_gen__OutputLvals_62, &ml_backend__ml_call_gen__OutputTypes_63, &ml_backend__ml_call_gen__ConvArgDecls_64, &ml_backend__ml_call_gen__ConvOutputStatements_65, ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122);
    }
#line 242 "ml_call_gen.m"
    {
#line 242 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_124_124, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 242 "ml_call_gen.m"
    }
#line 242 "ml_call_gen.m"
    {
#line 242 "ml_call_gen.m"
      ml_backend__ml_call_gen__ClosureRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 242 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[6])));
#line 242 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_124_124));
#line 242 "ml_call_gen.m"
    }
#line 243 "ml_call_gen.m"
    ml_backend__ml_call_gen__ObjectRval_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 247 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStatements_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 251 "ml_call_gen.m"
      {
#line 251 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_125_125;

#line 252 "ml_call_gen.m"
        {
#line 252 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
#line 252 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_125_125, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
#line 252 "ml_call_gen.m"
        }
#line 251 "ml_call_gen.m"
        {
#line 251 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_32, ml_backend__ml_call_gen__ObjectRval_67, ml_backend__ml_call_gen__FuncVarRval_58, ml_backend__ml_call_gen__V_125_125, ml_backend__ml_call_gen__OutputLvals_62, ml_backend__ml_call_gen__OutputTypes_63, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Decls0_68, &ml_backend__ml_call_gen__Statements0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
#line 251 "ml_call_gen.m"
      }
#line 245 "ml_call_gen.m"
    else
#line 262 "ml_call_gen.m"
      {
#line 262 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenCall_70;
#line 262 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71;
#line 262 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_76;
#line 262 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_127_127;

#line 261 "ml_call_gen.m"
        {
#line 261 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
#line 261 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_127_127, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
#line 261 "ml_call_gen.m"
        }
#line 260 "ml_call_gen.m"
        {
#line 260 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenCall_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[0]));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_32));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_67));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarRval_58));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 6) = ((MR_Box) (ml_backend__ml_call_gen__V_127_127));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_62));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_63));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 9) = ((MR_Box) (ml_backend__ml_call_gen__Determinism_13));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
#line 260 "ml_call_gen.m"
        }
#line 266 "ml_call_gen.m"
        {
#line 266 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[1]));
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2));
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 3) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 4) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_24));
#line 266 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStatements_65));
#line 266 "ml_call_gen.m"
        }
#line 278 "ml_call_gen.m"
        {
#line 278 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__DoGenCall_70, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, &ml_backend__ml_call_gen__CallAndConvOutputDecls_76, &ml_backend__ml_call_gen__Statements0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
#line 281 "ml_call_gen.m"
        {
#line 281 "ml_call_gen.m"
          ml_backend__ml_call_gen__Decls0_68 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ConvArgDecls_64, ml_backend__ml_call_gen__CallAndConvOutputDecls_76);
        }
#line 262 "ml_call_gen.m"
      }
#line 284 "ml_call_gen.m"
    {
#line 284 "ml_call_gen.m"
      MR_Word base;
#line 284 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Decls_15 = base;
#line 284 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarDecl_55));
#line 284 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Decls0_68));
#line 284 "ml_call_gen.m"
    }
#line 285 "ml_call_gen.m"
    {
#line 285 "ml_call_gen.m"
      MR_Word base;
#line 285 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Statements_16 = base;
#line 285 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__AssignFuncVar_57));
#line 285 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Statements0_69));
#line 285 "ml_call_gen.m"
    }
#line 149 "ml_call_gen.m"
  }
#line 143 "ml_call_gen.m"
}

#line 85 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_4_p_0(
#line 85 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_5,
#line 85 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Params_6,
#line 85 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12,
#line 85 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_13)
#line 85 "ml_call_gen.m"
{
#line 536 "ml_call_gen.m"
  {
#line 536 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 536 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Args0_8;
#line 536 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__UseNestedFuncs_9;
#line 536 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Args_10;

#line 537 "ml_call_gen.m"
    {
#line 537 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(ml_backend__ml_call_gen__OutputArgTypes_5, (MR_Integer) 1, &ml_backend__ml_call_gen__Args0_8);
    }
#line 538 "ml_call_gen.m"
    {
#line 538 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12, &ml_backend__ml_call_gen__UseNestedFuncs_9);
    }
#line 542 "ml_call_gen.m"
#line 542 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__UseNestedFuncs_9) {
#line 542 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 542 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 543 "ml_call_gen.m"
        {
#line 543 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__EnvPtrArg_11;
#line 543 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_15_15;

#line 544 "ml_call_gen.m"
          {
#line 544 "ml_call_gen.m"
            ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&ml_backend__ml_call_gen__EnvPtrArg_11);
          }
#line 545 "ml_call_gen.m"
          {
#line 545 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_15_15, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrArg_11));
#line 545 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "ml_call_gen.m"
          }
#line 545 "ml_call_gen.m"
          {
#line 545 "ml_call_gen.m"
            ml_backend__ml_call_gen__Args_10 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_call_gen__Args0_8, ml_backend__ml_call_gen__V_15_15);
          }
#line 543 "ml_call_gen.m"
        }
#line 542 "ml_call_gen.m"
        break;
#line 542 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 541 "ml_call_gen.m"
        ml_backend__ml_call_gen__Args_10 = ml_backend__ml_call_gen__Args0_8;
#line 542 "ml_call_gen.m"
        break;
#line 542 "ml_call_gen.m"
    }
#line 547 "ml_call_gen.m"
    {
#line 547 "ml_call_gen.m"
      MR_Word base;
#line 547 "ml_call_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Params_6 = base;
#line 547 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Args_10));
#line 547 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "ml_call_gen.m"
    }
#line 536 "ml_call_gen.m"
    *ml_backend__ml_call_gen__STATE_VARIABLE_Info_13 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12;
#line 536 "ml_call_gen.m"
  }
#line 85 "ml_call_gen.m"
}

#line 75 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(
#line 75 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_6,
#line 75 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_7,
#line 75 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__CodeAddrRval_8,
#line 75 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17,
#line 75 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_18)
#line 75 "ml_call_gen.m"
{
#line 596 "ml_call_gen.m"
  {
#line 596 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_10;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredLabel_11;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredModule_12;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_13;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_14;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ProcLabel_15;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__QualifiedProcLabel_16;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_21_21;
#line 596 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_22_22;

#line 597 "ml_call_gen.m"
    {
#line 597 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_call_gen__ModuleInfo_10);
    }
#line 598 "ml_call_gen.m"
    {
#line 598 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(ml_backend__ml_call_gen__ModuleInfo_10, ml_backend__ml_call_gen__PredId_6, ml_backend__ml_call_gen__ProcId_7, &ml_backend__ml_call_gen__PredLabel_11, &ml_backend__ml_call_gen__PredModule_12);
    }
#line 599 "ml_call_gen.m"
    {
#line 599 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_call_gen__PredId_6, ml_backend__ml_call_gen__ProcId_7, &ml_backend__ml_call_gen__Params_13, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_call_gen__STATE_VARIABLE_Info_18);
    }
#line 600 "ml_call_gen.m"
    {
#line 600 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_14 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_13);
    }
#line 601 "ml_call_gen.m"
    {
#line 601 "ml_call_gen.m"
      ml_backend__ml_call_gen__ProcLabel_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_15, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredLabel_11));
#line 601 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_15, 1) = ((MR_Box) (ml_backend__ml_call_gen__ProcId_7));
#line 601 "ml_call_gen.m"
    }
#line 602 "ml_call_gen.m"
    {
#line 602 "ml_call_gen.m"
      ml_backend__ml_call_gen__QualifiedProcLabel_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredModule_12));
#line 602 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 602 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 2) = ((MR_Box) (ml_backend__ml_call_gen__ProcLabel_15));
#line 602 "ml_call_gen.m"
    }
#line 604 "ml_call_gen.m"
    {
#line 604 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__V_22_22, 0) = ((MR_Box) (ml_backend__ml_call_gen__QualifiedProcLabel_16));
#line 604 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__V_22_22, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_14));
#line 604 "ml_call_gen.m"
    }
#line 603 "ml_call_gen.m"
    {
#line 603 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 603 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_22_22));
#line 603 "ml_call_gen.m"
    }
#line 603 "ml_call_gen.m"
    {
#line 603 "ml_call_gen.m"
      MR_Word base;
#line 603 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "ml_call_gen.m"
      *ml_backend__ml_call_gen__CodeAddrRval_8 = base;
#line 603 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 603 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_21_21));
#line 603 "ml_call_gen.m"
    }
#line 596 "ml_call_gen.m"
  }
#line 75 "ml_call_gen.m"
}

#line 69 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cast_6_p_0(
#line 69 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_7,
#line 69 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_8,
#line 69 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_9,
#line 69 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_10,
#line 69 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25,
#line 69 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_26)
#line 69 "ml_call_gen.m"
{
#line 287 "ml_call_gen.m"
  {
#line 287 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 287 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_12;
#line 287 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgTypes_13;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcVar_14;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestVar_15;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcLval_16;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestLval_17;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcType_18;
#line 290 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestType_19;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_27_27;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_28_28;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_29_29;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_30_30;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_31_31;
#line 291 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_32_32;

#line 288 "ml_call_gen.m"
    {
#line 288 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__ArgVars_8, &ml_backend__ml_call_gen__ArgLvals_12);
    }
#line 289 "ml_call_gen.m"
    {
#line 289 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__ArgVars_8, &ml_backend__ml_call_gen__ArgTypes_13);
    }
#line 291 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 291 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 291 "ml_call_gen.m"
      {
#line 291 "ml_call_gen.m"
        ml_backend__ml_call_gen__SrcVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_8, (MR_Integer) 0)));
#line 291 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_8, (MR_Integer) 1)));
#line 291 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 291 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 291 "ml_call_gen.m"
          {
#line 291 "ml_call_gen.m"
            ml_backend__ml_call_gen__DestVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_27_27, (MR_Integer) 0)));
#line 291 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_27_27, (MR_Integer) 1)));
#line 291 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 291 "ml_call_gen.m"
              {
#line 292 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLvals_12)) == (MR_mktag((MR_Integer) 1)));
#line 292 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 292 "ml_call_gen.m"
                  {
#line 292 "ml_call_gen.m"
                    ml_backend__ml_call_gen__SrcLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_12, (MR_Integer) 0)));
#line 292 "ml_call_gen.m"
                    ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_12, (MR_Integer) 1)));
#line 292 "ml_call_gen.m"
                    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 292 "ml_call_gen.m"
                    if (ml_backend__ml_call_gen__succeeded)
#line 292 "ml_call_gen.m"
                      {
#line 292 "ml_call_gen.m"
                        ml_backend__ml_call_gen__DestLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_29_29, (MR_Integer) 0)));
#line 292 "ml_call_gen.m"
                        ml_backend__ml_call_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_29_29, (MR_Integer) 1)));
#line 292 "ml_call_gen.m"
                        ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "ml_call_gen.m"
                        if (ml_backend__ml_call_gen__succeeded)
#line 291 "ml_call_gen.m"
                          {
#line 293 "ml_call_gen.m"
                            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgTypes_13)) == (MR_mktag((MR_Integer) 1)));
#line 293 "ml_call_gen.m"
                            if (ml_backend__ml_call_gen__succeeded)
#line 293 "ml_call_gen.m"
                              {
#line 293 "ml_call_gen.m"
                                ml_backend__ml_call_gen__SrcType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_13, (MR_Integer) 0)));
#line 293 "ml_call_gen.m"
                                ml_backend__ml_call_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_13, (MR_Integer) 1)));
#line 293 "ml_call_gen.m"
                                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 293 "ml_call_gen.m"
                                if (ml_backend__ml_call_gen__succeeded)
#line 293 "ml_call_gen.m"
                                  {
#line 293 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__DestType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_31_31, (MR_Integer) 0)));
#line 293 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_31_31, (MR_Integer) 1)));
#line 293 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "ml_call_gen.m"
                                  }
#line 293 "ml_call_gen.m"
                              }
#line 291 "ml_call_gen.m"
                          }
#line 292 "ml_call_gen.m"
                      }
#line 292 "ml_call_gen.m"
                  }
#line 291 "ml_call_gen.m"
              }
#line 291 "ml_call_gen.m"
          }
#line 291 "ml_call_gen.m"
      }
#line 290 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 295 "ml_call_gen.m"
      {
#line 295 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ModuleInfo_20;
#line 295 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__IsDummy_21;
#line 308 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__GroundTerm_24;

#line 295 "ml_call_gen.m"
        {
#line 295 "ml_call_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_call_gen__ModuleInfo_20);
        }
#line 296 "ml_call_gen.m"
        {
#line 296 "ml_call_gen.m"
          ml_backend__ml_call_gen__IsDummy_21 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__DestType_19);
        }
#line 300 "ml_call_gen.m"
#line 300 "ml_call_gen.m"
        switch (ml_backend__ml_call_gen__IsDummy_21) {
#line 300 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 300 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 299 "ml_call_gen.m"
            *ml_backend__ml_call_gen__Statements_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "ml_call_gen.m"
            break;
#line 300 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 301 "ml_call_gen.m"
            {
#line 301 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__CastRval_22;
#line 301 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Assign_23;
#line 301 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_34_34;

#line 303 "ml_call_gen.m"
              {
#line 303 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_call_gen__SrcLval_16));
#line 303 "ml_call_gen.m"
              }
#line 302 "ml_call_gen.m"
              {
#line 302 "ml_call_gen.m"
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__SrcType_18, ml_backend__ml_call_gen__DestType_19, (MR_Integer) 0, ml_backend__ml_call_gen__V_34_34, &ml_backend__ml_call_gen__CastRval_22);
              }
#line 304 "ml_call_gen.m"
              {
#line 304 "ml_call_gen.m"
                ml_backend__ml_call_gen__Assign_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__DestLval_17, ml_backend__ml_call_gen__CastRval_22, ml_backend__ml_call_gen__Context_7);
              }
#line 305 "ml_call_gen.m"
              {
#line 305 "ml_call_gen.m"
                MR_Word base;
#line 305 "ml_call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_10 = base;
#line 305 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Assign_23));
#line 305 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "ml_call_gen.m"
              }
#line 301 "ml_call_gen.m"
            }
#line 300 "ml_call_gen.m"
            break;
#line 300 "ml_call_gen.m"
        }
#line 307 "ml_call_gen.m"
        *ml_backend__ml_call_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "ml_call_gen.m"
        {
#line 308 "ml_call_gen.m"
          ml_backend__ml_call_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__SrcVar_14, &ml_backend__ml_call_gen__GroundTerm_24);
        }
#line 308 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 311 "ml_call_gen.m"
          {
#line 311 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_call_gen__DestVar_15, ml_backend__ml_call_gen__GroundTerm_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__STATE_VARIABLE_Info_26);
          }
#line 308 "ml_call_gen.m"
        else
#line 308 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_26 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25;
#line 295 "ml_call_gen.m"
      }
#line 290 "ml_call_gen.m"
    else
#line 316 "ml_call_gen.m"
      {
#line 316 "ml_call_gen.m"
        {
#line 316 "ml_call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/6", (MR_String) "wrong number of args for cast");
#line 316 "ml_call_gen.m"
          return;
        }
#line 316 "ml_call_gen.m"
      }
#line 287 "ml_call_gen.m"
  }
#line 69 "ml_call_gen.m"
}

#line 61 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(
#line 61 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_10,
#line 61 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_11,
#line 61 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
#line 61 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_13,
#line 61 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 61 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 61 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 61 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45,
#line 61 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_46)
#line 61 "ml_call_gen.m"
{
#line 728 "ml_call_gen.m"
  {
#line 728 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 728 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_18;
#line 728 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_19;
#line 728 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleName_20;
#line 728 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__PredName_21;
#line 728 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SimpleCode_22;

#line 729 "ml_call_gen.m"
    {
#line 729 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgLvals_18);
    }
#line 730 "ml_call_gen.m"
    {
#line 730 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_call_gen__ModuleInfo_19);
    }
#line 731 "ml_call_gen.m"
    {
#line 731 "ml_call_gen.m"
      ml_backend__ml_call_gen__ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
#line 732 "ml_call_gen.m"
    {
#line 732 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredName_21 = hlds__hlds_module__predicate_name_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
#line 733 "ml_call_gen.m"
    {
#line 733 "ml_call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__ModuleName_20, ml_backend__ml_call_gen__PredName_21, ml_backend__ml_call_gen__ProcId_11, ml_backend__ml_call_gen__ArgLvals_18, &ml_backend__ml_call_gen__SimpleCode_22);
    }
#line 769 "ml_call_gen.m"
#line 769 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__CodeModel_13) {
#line 769 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 769 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 752 "ml_call_gen.m"
#line 752 "ml_call_gen.m"
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
#line 752 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 752 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 738 "ml_call_gen.m"
            {
#line 738 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 738 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__SimpleExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
#line 742 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__VarType_26;
#line 742 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ProgDataType_27;
#line 742 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_70_70;
#line 742 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen___VarName_25;
#line 743 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_28_28;
#line 743 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_29_29;

#line 742 "ml_call_gen.m"
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Lval_23)) == (MR_mktag((MR_Integer) 3)));
#line 742 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 742 "ml_call_gen.m"
                {
#line 742 "ml_call_gen.m"
                  ml_backend__ml_call_gen___VarName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 0)));
#line 742 "ml_call_gen.m"
                  ml_backend__ml_call_gen__VarType_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 1)));
#line 743 "ml_call_gen.m"
                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarType_26)) == (MR_mktag((MR_Integer) 2)));
#line 743 "ml_call_gen.m"
                  if (ml_backend__ml_call_gen__succeeded)
#line 743 "ml_call_gen.m"
                    {
#line 743 "ml_call_gen.m"
                      ml_backend__ml_call_gen__ProgDataType_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 0)));
#line 743 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 1)));
#line 743 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 2)));
#line 744 "ml_call_gen.m"
                      {
#line 744 "ml_call_gen.m"
                        ml_backend__ml_call_gen__V_70_70 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__ProgDataType_27);
                      }
#line 744 "ml_call_gen.m"
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_70_70 == (MR_Integer) 0);
#line 743 "ml_call_gen.m"
                    }
#line 742 "ml_call_gen.m"
                }
#line 739 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 746 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "ml_call_gen.m"
              else
#line 748 "ml_call_gen.m"
                {
#line 748 "ml_call_gen.m"
                  MR_Word ml_backend__ml_call_gen__Rval_30;
#line 748 "ml_call_gen.m"
                  MR_Word ml_backend__ml_call_gen__Statement_31;

#line 748 "ml_call_gen.m"
                  {
#line 748 "ml_call_gen.m"
                    ml_backend__ml_call_gen__Rval_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleExpr_24);
                  }
#line 749 "ml_call_gen.m"
                  {
#line 749 "ml_call_gen.m"
                    ml_backend__ml_call_gen__Statement_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Lval_23, ml_backend__ml_call_gen__Rval_30, ml_backend__ml_call_gen__Context_14);
                  }
#line 750 "ml_call_gen.m"
                  {
#line 750 "ml_call_gen.m"
                    MR_Word base;
#line 750 "ml_call_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "ml_call_gen.m"
                    *ml_backend__ml_call_gen__Statements_16 = base;
#line 750 "ml_call_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_31));
#line 750 "ml_call_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "ml_call_gen.m"
                  }
#line 748 "ml_call_gen.m"
                }
#line 738 "ml_call_gen.m"
            }
#line 752 "ml_call_gen.m"
            break;
#line 752 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 753 "ml_call_gen.m"
            {
#line 753 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__AddrLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 753 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ValueLval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
#line 754 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ValueType_35;
#line 754 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen___ValueVarName_34;

#line 754 "ml_call_gen.m"
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ValueLval_33)) == (MR_mktag((MR_Integer) 3)));
#line 754 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 754 "ml_call_gen.m"
                {
#line 754 "ml_call_gen.m"
                  ml_backend__ml_call_gen___ValueVarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 0)));
#line 754 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ValueType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 1)));
#line 757 "ml_call_gen.m"
                  {
#line 757 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_63_63;
#line 757 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_64_64;
#line 757 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_65_65;
#line 757 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__Statement_72;

#line 756 "ml_call_gen.m"
                    {
#line 756 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_call_gen__AddrLval_32));
#line 756 "ml_call_gen.m"
                    }
#line 756 "ml_call_gen.m"
                    {
#line 756 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_64_64));
#line 756 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_call_gen__ValueType_35));
#line 756 "ml_call_gen.m"
                    }
#line 757 "ml_call_gen.m"
                    {
#line 757 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_call_gen__ValueLval_33));
#line 757 "ml_call_gen.m"
                    }
#line 755 "ml_call_gen.m"
                    {
#line 755 "ml_call_gen.m"
                      ml_backend__ml_call_gen__Statement_72 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__V_63_63, ml_backend__ml_call_gen__V_65_65, ml_backend__ml_call_gen__Context_14);
                    }
#line 758 "ml_call_gen.m"
                    {
#line 758 "ml_call_gen.m"
                      MR_Word base;
#line 758 "ml_call_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__Statements_16 = base;
#line 758 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_72));
#line 758 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "ml_call_gen.m"
                    }
#line 757 "ml_call_gen.m"
                  }
#line 754 "ml_call_gen.m"
                }
#line 754 "ml_call_gen.m"
              else
#line 760 "ml_call_gen.m"
                {
#line 760 "ml_call_gen.m"
                  {
#line 760 "ml_call_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed ref_assign");
#line 760 "ml_call_gen.m"
                    return;
                  }
#line 760 "ml_call_gen.m"
                }
#line 753 "ml_call_gen.m"
            }
#line 752 "ml_call_gen.m"
            break;
#line 752 "ml_call_gen.m"
          case (MR_Integer) 2:
#line 763 "ml_call_gen.m"
            {
#line 764 "ml_call_gen.m"
              {
#line 764 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
#line 764 "ml_call_gen.m"
                return;
              }
#line 763 "ml_call_gen.m"
            }
#line 752 "ml_call_gen.m"
            break;
#line 752 "ml_call_gen.m"
          case (MR_Integer) 3:
#line 767 "ml_call_gen.m"
            *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 752 "ml_call_gen.m"
            break;
#line 752 "ml_call_gen.m"
        }
#line 769 "ml_call_gen.m"
        break;
#line 769 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 790 "ml_call_gen.m"
        {
#line 791 "ml_call_gen.m"
          {
#line 791 "ml_call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
#line 791 "ml_call_gen.m"
            return;
          }
#line 790 "ml_call_gen.m"
        }
#line 769 "ml_call_gen.m"
        break;
#line 769 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 776 "ml_call_gen.m"
#line 776 "ml_call_gen.m"
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
#line 776 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 776 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 781 "ml_call_gen.m"
            {
#line 782 "ml_call_gen.m"
              {
#line 782 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 782 "ml_call_gen.m"
                return;
              }
#line 781 "ml_call_gen.m"
            }
#line 776 "ml_call_gen.m"
            break;
#line 776 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 777 "ml_call_gen.m"
            {
#line 778 "ml_call_gen.m"
              {
#line 778 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 778 "ml_call_gen.m"
                return;
              }
#line 777 "ml_call_gen.m"
            }
#line 776 "ml_call_gen.m"
            break;
#line 776 "ml_call_gen.m"
          case (MR_Integer) 2:
#line 772 "ml_call_gen.m"
            {
#line 772 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__SimpleTest_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 772 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__TestRval_39;
#line 772 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Statement_75;

#line 773 "ml_call_gen.m"
              {
#line 773 "ml_call_gen.m"
                ml_backend__ml_call_gen__TestRval_39 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleTest_38);
              }
#line 774 "ml_call_gen.m"
              {
#line 774 "ml_call_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__TestRval_39, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Statement_75);
              }
#line 775 "ml_call_gen.m"
              {
#line 775 "ml_call_gen.m"
                MR_Word base;
#line 775 "ml_call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_16 = base;
#line 775 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_75));
#line 775 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "ml_call_gen.m"
              }
#line 772 "ml_call_gen.m"
            }
#line 776 "ml_call_gen.m"
            break;
#line 776 "ml_call_gen.m"
          case (MR_Integer) 3:
#line 785 "ml_call_gen.m"
            {
#line 786 "ml_call_gen.m"
              {
#line 786 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 786 "ml_call_gen.m"
                return;
              }
#line 785 "ml_call_gen.m"
            }
#line 776 "ml_call_gen.m"
            break;
#line 776 "ml_call_gen.m"
        }
#line 769 "ml_call_gen.m"
        break;
#line 769 "ml_call_gen.m"
    }
#line 793 "ml_call_gen.m"
    *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "ml_call_gen.m"
    *ml_backend__ml_call_gen__STATE_VARIABLE_Info_46 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45;
#line 728 "ml_call_gen.m"
  }
#line 61 "ml_call_gen.m"
}

#line 399 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
#line 399 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 399 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 399 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 399 "ml_call_gen.m"
{
#line 399 "ml_call_gen.m"
  {
#line 399 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 399 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54;
#line 399 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55;
#line 399 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57;

#line 399 "ml_call_gen.m"
    {
#line 399 "ml_call_gen.m"
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__399__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54, &ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57);
    }
#line 399 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_LambdaHeadVar__1_54));
#line 399 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_LambdaHeadVar__2_55));
#line 399 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_LambdaHeadVar__4_57));
#line 399 "ml_call_gen.m"
  }
#line 399 "ml_call_gen.m"
}

#line 394 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
#line 394 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 394 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 394 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 394 "ml_call_gen.m"
{
#line 394 "ml_call_gen.m"
  {
#line 394 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 394 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
#line 394 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv1_Statements_22;
#line 394 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

#line 394 "ml_call_gen.m"
    {
#line 394 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Statements_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    }
#line 394 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
#line 394 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Statements_22));
#line 394 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
#line 394 "ml_call_gen.m"
  }
#line 394 "ml_call_gen.m"
}

#line 54 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0(
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_13,
#line 54 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_14,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgNames_15,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgLvals_16,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ActualArgTypes_17,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_20,
#line 54 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 54 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 54 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48,
#line 54 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_49)
#line 54 "ml_call_gen.m"
{
#line 353 "ml_call_gen.m"
  {
#line 353 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_24;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_25;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_26;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncRval_27;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredInfo_28;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ProcInfo_29;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredOrFunc_30;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredArgTypes_31;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgModes_32;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__InputRvals_33;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputLvals_34;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputTypes_35;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_36;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ObjectRval_38;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Detism_39;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50;
#line 353 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52;

#line 355 "ml_call_gen.m"
    {
#line 355 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__ModuleInfo_24);
    }
#line 356 "ml_call_gen.m"
    {
#line 356 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params_25 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14);
    }
#line 357 "ml_call_gen.m"
    {
#line 357 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_26 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_25);
    }
#line 360 "ml_call_gen.m"
    {
#line 360 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__FuncRval_27, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50);
    }
#line 363 "ml_call_gen.m"
    {
#line 363 "ml_call_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__ProcInfo_29);
    }
#line 364 "ml_call_gen.m"
    {
#line 364 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_call_gen__PredInfo_28);
    }
#line 365 "ml_call_gen.m"
    {
#line 365 "ml_call_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__PredArgTypes_31);
    }
#line 366 "ml_call_gen.m"
    {
#line 366 "ml_call_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__ArgModes_32);
    }
#line 371 "ml_call_gen.m"
    {
#line 371 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_15, ml_backend__ml_call_gen__ArgLvals_16, ml_backend__ml_call_gen__ActualArgTypes_17, ml_backend__ml_call_gen__PredArgTypes_31, ml_backend__ml_call_gen__ArgModes_32, ml_backend__ml_call_gen__PredOrFunc_30, ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__ForClosureWrapper_20, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_33, &ml_backend__ml_call_gen__OutputLvals_34, &ml_backend__ml_call_gen__OutputTypes_35, &ml_backend__ml_call_gen__ConvArgDecls_36, &ml_backend__ml_call_gen__ConvOutputStatements_37, ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52);
    }
#line 376 "ml_call_gen.m"
    ml_backend__ml_call_gen__ObjectRval_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "ml_call_gen.m"
    {
#line 377 "ml_call_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__Detism_39);
    }
#line 380 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 381 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStatements_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 385 "ml_call_gen.m"
      {
#line 385 "ml_call_gen.m"
        ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_26, ml_backend__ml_call_gen__ObjectRval_38, ml_backend__ml_call_gen__FuncRval_27, ml_backend__ml_call_gen__InputRvals_33, ml_backend__ml_call_gen__OutputLvals_34, ml_backend__ml_call_gen__OutputTypes_35, ml_backend__ml_call_gen__Detism_39, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__Decls_21, ml_backend__ml_call_gen__Statements_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
      }
#line 379 "ml_call_gen.m"
    else
#line 395 "ml_call_gen.m"
      {
#line 395 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenCall_40;
#line 395 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41;
#line 395 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_46;

#line 394 "ml_call_gen.m"
        {
#line 394 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenCall_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[0]));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_1));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_26));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_38));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_27));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 6) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_33));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_34));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_35));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 9) = ((MR_Box) (ml_backend__ml_call_gen__Detism_39));
#line 394 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
#line 394 "ml_call_gen.m"
        }
#line 399 "ml_call_gen.m"
        {
#line 399 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_2));
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 3) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_18));
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 4) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
#line 399 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStatements_37));
#line 399 "ml_call_gen.m"
        }
#line 410 "ml_call_gen.m"
        {
#line 410 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__DoGenCall_40, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, &ml_backend__ml_call_gen__CallAndConvOutputDecls_46, ml_backend__ml_call_gen__Statements_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
        }
#line 413 "ml_call_gen.m"
        {
#line 413 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ConvArgDecls_36, ml_backend__ml_call_gen__CallAndConvOutputDecls_46);
        }
#line 395 "ml_call_gen.m"
      }
#line 353 "ml_call_gen.m"
  }
#line 54 "ml_call_gen.m"
}

#line 37 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 37 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 37 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 37 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28,
#line 37 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_29)
#line 37 "ml_call_gen.m"
{
#line 122 "ml_call_gen.m"
  {
#line 122 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 122 "ml_call_gen.m"
#line 122 "ml_call_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) {
#line 122 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 122 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 123 "ml_call_gen.m"
        {
#line 123 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
        }
#line 122 "ml_call_gen.m"
        break;
#line 122 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 127 "ml_call_gen.m"
        {
#line 127 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
        }
#line 122 "ml_call_gen.m"
        break;
#line 122 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 130 "ml_call_gen.m"
        {
#line 132 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28;
#line 130 "ml_call_gen.m"
        }
#line 122 "ml_call_gen.m"
        break;
#line 122 "ml_call_gen.m"
      case (MR_Integer) 3:
#line 136 "ml_call_gen.m"
        {
#line 136 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cast_6_p_0(ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
        }
#line 122 "ml_call_gen.m"
        break;
#line 122 "ml_call_gen.m"
    }
#line 122 "ml_call_gen.m"
  }
#line 37 "ml_call_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_call_gen. */
