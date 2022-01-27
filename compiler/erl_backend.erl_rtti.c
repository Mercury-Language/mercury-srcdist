/*
** Automatically generated from `erl_rtti.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module erl_backend.erl_rtti. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
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
#include "libs.compiler_util.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__532__1_1_f_0(
  MR_Word erl_backend__erl_rtti__LambdaHeadVar__1_17);

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__457__1_1_f_0(
  MR_Word erl_backend__erl_rtti__LambdaHeadVar__1_14);

static void MR_CALL 
erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(
  MR_Word erl_backend__erl_rtti__MI_6,
  MR_Word erl_backend__erl_rtti__TI_7,
  MR_Word * erl_backend__erl_rtti__Expr_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_11,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_12);

static void MR_CALL 
erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(
  MR_Word erl_backend__erl_rtti__TypeInfo_for_T_20,
  MR_Word erl_backend__erl_rtti__MI_7,
  MR_Box erl_backend__erl_rtti__Term_8,
  MR_Integer erl_backend__erl_rtti__Index_9,
  MR_Word * erl_backend__erl_rtti__ELDS_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_13,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_14);

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(
  MR_Word erl_backend__erl_rtti__TypeInfo_for_T_43,
  MR_Word erl_backend__erl_rtti__MI_6,
  MR_Box erl_backend__erl_rtti__Term_7,
  MR_Word * erl_backend__erl_rtti__ELDS_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_23);

static void MR_CALL 
erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(
  MR_Word erl_backend__erl_rtti__Expr0_7,
  MR_Word * erl_backend__erl_rtti__Expr_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_0_18,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_19,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_20,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_21);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__Details_6,
  MR_Word * erl_backend__erl_rtti__Term_7,
  MR_Word * erl_backend__erl_rtti__Defns_8);

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_6,
  MR_Word erl_backend__erl_rtti__RttiProcLabel_7,
  MR_Word * erl_backend__erl_rtti__WrapperFun_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_28,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29);

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1);

static void MR_CALL 
erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeCtorData_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6);

static void MR_CALL 
erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_1,
  MR_Word erl_backend__erl_rtti__HeadVar__2_2,
  MR_Word * erl_backend__erl_rtti__Defns_3);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__ArgTypeInfos_6,
  MR_Word * erl_backend__erl_rtti__ELDSArgTypeInfos_7,
  MR_Word * erl_backend__erl_rtti__ArgRttiDefns_8);

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeInfo_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6);

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__ArgTypeInfos_6,
  MR_Word * erl_backend__erl_rtti__ELDSArgTypeInfos_7,
  MR_Word * erl_backend__erl_rtti__ArgRttiDefns_8);

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeInfo_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6);

static void MR_CALL 
erl_backend__erl_rtti__extract_extra_arg_6_p_0(
  MR_Word erl_backend__erl_rtti__TCIVar_7,
  MR_Integer erl_backend__erl_rtti__Index_8,
  MR_Word * erl_backend__erl_rtti__Var_9,
  MR_Word * erl_backend__erl_rtti__ExtractStatement_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_12,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_13);

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box erl_backend__erl_rtti__wrapper_arg_4,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_5);

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_7,
  MR_Integer erl_backend__erl_rtti__NumExtra_8,
  MR_Word erl_backend__erl_rtti__RttiProcLabel_9,
  MR_Word * erl_backend__erl_rtti__WrapperFun_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_37,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_38);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1,
  MR_Word erl_backend__erl_rtti__RttiData_2,
  MR_Word * erl_backend__erl_rtti__HeadVar__3_3);

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_impl_ctor_1_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1);

static void MR_CALL 
erl_backend__erl_rtti__convert_du_functor_3_p_0(
  MR_Word erl_backend__erl_rtti__Functor_4,
  MR_Integer erl_backend__erl_rtti__FunctorNum_5,
  MR_Word * erl_backend__erl_rtti__ErlangFunctor_6);

static void MR_CALL 
erl_backend__erl_rtti__convert_enum_functor_3_p_0(
  MR_Word erl_backend__erl_rtti__EnumFunctor_4,
  MR_Integer erl_backend__erl_rtti__FunctorNum_5,
  MR_Word * erl_backend__erl_rtti__ErlangFunctor_6);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3);

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0(
  MR_Word erl_backend__erl_rtti__ModuleName_6,
  MR_String erl_backend__erl_rtti__TypeName_7,
  MR_Integer erl_backend__erl_rtti__Arity_8,
  MR_Word erl_backend__erl_rtti__Details_9);

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2);


static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_2[5][6];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_3[6][3];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_4[2][9];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_5[3][5];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_6[3][1];

static /* final */ const MR_Integer erl_backend__erl_rtti_scalar_common_7[1][2];

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_8[1][10];




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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "plain"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "pseudo"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0)),
    ((MR_Box) (&erl_backend__erl_rtti__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
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

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[1])),
    ((MR_Box) (erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[2])),
    ((MR_Box) (erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_5[0])),
    ((MR_Box) (erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_5[1])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_5[2])),
    ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_5[0])),
    ((MR_Box) (erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_4[2][9] = {
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

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_6[3][1] = {
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

static /* final */ const MR_Integer erl_backend__erl_rtti_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box erl_backend__erl_rtti_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&erl_backend__erl_rtti_scalar_common_7[0])),
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

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

MR_Word MR_CALL 
erl_backend__erl_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_114_108_97_110_103_95_114_116_116_105_95_100_97_116_97_95_95_91_49_93_95_48_2_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__HeadVar__3_3;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_rtti__TypeCtorData_5 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__HeadVar__2_2), (MR_Integer) 0);
          MR_Integer erl_backend__erl_rtti__Version_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 1)));
          MR_String erl_backend__erl_rtti__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 2)));
          MR_Integer erl_backend__erl_rtti__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 3)));
          MR_Word erl_backend__erl_rtti__UnifyPred_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 4)));
          MR_Word erl_backend__erl_rtti__ComparePred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 5)));
          MR_Word erl_backend__erl_rtti__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 7)));
          MR_Word erl_backend__erl_rtti__ErlangUnify_15;
          MR_Word erl_backend__erl_rtti__ErlangCompare_16;
          MR_Word erl_backend__erl_rtti__ErlangDetails_17;
          MR_Word erl_backend__erl_rtti__ErlangTypeCtorData_18;
          MR_Word erl_backend__erl_rtti___Flags_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 6)));
          MR_Word erl_backend__erl_rtti__ProcLabel_33;
          MR_Box erl_backend__erl_rtti__conv0_ProcLabel_33;
          MR_Word erl_backend__erl_rtti__ProcLabel_36;
          MR_Box erl_backend__erl_rtti__conv1_ProcLabel_36;

          {
            erl_backend__erl_rtti__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, erl_backend__erl_rtti__UnifyPred_11, &erl_backend__erl_rtti__conv0_ProcLabel_33);
          }
          if (erl_backend__erl_rtti__succeeded)
            {
              erl_backend__erl_rtti__ProcLabel_33 = ((MR_Word) erl_backend__erl_rtti__conv0_ProcLabel_33);
              erl_backend__erl_rtti__succeeded = MR_TRUE;
            }
          if (erl_backend__erl_rtti__succeeded)
            {
              erl_backend__erl_rtti__ErlangUnify_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ErlangUnify_15, 0) = ((MR_Box) (erl_backend__erl_rtti__ProcLabel_33));
            }
          else
            erl_backend__erl_rtti__ErlangUnify_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            erl_backend__erl_rtti__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, erl_backend__erl_rtti__ComparePred_12, &erl_backend__erl_rtti__conv1_ProcLabel_36);
          }
          if (erl_backend__erl_rtti__succeeded)
            {
              erl_backend__erl_rtti__ProcLabel_36 = ((MR_Word) erl_backend__erl_rtti__conv1_ProcLabel_36);
              erl_backend__erl_rtti__succeeded = MR_TRUE;
            }
          if (erl_backend__erl_rtti__succeeded)
            {
              erl_backend__erl_rtti__ErlangCompare_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ErlangCompare_16, 0) = ((MR_Box) (erl_backend__erl_rtti__ProcLabel_36));
            }
          else
            erl_backend__erl_rtti__ErlangCompare_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            erl_backend__erl_rtti__ErlangDetails_17 = erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0(erl_backend__erl_rtti__ModuleName_8, erl_backend__erl_rtti__TypeName_9, erl_backend__erl_rtti__Arity_10, erl_backend__erl_rtti__Details_14);
          }
          {
            erl_backend__erl_rtti__ErlangTypeCtorData_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 0) = ((MR_Box) (erl_backend__erl_rtti__Version_7));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 1) = ((MR_Box) (erl_backend__erl_rtti__ModuleName_8));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 2) = ((MR_Box) (erl_backend__erl_rtti__TypeName_9));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 3) = ((MR_Box) (erl_backend__erl_rtti__Arity_10));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 4) = ((MR_Box) (erl_backend__erl_rtti__ErlangUnify_15));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 5) = ((MR_Box) (erl_backend__erl_rtti__ErlangCompare_16));
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ErlangTypeCtorData_18, 6) = ((MR_Box) (erl_backend__erl_rtti__ErlangDetails_17));
          }
          erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_rtti__ErlangTypeCtorData_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__TCDecl_29 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__HeadVar__2_2), (MR_Integer) 1);

          {
            erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__erl_rtti__TCDecl_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__TCInstance_31 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__HeadVar__2_2), (MR_Integer) 2);

          {
            erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__erl_rtti__TCInstance_31));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_rtti__TypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 1)));

              {
                erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__HeadVar__3_3, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_20));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_rtti__PseudoTypeInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 1)));

              {
                erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__3_3, 0) = ((MR_Box) (erl_backend__erl_rtti__PseudoTypeInfo_22));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_rtti__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word erl_backend__erl_rtti__Module_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 2)));
              MR_String erl_backend__erl_rtti__Enc_26 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word erl_backend__erl_rtti__TCI_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 4)));

              {
                erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__erl_rtti__Name_24));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__erl_rtti__Module_25));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 3) = ((MR_Box) (erl_backend__erl_rtti__Enc_26));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__3_3, 4) = ((MR_Box) (erl_backend__erl_rtti__TCI_27));
              }
            }
            break;
        }
        break;
    }
    return erl_backend__erl_rtti__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__532__1_1_f_0(
  MR_Word erl_backend__erl_rtti__LambdaHeadVar__1_17)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__LambdaHeadVar__2_18;
    MR_Word erl_backend__erl_rtti__Id_11;

    if (((MR_tag((MR_Word) erl_backend__erl_rtti__LambdaHeadVar__1_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word erl_backend__erl_rtti__TI_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__LambdaHeadVar__1_17, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__Id_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__Id_11, 0) = ((MR_Box) (erl_backend__erl_rtti__TI_13));
        }
      }
    else
      {
        MR_Word erl_backend__erl_rtti__PTI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__LambdaHeadVar__1_17, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__Id_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Id_11, 0) = ((MR_Box) (erl_backend__erl_rtti__PTI_12));
        }
      }
    {
      erl_backend__erl_rtti__LambdaHeadVar__2_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__LambdaHeadVar__2_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__LambdaHeadVar__2_18, 1) = ((MR_Box) (erl_backend__erl_rtti__Id_11));
    }
    return erl_backend__erl_rtti__LambdaHeadVar__2_18;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__457__1_1_f_0(
  MR_Word erl_backend__erl_rtti__LambdaHeadVar__1_14)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__LambdaHeadVar__2_15;
    MR_Word erl_backend__erl_rtti__V_16_16;

    {
      erl_backend__erl_rtti__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_16_16, 0) = ((MR_Box) (erl_backend__erl_rtti__LambdaHeadVar__1_14));
    }
    {
      erl_backend__erl_rtti__LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__LambdaHeadVar__2_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__LambdaHeadVar__2_15, 1) = ((MR_Box) (erl_backend__erl_rtti__V_16_16));
    }
    return erl_backend__erl_rtti__LambdaHeadVar__2_15;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(
  MR_Word erl_backend__erl_rtti__MI_6,
  MR_Word erl_backend__erl_rtti__TI_7,
  MR_Word * erl_backend__erl_rtti__Expr_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_11,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_12)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_15_15;
    MR_Word erl_backend__erl_rtti__Defns_9;
    MR_Word erl_backend__erl_rtti__RttiId_10;
    MR_Word erl_backend__erl_rtti__V_14_14;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__TI_7)) {
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
          MR_Word erl_backend__erl_rtti__PTypeInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TI_7, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__RttiId_10, 0) = ((MR_Box) (erl_backend__erl_rtti__PTypeInfo_45));
          }
          {
            erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(erl_backend__erl_rtti__MI_6, erl_backend__erl_rtti__PTypeInfo_45, &erl_backend__erl_rtti__Defns_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__TypeInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__TI_7, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__RttiId_10, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_33));
          }
          {
            erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(erl_backend__erl_rtti__MI_6, erl_backend__erl_rtti__TypeInfo_33, &erl_backend__erl_rtti__Defns_9);
          }
        }
        break;
    }
    erl_backend__erl_rtti__TypeCtorInfo_15_15 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    {
      erl_backend__erl_rtti__V_14_14 = mercury__list__f_43_43_2_f_0(erl_backend__erl_rtti__TypeCtorInfo_15_15, erl_backend__erl_rtti__Defns_9, erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_11);
    }
    {
      *erl_backend__erl_rtti__STATE_VARIABLE_Defns_12 = mercury__list__sort_and_remove_dups_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_15_15, erl_backend__erl_rtti__V_14_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_rtti__Expr_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_rtti__RttiId_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(
  MR_Word erl_backend__erl_rtti__TypeInfo_for_T_20,
  MR_Word erl_backend__erl_rtti__MI_7,
  MR_Box erl_backend__erl_rtti__Term_8,
  MR_Integer erl_backend__erl_rtti__Index_9,
  MR_Word * erl_backend__erl_rtti__ELDS_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_13,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_14)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeInfo_21_21;
    MR_Box erl_backend__erl_rtti__Arg_12;

    {
      erl_backend__erl_rtti__succeeded = mercury__deconstruct__arg_4_p_0(erl_backend__erl_rtti__TypeInfo_for_T_20, &erl_backend__erl_rtti__TypeInfo_21_21, erl_backend__erl_rtti__Term_8, (MR_Integer) 0, erl_backend__erl_rtti__Index_9, &erl_backend__erl_rtti__Arg_12);
    }
    if (erl_backend__erl_rtti__succeeded)
      {
        erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(erl_backend__erl_rtti__TypeInfo_21_21, erl_backend__erl_rtti__MI_7, erl_backend__erl_rtti__Arg_12, erl_backend__erl_rtti__ELDS_10, erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_13, erl_backend__erl_rtti__STATE_VARIABLE_Defns_14);
      }
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
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_4)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv8_ELDS_10;
    MR_Word erl_backend__erl_rtti__conv7_STATE_VARIABLE_Defns_14;

    {
      erl_backend__erl_rtti__convert_arg_to_elds_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 5)), ((MR_Integer) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv8_ELDS_10, ((MR_Word) erl_backend__erl_rtti__wrapper_arg_3), &erl_backend__erl_rtti__conv7_STATE_VARIABLE_Defns_14);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv8_ELDS_10));
    *erl_backend__erl_rtti__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_rtti__conv7_STATE_VARIABLE_Defns_14));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0(
  MR_Word erl_backend__erl_rtti__TypeInfo_for_T_43,
  MR_Word erl_backend__erl_rtti__MI_6,
  MR_Box erl_backend__erl_rtti__Term_7,
  MR_Word * erl_backend__erl_rtti__ELDS_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_Defns_23)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Integer erl_backend__erl_rtti__Int_10;
    MR_Box erl_backend__erl_rtti__conv0_Int_10;

    {
      erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv0_Int_10);
    }
    if (erl_backend__erl_rtti__succeeded)
      {
        erl_backend__erl_rtti__Int_10 = ((MR_Integer) erl_backend__erl_rtti__conv0_Int_10);
        erl_backend__erl_rtti__succeeded = MR_TRUE;
      }
    if (erl_backend__erl_rtti__succeeded)
      {
        MR_Word erl_backend__erl_rtti__V_24_24;

        {
          erl_backend__erl_rtti__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_24_24, 0) = ((MR_Box) (erl_backend__erl_rtti__Int_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_rtti__ELDS_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_24_24));
        }
        *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22;
      }
    else
      {
        MR_Char erl_backend__erl_rtti__Char_11;
        MR_Box erl_backend__erl_rtti__conv1_Char_11;

        {
          erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv1_Char_11);
        }
        if (erl_backend__erl_rtti__succeeded)
          {
            erl_backend__erl_rtti__Char_11 = ((MR_Char) (MR_Word) erl_backend__erl_rtti__conv1_Char_11);
            erl_backend__erl_rtti__succeeded = MR_TRUE;
          }
        if (erl_backend__erl_rtti__succeeded)
          {
            MR_Word erl_backend__erl_rtti__V_25_25;

            {
              erl_backend__erl_rtti__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_25_25, 0) = ((MR_Box) (MR_Word) (erl_backend__erl_rtti__Char_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *erl_backend__erl_rtti__ELDS_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_25_25));
            }
            *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22;
          }
        else
          {
            MR_String erl_backend__erl_rtti__String_12;
            MR_Box erl_backend__erl_rtti__conv2_String_12;

            {
              erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv2_String_12);
            }
            if (erl_backend__erl_rtti__succeeded)
              {
                erl_backend__erl_rtti__String_12 = ((MR_String) erl_backend__erl_rtti__conv2_String_12);
                erl_backend__erl_rtti__succeeded = MR_TRUE;
              }
            if (erl_backend__erl_rtti__succeeded)
              {
                MR_Word erl_backend__erl_rtti__V_26_26;

                {
                  erl_backend__erl_rtti__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_26_26, 1) = ((MR_Box) (erl_backend__erl_rtti__String_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *erl_backend__erl_rtti__ELDS_8 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_26_26));
                }
                *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22;
              }
            else
              {
                MR_Float erl_backend__erl_rtti__Float_13;
                MR_Box erl_backend__erl_rtti__conv3_Float_13;

                {
                  erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv3_Float_13);
                }
                if (erl_backend__erl_rtti__succeeded)
                  {
                    erl_backend__erl_rtti__Float_13 = MR_unbox_float(erl_backend__erl_rtti__conv3_Float_13);
                    erl_backend__erl_rtti__succeeded = MR_TRUE;
                  }
                if (erl_backend__erl_rtti__succeeded)
                  {
                    MR_Word erl_backend__erl_rtti__V_27_27;

                    {
                      erl_backend__erl_rtti__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_27_27, 1) = MR_box_float(erl_backend__erl_rtti__Float_13);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *erl_backend__erl_rtti__ELDS_8 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_27_27));
                    }
                    *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22;
                  }
                else
                  {
                    MR_Word erl_backend__erl_rtti__Atom_14;
                    MR_Box erl_backend__erl_rtti__conv4_Atom_14;

                    {
                      erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv4_Atom_14);
                    }
                    if (erl_backend__erl_rtti__succeeded)
                      {
                        erl_backend__erl_rtti__Atom_14 = ((MR_Word) erl_backend__erl_rtti__conv4_Atom_14);
                        erl_backend__erl_rtti__succeeded = MR_TRUE;
                      }
                    if (erl_backend__erl_rtti__succeeded)
                      {
                        MR_String erl_backend__erl_rtti__S_15 = (MR_String) erl_backend__erl_rtti__Atom_14;
                        MR_Word erl_backend__erl_rtti__V_28_28;

                        {
                          erl_backend__erl_rtti__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_28_28, 1) = ((MR_Box) (erl_backend__erl_rtti__S_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *erl_backend__erl_rtti__ELDS_8 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_28_28));
                        }
                        *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22;
                      }
                    else
                      {
                        MR_Word erl_backend__erl_rtti__MaybePseudoTypeInfo_16;
                        MR_Box erl_backend__erl_rtti__conv5_MaybePseudoTypeInfo_16;

                        {
                          erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv5_MaybePseudoTypeInfo_16);
                        }
                        if (erl_backend__erl_rtti__succeeded)
                          {
                            erl_backend__erl_rtti__MaybePseudoTypeInfo_16 = ((MR_Word) erl_backend__erl_rtti__conv5_MaybePseudoTypeInfo_16);
                            erl_backend__erl_rtti__succeeded = MR_TRUE;
                          }
                        if (erl_backend__erl_rtti__succeeded)
                          {
                            MR_Word erl_backend__erl_rtti__TypeCtorInfo_15_67;
                            MR_Word erl_backend__erl_rtti__Defns_63;
                            MR_Word erl_backend__erl_rtti__RttiId_64;
                            MR_Word erl_backend__erl_rtti__V_66_66;

                            if (((MR_tag((MR_Word) erl_backend__erl_rtti__MaybePseudoTypeInfo_16)) == (MR_mktag((MR_Integer) 1))))
                              {
                                MR_Word erl_backend__erl_rtti__TypeInfo_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__MaybePseudoTypeInfo_16, (MR_Integer) 0)));

                                {
                                  erl_backend__erl_rtti__RttiId_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__RttiId_64, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_69));
                                }
                                {
                                  erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(erl_backend__erl_rtti__MI_6, erl_backend__erl_rtti__TypeInfo_69, &erl_backend__erl_rtti__Defns_63);
                                }
                              }
                            else
                              {
                                MR_Word erl_backend__erl_rtti__PTypeInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__MaybePseudoTypeInfo_16, (MR_Integer) 0)));

                                {
                                  erl_backend__erl_rtti__RttiId_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__RttiId_64, 0) = ((MR_Box) (erl_backend__erl_rtti__PTypeInfo_73));
                                }
                                {
                                  erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(erl_backend__erl_rtti__MI_6, erl_backend__erl_rtti__PTypeInfo_73, &erl_backend__erl_rtti__Defns_63);
                                }
                              }
                            erl_backend__erl_rtti__TypeCtorInfo_15_67 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
                            {
                              erl_backend__erl_rtti__V_66_66 = mercury__list__f_43_43_2_f_0(erl_backend__erl_rtti__TypeCtorInfo_15_67, erl_backend__erl_rtti__Defns_63, erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22);
                            }
                            {
                              *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = mercury__list__sort_and_remove_dups_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_15_67, erl_backend__erl_rtti__V_66_66);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *erl_backend__erl_rtti__ELDS_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_rtti__RttiId_64));
                            }
                          }
                        else
                          {
                            MR_Word erl_backend__erl_rtti__MaybePseudoTypeInfoOrSelf_17;
                            MR_Box erl_backend__erl_rtti__conv6_MaybePseudoTypeInfoOrSelf_17;

                            {
                              erl_backend__erl_rtti__succeeded = mercury__builtin__dynamic_cast_2_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, erl_backend__erl_rtti__Term_7, &erl_backend__erl_rtti__conv6_MaybePseudoTypeInfoOrSelf_17);
                            }
                            if (erl_backend__erl_rtti__succeeded)
                              {
                                erl_backend__erl_rtti__MaybePseudoTypeInfoOrSelf_17 = ((MR_Word) erl_backend__erl_rtti__conv6_MaybePseudoTypeInfoOrSelf_17);
                                erl_backend__erl_rtti__succeeded = MR_TRUE;
                              }
                            if (erl_backend__erl_rtti__succeeded)
                              {
                                erl_backend__erl_rtti__convert_maybe_pseudo_type_info_or_self_to_elds_5_p_0(erl_backend__erl_rtti__MI_6, erl_backend__erl_rtti__MaybePseudoTypeInfoOrSelf_17, erl_backend__erl_rtti__ELDS_8, erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22, erl_backend__erl_rtti__STATE_VARIABLE_Defns_23);
                              }
                            else
                              {
                                MR_String erl_backend__erl_rtti__Functor_18;
                                MR_Integer erl_backend__erl_rtti__Arity_19;
                                MR_Word erl_backend__erl_rtti__Exprs_20;
                                MR_Word erl_backend__erl_rtti__V_32_32;
                                MR_Word erl_backend__erl_rtti__V_33_33;
                                MR_Integer erl_backend__erl_rtti__V_36_36;
                                MR_Box erl_backend__erl_rtti__conv9_STATE_VARIABLE_Defns_23;

                                {
                                  mercury__deconstruct__functor_4_p_0(erl_backend__erl_rtti__TypeInfo_for_T_43, erl_backend__erl_rtti__Term_7, (MR_Integer) 0, &erl_backend__erl_rtti__Functor_18, &erl_backend__erl_rtti__Arity_19);
                                }
                                {
                                  erl_backend__erl_rtti__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_8[0]));
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0_1));
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 3) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_for_T_43));
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 4) = ((MR_Box) (erl_backend__erl_rtti__MI_6));
                                  MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 5) = erl_backend__erl_rtti__Term_7;
                                }
                                erl_backend__erl_rtti__V_36_36 = (erl_backend__erl_rtti__Arity_19 - (MR_Integer) 1);
                                {
                                  erl_backend__erl_rtti__V_33_33 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, erl_backend__erl_rtti__V_36_36);
                                }
                                {
                                  mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], erl_backend__erl_rtti__V_32_32, erl_backend__erl_rtti__V_33_33, &erl_backend__erl_rtti__Exprs_20, ((MR_Box) (erl_backend__erl_rtti__STATE_VARIABLE_Defns_0_22)), &erl_backend__erl_rtti__conv9_STATE_VARIABLE_Defns_23);
                                }
                                *erl_backend__erl_rtti__STATE_VARIABLE_Defns_23 = ((MR_Word) erl_backend__erl_rtti__conv9_STATE_VARIABLE_Defns_23);
                                erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__Functor_18, (MR_String) "{}") == 0);
                                if (erl_backend__erl_rtti__succeeded)
                                  {
                                    MR_Word erl_backend__erl_rtti__V_38_38;

                                    {
                                      erl_backend__erl_rtti__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_38_38, 1) = ((MR_Box) (erl_backend__erl_rtti__Exprs_20));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *erl_backend__erl_rtti__ELDS_8 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_38_38));
                                    }
                                  }
                                else
                                  {
                                    MR_Word erl_backend__erl_rtti__FunctorTerm_21;
                                    MR_Word erl_backend__erl_rtti__V_39_39;
                                    MR_Word erl_backend__erl_rtti__V_40_40;
                                    MR_Word erl_backend__erl_rtti__V_41_41;
                                    MR_Word erl_backend__erl_rtti__V_42_42;

                                    {
                                      erl_backend__erl_rtti__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_40_40, 0) = ((MR_Box) (erl_backend__erl_rtti__Functor_18));
                                    }
                                    {
                                      erl_backend__erl_rtti__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_39_39, 1) = ((MR_Box) (erl_backend__erl_rtti__V_40_40));
                                    }
                                    {
                                      erl_backend__erl_rtti__FunctorTerm_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__FunctorTerm_21, 0) = ((MR_Box) (erl_backend__erl_rtti__V_39_39));
                                    }
                                    {
                                      erl_backend__erl_rtti__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_42_42, 0) = ((MR_Box) (erl_backend__erl_rtti__FunctorTerm_21));
                                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_42_42, 1) = ((MR_Box) (erl_backend__erl_rtti__Exprs_20));
                                    }
                                    {
                                      erl_backend__erl_rtti__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_41_41, 1) = ((MR_Box) (erl_backend__erl_rtti__V_42_42));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *erl_backend__erl_rtti__ELDS_8 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_41_41));
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
erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(
  MR_Word erl_backend__erl_rtti__Expr0_7,
  MR_Word * erl_backend__erl_rtti__Expr_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_0_18,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_19,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_20,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_21)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__Expr0_7)) == (MR_mktag((MR_Integer) 2)));
    MR_Word erl_backend__erl_rtti__Functor_11;
    MR_Word erl_backend__erl_rtti__Head_12;
    MR_Word erl_backend__erl_rtti__Tail0_13;
    MR_Word erl_backend__erl_rtti__SymName_14;
    MR_Word erl_backend__erl_rtti__V_22_22;
    MR_Word erl_backend__erl_rtti__V_23_23;
    MR_Word erl_backend__erl_rtti__V_24_24;
    MR_Word erl_backend__erl_rtti__V_25_25;
    MR_Word erl_backend__erl_rtti__V_26_26;
    MR_Word erl_backend__erl_rtti__V_27_27;
    MR_String erl_backend__erl_rtti__V_28_28;

    if (erl_backend__erl_rtti__succeeded)
      {
        erl_backend__erl_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Expr0_7, (MR_Integer) 0)));
        erl_backend__erl_rtti__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_rtti__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (erl_backend__erl_rtti__succeeded)
          {
            erl_backend__erl_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, (MR_Integer) 1)));
            erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__V_23_23)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__erl_rtti__succeeded)
              {
                erl_backend__erl_rtti__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_23_23, (MR_Integer) 0)));
                erl_backend__erl_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_23_23, (MR_Integer) 1)));
                erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                if (erl_backend__erl_rtti__succeeded)
                  {
                    erl_backend__erl_rtti__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_24_24, (MR_Integer) 0)));
                    erl_backend__erl_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_24_24, (MR_Integer) 1)));
                    erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                    if (erl_backend__erl_rtti__succeeded)
                      {
                        erl_backend__erl_rtti__Tail0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_25_25, (MR_Integer) 0)));
                        erl_backend__erl_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_25_25, (MR_Integer) 1)));
                        erl_backend__erl_rtti__succeeded = (erl_backend__erl_rtti__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (erl_backend__erl_rtti__succeeded)
                          {
                            erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__Functor_11)) == (MR_mktag((MR_Integer) 2)));
                            if (erl_backend__erl_rtti__succeeded)
                              {
                                erl_backend__erl_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Functor_11, (MR_Integer) 0)));
                                erl_backend__erl_rtti__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_rtti__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                if (erl_backend__erl_rtti__succeeded)
                                  {
                                    erl_backend__erl_rtti__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_27_27, (MR_Integer) 1)));
                                    {
                                      erl_backend__erl_rtti__V_28_28 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__erl_rtti__SymName_14);
                                    }
                                    erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__V_28_28, (MR_String) "[|]") == 0);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (erl_backend__erl_rtti__succeeded)
      {
        MR_Word erl_backend__erl_rtti__Tail_15;
        MR_Word erl_backend__erl_rtti__V_16;
        MR_Word erl_backend__erl_rtti__Assign_17;
        MR_Word erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_29_29;
        MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_30_30;
        MR_Word erl_backend__erl_rtti__V_32_32;
        MR_Word erl_backend__erl_rtti__V_33_33;
        MR_Word erl_backend__erl_rtti__V_34_34;
        MR_Word erl_backend__erl_rtti__V_35_35;
        MR_Word erl_backend__erl_rtti__V_36_36;
        MR_Word erl_backend__erl_rtti__V_37_37;

        {
          erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(erl_backend__erl_rtti__Tail0_13, &erl_backend__erl_rtti__Tail_15, erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_0_18, &erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_29_29, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_20, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_30_30);
        }
        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &erl_backend__erl_rtti__V_16, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_30_30, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_21);
        }
        {
          erl_backend__erl_rtti__V_32_32 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_rtti__V_16);
        }
        {
          erl_backend__erl_rtti__Assign_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Assign_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Assign_17, 1) = ((MR_Box) (erl_backend__erl_rtti__V_32_32));
          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Assign_17, 2) = ((MR_Box) (erl_backend__erl_rtti__Tail_15));
        }
        {
          erl_backend__erl_rtti__V_37_37 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_rtti__V_16);
        }
        {
          erl_backend__erl_rtti__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_36_36, 0) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__erl_rtti__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 0) = ((MR_Box) (erl_backend__erl_rtti__Head_12));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 1) = ((MR_Box) (erl_backend__erl_rtti__V_36_36));
        }
        {
          erl_backend__erl_rtti__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_34_34, 0) = ((MR_Box) (erl_backend__erl_rtti__Functor_11));
          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_34_34, 1) = ((MR_Box) (erl_backend__erl_rtti__V_35_35));
        }
        {
          erl_backend__erl_rtti__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_33_33, 1) = ((MR_Box) (erl_backend__erl_rtti__V_34_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_rtti__Expr_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_rtti__V_33_33));
        }
        {
          mercury__list__cons_3_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, ((MR_Box) (erl_backend__erl_rtti__Assign_17)), erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_29_29, erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_19);
        }
      }
    else
      {
        *erl_backend__erl_rtti__Expr_8 = erl_backend__erl_rtti__Expr0_7;
        *erl_backend__erl_rtti__STATE_VARIABLE_VarSet_21 = erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_20;
        *erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_19 = erl_backend__erl_rtti__STATE_VARIABLE_RevAssignments_0_18;
      }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__Details_6,
  MR_Word * erl_backend__erl_rtti__Term_7,
  MR_Word * erl_backend__erl_rtti__Defns_8)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__Details_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *erl_backend__erl_rtti__Term_7 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_6[2]);
          *erl_backend__erl_rtti__Defns_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__Functors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__Details_6, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &erl_backend__erl_rtti_scalar_common_1[3], erl_backend__erl_rtti__ModuleInfo_5, ((MR_Box) (erl_backend__erl_rtti__Functors_9)), erl_backend__erl_rtti__Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_rtti__Defns_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String erl_backend__erl_rtti__DummyFunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_6, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__erl_rtti__ModuleInfo_5, ((MR_Box) (erl_backend__erl_rtti__DummyFunctorName_10)), erl_backend__erl_rtti__Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_rtti__Defns_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_rtti__MaybePseudoTypeInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_6, (MR_Integer) 1)));

              {
                erl_backend__erl_rtti__rtti_to_elds_expr_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, erl_backend__erl_rtti__ModuleInfo_5, ((MR_Box) (erl_backend__erl_rtti__MaybePseudoTypeInfo_11)), erl_backend__erl_rtti__Term_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_rtti__Defns_8);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *erl_backend__erl_rtti__Term_7 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_6[2]);
              *erl_backend__erl_rtti__Defns_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_rtti__wrapper_arg_2;
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv0_HeadVar__2_2;

    {
      erl_backend__erl_rtti__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1));
    }
    erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv0_HeadVar__2_2));
    return erl_backend__erl_rtti__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_6,
  MR_Word erl_backend__erl_rtti__RttiProcLabel_7,
  MR_Word * erl_backend__erl_rtti__WrapperFun_8,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_28,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeInfo_121_121;
    MR_Word erl_backend__erl_rtti__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 6)));
    MR_Integer erl_backend__erl_rtti__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 7)));
    MR_Word erl_backend__erl_rtti__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 5)));
    MR_Word erl_backend__erl_rtti__ArgModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 9)));
    MR_Word erl_backend__erl_rtti__Detism_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word erl_backend__erl_rtti__Ws_15;
    MR_Word erl_backend__erl_rtti__CallInputArgs_16;
    MR_Word erl_backend__erl_rtti__CallOutputArgs_17;
    MR_Word erl_backend__erl_rtti__WrapperInputVars_18;
    MR_Word erl_backend__erl_rtti__WrapperOutputVars_19;
    MR_Word erl_backend__erl_rtti__CodeModel_20;
    MR_Word erl_backend__erl_rtti__WrapperOutputVarsExprs_21;
    MR_Word erl_backend__erl_rtti__SuccessExpr0_22;
    MR_Word erl_backend__erl_rtti__DummyOutputVars_23;
    MR_Word erl_backend__erl_rtti__MaterialiseDummyOutputVars_24;
    MR_Word erl_backend__erl_rtti__SuccessExpr_25;
    MR_Word erl_backend__erl_rtti__CallTarget_26;
    MR_Word erl_backend__erl_rtti__DoCall_27;
    MR_Integer erl_backend__erl_rtti__V_30_30;
    MR_Word erl_backend__erl_rtti__V_39_39;
    MR_Word erl_backend__erl_rtti__V_40_40;
    MR_Word erl_backend__erl_rtti__V_41_41;
    MR_Word erl_backend__erl_rtti__V_42_42;
    MR_Word erl_backend__erl_rtti__V_43_43;
    MR_Word erl_backend__erl_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 0)));
    MR_Word erl_backend__erl_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 1)));
    MR_Word erl_backend__erl_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 2)));
    MR_String erl_backend__erl_rtti__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 3)));
    MR_Integer erl_backend__erl_rtti__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 4)));
    MR_Word erl_backend__erl_rtti__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 8)));
    MR_Word erl_backend__erl_rtti__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 11)));
    MR_Word erl_backend__erl_rtti__V_57_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_7, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      erl_backend__erl_rtti__V_30_30 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_rtti__ArgTypes_12);
    }
    {
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_rtti__V_30_30, &erl_backend__erl_rtti__Ws_15, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_28, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29);
    }
    erl_backend__erl_rtti__TypeInfo_121_121 = (MR_Word) &erl_backend__erl_rtti_scalar_common_1[2];
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_rtti__TypeInfo_121_121, erl_backend__erl_rtti__ModuleInfo_6, (MR_Integer) 0, erl_backend__erl_rtti__Ws_15, erl_backend__erl_rtti__ArgTypes_12, erl_backend__erl_rtti__ArgModes_13, &erl_backend__erl_rtti__CallInputArgs_16, &erl_backend__erl_rtti__CallOutputArgs_17);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_rtti__TypeInfo_121_121, erl_backend__erl_rtti__ModuleInfo_6, (MR_Integer) 1, erl_backend__erl_rtti__Ws_15, erl_backend__erl_rtti__ArgTypes_12, erl_backend__erl_rtti__ArgModes_13, &erl_backend__erl_rtti__WrapperInputVars_18, &erl_backend__erl_rtti__WrapperOutputVars_19);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_rtti__Detism_14, &erl_backend__erl_rtti__CodeModel_20);
    }
    {
      erl_backend__erl_rtti__WrapperOutputVarsExprs_21 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_rtti__WrapperOutputVars_19);
    }
    switch (erl_backend__erl_rtti__CodeModel_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          erl_backend__erl_rtti__SuccessExpr0_22 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_rtti__WrapperOutputVarsExprs_21);
        }
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
          MR_Word erl_backend__erl_rtti__V_37_37;

          {
            erl_backend__erl_rtti__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_37_37, 1) = ((MR_Box) (erl_backend__erl_rtti__WrapperOutputVarsExprs_21));
          }
          {
            erl_backend__erl_rtti__SuccessExpr0_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__SuccessExpr0_22, 0) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
          }
        }
        break;
    }
    {
      erl_backend__erl_rtti__DummyOutputVars_23 = mercury__list__delete_elems_2_f_0(erl_backend__erl_rtti__TypeInfo_121_121, erl_backend__erl_rtti__WrapperOutputVars_19, erl_backend__erl_rtti__CallOutputArgs_17);
    }
    {
      erl_backend__erl_rtti__MaterialiseDummyOutputVars_24 = mercury__list__map_2_f_0(erl_backend__erl_rtti__TypeInfo_121_121, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[5], erl_backend__erl_rtti__DummyOutputVars_23);
    }
    {
      erl_backend__erl_rtti__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_39_39, 0) = ((MR_Box) (erl_backend__erl_rtti__MaterialiseDummyOutputVars_24));
    }
    {
      erl_backend__erl_rtti__SuccessExpr_25 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_rtti__V_39_39, erl_backend__erl_rtti__SuccessExpr0_22);
    }
    {
      erl_backend__erl_rtti__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_40_40, 0) = ((MR_Box) (erl_backend__erl_rtti__PredId_10));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_40_40, 1) = ((MR_Box) (erl_backend__erl_rtti__ProcId_11));
    }
    {
      erl_backend__erl_rtti__CallTarget_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__CallTarget_26, 0) = ((MR_Box) (erl_backend__erl_rtti__V_40_40));
    }
    {
      erl_backend__erl_rtti__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_41_41, 0) = ((MR_Box) (erl_backend__erl_rtti__SuccessExpr_25));
    }
    {
      erl_backend__erl_call_gen__erl_make_call_6_p_0(erl_backend__erl_rtti__CodeModel_20, erl_backend__erl_rtti__CallTarget_26, erl_backend__erl_rtti__CallInputArgs_16, erl_backend__erl_rtti__CallOutputArgs_17, erl_backend__erl_rtti__V_41_41, &erl_backend__erl_rtti__DoCall_27);
    }
    {
      erl_backend__erl_rtti__V_43_43 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_rtti__WrapperInputVars_18);
    }
    {
      erl_backend__erl_rtti__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_42_42, 0) = ((MR_Box) (erl_backend__erl_rtti__V_43_43));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_42_42, 1) = ((MR_Box) (erl_backend__erl_rtti__DoCall_27));
    }
    *erl_backend__erl_rtti__WrapperFun_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_rtti__V_42_42);
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__HeadVar__2_2;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(erl_backend__erl_rtti__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_rtti__V_9_9;

              {
                erl_backend__erl_rtti__V_9_9 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_list");
              }
              {
                erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_9_9));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_rtti__V_11_11;

              {
                erl_backend__erl_rtti__V_11_11 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_array");
              }
              {
                erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_11_11));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_rtti__V_72_72;

              {
                erl_backend__erl_rtti__V_72_72 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_foreign");
              }
              {
                erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_72_72));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__V_4_4;

          {
            erl_backend__erl_rtti__V_4_4 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_du");
          }
          {
            erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_4_4));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__V_7_7;

          {
            erl_backend__erl_rtti__V_7_7 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_dummy");
          }
          {
            erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_7_7));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_rtti__V_14_14;

              {
                erl_backend__erl_rtti__V_14_14 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_eqv");
              }
              {
                erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_14_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_rtti__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__1_1, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) erl_backend__erl_rtti__V_83_83)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(erl_backend__erl_rtti__V_83_83)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word erl_backend__erl_rtti__V_17_17;

                        {
                          erl_backend__erl_rtti__V_17_17 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_int");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_17_17));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word erl_backend__erl_rtti__V_20_20;

                        {
                          erl_backend__erl_rtti__V_20_20 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_float");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_20_20));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word erl_backend__erl_rtti__V_23_23;

                        {
                          erl_backend__erl_rtti__V_23_23 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_char");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_23_23));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word erl_backend__erl_rtti__V_26_26;

                        {
                          erl_backend__erl_rtti__V_26_26 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_string");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_26_26));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word erl_backend__erl_rtti__V_29_29;

                        {
                          erl_backend__erl_rtti__V_29_29 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_void");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_29_29));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word erl_backend__erl_rtti__V_40_40;

                        {
                          erl_backend__erl_rtti__V_40_40 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_pred");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_40_40));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word erl_backend__erl_rtti__V_43_43;

                        {
                          erl_backend__erl_rtti__V_43_43 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_func");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_43_43));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word erl_backend__erl_rtti__V_46_46;

                        {
                          erl_backend__erl_rtti__V_46_46 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_tuple");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_46_46));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word erl_backend__erl_rtti__V_49_49;

                        {
                          erl_backend__erl_rtti__V_49_49 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_ref");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_49_49));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word erl_backend__erl_rtti__V_52_52;

                        {
                          erl_backend__erl_rtti__V_52_52 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_desc");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_52_52));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word erl_backend__erl_rtti__V_55_55;

                        {
                          erl_backend__erl_rtti__V_55_55 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_pseudo_type_desc");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_55_55));
                        }
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Word erl_backend__erl_rtti__V_58_58;

                        {
                          erl_backend__erl_rtti__V_58_58 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_ctor_desc");
                        }
                        {
                          erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_58_58));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__erl_rtti__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_83_83, (MR_Integer) 0)));

                    switch (erl_backend__erl_rtti__V_85_85) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word erl_backend__erl_rtti__V_37_37;

                          {
                            erl_backend__erl_rtti__V_37_37 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_c_pointer");
                          }
                          {
                            erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word erl_backend__erl_rtti__V_33_33;

                          {
                            erl_backend__erl_rtti__V_33_33 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_stable_c_pointer");
                          }
                          {
                            erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_33_33));
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
              MR_Word erl_backend__erl_rtti__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__HeadVar__1_1, (MR_Integer) 1)));

              switch (erl_backend__erl_rtti__V_84_84) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  {
                    MR_Word erl_backend__erl_rtti__V_70_70;

                    {
                      erl_backend__erl_rtti__V_70_70 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_base_typeclass_info");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_70_70));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word erl_backend__erl_rtti__V_75_75;

                    {
                      erl_backend__erl_rtti__V_75_75 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_hp");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_75_75));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word erl_backend__erl_rtti__V_78_78;

                    {
                      erl_backend__erl_rtti__V_78_78 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_subgoal");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_78_78));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word erl_backend__erl_rtti__V_81_81;

                    {
                      erl_backend__erl_rtti__V_81_81 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_ticket");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_81_81));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__erl_rtti__V_64_64;

                    {
                      erl_backend__erl_rtti__V_64_64 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_ctor_info");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_64_64));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word erl_backend__erl_rtti__V_61_61;

                    {
                      erl_backend__erl_rtti__V_61_61 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_type_info");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_61_61));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word erl_backend__erl_rtti__V_67_67;

                    {
                      erl_backend__erl_rtti__V_67_67 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "etcr_typeclass_info");
                    }
                    {
                      erl_backend__erl_rtti__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__erl_rtti__V_67_67));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return erl_backend__erl_rtti__HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeCtorData_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_59_59;
    MR_Integer erl_backend__erl_rtti__Version_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_rtti__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 1)));
    MR_String erl_backend__erl_rtti__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 2)));
    MR_Integer erl_backend__erl_rtti__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 3)));
    MR_Word erl_backend__erl_rtti__UnifyProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 4)));
    MR_Word erl_backend__erl_rtti__CompareProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 5)));
    MR_Word erl_backend__erl_rtti__Details_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorData_5, (MR_Integer) 6)));
    MR_Word erl_backend__erl_rtti__VarSet_14;
    MR_Word erl_backend__erl_rtti__UnifyExpr_15;
    MR_Word erl_backend__erl_rtti__CompareExpr_16;
    MR_Word erl_backend__erl_rtti__ELDSDetails0_17;
    MR_Word erl_backend__erl_rtti__RttiDefns0_18;
    MR_Word erl_backend__erl_rtti__ELDSDetails_19;
    MR_Word erl_backend__erl_rtti__RevAssignments_20;
    MR_Word erl_backend__erl_rtti__ELDSTypeCtorData_21;
    MR_Word erl_backend__erl_rtti__ClauseBody_22;
    MR_Word erl_backend__erl_rtti__TypeCtor_23;
    MR_Word erl_backend__erl_rtti__RttiId_24;
    MR_Word erl_backend__erl_rtti__RttiDefn_26;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_27_27;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_28_28;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29_29;
    MR_Word erl_backend__erl_rtti__V_32_32;
    MR_Word erl_backend__erl_rtti__V_33_33;
    MR_Word erl_backend__erl_rtti__V_34_34;
    MR_Word erl_backend__erl_rtti__V_35_35;
    MR_Word erl_backend__erl_rtti__V_36_36;
    MR_Word erl_backend__erl_rtti__V_37_37;
    MR_Word erl_backend__erl_rtti__V_38_38;
    MR_Word erl_backend__erl_rtti__V_39_39;
    MR_Word erl_backend__erl_rtti__V_40_40;
    MR_Word erl_backend__erl_rtti__V_41_41;
    MR_Word erl_backend__erl_rtti__V_42_42;
    MR_String erl_backend__erl_rtti__V_43_43;
    MR_Word erl_backend__erl_rtti__V_44_44;
    MR_Word erl_backend__erl_rtti__V_45_45;
    MR_Word erl_backend__erl_rtti__V_46_46;
    MR_Word erl_backend__erl_rtti__V_47_47;
    MR_Word erl_backend__erl_rtti__V_48_48;
    MR_Word erl_backend__erl_rtti__V_49_49;
    MR_Word erl_backend__erl_rtti__V_51_51;
    MR_Word erl_backend__erl_rtti__V_52_52;
    MR_Word erl_backend__erl_rtti__V_53_53;
    MR_Word erl_backend__erl_rtti__V_54_54;
    MR_Word erl_backend__erl_rtti__V_56_56;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_27_27);
    }
    if ((erl_backend__erl_rtti__UnifyProcLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.gen_init_special_pred\'/5", (MR_String) "no special pred");
          return;
        }
      }
    else
      {
        MR_Word erl_backend__erl_rtti__RttiProcLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__UnifyProcLabel_11, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__RttiProcLabel_66, &erl_backend__erl_rtti__UnifyExpr_15, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_27_27, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_28_28);
        }
      }
    if ((erl_backend__erl_rtti__CompareProcLabel_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "predicate \140erl_backend.erl_rtti.gen_init_special_pred\'/5", (MR_String) "no special pred");
          return;
        }
      }
    else
      {
        MR_Word erl_backend__erl_rtti__RttiProcLabel_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__CompareProcLabel_12, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__erl_gen_special_pred_wrapper_5_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__RttiProcLabel_77, &erl_backend__erl_rtti__CompareExpr_16, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_28_28, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29_29);
        }
      }
    {
      erl_backend__erl_rtti__erlang_type_ctor_details_4_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__Details_13, &erl_backend__erl_rtti__ELDSDetails0_17, &erl_backend__erl_rtti__RttiDefns0_18);
    }
    {
      erl_backend__erl_rtti__reduce_list_term_complexity_6_p_0(erl_backend__erl_rtti__ELDSDetails0_17, &erl_backend__erl_rtti__ELDSDetails_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_rtti__RevAssignments_20, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_29_29, &erl_backend__erl_rtti__VarSet_14);
    }
    {
      erl_backend__erl_rtti__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_34_34, 0) = ((MR_Box) (erl_backend__erl_rtti__Arity_10));
    }
    {
      erl_backend__erl_rtti__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_33_33, 0) = ((MR_Box) (erl_backend__erl_rtti__V_34_34));
    }
    {
      erl_backend__erl_rtti__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_37_37, 0) = ((MR_Box) (erl_backend__erl_rtti__Version_7));
    }
    {
      erl_backend__erl_rtti__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_36_36, 0) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
    }
    {
      erl_backend__erl_rtti__V_43_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(erl_backend__erl_rtti__ModuleName_8);
    }
    {
      erl_backend__erl_rtti__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_42_42, 1) = ((MR_Box) (erl_backend__erl_rtti__V_43_43));
    }
    {
      erl_backend__erl_rtti__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_41_41, 0) = ((MR_Box) (erl_backend__erl_rtti__V_42_42));
    }
    {
      erl_backend__erl_rtti__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_46_46, 1) = ((MR_Box) (erl_backend__erl_rtti__TypeName_9));
    }
    {
      erl_backend__erl_rtti__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_45_45, 0) = ((MR_Box) (erl_backend__erl_rtti__V_46_46));
    }
    {
      erl_backend__erl_rtti__V_48_48 = erl_backend__erl_rtti__erlang_type_ctor_rep_1_f_0(erl_backend__erl_rtti__Details_13);
    }
    {
      erl_backend__erl_rtti__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_49_49, 0) = ((MR_Box) (erl_backend__erl_rtti__ELDSDetails_19));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_rtti__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_47_47, 0) = ((MR_Box) (erl_backend__erl_rtti__V_48_48));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_47_47, 1) = ((MR_Box) (erl_backend__erl_rtti__V_49_49));
    }
    {
      erl_backend__erl_rtti__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_44_44, 0) = ((MR_Box) (erl_backend__erl_rtti__V_45_45));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_44_44, 1) = ((MR_Box) (erl_backend__erl_rtti__V_47_47));
    }
    {
      erl_backend__erl_rtti__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_40_40, 0) = ((MR_Box) (erl_backend__erl_rtti__V_41_41));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_40_40, 1) = ((MR_Box) (erl_backend__erl_rtti__V_44_44));
    }
    {
      erl_backend__erl_rtti__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_39_39, 0) = ((MR_Box) (erl_backend__erl_rtti__CompareExpr_16));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_39_39, 1) = ((MR_Box) (erl_backend__erl_rtti__V_40_40));
    }
    {
      erl_backend__erl_rtti__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_38_38, 0) = ((MR_Box) (erl_backend__erl_rtti__UnifyExpr_15));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_38_38, 1) = ((MR_Box) (erl_backend__erl_rtti__V_39_39));
    }
    {
      erl_backend__erl_rtti__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 0) = ((MR_Box) (erl_backend__erl_rtti__V_36_36));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 1) = ((MR_Box) (erl_backend__erl_rtti__V_38_38));
    }
    {
      erl_backend__erl_rtti__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_32_32, 0) = ((MR_Box) (erl_backend__erl_rtti__V_33_33));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_32_32, 1) = ((MR_Box) (erl_backend__erl_rtti__V_35_35));
    }
    {
      erl_backend__erl_rtti__ELDSTypeCtorData_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeCtorData_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeCtorData_21, 1) = ((MR_Box) (erl_backend__erl_rtti__V_32_32));
    }
    erl_backend__erl_rtti__TypeCtorInfo_59_59 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
    {
      erl_backend__erl_rtti__V_52_52 = mercury__list__reverse_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_59_59, erl_backend__erl_rtti__RevAssignments_20);
    }
    {
      erl_backend__erl_rtti__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_54_54, 0) = ((MR_Box) (erl_backend__erl_rtti__ELDSTypeCtorData_21));
    }
    {
      erl_backend__erl_rtti__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_53_53, 0) = ((MR_Box) (erl_backend__erl_rtti__V_54_54));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_rtti__V_51_51 = mercury__list__f_43_43_2_f_0(erl_backend__erl_rtti__TypeCtorInfo_59_59, erl_backend__erl_rtti__V_52_52, erl_backend__erl_rtti__V_53_53);
    }
    {
      erl_backend__erl_rtti__ClauseBody_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ClauseBody_22, 0) = ((MR_Box) (erl_backend__erl_rtti__V_51_51));
    }
    {
      erl_backend__erl_rtti__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtor_23, 0) = ((MR_Box) (erl_backend__erl_rtti__ModuleName_8));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtor_23, 1) = ((MR_Box) (erl_backend__erl_rtti__TypeName_9));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtor_23, 2) = ((MR_Box) (erl_backend__erl_rtti__Arity_10));
    }
    {
      erl_backend__erl_rtti__RttiId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiId_24, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeCtor_23));
    }
    {
      erl_backend__erl_rtti__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_56_56, 1) = ((MR_Box) (erl_backend__erl_rtti__ClauseBody_22));
    }
    {
      erl_backend__erl_rtti__RttiDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_26, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiId_24));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_26, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_26, 2) = ((MR_Box) (erl_backend__erl_rtti__VarSet_14));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_26, 3) = ((MR_Box) (erl_backend__erl_rtti__V_56_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_rtti__RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiDefn_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_rtti__RttiDefns0_18));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_1,
  MR_Word erl_backend__erl_rtti__HeadVar__2_2,
  MR_Word * erl_backend__erl_rtti__Defns_3)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;

    if (((MR_tag((MR_Word) erl_backend__erl_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word erl_backend__erl_rtti__TypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(erl_backend__erl_rtti__ModuleInfo_1, erl_backend__erl_rtti__TypeInfo_5, erl_backend__erl_rtti__Defns_3);
        }
      }
    else
      {
        MR_Word erl_backend__erl_rtti__TypeInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__HeadVar__2_2, (MR_Integer) 0)));

        {
          erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(erl_backend__erl_rtti__ModuleInfo_1, erl_backend__erl_rtti__TypeInfo_8, erl_backend__erl_rtti__Defns_3);
        }
      }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_rtti__wrapper_arg_2;
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv1_LambdaHeadVar__2_18;

    {
      erl_backend__erl_rtti__conv1_LambdaHeadVar__2_18 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_pseudo_type_info_to_elds_2__532__1_1_f_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1));
    }
    erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv1_LambdaHeadVar__2_18));
    return erl_backend__erl_rtti__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv0_Defns_3;

    {
      erl_backend__erl_rtti__rtti_maybe_pseudo_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv0_Defns_3);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv0_Defns_3));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__ArgTypeInfos_6,
  MR_Word * erl_backend__erl_rtti__ELDSArgTypeInfos_7,
  MR_Word * erl_backend__erl_rtti__ArgRttiDefns_8)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_22_22;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_24_24;
    MR_Word erl_backend__erl_rtti__ArgRttiDefns0_9;
    MR_Word erl_backend__erl_rtti__V_14_14;
    MR_Word erl_backend__erl_rtti__V_15_15;

    {
      erl_backend__erl_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_14_14, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_14_14, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_14_14, 3) = ((MR_Box) (erl_backend__erl_rtti__ModuleInfo_5));
    }
    erl_backend__erl_rtti__TypeCtorInfo_22_22 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    {
      mercury__list__map_3_p_0(erl_backend__erl_rtti__TypeCtorInfo_22_22, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], erl_backend__erl_rtti__V_14_14, erl_backend__erl_rtti__ArgTypeInfos_6, &erl_backend__erl_rtti__ArgRttiDefns0_9);
    }
    erl_backend__erl_rtti__TypeCtorInfo_24_24 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    {
      erl_backend__erl_rtti__V_15_15 = mercury__list__condense_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_24_24, erl_backend__erl_rtti__ArgRttiDefns0_9);
    }
    {
      *erl_backend__erl_rtti__ArgRttiDefns_8 = mercury__list__sort_and_remove_dups_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_24_24, erl_backend__erl_rtti__V_15_15);
    }
    {
      *erl_backend__erl_rtti__ELDSArgTypeInfos_7 = mercury__list__map_2_f_0(erl_backend__erl_rtti__TypeCtorInfo_22_22, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[4], erl_backend__erl_rtti__ArgTypeInfos_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeInfo_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__ELDSTypeInfo_9;
    MR_Word erl_backend__erl_rtti__ArgRttiDefns_10;
    MR_Word erl_backend__erl_rtti__ELDSFun_16;
    MR_Word erl_backend__erl_rtti__ELDSTuple_17;
    MR_Word erl_backend__erl_rtti__RttiId_18;
    MR_Word erl_backend__erl_rtti__RttiDefn_20;
    MR_Word erl_backend__erl_rtti__V_34_34;
    MR_Word erl_backend__erl_rtti__V_36_36;
    MR_Word erl_backend__erl_rtti__V_37_37;
    MR_Word erl_backend__erl_rtti__V_41_41;
    MR_Word erl_backend__erl_rtti__V_43_43;
    MR_Word erl_backend__erl_rtti__V_44_44;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__TypeInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_rtti__RttiTypeCtor_7 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__TypeInfo_5), (MR_Integer) 0);
          MR_Word erl_backend__erl_rtti__TypeCtorRttiId_8;

          {
            erl_backend__erl_rtti__TypeCtorRttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorRttiId_8, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiTypeCtor_7));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeInfo_9, 1) = ((MR_Box) (erl_backend__erl_rtti__TypeCtorRttiId_8));
          }
          erl_backend__erl_rtti__ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__ArgTypeInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 1)));
          MR_Word erl_backend__erl_rtti__ELDSArgTypeInfos_13;
          MR_Word erl_backend__erl_rtti__V_30_30;
          MR_Word erl_backend__erl_rtti__V_31_31;
          MR_Word erl_backend__erl_rtti__V_32_32;
          MR_Word erl_backend__erl_rtti__V_33_33;

          {
            erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__ArgTypeInfos_12, &erl_backend__erl_rtti__ELDSArgTypeInfos_13, &erl_backend__erl_rtti__ArgRttiDefns_10);
          }
          {
            erl_backend__erl_rtti__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_33_33, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeCtor_11));
          }
          {
            erl_backend__erl_rtti__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_32_32, 1) = ((MR_Box) (erl_backend__erl_rtti__V_33_33));
          }
          {
            erl_backend__erl_rtti__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_31_31, 0) = ((MR_Box) (erl_backend__erl_rtti__V_32_32));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_31_31, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSArgTypeInfos_13));
          }
          {
            erl_backend__erl_rtti__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_30_30, 1) = ((MR_Box) (erl_backend__erl_rtti__V_31_31));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (erl_backend__erl_rtti__V_30_30));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__VarCtorId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__V_22_22;
          MR_Word erl_backend__erl_rtti__V_23_23;
          MR_Word erl_backend__erl_rtti__V_24_24;
          MR_Word erl_backend__erl_rtti__V_25_25;
          MR_Word erl_backend__erl_rtti__V_26_26;
          MR_Word erl_backend__erl_rtti__V_27_27;
          MR_Word erl_backend__erl_rtti__V_28_28;
          MR_Integer erl_backend__erl_rtti__V_29_29;
          MR_Word erl_backend__erl_rtti__TypeCtor_46;
          MR_Word erl_backend__erl_rtti__ArgTypeInfos_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 1)));
          MR_Word erl_backend__erl_rtti__ELDSArgTypeInfos_48;

          {
            erl_backend__erl_rtti__TypeCtor_46 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(erl_backend__erl_rtti__VarCtorId_14);
          }
          {
            erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_2_4_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__ArgTypeInfos_47, &erl_backend__erl_rtti__ELDSArgTypeInfos_48, &erl_backend__erl_rtti__ArgRttiDefns_10);
          }
          {
            erl_backend__erl_rtti__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_25_25, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeCtor_46));
          }
          {
            erl_backend__erl_rtti__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_24_24, 1) = ((MR_Box) (erl_backend__erl_rtti__V_25_25));
          }
          {
            erl_backend__erl_rtti__V_29_29 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, erl_backend__erl_rtti__ArgTypeInfos_47);
          }
          {
            erl_backend__erl_rtti__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_28_28, 0) = ((MR_Box) (erl_backend__erl_rtti__V_29_29));
          }
          {
            erl_backend__erl_rtti__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_27_27, 0) = ((MR_Box) (erl_backend__erl_rtti__V_28_28));
          }
          {
            erl_backend__erl_rtti__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_26_26, 0) = ((MR_Box) (erl_backend__erl_rtti__V_27_27));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_26_26, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSArgTypeInfos_48));
          }
          {
            erl_backend__erl_rtti__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_23_23, 0) = ((MR_Box) (erl_backend__erl_rtti__V_24_24));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_23_23, 1) = ((MR_Box) (erl_backend__erl_rtti__V_26_26));
          }
          {
            erl_backend__erl_rtti__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, 1) = ((MR_Box) (erl_backend__erl_rtti__V_23_23));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (erl_backend__erl_rtti__V_22_22));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer erl_backend__erl_rtti__I_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__V_21_21;

          {
            erl_backend__erl_rtti__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_21_21, 0) = ((MR_Box) (erl_backend__erl_rtti__I_15));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (erl_backend__erl_rtti__V_21_21));
          }
          erl_backend__erl_rtti__ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    {
      erl_backend__erl_rtti__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_34_34, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSTypeInfo_9));
    }
    erl_backend__erl_rtti__ELDSFun_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_rtti__V_34_34);
    {
      erl_backend__erl_rtti__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_41_41, 0) = ((MR_Box) (erl_backend__erl_rtti__ELDSFun_16));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_rtti__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_6[1])));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_37_37, 1) = ((MR_Box) (erl_backend__erl_rtti__V_41_41));
    }
    {
      erl_backend__erl_rtti__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_36_36, 1) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
    }
    {
      erl_backend__erl_rtti__ELDSTuple_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTuple_17, 0) = ((MR_Box) (erl_backend__erl_rtti__V_36_36));
    }
    {
      erl_backend__erl_rtti__RttiId_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__RttiId_18, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_5));
    }
    {
      erl_backend__erl_rtti__V_43_43 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      erl_backend__erl_rtti__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSTuple_17));
    }
    {
      erl_backend__erl_rtti__RttiDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_20, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiId_18));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_20, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_20, 2) = ((MR_Box) (erl_backend__erl_rtti__V_43_43));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_20, 3) = ((MR_Box) (erl_backend__erl_rtti__V_44_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_rtti__RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiDefn_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_rtti__ArgRttiDefns_10));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_rtti__wrapper_arg_2;
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv1_LambdaHeadVar__2_15;

    {
      erl_backend__erl_rtti__conv1_LambdaHeadVar__2_15 = erl_backend__erl_rtti__IntroducedFrom__func__rtti_type_info_to_elds_2__457__1_1_f_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1));
    }
    erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv1_LambdaHeadVar__2_15));
    return erl_backend__erl_rtti__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv0_RttiDefns_6;

    {
      erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv0_RttiDefns_6);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv0_RttiDefns_6));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_5,
  MR_Word erl_backend__erl_rtti__ArgTypeInfos_6,
  MR_Word * erl_backend__erl_rtti__ELDSArgTypeInfos_7,
  MR_Word * erl_backend__erl_rtti__ArgRttiDefns_8)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_20_20;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_22_22;
    MR_Word erl_backend__erl_rtti__ArgRttiDefns0_9;
    MR_Word erl_backend__erl_rtti__V_11_11;
    MR_Word erl_backend__erl_rtti__V_12_12;

    {
      erl_backend__erl_rtti__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_11_11, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_11_11, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_11_11, 3) = ((MR_Box) (erl_backend__erl_rtti__ModuleInfo_5));
    }
    erl_backend__erl_rtti__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
    {
      mercury__list__map_3_p_0(erl_backend__erl_rtti__TypeCtorInfo_20_20, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], erl_backend__erl_rtti__V_11_11, erl_backend__erl_rtti__ArgTypeInfos_6, &erl_backend__erl_rtti__ArgRttiDefns0_9);
    }
    erl_backend__erl_rtti__TypeCtorInfo_22_22 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    {
      erl_backend__erl_rtti__V_12_12 = mercury__list__condense_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_22_22, erl_backend__erl_rtti__ArgRttiDefns0_9);
    }
    {
      *erl_backend__erl_rtti__ArgRttiDefns_8 = mercury__list__sort_and_remove_dups_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_22_22, erl_backend__erl_rtti__V_12_12);
    }
    {
      *erl_backend__erl_rtti__ELDSArgTypeInfos_7 = mercury__list__map_2_f_0(erl_backend__erl_rtti__TypeCtorInfo_20_20, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[3], erl_backend__erl_rtti__ArgTypeInfos_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__TypeInfo_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__ELDSTypeInfo_9;
    MR_Word erl_backend__erl_rtti__ArgRttiDefns_10;
    MR_Word erl_backend__erl_rtti__ELDSFun_15;
    MR_Word erl_backend__erl_rtti__ELDSTuple_16;
    MR_Word erl_backend__erl_rtti__RttiId_17;
    MR_Word erl_backend__erl_rtti__RttiDefn_19;
    MR_Word erl_backend__erl_rtti__V_32_32;
    MR_Word erl_backend__erl_rtti__V_34_34;
    MR_Word erl_backend__erl_rtti__V_35_35;
    MR_Word erl_backend__erl_rtti__V_39_39;
    MR_Word erl_backend__erl_rtti__V_41_41;
    MR_Word erl_backend__erl_rtti__V_42_42;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__TypeInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_rtti__RttiTypeCtor_7 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__TypeInfo_5), (MR_Integer) 0);
          MR_Word erl_backend__erl_rtti__TypeCtorRttiId_8;

          {
            erl_backend__erl_rtti__TypeCtorRttiId_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeCtorRttiId_8, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiTypeCtor_7));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__ELDSTypeInfo_9, 1) = ((MR_Box) (erl_backend__erl_rtti__TypeCtorRttiId_8));
          }
          erl_backend__erl_rtti__ArgRttiDefns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__ArgTypeInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 1)));
          MR_Word erl_backend__erl_rtti__ELDSArgTypeInfos_13;
          MR_Word erl_backend__erl_rtti__V_28_28;
          MR_Word erl_backend__erl_rtti__V_29_29;
          MR_Word erl_backend__erl_rtti__V_30_30;
          MR_Word erl_backend__erl_rtti__V_31_31;

          {
            erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__ArgTypeInfos_12, &erl_backend__erl_rtti__ELDSArgTypeInfos_13, &erl_backend__erl_rtti__ArgRttiDefns_10);
          }
          {
            erl_backend__erl_rtti__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_31_31, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeCtor_11));
          }
          {
            erl_backend__erl_rtti__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_30_30, 1) = ((MR_Box) (erl_backend__erl_rtti__V_31_31));
          }
          {
            erl_backend__erl_rtti__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_29_29, 0) = ((MR_Box) (erl_backend__erl_rtti__V_30_30));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_29_29, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSArgTypeInfos_13));
          }
          {
            erl_backend__erl_rtti__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_28_28, 1) = ((MR_Box) (erl_backend__erl_rtti__V_29_29));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (erl_backend__erl_rtti__V_28_28));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__VarCtorId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_rtti__V_20_20;
          MR_Word erl_backend__erl_rtti__V_21_21;
          MR_Word erl_backend__erl_rtti__V_22_22;
          MR_Word erl_backend__erl_rtti__V_23_23;
          MR_Word erl_backend__erl_rtti__V_24_24;
          MR_Word erl_backend__erl_rtti__V_25_25;
          MR_Word erl_backend__erl_rtti__V_26_26;
          MR_Integer erl_backend__erl_rtti__V_27_27;
          MR_Word erl_backend__erl_rtti__TypeCtor_44;
          MR_Word erl_backend__erl_rtti__ArgTypeInfos_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__TypeInfo_5, (MR_Integer) 1)));
          MR_Word erl_backend__erl_rtti__ELDSArgTypeInfos_46;

          {
            erl_backend__erl_rtti__TypeCtor_44 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(erl_backend__erl_rtti__VarCtorId_14);
          }
          {
            erl_backend__erl_rtti__rtti_type_info_to_elds_2_4_p_0(erl_backend__erl_rtti__ModuleInfo_4, erl_backend__erl_rtti__ArgTypeInfos_45, &erl_backend__erl_rtti__ELDSArgTypeInfos_46, &erl_backend__erl_rtti__ArgRttiDefns_10);
          }
          {
            erl_backend__erl_rtti__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_23_23, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeCtor_44));
          }
          {
            erl_backend__erl_rtti__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_22_22, 1) = ((MR_Box) (erl_backend__erl_rtti__V_23_23));
          }
          {
            erl_backend__erl_rtti__V_27_27 = mercury__list__length_1_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, erl_backend__erl_rtti__ArgTypeInfos_45);
          }
          {
            erl_backend__erl_rtti__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_26_26, 0) = ((MR_Box) (erl_backend__erl_rtti__V_27_27));
          }
          {
            erl_backend__erl_rtti__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_25_25, 0) = ((MR_Box) (erl_backend__erl_rtti__V_26_26));
          }
          {
            erl_backend__erl_rtti__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_24_24, 0) = ((MR_Box) (erl_backend__erl_rtti__V_25_25));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_24_24, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSArgTypeInfos_46));
          }
          {
            erl_backend__erl_rtti__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_21_21, 0) = ((MR_Box) (erl_backend__erl_rtti__V_22_22));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_21_21, 1) = ((MR_Box) (erl_backend__erl_rtti__V_24_24));
          }
          {
            erl_backend__erl_rtti__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_20_20, 1) = ((MR_Box) (erl_backend__erl_rtti__V_21_21));
          }
          {
            erl_backend__erl_rtti__ELDSTypeInfo_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTypeInfo_9, 0) = ((MR_Box) (erl_backend__erl_rtti__V_20_20));
          }
        }
        break;
    }
    {
      erl_backend__erl_rtti__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_32_32, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSTypeInfo_9));
    }
    erl_backend__erl_rtti__ELDSFun_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_rtti__V_32_32);
    {
      erl_backend__erl_rtti__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_39_39, 0) = ((MR_Box) (erl_backend__erl_rtti__ELDSFun_15));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_rtti__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__erl_rtti_scalar_common_6[0])));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 1) = ((MR_Box) (erl_backend__erl_rtti__V_39_39));
    }
    {
      erl_backend__erl_rtti__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_34_34, 1) = ((MR_Box) (erl_backend__erl_rtti__V_35_35));
    }
    {
      erl_backend__erl_rtti__ELDSTuple_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ELDSTuple_16, 0) = ((MR_Box) (erl_backend__erl_rtti__V_34_34));
    }
    {
      erl_backend__erl_rtti__RttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__RttiId_17, 0) = ((MR_Box) (erl_backend__erl_rtti__TypeInfo_5));
    }
    {
      erl_backend__erl_rtti__V_41_41 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      erl_backend__erl_rtti__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_42_42, 1) = ((MR_Box) (erl_backend__erl_rtti__ELDSTuple_16));
    }
    {
      erl_backend__erl_rtti__RttiDefn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_19, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiId_17));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_19, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_19, 2) = ((MR_Box) (erl_backend__erl_rtti__V_41_41));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_19, 3) = ((MR_Box) (erl_backend__erl_rtti__V_42_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_rtti__RttiDefns_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiDefn_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_rtti__ArgRttiDefns_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__extract_extra_arg_6_p_0(
  MR_Word erl_backend__erl_rtti__TCIVar_7,
  MR_Integer erl_backend__erl_rtti__Index_8,
  MR_Word * erl_backend__erl_rtti__Var_9,
  MR_Word * erl_backend__erl_rtti__ExtractStatement_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_12,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_13)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__V_16_16;
    MR_Word erl_backend__erl_rtti__V_17_17;
    MR_Integer erl_backend__erl_rtti__V_18_18;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "Extra", erl_backend__erl_rtti__Var_9, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_12, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_13);
    }
    {
      erl_backend__erl_rtti__V_16_16 = erl_backend__elds__expr_from_var_1_f_0(*erl_backend__erl_rtti__Var_9);
    }
    erl_backend__erl_rtti__V_18_18 = ((MR_Integer) 1 + erl_backend__erl_rtti__Index_8);
    {
      erl_backend__erl_rtti__V_17_17 = erl_backend__elds__elds_call_element_2_f_0(erl_backend__erl_rtti__TCIVar_7, erl_backend__erl_rtti__V_18_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_rtti__ExtractStatement_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_rtti__V_16_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_rtti__V_17_17));
    }
  }
}

static MR_Box MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_rtti__wrapper_arg_2;
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv4_HeadVar__2_2;

    {
      erl_backend__erl_rtti__conv4_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1));
    }
    erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv4_HeadVar__2_2));
    return erl_backend__erl_rtti__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box erl_backend__erl_rtti__wrapper_arg_4,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_5)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv2_Var_9;
    MR_Word erl_backend__erl_rtti__conv1_ExtractStatement_10;
    MR_Word erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_13;

    {
      erl_backend__erl_rtti__extract_extra_arg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Integer) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv2_Var_9, &erl_backend__erl_rtti__conv1_ExtractStatement_10, ((MR_Word) erl_backend__erl_rtti__wrapper_arg_4), &erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_13);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv2_Var_9));
    *erl_backend__erl_rtti__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_rtti__conv1_ExtractStatement_10));
    *erl_backend__erl_rtti__wrapper_arg_5 = ((MR_Box) (erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_13));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_7,
  MR_Integer erl_backend__erl_rtti__NumExtra_8,
  MR_Word erl_backend__erl_rtti__RttiProcLabel_9,
  MR_Word * erl_backend__erl_rtti__WrapperFun_10,
  MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_37,
  MR_Word * erl_backend__erl_rtti__STATE_VARIABLE_VarSet_38)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word erl_backend__erl_rtti__TypeInfo_149_149;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_150_150;
    MR_Word erl_backend__erl_rtti__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 6)));
    MR_Integer erl_backend__erl_rtti__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 7)));
    MR_Word erl_backend__erl_rtti__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 5)));
    MR_Word erl_backend__erl_rtti__ArgModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 9)));
    MR_Word erl_backend__erl_rtti__Detism_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word erl_backend__erl_rtti__TCIVar_17;
    MR_Word erl_backend__erl_rtti__Ws_18;
    MR_Word erl_backend__erl_rtti__ExtraVars_19;
    MR_Word erl_backend__erl_rtti__ExtractExtras_20;
    MR_Word erl_backend__erl_rtti__ExtraVarsWs_21;
    MR_Word erl_backend__erl_rtti__CallInputArgs_22;
    MR_Word erl_backend__erl_rtti__CallOutputArgs_23;
    MR_Word erl_backend__erl_rtti__WrapperInputVarsPlusExtras_24;
    MR_Word erl_backend__erl_rtti__WrapperOutputVars_25;
    MR_Word erl_backend__erl_rtti__WrapperInputVars_26;
    MR_Word erl_backend__erl_rtti__CodeModel_27;
    MR_Word erl_backend__erl_rtti__WrapperOutputVarsExprs_28;
    MR_Word erl_backend__erl_rtti__AllWrapperInputVars_29;
    MR_Word erl_backend__erl_rtti__SuccessExpr0_30;
    MR_Word erl_backend__erl_rtti__DummyOutputVars_32;
    MR_Word erl_backend__erl_rtti__MaterialiseDummyOutputVars_33;
    MR_Word erl_backend__erl_rtti__SuccessExpr_34;
    MR_Word erl_backend__erl_rtti__CallTarget_35;
    MR_Word erl_backend__erl_rtti__DoCall_36;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_40_40;
    MR_Integer erl_backend__erl_rtti__V_41_41;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_42_42;
    MR_Integer erl_backend__erl_rtti__V_43_43;
    MR_Word erl_backend__erl_rtti__V_44_44;
    MR_Word erl_backend__erl_rtti__V_45_45;
    MR_Word erl_backend__erl_rtti__STATE_VARIABLE_VarSet_46_46;
    MR_Word erl_backend__erl_rtti__V_59_59;
    MR_Word erl_backend__erl_rtti__V_60_60;
    MR_Word erl_backend__erl_rtti__V_61_61;
    MR_Word erl_backend__erl_rtti__V_62_62;
    MR_Word erl_backend__erl_rtti__V_63_63;
    MR_Word erl_backend__erl_rtti__V_64_64;
    MR_Word erl_backend__erl_rtti__V_65_65;
    MR_Word erl_backend__erl_rtti__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 0)));
    MR_Word erl_backend__erl_rtti__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 1)));
    MR_Word erl_backend__erl_rtti__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 2)));
    MR_String erl_backend__erl_rtti__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 3)));
    MR_Integer erl_backend__erl_rtti__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 4)));
    MR_Word erl_backend__erl_rtti__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 8)));
    MR_Word erl_backend__erl_rtti__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 11)));
    MR_Word erl_backend__erl_rtti__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word erl_backend__erl_rtti__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiProcLabel_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Box erl_backend__erl_rtti__conv3_STATE_VARIABLE_VarSet_46_46;

    {
      mercury__varset__new_named_var_4_p_0(erl_backend__erl_rtti__TypeCtorInfo_141_141, (MR_String) "TypeClassInfo", &erl_backend__erl_rtti__TCIVar_17, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_0_37, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_40_40);
    }
    {
      erl_backend__erl_rtti__V_43_43 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_rtti__ArgTypes_14);
    }
    erl_backend__erl_rtti__V_41_41 = (erl_backend__erl_rtti__V_43_43 - erl_backend__erl_rtti__NumExtra_8);
    {
      mercury__varset__new_vars_4_p_0(erl_backend__erl_rtti__TypeCtorInfo_141_141, erl_backend__erl_rtti__V_41_41, &erl_backend__erl_rtti__Ws_18, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_40_40, &erl_backend__erl_rtti__STATE_VARIABLE_VarSet_42_42);
    }
    {
      erl_backend__erl_rtti__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 1) = ((MR_Box) (erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_44_44, 3) = ((MR_Box) (erl_backend__erl_rtti__TCIVar_17));
    }
    {
      erl_backend__erl_rtti__V_45_45 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, erl_backend__erl_rtti__NumExtra_8);
    }
    erl_backend__erl_rtti__TypeInfo_149_149 = (MR_Word) &erl_backend__erl_rtti_scalar_common_1[2];
    erl_backend__erl_rtti__TypeCtorInfo_150_150 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
    {
      mercury__list__map2_foldl_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__TypeCtorInfo_150_150, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[1], erl_backend__erl_rtti__V_44_44, erl_backend__erl_rtti__V_45_45, &erl_backend__erl_rtti__ExtraVars_19, &erl_backend__erl_rtti__ExtractExtras_20, ((MR_Box) (erl_backend__erl_rtti__STATE_VARIABLE_VarSet_42_42)), &erl_backend__erl_rtti__conv3_STATE_VARIABLE_VarSet_46_46);
    }
    erl_backend__erl_rtti__STATE_VARIABLE_VarSet_46_46 = ((MR_Word) erl_backend__erl_rtti__conv3_STATE_VARIABLE_VarSet_46_46);
    {
      erl_backend__erl_rtti__ExtraVarsWs_21 = mercury__list__f_43_43_2_f_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__ExtraVars_19, erl_backend__erl_rtti__Ws_18);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__ModuleInfo_7, (MR_Integer) 0, erl_backend__erl_rtti__ExtraVarsWs_21, erl_backend__erl_rtti__ArgTypes_14, erl_backend__erl_rtti__ArgModes_15, &erl_backend__erl_rtti__CallInputArgs_22, &erl_backend__erl_rtti__CallOutputArgs_23);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__ModuleInfo_7, (MR_Integer) 1, erl_backend__erl_rtti__ExtraVarsWs_21, erl_backend__erl_rtti__ArgTypes_14, erl_backend__erl_rtti__ArgModes_15, &erl_backend__erl_rtti__WrapperInputVarsPlusExtras_24, &erl_backend__erl_rtti__WrapperOutputVars_25);
    }
    {
      erl_backend__erl_rtti__WrapperInputVars_26 = mercury__list__delete_elems_2_f_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__WrapperInputVarsPlusExtras_24, erl_backend__erl_rtti__ExtraVars_19);
    }
    {
      hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_rtti__Detism_16, &erl_backend__erl_rtti__CodeModel_27);
    }
    {
      erl_backend__erl_rtti__WrapperOutputVarsExprs_28 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_rtti__WrapperOutputVars_25);
    }
    switch (erl_backend__erl_rtti__CodeModel_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            erl_backend__erl_rtti__AllWrapperInputVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__AllWrapperInputVars_29, 0) = ((MR_Box) (erl_backend__erl_rtti__TCIVar_17));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__AllWrapperInputVars_29, 1) = ((MR_Box) (erl_backend__erl_rtti__WrapperInputVars_26));
          }
          {
            erl_backend__erl_rtti__SuccessExpr0_30 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_rtti__WrapperOutputVarsExprs_28);
          }
          *erl_backend__erl_rtti__STATE_VARIABLE_VarSet_38 = erl_backend__erl_rtti__STATE_VARIABLE_VarSet_46_46;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__SucceedVar_31;
          MR_Word erl_backend__erl_rtti__V_52_52;
          MR_Word erl_backend__erl_rtti__V_53_53;
          MR_Word erl_backend__erl_rtti__V_55_55;
          MR_Word erl_backend__erl_rtti__V_56_56;

          {
            mercury__varset__new_named_var_4_p_0(erl_backend__erl_rtti__TypeCtorInfo_141_141, (MR_String) "Succeed", &erl_backend__erl_rtti__SucceedVar_31, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_46_46, erl_backend__erl_rtti__STATE_VARIABLE_VarSet_38);
          }
          {
            erl_backend__erl_rtti__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_52_52, 0) = ((MR_Box) (erl_backend__erl_rtti__TCIVar_17));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_52_52, 1) = ((MR_Box) (erl_backend__erl_rtti__WrapperInputVars_26));
          }
          {
            erl_backend__erl_rtti__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_53_53, 0) = ((MR_Box) (erl_backend__erl_rtti__SucceedVar_31));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_rtti__AllWrapperInputVars_29 = mercury__list__f_43_43_2_f_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__V_52_52, erl_backend__erl_rtti__V_53_53);
          }
          {
            erl_backend__erl_rtti__V_56_56 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_rtti__SucceedVar_31);
          }
          {
            erl_backend__erl_rtti__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_55_55, 0) = ((MR_Box) (erl_backend__erl_rtti__V_56_56));
          }
          {
            erl_backend__erl_rtti__SuccessExpr0_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__SuccessExpr0_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__SuccessExpr0_30, 1) = ((MR_Box) (erl_backend__erl_rtti__V_55_55));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__SuccessExpr0_30, 2) = ((MR_Box) (erl_backend__erl_rtti__WrapperOutputVarsExprs_28));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__V_57_57;

          {
            erl_backend__erl_rtti__AllWrapperInputVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__AllWrapperInputVars_29, 0) = ((MR_Box) (erl_backend__erl_rtti__TCIVar_17));
            MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__AllWrapperInputVars_29, 1) = ((MR_Box) (erl_backend__erl_rtti__WrapperInputVars_26));
          }
          {
            erl_backend__erl_rtti__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__V_57_57, 1) = ((MR_Box) (erl_backend__erl_rtti__WrapperOutputVarsExprs_28));
          }
          {
            erl_backend__erl_rtti__SuccessExpr0_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__SuccessExpr0_30, 0) = ((MR_Box) (erl_backend__erl_rtti__V_57_57));
          }
          *erl_backend__erl_rtti__STATE_VARIABLE_VarSet_38 = erl_backend__erl_rtti__STATE_VARIABLE_VarSet_46_46;
        }
        break;
    }
    {
      erl_backend__erl_rtti__DummyOutputVars_32 = mercury__list__delete_elems_2_f_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__WrapperOutputVars_25, erl_backend__erl_rtti__CallOutputArgs_23);
    }
    {
      erl_backend__erl_rtti__MaterialiseDummyOutputVars_33 = mercury__list__map_2_f_0(erl_backend__erl_rtti__TypeInfo_149_149, erl_backend__erl_rtti__TypeCtorInfo_150_150, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[2], erl_backend__erl_rtti__DummyOutputVars_32);
    }
    {
      erl_backend__erl_rtti__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_59_59, 0) = ((MR_Box) (erl_backend__erl_rtti__MaterialiseDummyOutputVars_33));
    }
    {
      erl_backend__erl_rtti__SuccessExpr_34 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_rtti__V_59_59, erl_backend__erl_rtti__SuccessExpr0_30);
    }
    {
      erl_backend__erl_rtti__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_60_60, 0) = ((MR_Box) (erl_backend__erl_rtti__PredId_12));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_60_60, 1) = ((MR_Box) (erl_backend__erl_rtti__ProcId_13));
    }
    {
      erl_backend__erl_rtti__CallTarget_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__CallTarget_35, 0) = ((MR_Box) (erl_backend__erl_rtti__V_60_60));
    }
    {
      erl_backend__erl_rtti__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_61_61, 0) = ((MR_Box) (erl_backend__erl_rtti__SuccessExpr_34));
    }
    {
      erl_backend__erl_call_gen__erl_make_call_6_p_0(erl_backend__erl_rtti__CodeModel_27, erl_backend__erl_rtti__CallTarget_35, erl_backend__erl_rtti__CallInputArgs_22, erl_backend__erl_rtti__CallOutputArgs_23, erl_backend__erl_rtti__V_61_61, &erl_backend__erl_rtti__DoCall_36);
    }
    {
      erl_backend__erl_rtti__V_63_63 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_rtti__AllWrapperInputVars_29);
    }
    {
      erl_backend__erl_rtti__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_65_65, 0) = ((MR_Box) (erl_backend__erl_rtti__ExtractExtras_20));
    }
    {
      erl_backend__erl_rtti__V_64_64 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_rtti__V_65_65, erl_backend__erl_rtti__DoCall_36);
    }
    {
      erl_backend__erl_rtti__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_62_62, 0) = ((MR_Box) (erl_backend__erl_rtti__V_63_63));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_62_62, 1) = ((MR_Box) (erl_backend__erl_rtti__V_64_64));
    }
    *erl_backend__erl_rtti__WrapperFun_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_rtti__V_62_62);
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box erl_backend__erl_rtti__wrapper_arg_3,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_4)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv1_WrapperFun_10;
    MR_Word erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_38;

    {
      erl_backend__erl_rtti__erl_gen_method_wrapper_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv1_WrapperFun_10, ((MR_Word) erl_backend__erl_rtti__wrapper_arg_3), &erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_38);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv1_WrapperFun_10));
    *erl_backend__erl_rtti__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_rtti__conv0_STATE_VARIABLE_VarSet_38));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1,
  MR_Word erl_backend__erl_rtti__RttiData_2,
  MR_Word * erl_backend__erl_rtti__HeadVar__3_3)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_rtti__RttiData_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_rtti__TypeCtorData_61 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_rtti__RttiData_2), (MR_Integer) 0);

          {
            erl_backend__erl_rtti__type_ctor_data_to_elds_3_p_0(erl_backend__erl_rtti__HeadVar__1_1, erl_backend__erl_rtti__TypeCtorData_61, erl_backend__erl_rtti__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_rtti__TypeInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__rtti_type_info_to_elds_3_p_0(erl_backend__erl_rtti__HeadVar__1_1, erl_backend__erl_rtti__TypeInfo_47, erl_backend__erl_rtti__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_rtti__PseudoTypeInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 0)));

          {
            erl_backend__erl_rtti__rtti_pseudo_type_info_to_elds_3_p_0(erl_backend__erl_rtti__HeadVar__1_1, erl_backend__erl_rtti__PseudoTypeInfo_51, erl_backend__erl_rtti__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_rtti__RttiDefn_6;
              MR_Word erl_backend__erl_rtti__TCName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 1)));
              MR_Word erl_backend__erl_rtti__InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 2)));
              MR_String erl_backend__erl_rtti__InstanceStr_9 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 3)));
              MR_Word erl_backend__erl_rtti__BaseTypeClassInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiData_2, (MR_Integer) 4)));
              MR_Integer erl_backend__erl_rtti__N2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 1)));
              MR_Integer erl_backend__erl_rtti__N3_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 2)));
              MR_Integer erl_backend__erl_rtti__N4_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 3)));
              MR_Integer erl_backend__erl_rtti__N5_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 4)));
              MR_Word erl_backend__erl_rtti__Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 5)));
              MR_Integer erl_backend__erl_rtti__NumExtra_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__BaseTypeClassInfo_10, (MR_Integer) 0)));
              MR_Word erl_backend__erl_rtti__MethodWrappers_18;
              MR_Word erl_backend__erl_rtti__VarSet_19;
              MR_Word erl_backend__erl_rtti__BaseTypeClassInfoData_20;
              MR_Word erl_backend__erl_rtti__RttiId_21;
              MR_Word erl_backend__erl_rtti__V_24_24;
              MR_Word erl_backend__erl_rtti__V_25_25;
              MR_Word erl_backend__erl_rtti__V_26_26;
              MR_Word erl_backend__erl_rtti__V_27_27;
              MR_Word erl_backend__erl_rtti__V_28_28;
              MR_Word erl_backend__erl_rtti__V_29_29;
              MR_Word erl_backend__erl_rtti__V_30_30;
              MR_Word erl_backend__erl_rtti__V_31_31;
              MR_Word erl_backend__erl_rtti__V_32_32;
              MR_Word erl_backend__erl_rtti__V_33_33;
              MR_Word erl_backend__erl_rtti__V_34_34;
              MR_Word erl_backend__erl_rtti__V_35_35;
              MR_Word erl_backend__erl_rtti__V_36_36;
              MR_Word erl_backend__erl_rtti__V_37_37;
              MR_Word erl_backend__erl_rtti__V_38_38;
              MR_Word erl_backend__erl_rtti__V_39_39;
              MR_Word erl_backend__erl_rtti__V_40_40;
              MR_Word erl_backend__erl_rtti__V_41_41;
              MR_Word erl_backend__erl_rtti__V_43_43;
              MR_Box erl_backend__erl_rtti__conv2_VarSet_19;

              {
                erl_backend__erl_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_24_24, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_24_24, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_data_to_elds_3_p_0_1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_24_24, 3) = ((MR_Box) (erl_backend__erl_rtti__HeadVar__1_1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_24_24, 4) = ((MR_Box) (erl_backend__erl_rtti__NumExtra_17));
              }
              {
                erl_backend__erl_rtti__V_25_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              {
                mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[1], erl_backend__erl_rtti__V_24_24, erl_backend__erl_rtti__Methods_16, &erl_backend__erl_rtti__MethodWrappers_18, ((MR_Box) (erl_backend__erl_rtti__V_25_25)), &erl_backend__erl_rtti__conv2_VarSet_19);
              }
              erl_backend__erl_rtti__VarSet_19 = ((MR_Word) erl_backend__erl_rtti__conv2_VarSet_19);
              {
                erl_backend__erl_rtti__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_28_28, 0) = ((MR_Box) (erl_backend__erl_rtti__NumExtra_17));
              }
              {
                erl_backend__erl_rtti__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_27_27, 0) = ((MR_Box) (erl_backend__erl_rtti__V_28_28));
              }
              {
                erl_backend__erl_rtti__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_31_31, 0) = ((MR_Box) (erl_backend__erl_rtti__N2_12));
              }
              {
                erl_backend__erl_rtti__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_30_30, 0) = ((MR_Box) (erl_backend__erl_rtti__V_31_31));
              }
              {
                erl_backend__erl_rtti__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_34_34, 0) = ((MR_Box) (erl_backend__erl_rtti__N3_13));
              }
              {
                erl_backend__erl_rtti__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_33_33, 0) = ((MR_Box) (erl_backend__erl_rtti__V_34_34));
              }
              {
                erl_backend__erl_rtti__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_37_37, 0) = ((MR_Box) (erl_backend__erl_rtti__N4_14));
              }
              {
                erl_backend__erl_rtti__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_36_36, 0) = ((MR_Box) (erl_backend__erl_rtti__V_37_37));
              }
              {
                erl_backend__erl_rtti__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_40_40, 0) = ((MR_Box) (erl_backend__erl_rtti__N5_15));
              }
              {
                erl_backend__erl_rtti__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_39_39, 0) = ((MR_Box) (erl_backend__erl_rtti__V_40_40));
              }
              {
                erl_backend__erl_rtti__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_38_38, 0) = ((MR_Box) (erl_backend__erl_rtti__V_39_39));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_38_38, 1) = ((MR_Box) (erl_backend__erl_rtti__MethodWrappers_18));
              }
              {
                erl_backend__erl_rtti__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 0) = ((MR_Box) (erl_backend__erl_rtti__V_36_36));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_35_35, 1) = ((MR_Box) (erl_backend__erl_rtti__V_38_38));
              }
              {
                erl_backend__erl_rtti__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_32_32, 0) = ((MR_Box) (erl_backend__erl_rtti__V_33_33));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_32_32, 1) = ((MR_Box) (erl_backend__erl_rtti__V_35_35));
              }
              {
                erl_backend__erl_rtti__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_29_29, 0) = ((MR_Box) (erl_backend__erl_rtti__V_30_30));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_29_29, 1) = ((MR_Box) (erl_backend__erl_rtti__V_32_32));
              }
              {
                erl_backend__erl_rtti__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_26_26, 0) = ((MR_Box) (erl_backend__erl_rtti__V_27_27));
                MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_26_26, 1) = ((MR_Box) (erl_backend__erl_rtti__V_29_29));
              }
              {
                erl_backend__erl_rtti__BaseTypeClassInfoData_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__BaseTypeClassInfoData_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__BaseTypeClassInfoData_20, 1) = ((MR_Box) (erl_backend__erl_rtti__V_26_26));
              }
              {
                erl_backend__erl_rtti__RttiId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiId_21, 0) = ((MR_Box) (erl_backend__erl_rtti__TCName_7));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiId_21, 1) = ((MR_Box) (erl_backend__erl_rtti__InstanceModule_8));
                MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__RttiId_21, 2) = ((MR_Box) (erl_backend__erl_rtti__InstanceStr_9));
              }
              {
                erl_backend__erl_rtti__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__V_43_43, 0) = ((MR_Box) (erl_backend__erl_rtti__BaseTypeClassInfoData_20));
              }
              {
                erl_backend__erl_rtti__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_41_41, 1) = ((MR_Box) (erl_backend__erl_rtti__V_43_43));
              }
              {
                erl_backend__erl_rtti__RttiDefn_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_6, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiId_21));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_6, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_6, 2) = ((MR_Box) (erl_backend__erl_rtti__VarSet_19));
                MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__RttiDefn_6, 3) = ((MR_Box) (erl_backend__erl_rtti__V_41_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_rtti__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_rtti__RttiDefn_6));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            *erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *erl_backend__erl_rtti__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_impl_ctor_1_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__HeadVar__2_2;

    switch (erl_backend__erl_rtti__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 11:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_curfr");
          }
        }
        break;
      case (MR_Integer) 0:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 4;
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_maxfr");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_redofr");
          }
        }
        break;
      case (MR_Integer) 5:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_redoip");
          }
        }
        break;
      case (MR_Integer) 12:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 5;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_succip");
          }
        }
        break;
      case (MR_Integer) 6:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 6;
        break;
      case (MR_Integer) 7:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_impl_ctor\'/1", (MR_String) "impl_ctor_trail_ptr");
          }
        }
        break;
      case (MR_Integer) 9:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 8:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 10:
        erl_backend__erl_rtti__HeadVar__2_2 = (MR_Integer) 2;
        break;
    }
    return erl_backend__erl_rtti__HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_du_functor_3_p_0(
  MR_Word erl_backend__erl_rtti__Functor_4,
  MR_Integer erl_backend__erl_rtti__FunctorNum_5,
  MR_Word * erl_backend__erl_rtti__ErlangFunctor_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_String erl_backend__erl_rtti__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 0)));
    MR_Integer erl_backend__erl_rtti__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_rtti__Ordinal_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 2)));
    MR_Word erl_backend__erl_rtti__ArgInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 4)));
    MR_Word erl_backend__erl_rtti__Exist_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 5)));
    MR_Word erl_backend__erl_rtti__SubtypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 6)));
    MR_Word erl_backend__erl_rtti__V_14_14 = (MR_Word) erl_backend__erl_rtti__Name_7;
    MR_Word erl_backend__erl_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Functor_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_rtti__ErlangFunctor_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_rtti__Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_rtti__Arity_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_rtti__Ordinal_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_rtti__FunctorNum_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_rtti__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_rtti__ArgInfos_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_rtti__Exist_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_rtti__SubtypeInfo_13));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__convert_enum_functor_3_p_0(
  MR_Word erl_backend__erl_rtti__EnumFunctor_4,
  MR_Integer erl_backend__erl_rtti__FunctorNum_5,
  MR_Word * erl_backend__erl_rtti__ErlangFunctor_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_String erl_backend__erl_rtti__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__EnumFunctor_4, (MR_Integer) 0)));
    MR_Integer erl_backend__erl_rtti__Ordinal_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__EnumFunctor_4, (MR_Integer) 1)));
    MR_Word erl_backend__erl_rtti__V_10_10 = (MR_Word) erl_backend__erl_rtti__Name_7;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_rtti__ErlangFunctor_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_rtti__Name_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_rtti__Ordinal_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_rtti__FunctorNum_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_rtti__V_10_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_2(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv1_ErlangFunctor_6;

    {
      erl_backend__erl_rtti__convert_enum_functor_3_p_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), ((MR_Integer) erl_backend__erl_rtti__wrapper_arg_2), &erl_backend__erl_rtti__conv1_ErlangFunctor_6);
    }
    *erl_backend__erl_rtti__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_rtti__conv1_ErlangFunctor_6));
  }
}

static void MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box erl_backend__erl_rtti__wrapper_arg_2,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv0_ErlangFunctor_6;

    {
      erl_backend__erl_rtti__convert_du_functor_3_p_0(((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), ((MR_Integer) erl_backend__erl_rtti__wrapper_arg_2), &erl_backend__erl_rtti__conv0_ErlangFunctor_6);
    }
    *erl_backend__erl_rtti__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_rtti__conv0_ErlangFunctor_6));
  }
}

static MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_type_ctor_details_4_f_0(
  MR_Word erl_backend__erl_rtti__ModuleName_6,
  MR_String erl_backend__erl_rtti__TypeName_7,
  MR_Integer erl_backend__erl_rtti__Arity_8,
  MR_Word erl_backend__erl_rtti__Details_9)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__TypeName_7, (MR_String) "list") == 0);
    MR_Word erl_backend__erl_rtti__D_10;
    MR_String erl_backend__erl_rtti__V_11_11;

    if (erl_backend__erl_rtti__succeeded)
      {
        erl_backend__erl_rtti__succeeded = (erl_backend__erl_rtti__Arity_8 == (MR_Integer) 1);
        if (erl_backend__erl_rtti__succeeded)
          {
            erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__ModuleName_6)) == (MR_mktag((MR_Integer) 0)));
            if (erl_backend__erl_rtti__succeeded)
              {
                erl_backend__erl_rtti__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ModuleName_6, (MR_Integer) 0)));
                erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__V_11_11, (MR_String) "list") == 0);
              }
          }
      }
    if (erl_backend__erl_rtti__succeeded)
      erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String erl_backend__erl_rtti__V_12_12;

        erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__TypeName_7, (MR_String) "array") == 0);
        if (erl_backend__erl_rtti__succeeded)
          {
            erl_backend__erl_rtti__succeeded = (erl_backend__erl_rtti__Arity_8 == (MR_Integer) 1);
            if (erl_backend__erl_rtti__succeeded)
              {
                erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__ModuleName_6)) == (MR_mktag((MR_Integer) 0)));
                if (erl_backend__erl_rtti__succeeded)
                  {
                    erl_backend__erl_rtti__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__ModuleName_6, (MR_Integer) 0)));
                    erl_backend__erl_rtti__succeeded = (strcmp(erl_backend__erl_rtti__V_12_12, (MR_String) "array") == 0);
                  }
              }
          }
        if (erl_backend__erl_rtti__succeeded)
          erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        else
          switch (MR_tag((MR_Word) erl_backend__erl_rtti__Details_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word erl_backend__erl_rtti__Functors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));
                MR_Word erl_backend__erl_rtti__IsDummy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 4)));
                MR_Word erl_backend__erl_rtti__FunctorNums_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 5)));
                MR_Word erl_backend__erl_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 0)));
                MR_Word erl_backend__erl_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 2)));
                MR_Word erl_backend__erl_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__Details_9, (MR_Integer) 3)));

                switch (erl_backend__erl_rtti__IsDummy_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word erl_backend__erl_rtti__ErlFunctors_22;

                      {
                        mercury__list__map_corresponding_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[1], erl_backend__erl_rtti__Functors_16, erl_backend__erl_rtti__FunctorNums_20, &erl_backend__erl_rtti__ErlFunctors_22);
                      }
                      {
                        erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (erl_backend__erl_rtti__ErlFunctors_22));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word erl_backend__erl_rtti__F_21;
                      MR_Word erl_backend__erl_rtti__V_71_71;

                      erl_backend__erl_rtti__succeeded = ((MR_tag((MR_Word) erl_backend__erl_rtti__Functors_16)) == (MR_mktag((MR_Integer) 1)));
                      if (erl_backend__erl_rtti__succeeded)
                        {
                          erl_backend__erl_rtti__F_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__Functors_16, (MR_Integer) 0)));
                          erl_backend__erl_rtti__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__Functors_16, (MR_Integer) 1)));
                          erl_backend__erl_rtti__succeeded = (erl_backend__erl_rtti__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      if (erl_backend__erl_rtti__succeeded)
                        {
                          MR_String erl_backend__erl_rtti__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__F_21, (MR_Integer) 0)));
                          MR_Integer erl_backend__erl_rtti__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__F_21, (MR_Integer) 1)));

                          {
                            erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (erl_backend__erl_rtti__V_72_72));
                          }
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_type_ctor_details_2\'/1", (MR_String) "dummy type with more than one functor");
                          }
                        }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_type_ctor_details_2\'/1", (MR_String) "NYI foreign enumerations for Erlang.");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word erl_backend__erl_rtti__ErlangFunctors_32;
                MR_Word erl_backend__erl_rtti__Functors_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));
                MR_Word erl_backend__erl_rtti__FunctorNums_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_9, (MR_Integer) 4)));
                MR_Word erl_backend__erl_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_9, (MR_Integer) 0)));
                MR_Word erl_backend__erl_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_9, (MR_Integer) 2)));
                MR_Word erl_backend__erl_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__Details_9, (MR_Integer) 3)));

                {
                  mercury__list__map_corresponding_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_3[0], erl_backend__erl_rtti__Functors_76, erl_backend__erl_rtti__FunctorNums_77, &erl_backend__erl_rtti__ErlangFunctors_32);
                }
                {
                  erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (erl_backend__erl_rtti__ErlangFunctors_32));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_rtti", (MR_String) "function \140erl_backend.erl_rtti.erlang_type_ctor_details_2\'/1", (MR_String) "reserved");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__erl_rtti__NoTagFunctor_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 2)));
                    MR_String erl_backend__erl_rtti__Name_41 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__NoTagFunctor_40, (MR_Integer) 0)));
                    MR_Word erl_backend__erl_rtti__TypeInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__NoTagFunctor_40, (MR_Integer) 1)));
                    MR_Word erl_backend__erl_rtti__ArgName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__NoTagFunctor_40, (MR_Integer) 2)));
                    MR_Word erl_backend__erl_rtti__SubtypeInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__NoTagFunctor_40, (MR_Integer) 3)));
                    MR_Word erl_backend__erl_rtti__ArgTypeInfo_48;
                    MR_Word erl_backend__erl_rtti__ArgInfos_49;
                    MR_Word erl_backend__erl_rtti__DUFunctor_50;
                    MR_Word erl_backend__erl_rtti__V_56_56;
                    MR_Word erl_backend__erl_rtti__V_59_59;
                    MR_Word erl_backend__erl_rtti__V_61_61;
                    MR_Word erl_backend__erl_rtti__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));

                    if (((MR_tag((MR_Word) erl_backend__erl_rtti__TypeInfo_42)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word erl_backend__erl_rtti__P_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__TypeInfo_42, (MR_Integer) 0)));

                        {
                          erl_backend__erl_rtti__ArgTypeInfo_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), erl_backend__erl_rtti__ArgTypeInfo_48, 0) = ((MR_Box) (erl_backend__erl_rtti__P_92));
                        }
                      }
                    else
                      {
                        MR_Word erl_backend__erl_rtti__P_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__TypeInfo_42, (MR_Integer) 0)));

                        {
                          erl_backend__erl_rtti__ArgTypeInfo_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ArgTypeInfo_48, 0) = ((MR_Box) (erl_backend__erl_rtti__P_91));
                        }
                      }
                    {
                      erl_backend__erl_rtti__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_56_56, 0) = ((MR_Box) (erl_backend__erl_rtti__ArgName_43));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_56_56, 1) = ((MR_Box) (erl_backend__erl_rtti__ArgTypeInfo_48));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_56_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      erl_backend__erl_rtti__ArgInfos_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ArgInfos_49, 0) = ((MR_Box) (erl_backend__erl_rtti__V_56_56));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__ArgInfos_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    erl_backend__erl_rtti__V_59_59 = (MR_Word) erl_backend__erl_rtti__Name_41;
                    {
                      erl_backend__erl_rtti__DUFunctor_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 0) = ((MR_Box) (erl_backend__erl_rtti__Name_41));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 3) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 4) = ((MR_Box) (erl_backend__erl_rtti__V_59_59));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 5) = ((MR_Box) (erl_backend__erl_rtti__ArgInfos_49));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__DUFunctor_50, 7) = ((MR_Box) (erl_backend__erl_rtti__SubtypeInfo_44));
                    }
                    {
                      erl_backend__erl_rtti__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_61_61, 0) = ((MR_Box) (erl_backend__erl_rtti__DUFunctor_50));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (erl_backend__erl_rtti__V_61_61));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word erl_backend__erl_rtti__Type_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));

                    {
                      erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 1) = ((MR_Box) (erl_backend__erl_rtti__Type_51));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word erl_backend__erl_rtti__Builtin_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));

                    {
                      erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 1) = ((MR_Box) (erl_backend__erl_rtti__Builtin_52));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word erl_backend__erl_rtti__Impl_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__Details_9, (MR_Integer) 1)));
                    MR_Word erl_backend__erl_rtti__V_55_55;

                    {
                      erl_backend__erl_rtti__V_55_55 = erl_backend__erl_rtti__erlang_impl_ctor_1_f_0(erl_backend__erl_rtti__Impl_53);
                    }
                    {
                      erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_rtti__D_10, 1) = ((MR_Box) (erl_backend__erl_rtti__V_55_55));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  erl_backend__erl_rtti__D_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                  break;
              }
              break;
          }
      }
    return erl_backend__erl_rtti__D_10;
  }
}

static void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1(
  MR_Box erl_backend__erl_rtti__closure_arg,
  MR_Box erl_backend__erl_rtti__wrapper_arg_1,
  MR_Box * erl_backend__erl_rtti__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_rtti__closure = erl_backend__erl_rtti__closure_arg;
    MR_Word erl_backend__erl_rtti__conv0_HeadVar__3_3;

    {
      erl_backend__erl_rtti__rtti_data_to_elds_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_rtti__wrapper_arg_1), &erl_backend__erl_rtti__conv0_HeadVar__3_3);
    }
    *erl_backend__erl_rtti__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_rtti__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0(
  MR_Word erl_backend__erl_rtti__ModuleInfo_4,
  MR_Word erl_backend__erl_rtti__RttiDatas_5,
  MR_Word * erl_backend__erl_rtti__RttiDefns_6)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__TypeCtorInfo_14_14;
    MR_Word erl_backend__erl_rtti__RttiDefns0_7;
    MR_Word erl_backend__erl_rtti__V_8_8;
    MR_Word erl_backend__erl_rtti__V_9_9;

    {
      erl_backend__erl_rtti__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_8_8, 0) = ((MR_Box) (&erl_backend__erl_rtti_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_8_8, 1) = ((MR_Box) (erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_rtti__V_8_8, 3) = ((MR_Box) (erl_backend__erl_rtti__ModuleInfo_4));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0, (MR_Word) &erl_backend__erl_rtti_scalar_common_1[0], erl_backend__erl_rtti__V_8_8, erl_backend__erl_rtti__RttiDatas_5, &erl_backend__erl_rtti__RttiDefns0_7);
    }
    erl_backend__erl_rtti__TypeCtorInfo_14_14 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    {
      erl_backend__erl_rtti__V_9_9 = mercury__list__condense_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_14_14, erl_backend__erl_rtti__RttiDefns0_7);
    }
    {
      *erl_backend__erl_rtti__RttiDefns_6 = mercury__list__sort_and_remove_dups_1_f_0(erl_backend__erl_rtti__TypeCtorInfo_14_14, erl_backend__erl_rtti__V_9_9);
    }
  }
}

MR_Word MR_CALL 
erl_backend__erl_rtti__erlang_rtti_data_2_f_0(
  MR_Word erl_backend__erl_rtti__HeadVar__1_1,
  MR_Word erl_backend__erl_rtti__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_rtti__succeeded;
    MR_Word erl_backend__erl_rtti__HeadVar__3_3;

    {
      erl_backend__erl_rtti__HeadVar__3_3 = erl_backend__erl_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_114_108_97_110_103_95_114_116_116_105_95_100_97_116_97_95_95_91_49_93_95_48_2_f_0(erl_backend__erl_rtti__HeadVar__2_2);
    }
    return erl_backend__erl_rtti__HeadVar__3_3;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.erl_rtti. */
