/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version DEV
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 157 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 160 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0;

#line 163 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 166 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 169 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__260__1_7_p_0(
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__4_128,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__5_129,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__6_130,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__7_131);

#line 393 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__393__1_7_p_0(
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__4_54,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__5_55,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__6_56,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__7_57);

#line 789 "ml_call_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
#line 789 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1);

#line 602 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarNames_18,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Modes_22,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_25,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
#line 602 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);

#line 568 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
#line 568 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_5,
#line 568 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6);

#line 543 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(
#line 543 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 543 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
#line 543 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3);

#line 481 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_10,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Cont_11,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);

#line 415 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Signature_13,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Detism_19,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_20,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
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

#line 254 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
#line 254 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 254 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

#line 137 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);

#line 393 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
#line 393 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 393 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4);

#line 388 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
#line 388 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 388 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 388 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 388 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 388 "ml_call_gen.m"
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



#line 548 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 556 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 564 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

#line 572 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 580 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 588 "ml_backend.ml_call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_call_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__260__1_7_p_0(
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__4_128,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__5_129,
#line 260 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__6_130,
#line 260 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__7_131)
#line 260 "ml_call_gen.m"
{
#line 260 "ml_call_gen.m"
  {
#line 260 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SucceedStmts_75;

#line 263 "ml_call_gen.m"
    *ml_backend__ml_call_gen__HeadVar__4_128 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "ml_call_gen.m"
    {
#line 264 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__SucceedStmts_75, ml_backend__ml_call_gen__HeadVar__6_130, ml_backend__ml_call_gen__HeadVar__7_131);
    }
#line 265 "ml_call_gen.m"
    {
#line 265 "ml_call_gen.m"
      *ml_backend__ml_call_gen__HeadVar__5_129 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ConvOutputStatements_65, ml_backend__ml_call_gen__SucceedStmts_75);
    }
#line 260 "ml_call_gen.m"
  }
#line 260 "ml_call_gen.m"
}

#line 393 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__393__1_7_p_0(
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__4_54,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__5_55,
#line 393 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__6_56,
#line 393 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__7_57)
#line 393 "ml_call_gen.m"
{
#line 393 "ml_call_gen.m"
  {
#line 393 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 393 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SucceedStmts_45;

#line 396 "ml_call_gen.m"
    *ml_backend__ml_call_gen__HeadVar__4_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 397 "ml_call_gen.m"
    {
#line 397 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, &ml_backend__ml_call_gen__SucceedStmts_45, ml_backend__ml_call_gen__HeadVar__6_56, ml_backend__ml_call_gen__HeadVar__7_57);
    }
#line 398 "ml_call_gen.m"
    {
#line 398 "ml_call_gen.m"
      *ml_backend__ml_call_gen__HeadVar__5_55 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ConvOutputStatements_37, ml_backend__ml_call_gen__SucceedStmts_45);
    }
#line 393 "ml_call_gen.m"
  }
#line 393 "ml_call_gen.m"
}

#line 789 "ml_call_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(
#line 789 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1)
#line 789 "ml_call_gen.m"
{
#line 791 "ml_call_gen.m"
  {
#line 791 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 791 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__HeadVar__2_2;

#line 791 "ml_call_gen.m"
#line 791 "ml_call_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__HeadVar__1_1)) {
#line 791 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 791 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 791 "ml_call_gen.m"
        {
#line 791 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 791 "ml_call_gen.m"
          {
#line 791 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 791 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_call_gen__Lval_3));
#line 791 "ml_call_gen.m"
          }
#line 791 "ml_call_gen.m"
        }
#line 791 "ml_call_gen.m"
        break;
#line 791 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 792 "ml_call_gen.m"
        {
#line 792 "ml_call_gen.m"
          MR_Integer ml_backend__ml_call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 792 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_5_5;

#line 792 "ml_call_gen.m"
          {
#line 792 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "ml_call_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__V_5_5, 0) = ((MR_Box) (ml_backend__ml_call_gen__Int_4));
#line 792 "ml_call_gen.m"
          }
#line 792 "ml_call_gen.m"
          {
#line 792 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 792 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_5_5));
#line 792 "ml_call_gen.m"
          }
#line 792 "ml_call_gen.m"
        }
#line 791 "ml_call_gen.m"
        break;
#line 791 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 793 "ml_call_gen.m"
        {
#line 793 "ml_call_gen.m"
          MR_Float ml_backend__ml_call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 793 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_7_7;

#line 793 "ml_call_gen.m"
          {
#line 793 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_7_7, 1) = MR_box_float(ml_backend__ml_call_gen__Float_6);
#line 793 "ml_call_gen.m"
          }
#line 793 "ml_call_gen.m"
          {
#line 793 "ml_call_gen.m"
            ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 793 "ml_call_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_7_7));
#line 793 "ml_call_gen.m"
          }
#line 793 "ml_call_gen.m"
        }
#line 791 "ml_call_gen.m"
        break;
#line 791 "ml_call_gen.m"
      case (MR_Integer) 3:
#line 791 "ml_call_gen.m"
#line 791 "ml_call_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 791 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 791 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 794 "ml_call_gen.m"
            {
#line 794 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Op_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 794 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 794 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_10_10;
#line 794 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_11_11;

#line 795 "ml_call_gen.m"
              {
#line 795 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 795 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_10_10, 0) = ((MR_Box) (ml_backend__ml_call_gen__Op_8));
#line 795 "ml_call_gen.m"
              }
#line 795 "ml_call_gen.m"
              {
#line 795 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_11_11 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__Expr_9);
              }
#line 795 "ml_call_gen.m"
              {
#line 795 "ml_call_gen.m"
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 795 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 795 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_10_10));
#line 795 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_11_11));
#line 795 "ml_call_gen.m"
              }
#line 794 "ml_call_gen.m"
            }
#line 791 "ml_call_gen.m"
            break;
#line 791 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 796 "ml_call_gen.m"
            {
#line 796 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 796 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 796 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 796 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_15_15;
#line 796 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_16_16;

#line 797 "ml_call_gen.m"
              {
#line 797 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_15_15 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprA_13);
              }
#line 797 "ml_call_gen.m"
              {
#line 797 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_16_16 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__ExprB_14);
              }
#line 797 "ml_call_gen.m"
              {
#line 797 "ml_call_gen.m"
                ml_backend__ml_call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 1) = ((MR_Box) (ml_backend__ml_call_gen__Op_12));
#line 797 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_15_15));
#line 797 "ml_call_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__HeadVar__2_2, 3) = ((MR_Box) (ml_backend__ml_call_gen__V_16_16));
#line 797 "ml_call_gen.m"
              }
#line 796 "ml_call_gen.m"
            }
#line 791 "ml_call_gen.m"
            break;
#line 791 "ml_call_gen.m"
        }
#line 791 "ml_call_gen.m"
        break;
#line 791 "ml_call_gen.m"
    }
#line 791 "ml_call_gen.m"
    return ml_backend__ml_call_gen__HeadVar__2_2;
#line 791 "ml_call_gen.m"
  }
#line 789 "ml_call_gen.m"
}

#line 602 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarNames_18,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__VarLvals_19,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CallerTypes_20,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CalleeTypes_21,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Modes_22,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredOrFunc_23,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_24,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_25,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_26,
#line 602 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_27,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61,
#line 602 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62,
#line 602 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_63)
#line 602 "ml_call_gen.m"
{
#line 625 "ml_call_gen.m"
  {
#line 625 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 614 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 614 "ml_call_gen.m"
      {
#line 615 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarLvals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 614 "ml_call_gen.m"
          {
#line 616 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CallerTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 614 "ml_call_gen.m"
              {
#line 617 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CalleeTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 618 "ml_call_gen.m"
                  ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Modes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "ml_call_gen.m"
              }
#line 614 "ml_call_gen.m"
          }
#line 614 "ml_call_gen.m"
      }
#line 625 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 620 "ml_call_gen.m"
      {
#line 620 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 621 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62;
#line 620 "ml_call_gen.m"
      }
#line 625 "ml_call_gen.m"
    else
#line 703 "ml_call_gen.m"
      {
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarName_34;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarNamesTail_35;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarLval_36;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__VarLvalsTail_37;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallerType_38;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallerTypesTail_39;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CalleeType_40;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CalleeTypesTail_41;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Mode_42;
#line 703 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ModesTail_43;

#line 626 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarNames_18)) == (MR_mktag((MR_Integer) 1)));
#line 626 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 626 "ml_call_gen.m"
          {
#line 626 "ml_call_gen.m"
            ml_backend__ml_call_gen__VarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 0)));
#line 626 "ml_call_gen.m"
            ml_backend__ml_call_gen__VarNamesTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarNames_18, (MR_Integer) 1)));
#line 627 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarLvals_19)) == (MR_mktag((MR_Integer) 1)));
#line 627 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 627 "ml_call_gen.m"
              {
#line 627 "ml_call_gen.m"
                ml_backend__ml_call_gen__VarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 0)));
#line 627 "ml_call_gen.m"
                ml_backend__ml_call_gen__VarLvalsTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarLvals_19, (MR_Integer) 1)));
#line 628 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CallerTypes_20)) == (MR_mktag((MR_Integer) 1)));
#line 628 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 628 "ml_call_gen.m"
                  {
#line 628 "ml_call_gen.m"
                    ml_backend__ml_call_gen__CallerType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 0)));
#line 628 "ml_call_gen.m"
                    ml_backend__ml_call_gen__CallerTypesTail_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CallerTypes_20, (MR_Integer) 1)));
#line 629 "ml_call_gen.m"
                    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__CalleeTypes_21)) == (MR_mktag((MR_Integer) 1)));
#line 629 "ml_call_gen.m"
                    if (ml_backend__ml_call_gen__succeeded)
#line 629 "ml_call_gen.m"
                      {
#line 629 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CalleeType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 0)));
#line 629 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CalleeTypesTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__CalleeTypes_21, (MR_Integer) 1)));
#line 630 "ml_call_gen.m"
                        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Modes_22)) == (MR_mktag((MR_Integer) 1)));
#line 630 "ml_call_gen.m"
                        if (ml_backend__ml_call_gen__succeeded)
#line 630 "ml_call_gen.m"
                          {
#line 630 "ml_call_gen.m"
                            ml_backend__ml_call_gen__Mode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 0)));
#line 630 "ml_call_gen.m"
                            ml_backend__ml_call_gen__ModesTail_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__Modes_22, (MR_Integer) 1)));
#line 630 "ml_call_gen.m"
                          }
#line 629 "ml_call_gen.m"
                      }
#line 628 "ml_call_gen.m"
                  }
#line 627 "ml_call_gen.m"
              }
#line 626 "ml_call_gen.m"
          }
#line 703 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 635 "ml_call_gen.m"
          {
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ModuleInfo_44;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgMode_45;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__CalleeIsDummy_46;
#line 635 "ml_call_gen.m"
            MR_Integer ml_backend__ml_call_gen__V_69_69 = (ml_backend__ml_call_gen__ArgNum_27 + (MR_Integer) 1);
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 635 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;

#line 632 "ml_call_gen.m"
            {
#line 632 "ml_call_gen.m"
              ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__VarNamesTail_35, ml_backend__ml_call_gen__VarLvalsTail_37, ml_backend__ml_call_gen__CallerTypesTail_39, ml_backend__ml_call_gen__CalleeTypesTail_41, ml_backend__ml_call_gen__ModesTail_43, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__V_69_69, &ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71, &ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73, &ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_62, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75);
            }
#line 636 "ml_call_gen.m"
            {
#line 636 "ml_call_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, &ml_backend__ml_call_gen__ModuleInfo_44);
            }
#line 637 "ml_call_gen.m"
            {
#line 637 "ml_call_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__Mode_42, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__ArgMode_45);
            }
#line 638 "ml_call_gen.m"
            {
#line 638 "ml_call_gen.m"
              ml_backend__ml_call_gen__CalleeIsDummy_46 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CalleeType_40);
            }
#line 642 "ml_call_gen.m"
#line 642 "ml_call_gen.m"
            switch (ml_backend__ml_call_gen__CalleeIsDummy_46) {
#line 642 "ml_call_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 642 "ml_call_gen.m"
              case (MR_Integer) 0:
#line 640 "ml_call_gen.m"
                {
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 640 "ml_call_gen.m"
                  *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 640 "ml_call_gen.m"
                }
#line 642 "ml_call_gen.m"
                break;
#line 642 "ml_call_gen.m"
              case (MR_Integer) 1:
#line 647 "ml_call_gen.m"
#line 647 "ml_call_gen.m"
                switch (ml_backend__ml_call_gen__ArgMode_45) {
#line 647 "ml_call_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 647 "ml_call_gen.m"
                  case (MR_Integer) 0:
#line 648 "ml_call_gen.m"
                    {
#line 648 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__CallerIsDummy_47;
#line 648 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__VarRval_48;
#line 648 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ArgRval_49;

#line 650 "ml_call_gen.m"
                      {
#line 650 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CallerIsDummy_47 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38);
                      }
#line 658 "ml_call_gen.m"
#line 658 "ml_call_gen.m"
                      switch (ml_backend__ml_call_gen__CallerIsDummy_47) {
#line 658 "ml_call_gen.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 658 "ml_call_gen.m"
                        case (MR_Integer) 0:
#line 652 "ml_call_gen.m"
                          {
#line 657 "ml_call_gen.m"
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_call_gen_scalar_common_1[4]);
#line 652 "ml_call_gen.m"
                          }
#line 658 "ml_call_gen.m"
                          break;
#line 658 "ml_call_gen.m"
                        case (MR_Integer) 1:
#line 660 "ml_call_gen.m"
                          {
#line 660 "ml_call_gen.m"
                            ml_backend__ml_call_gen__VarRval_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 660 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__VarRval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__VarLval_36));
#line 660 "ml_call_gen.m"
                          }
#line 658 "ml_call_gen.m"
                          break;
#line 658 "ml_call_gen.m"
                      }
#line 662 "ml_call_gen.m"
                      {
#line 662 "ml_call_gen.m"
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_44, ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarRval_48, &ml_backend__ml_call_gen__ArgRval_49);
                      }
#line 664 "ml_call_gen.m"
                      {
#line 664 "ml_call_gen.m"
                        MR_Word base;
#line 664 "ml_call_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
#line 664 "ml_call_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgRval_49));
#line 664 "ml_call_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
#line 664 "ml_call_gen.m"
                      }
#line 648 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 648 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 648 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 648 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 648 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 648 "ml_call_gen.m"
                    }
#line 647 "ml_call_gen.m"
                    break;
#line 647 "ml_call_gen.m"
                  case (MR_Integer) 1:
#line 666 "ml_call_gen.m"
                    {
#line 666 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ArgLval_50;
#line 666 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ThisArgConvDecls_51;
#line 666 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__ThisArgConvOutput_53;
#line 666 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__Globals_54;
#line 666 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen__CopyOut_55;
#line 668 "ml_call_gen.m"
                      MR_Word ml_backend__ml_call_gen___ThisArgConvInput_52;

#line 668 "ml_call_gen.m"
                      {
#line 668 "ml_call_gen.m"
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_call_gen__CallerType_38, ml_backend__ml_call_gen__CalleeType_40, (MR_Integer) 0, ml_backend__ml_call_gen__VarLval_36, ml_backend__ml_call_gen__VarName_34, ml_backend__ml_call_gen__Context_25, ml_backend__ml_call_gen__ForClosureWrapper_26, ml_backend__ml_call_gen__ArgNum_27, &ml_backend__ml_call_gen__ArgLval_50, &ml_backend__ml_call_gen__ThisArgConvDecls_51, &ml_backend__ml_call_gen___ThisArgConvInput_52, &ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75, ml_backend__ml_call_gen__STATE_VARIABLE_Info_63);
                      }
#line 672 "ml_call_gen.m"
                      {
#line 672 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ThisArgConvDecls_51, ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73);
                      }
#line 673 "ml_call_gen.m"
                      {
#line 673 "ml_call_gen.m"
                        *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__ThisArgConvOutput_53, ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74);
                      }
#line 676 "ml_call_gen.m"
                      {
#line 676 "ml_call_gen.m"
                        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, &ml_backend__ml_call_gen__Globals_54);
                      }
#line 677 "ml_call_gen.m"
                      {
#line 677 "ml_call_gen.m"
                        ml_backend__ml_call_gen__CopyOut_55 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_call_gen__Globals_54, ml_backend__ml_call_gen__CodeModel_24);
                      }
#line 682 "ml_call_gen.m"
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CopyOut_55 == (MR_Integer) 1);
#line 683 "ml_call_gen.m"
                      if (!(ml_backend__ml_call_gen__succeeded))
#line 687 "ml_call_gen.m"
                        {
#line 687 "ml_call_gen.m"
                          ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__VarNamesTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "ml_call_gen.m"
                          if (ml_backend__ml_call_gen__succeeded)
#line 687 "ml_call_gen.m"
                            {
#line 688 "ml_call_gen.m"
                              ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__CodeModel_24 == (MR_Integer) 0);
#line 687 "ml_call_gen.m"
                              if (ml_backend__ml_call_gen__succeeded)
#line 689 "ml_call_gen.m"
                                ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__PredOrFunc_23 == (MR_Integer) 1);
#line 687 "ml_call_gen.m"
                            }
#line 687 "ml_call_gen.m"
                        }
#line 696 "ml_call_gen.m"
                      if (ml_backend__ml_call_gen__succeeded)
#line 693 "ml_call_gen.m"
                        {
#line 693 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__OutputType_56;

#line 693 "ml_call_gen.m"
                          {
#line 693 "ml_call_gen.m"
                            MR_Word base;
#line 693 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = base;
#line 693 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
#line 693 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71));
#line 693 "ml_call_gen.m"
                          }
#line 694 "ml_call_gen.m"
                          {
#line 694 "ml_call_gen.m"
                            ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_63, ml_backend__ml_call_gen__CalleeType_40, &ml_backend__ml_call_gen__OutputType_56);
                          }
#line 695 "ml_call_gen.m"
                          {
#line 695 "ml_call_gen.m"
                            MR_Word base;
#line 695 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = base;
#line 695 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__OutputType_56));
#line 695 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72));
#line 695 "ml_call_gen.m"
                          }
#line 693 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 693 "ml_call_gen.m"
                        }
#line 696 "ml_call_gen.m"
                      else
#line 699 "ml_call_gen.m"
                        {
#line 699 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__V_84_84;
#line 713 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__Rval_95;
#line 714 "ml_call_gen.m"
                          MR_Word ml_backend__ml_call_gen__V_96_96;

#line 714 "ml_call_gen.m"
                          ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLval_50)) == (MR_mktag((MR_Integer) 1)));
#line 714 "ml_call_gen.m"
                          if (ml_backend__ml_call_gen__succeeded)
#line 714 "ml_call_gen.m"
                            {
#line 714 "ml_call_gen.m"
                              ml_backend__ml_call_gen__Rval_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 0)));
#line 714 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLval_50, (MR_Integer) 1)));
#line 714 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_84_84 = ml_backend__ml_call_gen__Rval_95;
#line 714 "ml_call_gen.m"
                            }
#line 714 "ml_call_gen.m"
                          else
#line 714 "ml_call_gen.m"
                            {
#line 714 "ml_call_gen.m"
                              ml_backend__ml_call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "ml_call_gen.m"
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 714 "ml_call_gen.m"
                              MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_50));
#line 714 "ml_call_gen.m"
                            }
#line 699 "ml_call_gen.m"
                          {
#line 699 "ml_call_gen.m"
                            MR_Word base;
#line 699 "ml_call_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "ml_call_gen.m"
                            *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = base;
#line 699 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_84_84));
#line 699 "ml_call_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70));
#line 699 "ml_call_gen.m"
                          }
#line 699 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 699 "ml_call_gen.m"
                          *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 699 "ml_call_gen.m"
                        }
#line 666 "ml_call_gen.m"
                    }
#line 647 "ml_call_gen.m"
                    break;
#line 647 "ml_call_gen.m"
                  case (MR_Integer) 2:
#line 645 "ml_call_gen.m"
                    {
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_57 = ml_backend__ml_call_gen__STATE_VARIABLE_InputRvals_70_70;
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_58 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputLvals_71_71;
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_59 = ml_backend__ml_call_gen__STATE_VARIABLE_OutputTypes_72_72;
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_60 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvDecls_73_73;
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_61 = ml_backend__ml_call_gen__STATE_VARIABLE_ConvOutputStatements_74_74;
#line 645 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__STATE_VARIABLE_Info_63 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_75_75;
#line 645 "ml_call_gen.m"
                    }
#line 647 "ml_call_gen.m"
                    break;
#line 647 "ml_call_gen.m"
                }
#line 642 "ml_call_gen.m"
                break;
#line 642 "ml_call_gen.m"
            }
#line 635 "ml_call_gen.m"
          }
#line 703 "ml_call_gen.m"
        else
#line 704 "ml_call_gen.m"
          {
#line 704 "ml_call_gen.m"
            {
#line 704 "ml_call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_arg_list\'/17", (MR_String) "length mismatch");
#line 704 "ml_call_gen.m"
              return;
            }
#line 704 "ml_call_gen.m"
          }
#line 703 "ml_call_gen.m"
      }
#line 625 "ml_call_gen.m"
  }
#line 602 "ml_call_gen.m"
}

#line 568 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__2_2,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__3_3,
#line 568 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_4,
#line 568 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_5,
#line 568 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__6_6)
#line 568 "ml_call_gen.m"
{
#line 572 "ml_call_gen.m"
  {
#line 572 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 572 "ml_call_gen.m"
    if ((ml_backend__ml_call_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "ml_call_gen.m"
      if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "ml_call_gen.m"
        *ml_backend__ml_call_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "ml_call_gen.m"
      else
#line 580 "ml_call_gen.m"
        {
#line 581 "ml_call_gen.m"
          {
#line 581 "ml_call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_2\'/6", (MR_String) "length mismatch");
#line 581 "ml_call_gen.m"
            return;
          }
#line 580 "ml_call_gen.m"
        }
#line 572 "ml_call_gen.m"
    else
#line 572 "ml_call_gen.m"
      {
#line 572 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 572 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 572 "ml_call_gen.m"
        if ((ml_backend__ml_call_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "ml_call_gen.m"
          {
#line 583 "ml_call_gen.m"
            {
#line 583 "ml_call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_2\'/6", (MR_String) "length mismatch");
#line 583 "ml_call_gen.m"
              return;
            }
#line 582 "ml_call_gen.m"
          }
#line 572 "ml_call_gen.m"
        else
#line 574 "ml_call_gen.m"
          {
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Statement_17;
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__Statements_18;
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgName_19;
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__ArgLval_20;
#line 574 "ml_call_gen.m"
            MR_Word ml_backend__ml_call_gen__V_21_21;
#line 574 "ml_call_gen.m"
            MR_Integer ml_backend__ml_call_gen__V_22_22;
#line 574 "ml_call_gen.m"
            MR_String ml_backend__ml_call_gen__ArgName_45;
#line 574 "ml_call_gen.m"
            MR_String ml_backend__ml_call_gen__V_51_51;

#line 588 "ml_call_gen.m"
            {
#line 588 "ml_call_gen.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ArgNum_4, &ml_backend__ml_call_gen__V_51_51);
            }
#line 588 "ml_call_gen.m"
            {
#line 588 "ml_call_gen.m"
              ml_backend__ml_call_gen__ArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "arg", ml_backend__ml_call_gen__V_51_51);
            }
#line 587 "ml_call_gen.m"
            {
#line 587 "ml_call_gen.m"
              ml_backend__ml_call_gen__ArgName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "ml_call_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_19, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_45));
#line 587 "ml_call_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "ml_call_gen.m"
            }
#line 576 "ml_call_gen.m"
            {
#line 576 "ml_call_gen.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__ArgName_19, ml_backend__ml_call_gen__Type_13, &ml_backend__ml_call_gen__ArgLval_20);
            }
#line 577 "ml_call_gen.m"
            {
#line 577 "ml_call_gen.m"
              ml_backend__ml_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_21_21, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgLval_20));
#line 577 "ml_call_gen.m"
            }
#line 577 "ml_call_gen.m"
            {
#line 577 "ml_call_gen.m"
              ml_backend__ml_call_gen__Statement_17 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__V_43_43, ml_backend__ml_call_gen__V_21_21, ml_backend__ml_call_gen__Context_5);
            }
#line 578 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_22_22 = (ml_backend__ml_call_gen__ArgNum_4 + (MR_Integer) 1);
#line 578 "ml_call_gen.m"
            {
#line 578 "ml_call_gen.m"
              ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(ml_backend__ml_call_gen__HeadVar__1_1, ml_backend__ml_call_gen__V_42_42, ml_backend__ml_call_gen__Types_14, ml_backend__ml_call_gen__V_22_22, ml_backend__ml_call_gen__Context_5, &ml_backend__ml_call_gen__Statements_18);
            }
#line 574 "ml_call_gen.m"
            {
#line 574 "ml_call_gen.m"
              MR_Word base;
#line 574 "ml_call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "ml_call_gen.m"
              *ml_backend__ml_call_gen__HeadVar__6_6 = base;
#line 574 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_17));
#line 574 "ml_call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Statements_18));
#line 574 "ml_call_gen.m"
            }
#line 574 "ml_call_gen.m"
          }
#line 572 "ml_call_gen.m"
      }
#line 572 "ml_call_gen.m"
  }
#line 568 "ml_call_gen.m"
}

#line 543 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(
#line 543 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__HeadVar__1_1,
#line 543 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ArgNum_2,
#line 543 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__HeadVar__3_3)
#line 543 "ml_call_gen.m"
{
#line 546 "ml_call_gen.m"
  {
#line 546 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 546 "ml_call_gen.m"
    if ((ml_backend__ml_call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "ml_call_gen.m"
      *ml_backend__ml_call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "ml_call_gen.m"
    else
#line 547 "ml_call_gen.m"
      {
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Argument_8;
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Arguments_9;
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ArgName_10;
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_12_12;
#line 547 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_13_13;
#line 547 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__V_14_14;
#line 547 "ml_call_gen.m"
        MR_String ml_backend__ml_call_gen__ArgName_17;
#line 547 "ml_call_gen.m"
        MR_String ml_backend__ml_call_gen__V_23_23;

#line 588 "ml_call_gen.m"
        {
#line 588 "ml_call_gen.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ArgNum_2, &ml_backend__ml_call_gen__V_23_23);
        }
#line 588 "ml_call_gen.m"
        {
#line 588 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgName_17 = mercury__string__f_43_43_2_f_0((MR_String) "arg", ml_backend__ml_call_gen__V_23_23);
        }
#line 587 "ml_call_gen.m"
        {
#line 587 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgName_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_10, 0) = ((MR_Box) (ml_backend__ml_call_gen__ArgName_17));
#line 587 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ArgName_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "ml_call_gen.m"
        }
#line 555 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__ArgName_10);
#line 555 "ml_call_gen.m"
        {
#line 555 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_12_12, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_13_13));
#line 555 "ml_call_gen.m"
        }
#line 555 "ml_call_gen.m"
        {
#line 555 "ml_call_gen.m"
          ml_backend__ml_call_gen__Argument_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 555 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_12_12));
#line 555 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 1) = ((MR_Box) (ml_backend__ml_call_gen__Type_5));
#line 555 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Argument_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "ml_call_gen.m"
        }
#line 556 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_14_14 = (ml_backend__ml_call_gen__ArgNum_2 + (MR_Integer) 1);
#line 556 "ml_call_gen.m"
        {
#line 556 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(ml_backend__ml_call_gen__Types_6, ml_backend__ml_call_gen__V_14_14, &ml_backend__ml_call_gen__Arguments_9);
        }
#line 547 "ml_call_gen.m"
        {
#line 547 "ml_call_gen.m"
          MR_Word base;
#line 547 "ml_call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "ml_call_gen.m"
          *ml_backend__ml_call_gen__HeadVar__3_3 = base;
#line 547 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Argument_8));
#line 547 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Arguments_9));
#line 547 "ml_call_gen.m"
        }
#line 547 "ml_call_gen.m"
      }
#line 546 "ml_call_gen.m"
  }
#line 543 "ml_call_gen.m"
}

#line 481 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_8,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgLvals_9,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_10,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Cont_11,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__ContDecls_12,
#line 481 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29,
#line 481 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_30)
#line 481 "ml_call_gen.m"
{
#line 486 "ml_call_gen.m"
  {
#line 486 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 486 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentCont_14;
#line 486 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentContArgTypes_17;
#line 486 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CurrentContArgLvals_18;
#line 488 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen___FuncPtrRval_15;
#line 488 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen___EnvPtrRval_16;
#line 496 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__TypeInfo_41_41;

#line 487 "ml_call_gen.m"
    {
#line 487 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__CurrentCont_14);
    }
#line 488 "ml_call_gen.m"
    ml_backend__ml_call_gen___FuncPtrRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 0)));
#line 488 "ml_call_gen.m"
    ml_backend__ml_call_gen___EnvPtrRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 1)));
#line 488 "ml_call_gen.m"
    ml_backend__ml_call_gen__CurrentContArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 2)));
#line 488 "ml_call_gen.m"
    ml_backend__ml_call_gen__CurrentContArgLvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__CurrentCont_14, (MR_Integer) 3)));
#line 496 "ml_call_gen.m"
    {
#line 496 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgTypes_17)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8)));
    }
#line 496 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 496 "ml_call_gen.m"
      {
#line 1765 "ml_backend.ml_call_gen.c"
        ml_backend__ml_call_gen__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_call_gen_scalar_common_1[3];
#line 497 "ml_call_gen.m"
        {
#line 497 "ml_call_gen.m"
          ml_backend__ml_call_gen__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_call_gen__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_call_gen__CurrentContArgLvals_18)), ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9)));
        }
#line 496 "ml_call_gen.m"
      }
#line 501 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 499 "ml_call_gen.m"
      {
#line 499 "ml_call_gen.m"
        *ml_backend__ml_call_gen__Cont_11 = ml_backend__ml_call_gen__CurrentCont_14;
#line 500 "ml_call_gen.m"
        *ml_backend__ml_call_gen__ContDecls_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "ml_call_gen.m"
        *ml_backend__ml_call_gen__STATE_VARIABLE_Info_30 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29;
#line 499 "ml_call_gen.m"
      }
#line 501 "ml_call_gen.m"
    else
#line 510 "ml_call_gen.m"
      {
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__Params_19;
#line 510 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__ContFuncLabel_20;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ContFuncLabelRval_21;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CopyStatements_23;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallCont_24;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CopyStatement_25;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ContFuncDefn_26;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__EnvPtrRval_27;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_32_32;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_35_35;
#line 510 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_36_36;

#line 510 "ml_call_gen.m"
        {
#line 510 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cont_params_4_p_0(ml_backend__ml_call_gen__OutputArgTypes_8, &ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31);
        }
#line 511 "ml_call_gen.m"
        {
#line 511 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_32_32, 0) = ((MR_Box) (ml_backend__ml_call_gen__Params_19));
#line 511 "ml_call_gen.m"
        }
#line 511 "ml_call_gen.m"
        {
#line 511 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_call_gen__V_32_32, &ml_backend__ml_call_gen__ContFuncLabel_20, &ml_backend__ml_call_gen__ContFuncLabelRval_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_31_31, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33);
        }
#line 565 "ml_call_gen.m"
        {
#line 565 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__OutputArgLvals_9, ml_backend__ml_call_gen__OutputArgTypes_8, (MR_Integer) 1, ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CopyStatements_23);
        }
#line 516 "ml_call_gen.m"
        {
#line 516 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_call_gen__Context_10, &ml_backend__ml_call_gen__CallCont_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_33_33, ml_backend__ml_call_gen__STATE_VARIABLE_Info_30);
        }
#line 518 "ml_call_gen.m"
        {
#line 518 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_36_36, 0) = ((MR_Box) (ml_backend__ml_call_gen__CallCont_24));
#line 518 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "ml_call_gen.m"
        }
#line 518 "ml_call_gen.m"
        {
#line 518 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_call_gen__CopyStatements_23, ml_backend__ml_call_gen__V_36_36);
        }
#line 517 "ml_call_gen.m"
        {
#line 517 "ml_call_gen.m"
          ml_backend__ml_call_gen__CopyStatement_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__V_35_35, ml_backend__ml_call_gen__Context_10);
        }
#line 520 "ml_call_gen.m"
        {
#line 520 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, ml_backend__ml_call_gen__ContFuncLabel_20, ml_backend__ml_call_gen__Params_19, ml_backend__ml_call_gen__Context_10, ml_backend__ml_call_gen__CopyStatement_25, &ml_backend__ml_call_gen__ContFuncDefn_26);
        }
#line 522 "ml_call_gen.m"
        {
#line 522 "ml_call_gen.m"
          MR_Word base;
#line 522 "ml_call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "ml_call_gen.m"
          *ml_backend__ml_call_gen__ContDecls_12 = base;
#line 522 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncDefn_26));
#line 522 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "ml_call_gen.m"
        }
#line 524 "ml_call_gen.m"
        {
#line 524 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_30, &ml_backend__ml_call_gen__EnvPtrRval_27);
        }
#line 525 "ml_call_gen.m"
        {
#line 525 "ml_call_gen.m"
          MR_Word base;
#line 525 "ml_call_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Cont_11 = base;
#line 525 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__ContFuncLabelRval_21));
#line 525 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_27));
#line 525 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgTypes_8));
#line 525 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_call_gen__OutputArgLvals_9));
#line 525 "ml_call_gen.m"
        }
#line 510 "ml_call_gen.m"
      }
#line 486 "ml_call_gen.m"
  }
#line 481 "ml_call_gen.m"
}

#line 415 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Signature_13,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ObjectRval_14,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__FuncRval_15,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgRvals0_16,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetLvals0_17,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__RetTypes0_18,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Detism_19,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_20,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 415 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40,
#line 415 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_41)
#line 415 "ml_call_gen.m"
{
#line 422 "ml_call_gen.m"
  {
#line 422 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgRvals_32;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__RetLvals_35;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CallKind_37;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Stmt_38;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Statement_39;
#line 422 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_51_51;

#line 424 "ml_call_gen.m"
    {
#line 424 "ml_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Detism_19, &ml_backend__ml_call_gen__CodeModel_24);
    }
#line 452 "ml_call_gen.m"
#line 452 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__CodeModel_24) {
#line 452 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 452 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 460 "ml_call_gen.m"
        {
#line 461 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
#line 462 "ml_call_gen.m"
          ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
#line 463 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40;
#line 460 "ml_call_gen.m"
        }
#line 452 "ml_call_gen.m"
        break;
#line 452 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 426 "ml_call_gen.m"
        {
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Cont_25;
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__FuncPtrRval_27;
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__EnvPtrRval_28;
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__UseNestedFuncs_31;
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Globals_33;
#line 426 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__NondetCopyOut_34;
#line 431 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_29_29;
#line 431 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_30_30;

#line 428 "ml_call_gen.m"
          {
#line 428 "ml_call_gen.m"
            ml_backend__ml_call_gen__ml_gen_success_cont_7_p_0(ml_backend__ml_call_gen__RetTypes0_18, ml_backend__ml_call_gen__RetLvals0_17, ml_backend__ml_call_gen__Context_20, &ml_backend__ml_call_gen__Cont_25, ml_backend__ml_call_gen__Decls_21, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_call_gen__STATE_VARIABLE_Info_41);
          }
#line 431 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncPtrRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 0)));
#line 431 "ml_call_gen.m"
          ml_backend__ml_call_gen__EnvPtrRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 1)));
#line 431 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 2)));
#line 431 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Cont_25, (MR_Integer) 3)));
#line 432 "ml_call_gen.m"
          {
#line 432 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__UseNestedFuncs_31);
          }
#line 436 "ml_call_gen.m"
#line 436 "ml_call_gen.m"
          switch (ml_backend__ml_call_gen__UseNestedFuncs_31) {
#line 436 "ml_call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 436 "ml_call_gen.m"
            case (MR_Integer) 0:
#line 437 "ml_call_gen.m"
              {
#line 437 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_45_45;
#line 437 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_46_46;

#line 438 "ml_call_gen.m"
                {
#line 438 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrRval_28));
#line 438 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "ml_call_gen.m"
                }
#line 438 "ml_call_gen.m"
                {
#line 438 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_45_45, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
#line 438 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_45_45, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_46_46));
#line 438 "ml_call_gen.m"
                }
#line 438 "ml_call_gen.m"
                {
#line 438 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__V_45_45);
                }
#line 437 "ml_call_gen.m"
              }
#line 436 "ml_call_gen.m"
              break;
#line 436 "ml_call_gen.m"
            case (MR_Integer) 1:
#line 434 "ml_call_gen.m"
              {
#line 434 "ml_call_gen.m"
                MR_Word ml_backend__ml_call_gen__V_48_48;

#line 435 "ml_call_gen.m"
                {
#line 435 "ml_call_gen.m"
                  ml_backend__ml_call_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncPtrRval_27));
#line 435 "ml_call_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "ml_call_gen.m"
                }
#line 435 "ml_call_gen.m"
                {
#line 435 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ArgRvals_32 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_call_gen__ArgRvals0_16, ml_backend__ml_call_gen__V_48_48);
                }
#line 434 "ml_call_gen.m"
              }
#line 436 "ml_call_gen.m"
              break;
#line 436 "ml_call_gen.m"
          }
#line 442 "ml_call_gen.m"
          {
#line 442 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*ml_backend__ml_call_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_call_gen__Globals_33);
          }
#line 443 "ml_call_gen.m"
          {
#line 443 "ml_call_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_call_gen__Globals_33, (MR_Integer) 259, &ml_backend__ml_call_gen__NondetCopyOut_34);
          }
#line 447 "ml_call_gen.m"
#line 447 "ml_call_gen.m"
          switch (ml_backend__ml_call_gen__NondetCopyOut_34) {
#line 447 "ml_call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 447 "ml_call_gen.m"
            case (MR_Integer) 0:
#line 449 "ml_call_gen.m"
              ml_backend__ml_call_gen__RetLvals_35 = ml_backend__ml_call_gen__RetLvals0_17;
#line 447 "ml_call_gen.m"
              break;
#line 447 "ml_call_gen.m"
            case (MR_Integer) 1:
#line 446 "ml_call_gen.m"
              ml_backend__ml_call_gen__RetLvals_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "ml_call_gen.m"
              break;
#line 447 "ml_call_gen.m"
          }
#line 426 "ml_call_gen.m"
        }
#line 452 "ml_call_gen.m"
        break;
#line 452 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 453 "ml_call_gen.m"
        {
#line 453 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__Success_36;
#line 453 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_42_42;

#line 455 "ml_call_gen.m"
          {
#line 455 "ml_call_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_call_gen__Success_36);
          }
#line 456 "ml_call_gen.m"
          ml_backend__ml_call_gen__ArgRvals_32 = ml_backend__ml_call_gen__ArgRvals0_16;
#line 457 "ml_call_gen.m"
          {
#line 457 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_42_42, 0) = ((MR_Box) (ml_backend__ml_call_gen__Success_36));
#line 457 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "ml_call_gen.m"
          }
#line 457 "ml_call_gen.m"
          {
#line 457 "ml_call_gen.m"
            ml_backend__ml_call_gen__RetLvals_35 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__V_42_42, ml_backend__ml_call_gen__RetLvals0_17);
          }
#line 458 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_41 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_40;
#line 453 "ml_call_gen.m"
        }
#line 452 "ml_call_gen.m"
        break;
#line 452 "ml_call_gen.m"
    }
#line 471 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__Detism_19 == (MR_Integer) 6);
#line 473 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 472 "ml_call_gen.m"
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 0;
#line 473 "ml_call_gen.m"
    else
#line 474 "ml_call_gen.m"
      ml_backend__ml_call_gen__CallKind_37 = (MR_Integer) 2;
#line 476 "ml_call_gen.m"
    {
#line 476 "ml_call_gen.m"
      ml_backend__ml_call_gen__Stmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_13));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 2) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_15));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 3) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_14));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 4) = ((MR_Box) (ml_backend__ml_call_gen__ArgRvals_32));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 5) = ((MR_Box) (ml_backend__ml_call_gen__RetLvals_35));
#line 476 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Stmt_38, 6) = ((MR_Box) (ml_backend__ml_call_gen__CallKind_37));
#line 476 "ml_call_gen.m"
    }
#line 478 "ml_call_gen.m"
    {
#line 478 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_51_51 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_call_gen__Context_20);
    }
#line 478 "ml_call_gen.m"
    {
#line 478 "ml_call_gen.m"
      ml_backend__ml_call_gen__Statement_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Statement_39, 0) = ((MR_Box) (ml_backend__ml_call_gen__Stmt_38));
#line 478 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Statement_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_51_51));
#line 478 "ml_call_gen.m"
    }
#line 479 "ml_call_gen.m"
    {
#line 479 "ml_call_gen.m"
      MR_Word base;
#line 479 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Statements_22 = base;
#line 479 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_39));
#line 479 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "ml_call_gen.m"
    }
#line 422 "ml_call_gen.m"
  }
#line 415 "ml_call_gen.m"
}

#line 260 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2(
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
    MR_Word ml_backend__ml_call_gen__conv5_HeadVar__4_128;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv4_HeadVar__5_129;
#line 260 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv3_HeadVar__7_131;

#line 260 "ml_call_gen.m"
    {
#line 260 "ml_call_gen.m"
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__260__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_HeadVar__4_128, &ml_backend__ml_call_gen__conv4_HeadVar__5_129, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_HeadVar__7_131);
    }
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_HeadVar__4_128));
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_HeadVar__5_129));
#line 260 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_HeadVar__7_131));
#line 260 "ml_call_gen.m"
  }
#line 260 "ml_call_gen.m"
}

#line 254 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1(
#line 254 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 254 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 254 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 254 "ml_call_gen.m"
{
#line 254 "ml_call_gen.m"
  {
#line 254 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 254 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
#line 254 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv1_Statements_22;
#line 254 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

#line 254 "ml_call_gen.m"
    {
#line 254 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Statements_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    }
#line 254 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
#line 254 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Statements_22));
#line 254 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
#line 254 "ml_call_gen.m"
  }
#line 254 "ml_call_gen.m"
}

#line 137 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 137 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78,
#line 137 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_79)
#line 137 "ml_call_gen.m"
{
#line 143 "ml_call_gen.m"
  {
#line 143 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 143 "ml_call_gen.m"
    MR_Integer ml_backend__ml_call_gen__NumArgs_18;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__BoxedArgTypes_19;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_20;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__VarSet_21;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgNames_22;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredOrFunc_23;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__CodeModel_24;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params0_25;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureArgType_27;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgParams0_29;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__RetParam_30;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_31;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_32;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureLval_37;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncType_40;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncRval_41;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvVarSeq_52;
#line 143 "ml_call_gen.m"
    MR_Integer ml_backend__ml_call_gen__ConvVarNum_53;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarName_54;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarDecl_55;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarLval_56;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__AssignFuncVar_57;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncVarRval_58;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_59;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ActualArgTypes_60;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__InputRvals_61;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputLvals_62;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputTypes_63;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_64;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvOutputStatements_65;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ClosureRval_66;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ObjectRval_67;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Decls0_68;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Statements0_69;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_85_85;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111;
#line 143 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__V_112_112;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_118_118;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_119_119;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122;
#line 143 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_124_124;
#line 143 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__V_145_145;

#line 146 "ml_call_gen.m"
    {
#line 146 "ml_call_gen.m"
      ml_backend__ml_call_gen__NumArgs_18 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_1[0], ml_backend__ml_call_gen__ArgVars_11);
    }
#line 147 "ml_call_gen.m"
    {
#line 147 "ml_call_gen.m"
      ml_backend__ml_call_gen__BoxedArgTypes_19 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_call_gen__NumArgs_18);
    }
#line 150 "ml_call_gen.m"
    {
#line 150 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__ModuleInfo_20);
    }
#line 151 "ml_call_gen.m"
    {
#line 151 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__VarSet_21);
    }
#line 152 "ml_call_gen.m"
    {
#line 152 "ml_call_gen.m"
      ml_backend__ml_call_gen__ArgNames_22 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_call_gen__VarSet_21, ml_backend__ml_call_gen__ArgVars_11);
    }
#line 153 "ml_call_gen.m"
    {
#line 153 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredOrFunc_23 = hlds__hlds_goal__generic_call_pred_or_func_1_f_0(ml_backend__ml_call_gen__GenericCall_10);
    }
#line 154 "ml_call_gen.m"
    {
#line 154 "ml_call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_call_gen__Determinism_13, &ml_backend__ml_call_gen__CodeModel_24);
    }
#line 155 "ml_call_gen.m"
    {
#line 155 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params0_25 = ml_backend__ml_code_util__ml_gen_params_6_f_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24);
    }
#line 166 "ml_call_gen.m"
    ml_backend__ml_call_gen__ClosureArgType_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 170 "ml_call_gen.m"
    ml_backend__ml_call_gen__ArgParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 0)));
#line 170 "ml_call_gen.m"
    ml_backend__ml_call_gen__RetParam_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params0_25, (MR_Integer) 1)));
#line 171 "ml_call_gen.m"
    {
#line 171 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_5[0]));
#line 171 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_call_gen__ArgParams0_29));
#line 171 "ml_call_gen.m"
    }
#line 171 "ml_call_gen.m"
    {
#line 171 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_85_85));
#line 171 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__Params_31, 1) = ((MR_Box) (ml_backend__ml_call_gen__RetParam_30));
#line 171 "ml_call_gen.m"
    }
#line 172 "ml_call_gen.m"
    {
#line 172 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_32 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_31);
    }
#line 184 "ml_call_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) == (MR_mktag((MR_Integer) 1))))
#line 186 "ml_call_gen.m"
      {
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__TypeClassInfoVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 186 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__MethodNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__BaseTypeclassInfoLval_48;
#line 186 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__Offset_49;
#line 186 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen__MethodFieldNum_50;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__MethodFieldId_51;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_89_89;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_91_91;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_93_93;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_94_94;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_97_97;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_100_100;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_101_101;
#line 186 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__FuncLval_133;
#line 185 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___ClassId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 185 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___PredName_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 190 "ml_call_gen.m"
        {
#line 190 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__TypeClassInfoVar_42, &ml_backend__ml_call_gen__ClosureLval_37);
        }
#line 195 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[1]);
#line 196 "ml_call_gen.m"
        {
#line 196 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_91_91, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 196 "ml_call_gen.m"
        }
#line 195 "ml_call_gen.m"
        {
#line 195 "ml_call_gen.m"
          ml_backend__ml_call_gen__BaseTypeclassInfoLval_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 195 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_89_89));
#line 195 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_91_91));
#line 195 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[2]));
#line 195 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 195 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__BaseTypeclassInfoLval_48, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
#line 195 "ml_call_gen.m"
        }
#line 200 "ml_call_gen.m"
        {
#line 200 "ml_call_gen.m"
          ml_backend__ml_call_gen__Offset_49 = ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0();
        }
#line 201 "ml_call_gen.m"
        ml_backend__ml_call_gen__MethodFieldNum_50 = (ml_backend__ml_call_gen__MethodNum_43 + ml_backend__ml_call_gen__Offset_49);
#line 202 "ml_call_gen.m"
        {
#line 202 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 202 "ml_call_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldNum_50));
#line 202 "ml_call_gen.m"
        }
#line 202 "ml_call_gen.m"
        {
#line 202 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 202 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_93_93, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_94_94));
#line 202 "ml_call_gen.m"
        }
#line 202 "ml_call_gen.m"
        {
#line 202 "ml_call_gen.m"
          ml_backend__ml_call_gen__MethodFieldId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 202 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__MethodFieldId_51, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_93_93));
#line 202 "ml_call_gen.m"
        }
#line 203 "ml_call_gen.m"
        {
#line 203 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_97_97, 0) = ((MR_Box) (ml_backend__ml_call_gen__BaseTypeclassInfoLval_48));
#line 203 "ml_call_gen.m"
        }
#line 203 "ml_call_gen.m"
        {
#line 203 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncLval_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_89_89));
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_97_97));
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 2) = ((MR_Box) (ml_backend__ml_call_gen__MethodFieldId_51));
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 203 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_133, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 203 "ml_call_gen.m"
        }
#line 205 "ml_call_gen.m"
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
#line 206 "ml_call_gen.m"
        {
#line 206 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_100_100, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
#line 206 "ml_call_gen.m"
        }
#line 206 "ml_call_gen.m"
        {
#line 206 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_101_101, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_133));
#line 206 "ml_call_gen.m"
        }
#line 206 "ml_call_gen.m"
        {
#line 206 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 206 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 206 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_100_100));
#line 206 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_101_101));
#line 206 "ml_call_gen.m"
        }
#line 186 "ml_call_gen.m"
      }
#line 184 "ml_call_gen.m"
    else
#line 176 "ml_call_gen.m"
      {
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ClosureVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 0)));
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__FuncLval_39;
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_107_107;
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_109_109;
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_110_110;
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___Purity_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 1)));
#line 176 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen___PredOrFunc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 2)));
#line 176 "ml_call_gen.m"
        MR_Integer ml_backend__ml_call_gen___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__GenericCall_10, (MR_Integer) 3)));

#line 177 "ml_call_gen.m"
        {
#line 177 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, ml_backend__ml_call_gen__ClosureVar_33, &ml_backend__ml_call_gen__ClosureLval_37);
        }
#line 180 "ml_call_gen.m"
        {
#line 180 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 180 "ml_call_gen.m"
        }
#line 180 "ml_call_gen.m"
        {
#line 180 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncLval_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[1])));
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_107_107));
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 2) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_2[4]));
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 180 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncLval_39, 4) = ((MR_Box) (ml_backend__ml_call_gen__ClosureArgType_27));
#line 180 "ml_call_gen.m"
        }
#line 182 "ml_call_gen.m"
        ml_backend__ml_call_gen__FuncType_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__Params_31);
#line 183 "ml_call_gen.m"
        {
#line 183 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncType_40));
#line 183 "ml_call_gen.m"
        }
#line 183 "ml_call_gen.m"
        {
#line 183 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncLval_39));
#line 183 "ml_call_gen.m"
        }
#line 183 "ml_call_gen.m"
        {
#line 183 "ml_call_gen.m"
          ml_backend__ml_call_gen__FuncRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 183 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_109_109));
#line 183 "ml_call_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__FuncRval_41, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_110_110));
#line 183 "ml_call_gen.m"
        }
#line 176 "ml_call_gen.m"
      }
#line 215 "ml_call_gen.m"
    {
#line 215 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_call_gen__ConvVarSeq_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_78, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111);
    }
#line 216 "ml_call_gen.m"
    ml_backend__ml_call_gen__ConvVarNum_53 = (MR_Integer) ml_backend__ml_call_gen__ConvVarSeq_52;
#line 217 "ml_call_gen.m"
    {
#line 217 "ml_call_gen.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_call_gen_scalar_common_2[5], ml_backend__ml_call_gen__ConvVarNum_53, &ml_backend__ml_call_gen__V_145_145);
    }
#line 217 "ml_call_gen.m"
    {
#line 217 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) "func_", ml_backend__ml_call_gen__V_145_145);
    }
#line 217 "ml_call_gen.m"
    {
#line 217 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 217 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncVarName_54, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_112_112));
#line 217 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__FuncVarName_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "ml_call_gen.m"
    }
#line 221 "ml_call_gen.m"
    ml_backend__ml_call_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_call_gen__FuncVarName_54);
#line 222 "ml_call_gen.m"
    {
#line 222 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_119_119 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_call_gen__Context_14);
    }
#line 221 "ml_call_gen.m"
    {
#line 221 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarDecl_55 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_call_gen__V_118_118, ml_backend__ml_call_gen__FuncType_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_call_gen__V_119_119);
    }
#line 223 "ml_call_gen.m"
    {
#line 223 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__FuncVarName_54, ml_backend__ml_call_gen__FuncType_40, &ml_backend__ml_call_gen__FuncVarLval_56);
    }
#line 224 "ml_call_gen.m"
    {
#line 224 "ml_call_gen.m"
      ml_backend__ml_call_gen__AssignFuncVar_57 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__FuncVarLval_56, ml_backend__ml_call_gen__FuncRval_41, ml_backend__ml_call_gen__Context_14);
    }
#line 225 "ml_call_gen.m"
    {
#line 225 "ml_call_gen.m"
      ml_backend__ml_call_gen__FuncVarRval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 225 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__FuncVarRval_58, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarLval_56));
#line 225 "ml_call_gen.m"
    }
#line 230 "ml_call_gen.m"
    {
#line 230 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ArgLvals_59);
    }
#line 231 "ml_call_gen.m"
    {
#line 231 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_call_gen__ArgVars_11, &ml_backend__ml_call_gen__ActualArgTypes_60);
    }
#line 232 "ml_call_gen.m"
    {
#line 232 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_22, ml_backend__ml_call_gen__ArgLvals_59, ml_backend__ml_call_gen__ActualArgTypes_60, ml_backend__ml_call_gen__BoxedArgTypes_19, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__PredOrFunc_23, ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, (MR_Integer) 0, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_61, &ml_backend__ml_call_gen__OutputLvals_62, &ml_backend__ml_call_gen__OutputTypes_63, &ml_backend__ml_call_gen__ConvArgDecls_64, &ml_backend__ml_call_gen__ConvOutputStatements_65, ml_backend__ml_call_gen__STATE_VARIABLE_Info_111_111, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122);
    }
#line 236 "ml_call_gen.m"
    {
#line 236 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_124_124, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureLval_37));
#line 236 "ml_call_gen.m"
    }
#line 236 "ml_call_gen.m"
    {
#line 236 "ml_call_gen.m"
      ml_backend__ml_call_gen__ClosureRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 236 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 236 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_call_gen_scalar_common_2[6])));
#line 236 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ClosureRval_66, 2) = ((MR_Box) (ml_backend__ml_call_gen__V_124_124));
#line 236 "ml_call_gen.m"
    }
#line 237 "ml_call_gen.m"
    ml_backend__ml_call_gen__ObjectRval_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 241 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStatements_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 245 "ml_call_gen.m"
      {
#line 245 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_125_125;

#line 246 "ml_call_gen.m"
        {
#line 246 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
#line 246 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_125_125, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
#line 246 "ml_call_gen.m"
        }
#line 245 "ml_call_gen.m"
        {
#line 245 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_32, ml_backend__ml_call_gen__ObjectRval_67, ml_backend__ml_call_gen__FuncVarRval_58, ml_backend__ml_call_gen__V_125_125, ml_backend__ml_call_gen__OutputLvals_62, ml_backend__ml_call_gen__OutputTypes_63, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Decls0_68, &ml_backend__ml_call_gen__Statements0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
#line 245 "ml_call_gen.m"
      }
#line 248 "ml_call_gen.m"
    else
#line 256 "ml_call_gen.m"
      {
#line 256 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenCall_70;
#line 256 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71;
#line 256 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_76;
#line 256 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__V_127_127;

#line 255 "ml_call_gen.m"
        {
#line 255 "ml_call_gen.m"
          ml_backend__ml_call_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_call_gen__ClosureRval_66));
#line 255 "ml_call_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_127_127, 1) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_61));
#line 255 "ml_call_gen.m"
        }
#line 254 "ml_call_gen.m"
        {
#line 254 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenCall_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[0]));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_1));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_32));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_67));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarRval_58));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 6) = ((MR_Box) (ml_backend__ml_call_gen__V_127_127));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_62));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_63));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 9) = ((MR_Box) (ml_backend__ml_call_gen__Determinism_13));
#line 254 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_70, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
#line 254 "ml_call_gen.m"
        }
#line 260 "ml_call_gen.m"
        {
#line 260 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[1]));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0_2));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 3) = ((MR_Box) (ml_backend__ml_call_gen__Context_14));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 4) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_24));
#line 260 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStatements_65));
#line 260 "ml_call_gen.m"
        }
#line 272 "ml_call_gen.m"
        {
#line 272 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_24, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__DoGenCall_70, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_71, &ml_backend__ml_call_gen__CallAndConvOutputDecls_76, &ml_backend__ml_call_gen__Statements0_69, ml_backend__ml_call_gen__STATE_VARIABLE_Info_122_122, ml_backend__ml_call_gen__STATE_VARIABLE_Info_79);
        }
#line 275 "ml_call_gen.m"
        {
#line 275 "ml_call_gen.m"
          ml_backend__ml_call_gen__Decls0_68 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ConvArgDecls_64, ml_backend__ml_call_gen__CallAndConvOutputDecls_76);
        }
#line 256 "ml_call_gen.m"
      }
#line 278 "ml_call_gen.m"
    {
#line 278 "ml_call_gen.m"
      MR_Word base;
#line 278 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Decls_15 = base;
#line 278 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__FuncVarDecl_55));
#line 278 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Decls0_68));
#line 278 "ml_call_gen.m"
    }
#line 279 "ml_call_gen.m"
    {
#line 279 "ml_call_gen.m"
      MR_Word base;
#line 279 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Statements_16 = base;
#line 279 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__AssignFuncVar_57));
#line 279 "ml_call_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__Statements0_69));
#line 279 "ml_call_gen.m"
    }
#line 143 "ml_call_gen.m"
  }
#line 137 "ml_call_gen.m"
}

#line 83 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cont_params_4_p_0(
#line 83 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__OutputArgTypes_5,
#line 83 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Params_6,
#line 83 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12,
#line 83 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_13)
#line 83 "ml_call_gen.m"
{
#line 530 "ml_call_gen.m"
  {
#line 530 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 530 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Args0_8;
#line 530 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__UseNestedFuncs_9;
#line 530 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Args_10;

#line 531 "ml_call_gen.m"
    {
#line 531 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_cont_params_2_3_p_0(ml_backend__ml_call_gen__OutputArgTypes_5, (MR_Integer) 1, &ml_backend__ml_call_gen__Args0_8);
    }
#line 532 "ml_call_gen.m"
    {
#line 532 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12, &ml_backend__ml_call_gen__UseNestedFuncs_9);
    }
#line 536 "ml_call_gen.m"
#line 536 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__UseNestedFuncs_9) {
#line 536 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 536 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 537 "ml_call_gen.m"
        {
#line 537 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__EnvPtrArg_11;
#line 537 "ml_call_gen.m"
          MR_Word ml_backend__ml_call_gen__V_15_15;

#line 538 "ml_call_gen.m"
          {
#line 538 "ml_call_gen.m"
            ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(&ml_backend__ml_call_gen__EnvPtrArg_11);
          }
#line 539 "ml_call_gen.m"
          {
#line 539 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_15_15, 0) = ((MR_Box) (ml_backend__ml_call_gen__EnvPtrArg_11));
#line 539 "ml_call_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "ml_call_gen.m"
          }
#line 539 "ml_call_gen.m"
          {
#line 539 "ml_call_gen.m"
            ml_backend__ml_call_gen__Args_10 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_call_gen__Args0_8, ml_backend__ml_call_gen__V_15_15);
          }
#line 537 "ml_call_gen.m"
        }
#line 536 "ml_call_gen.m"
        break;
#line 536 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 535 "ml_call_gen.m"
        ml_backend__ml_call_gen__Args_10 = ml_backend__ml_call_gen__Args0_8;
#line 536 "ml_call_gen.m"
        break;
#line 536 "ml_call_gen.m"
    }
#line 541 "ml_call_gen.m"
    {
#line 541 "ml_call_gen.m"
      MR_Word base;
#line 541 "ml_call_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "ml_call_gen.m"
      *ml_backend__ml_call_gen__Params_6 = base;
#line 541 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Args_10));
#line 541 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "ml_call_gen.m"
    }
#line 530 "ml_call_gen.m"
    *ml_backend__ml_call_gen__STATE_VARIABLE_Info_13 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_12;
#line 530 "ml_call_gen.m"
  }
#line 83 "ml_call_gen.m"
}

#line 73 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(
#line 73 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_6,
#line 73 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_7,
#line 73 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__CodeAddrRval_8,
#line 73 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17,
#line 73 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_18)
#line 73 "ml_call_gen.m"
{
#line 590 "ml_call_gen.m"
  {
#line 590 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_10;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredLabel_11;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredModule_12;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_13;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_14;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ProcLabel_15;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__QualifiedProcLabel_16;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_21_21;
#line 590 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_22_22;

#line 591 "ml_call_gen.m"
    {
#line 591 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_call_gen__ModuleInfo_10);
    }
#line 592 "ml_call_gen.m"
    {
#line 592 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(ml_backend__ml_call_gen__ModuleInfo_10, ml_backend__ml_call_gen__PredId_6, ml_backend__ml_call_gen__ProcId_7, &ml_backend__ml_call_gen__PredLabel_11, &ml_backend__ml_call_gen__PredModule_12);
    }
#line 593 "ml_call_gen.m"
    {
#line 593 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(ml_backend__ml_call_gen__PredId_6, ml_backend__ml_call_gen__ProcId_7, &ml_backend__ml_call_gen__Params_13, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_call_gen__STATE_VARIABLE_Info_18);
    }
#line 594 "ml_call_gen.m"
    {
#line 594 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_14 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_13);
    }
#line 595 "ml_call_gen.m"
    {
#line 595 "ml_call_gen.m"
      ml_backend__ml_call_gen__ProcLabel_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_15, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredLabel_11));
#line 595 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__ProcLabel_15, 1) = ((MR_Box) (ml_backend__ml_call_gen__ProcId_7));
#line 595 "ml_call_gen.m"
    }
#line 596 "ml_call_gen.m"
    {
#line 596 "ml_call_gen.m"
      ml_backend__ml_call_gen__QualifiedProcLabel_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 0) = ((MR_Box) (ml_backend__ml_call_gen__PredModule_12));
#line 596 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 596 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__QualifiedProcLabel_16, 2) = ((MR_Box) (ml_backend__ml_call_gen__ProcLabel_15));
#line 596 "ml_call_gen.m"
    }
#line 598 "ml_call_gen.m"
    {
#line 598 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 598 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__V_22_22, 0) = ((MR_Box) (ml_backend__ml_call_gen__QualifiedProcLabel_16));
#line 598 "ml_call_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__V_22_22, 1) = ((MR_Box) (ml_backend__ml_call_gen__Signature_14));
#line 598 "ml_call_gen.m"
    }
#line 597 "ml_call_gen.m"
    {
#line 597 "ml_call_gen.m"
      ml_backend__ml_call_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 597 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_22_22));
#line 597 "ml_call_gen.m"
    }
#line 597 "ml_call_gen.m"
    {
#line 597 "ml_call_gen.m"
      MR_Word base;
#line 597 "ml_call_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_call_gen.m"
      *ml_backend__ml_call_gen__CodeAddrRval_8 = base;
#line 597 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 597 "ml_call_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_call_gen__V_21_21));
#line 597 "ml_call_gen.m"
    }
#line 590 "ml_call_gen.m"
  }
#line 73 "ml_call_gen.m"
}

#line 67 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_cast_6_p_0(
#line 67 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_7,
#line 67 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_8,
#line 67 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_9,
#line 67 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_10,
#line 67 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25,
#line 67 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_26)
#line 67 "ml_call_gen.m"
{
#line 281 "ml_call_gen.m"
  {
#line 281 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 281 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_12;
#line 281 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgTypes_13;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcVar_14;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestVar_15;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcLval_16;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestLval_17;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SrcType_18;
#line 309 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__DestType_19;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_27_27;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_28_28;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_29_29;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_30_30;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_31_31;
#line 285 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__V_32_32;

#line 282 "ml_call_gen.m"
    {
#line 282 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__ArgVars_8, &ml_backend__ml_call_gen__ArgLvals_12);
    }
#line 283 "ml_call_gen.m"
    {
#line 283 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__ArgVars_8, &ml_backend__ml_call_gen__ArgTypes_13);
    }
#line 285 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 285 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 285 "ml_call_gen.m"
      {
#line 285 "ml_call_gen.m"
        ml_backend__ml_call_gen__SrcVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_8, (MR_Integer) 0)));
#line 285 "ml_call_gen.m"
        ml_backend__ml_call_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgVars_8, (MR_Integer) 1)));
#line 285 "ml_call_gen.m"
        ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 285 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 285 "ml_call_gen.m"
          {
#line 285 "ml_call_gen.m"
            ml_backend__ml_call_gen__DestVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_27_27, (MR_Integer) 0)));
#line 285 "ml_call_gen.m"
            ml_backend__ml_call_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_27_27, (MR_Integer) 1)));
#line 285 "ml_call_gen.m"
            ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "ml_call_gen.m"
            if (ml_backend__ml_call_gen__succeeded)
#line 285 "ml_call_gen.m"
              {
#line 286 "ml_call_gen.m"
                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgLvals_12)) == (MR_mktag((MR_Integer) 1)));
#line 286 "ml_call_gen.m"
                if (ml_backend__ml_call_gen__succeeded)
#line 286 "ml_call_gen.m"
                  {
#line 286 "ml_call_gen.m"
                    ml_backend__ml_call_gen__SrcLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_12, (MR_Integer) 0)));
#line 286 "ml_call_gen.m"
                    ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgLvals_12, (MR_Integer) 1)));
#line 286 "ml_call_gen.m"
                    ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 286 "ml_call_gen.m"
                    if (ml_backend__ml_call_gen__succeeded)
#line 286 "ml_call_gen.m"
                      {
#line 286 "ml_call_gen.m"
                        ml_backend__ml_call_gen__DestLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_29_29, (MR_Integer) 0)));
#line 286 "ml_call_gen.m"
                        ml_backend__ml_call_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_29_29, (MR_Integer) 1)));
#line 286 "ml_call_gen.m"
                        ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "ml_call_gen.m"
                        if (ml_backend__ml_call_gen__succeeded)
#line 285 "ml_call_gen.m"
                          {
#line 287 "ml_call_gen.m"
                            ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ArgTypes_13)) == (MR_mktag((MR_Integer) 1)));
#line 287 "ml_call_gen.m"
                            if (ml_backend__ml_call_gen__succeeded)
#line 287 "ml_call_gen.m"
                              {
#line 287 "ml_call_gen.m"
                                ml_backend__ml_call_gen__SrcType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_13, (MR_Integer) 0)));
#line 287 "ml_call_gen.m"
                                ml_backend__ml_call_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__ArgTypes_13, (MR_Integer) 1)));
#line 287 "ml_call_gen.m"
                                ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 287 "ml_call_gen.m"
                                if (ml_backend__ml_call_gen__succeeded)
#line 287 "ml_call_gen.m"
                                  {
#line 287 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__DestType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_31_31, (MR_Integer) 0)));
#line 287 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_31_31, (MR_Integer) 1)));
#line 287 "ml_call_gen.m"
                                    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "ml_call_gen.m"
                                  }
#line 287 "ml_call_gen.m"
                              }
#line 285 "ml_call_gen.m"
                          }
#line 286 "ml_call_gen.m"
                      }
#line 286 "ml_call_gen.m"
                  }
#line 285 "ml_call_gen.m"
              }
#line 285 "ml_call_gen.m"
          }
#line 285 "ml_call_gen.m"
      }
#line 309 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 289 "ml_call_gen.m"
      {
#line 289 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__ModuleInfo_20;
#line 289 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__IsDummy_21;
#line 306 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__GroundTerm_24;

#line 289 "ml_call_gen.m"
        {
#line 289 "ml_call_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_call_gen__ModuleInfo_20);
        }
#line 290 "ml_call_gen.m"
        {
#line 290 "ml_call_gen.m"
          ml_backend__ml_call_gen__IsDummy_21 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__DestType_19);
        }
#line 294 "ml_call_gen.m"
#line 294 "ml_call_gen.m"
        switch (ml_backend__ml_call_gen__IsDummy_21) {
#line 294 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 294 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 293 "ml_call_gen.m"
            *ml_backend__ml_call_gen__Statements_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "ml_call_gen.m"
            break;
#line 294 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 295 "ml_call_gen.m"
            {
#line 295 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__CastRval_22;
#line 295 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Assign_23;
#line 295 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_34_34;

#line 297 "ml_call_gen.m"
              {
#line 297 "ml_call_gen.m"
                ml_backend__ml_call_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_call_gen__SrcLval_16));
#line 297 "ml_call_gen.m"
              }
#line 296 "ml_call_gen.m"
              {
#line 296 "ml_call_gen.m"
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_call_gen__ModuleInfo_20, ml_backend__ml_call_gen__SrcType_18, ml_backend__ml_call_gen__DestType_19, (MR_Integer) 0, ml_backend__ml_call_gen__V_34_34, &ml_backend__ml_call_gen__CastRval_22);
              }
#line 298 "ml_call_gen.m"
              {
#line 298 "ml_call_gen.m"
                ml_backend__ml_call_gen__Assign_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__DestLval_17, ml_backend__ml_call_gen__CastRval_22, ml_backend__ml_call_gen__Context_7);
              }
#line 299 "ml_call_gen.m"
              {
#line 299 "ml_call_gen.m"
                MR_Word base;
#line 299 "ml_call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_10 = base;
#line 299 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Assign_23));
#line 299 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "ml_call_gen.m"
              }
#line 295 "ml_call_gen.m"
            }
#line 294 "ml_call_gen.m"
            break;
#line 294 "ml_call_gen.m"
        }
#line 301 "ml_call_gen.m"
        *ml_backend__ml_call_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "ml_call_gen.m"
        {
#line 302 "ml_call_gen.m"
          ml_backend__ml_call_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__SrcVar_14, &ml_backend__ml_call_gen__GroundTerm_24);
        }
#line 306 "ml_call_gen.m"
        if (ml_backend__ml_call_gen__succeeded)
#line 305 "ml_call_gen.m"
          {
#line 305 "ml_call_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_call_gen__DestVar_15, ml_backend__ml_call_gen__GroundTerm_24, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_call_gen__STATE_VARIABLE_Info_26);
#line 305 "ml_call_gen.m"
            return;
          }
#line 306 "ml_call_gen.m"
        else
#line 306 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_26 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_25;
#line 289 "ml_call_gen.m"
      }
#line 309 "ml_call_gen.m"
    else
#line 310 "ml_call_gen.m"
      {
#line 310 "ml_call_gen.m"
        {
#line 310 "ml_call_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/6", (MR_String) "wrong number of args for cast");
#line 310 "ml_call_gen.m"
          return;
        }
#line 310 "ml_call_gen.m"
      }
#line 281 "ml_call_gen.m"
  }
#line 67 "ml_call_gen.m"
}

#line 59 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(
#line 59 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_10,
#line 59 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_11,
#line 59 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_12,
#line 59 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_13,
#line 59 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 59 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 59 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 59 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45,
#line 59 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_46)
#line 59 "ml_call_gen.m"
{
#line 722 "ml_call_gen.m"
  {
#line 722 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 722 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgLvals_18;
#line 722 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_19;
#line 722 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleName_20;
#line 722 "ml_call_gen.m"
    MR_String ml_backend__ml_call_gen__PredName_21;
#line 722 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__SimpleCode_22;

#line 723 "ml_call_gen.m"
    {
#line 723 "ml_call_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__ArgVars_12, &ml_backend__ml_call_gen__ArgLvals_18);
    }
#line 724 "ml_call_gen.m"
    {
#line 724 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_call_gen__ModuleInfo_19);
    }
#line 725 "ml_call_gen.m"
    {
#line 725 "ml_call_gen.m"
      ml_backend__ml_call_gen__ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
#line 726 "ml_call_gen.m"
    {
#line 726 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredName_21 = hlds__hlds_module__predicate_name_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__PredId_10);
    }
#line 727 "ml_call_gen.m"
    {
#line 727 "ml_call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_call_gen__ModuleName_20, ml_backend__ml_call_gen__PredName_21, ml_backend__ml_call_gen__ProcId_11, ml_backend__ml_call_gen__ArgLvals_18, &ml_backend__ml_call_gen__SimpleCode_22);
    }
#line 763 "ml_call_gen.m"
#line 763 "ml_call_gen.m"
    switch (ml_backend__ml_call_gen__CodeModel_13) {
#line 763 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 763 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 746 "ml_call_gen.m"
#line 746 "ml_call_gen.m"
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
#line 746 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 746 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 732 "ml_call_gen.m"
            {
#line 732 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 732 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__SimpleExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
#line 736 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__VarType_26;
#line 736 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ProgDataType_27;
#line 736 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_70_70;
#line 736 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen___VarName_25;
#line 737 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_28_28;
#line 737 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__V_29_29;

#line 736 "ml_call_gen.m"
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__Lval_23)) == (MR_mktag((MR_Integer) 3)));
#line 736 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 736 "ml_call_gen.m"
                {
#line 736 "ml_call_gen.m"
                  ml_backend__ml_call_gen___VarName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 0)));
#line 736 "ml_call_gen.m"
                  ml_backend__ml_call_gen__VarType_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__Lval_23, (MR_Integer) 1)));
#line 737 "ml_call_gen.m"
                  ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__VarType_26)) == (MR_mktag((MR_Integer) 2)));
#line 737 "ml_call_gen.m"
                  if (ml_backend__ml_call_gen__succeeded)
#line 737 "ml_call_gen.m"
                    {
#line 737 "ml_call_gen.m"
                      ml_backend__ml_call_gen__ProgDataType_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 0)));
#line 737 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 1)));
#line 737 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__VarType_26, (MR_Integer) 2)));
#line 738 "ml_call_gen.m"
                      {
#line 738 "ml_call_gen.m"
                        ml_backend__ml_call_gen__V_70_70 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_call_gen__ModuleInfo_19, ml_backend__ml_call_gen__ProgDataType_27);
                      }
#line 738 "ml_call_gen.m"
                      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__V_70_70 == (MR_Integer) 0);
#line 737 "ml_call_gen.m"
                    }
#line 736 "ml_call_gen.m"
                }
#line 741 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 740 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "ml_call_gen.m"
              else
#line 742 "ml_call_gen.m"
                {
#line 742 "ml_call_gen.m"
                  MR_Word ml_backend__ml_call_gen__Rval_30;
#line 742 "ml_call_gen.m"
                  MR_Word ml_backend__ml_call_gen__Statement_31;

#line 742 "ml_call_gen.m"
                  {
#line 742 "ml_call_gen.m"
                    ml_backend__ml_call_gen__Rval_30 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleExpr_24);
                  }
#line 743 "ml_call_gen.m"
                  {
#line 743 "ml_call_gen.m"
                    ml_backend__ml_call_gen__Statement_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__Lval_23, ml_backend__ml_call_gen__Rval_30, ml_backend__ml_call_gen__Context_14);
                  }
#line 744 "ml_call_gen.m"
                  {
#line 744 "ml_call_gen.m"
                    MR_Word base;
#line 744 "ml_call_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "ml_call_gen.m"
                    *ml_backend__ml_call_gen__Statements_16 = base;
#line 744 "ml_call_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_31));
#line 744 "ml_call_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "ml_call_gen.m"
                  }
#line 742 "ml_call_gen.m"
                }
#line 732 "ml_call_gen.m"
            }
#line 746 "ml_call_gen.m"
            break;
#line 746 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 747 "ml_call_gen.m"
            {
#line 747 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__AddrLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 747 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ValueLval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 1)));
#line 753 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__ValueType_35;
#line 748 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen___ValueVarName_34;

#line 748 "ml_call_gen.m"
              ml_backend__ml_call_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_call_gen__ValueLval_33)) == (MR_mktag((MR_Integer) 3)));
#line 748 "ml_call_gen.m"
              if (ml_backend__ml_call_gen__succeeded)
#line 748 "ml_call_gen.m"
                {
#line 748 "ml_call_gen.m"
                  ml_backend__ml_call_gen___ValueVarName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 0)));
#line 748 "ml_call_gen.m"
                  ml_backend__ml_call_gen__ValueType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_call_gen__ValueLval_33, (MR_Integer) 1)));
#line 751 "ml_call_gen.m"
                  {
#line 751 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_63_63;
#line 751 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_64_64;
#line 751 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__V_65_65;
#line 751 "ml_call_gen.m"
                    MR_Word ml_backend__ml_call_gen__Statement_72;

#line 750 "ml_call_gen.m"
                    {
#line 750 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_call_gen__AddrLval_32));
#line 750 "ml_call_gen.m"
                    }
#line 750 "ml_call_gen.m"
                    {
#line 750 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_call_gen__V_64_64));
#line 750 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_call_gen__ValueType_35));
#line 750 "ml_call_gen.m"
                    }
#line 751 "ml_call_gen.m"
                    {
#line 751 "ml_call_gen.m"
                      ml_backend__ml_call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 751 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_call_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_call_gen__ValueLval_33));
#line 751 "ml_call_gen.m"
                    }
#line 749 "ml_call_gen.m"
                    {
#line 749 "ml_call_gen.m"
                      ml_backend__ml_call_gen__Statement_72 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_call_gen__V_63_63, ml_backend__ml_call_gen__V_65_65, ml_backend__ml_call_gen__Context_14);
                    }
#line 752 "ml_call_gen.m"
                    {
#line 752 "ml_call_gen.m"
                      MR_Word base;
#line 752 "ml_call_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "ml_call_gen.m"
                      *ml_backend__ml_call_gen__Statements_16 = base;
#line 752 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_72));
#line 752 "ml_call_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "ml_call_gen.m"
                    }
#line 751 "ml_call_gen.m"
                  }
#line 748 "ml_call_gen.m"
                }
#line 748 "ml_call_gen.m"
              else
#line 754 "ml_call_gen.m"
                {
#line 754 "ml_call_gen.m"
                  {
#line 754 "ml_call_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed ref_assign");
#line 754 "ml_call_gen.m"
                    return;
                  }
#line 754 "ml_call_gen.m"
                }
#line 747 "ml_call_gen.m"
            }
#line 746 "ml_call_gen.m"
            break;
#line 746 "ml_call_gen.m"
          case (MR_Integer) 2:
#line 757 "ml_call_gen.m"
            {
#line 758 "ml_call_gen.m"
              {
#line 758 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
#line 758 "ml_call_gen.m"
                return;
              }
#line 757 "ml_call_gen.m"
            }
#line 746 "ml_call_gen.m"
            break;
#line 746 "ml_call_gen.m"
          case (MR_Integer) 3:
#line 761 "ml_call_gen.m"
            *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "ml_call_gen.m"
            break;
#line 746 "ml_call_gen.m"
        }
#line 763 "ml_call_gen.m"
        break;
#line 763 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 784 "ml_call_gen.m"
        {
#line 785 "ml_call_gen.m"
          {
#line 785 "ml_call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "model_non builtin predicate");
#line 785 "ml_call_gen.m"
            return;
          }
#line 784 "ml_call_gen.m"
        }
#line 763 "ml_call_gen.m"
        break;
#line 763 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 770 "ml_call_gen.m"
#line 770 "ml_call_gen.m"
        switch (MR_tag((MR_Word) ml_backend__ml_call_gen__SimpleCode_22)) {
#line 770 "ml_call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 770 "ml_call_gen.m"
          case (MR_Integer) 0:
#line 775 "ml_call_gen.m"
            {
#line 776 "ml_call_gen.m"
              {
#line 776 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 776 "ml_call_gen.m"
                return;
              }
#line 775 "ml_call_gen.m"
            }
#line 770 "ml_call_gen.m"
            break;
#line 770 "ml_call_gen.m"
          case (MR_Integer) 1:
#line 771 "ml_call_gen.m"
            {
#line 772 "ml_call_gen.m"
              {
#line 772 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 772 "ml_call_gen.m"
                return;
              }
#line 771 "ml_call_gen.m"
            }
#line 770 "ml_call_gen.m"
            break;
#line 770 "ml_call_gen.m"
          case (MR_Integer) 2:
#line 766 "ml_call_gen.m"
            {
#line 766 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__SimpleTest_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_call_gen__SimpleCode_22, (MR_Integer) 0)));
#line 766 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__TestRval_39;
#line 766 "ml_call_gen.m"
              MR_Word ml_backend__ml_call_gen__Statement_75;

#line 767 "ml_call_gen.m"
              {
#line 767 "ml_call_gen.m"
                ml_backend__ml_call_gen__TestRval_39 = ml_backend__ml_call_gen__ml_gen_simple_expr_1_f_0(ml_backend__ml_call_gen__SimpleTest_38);
              }
#line 768 "ml_call_gen.m"
              {
#line 768 "ml_call_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45, ml_backend__ml_call_gen__TestRval_39, ml_backend__ml_call_gen__Context_14, &ml_backend__ml_call_gen__Statement_75);
              }
#line 769 "ml_call_gen.m"
              {
#line 769 "ml_call_gen.m"
                MR_Word base;
#line 769 "ml_call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "ml_call_gen.m"
                *ml_backend__ml_call_gen__Statements_16 = base;
#line 769 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_call_gen__Statement_75));
#line 769 "ml_call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "ml_call_gen.m"
              }
#line 766 "ml_call_gen.m"
            }
#line 770 "ml_call_gen.m"
            break;
#line 770 "ml_call_gen.m"
          case (MR_Integer) 3:
#line 779 "ml_call_gen.m"
            {
#line 780 "ml_call_gen.m"
              {
#line 780 "ml_call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_call_gen", (MR_String) "predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 780 "ml_call_gen.m"
                return;
              }
#line 779 "ml_call_gen.m"
            }
#line 770 "ml_call_gen.m"
            break;
#line 770 "ml_call_gen.m"
        }
#line 763 "ml_call_gen.m"
        break;
#line 763 "ml_call_gen.m"
    }
#line 787 "ml_call_gen.m"
    *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "ml_call_gen.m"
    *ml_backend__ml_call_gen__STATE_VARIABLE_Info_46 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_45;
#line 722 "ml_call_gen.m"
  }
#line 59 "ml_call_gen.m"
}

#line 393 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_2(
#line 393 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 393 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 393 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 393 "ml_call_gen.m"
{
#line 393 "ml_call_gen.m"
  {
#line 393 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 393 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv5_HeadVar__4_54;
#line 393 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv4_HeadVar__5_55;
#line 393 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv3_HeadVar__7_57;

#line 393 "ml_call_gen.m"
    {
#line 393 "ml_call_gen.m"
      ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__393__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), &ml_backend__ml_call_gen__conv5_HeadVar__4_54, &ml_backend__ml_call_gen__conv4_HeadVar__5_55, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv3_HeadVar__7_57);
    }
#line 393 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv5_HeadVar__4_54));
#line 393 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv4_HeadVar__5_55));
#line 393 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv3_HeadVar__7_57));
#line 393 "ml_call_gen.m"
  }
#line 393 "ml_call_gen.m"
}

#line 388 "ml_call_gen.m"
static void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0_1(
#line 388 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__closure_arg,
#line 388 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_1,
#line 388 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_2,
#line 388 "ml_call_gen.m"
  MR_Box ml_backend__ml_call_gen__wrapper_arg_3,
#line 388 "ml_call_gen.m"
  MR_Box * ml_backend__ml_call_gen__wrapper_arg_4)
#line 388 "ml_call_gen.m"
{
#line 388 "ml_call_gen.m"
  {
#line 388 "ml_call_gen.m"
    MR_Box ml_backend__ml_call_gen__closure = ml_backend__ml_call_gen__closure_arg;
#line 388 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv2_Decls_21;
#line 388 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv1_Statements_22;
#line 388 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41;

#line 388 "ml_call_gen.m"
    {
#line 388 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__closure, (MR_Integer) 10))), &ml_backend__ml_call_gen__conv2_Decls_21, &ml_backend__ml_call_gen__conv1_Statements_22, ((MR_Word) ml_backend__ml_call_gen__wrapper_arg_3), &ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41);
    }
#line 388 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_call_gen__conv2_Decls_21));
#line 388 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_call_gen__conv1_Statements_22));
#line 388 "ml_call_gen.m"
    *ml_backend__ml_call_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_call_gen__conv0_STATE_VARIABLE_Info_41));
#line 388 "ml_call_gen.m"
  }
#line 388 "ml_call_gen.m"
}

#line 52 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_call_12_p_0(
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__PredId_13,
#line 52 "ml_call_gen.m"
  MR_Integer ml_backend__ml_call_gen__ProcId_14,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgNames_15,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgLvals_16,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ActualArgTypes_17,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__CodeModel_18,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_19,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ForClosureWrapper_20,
#line 52 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_21,
#line 52 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_22,
#line 52 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48,
#line 52 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_49)
#line 52 "ml_call_gen.m"
{
#line 347 "ml_call_gen.m"
  {
#line 347 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ModuleInfo_24;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Params_25;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Signature_26;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__FuncRval_27;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredInfo_28;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ProcInfo_29;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredOrFunc_30;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__PredArgTypes_31;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ArgModes_32;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__InputRvals_33;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputLvals_34;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__OutputTypes_35;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvArgDecls_36;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ConvOutputStatements_37;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__ObjectRval_38;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__Detism_39;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50;
#line 347 "ml_call_gen.m"
    MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52;

#line 349 "ml_call_gen.m"
    {
#line 349 "ml_call_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__ModuleInfo_24);
    }
#line 350 "ml_call_gen.m"
    {
#line 350 "ml_call_gen.m"
      ml_backend__ml_call_gen__Params_25 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14);
    }
#line 351 "ml_call_gen.m"
    {
#line 351 "ml_call_gen.m"
      ml_backend__ml_call_gen__Signature_26 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_call_gen__Params_25);
    }
#line 354 "ml_call_gen.m"
    {
#line 354 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_p_0(ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__FuncRval_27, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_48, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50);
    }
#line 357 "ml_call_gen.m"
    {
#line 357 "ml_call_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_call_gen__ModuleInfo_24, ml_backend__ml_call_gen__PredId_13, ml_backend__ml_call_gen__ProcId_14, &ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__ProcInfo_29);
    }
#line 358 "ml_call_gen.m"
    {
#line 358 "ml_call_gen.m"
      ml_backend__ml_call_gen__PredOrFunc_30 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_call_gen__PredInfo_28);
    }
#line 359 "ml_call_gen.m"
    {
#line 359 "ml_call_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_call_gen__PredInfo_28, &ml_backend__ml_call_gen__PredArgTypes_31);
    }
#line 360 "ml_call_gen.m"
    {
#line 360 "ml_call_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__ArgModes_32);
    }
#line 365 "ml_call_gen.m"
    {
#line 365 "ml_call_gen.m"
      ml_backend__ml_call_gen__ml_gen_arg_list_17_p_0(ml_backend__ml_call_gen__ArgNames_15, ml_backend__ml_call_gen__ArgLvals_16, ml_backend__ml_call_gen__ActualArgTypes_17, ml_backend__ml_call_gen__PredArgTypes_31, ml_backend__ml_call_gen__ArgModes_32, ml_backend__ml_call_gen__PredOrFunc_30, ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__ForClosureWrapper_20, (MR_Integer) 1, &ml_backend__ml_call_gen__InputRvals_33, &ml_backend__ml_call_gen__OutputLvals_34, &ml_backend__ml_call_gen__OutputTypes_35, &ml_backend__ml_call_gen__ConvArgDecls_36, &ml_backend__ml_call_gen__ConvOutputStatements_37, ml_backend__ml_call_gen__STATE_VARIABLE_Info_50_50, &ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52);
    }
#line 370 "ml_call_gen.m"
    ml_backend__ml_call_gen__ObjectRval_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 371 "ml_call_gen.m"
    {
#line 371 "ml_call_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_call_gen__ProcInfo_29, &ml_backend__ml_call_gen__Detism_39);
    }
#line 374 "ml_call_gen.m"
    ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvArgDecls_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 375 "ml_call_gen.m"
      ml_backend__ml_call_gen__succeeded = (ml_backend__ml_call_gen__ConvOutputStatements_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "ml_call_gen.m"
    if (ml_backend__ml_call_gen__succeeded)
#line 379 "ml_call_gen.m"
      {
#line 379 "ml_call_gen.m"
        ml_backend__ml_call_gen__ml_gen_mlds_call_12_p_0(ml_backend__ml_call_gen__Signature_26, ml_backend__ml_call_gen__ObjectRval_38, ml_backend__ml_call_gen__FuncRval_27, ml_backend__ml_call_gen__InputRvals_33, ml_backend__ml_call_gen__OutputLvals_34, ml_backend__ml_call_gen__OutputTypes_35, ml_backend__ml_call_gen__Detism_39, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__Decls_21, ml_backend__ml_call_gen__Statements_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
#line 379 "ml_call_gen.m"
        return;
      }
#line 382 "ml_call_gen.m"
    else
#line 389 "ml_call_gen.m"
      {
#line 389 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenCall_40;
#line 389 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41;
#line 389 "ml_call_gen.m"
        MR_Word ml_backend__ml_call_gen__CallAndConvOutputDecls_46;

#line 388 "ml_call_gen.m"
        {
#line 388 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenCall_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_3[0]));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_1));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 3) = ((MR_Box) (ml_backend__ml_call_gen__Signature_26));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 4) = ((MR_Box) (ml_backend__ml_call_gen__ObjectRval_38));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 5) = ((MR_Box) (ml_backend__ml_call_gen__FuncRval_27));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 6) = ((MR_Box) (ml_backend__ml_call_gen__InputRvals_33));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 7) = ((MR_Box) (ml_backend__ml_call_gen__OutputLvals_34));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 8) = ((MR_Box) (ml_backend__ml_call_gen__OutputTypes_35));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 9) = ((MR_Box) (ml_backend__ml_call_gen__Detism_39));
#line 388 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenCall_40, 10) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
#line 388 "ml_call_gen.m"
        }
#line 393 "ml_call_gen.m"
        {
#line 393 "ml_call_gen.m"
          ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 0) = ((MR_Box) (&ml_backend__ml_call_gen_scalar_common_4[0]));
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 1) = ((MR_Box) (ml_backend__ml_call_gen__ml_gen_call_12_p_0_2));
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 3) = ((MR_Box) (ml_backend__ml_call_gen__CodeModel_18));
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 4) = ((MR_Box) (ml_backend__ml_call_gen__Context_19));
#line 393 "ml_call_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, 5) = ((MR_Box) (ml_backend__ml_call_gen__ConvOutputStatements_37));
#line 393 "ml_call_gen.m"
        }
#line 404 "ml_call_gen.m"
        {
#line 404 "ml_call_gen.m"
          ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_call_gen__CodeModel_18, ml_backend__ml_call_gen__Context_19, ml_backend__ml_call_gen__DoGenCall_40, ml_backend__ml_call_gen__DoGenConvOutputAndSucceed_41, &ml_backend__ml_call_gen__CallAndConvOutputDecls_46, ml_backend__ml_call_gen__Statements_22, ml_backend__ml_call_gen__STATE_VARIABLE_Info_52_52, ml_backend__ml_call_gen__STATE_VARIABLE_Info_49);
        }
#line 407 "ml_call_gen.m"
        {
#line 407 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_21 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_call_gen__ConvArgDecls_36, ml_backend__ml_call_gen__CallAndConvOutputDecls_46);
        }
#line 389 "ml_call_gen.m"
      }
#line 347 "ml_call_gen.m"
  }
#line 52 "ml_call_gen.m"
}

#line 35 "ml_call_gen.m"
void MR_CALL 
ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__GenericCall_10,
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgVars_11,
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__ArgModes_12,
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Determinism_13,
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__Context_14,
#line 35 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Decls_15,
#line 35 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__Statements_16,
#line 35 "ml_call_gen.m"
  MR_Word ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28,
#line 35 "ml_call_gen.m"
  MR_Word * ml_backend__ml_call_gen__STATE_VARIABLE_Info_29)
#line 35 "ml_call_gen.m"
{
#line 116 "ml_call_gen.m"
  {
#line 116 "ml_call_gen.m"
    MR_bool ml_backend__ml_call_gen__succeeded;

#line 116 "ml_call_gen.m"
#line 116 "ml_call_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_call_gen__GenericCall_10)) {
#line 116 "ml_call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 116 "ml_call_gen.m"
      case (MR_Integer) 0:
#line 117 "ml_call_gen.m"
        {
#line 117 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
#line 117 "ml_call_gen.m"
          return;
        }
#line 116 "ml_call_gen.m"
        break;
#line 116 "ml_call_gen.m"
      case (MR_Integer) 1:
#line 121 "ml_call_gen.m"
        {
#line 121 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_main_generic_call_9_p_0(ml_backend__ml_call_gen__GenericCall_10, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__ArgModes_12, ml_backend__ml_call_gen__Determinism_13, ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
#line 121 "ml_call_gen.m"
          return;
        }
#line 116 "ml_call_gen.m"
        break;
#line 116 "ml_call_gen.m"
      case (MR_Integer) 2:
#line 124 "ml_call_gen.m"
        {
#line 126 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 127 "ml_call_gen.m"
          *ml_backend__ml_call_gen__Statements_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 124 "ml_call_gen.m"
          *ml_backend__ml_call_gen__STATE_VARIABLE_Info_29 = ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28;
#line 124 "ml_call_gen.m"
        }
#line 116 "ml_call_gen.m"
        break;
#line 116 "ml_call_gen.m"
      case (MR_Integer) 3:
#line 130 "ml_call_gen.m"
        {
#line 130 "ml_call_gen.m"
          ml_backend__ml_call_gen__ml_gen_cast_6_p_0(ml_backend__ml_call_gen__Context_14, ml_backend__ml_call_gen__ArgVars_11, ml_backend__ml_call_gen__Decls_15, ml_backend__ml_call_gen__Statements_16, ml_backend__ml_call_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_call_gen__STATE_VARIABLE_Info_29);
#line 130 "ml_call_gen.m"
          return;
        }
#line 116 "ml_call_gen.m"
        break;
#line 116 "ml_call_gen.m"
    }
#line 116 "ml_call_gen.m"
  }
#line 35 "ml_call_gen.m"
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
