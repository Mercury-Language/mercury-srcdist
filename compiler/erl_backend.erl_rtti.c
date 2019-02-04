/*
** Automatically generated from `erl_rtti.m'
** by the Mercury compiler,
** version rotd-2018-04-12
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


// :- module erl_backend.erl_rtti.
// :- implementation.

/*
INIT mercury__erl_backend__erl_rtti__init
ENDINIT
*/

#include "erl_backend.erl_rtti.mih"


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
#include "backend_libs.erlang_rtti.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__530__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__455__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word MI_7,
  MR_Box Term_8,
  MR_Integer Index_9,
  MR_Word * ELDS_10,
  MR_Word STATE_VARIABLE_Defns_0_13,
  MR_Word * STATE_VARIABLE_Defns_14);

static void MR_CALL 
erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * Defns_3);

static void MR_CALL 
erl_backend__erl_rtti__extract_extra_arg_6_p_0(
  MR_Word TCIVar_7,
  MR_Integer Index_8,
  MR_Word * Var_9,
  MR_Word * ExtractStatement_10,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13);

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Integer NumExtra_8,
  MR_Word RttiProcLabel_9,
  MR_Word * WrapperFun_10,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RttiData_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtorData_5,
  MR_Word * RttiDefns_6);

static void MR_CALL 
erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(
  MR_Word Expr0_7,
  MR_Word * Expr_8,
  MR_Word STATE_VARIABLE_RevAssignments_0_18,
  MR_Word * STATE_VARIABLE_RevAssignments_19,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Details_6,
  MR_Word * Term_7,
  MR_Word * Defns_8);

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Word MI_6,
  MR_Box Term_7,
  MR_Word * ELDS_8,
  MR_Word STATE_VARIABLE_Defns_0_22,
  MR_Word * STATE_VARIABLE_Defns_23);

static void MR_CALL 
erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(
  MR_Word MI_6,
  MR_Word TI_7,
  MR_Word * Expr_8,
  MR_Word STATE_VARIABLE_Defns_0_11,
  MR_Word * STATE_VARIABLE_Defns_12);

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiProcLabel_7,
  MR_Word * WrapperFun_8,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeInfo_5,
  MR_Word * RttiDefns_6);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeInfo_5,
  MR_Word * RttiDefns_6);

static void MR_CALL 
erl_backend__erl_rtti__convert_du_functor_3_p_0(
  MR_Word Functor_4,
  MR_Integer FunctorNum_5,
  MR_Word * ErlangFunctor_6);

static void MR_CALL 
erl_backend__erl_rtti__convert_enum_functor_3_p_0(
  MR_Word EnumFunctor_4,
  MR_Integer FunctorNum_5,
  MR_Word * ErlangFunctor_6);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0(
  MR_Word CtorDetails_3);


static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_2[5][6];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_3[8][3];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_4[3][5];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_5[3][1];

static /* final */ const MR_Integer erl_backend__erl_rtti_scalar_common_6[1][2];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_7[1][10];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_8[2][9];




static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "plain"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "pseudo"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_3[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[0])),
    ((MR_Box) (erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[1])),
    ((MR_Box) (erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[0])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[1])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[1])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[2])),
    ((MR_Box) (erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[2])),
    ((MR_Box) (erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_rtti_scalar_common_1[4])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_rtti_scalar_common_1[5])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__erl_rtti_scalar_common_1[6])))
  },
};

static /* final */ const MR_Integer erl_backend__erl_rtti_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__530__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_Word LambdaHeadVar__2_18;
    MR_Word Id_11;

    if (((MR_tag((MR_Word) LambdaHeadVar__1_17)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TI_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), LambdaHeadVar__1_17, (MR_Integer) 0)));

      {
        Id_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Id_11, 0) = ((MR_Box) (TI_13));
      }
    }
    else
    {
      MR_Word PTI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 0)));

      {
        Id_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Id_11, 0) = ((MR_Box) (PTI_12));
      }
    }
    {
      LambdaHeadVar__2_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_18, 1) = ((MR_Box) (Id_11));
    }
    return LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__455__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (LambdaHeadVar__1_14));
    }
    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_15, 1) = ((MR_Box) (Var_16));
    }
    return LambdaHeadVar__2_15;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word MI_7,
  MR_Box Term_8,
  MR_Integer Index_9,
  MR_Word * ELDS_10,
  MR_Word STATE_VARIABLE_Defns_0_13,
  MR_Word * STATE_VARIABLE_Defns_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_21;
    MR_Box Arg_12;

    succeeded = mercury__deconstruct__arg_4_p_0(TypeInfo_for_T_20, &TypeInfo_21_21, Term_8, (MR_Integer) 0, Index_9, &Arg_12);
    if (succeeded)
      erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(TypeInfo_21_21, MI_7, Arg_12, ELDS_10, STATE_VARIABLE_Defns_0_13, STATE_VARIABLE_Defns_14);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.convert_arg_to_elds_expr\'/6", (MR_String) "arg failed");
        return;
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * Defns_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word TypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(ModuleInfo_1, TypeInfo_5, Defns_3);
  }
  else
  {
    MR_Word TypeInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

    erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(ModuleInfo_1, TypeInfo_8, Defns_3);
  }
}

static void MR_CALL 
erl_backend__erl_rtti__extract_extra_arg_6_p_0(
  MR_Word TCIVar_7,
  MR_Integer Index_8,
  MR_Word * Var_9,
  MR_Word * ExtractStatement_10,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13)
{
  {
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "Extra", Var_9, STATE_VARIABLE_VarSet_0_12, STATE_VARIABLE_VarSet_13);
    Var_16 = erl_backend__elds__expr_from_var_1_f_0(*Var_9);
    Var_18 = ((MR_Integer) 1 + Index_8);
    Var_17 = erl_backend__elds__elds_call_element_2_f_0(TCIVar_7, Var_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ExtractStatement_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_17));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Var_9;
    MR_Word conv1_ExtractStatement_10;
    MR_Word conv0_STATE_VARIABLE_VarSet_13;

    erl_backend__erl_rtti__extract_extra_arg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), &conv2_Var_9, &conv1_ExtractStatement_10, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_VarSet_13);
    *wrapper_arg_2 = ((MR_Box) (conv2_Var_9));
    *wrapper_arg_3 = ((MR_Box) (conv1_ExtractStatement_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_13));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Integer NumExtra_8,
  MR_Word RttiProcLabel_9,
  MR_Word * WrapperFun_10,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38)
{
  {
    MR_Word TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word TypeInfo_149_149;
    MR_Word TypeCtorInfo_150_150;
    MR_Word PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 6)));
    MR_Integer ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 7)));
    MR_Word ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 5)));
    MR_Word TopFunctorModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 9)));
    MR_Word Detism_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word TCIVar_17;
    MR_Word Ws_18;
    MR_Word ExtraVars_19;
    MR_Word ExtractExtras_20;
    MR_Word ExtraVarsWs_21;
    MR_Word CallInputArgs_22;
    MR_Word CallOutputArgs_23;
    MR_Word WrapperInputVarsPlusExtras_24;
    MR_Word WrapperOutputVars_25;
    MR_Word WrapperInputVars_26;
    MR_Word CodeModel_27;
    MR_Word WrapperOutputVarsExprs_28;
    MR_Word AllWrapperInputVars_29;
    MR_Word SuccessExpr0_30;
    MR_Word DummyOutputVars_32;
    MR_Word MaterialiseDummyOutputVars_33;
    MR_Word SuccessExpr_34;
    MR_Word CallTarget_35;
    MR_Word DoCall_36;
    MR_Word STATE_VARIABLE_VarSet_40_40;
    MR_Integer Var_41;
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Integer Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_VarSet_46_46;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 0)));
    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 1)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 2)));
    MR_String Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 3)));
    MR_Integer Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 4)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 8)));
    MR_Word Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 11)));
    MR_Word Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Box conv3_STATE_VARIABLE_VarSet_46_46;

    mercury__varset__new_named_var_4_p_0(TypeCtorInfo_141_141, (MR_String) "TypeClassInfo", &TCIVar_17, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_40_40);
    Var_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_14);
    Var_41 = (Var_43 - NumExtra_8);
    mercury__varset__new_vars_4_p_0(TypeCtorInfo_141_141, Var_41, &Ws_18, STATE_VARIABLE_VarSet_40_40, &STATE_VARIABLE_VarSet_42_42);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TCIVar_17));
    }
    Var_45 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, NumExtra_8);
    TypeInfo_149_149 = (MR_Word) &erl_backend__erl_rtti_scalar_common_1[2];
    TypeCtorInfo_150_150 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
    mercury__list__map2_foldl_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeInfo_149_149, TypeCtorInfo_150_150, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[1], Var_44, Var_45, &ExtraVars_19, &ExtractExtras_20, ((MR_Box) (STATE_VARIABLE_VarSet_42_42)), &conv3_STATE_VARIABLE_VarSet_46_46);
    STATE_VARIABLE_VarSet_46_46 = ((MR_Word) conv3_STATE_VARIABLE_VarSet_46_46);
    ExtraVarsWs_21 = mercury__list__f_43_43_2_f_0(TypeInfo_149_149, ExtraVars_19, Ws_18);
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_149_149, ModuleInfo_7, (MR_Integer) 0, ExtraVarsWs_21, ArgTypes_14, TopFunctorModes_15, &CallInputArgs_22, &CallOutputArgs_23);
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_149_149, ModuleInfo_7, (MR_Integer) 1, ExtraVarsWs_21, ArgTypes_14, TopFunctorModes_15, &WrapperInputVarsPlusExtras_24, &WrapperOutputVars_25);
    WrapperInputVars_26 = mercury__list__delete_elems_2_f_0(TypeInfo_149_149, WrapperInputVarsPlusExtras_24, ExtraVars_19);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_16, &CodeModel_27);
    WrapperOutputVarsExprs_28 = erl_backend__elds__exprs_from_vars_1_f_0(WrapperOutputVars_25);
    switch (CodeModel_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            AllWrapperInputVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AllWrapperInputVars_29, 0) = ((MR_Box) (TCIVar_17));
            MR_hl_field(MR_mktag(1), AllWrapperInputVars_29, 1) = ((MR_Box) (WrapperInputVars_26));
          }
          SuccessExpr0_30 = erl_backend__elds__tuple_or_single_expr_1_f_0(WrapperOutputVarsExprs_28);
          *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_46_46;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SucceedVar_31;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_56;

          mercury__varset__new_named_var_4_p_0(TypeCtorInfo_141_141, (MR_String) "Succeed", &SucceedVar_31, STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarSet_38);
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (TCIVar_17));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (WrapperInputVars_26));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (SucceedVar_31));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          AllWrapperInputVars_29 = mercury__list__f_43_43_2_f_0(TypeInfo_149_149, Var_52, Var_53);
          Var_56 = erl_backend__elds__expr_from_var_1_f_0(SucceedVar_31);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          }
          {
            SuccessExpr0_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SuccessExpr0_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SuccessExpr0_30, 1) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(3), SuccessExpr0_30, 2) = ((MR_Box) (WrapperOutputVarsExprs_28));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_57;

          {
            AllWrapperInputVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AllWrapperInputVars_29, 0) = ((MR_Box) (TCIVar_17));
            MR_hl_field(MR_mktag(1), AllWrapperInputVars_29, 1) = ((MR_Box) (WrapperInputVars_26));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (WrapperOutputVarsExprs_28));
          }
          {
            SuccessExpr0_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SuccessExpr0_30, 0) = ((MR_Box) (Var_57));
          }
          *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_46_46;
        }
        break;
    }
    DummyOutputVars_32 = mercury__list__delete_elems_2_f_0(TypeInfo_149_149, WrapperOutputVars_25, CallOutputArgs_23);
    MaterialiseDummyOutputVars_33 = mercury__list__map_2_f_0(TypeInfo_149_149, TypeCtorInfo_150_150, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[7], DummyOutputVars_32);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MaterialiseDummyOutputVars_33));
    }
    SuccessExpr_34 = erl_backend__elds__join_exprs_2_f_0(Var_59, SuccessExpr0_30);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ProcId_13));
    }
    {
      CallTarget_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallTarget_35, 0) = ((MR_Box) (Var_60));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (SuccessExpr_34));
    }
    erl_backend__erl_call_gen__erl_make_call_6_p_0(CodeModel_27, CallTarget_35, CallInputArgs_22, CallOutputArgs_23, Var_61, &DoCall_36);
    Var_63 = erl_backend__elds__terms_from_vars_1_f_0(AllWrapperInputVars_29);
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ExtractExtras_20));
    }
    Var_64 = erl_backend__elds__join_exprs_2_f_0(Var_65, DoCall_36);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_64));
    }
    *WrapperFun_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_62);
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_WrapperFun_10;
    MR_Word conv0_STATE_VARIABLE_VarSet_38;

    erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_WrapperFun_10, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_VarSet_38);
    *wrapper_arg_2 = ((MR_Box) (conv1_WrapperFun_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_38));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RttiData_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) RttiData_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_61 = (MR_Word) MR_body(((MR_Word) RttiData_2), (MR_Integer) 0);

        erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(HeadVar__1_1, TypeCtorData_61, HeadVar__3_3);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), RttiData_2, (MR_Integer) 0)));

        erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(HeadVar__1_1, TypeInfo_47, HeadVar__3_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PseudoTypeInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), RttiData_2, (MR_Integer) 0)));

        erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(HeadVar__1_1, PseudoTypeInfo_51, HeadVar__3_3);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiData_2, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RttiDefn_6;
            MR_Word TCName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_2, (MR_Integer) 1)));
            MR_Word InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_2, (MR_Integer) 2)));
            MR_String InstanceStr_9 = ((MR_String) (MR_hl_field(MR_mktag(3), RttiData_2, (MR_Integer) 3)));
            MR_Word BaseTypeClassInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), RttiData_2, (MR_Integer) 4)));
            MR_Integer N2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 1)));
            MR_Integer N3_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 2)));
            MR_Integer N4_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 3)));
            MR_Integer N5_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 4)));
            MR_Word Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 5)));
            MR_Integer NumExtra_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseTypeClassInfo_10, (MR_Integer) 0)));
            MR_Word MethodWrappers_18;
            MR_Word VarSet_19;
            MR_Word BaseTypeClassInfoData_20;
            MR_Word RttiId_21;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_43;
            MR_Box conv2_VarSet_19;

            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1));
              MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (HeadVar__1_1));
              MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (NumExtra_17));
            }
            Var_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[1], Var_24, Methods_16, &MethodWrappers_18, ((MR_Box) (Var_25)), &conv2_VarSet_19);
            VarSet_19 = ((MR_Word) conv2_VarSet_19);
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (NumExtra_17));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (Var_28));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (N2_12));
            }
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (Var_31));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (N3_13));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (Var_34));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (N4_14));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Var_37));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (N5_15));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (Var_40));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MethodWrappers_18));
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
            }
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
            }
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
            }
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
            }
            {
              BaseTypeClassInfoData_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), BaseTypeClassInfoData_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), BaseTypeClassInfoData_20, 1) = ((MR_Box) (Var_26));
            }
            {
              RttiId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), RttiId_21, 0) = ((MR_Box) (TCName_7));
              MR_hl_field(MR_mktag(3), RttiId_21, 1) = ((MR_Box) (InstanceModule_8));
              MR_hl_field(MR_mktag(3), RttiId_21, 2) = ((MR_Box) (InstanceStr_9));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (BaseTypeClassInfoData_20));
            }
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_43));
            }
            {
              RttiDefn_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RttiDefn_6, 0) = ((MR_Box) (RttiId_21));
              MR_hl_field(MR_mktag(0), RttiDefn_6, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), RttiDefn_6, 2) = ((MR_Box) (VarSet_19));
              MR_hl_field(MR_mktag(0), RttiDefn_6, 3) = ((MR_Box) (Var_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiDefn_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      break;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtorData_5,
  MR_Word * RttiDefns_6)
{
  {
    MR_Word TypeCtorInfo_59_59;
    MR_Integer Version_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 0)));
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 1)));
    MR_String TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 2)));
    MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 3)));
    MR_Word UnifyProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 4)));
    MR_Word CompareProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 5)));
    MR_Word Details_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 6)));
    MR_Word VarSet_14;
    MR_Word UnifyExpr_15;
    MR_Word CompareExpr_16;
    MR_Word ELDSDetails0_17;
    MR_Word RttiDefns0_18;
    MR_Word ELDSDetails_19;
    MR_Word RevAssignments_20;
    MR_Word ELDSTypeCtorData_21;
    MR_Word ClauseBody_22;
    MR_Word TypeCtor_23;
    MR_Word RttiId_24;
    MR_Word RttiDefn_26;
    MR_Word STATE_VARIABLE_VarSet_27_27;
    MR_Word STATE_VARIABLE_VarSet_28_28;
    MR_Word STATE_VARIABLE_VarSet_29_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;

    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &STATE_VARIABLE_VarSet_27_27);
    if ((UnifyProcLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.gen_init_special_pred\'/5", (MR_String) "no special pred");
        return;
      }
    }
    else
    {
      MR_Word RttiProcLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnifyProcLabel_11, (MR_Integer) 0)));

      erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(ModuleInfo_4, RttiProcLabel_66, &UnifyExpr_15, STATE_VARIABLE_VarSet_27_27, &STATE_VARIABLE_VarSet_28_28);
    }
    if ((CompareProcLabel_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.gen_init_special_pred\'/5", (MR_String) "no special pred");
        return;
      }
    }
    else
    {
      MR_Word RttiProcLabel_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), CompareProcLabel_12, (MR_Integer) 0)));

      erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(ModuleInfo_4, RttiProcLabel_77, &CompareExpr_16, STATE_VARIABLE_VarSet_28_28, &STATE_VARIABLE_VarSet_29_29);
    }
    erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(ModuleInfo_4, Details_13, &ELDSDetails0_17, &RttiDefns0_18);
    erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(ELDSDetails0_17, &ELDSDetails_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevAssignments_20, STATE_VARIABLE_VarSet_29_29, &VarSet_14);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (Arity_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (Var_34));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Version_7));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Var_37));
    }
    Var_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (Var_42));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (TypeName_9));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (Var_46));
    }
    Var_48 = erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(Details_13);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ELDSDetails_19));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (CompareExpr_16));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (UnifyExpr_15));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      ELDSTypeCtorData_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ELDSTypeCtorData_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), ELDSTypeCtorData_21, 1) = ((MR_Box) (Var_32));
    }
    TypeCtorInfo_59_59 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
    Var_52 = mercury__list__reverse_1_f_0(TypeCtorInfo_59_59, RevAssignments_20);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (ELDSTypeCtorData_21));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_59_59, Var_52, Var_53);
    {
      ClauseBody_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClauseBody_22, 0) = ((MR_Box) (Var_51));
    }
    {
      TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_23, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), TypeCtor_23, 1) = ((MR_Box) (TypeName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_23, 2) = ((MR_Box) (Arity_10));
    }
    {
      RttiId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiId_24, 0) = ((MR_Box) (TypeCtor_23));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ClauseBody_22));
    }
    {
      RttiDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiDefn_26, 0) = ((MR_Box) (RttiId_24));
      MR_hl_field(MR_mktag(0), RttiDefn_26, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), RttiDefn_26, 2) = ((MR_Box) (VarSet_14));
      MR_hl_field(MR_mktag(0), RttiDefn_26, 3) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiDefn_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RttiDefns0_18));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(
  MR_Word Expr0_7,
  MR_Word * Expr_8,
  MR_Word STATE_VARIABLE_RevAssignments_0_18,
  MR_Word * STATE_VARIABLE_RevAssignments_19,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Expr0_7)) == (MR_mktag((MR_Integer) 2)));
    MR_Word Functor_11;
    MR_Word Head_12;
    MR_Word Tail0_13;
    MR_Word SymName_14;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;

    if (succeeded)
    {
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr0_7, (MR_Integer) 0)));
      succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 14)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0)));
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Tail0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
              Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
              succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), Functor_11, (MR_Integer) 0)));
                  succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1)));
                    Var_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
                    succeeded = (strcmp(Var_28, (MR_String) "[|]") == 0);
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
      MR_Word Tail_15;
      MR_Word V_16;
      MR_Word Assign_17;
      MR_Word STATE_VARIABLE_RevAssignments_29_29;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(Tail0_13, &Tail_15, STATE_VARIABLE_RevAssignments_0_18, &STATE_VARIABLE_RevAssignments_29_29, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_30_30);
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &V_16, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_21);
      Var_32 = erl_backend__elds__expr_from_var_1_f_0(V_16);
      {
        Assign_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Assign_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Assign_17, 1) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(3), Assign_17, 2) = ((MR_Box) (Tail_15));
      }
      Var_37 = erl_backend__elds__expr_from_var_1_f_0(V_16);
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Head_12));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Functor_11));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Expr_8 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_33));
      }
      mercury__list__cons_3_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, ((MR_Box) (Assign_17)), STATE_VARIABLE_RevAssignments_29_29, STATE_VARIABLE_RevAssignments_19);
    }
    else
    {
      *Expr_8 = Expr0_7;
      *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
      *STATE_VARIABLE_RevAssignments_19 = STATE_VARIABLE_RevAssignments_0_18;
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Details_6,
  MR_Word * Term_7,
  MR_Word * Defns_8)
{
  switch (MR_tag((MR_Word) Details_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Term_7 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_5[2]);
        *Defns_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Details_6, (MR_Integer) 0)));

        erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &erl_backend__erl_rtti_scalar_common_1[3], ModuleInfo_5, ((MR_Box) (Functors_9)), Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Defns_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String DummyFunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(2), Details_6, (MR_Integer) 0)));

        erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ModuleInfo_5, ((MR_Box) (DummyFunctorName_10)), Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Defns_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Details_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybePseudoTypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Details_6, (MR_Integer) 1)));

            erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ModuleInfo_5, ((MR_Box) (MaybePseudoTypeInfo_11)), Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Defns_8);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *Term_7 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_5[2]);
            *Defns_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_ELDS_10;
    MR_Word conv7_STATE_VARIABLE_Defns_14;

    erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Integer) wrapper_arg_1), &conv8_ELDS_10, ((MR_Word) wrapper_arg_3), &conv7_STATE_VARIABLE_Defns_14);
    *wrapper_arg_2 = ((MR_Box) (conv8_ELDS_10));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_Defns_14));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Word MI_6,
  MR_Box Term_7,
  MR_Word * ELDS_8,
  MR_Word STATE_VARIABLE_Defns_0_22,
  MR_Word * STATE_VARIABLE_Defns_23)
{
  {
    MR_bool succeeded;
    MR_Integer Int_10;
    MR_Box conv0_Int_10;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Term_7, &conv0_Int_10);
    if (succeeded)
    {
      Int_10 = ((MR_Integer) conv0_Int_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Int_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *ELDS_8 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_24));
      }
      *STATE_VARIABLE_Defns_23 = STATE_VARIABLE_Defns_0_22;
    }
    else
    {
      MR_Char Char_11;
      MR_Box conv1_Char_11;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, Term_7, &conv1_Char_11);
      if (succeeded)
      {
        Char_11 = ((MR_Char) (MR_Word) conv1_Char_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_Word) (Char_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ELDS_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_25));
        }
        *STATE_VARIABLE_Defns_23 = STATE_VARIABLE_Defns_0_22;
      }
      else
      {
        MR_String String_12;
        MR_Box conv2_String_12;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Term_7, &conv2_String_12);
        if (succeeded)
        {
          String_12 = ((MR_String) conv2_String_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_26;

          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (String_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ELDS_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_26));
          }
          *STATE_VARIABLE_Defns_23 = STATE_VARIABLE_Defns_0_22;
        }
        else
        {
          MR_Float Float_13;
          MR_Box conv3_Float_13;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, Term_7, &conv3_Float_13);
          if (succeeded)
          {
            Float_13 = MR_unbox_float(conv3_Float_13);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_27;

            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), Var_27, 1) = MR_box_float(Float_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ELDS_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_27));
            }
            *STATE_VARIABLE_Defns_23 = STATE_VARIABLE_Defns_0_22;
          }
          else
          {
            MR_Word Atom_14;
            MR_Box conv4_Atom_14;

            succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0, Term_7, &conv4_Atom_14);
            if (succeeded)
            {
              Atom_14 = ((MR_Word) conv4_Atom_14);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String S_15 = (MR_String) Atom_14;
              MR_Word Var_28;

              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (S_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ELDS_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_28));
              }
              *STATE_VARIABLE_Defns_23 = STATE_VARIABLE_Defns_0_22;
            }
            else
            {
              MR_Word MaybePseudoTypeInfo_16;
              MR_Box conv5_MaybePseudoTypeInfo_16;

              succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, Term_7, &conv5_MaybePseudoTypeInfo_16);
              if (succeeded)
              {
                MaybePseudoTypeInfo_16 = ((MR_Word) conv5_MaybePseudoTypeInfo_16);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word TypeCtorInfo_15_67;
                MR_Word Defns_63;
                MR_Word RttiId_64;
                MR_Word Var_66;

                if (((MR_tag((MR_Word) MaybePseudoTypeInfo_16)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word TypeInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePseudoTypeInfo_16, (MR_Integer) 0)));

                  {
                    RttiId_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RttiId_64, 0) = ((MR_Box) (TypeInfo_69));
                  }
                  erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(MI_6, TypeInfo_69, &Defns_63);
                }
                else
                {
                  MR_Word PTypeInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePseudoTypeInfo_16, (MR_Integer) 0)));

                  {
                    RttiId_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), RttiId_64, 0) = ((MR_Box) (PTypeInfo_73));
                  }
                  erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(MI_6, PTypeInfo_73, &Defns_63);
                }
                TypeCtorInfo_15_67 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
                Var_66 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_15_67, Defns_63, STATE_VARIABLE_Defns_0_22);
                *STATE_VARIABLE_Defns_23 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_15_67, Var_66);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ELDS_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RttiId_64));
                }
              }
              else
              {
                MR_Word MaybePseudoTypeInfoOrSelf_17;
                MR_Box conv6_MaybePseudoTypeInfoOrSelf_17;

                succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_43, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, Term_7, &conv6_MaybePseudoTypeInfoOrSelf_17);
                if (succeeded)
                {
                  MaybePseudoTypeInfoOrSelf_17 = ((MR_Word) conv6_MaybePseudoTypeInfoOrSelf_17);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(MI_6, MaybePseudoTypeInfoOrSelf_17, ELDS_8, STATE_VARIABLE_Defns_0_22, STATE_VARIABLE_Defns_23);
                else
                {
                  MR_String Functor_18;
                  MR_Integer Arity_19;
                  MR_Word Exprs_20;
                  MR_Word Var_32;
                  MR_Word Var_33;
                  MR_Integer Var_36;
                  MR_Box conv9_STATE_VARIABLE_Defns_23;

                  mercury__deconstruct__functor_4_p_0(TypeInfo_for_T_43, Term_7, (MR_Integer) 0, &Functor_18, &Arity_19);
                  {
                    Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TypeInfo_for_T_43));
                    MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (MI_6));
                    MR_hl_field(MR_mktag(0), Var_32, 5) = Term_7;
                  }
                  Var_36 = (Arity_19 - (MR_Integer) 1);
                  Var_33 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_36);
                  mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_32, Var_33, &Exprs_20, ((MR_Box) (STATE_VARIABLE_Defns_0_22)), &conv9_STATE_VARIABLE_Defns_23);
                  *STATE_VARIABLE_Defns_23 = ((MR_Word) conv9_STATE_VARIABLE_Defns_23);
                  succeeded = (strcmp(Functor_18, (MR_String) "{}") == 0);
                  if (succeeded)
                  {
                    MR_Word Var_38;

                    {
                      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Exprs_20));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ELDS_8 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_38));
                    }
                  }
                  else
                  {
                    MR_Word FunctorTerm_21;
                    MR_Word Var_39;
                    MR_Word Var_40;
                    MR_Word Var_41;
                    MR_Word Var_42;

                    {
                      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Functor_18));
                    }
                    {
                      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
                    }
                    {
                      FunctorTerm_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), FunctorTerm_21, 0) = ((MR_Box) (Var_39));
                    }
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FunctorTerm_21));
                      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Exprs_20));
                    }
                    {
                      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ELDS_8 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_41));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(
  MR_Word MI_6,
  MR_Word TI_7,
  MR_Word * Expr_8,
  MR_Word STATE_VARIABLE_Defns_0_11,
  MR_Word * STATE_VARIABLE_Defns_12)
{
  {
    MR_Word TypeCtorInfo_15_15;
    MR_Word Defns_9;
    MR_Word RttiId_10;
    MR_Word Var_14;

    switch (MR_tag((MR_Word) TI_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.maybe_pseudo_type_info_or_self_to_elds\'/4", (MR_String) "self not handled yet");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PTypeInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TI_7, (MR_Integer) 0)));

          {
            RttiId_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RttiId_10, 0) = ((MR_Box) (PTypeInfo_45));
          }
          erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(MI_6, PTypeInfo_45, &Defns_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), TI_7, (MR_Integer) 0)));

          {
            RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RttiId_10, 0) = ((MR_Box) (TypeInfo_33));
          }
          erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(MI_6, TypeInfo_33, &Defns_9);
        }
        break;
    }
    TypeCtorInfo_15_15 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    Var_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_15_15, Defns_9, STATE_VARIABLE_Defns_0_11);
    *STATE_VARIABLE_Defns_12 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_15_15, Var_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Expr_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RttiId_10));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiProcLabel_7,
  MR_Word * WrapperFun_8,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  {
    MR_Word TypeInfo_121_121;
    MR_Word PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 6)));
    MR_Integer ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 7)));
    MR_Word ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 5)));
    MR_Word TopFunctorModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 9)));
    MR_Word Detism_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word Ws_15;
    MR_Word CallInputArgs_16;
    MR_Word CallOutputArgs_17;
    MR_Word WrapperInputVars_18;
    MR_Word WrapperOutputVars_19;
    MR_Word CodeModel_20;
    MR_Word WrapperOutputVarsExprs_21;
    MR_Word SuccessExpr0_22;
    MR_Word DummyOutputVars_23;
    MR_Word MaterialiseDummyOutputVars_24;
    MR_Word SuccessExpr_25;
    MR_Word CallTarget_26;
    MR_Word DoCall_27;
    MR_Integer Var_30;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 0)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 1)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 2)));
    MR_String Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 3)));
    MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 4)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 8)));
    MR_Word Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 11)));
    MR_Word Var_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_7, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    Var_30 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_12);
    mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_30, &Ws_15, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
    TypeInfo_121_121 = (MR_Word) &erl_backend__erl_rtti_scalar_common_1[2];
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_121_121, ModuleInfo_6, (MR_Integer) 0, Ws_15, ArgTypes_12, TopFunctorModes_13, &CallInputArgs_16, &CallOutputArgs_17);
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_121_121, ModuleInfo_6, (MR_Integer) 1, Ws_15, ArgTypes_12, TopFunctorModes_13, &WrapperInputVars_18, &WrapperOutputVars_19);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_14, &CodeModel_20);
    WrapperOutputVarsExprs_21 = erl_backend__elds__exprs_from_vars_1_f_0(WrapperOutputVars_19);
    switch (CodeModel_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SuccessExpr0_22 = erl_backend__elds__tuple_or_single_expr_1_f_0(WrapperOutputVarsExprs_21);
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.erl_gen_special_pred_wrapper\'/5", (MR_String) "model_non code_model");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (WrapperOutputVarsExprs_21));
          }
          {
            SuccessExpr0_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SuccessExpr0_22, 0) = ((MR_Box) (Var_37));
          }
        }
        break;
    }
    DummyOutputVars_23 = mercury__list__delete_elems_2_f_0(TypeInfo_121_121, WrapperOutputVars_19, CallOutputArgs_17);
    MaterialiseDummyOutputVars_24 = mercury__list__map_2_f_0(TypeInfo_121_121, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[6], DummyOutputVars_23);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MaterialiseDummyOutputVars_24));
    }
    SuccessExpr_25 = erl_backend__elds__join_exprs_2_f_0(Var_39, SuccessExpr0_22);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ProcId_11));
    }
    {
      CallTarget_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallTarget_26, 0) = ((MR_Box) (Var_40));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (SuccessExpr_25));
    }
    erl_backend__erl_call_gen__erl_make_call_6_p_0(CodeModel_20, CallTarget_26, CallInputArgs_16, CallOutputArgs_17, Var_41, &DoCall_27);
    Var_43 = erl_backend__elds__terms_from_vars_1_f_0(WrapperInputVars_18);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (DoCall_27));
    }
    *WrapperFun_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_42);
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_9;

              Var_9 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_list");
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_11;

              Var_11 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_array");
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_11));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_99;

              Var_99 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_foreign");
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_99));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_4;

          Var_4 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_du");
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_7;

          Var_7 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_dummy");
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_14;

              Var_14 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_eqv");
              {
                HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) Var_110)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Var_110)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_17;

                        Var_17 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_17));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_20;

                        Var_20 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_uint");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_20));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_23;

                        Var_23 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int8");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_23));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_26;

                        Var_26 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_uint8");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_26));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_29;

                        Var_29 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int16");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_29));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_32;

                        Var_32 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_uint16");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_32));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_35;

                        Var_35 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int32");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_35));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word Var_38;

                        Var_38 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_uint32");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_38));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word Var_41;

                        Var_41 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int64");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_41));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word Var_44;

                        Var_44 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_uint64");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_44));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word Var_47;

                        Var_47 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_float");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_47));
                        }
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Word Var_50;

                        Var_50 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_char");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_50));
                        }
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word Var_53;

                        Var_53 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_string");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_53));
                        }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word Var_56;

                        Var_56 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_void");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_56));
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word Var_67;

                        Var_67 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_pred");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_67));
                        }
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word Var_70;

                        Var_70 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_func");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_70));
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word Var_73;

                        Var_73 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_tuple");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_73));
                        }
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        MR_Word Var_76;

                        Var_76 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_ref");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_76));
                        }
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        MR_Word Var_79;

                        Var_79 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_desc");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_79));
                        }
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        MR_Word Var_82;

                        Var_82 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_pseudo_type_desc");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_82));
                        }
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        MR_Word Var_85;

                        Var_85 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_ctor_desc");
                        {
                          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_85));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_110, (MR_Integer) 0)));

                    switch (Var_112) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_64;

                          Var_64 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_c_pointer");
                          {
                            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_64));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_60;

                          Var_60 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_stable_c_pointer");
                          {
                            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_60));
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              switch (Var_111) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  {
                    MR_Word Var_97;

                    Var_97 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_base_typeclass_info");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_97));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Var_102;

                    Var_102 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_hp");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_102));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Var_105;

                    Var_105 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_subgoal");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_105));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Var_108;

                    Var_108 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_ticket");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_108));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_91;

                    Var_91 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_ctor_info");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_91));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_88;

                    Var_88 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_info");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_88));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_94;

                    Var_94 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_typeclass_info");
                    {
                      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_94));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_18;

    conv3_LambdaHeadVar__2_18 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__530__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Defns_3;

    erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_Defns_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_Defns_3));
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_18;

    conv1_LambdaHeadVar__2_18 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__530__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_18));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Defns_3;

    erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Defns_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_Defns_3));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeInfo_5,
  MR_Word * RttiDefns_6)
{
  {
    MR_Word ELDSTypeInfo_9;
    MR_Word ArgRttiDefns_10;
    MR_Word ELDSFun_16;
    MR_Word ELDSTuple_17;
    MR_Word RttiId_18;
    MR_Word RttiDefn_20;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;

    switch (MR_tag((MR_Word) TypeInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor_7 = (MR_Word) MR_body(((MR_Word) TypeInfo_5), (MR_Integer) 0);
          MR_Word TypeCtorRttiId_8;

          {
            TypeCtorRttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorRttiId_8, 0) = ((MR_Box) (RttiTypeCtor_7));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ELDSTypeInfo_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ELDSTypeInfo_9, 1) = ((MR_Box) (TypeCtorRttiId_8));
          }
          ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_22_68;
          MR_Word TypeCtorInfo_24_70;
          MR_Word TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 0)));
          MR_Word ArgTypeInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 1)));
          MR_Word ELDSArgTypeInfos_13;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word ArgRttiDefns0_55;
          MR_Word Var_60;
          MR_Word Var_61;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleInfo_4));
          }
          TypeCtorInfo_22_68 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
          mercury__list__map_3_p_0(TypeCtorInfo_22_68, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_60, ArgTypeInfos_12, &ArgRttiDefns0_55);
          TypeCtorInfo_24_70 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
          Var_61 = mercury__list__condense_1_f_0(TypeCtorInfo_24_70, ArgRttiDefns0_55);
          ArgRttiDefns_10 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_24_70, Var_61);
          ELDSArgTypeInfos_13 = mercury__list__map_2_f_0(TypeCtorInfo_22_68, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[4], ArgTypeInfos_12);
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (TypeCtor_11));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (ELDSArgTypeInfos_13));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ELDSTypeInfo_9, 0) = ((MR_Box) (Var_30));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_22_89;
          MR_Word TypeCtorInfo_24_91;
          MR_Word VarCtorId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 0)));
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Integer Var_29;
          MR_Word TypeCtor_46;
          MR_Word ArgTypeInfos_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 1)));
          MR_Word ELDSArgTypeInfos_48;
          MR_Word ArgRttiDefns0_76;
          MR_Word Var_81;
          MR_Word Var_82;

          TypeCtor_46 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarCtorId_14);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0_3));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (ModuleInfo_4));
          }
          TypeCtorInfo_22_89 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
          mercury__list__map_3_p_0(TypeCtorInfo_22_89, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_81, ArgTypeInfos_47, &ArgRttiDefns0_76);
          TypeCtorInfo_24_91 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
          Var_82 = mercury__list__condense_1_f_0(TypeCtorInfo_24_91, ArgRttiDefns0_76);
          ArgRttiDefns_10 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_24_91, Var_82);
          ELDSArgTypeInfos_48 = mercury__list__map_2_f_0(TypeCtorInfo_22_89, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[5], ArgTypeInfos_47);
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (TypeCtor_46));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
          }
          Var_29 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ArgTypeInfos_47);
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (Var_29));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (Var_28));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (ELDSArgTypeInfos_48));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ELDSTypeInfo_9, 0) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer I_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), TypeInfo_5, (MR_Integer) 0)));
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (I_15));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ELDSTypeInfo_9, 0) = ((MR_Box) (Var_21));
          }
          ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ELDSTypeInfo_9));
    }
    ELDSFun_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_34);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ELDSFun_16));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_5[1])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      ELDSTuple_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ELDSTuple_17, 0) = ((MR_Box) (Var_36));
    }
    {
      RttiId_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RttiId_18, 0) = ((MR_Box) (TypeInfo_5));
    }
    Var_43 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ELDSTuple_17));
    }
    {
      RttiDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiDefn_20, 0) = ((MR_Box) (RttiId_18));
      MR_hl_field(MR_mktag(0), RttiDefn_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), RttiDefn_20, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), RttiDefn_20, 3) = ((MR_Box) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiDefn_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRttiDefns_10));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_15;

    conv3_LambdaHeadVar__2_15 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__455__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_RttiDefns_6;

    erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_RttiDefns_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_RttiDefns_6));
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_15;

    conv1_LambdaHeadVar__2_15 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__455__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RttiDefns_6;

    erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_RttiDefns_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_RttiDefns_6));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeInfo_5,
  MR_Word * RttiDefns_6)
{
  {
    MR_Word ELDSTypeInfo_9;
    MR_Word ArgRttiDefns_10;
    MR_Word ELDSFun_15;
    MR_Word ELDSTuple_16;
    MR_Word RttiId_17;
    MR_Word RttiDefn_19;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;

    switch (MR_tag((MR_Word) TypeInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor_7 = (MR_Word) MR_body(((MR_Word) TypeInfo_5), (MR_Integer) 0);
          MR_Word TypeCtorRttiId_8;

          {
            TypeCtorRttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorRttiId_8, 0) = ((MR_Box) (RttiTypeCtor_7));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ELDSTypeInfo_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ELDSTypeInfo_9, 1) = ((MR_Box) (TypeCtorRttiId_8));
          }
          ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_20_64;
          MR_Word TypeCtorInfo_22_66;
          MR_Word TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 0)));
          MR_Word ArgTypeInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_5, (MR_Integer) 1)));
          MR_Word ELDSArgTypeInfos_13;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word ArgRttiDefns0_53;
          MR_Word Var_55;
          MR_Word Var_56;

          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[3]));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ModuleInfo_4));
          }
          TypeCtorInfo_20_64 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
          mercury__list__map_3_p_0(TypeCtorInfo_20_64, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_55, ArgTypeInfos_12, &ArgRttiDefns0_53);
          TypeCtorInfo_22_66 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
          Var_56 = mercury__list__condense_1_f_0(TypeCtorInfo_22_66, ArgRttiDefns0_53);
          ArgRttiDefns_10 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_22_66, Var_56);
          ELDSArgTypeInfos_13 = mercury__list__map_2_f_0(TypeCtorInfo_20_64, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[2], ArgTypeInfos_12);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TypeCtor_11));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (ELDSArgTypeInfos_13));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ELDSTypeInfo_9, 0) = ((MR_Box) (Var_28));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_20_83;
          MR_Word TypeCtorInfo_22_85;
          MR_Word VarCtorId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 0)));
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Integer Var_27;
          MR_Word TypeCtor_44;
          MR_Word ArgTypeInfos_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_5, (MR_Integer) 1)));
          MR_Word ELDSArgTypeInfos_46;
          MR_Word ArgRttiDefns0_72;
          MR_Word Var_74;
          MR_Word Var_75;

          TypeCtor_44 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarCtorId_14);
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[3]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0_3));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleInfo_4));
          }
          TypeCtorInfo_20_83 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
          mercury__list__map_3_p_0(TypeCtorInfo_20_83, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_74, ArgTypeInfos_45, &ArgRttiDefns0_72);
          TypeCtorInfo_22_85 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
          Var_75 = mercury__list__condense_1_f_0(TypeCtorInfo_22_85, ArgRttiDefns0_72);
          ArgRttiDefns_10 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_22_85, Var_75);
          ELDSArgTypeInfos_46 = mercury__list__map_2_f_0(TypeCtorInfo_20_83, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[3], ArgTypeInfos_45);
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (TypeCtor_44));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
          }
          Var_27 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ArgTypeInfos_45);
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (ELDSArgTypeInfos_46));
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
          }
          {
            ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ELDSTypeInfo_9, 0) = ((MR_Box) (Var_20));
          }
        }
        break;
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ELDSTypeInfo_9));
    }
    ELDSFun_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_32);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ELDSFun_15));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_5[0])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      ELDSTuple_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ELDSTuple_16, 0) = ((MR_Box) (Var_34));
    }
    {
      RttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RttiId_17, 0) = ((MR_Box) (TypeInfo_5));
    }
    Var_41 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ELDSTuple_16));
    }
    {
      RttiDefn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RttiDefn_19, 0) = ((MR_Box) (RttiId_17));
      MR_hl_field(MR_mktag(0), RttiDefn_19, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), RttiDefn_19, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), RttiDefn_19, 3) = ((MR_Box) (Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiDefn_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRttiDefns_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_du_functor_3_p_0(
  MR_Word Functor_4,
  MR_Integer FunctorNum_5,
  MR_Word * ErlangFunctor_6)
{
  {
    MR_String Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 0)));
    MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 1)));
    MR_Integer Ordinal_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 2)));
    MR_Word ArgInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 4)));
    MR_Word Exist_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 5)));
    MR_Word SubtypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 6)));
    MR_Word Var_14 = (MR_Word) Name_7;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ErlangFunctor_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Ordinal_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FunctorNum_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ArgInfos_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Exist_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubtypeInfo_13));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_enum_functor_3_p_0(
  MR_Word EnumFunctor_4,
  MR_Integer FunctorNum_5,
  MR_Word * ErlangFunctor_6)
{
  {
    MR_String Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), EnumFunctor_4, (MR_Integer) 0)));
    MR_Integer Ordinal_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EnumFunctor_4, (MR_Integer) 1)));
    MR_Word Var_10 = (MR_Word) Name_7;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ErlangFunctor_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Ordinal_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FunctorNum_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word RttiDatas_5,
  MR_Word * RttiDefns_6)
{
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word RttiDefns0_7;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__map_3_p_0((MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], Var_8, RttiDatas_5, &RttiDefns0_7);
    TypeCtorInfo_14_14 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    Var_9 = mercury__list__condense_1_f_0(TypeCtorInfo_14_14, RttiDefns0_7);
    *RttiDefns_6 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_14_14, Var_9);
  }
}

MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_rtti_data_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = erl_backend__erl_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_114_108_97_110_103_95_114_116_116_105_95_100_97_116_97_95_95_91_49_93_95_48_2_f_0(HeadVar__2_2);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__erl_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_114_108_97_110_103_95_114_116_116_105_95_100_97_116_97_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorData_5 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
          MR_Integer Version_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 0)));
          MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 1)));
          MR_String TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 2)));
          MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 3)));
          MR_Word UnifyPred_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 4)));
          MR_Word ComparePred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 5)));
          MR_Word Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 7)));
          MR_Word ErlangUnify_15;
          MR_Word ErlangCompare_16;
          MR_Word ErlangDetails_17;
          MR_Word ErlangTypeCtorData_18;
          MR_Word _Flags_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorData_5, (MR_Integer) 6)));
          MR_Word ProcLabel_33;
          MR_Box conv0_ProcLabel_33;
          MR_Word ProcLabel_36;
          MR_Box conv1_ProcLabel_36;
          MR_String Var_43;

          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, UnifyPred_11, &conv0_ProcLabel_33);
          if (succeeded)
          {
            ProcLabel_33 = ((MR_Word) conv0_ProcLabel_33);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              ErlangUnify_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ErlangUnify_15, 0) = ((MR_Box) (ProcLabel_33));
            }
          else
            ErlangUnify_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ComparePred_12, &conv1_ProcLabel_36);
          if (succeeded)
          {
            ProcLabel_36 = ((MR_Word) conv1_ProcLabel_36);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              ErlangCompare_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ErlangCompare_16, 0) = ((MR_Box) (ProcLabel_36));
            }
          else
            ErlangCompare_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = (strcmp(TypeName_9, (MR_String) "list") == 0);
          if (succeeded)
          {
            succeeded = (Arity_10 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0)));
                succeeded = (strcmp(Var_43, (MR_String) "list") == 0);
              }
            }
          }
          if (succeeded)
            ErlangDetails_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_String Var_44;

            succeeded = (strcmp(TypeName_9, (MR_String) "array") == 0);
            if (succeeded)
            {
              succeeded = (Arity_10 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0)));
                  succeeded = (strcmp(Var_44, (MR_String) "array") == 0);
                }
              }
            }
            if (succeeded)
              ErlangDetails_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            else
              ErlangDetails_17 = erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0(Details_14);
          }
          {
            ErlangTypeCtorData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 0) = ((MR_Box) (Version_7));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 1) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 2) = ((MR_Box) (TypeName_9));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 3) = ((MR_Box) (Arity_10));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 4) = ((MR_Box) (ErlangUnify_15));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 5) = ((MR_Box) (ErlangCompare_16));
            MR_hl_field(MR_mktag(0), ErlangTypeCtorData_18, 6) = ((MR_Box) (ErlangDetails_17));
          }
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ErlangTypeCtorData_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TCDecl_29 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (TCDecl_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TCInstance_31 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 2);

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (TCInstance_31));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

              {
                HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (TypeInfo_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PseudoTypeInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

              {
                HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (PseudoTypeInfo_22));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
              MR_Word Module_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
              MR_String Enc_26 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
              MR_Word TCI_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));

              {
                HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Name_24));
                MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Module_25));
                MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Enc_26));
                MR_hl_field(MR_mktag(3), HeadVar__3_3, 4) = ((MR_Box) (TCI_27));
              }
            }
            break;
        }
        break;
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ErlangFunctor_6;

    erl_backend__erl_rtti__convert_enum_functor_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_ErlangFunctor_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_ErlangFunctor_6));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ErlangFunctor_6;

    erl_backend__erl_rtti__convert_du_functor_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_ErlangFunctor_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_ErlangFunctor_6));
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_2_1_f_0(
  MR_Word CtorDetails_3)
{
  {
    MR_bool succeeded;
    MR_Word Details_4;

    switch (MR_tag((MR_Word) CtorDetails_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Functors_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 1)));
          MR_Word IsDummy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 4)));
          MR_Word FunctorNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 5)));
          MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 0)));
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 2)));
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorDetails_3, (MR_Integer) 3)));

          switch (IsDummy_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ErlFunctors_12;

                mercury__list__map_corresponding_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[1], Functors_6, FunctorNums_10, &ErlFunctors_12);
                {
                  Details_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Details_4, 0) = ((MR_Box) (ErlFunctors_12));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word F_11;
                MR_Word Var_52;

                succeeded = ((MR_tag((MR_Word) Functors_6)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  F_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Functors_6, (MR_Integer) 0)));
                  Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Functors_6, (MR_Integer) 1)));
                  succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_String Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), F_11, (MR_Integer) 0)));
                  MR_Integer Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), F_11, (MR_Integer) 1)));

                  {
                    Details_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Details_4, 0) = ((MR_Box) (Var_53));
                  }
                }
                else
                {
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_type_ctor_details_2\'/1", (MR_String) "dummy type with more than one functor");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_type_ctor_details_2\'/1", (MR_String) "NYI foreign enumerations for Erlang.");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ErlangFunctors_22;
          MR_Word Functors_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorDetails_3, (MR_Integer) 1)));
          MR_Word FunctorNums_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorDetails_3, (MR_Integer) 4)));
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorDetails_3, (MR_Integer) 0)));
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorDetails_3, (MR_Integer) 2)));
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorDetails_3, (MR_Integer) 3)));

          mercury__list__map_corresponding_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[0], Functors_57, FunctorNums_58, &ErlangFunctors_22);
          {
            Details_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Details_4, 0) = ((MR_Box) (ErlangFunctors_22));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word NoTagFunctor_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 2)));
              MR_String Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), NoTagFunctor_24, (MR_Integer) 0)));
              MR_Word TypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagFunctor_24, (MR_Integer) 1)));
              MR_Word ArgName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagFunctor_24, (MR_Integer) 2)));
              MR_Word SubtypeInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), NoTagFunctor_24, (MR_Integer) 3)));
              MR_Word ArgTypeInfo_32;
              MR_Word ArgInfos_33;
              MR_Word DUFunctor_34;
              MR_Word Var_40;
              MR_Word Var_43;
              MR_Word Var_45;
              MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 1)));

              if (((MR_tag((MR_Word) TypeInfo_26)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word P_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_26, (MR_Integer) 0)));

                {
                  ArgTypeInfo_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ArgTypeInfo_32, 0) = ((MR_Box) (P_97));
                }
              }
              else
              {
                MR_Word P_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeInfo_26, (MR_Integer) 0)));

                {
                  ArgTypeInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ArgTypeInfo_32, 0) = ((MR_Box) (P_96));
                }
              }
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ArgName_27));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ArgTypeInfo_32));
                MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ArgInfos_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgInfos_33, 0) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(1), ArgInfos_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_43 = (MR_Word) Name_25;
              {
                DUFunctor_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DUFunctor_34, 0) = ((MR_Box) (Name_25));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 4) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 5) = ((MR_Box) (ArgInfos_33));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), DUFunctor_34, 7) = ((MR_Box) (SubtypeInfo_28));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (DUFunctor_34));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Details_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Details_4, 0) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Type_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 1)));

              {
                Details_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Details_4, 1) = ((MR_Box) (Type_35));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Builtin_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 1)));

              {
                Details_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Details_4, 1) = ((MR_Box) (Builtin_36));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Impl_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorDetails_3, (MR_Integer) 1)));
              MR_Word Var_39;

              switch (Impl_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 11:
                  Var_39 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_curfr");
                  }
                  break;
                case (MR_Integer) 0:
                  Var_39 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_maxfr");
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_redofr");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_redoip");
                  }
                  break;
                case (MR_Integer) 12:
                  Var_39 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_succip");
                  }
                  break;
                case (MR_Integer) 6:
                  Var_39 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_trail_ptr");
                  }
                  break;
                case (MR_Integer) 9:
                  Var_39 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  Var_39 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 10:
                  Var_39 = (MR_Integer) 2;
                  break;
              }
              {
                Details_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Details_4, 1) = ((MR_Box) (Var_39));
              }
            }
            break;
          case (MR_Integer) 4:
            Details_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            break;
        }
        break;
    }
    return Details_4;
  }
}

void mercury__erl_backend__erl_rtti__init(void)
{
}

void mercury__erl_backend__erl_rtti__init_type_tables(void)
{
}

void mercury__erl_backend__erl_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_rtti__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.erl_rtti.
