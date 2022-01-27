/*
** Automatically generated from `hhf.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module hlds.hhf. */
/* :- implementation. */

/*
INIT mercury__hlds__hhf__init
ENDINIT
*/

#include "hlds.hhf.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 98 "hhf.m"
struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s {
#line 98 "hhf.m"
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__ImplementationInstGraph_19;
#line 98 "hhf.m"
  MR_Word * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__HeadVar__3_40;
#line 98 "hhf.m"
  MR_Cont hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont;
#line 98 "hhf.m"
  void * hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont_env_ptr;
#line 98 "hhf.m"
  MR_Word hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__V0_22;
#line 100 "hhf.m"
  MR_Box hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__conv0_V0_22;
#line 98 "hhf.m"
};

#line 98 "hhf.m"
struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s {
#line 98 "hhf.m"
  MR_Box * hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1;
#line 98 "hhf.m"
  MR_Cont hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont;
#line 98 "hhf.m"
  void * hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr;
#line 98 "hhf.m"
  MR_Word hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_HeadVar__3_40;
#line 98 "hhf.m"
};


#line 169 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 175 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 187 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct1 hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 193 "hlds.hhf.c"
static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3];

#line 196 "hlds.hhf.c"
static const MR_ConstString hlds__hhf__hlds__hhf__field_names_hhf_info_0_0[3];

#line 199 "hlds.hhf.c"
static const MR_DuFunctorDesc hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0;

#line 202 "hlds.hhf.c"
static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1];

#line 205 "hlds.hhf.c"
static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1];

#line 208 "hlds.hhf.c"
static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0[1];

#line 211 "hlds.hhf.c"
static const MR_Integer hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0[1];

#line 214 "hlds.hhf.c"
static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
#line 217 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 219 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_2);

#line 222 "hlds.hhf.c"
static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
#line 225 "hlds.hhf.c"
  MR_Box * hlds__hhf__wrapper_arg_1,
#line 227 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 229 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_3);

#line 195 "hhf.m"
static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
#line 195 "hhf.m"
  MR_Word hlds__hhf__Clause0_7,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__Clause_8,
#line 195 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16);

#line 100 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_2(
#line 100 "hhf.m"
  void * hlds__hhf__env_ptr_arg);

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_1(
#line 98 "hhf.m"
  void * hlds__hhf__env_ptr_arg);

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0(
#line 98 "hhf.m"
  MR_Word hlds__hhf__ImplementationInstGraph_19,
#line 98 "hhf.m"
  MR_Word hlds__hhf__HeadVars_45,
#line 98 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__3_40,
#line 98 "hhf.m"
  MR_Cont hlds__hhf__cont,
#line 98 "hhf.m"
  void * hlds__hhf__cont_env_ptr);

#line 188 "hhf.m"
static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
#line 188 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__1_1,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__3_3);

#line 188 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2);

#line 505 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
#line 505 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 505 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2);

#line 487 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__same_type_2_2_p_0(
#line 487 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 487 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2);

#line 465 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
#line 465 "hhf.m"
  MR_Word hlds__hhf__Var0_7,
#line 465 "hhf.m"
  MR_Word hlds__hhf__Type_8,
#line 465 "hhf.m"
  MR_Word hlds__hhf__InstGraph_9,
#line 465 "hhf.m"
  MR_Word hlds__hhf__VarTypes_10,
#line 465 "hhf.m"
  MR_Word hlds__hhf__BaseVars_11,
#line 465 "hhf.m"
  MR_Word * hlds__hhf__Var_12);

#line 443 "hhf.m"
static void MR_CALL 
hlds__hhf__add_cons_id_7_p_0(
#line 443 "hhf.m"
  MR_Word hlds__hhf__Var_8,
#line 443 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_9,
#line 443 "hhf.m"
  MR_Word hlds__hhf__BaseVars_10,
#line 443 "hhf.m"
  MR_Word hlds__hhf__Arg_11,
#line 443 "hhf.m"
  MR_Word * hlds__hhf__NewVar_12,
#line 443 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_23,
#line 443 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_24);

#line 435 "hhf.m"
static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0_1(
#line 435 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 435 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 435 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 435 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 435 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4);

#line 422 "hhf.m"
static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
#line 422 "hhf.m"
  MR_Word hlds__hhf__Var_9,
#line 422 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_10,
#line 422 "hhf.m"
  MR_Word hlds__hhf__BaseVars_11,
#line 422 "hhf.m"
  MR_Word hlds__hhf__TypeCtor_12,
#line 422 "hhf.m"
  MR_Word hlds__hhf__TypeCtorModuleName_13,
#line 422 "hhf.m"
  MR_Word hlds__hhf__Ctor_14,
#line 422 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_27,
#line 422 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_28);

#line 415 "hhf.m"
static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
#line 415 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 415 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 415 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 415 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3);

#line 397 "hhf.m"
static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
#line 397 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_6,
#line 397 "hhf.m"
  MR_Word hlds__hhf__BaseVars_7,
#line 397 "hhf.m"
  MR_Word hlds__hhf__Var_8,
#line 397 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_19,
#line 397 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_20);

#line 354 "hhf.m"
static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
#line 354 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 354 "hhf.m"
  MR_Word hlds__hhf__NonLocals_2,
#line 354 "hhf.m"
  MR_Word hlds__hhf__GI0_3,
#line 354 "hhf.m"
  MR_Word hlds__hhf__M_4,
#line 354 "hhf.m"
  MR_Word hlds__hhf__U_5,
#line 354 "hhf.m"
  MR_Word hlds__hhf__C_6,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__7_7,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__8_8,
#line 354 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_9,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_10);

#line 338 "hhf.m"
static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
#line 338 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 338 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2,
#line 338 "hhf.m"
  MR_Word hlds__hhf__GI0_3,
#line 338 "hhf.m"
  MR_Word hlds__hhf__M_4,
#line 338 "hhf.m"
  MR_Word hlds__hhf__U_5,
#line 338 "hhf.m"
  MR_Word hlds__hhf__C_6,
#line 338 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__7_7);

#line 326 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
#line 326 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 326 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 326 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 326 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3);

#line 295 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
#line 295 "hhf.m"
  MR_Word hlds__hhf__RHS0_11,
#line 295 "hhf.m"
  MR_Word hlds__hhf__NonLocals_12,
#line 295 "hhf.m"
  MR_Word hlds__hhf__GoalInfo0_13,
#line 295 "hhf.m"
  MR_Word hlds__hhf__X_14,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Mode_15,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Unif_16,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Context_17,
#line 295 "hhf.m"
  MR_Word * hlds__hhf__GoalExpr_18,
#line 295 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_52,
#line 295 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_53);

#line 263 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
#line 263 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 263 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 263 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 263 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 263 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4);

#line 252 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
#line 252 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 252 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 252 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 252 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 252 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4);

#line 232 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
#line 232 "hhf.m"
  MR_Word hlds__hhf__NonLocals_7,
#line 232 "hhf.m"
  MR_Word hlds__hhf__GoalInfo_8,
#line 232 "hhf.m"
  MR_Word hlds__hhf__GoalExpr0_9,
#line 232 "hhf.m"
  MR_Word * hlds__hhf__GoalExpr_10,
#line 232 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_61,
#line 232 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_62);

#line 223 "hhf.m"
static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
#line 223 "hhf.m"
  MR_Word hlds__hhf__Goal0_5,
#line 223 "hhf.m"
  MR_Word * hlds__hhf__Goal_6,
#line 223 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_12,
#line 223 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_13);

#line 215 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
#line 215 "hhf.m"
  MR_Word hlds__hhf__NonLocals_6,
#line 215 "hhf.m"
  MR_Word hlds__hhf__Goal0_7,
#line 215 "hhf.m"
  MR_Word * hlds__hhf__Goal_8,
#line 215 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_13,
#line 215 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_14);

#line 195 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
#line 195 "hhf.m"
  MR_Word hlds__hhf___HeadVars_6,
#line 195 "hhf.m"
  MR_Word hlds__hhf__Clause0_7,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__Clause_8,
#line 195 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16);

#line 395 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
#line 395 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 395 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 395 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 395 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3);

#line 159 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
#line 159 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 159 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 159 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 159 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 159 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4);

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
#line 98 "hhf.m"
  void * hlds__hhf__env_ptr_arg);

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
#line 98 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 98 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_1,
#line 98 "hhf.m"
  MR_Cont hlds__hhf__cont,
#line 98 "hhf.m"
  void * hlds__hhf__cont_env_ptr);


static /* final */ const MR_Box hlds__hhf_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hhf_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][8];

static /* final */ const MR_Box hlds__hhf_scalar_common_5[2][7];

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][11];

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][10];




static /* final */ const MR_Box hlds__hhf_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hhf_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hhf_scalar_common_5[0])),
    ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hhf__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};

static /* final */ const MR_Box hlds__hhf_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0)),
    ((MR_Box) (&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 776 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct1 hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 784 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hhf__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 793 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 801 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 809 "hlds.hhf.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hhf__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 817 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 826 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct1 hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 834 "hlds.hhf.c"
static const MR_FA_TypeInfo_Struct2 hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hhf__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 843 "hlds.hhf.c"
static const MR_PseudoTypeInfo hlds__hhf__hlds__hhf__field_types_hhf_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &hlds__hhf__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hhf__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 850 "hlds.hhf.c"
static const MR_ConstString hlds__hhf__hlds__hhf__field_names_hhf_info_0_0[3] = {
  (MR_String) "hhfi_inst_graph",
  (MR_String) "hhfi_varset",
  (MR_String) "hhfi_vartypes"
};

#line 857 "hlds.hhf.c"
static const MR_DuFunctorDesc hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0 = {
  (MR_String) "hhf_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hhf__hlds__hhf__field_types_hhf_info_0_0,
  hlds__hhf__hlds__hhf__field_names_hhf_info_0_0,
  NULL,
  NULL
};

#line 872 "hlds.hhf.c"
static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0[1] = {
  &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0
};

#line 877 "hlds.hhf.c"
static const MR_DuPtagLayout hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hhf__hlds__hhf__du_stag_ordered_hhf_info_0_0
  }
};

#line 886 "hlds.hhf.c"
static const MR_DuFunctorDescPtr hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0[1] = {
  &hlds__hhf__hlds__hhf__du_functor_desc_hhf_info_0_0
};

#line 891 "hlds.hhf.c"
static const MR_Integer hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0[1] = {
  (MR_Integer) 0
};

#line 896 "hlds.hhf.c"
const MR_TypeCtorInfo_Struct hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hhf____Unify____hhf_info_0_0_10001)),
  ((MR_Box) (hlds__hhf____Compare____hhf_info_0_0_10001)),
  (MR_String) "hlds.hhf",
  (MR_String) "hhf_info",
  {
    hlds__hhf__hlds__hhf__du_name_ordered_hhf_info_0
  },
  {
    hlds__hhf__hlds__hhf__du_ptag_ordered_hhf_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hhf__hlds__hhf__functor_number_map_hhf_info_0
};

#line 917 "hlds.hhf.c"
static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0_10001(
#line 920 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 922 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_2)
#line 924 "hlds.hhf.c"
{
#line 926 "hlds.hhf.c"
  {
#line 928 "hlds.hhf.c"
    MR_bool hlds__hhf__succeeded;

#line 931 "hlds.hhf.c"
    {
#line 933 "hlds.hhf.c"
      hlds__hhf__succeeded = hlds__hhf____Unify____hhf_info_0_0(((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2));
    }
#line 936 "hlds.hhf.c"
    return hlds__hhf__succeeded;
#line 938 "hlds.hhf.c"
  }
#line 940 "hlds.hhf.c"
}

#line 943 "hlds.hhf.c"
static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0_10001(
#line 946 "hlds.hhf.c"
  MR_Box * hlds__hhf__wrapper_arg_1,
#line 948 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 950 "hlds.hhf.c"
  MR_Box hlds__hhf__wrapper_arg_3)
#line 952 "hlds.hhf.c"
{
#line 954 "hlds.hhf.c"
  {
#line 956 "hlds.hhf.c"
    MR_Word hlds__hhf__conv0_HeadVar__1_1;

#line 959 "hlds.hhf.c"
    {
#line 961 "hlds.hhf.c"
      hlds__hhf____Compare____hhf_info_0_0(&hlds__hhf__conv0_HeadVar__1_1, ((MR_Word) hlds__hhf__wrapper_arg_2), ((MR_Word) hlds__hhf__wrapper_arg_3));
    }
#line 964 "hlds.hhf.c"
    *hlds__hhf__wrapper_arg_1 = ((MR_Box) (hlds__hhf__conv0_HeadVar__1_1));
#line 966 "hlds.hhf.c"
  }
#line 968 "hlds.hhf.c"
}

#line 195 "hhf.m"
static void MR_CALL 
hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(
#line 195 "hhf.m"
  MR_Word hlds__hhf__Clause0_7,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__Clause_8,
#line 195 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16)
#line 195 "hhf.m"
{
#line 198 "hhf.m"
  {
#line 198 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 198 "hhf.m"
    MR_Word hlds__hhf__Goal0_10;
#line 198 "hhf.m"
    MR_Word hlds__hhf__GoalInfo0_12;
#line 198 "hhf.m"
    MR_Word hlds__hhf__NonLocals_13;
#line 198 "hhf.m"
    MR_Word hlds__hhf__Goal_14;
#line 198 "hhf.m"
    MR_Word hlds__hhf__GoalExpr0_29;
#line 198 "hhf.m"
    MR_Word hlds__hhf__GoalInfo_30;
#line 198 "hhf.m"
    MR_Word hlds__hhf__GoalExpr_31;
#line 200 "hhf.m"
    MR_Word hlds__hhf__V_11_11;
#line 203 "hhf.m"
    MR_Word hlds__hhf__V_18_18;
#line 203 "hhf.m"
    MR_Word hlds__hhf__V_20_20;
#line 203 "hhf.m"
    MR_Word hlds__hhf__V_21_21;
#line 203 "hhf.m"
    MR_Word hlds__hhf__V_22_22;
#line 203 "hhf.m"
    MR_Word hlds__hhf__V_19_19;

#line 199 "hhf.m"
    {
#line 199 "hhf.m"
      hlds__hhf__Goal0_10 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hhf__Clause0_7);
    }
#line 200 "hhf.m"
    hlds__hhf__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 0)));
#line 200 "hhf.m"
    hlds__hhf__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 1)));
#line 201 "hhf.m"
    {
#line 201 "hhf.m"
      hlds__hhf__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo0_12);
    }
#line 219 "hhf.m"
    hlds__hhf__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 0)));
#line 219 "hhf.m"
    hlds__hhf__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_10, (MR_Integer) 1)));
#line 220 "hhf.m"
    {
#line 220 "hhf.m"
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_13, hlds__hhf__GoalInfo_30, hlds__hhf__GoalExpr0_29, &hlds__hhf__GoalExpr_31, hlds__hhf__STATE_VARIABLE_HI_0_15, hlds__hhf__STATE_VARIABLE_HI_16);
    }
#line 221 "hhf.m"
    {
#line 221 "hhf.m"
      hlds__hhf__Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__Goal_14, 0) = ((MR_Box) (hlds__hhf__GoalExpr_31));
#line 221 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__Goal_14, 1) = ((MR_Box) (hlds__hhf__GoalInfo_30));
#line 221 "hhf.m"
    }
#line 203 "hhf.m"
    hlds__hhf__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 0)));
#line 203 "hhf.m"
    hlds__hhf__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 1)));
#line 203 "hhf.m"
    hlds__hhf__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 2)));
#line 203 "hhf.m"
    hlds__hhf__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 3)));
#line 203 "hhf.m"
    hlds__hhf__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Clause0_7, (MR_Integer) 4)));
#line 203 "hhf.m"
    {
#line 203 "hhf.m"
      MR_Word base;
#line 203 "hhf.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 203 "hhf.m"
      *hlds__hhf__Clause_8 = base;
#line 203 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__V_18_18));
#line 203 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__Goal_14));
#line 203 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_20_20));
#line 203 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hhf__V_21_21));
#line 203 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hhf__V_22_22));
#line 203 "hhf.m"
    }
#line 198 "hhf.m"
  }
#line 195 "hhf.m"
}

#line 100 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_2(
#line 100 "hhf.m"
  void * hlds__hhf__env_ptr_arg)
#line 100 "hhf.m"
{
#line 100 "hhf.m"
  {
#line 100 "hhf.m"
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s *) hlds__hhf__env_ptr_arg;

#line 100 "hhf.m"
    (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__V0_22 = ((MR_Word) (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__conv0_V0_22);
#line 100 "hhf.m"
    {
#line 100 "hhf.m"
      hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_1(hlds__hhf__env_ptr);
#line 100 "hhf.m"
      return;
    }
#line 100 "hhf.m"
  }
#line 100 "hhf.m"
}

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_1(
#line 98 "hhf.m"
  void * hlds__hhf__env_ptr_arg)
#line 98 "hhf.m"
{
#line 98 "hhf.m"
  {
#line 98 "hhf.m"
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s *) hlds__hhf__env_ptr_arg;

#line 101 "hhf.m"
    {
#line 101 "hhf.m"
      hlds__inst_graph__reachable_3_p_0((hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__ImplementationInstGraph_19, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__V0_22, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__HeadVar__3_40, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont, (hlds__hhf__env_ptr)->hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont_env_ptr);
#line 101 "hhf.m"
      return;
    }
#line 98 "hhf.m"
  }
#line 98 "hhf.m"
}

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0(
#line 98 "hhf.m"
  MR_Word hlds__hhf__ImplementationInstGraph_19,
#line 98 "hhf.m"
  MR_Word hlds__hhf__HeadVars_45,
#line 98 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__3_40,
#line 98 "hhf.m"
  MR_Cont hlds__hhf__cont,
#line 98 "hhf.m"
  void * hlds__hhf__cont_env_ptr)
#line 98 "hhf.m"
{
#line 98 "hhf.m"
  {
#line 98 "hhf.m"
    struct hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0_s hlds__hhf__env;

#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__ImplementationInstGraph_19 = hlds__hhf__ImplementationInstGraph_19;
#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__HeadVar__3_40 = hlds__hhf__HeadVar__3_40;
#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont = hlds__hhf__cont;
#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__cont_env_ptr = hlds__hhf__cont_env_ptr;
#line 98 "hhf.m"
    {
#line 98 "hhf.m"
      MR_bool hlds__hhf__succeeded;

#line 100 "hhf.m"
      {
#line 100 "hhf.m"
        mercury__list__member_2_p_1((MR_Word) &hlds__hhf_scalar_common_1[0], &(hlds__hhf__env).hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_env_0__conv0_V0_22, hlds__hhf__HeadVars_45, hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0_2, &hlds__hhf__env);
      }
#line 98 "hhf.m"
    }
#line 98 "hhf.m"
  }
#line 98 "hhf.m"
}

#line 188 "hhf.m"
static void MR_CALL 
hlds__hhf____Compare____hhf_info_0_0(
#line 188 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__1_1,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__3_3)
#line 188 "hhf.m"
{
#line 188 "hhf.m"
  {
#line 188 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 188 "hhf.m"
    MR_Integer hlds__hhf__CastX_12 = (MR_Integer) hlds__hhf__HeadVar__2_2;
#line 188 "hhf.m"
    MR_Integer hlds__hhf__CastY_13 = (MR_Integer) hlds__hhf__HeadVar__3_3;

#line 188 "hhf.m"
    hlds__hhf__succeeded = (hlds__hhf__CastX_12 == hlds__hhf__CastY_13);
#line 188 "hhf.m"
    if (hlds__hhf__succeeded)
#line 1202 "hlds.hhf.c"
      *hlds__hhf__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "hhf.m"
    else
#line 188 "hhf.m"
      {
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 0)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 1)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__3_3, (MR_Integer) 2)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_10_10;

#line 188 "hhf.m"
        {
#line 188 "hhf.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hhf_scalar_common_2[0], &hlds__hhf__V_10_10, ((MR_Box) (hlds__hhf__V_4_4)), ((MR_Box) (hlds__hhf__V_7_7)));
        }
#line 1228 "hlds.hhf.c"
        hlds__hhf__succeeded = (hlds__hhf__V_10_10 == (MR_Integer) 0);
#line 188 "hhf.m"
        hlds__hhf__succeeded = !(hlds__hhf__succeeded);
#line 188 "hhf.m"
        if (hlds__hhf__succeeded)
#line 188 "hhf.m"
          *hlds__hhf__HeadVar__1_1 = hlds__hhf__V_10_10;
#line 188 "hhf.m"
        else
#line 188 "hhf.m"
          {
#line 188 "hhf.m"
            MR_Word hlds__hhf__V_11_11;

#line 188 "hhf.m"
            {
#line 188 "hhf.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hhf_scalar_common_1[2], &hlds__hhf__V_11_11, ((MR_Box) (hlds__hhf__V_5_5)), ((MR_Box) (hlds__hhf__V_8_8)));
            }
#line 1248 "hlds.hhf.c"
            hlds__hhf__succeeded = (hlds__hhf__V_11_11 == (MR_Integer) 0);
#line 188 "hhf.m"
            hlds__hhf__succeeded = !(hlds__hhf__succeeded);
#line 188 "hhf.m"
            if (hlds__hhf__succeeded)
#line 188 "hhf.m"
              *hlds__hhf__HeadVar__1_1 = hlds__hhf__V_11_11;
#line 188 "hhf.m"
            else
#line 188 "hhf.m"
              {
#line 188 "hhf.m"
                {
#line 188 "hhf.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, hlds__hhf__HeadVar__1_1, ((MR_Box) (hlds__hhf__V_6_6)), ((MR_Box) (hlds__hhf__V_9_9)));
#line 188 "hhf.m"
                  return;
                }
#line 188 "hhf.m"
              }
#line 188 "hhf.m"
          }
#line 188 "hhf.m"
      }
#line 188 "hhf.m"
  }
#line 188 "hhf.m"
}

#line 188 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf____Unify____hhf_info_0_0(
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 188 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2)
#line 188 "hhf.m"
{
#line 188 "hhf.m"
  {
#line 188 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 188 "hhf.m"
    MR_Integer hlds__hhf__CastX_9 = (MR_Integer) hlds__hhf__HeadVar__1_1;
#line 188 "hhf.m"
    MR_Integer hlds__hhf__CastY_10 = (MR_Integer) hlds__hhf__HeadVar__2_2;

#line 188 "hhf.m"
    hlds__hhf__succeeded = (hlds__hhf__CastX_9 == hlds__hhf__CastY_10);
#line 188 "hhf.m"
    if (hlds__hhf__succeeded)
#line 188 "hhf.m"
      hlds__hhf__succeeded = MR_TRUE;
#line 188 "hhf.m"
    else
#line 188 "hhf.m"
      {
#line 188 "hhf.m"
        MR_Word hlds__hhf__TypeInfo_12_12;
#line 188 "hhf.m"
        MR_Word hlds__hhf__TypeCtorInfo_13_13;
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "hhf.m"
        MR_Word hlds__hhf__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));

#line 1323 "hlds.hhf.c"
        {
#line 1325 "hlds.hhf.c"
          hlds__hhf__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hhf_scalar_common_2[0], ((MR_Box) (hlds__hhf__V_3_3)), ((MR_Box) (hlds__hhf__V_6_6)));
        }
#line 188 "hhf.m"
        if (hlds__hhf__succeeded)
#line 188 "hhf.m"
          {
#line 1332 "hlds.hhf.c"
            hlds__hhf__TypeInfo_12_12 = (MR_Word) &hlds__hhf_scalar_common_1[2];
#line 1334 "hlds.hhf.c"
            {
#line 1336 "hlds.hhf.c"
              hlds__hhf__succeeded = mercury__builtin__unify_2_p_0(hlds__hhf__TypeInfo_12_12, ((MR_Box) (hlds__hhf__V_4_4)), ((MR_Box) (hlds__hhf__V_7_7)));
            }
#line 188 "hhf.m"
            if (hlds__hhf__succeeded)
#line 188 "hhf.m"
              {
#line 1343 "hlds.hhf.c"
                hlds__hhf__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1345 "hlds.hhf.c"
                {
#line 1347 "hlds.hhf.c"
                  return hlds__hhf__succeeded = mercury__builtin__unify_2_p_0(hlds__hhf__TypeCtorInfo_13_13, ((MR_Box) (hlds__hhf__V_5_5)), ((MR_Box) (hlds__hhf__V_8_8)));
                }
#line 188 "hhf.m"
              }
#line 188 "hhf.m"
          }
#line 188 "hhf.m"
      }
#line 188 "hhf.m"
    return hlds__hhf__succeeded;
#line 188 "hhf.m"
  }
#line 188 "hhf.m"
}

#line 505 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__same_type_list_2_p_0(
#line 505 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 505 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2)
#line 505 "hhf.m"
{
#line 507 "hhf.m"
  while (MR_TRUE)
#line 507 "hhf.m"
    {
#line 507 "hhf.m"
      /* tailcall optimized into a loop */
#line 507 "hhf.m"
      {
#line 507 "hhf.m"
        MR_bool hlds__hhf__succeeded;

#line 507 "hhf.m"
        if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "hhf.m"
          hlds__hhf__succeeded = (hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "hhf.m"
        else
#line 508 "hhf.m"
          {
#line 508 "hhf.m"
            MR_Word hlds__hhf__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
#line 508 "hhf.m"
            MR_Word hlds__hhf__As_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 508 "hhf.m"
            MR_Word hlds__hhf__B_5;
#line 508 "hhf.m"
            MR_Word hlds__hhf__Bs_6;
#line 508 "hhf.m"
            MR_Word hlds__hhf__A_9;
#line 508 "hhf.m"
            MR_Word hlds__hhf__B_10;

#line 508 "hhf.m"
            hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 508 "hhf.m"
            if (hlds__hhf__succeeded)
#line 508 "hhf.m"
              {
#line 508 "hhf.m"
                hlds__hhf__B_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 508 "hhf.m"
                hlds__hhf__Bs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 483 "hhf.m"
                {
#line 483 "hhf.m"
                  hlds__hhf__A_9 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__A_3);
                }
#line 484 "hhf.m"
                {
#line 484 "hhf.m"
                  hlds__hhf__B_10 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__B_5);
                }
#line 485 "hhf.m"
                {
#line 485 "hhf.m"
                  hlds__hhf__succeeded = hlds__hhf__same_type_2_2_p_0(hlds__hhf__A_9, hlds__hhf__B_10);
                }
#line 508 "hhf.m"
                if (hlds__hhf__succeeded)
#line 510 "hhf.m"
                  {
#line 510 "hhf.m"
                    /* direct tailcall eliminated */
#line 510 "hhf.m"
                    {
#line 510 "hhf.m"
                      MR_Word hlds__hhf__HeadVar__1__tmp_copy_1 = hlds__hhf__As_4;
#line 510 "hhf.m"
                      MR_Word hlds__hhf__HeadVar__2__tmp_copy_2 = hlds__hhf__Bs_6;

#line 510 "hhf.m"
                      hlds__hhf__HeadVar__2_2 = hlds__hhf__HeadVar__2__tmp_copy_2;
#line 510 "hhf.m"
                      hlds__hhf__HeadVar__1_1 = hlds__hhf__HeadVar__1__tmp_copy_1;
#line 510 "hhf.m"
                    }
#line 510 "hhf.m"
                    continue;
#line 510 "hhf.m"
                  }
#line 508 "hhf.m"
              }
#line 508 "hhf.m"
          }
#line 507 "hhf.m"
        return hlds__hhf__succeeded;
#line 507 "hhf.m"
      }
#line 507 "hhf.m"
      break;
#line 507 "hhf.m"
    }
#line 505 "hhf.m"
}

#line 487 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__same_type_2_2_p_0(
#line 487 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 487 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2)
#line 487 "hhf.m"
{
#line 489 "hhf.m"
  while (MR_TRUE)
#line 489 "hhf.m"
    {
#line 489 "hhf.m"
      /* tailcall optimized into a loop */
#line 489 "hhf.m"
      {
#line 489 "hhf.m"
        MR_bool hlds__hhf__succeeded;

#line 489 "hhf.m"
        if (((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 492 "hhf.m"
          {
#line 492 "hhf.m"
            MR_Word hlds__hhf__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "hhf.m"
            MR_Word hlds__hhf__V_38_38;

#line 492 "hhf.m"
            hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 492 "hhf.m"
            if (hlds__hhf__succeeded)
#line 492 "hhf.m"
              {
#line 492 "hhf.m"
                hlds__hhf__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 492 "hhf.m"
                hlds__hhf__succeeded = (hlds__hhf__BuiltinType_12 == hlds__hhf__V_38_38);
#line 492 "hhf.m"
              }
#line 492 "hhf.m"
          }
#line 489 "hhf.m"
        else
#line 489 "hhf.m"
          if (((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 490 "hhf.m"
            {
#line 490 "hhf.m"
              MR_Word hlds__hhf__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
#line 490 "hhf.m"
              MR_Word hlds__hhf__ArgsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "hhf.m"
              MR_Word hlds__hhf__ArgsB_10;
#line 490 "hhf.m"
              MR_Word hlds__hhf__V_37_37;
#line 490 "hhf.m"
              MR_Word hlds__hhf__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
#line 490 "hhf.m"
              MR_Word hlds__hhf__V_11_11;

#line 490 "hhf.m"
              hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 490 "hhf.m"
              if (hlds__hhf__succeeded)
#line 490 "hhf.m"
                {
#line 490 "hhf.m"
                  hlds__hhf__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 490 "hhf.m"
                  hlds__hhf__ArgsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 490 "hhf.m"
                  hlds__hhf__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
#line 490 "hhf.m"
                  {
#line 490 "hhf.m"
                    hlds__hhf__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hhf__Name_7, hlds__hhf__V_37_37);
                  }
#line 490 "hhf.m"
                  if (hlds__hhf__succeeded)
#line 491 "hhf.m"
                    {
#line 491 "hhf.m"
                      return hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_8, hlds__hhf__ArgsB_10);
                    }
#line 490 "hhf.m"
                }
#line 490 "hhf.m"
            }
#line 489 "hhf.m"
          else
#line 489 "hhf.m"
            if (((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 489 "hhf.m"
              {
#line 489 "hhf.m"
                MR_Word hlds__hhf__V_5_5;
#line 489 "hhf.m"
                MR_Word hlds__hhf__V_6_6;

#line 489 "hhf.m"
                hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 489 "hhf.m"
                if (hlds__hhf__succeeded)
#line 489 "hhf.m"
                  {
#line 489 "hhf.m"
                    hlds__hhf__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 489 "hhf.m"
                    hlds__hhf__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 489 "hhf.m"
                  }
#line 489 "hhf.m"
              }
#line 489 "hhf.m"
            else
#line 489 "hhf.m"
              if (((((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 502 "hhf.m"
                {
#line 502 "hhf.m"
                  MR_Word hlds__hhf__ArgsA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
#line 502 "hhf.m"
                  MR_Word hlds__hhf__ArgsB_35;
#line 502 "hhf.m"
                  MR_Word hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 502 "hhf.m"
                  MR_Word hlds__hhf__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 3)));
#line 502 "hhf.m"
                  MR_Word hlds__hhf__V_34_34;
#line 502 "hhf.m"
                  MR_Word hlds__hhf__V_36_36;

#line 502 "hhf.m"
                  hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 502 "hhf.m"
                  if (hlds__hhf__succeeded)
#line 502 "hhf.m"
                    {
#line 502 "hhf.m"
                      hlds__hhf__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 502 "hhf.m"
                      hlds__hhf__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
#line 502 "hhf.m"
                      hlds__hhf__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 3)));
#line 503 "hhf.m"
                      {
#line 503 "hhf.m"
                        return hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_32, hlds__hhf__ArgsB_35);
                      }
#line 502 "hhf.m"
                    }
#line 502 "hhf.m"
                }
#line 489 "hhf.m"
              else
#line 489 "hhf.m"
                if (((((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 489 "hhf.m"
                  {
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 3)));
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_48_48;
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_49_49;
#line 489 "hhf.m"
                    MR_Word hlds__hhf__V_50_50;

#line 494 "hhf.m"
                    hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 494 "hhf.m"
                    if (hlds__hhf__succeeded)
#line 494 "hhf.m"
                      {
#line 494 "hhf.m"
                        hlds__hhf__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 494 "hhf.m"
                        hlds__hhf__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
#line 494 "hhf.m"
                        hlds__hhf__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 3)));
#line 489 "hhf.m"
                        if ((hlds__hhf__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "hhf.m"
                          {
#line 494 "hhf.m"
                            hlds__hhf__succeeded = (hlds__hhf__V_44_44 == hlds__hhf__V_48_48);
#line 494 "hhf.m"
                            if (hlds__hhf__succeeded)
#line 494 "hhf.m"
                              {
#line 494 "hhf.m"
                                hlds__hhf__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 494 "hhf.m"
                                if (hlds__hhf__succeeded)
#line 494 "hhf.m"
                                  {
#line 494 "hhf.m"
                                    hlds__hhf__succeeded = (hlds__hhf__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "hhf.m"
                                    if (hlds__hhf__succeeded)
#line 495 "hhf.m"
                                      {
#line 495 "hhf.m"
                                        return hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__V_46_46, hlds__hhf__V_50_50);
                                      }
#line 494 "hhf.m"
                                  }
#line 494 "hhf.m"
                              }
#line 494 "hhf.m"
                          }
#line 489 "hhf.m"
                        else
#line 497 "hhf.m"
                          {
#line 497 "hhf.m"
                            MR_Word hlds__hhf__RetA_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, (MR_Integer) 0)));
#line 497 "hhf.m"
                            MR_Word hlds__hhf__RetB_24;
#line 497 "hhf.m"
                            MR_Word hlds__hhf__A_54;
#line 497 "hhf.m"
                            MR_Word hlds__hhf__B_55;

#line 497 "hhf.m"
                            hlds__hhf__succeeded = (hlds__hhf__V_44_44 == hlds__hhf__V_48_48);
#line 497 "hhf.m"
                            if (hlds__hhf__succeeded)
#line 497 "hhf.m"
                              {
#line 497 "hhf.m"
                                hlds__hhf__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 497 "hhf.m"
                                if (hlds__hhf__succeeded)
#line 497 "hhf.m"
                                  {
#line 497 "hhf.m"
                                    hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 497 "hhf.m"
                                    if (hlds__hhf__succeeded)
#line 497 "hhf.m"
                                      {
#line 497 "hhf.m"
                                        hlds__hhf__RetB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_49_49, (MR_Integer) 0)));
#line 498 "hhf.m"
                                        {
#line 498 "hhf.m"
                                          hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__V_46_46, hlds__hhf__V_50_50);
                                        }
#line 497 "hhf.m"
                                        if (hlds__hhf__succeeded)
#line 497 "hhf.m"
                                          {
#line 483 "hhf.m"
                                            {
#line 483 "hhf.m"
                                              hlds__hhf__A_54 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__RetA_20);
                                            }
#line 484 "hhf.m"
                                            {
#line 484 "hhf.m"
                                              hlds__hhf__B_55 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__RetB_24);
                                            }
#line 485 "hhf.m"
                                            /* direct tailcall eliminated */
#line 485 "hhf.m"
                                            {
#line 485 "hhf.m"
                                              MR_Word hlds__hhf__HeadVar__1__tmp_copy_1 = hlds__hhf__A_54;
#line 485 "hhf.m"
                                              MR_Word hlds__hhf__HeadVar__2__tmp_copy_2 = hlds__hhf__B_55;

#line 485 "hhf.m"
                                              hlds__hhf__HeadVar__2_2 = hlds__hhf__HeadVar__2__tmp_copy_2;
#line 485 "hhf.m"
                                              hlds__hhf__HeadVar__1_1 = hlds__hhf__HeadVar__1__tmp_copy_1;
#line 485 "hhf.m"
                                            }
#line 485 "hhf.m"
                                            continue;
#line 497 "hhf.m"
                                          }
#line 497 "hhf.m"
                                      }
#line 497 "hhf.m"
                                  }
#line 497 "hhf.m"
                              }
#line 497 "hhf.m"
                          }
#line 494 "hhf.m"
                      }
#line 489 "hhf.m"
                  }
#line 489 "hhf.m"
                else
#line 489 "hhf.m"
                  if (((((MR_tag((MR_Word) hlds__hhf__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 500 "hhf.m"
                    {
#line 500 "hhf.m"
                      MR_Word hlds__hhf__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "hhf.m"
                      MR_Word hlds__hhf__ArgsB_29;
#line 500 "hhf.m"
                      MR_Word hlds__hhf__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__1_1, (MR_Integer) 2)));
#line 500 "hhf.m"
                      MR_Word hlds__hhf__V_30_30;

#line 500 "hhf.m"
                      hlds__hhf__succeeded = ((((MR_tag((MR_Word) hlds__hhf__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 500 "hhf.m"
                      if (hlds__hhf__succeeded)
#line 500 "hhf.m"
                        {
#line 500 "hhf.m"
                          hlds__hhf__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 500 "hhf.m"
                          hlds__hhf__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__HeadVar__2_2, (MR_Integer) 2)));
#line 501 "hhf.m"
                          {
#line 501 "hhf.m"
                            return hlds__hhf__succeeded = hlds__hhf__same_type_list_2_p_0(hlds__hhf__ArgsA_27, hlds__hhf__ArgsB_29);
                          }
#line 500 "hhf.m"
                        }
#line 500 "hhf.m"
                    }
#line 489 "hhf.m"
                  else
#line 489 "hhf.m"
                    hlds__hhf__succeeded = MR_FALSE;
#line 489 "hhf.m"
        return hlds__hhf__succeeded;
#line 489 "hhf.m"
      }
#line 489 "hhf.m"
      break;
#line 489 "hhf.m"
    }
#line 487 "hhf.m"
}

#line 465 "hhf.m"
static MR_bool MR_CALL 
hlds__hhf__find_var_with_type_6_p_0(
#line 465 "hhf.m"
  MR_Word hlds__hhf__Var0_7,
#line 465 "hhf.m"
  MR_Word hlds__hhf__Type_8,
#line 465 "hhf.m"
  MR_Word hlds__hhf__InstGraph_9,
#line 465 "hhf.m"
  MR_Word hlds__hhf__VarTypes_10,
#line 465 "hhf.m"
  MR_Word hlds__hhf__BaseVars_11,
#line 465 "hhf.m"
  MR_Word * hlds__hhf__Var_12)
#line 465 "hhf.m"
{
#line 474 "hhf.m"
  while (MR_TRUE)
#line 474 "hhf.m"
    {
#line 474 "hhf.m"
      /* tailcall optimized into a loop */
#line 474 "hhf.m"
      {
#line 474 "hhf.m"
        MR_bool hlds__hhf__succeeded;
#line 470 "hhf.m"
        MR_Word hlds__hhf__Type0_13;
#line 470 "hhf.m"
        MR_Word hlds__hhf__A_22;
#line 470 "hhf.m"
        MR_Word hlds__hhf__B_23;

#line 470 "hhf.m"
        {
#line 470 "hhf.m"
          hlds__hhf__succeeded = parse_tree__prog_data__search_var_type_3_p_0(hlds__hhf__VarTypes_10, hlds__hhf__Var0_7, &hlds__hhf__Type0_13);
        }
#line 470 "hhf.m"
        if (hlds__hhf__succeeded)
#line 470 "hhf.m"
          {
#line 483 "hhf.m"
            {
#line 483 "hhf.m"
              hlds__hhf__A_22 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__Type0_13);
            }
#line 484 "hhf.m"
            {
#line 484 "hhf.m"
              hlds__hhf__B_23 = parse_tree__prog_type__strip_kind_annotation_1_f_0(hlds__hhf__Type_8);
            }
#line 485 "hhf.m"
            {
#line 485 "hhf.m"
              hlds__hhf__succeeded = hlds__hhf__same_type_2_2_p_0(hlds__hhf__A_22, hlds__hhf__B_23);
            }
#line 470 "hhf.m"
          }
#line 474 "hhf.m"
        if (hlds__hhf__succeeded)
#line 473 "hhf.m"
          {
#line 473 "hhf.m"
            *hlds__hhf__Var_12 = hlds__hhf__Var0_7;
#line 473 "hhf.m"
            hlds__hhf__succeeded = MR_TRUE;
#line 473 "hhf.m"
          }
#line 474 "hhf.m"
        else
#line 475 "hhf.m"
          {
#line 475 "hhf.m"
            MR_Word hlds__hhf__TypeInfo_18_18 = (MR_Word) &hlds__hhf_scalar_common_1[0];
#line 475 "hhf.m"
            MR_Word hlds__hhf__Var1_15;
#line 475 "hhf.m"
            MR_Word hlds__hhf__V_16_16;
#line 475 "hhf.m"
            MR_Word hlds__hhf__V_17_17;
#line 475 "hhf.m"
            MR_Box hlds__hhf__conv0_V_16_16;
#line 475 "hhf.m"
            MR_Word hlds__hhf__V_14_14;

#line 475 "hhf.m"
            {
#line 475 "hhf.m"
              mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_18_18, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph_9, ((MR_Box) (hlds__hhf__Var0_7)), &hlds__hhf__conv0_V_16_16);
            }
#line 475 "hhf.m"
            hlds__hhf__V_16_16 = ((MR_Word) hlds__hhf__conv0_V_16_16);
#line 475 "hhf.m"
            hlds__hhf__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_16_16, (MR_Integer) 0)));
#line 475 "hhf.m"
            hlds__hhf__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_16_16, (MR_Integer) 1)));
#line 475 "hhf.m"
            hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 475 "hhf.m"
            if (hlds__hhf__succeeded)
#line 475 "hhf.m"
              {
#line 475 "hhf.m"
                hlds__hhf__Var1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_17_17, (MR_Integer) 0)));
#line 476 "hhf.m"
                {
#line 476 "hhf.m"
                  hlds__hhf__succeeded = mercury__list__member_2_p_0(hlds__hhf__TypeInfo_18_18, ((MR_Box) (hlds__hhf__Var1_15)), hlds__hhf__BaseVars_11);
                }
#line 476 "hhf.m"
                hlds__hhf__succeeded = !(hlds__hhf__succeeded);
#line 475 "hhf.m"
                if (hlds__hhf__succeeded)
#line 477 "hhf.m"
                  {
#line 477 "hhf.m"
                    /* direct tailcall eliminated */
#line 477 "hhf.m"
                    {
#line 477 "hhf.m"
                      MR_Word hlds__hhf__Var0__tmp_copy_7 = hlds__hhf__Var1_15;

#line 477 "hhf.m"
                      hlds__hhf__Var0_7 = hlds__hhf__Var0__tmp_copy_7;
#line 477 "hhf.m"
                    }
#line 477 "hhf.m"
                    continue;
#line 477 "hhf.m"
                  }
#line 475 "hhf.m"
              }
#line 475 "hhf.m"
          }
#line 474 "hhf.m"
        return hlds__hhf__succeeded;
#line 474 "hhf.m"
      }
#line 474 "hhf.m"
      break;
#line 474 "hhf.m"
    }
#line 465 "hhf.m"
}

#line 443 "hhf.m"
static void MR_CALL 
hlds__hhf__add_cons_id_7_p_0(
#line 443 "hhf.m"
  MR_Word hlds__hhf__Var_8,
#line 443 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_9,
#line 443 "hhf.m"
  MR_Word hlds__hhf__BaseVars_10,
#line 443 "hhf.m"
  MR_Word hlds__hhf__Arg_11,
#line 443 "hhf.m"
  MR_Word * hlds__hhf__NewVar_12,
#line 443 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_23,
#line 443 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_24)
#line 443 "hhf.m"
{
#line 447 "hhf.m"
  {
#line 447 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 447 "hhf.m"
    MR_Word hlds__hhf__ArgType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 1)));
#line 447 "hhf.m"
    MR_Word hlds__hhf__InstGraph0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 0)));
#line 447 "hhf.m"
    MR_Word hlds__hhf__VarSet0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 1)));
#line 447 "hhf.m"
    MR_Word hlds__hhf__VarTypes0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_23, (MR_Integer) 2)));
#line 448 "hhf.m"
    MR_Word hlds__hhf__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 0)));
#line 448 "hhf.m"
    MR_Word hlds__hhf__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 2)));
#line 448 "hhf.m"
    MR_Word hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Arg_11, (MR_Integer) 3)));
#line 455 "hhf.m"
    MR_Word hlds__hhf__NewVar0_18;

#line 451 "hhf.m"
    {
#line 451 "hhf.m"
      hlds__hhf__succeeded = hlds__hhf__find_var_with_type_6_p_0(hlds__hhf__Var_8, hlds__hhf__ArgType_14, hlds__hhf__InstGraph0_15, hlds__hhf__VarTypes0_17, hlds__hhf__BaseVars_10, &hlds__hhf__NewVar0_18);
    }
#line 455 "hhf.m"
    if (hlds__hhf__succeeded)
#line 454 "hhf.m"
      {
#line 454 "hhf.m"
        *hlds__hhf__NewVar_12 = hlds__hhf__NewVar0_18;
#line 454 "hhf.m"
        *hlds__hhf__STATE_VARIABLE_HI_24 = hlds__hhf__STATE_VARIABLE_HI_0_23;
#line 454 "hhf.m"
      }
#line 455 "hhf.m"
    else
#line 456 "hhf.m"
      {
#line 456 "hhf.m"
        MR_Word hlds__hhf__VarSet_19;
#line 456 "hhf.m"
        MR_Word hlds__hhf__VarTypes_20;
#line 456 "hhf.m"
        MR_Word hlds__hhf__Empty_21;
#line 456 "hhf.m"
        MR_Word hlds__hhf__InstGraph_22;
#line 456 "hhf.m"
        MR_Word hlds__hhf__V_25_25;
#line 456 "hhf.m"
        MR_Word hlds__hhf__V_26_26;
#line 456 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_HI_27_27;

#line 456 "hhf.m"
        {
#line 456 "hhf.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__NewVar_12, hlds__hhf__VarSet0_16, &hlds__hhf__VarSet_19);
        }
#line 457 "hhf.m"
        {
#line 457 "hhf.m"
          parse_tree__prog_data__add_var_type_4_p_0(*hlds__hhf__NewVar_12, hlds__hhf__ArgType_14, hlds__hhf__VarTypes0_17, &hlds__hhf__VarTypes_20);
        }
#line 458 "hhf.m"
        {
#line 458 "hhf.m"
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], &hlds__hhf__Empty_21);
        }
#line 459 "hhf.m"
        {
#line 459 "hhf.m"
          hlds__hhf__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__V_26_26, 0) = ((MR_Box) (hlds__hhf__Var_8));
#line 459 "hhf.m"
        }
#line 459 "hhf.m"
        {
#line 459 "hhf.m"
          hlds__hhf__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_25_25, 0) = ((MR_Box) (hlds__hhf__Empty_21));
#line 459 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_25_25, 1) = ((MR_Box) (hlds__hhf__V_26_26));
#line 459 "hhf.m"
        }
#line 459 "hhf.m"
        {
#line 459 "hhf.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (*hlds__hhf__NewVar_12)), ((MR_Box) (hlds__hhf__V_25_25)), hlds__hhf__InstGraph0_15, &hlds__hhf__InstGraph_22);
        }
#line 461 "hhf.m"
        {
#line 461 "hhf.m"
          hlds__hhf__STATE_VARIABLE_HI_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 461 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 0) = ((MR_Box) (hlds__hhf__InstGraph_22));
#line 461 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 1) = ((MR_Box) (hlds__hhf__VarSet_19));
#line 461 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_27_27, 2) = ((MR_Box) (hlds__hhf__VarTypes_20));
#line 461 "hhf.m"
        }
#line 462 "hhf.m"
        {
#line 462 "hhf.m"
          hlds__hhf__complete_inst_graph_node_5_p_0(hlds__hhf__ModuleInfo_9, hlds__hhf__BaseVars_10, *hlds__hhf__NewVar_12, hlds__hhf__STATE_VARIABLE_HI_27_27, hlds__hhf__STATE_VARIABLE_HI_24);
#line 462 "hhf.m"
          return;
        }
#line 456 "hhf.m"
      }
#line 447 "hhf.m"
  }
#line 443 "hhf.m"
}

#line 435 "hhf.m"
static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0_1(
#line 435 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 435 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 435 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 435 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 435 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4)
#line 435 "hhf.m"
{
#line 435 "hhf.m"
  {
#line 435 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 435 "hhf.m"
    MR_Word hlds__hhf__conv2_NewVar_12;
#line 435 "hhf.m"
    MR_Word hlds__hhf__conv1_STATE_VARIABLE_HI_24;

#line 435 "hhf.m"
    {
#line 435 "hhf.m"
      hlds__hhf__add_cons_id_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 5))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv2_NewVar_12, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv1_STATE_VARIABLE_HI_24);
    }
#line 435 "hhf.m"
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv2_NewVar_12));
#line 435 "hhf.m"
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv1_STATE_VARIABLE_HI_24));
#line 435 "hhf.m"
  }
#line 435 "hhf.m"
}

#line 422 "hhf.m"
static void MR_CALL 
hlds__hhf__maybe_add_cons_id_8_p_0(
#line 422 "hhf.m"
  MR_Word hlds__hhf__Var_9,
#line 422 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_10,
#line 422 "hhf.m"
  MR_Word hlds__hhf__BaseVars_11,
#line 422 "hhf.m"
  MR_Word hlds__hhf__TypeCtor_12,
#line 422 "hhf.m"
  MR_Word hlds__hhf__TypeCtorModuleName_13,
#line 422 "hhf.m"
  MR_Word hlds__hhf__Ctor_14,
#line 422 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_27,
#line 422 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_28)
#line 422 "hhf.m"
{
#line 427 "hhf.m"
  {
#line 427 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 427 "hhf.m"
    MR_Word hlds__hhf__TypeCtorInfo_46_46;
#line 427 "hhf.m"
    MR_Word hlds__hhf__TypeInfo_47_47;
#line 427 "hhf.m"
    MR_Word hlds__hhf__TypeCtorInfo_48_48;
#line 427 "hhf.m"
    MR_Word hlds__hhf__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 2)));
#line 427 "hhf.m"
    MR_Word hlds__hhf__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 3)));
#line 427 "hhf.m"
    MR_Word hlds__hhf__SymName_21;
#line 427 "hhf.m"
    MR_Word hlds__hhf__ConsId_22;
#line 427 "hhf.m"
    MR_Word hlds__hhf__Functors0_23;
#line 427 "hhf.m"
    MR_Word hlds__hhf__MaybeParent_24;
#line 427 "hhf.m"
    MR_String hlds__hhf__V_29_29;
#line 427 "hhf.m"
    MR_Integer hlds__hhf__V_30_30;
#line 427 "hhf.m"
    MR_Word hlds__hhf__V_31_31;
#line 427 "hhf.m"
    MR_Word hlds__hhf__V_32_32;
#line 428 "hhf.m"
    MR_Word hlds__hhf__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 0)));
#line 428 "hhf.m"
    MR_Word hlds__hhf__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 1)));
#line 428 "hhf.m"
    MR_Word hlds__hhf__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Ctor_14, (MR_Integer) 4)));
#line 431 "hhf.m"
    MR_Word hlds__hhf__V_39_39;
#line 431 "hhf.m"
    MR_Word hlds__hhf__V_40_40;
#line 431 "hhf.m"
    MR_Box hlds__hhf__conv0_V_32_32;

#line 429 "hhf.m"
    {
#line 429 "hhf.m"
      hlds__hhf__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hhf__Name_18);
    }
#line 429 "hhf.m"
    {
#line 429 "hhf.m"
      hlds__hhf__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "hhf.m"
      MR_hl_field(MR_mktag(1), hlds__hhf__SymName_21, 0) = ((MR_Box) (hlds__hhf__TypeCtorModuleName_13));
#line 429 "hhf.m"
      MR_hl_field(MR_mktag(1), hlds__hhf__SymName_21, 1) = ((MR_Box) (hlds__hhf__V_29_29));
#line 429 "hhf.m"
    }
#line 2218 "hlds.hhf.c"
    hlds__hhf__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 430 "hhf.m"
    {
#line 430 "hhf.m"
      hlds__hhf__V_30_30 = mercury__list__length_1_f_0(hlds__hhf__TypeCtorInfo_46_46, hlds__hhf__Args_19);
    }
#line 430 "hhf.m"
    {
#line 430 "hhf.m"
      hlds__hhf__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 430 "hhf.m"
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "hhf.m"
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_22, 1) = ((MR_Box) (hlds__hhf__SymName_21));
#line 430 "hhf.m"
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_22, 2) = ((MR_Box) (hlds__hhf__V_30_30));
#line 430 "hhf.m"
      MR_hl_field(MR_mktag(3), hlds__hhf__ConsId_22, 3) = ((MR_Box) (hlds__hhf__TypeCtor_12));
#line 430 "hhf.m"
    }
#line 431 "hhf.m"
    hlds__hhf__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_27, (MR_Integer) 0)));
#line 431 "hhf.m"
    hlds__hhf__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_27, (MR_Integer) 1)));
#line 431 "hhf.m"
    hlds__hhf__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_27, (MR_Integer) 2)));
#line 2245 "hlds.hhf.c"
    hlds__hhf__TypeInfo_47_47 = (MR_Word) &hlds__hhf_scalar_common_1[0];
#line 2247 "hlds.hhf.c"
    hlds__hhf__TypeCtorInfo_48_48 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 431 "hhf.m"
    {
#line 431 "hhf.m"
      mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_47_47, hlds__hhf__TypeCtorInfo_48_48, hlds__hhf__V_31_31, ((MR_Box) (hlds__hhf__Var_9)), &hlds__hhf__conv0_V_32_32);
    }
#line 431 "hhf.m"
    hlds__hhf__V_32_32 = ((MR_Word) hlds__hhf__conv0_V_32_32);
#line 431 "hhf.m"
    hlds__hhf__Functors0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_32_32, (MR_Integer) 0)));
#line 431 "hhf.m"
    hlds__hhf__MaybeParent_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_32_32, (MR_Integer) 1)));
#line 432 "hhf.m"
    {
#line 432 "hhf.m"
      hlds__hhf__succeeded = mercury__map__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], hlds__hhf__Functors0_23, ((MR_Box) (hlds__hhf__ConsId_22)));
    }
#line 434 "hhf.m"
    if (hlds__hhf__succeeded)
#line 434 "hhf.m"
      *hlds__hhf__STATE_VARIABLE_HI_28 = hlds__hhf__STATE_VARIABLE_HI_0_27;
#line 434 "hhf.m"
    else
#line 436 "hhf.m"
      {
#line 436 "hhf.m"
        MR_Word hlds__hhf__NewVars_25;
#line 436 "hhf.m"
        MR_Word hlds__hhf__Functors_26;
#line 436 "hhf.m"
        MR_Word hlds__hhf__V_33_33;
#line 436 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_HI_34_34;
#line 436 "hhf.m"
        MR_Word hlds__hhf__V_36_36;
#line 436 "hhf.m"
        MR_Word hlds__hhf__V_37_37;
#line 436 "hhf.m"
        MR_Word hlds__hhf__V_38_38;
#line 435 "hhf.m"
        MR_Box hlds__hhf__conv3_STATE_VARIABLE_HI_34_34;
#line 439 "hhf.m"
        MR_Word hlds__hhf__V_41_41;
#line 439 "hhf.m"
        MR_Word hlds__hhf__V_42_42;
#line 438 "hhf.m"
        MR_Word hlds__hhf__V_44_44;
#line 438 "hhf.m"
        MR_Word hlds__hhf__V_45_45;
#line 438 "hhf.m"
        MR_Word hlds__hhf__V_43_43;

#line 435 "hhf.m"
        {
#line 435 "hhf.m"
          hlds__hhf__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 0) = ((MR_Box) (&hlds__hhf_scalar_common_7[0]));
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 1) = ((MR_Box) (hlds__hhf__maybe_add_cons_id_8_p_0_1));
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 3) = ((MR_Box) (hlds__hhf__Var_9));
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 4) = ((MR_Box) (hlds__hhf__ModuleInfo_10));
#line 435 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_33_33, 5) = ((MR_Box) (hlds__hhf__BaseVars_11));
#line 435 "hhf.m"
        }
#line 435 "hhf.m"
        {
#line 435 "hhf.m"
          mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_46_46, hlds__hhf__TypeInfo_47_47, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_33_33, hlds__hhf__Args_19, &hlds__hhf__NewVars_25, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_27)), &hlds__hhf__conv3_STATE_VARIABLE_HI_34_34);
        }
#line 435 "hhf.m"
        hlds__hhf__STATE_VARIABLE_HI_34_34 = ((MR_Word) hlds__hhf__conv3_STATE_VARIABLE_HI_34_34);
#line 437 "hhf.m"
        {
#line 437 "hhf.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], ((MR_Box) (hlds__hhf__ConsId_22)), ((MR_Box) (hlds__hhf__NewVars_25)), hlds__hhf__Functors0_23, &hlds__hhf__Functors_26);
        }
#line 439 "hhf.m"
        hlds__hhf__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 0)));
#line 439 "hhf.m"
        hlds__hhf__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 1)));
#line 439 "hhf.m"
        hlds__hhf__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 2)));
#line 440 "hhf.m"
        {
#line 440 "hhf.m"
          hlds__hhf__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_38_38, 0) = ((MR_Box) (hlds__hhf__Functors_26));
#line 440 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_38_38, 1) = ((MR_Box) (hlds__hhf__MaybeParent_24));
#line 440 "hhf.m"
        }
#line 439 "hhf.m"
        {
#line 439 "hhf.m"
          hlds__hhf__V_36_36 = mercury__map__det_update_3_f_0(hlds__hhf__TypeInfo_47_47, hlds__hhf__TypeCtorInfo_48_48, hlds__hhf__V_37_37, ((MR_Box) (hlds__hhf__Var_9)), ((MR_Box) (hlds__hhf__V_38_38)));
        }
#line 438 "hhf.m"
        hlds__hhf__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 0)));
#line 438 "hhf.m"
        hlds__hhf__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 1)));
#line 438 "hhf.m"
        hlds__hhf__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_34_34, (MR_Integer) 2)));
#line 438 "hhf.m"
        {
#line 438 "hhf.m"
          MR_Word base;
#line 438 "hhf.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 438 "hhf.m"
          *hlds__hhf__STATE_VARIABLE_HI_28 = base;
#line 438 "hhf.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__V_36_36));
#line 438 "hhf.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_44_44));
#line 438 "hhf.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_45_45));
#line 438 "hhf.m"
        }
#line 436 "hhf.m"
      }
#line 427 "hhf.m"
  }
#line 422 "hhf.m"
}

#line 415 "hhf.m"
static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0_1(
#line 415 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 415 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 415 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 415 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3)
#line 415 "hhf.m"
{
#line 415 "hhf.m"
  {
#line 415 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 415 "hhf.m"
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_28;

#line 415 "hhf.m"
    {
#line 415 "hhf.m"
      hlds__hhf__maybe_add_cons_id_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 7))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv0_STATE_VARIABLE_HI_28);
    }
#line 415 "hhf.m"
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_28));
#line 415 "hhf.m"
  }
#line 415 "hhf.m"
}

#line 397 "hhf.m"
static void MR_CALL 
hlds__hhf__complete_inst_graph_node_5_p_0(
#line 397 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_6,
#line 397 "hhf.m"
  MR_Word hlds__hhf__BaseVars_7,
#line 397 "hhf.m"
  MR_Word hlds__hhf__Var_8,
#line 397 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_19,
#line 397 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_20)
#line 397 "hhf.m"
{
#line 400 "hhf.m"
  {
#line 400 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 400 "hhf.m"
    MR_Word hlds__hhf__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 2)));
#line 401 "hhf.m"
    MR_Word hlds__hhf__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 0)));
#line 401 "hhf.m"
    MR_Word hlds__hhf__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_19, (MR_Integer) 1)));
#line 418 "hhf.m"
    MR_Word hlds__hhf__Constructors_12;
#line 418 "hhf.m"
    MR_Word hlds__hhf__TypeCtor_13;
#line 403 "hhf.m"
    MR_Word hlds__hhf__Type_11;

#line 403 "hhf.m"
    {
#line 403 "hhf.m"
      hlds__hhf__succeeded = parse_tree__prog_data__search_var_type_3_p_0(hlds__hhf__VarTypes0_10, hlds__hhf__Var_8, &hlds__hhf__Type_11);
    }
#line 403 "hhf.m"
    if (hlds__hhf__succeeded)
#line 403 "hhf.m"
      {
#line 404 "hhf.m"
        {
#line 404 "hhf.m"
          hlds__hhf__succeeded = check_hlds__type_util__type_constructors_3_p_0(hlds__hhf__ModuleInfo_6, hlds__hhf__Type_11, &hlds__hhf__Constructors_12);
        }
#line 403 "hhf.m"
        if (hlds__hhf__succeeded)
#line 405 "hhf.m"
          {
#line 405 "hhf.m"
            hlds__hhf__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(hlds__hhf__Type_11, &hlds__hhf__TypeCtor_13);
          }
#line 403 "hhf.m"
      }
#line 418 "hhf.m"
    if (hlds__hhf__succeeded)
#line 407 "hhf.m"
      {
#line 407 "hhf.m"
        MR_Word hlds__hhf__TypeCtorSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__TypeCtor_13, (MR_Integer) 0)));
#line 407 "hhf.m"
        MR_Word hlds__hhf__TypeCtorModuleName_17;
#line 407 "hhf.m"
        MR_Word hlds__hhf__V_24_24;
#line 407 "hhf.m"
        MR_Integer hlds__hhf__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hhf__TypeCtor_13, (MR_Integer) 1)));
#line 414 "hhf.m"
        MR_Box hlds__hhf__conv1_STATE_VARIABLE_HI_20;

#line 411 "hhf.m"
        if (((MR_tag((MR_Word) hlds__hhf__TypeCtorSymName_14)) == (MR_mktag((MR_Integer) 1))))
#line 412 "hhf.m"
          {
#line 412 "hhf.m"
            MR_String hlds__hhf__V_18_18;

#line 412 "hhf.m"
            hlds__hhf__TypeCtorModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__TypeCtorSymName_14, (MR_Integer) 0)));
#line 412 "hhf.m"
            hlds__hhf__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hhf__TypeCtorSymName_14, (MR_Integer) 1)));
#line 412 "hhf.m"
          }
#line 411 "hhf.m"
        else
#line 409 "hhf.m"
          {
#line 410 "hhf.m"
            {
#line 410 "hhf.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.complete_inst_graph_node\'/5", (MR_String) "unqualified TypeCtorSymName");
#line 410 "hhf.m"
              return;
            }
#line 409 "hhf.m"
          }
#line 415 "hhf.m"
        {
#line 415 "hhf.m"
          hlds__hhf__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 0) = ((MR_Box) (&hlds__hhf_scalar_common_6[0]));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 1) = ((MR_Box) (hlds__hhf__complete_inst_graph_node_5_p_0_1));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 3) = ((MR_Box) (hlds__hhf__Var_8));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 4) = ((MR_Box) (hlds__hhf__ModuleInfo_6));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 5) = ((MR_Box) (hlds__hhf__BaseVars_7));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 6) = ((MR_Box) (hlds__hhf__TypeCtor_13));
#line 415 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_24_24, 7) = ((MR_Box) (hlds__hhf__TypeCtorModuleName_17));
#line 415 "hhf.m"
        }
#line 414 "hhf.m"
        {
#line 414 "hhf.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_24_24, hlds__hhf__Constructors_12, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_19)), &hlds__hhf__conv1_STATE_VARIABLE_HI_20);
        }
#line 414 "hhf.m"
        *hlds__hhf__STATE_VARIABLE_HI_20 = ((MR_Word) hlds__hhf__conv1_STATE_VARIABLE_HI_20);
#line 407 "hhf.m"
      }
#line 418 "hhf.m"
    else
#line 418 "hhf.m"
      *hlds__hhf__STATE_VARIABLE_HI_20 = hlds__hhf__STATE_VARIABLE_HI_0_19;
#line 400 "hhf.m"
  }
#line 397 "hhf.m"
}

#line 354 "hhf.m"
static void MR_CALL 
hlds__hhf__add_unifications_10_p_0(
#line 354 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 354 "hhf.m"
  MR_Word hlds__hhf__NonLocals_2,
#line 354 "hhf.m"
  MR_Word hlds__hhf__GI0_3,
#line 354 "hhf.m"
  MR_Word hlds__hhf__M_4,
#line 354 "hhf.m"
  MR_Word hlds__hhf__U_5,
#line 354 "hhf.m"
  MR_Word hlds__hhf__C_6,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__7_7,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__8_8,
#line 354 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_9,
#line 354 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_10)
#line 354 "hhf.m"
{
#line 358 "hhf.m"
  {
#line 358 "hhf.m"
    MR_bool hlds__hhf__succeeded;

#line 358 "hhf.m"
    if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "hhf.m"
      {
#line 358 "hhf.m"
        *hlds__hhf__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "hhf.m"
        *hlds__hhf__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "hhf.m"
        *hlds__hhf__STATE_VARIABLE_HI_10 = hlds__hhf__STATE_VARIABLE_HI_0_9;
#line 358 "hhf.m"
      }
#line 358 "hhf.m"
    else
#line 359 "hhf.m"
      {
#line 359 "hhf.m"
        MR_Word hlds__hhf__A_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));
#line 359 "hhf.m"
        MR_Word hlds__hhf__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "hhf.m"
        MR_Word hlds__hhf__V_26;
#line 359 "hhf.m"
        MR_Word hlds__hhf__Vs_27;
#line 359 "hhf.m"
        MR_Word hlds__hhf__Goals0_30;
#line 359 "hhf.m"
        MR_Word hlds__hhf__InstGraph0_31;
#line 359 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_HI_47_47;
#line 361 "hhf.m"
        MR_Word hlds__hhf__V_57_57;
#line 361 "hhf.m"
        MR_Word hlds__hhf__V_58_58;

#line 360 "hhf.m"
        {
#line 360 "hhf.m"
          hlds__hhf__add_unifications_10_p_0(hlds__hhf__As_20, hlds__hhf__NonLocals_2, hlds__hhf__GI0_3, hlds__hhf__M_4, hlds__hhf__U_5, hlds__hhf__C_6, &hlds__hhf__Vs_27, &hlds__hhf__Goals0_30, hlds__hhf__STATE_VARIABLE_HI_0_9, &hlds__hhf__STATE_VARIABLE_HI_47_47);
        }
#line 361 "hhf.m"
        hlds__hhf__InstGraph0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 0)));
#line 361 "hhf.m"
        hlds__hhf__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 1)));
#line 361 "hhf.m"
        hlds__hhf__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 2)));
#line 364 "hhf.m"
        {
#line 364 "hhf.m"
          MR_Word hlds__hhf__Node_32;
#line 364 "hhf.m"
          MR_Word hlds__hhf__V_48_48;
#line 364 "hhf.m"
          MR_Box hlds__hhf__conv0_Node_32;
#line 365 "hhf.m"
          MR_Word hlds__hhf__V_33_33;
#line 365 "hhf.m"
          MR_Word hlds__hhf__V_34_34;

#line 364 "hhf.m"
          {
#line 364 "hhf.m"
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph0_31, ((MR_Box) (hlds__hhf__A_19)), &hlds__hhf__conv0_Node_32);
          }
#line 364 "hhf.m"
          hlds__hhf__Node_32 = ((MR_Word) hlds__hhf__conv0_Node_32);
#line 365 "hhf.m"
          hlds__hhf__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Node_32, (MR_Integer) 0)));
#line 365 "hhf.m"
          hlds__hhf__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Node_32, (MR_Integer) 1)));
#line 365 "hhf.m"
          hlds__hhf__succeeded = ((MR_tag((MR_Word) hlds__hhf__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 365 "hhf.m"
          if (hlds__hhf__succeeded)
#line 365 "hhf.m"
            hlds__hhf__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, (MR_Integer) 0)));
#line 364 "hhf.m"
        }
#line 366 "hhf.m"
        if (!(hlds__hhf__succeeded))
#line 367 "hhf.m"
          {
#line 367 "hhf.m"
            {
#line 367 "hhf.m"
              hlds__hhf__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__NonLocals_2, hlds__hhf__A_19);
            }
#line 367 "hhf.m"
          }
#line 384 "hhf.m"
        if (hlds__hhf__succeeded)
#line 370 "hhf.m"
          {
#line 370 "hhf.m"
            MR_Word hlds__hhf__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 370 "hhf.m"
            MR_Word hlds__hhf__VarSet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 1)));
#line 370 "hhf.m"
            MR_Word hlds__hhf__VarTypes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 2)));
#line 370 "hhf.m"
            MR_Word hlds__hhf__VarSet_37;
#line 370 "hhf.m"
            MR_Word hlds__hhf__Type_38;
#line 370 "hhf.m"
            MR_Word hlds__hhf__VarTypes_39;
#line 370 "hhf.m"
            MR_Word hlds__hhf__Empty_40;
#line 370 "hhf.m"
            MR_Word hlds__hhf__InstGraph_41;
#line 370 "hhf.m"
            MR_Word hlds__hhf__GINonlocals0_42;
#line 370 "hhf.m"
            MR_Word hlds__hhf__GINonlocals_43;
#line 370 "hhf.m"
            MR_Word hlds__hhf__GI_44;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_49_49;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_54_54;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_55_55;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_56_56;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_67_67;
#line 370 "hhf.m"
            MR_Word hlds__hhf__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_47_47, (MR_Integer) 0)));

#line 372 "hhf.m"
            {
#line 372 "hhf.m"
              mercury__varset__new_var_3_p_0(hlds__hhf__TypeCtorInfo_75_75, &hlds__hhf__V_26, hlds__hhf__VarSet0_35, &hlds__hhf__VarSet_37);
            }
#line 373 "hhf.m"
            {
#line 373 "hhf.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hhf__VarTypes0_36, hlds__hhf__A_19, &hlds__hhf__Type_38);
            }
#line 374 "hhf.m"
            {
#line 374 "hhf.m"
              parse_tree__prog_data__add_var_type_4_p_0(hlds__hhf__V_26, hlds__hhf__Type_38, hlds__hhf__VarTypes0_36, &hlds__hhf__VarTypes_39);
            }
#line 375 "hhf.m"
            {
#line 375 "hhf.m"
              mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], &hlds__hhf__Empty_40);
            }
#line 376 "hhf.m"
            {
#line 376 "hhf.m"
              hlds__hhf__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_49_49, 0) = ((MR_Box) (hlds__hhf__Empty_40));
#line 376 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "hhf.m"
            }
#line 376 "hhf.m"
            {
#line 376 "hhf.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hhf_scalar_common_1[0], (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, ((MR_Box) (hlds__hhf__V_26)), ((MR_Box) (hlds__hhf__V_49_49)), hlds__hhf__InstGraph0_31, &hlds__hhf__InstGraph_41);
            }
#line 378 "hhf.m"
            hlds__hhf__V_67_67 = hlds__hhf__VarSet_37;
#line 379 "hhf.m"
            {
#line 379 "hhf.m"
              MR_Word base;
#line 379 "hhf.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "hhf.m"
              *hlds__hhf__STATE_VARIABLE_HI_10 = base;
#line 379 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__InstGraph_41));
#line 379 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_67_67));
#line 379 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__VarTypes_39));
#line 379 "hhf.m"
            }
#line 380 "hhf.m"
            {
#line 380 "hhf.m"
              hlds__hhf__GINonlocals0_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GI0_3);
            }
#line 381 "hhf.m"
            {
#line 381 "hhf.m"
              parse_tree__set_of_var__insert_3_p_0(hlds__hhf__TypeCtorInfo_75_75, hlds__hhf__V_26, hlds__hhf__GINonlocals0_42, &hlds__hhf__GINonlocals_43);
            }
#line 382 "hhf.m"
            {
#line 382 "hhf.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_43, hlds__hhf__GI0_3, &hlds__hhf__GI_44);
            }
#line 383 "hhf.m"
            {
#line 383 "hhf.m"
              hlds__hhf__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 0) = ((MR_Box) (hlds__hhf__V_26));
#line 383 "hhf.m"
            }
#line 383 "hhf.m"
            {
#line 383 "hhf.m"
              hlds__hhf__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 0) = ((MR_Box) (hlds__hhf__A_19));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 1) = ((MR_Box) (hlds__hhf__V_56_56));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 2) = ((MR_Box) (hlds__hhf__M_4));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 3) = ((MR_Box) (hlds__hhf__U_5));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_55_55, 4) = ((MR_Box) (hlds__hhf__C_6));
#line 383 "hhf.m"
            }
#line 383 "hhf.m"
            {
#line 383 "hhf.m"
              hlds__hhf__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, 0) = ((MR_Box) (hlds__hhf__V_55_55));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, 1) = ((MR_Box) (hlds__hhf__GI_44));
#line 383 "hhf.m"
            }
#line 383 "hhf.m"
            {
#line 383 "hhf.m"
              MR_Word base;
#line 383 "hhf.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "hhf.m"
              *hlds__hhf__HeadVar__8_8 = base;
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_54_54));
#line 383 "hhf.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Goals0_30));
#line 383 "hhf.m"
            }
#line 370 "hhf.m"
          }
#line 384 "hhf.m"
        else
#line 385 "hhf.m"
          {
#line 385 "hhf.m"
            hlds__hhf__V_26 = hlds__hhf__A_19;
#line 386 "hhf.m"
            *hlds__hhf__HeadVar__8_8 = hlds__hhf__Goals0_30;
#line 385 "hhf.m"
            *hlds__hhf__STATE_VARIABLE_HI_10 = hlds__hhf__STATE_VARIABLE_HI_47_47;
#line 385 "hhf.m"
          }
#line 359 "hhf.m"
        {
#line 359 "hhf.m"
          MR_Word base;
#line 359 "hhf.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "hhf.m"
          *hlds__hhf__HeadVar__7_7 = base;
#line 359 "hhf.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_26));
#line 359 "hhf.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Vs_27));
#line 359 "hhf.m"
        }
#line 359 "hhf.m"
      }
#line 358 "hhf.m"
  }
#line 354 "hhf.m"
}

#line 338 "hhf.m"
static void MR_CALL 
hlds__hhf__make_unifications_7_p_0(
#line 338 "hhf.m"
  MR_Word hlds__hhf__HeadVar__1_1,
#line 338 "hhf.m"
  MR_Word hlds__hhf__HeadVar__2_2,
#line 338 "hhf.m"
  MR_Word hlds__hhf__GI0_3,
#line 338 "hhf.m"
  MR_Word hlds__hhf__M_4,
#line 338 "hhf.m"
  MR_Word hlds__hhf__U_5,
#line 338 "hhf.m"
  MR_Word hlds__hhf__C_6,
#line 338 "hhf.m"
  MR_Word * hlds__hhf__HeadVar__7_7)
#line 338 "hhf.m"
{
#line 342 "hhf.m"
  {
#line 342 "hhf.m"
    MR_bool hlds__hhf__succeeded;

#line 342 "hhf.m"
    if ((hlds__hhf__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "hhf.m"
      if ((hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "hhf.m"
        *hlds__hhf__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "hhf.m"
      else
#line 345 "hhf.m"
        {
#line 346 "hhf.m"
          {
#line 346 "hhf.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (2)");
#line 346 "hhf.m"
            return;
          }
#line 345 "hhf.m"
        }
#line 342 "hhf.m"
    else
#line 342 "hhf.m"
      {
#line 342 "hhf.m"
        MR_Word hlds__hhf__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 1)));
#line 342 "hhf.m"
        MR_Word hlds__hhf__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__1_1, (MR_Integer) 0)));

#line 342 "hhf.m"
        if ((hlds__hhf__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "hhf.m"
          {
#line 344 "hhf.m"
            {
#line 344 "hhf.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.make_unifications\'/7", (MR_String) "length mismatch (1)");
#line 344 "hhf.m"
              return;
            }
#line 343 "hhf.m"
          }
#line 342 "hhf.m"
        else
#line 348 "hhf.m"
          {
#line 348 "hhf.m"
            MR_Word hlds__hhf__B_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "hhf.m"
            MR_Word hlds__hhf__Bs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "hhf.m"
            MR_Word hlds__hhf__GI_40;
#line 348 "hhf.m"
            MR_Word hlds__hhf__Us_41;
#line 348 "hhf.m"
            MR_Word hlds__hhf__GINonlocals0_42;
#line 348 "hhf.m"
            MR_Word hlds__hhf__GINonlocals_43;
#line 348 "hhf.m"
            MR_Word hlds__hhf__V_44_44;
#line 348 "hhf.m"
            MR_Word hlds__hhf__V_45_45;
#line 348 "hhf.m"
            MR_Word hlds__hhf__V_46_46;
#line 348 "hhf.m"
            MR_Word hlds__hhf__V_47_47;
#line 348 "hhf.m"
            MR_Word hlds__hhf__V_48_48;

#line 348 "hhf.m"
            {
#line 348 "hhf.m"
              hlds__hhf__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_46_46, 0) = ((MR_Box) (hlds__hhf__B_34));
#line 348 "hhf.m"
            }
#line 348 "hhf.m"
            {
#line 348 "hhf.m"
              hlds__hhf__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 0) = ((MR_Box) (hlds__hhf__V_52_52));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 1) = ((MR_Box) (hlds__hhf__V_46_46));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 2) = ((MR_Box) (hlds__hhf__M_4));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 3) = ((MR_Box) (hlds__hhf__U_5));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_45_45, 4) = ((MR_Box) (hlds__hhf__C_6));
#line 348 "hhf.m"
            }
#line 349 "hhf.m"
            {
#line 349 "hhf.m"
              hlds__hhf__GINonlocals0_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GI0_3);
            }
#line 350 "hhf.m"
            {
#line 350 "hhf.m"
              hlds__hhf__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, 0) = ((MR_Box) (hlds__hhf__B_34));
#line 350 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "hhf.m"
            }
#line 350 "hhf.m"
            {
#line 350 "hhf.m"
              hlds__hhf__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_47_47, 0) = ((MR_Box) (hlds__hhf__V_52_52));
#line 350 "hhf.m"
              MR_hl_field(MR_mktag(1), hlds__hhf__V_47_47, 1) = ((MR_Box) (hlds__hhf__V_48_48));
#line 350 "hhf.m"
            }
#line 350 "hhf.m"
            {
#line 350 "hhf.m"
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hhf__V_47_47, hlds__hhf__GINonlocals0_42, &hlds__hhf__GINonlocals_43);
            }
#line 351 "hhf.m"
            {
#line 351 "hhf.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_43, hlds__hhf__GI0_3, &hlds__hhf__GI_40);
            }
#line 348 "hhf.m"
            {
#line 348 "hhf.m"
              hlds__hhf__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_44_44, 0) = ((MR_Box) (hlds__hhf__V_45_45));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_44_44, 1) = ((MR_Box) (hlds__hhf__GI_40));
#line 348 "hhf.m"
            }
#line 352 "hhf.m"
            {
#line 352 "hhf.m"
              hlds__hhf__make_unifications_7_p_0(hlds__hhf__V_51_51, hlds__hhf__Bs_35, hlds__hhf__GI0_3, hlds__hhf__M_4, hlds__hhf__U_5, hlds__hhf__C_6, &hlds__hhf__Us_41);
            }
#line 348 "hhf.m"
            {
#line 348 "hhf.m"
              MR_Word base;
#line 348 "hhf.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hhf.m"
              *hlds__hhf__HeadVar__7_7 = base;
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__V_44_44));
#line 348 "hhf.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__Us_41));
#line 348 "hhf.m"
            }
#line 348 "hhf.m"
          }
#line 342 "hhf.m"
      }
#line 342 "hhf.m"
  }
#line 338 "hhf.m"
}

#line 326 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0_1(
#line 326 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 326 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 326 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 326 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3)
#line 326 "hhf.m"
{
#line 326 "hhf.m"
  {
#line 326 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 326 "hhf.m"
    MR_Word hlds__hhf__conv2_HeadVar__4_4;

#line 326 "hhf.m"
    {
#line 326 "hhf.m"
      hlds__inst_graph__set_parent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv2_HeadVar__4_4);
    }
#line 326 "hhf.m"
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv2_HeadVar__4_4));
#line 326 "hhf.m"
  }
#line 326 "hhf.m"
}

#line 295 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_unify_to_hhf_10_p_0(
#line 295 "hhf.m"
  MR_Word hlds__hhf__RHS0_11,
#line 295 "hhf.m"
  MR_Word hlds__hhf__NonLocals_12,
#line 295 "hhf.m"
  MR_Word hlds__hhf__GoalInfo0_13,
#line 295 "hhf.m"
  MR_Word hlds__hhf__X_14,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Mode_15,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Unif_16,
#line 295 "hhf.m"
  MR_Word hlds__hhf__Context_17,
#line 295 "hhf.m"
  MR_Word * hlds__hhf__GoalExpr_18,
#line 295 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_52,
#line 295 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_53)
#line 295 "hhf.m"
{
#line 303 "hhf.m"
  {
#line 303 "hhf.m"
    MR_bool hlds__hhf__succeeded;

#line 303 "hhf.m"
    if (((MR_tag((MR_Word) hlds__hhf__RHS0_11)) == (MR_mktag((MR_Integer) 1))))
#line 311 "hhf.m"
      {
#line 311 "hhf.m"
        MR_Word hlds__hhf__TypeInfo_71_71;
#line 311 "hhf.m"
        MR_Word hlds__hhf__TypeCtorInfo_72_72;
#line 311 "hhf.m"
        MR_Word hlds__hhf__TypeCtorInfo_81_81;
#line 311 "hhf.m"
        MR_Word hlds__hhf__ConsId0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 0)));
#line 311 "hhf.m"
        MR_Word hlds__hhf__IsExistConstruct_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 1)));
#line 311 "hhf.m"
        MR_Word hlds__hhf__ArgsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__RHS0_11, (MR_Integer) 2)));
#line 311 "hhf.m"
        MR_Word hlds__hhf__ConsId_36;
#line 311 "hhf.m"
        MR_Word hlds__hhf__InstGraph0_37;
#line 311 "hhf.m"
        MR_Word hlds__hhf__Functors0_38;
#line 311 "hhf.m"
        MR_Word hlds__hhf__MaybeParent_39;
#line 311 "hhf.m"
        MR_Word hlds__hhf__Unifications_41;
#line 311 "hhf.m"
        MR_Word hlds__hhf__Args_42;
#line 311 "hhf.m"
        MR_Word hlds__hhf__GINonlocals0_47;
#line 311 "hhf.m"
        MR_Word hlds__hhf__GINonlocals_48;
#line 311 "hhf.m"
        MR_Word hlds__hhf__GoalInfo_49;
#line 311 "hhf.m"
        MR_Word hlds__hhf__UnifyGoalExpr_50;
#line 311 "hhf.m"
        MR_Word hlds__hhf__UnifyGoal_51;
#line 311 "hhf.m"
        MR_Word hlds__hhf__V_54_54;
#line 311 "hhf.m"
        MR_Word hlds__hhf__V_59_59;
#line 311 "hhf.m"
        MR_Word hlds__hhf__V_61_61;
#line 311 "hhf.m"
        MR_Word hlds__hhf__RHS_63;
#line 312 "hhf.m"
        MR_Word hlds__hhf__V_35_35;
#line 313 "hhf.m"
        MR_Word hlds__hhf__V_64_64;
#line 313 "hhf.m"
        MR_Word hlds__hhf__V_65_65;
#line 314 "hhf.m"
        MR_Box hlds__hhf__conv0_V_54_54;
#line 319 "hhf.m"
        MR_Word hlds__hhf__ArgsB_40;
#line 315 "hhf.m"
        MR_Box hlds__hhf__conv1_ArgsB_40;

#line 312 "hhf.m"
        {
#line 312 "hhf.m"
          parse_tree__prog_type__qualify_cons_id_4_p_0(hlds__hhf__ArgsA_34, hlds__hhf__ConsId0_32, &hlds__hhf__V_35_35, &hlds__hhf__ConsId_36);
        }
#line 313 "hhf.m"
        hlds__hhf__InstGraph0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 0)));
#line 313 "hhf.m"
        hlds__hhf__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 1)));
#line 313 "hhf.m"
        hlds__hhf__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_0_52, (MR_Integer) 2)));
#line 3178 "hlds.hhf.c"
        hlds__hhf__TypeInfo_71_71 = (MR_Word) &hlds__hhf_scalar_common_1[0];
#line 3180 "hlds.hhf.c"
        hlds__hhf__TypeCtorInfo_72_72 = (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0;
#line 314 "hhf.m"
        {
#line 314 "hhf.m"
          mercury__map__lookup_3_p_0(hlds__hhf__TypeInfo_71_71, hlds__hhf__TypeCtorInfo_72_72, hlds__hhf__InstGraph0_37, ((MR_Box) (hlds__hhf__X_14)), &hlds__hhf__conv0_V_54_54);
        }
#line 314 "hhf.m"
        hlds__hhf__V_54_54 = ((MR_Word) hlds__hhf__conv0_V_54_54);
#line 314 "hhf.m"
        hlds__hhf__Functors0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, (MR_Integer) 0)));
#line 314 "hhf.m"
        hlds__hhf__MaybeParent_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__V_54_54, (MR_Integer) 1)));
#line 315 "hhf.m"
        {
#line 315 "hhf.m"
          hlds__hhf__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], hlds__hhf__Functors0_38, ((MR_Box) (hlds__hhf__ConsId_36)), &hlds__hhf__conv1_ArgsB_40);
        }
#line 315 "hhf.m"
        if (hlds__hhf__succeeded)
#line 315 "hhf.m"
          {
#line 315 "hhf.m"
            hlds__hhf__ArgsB_40 = ((MR_Word) hlds__hhf__conv1_ArgsB_40);
#line 315 "hhf.m"
            hlds__hhf__succeeded = MR_TRUE;
#line 315 "hhf.m"
          }
#line 319 "hhf.m"
        if (hlds__hhf__succeeded)
#line 317 "hhf.m"
          {
#line 316 "hhf.m"
            {
#line 316 "hhf.m"
              hlds__hhf__make_unifications_7_p_0(hlds__hhf__ArgsA_34, hlds__hhf__ArgsB_40, hlds__hhf__GoalInfo0_13, hlds__hhf__Mode_15, hlds__hhf__Unif_16, hlds__hhf__Context_17, &hlds__hhf__Unifications_41);
            }
#line 318 "hhf.m"
            hlds__hhf__Args_42 = hlds__hhf__ArgsB_40;
#line 317 "hhf.m"
            *hlds__hhf__STATE_VARIABLE_HI_53 = hlds__hhf__STATE_VARIABLE_HI_0_52;
#line 317 "hhf.m"
          }
#line 319 "hhf.m"
        else
#line 321 "hhf.m"
          {
#line 321 "hhf.m"
            MR_Word hlds__hhf__InstGraph1_43;
#line 321 "hhf.m"
            MR_Word hlds__hhf__Functors_44;
#line 321 "hhf.m"
            MR_Word hlds__hhf__InstGraph2_45;
#line 321 "hhf.m"
            MR_Word hlds__hhf__InstGraph_46;
#line 321 "hhf.m"
            MR_Word hlds__hhf__STATE_VARIABLE_HI_55_55;
#line 321 "hhf.m"
            MR_Word hlds__hhf__V_56_56;
#line 321 "hhf.m"
            MR_Word hlds__hhf__V_57_57;
#line 322 "hhf.m"
            MR_Word hlds__hhf__V_66_66;
#line 322 "hhf.m"
            MR_Word hlds__hhf__V_67_67;
#line 326 "hhf.m"
            MR_Box hlds__hhf__conv3_InstGraph_46;
#line 327 "hhf.m"
            MR_Word hlds__hhf__V_69_69;
#line 327 "hhf.m"
            MR_Word hlds__hhf__V_70_70;
#line 327 "hhf.m"
            MR_Word hlds__hhf__V_68_68;

#line 320 "hhf.m"
            {
#line 320 "hhf.m"
              hlds__hhf__add_unifications_10_p_0(hlds__hhf__ArgsA_34, hlds__hhf__NonLocals_12, hlds__hhf__GoalInfo0_13, hlds__hhf__Mode_15, hlds__hhf__Unif_16, hlds__hhf__Context_17, &hlds__hhf__Args_42, &hlds__hhf__Unifications_41, hlds__hhf__STATE_VARIABLE_HI_0_52, &hlds__hhf__STATE_VARIABLE_HI_55_55);
            }
#line 322 "hhf.m"
            hlds__hhf__InstGraph1_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 0)));
#line 322 "hhf.m"
            hlds__hhf__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 1)));
#line 322 "hhf.m"
            hlds__hhf__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 2)));
#line 323 "hhf.m"
            {
#line 323 "hhf.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hhf_scalar_common_1[1], ((MR_Box) (hlds__hhf__ConsId_36)), ((MR_Box) (hlds__hhf__Args_42)), hlds__hhf__Functors0_38, &hlds__hhf__Functors_44);
            }
#line 324 "hhf.m"
            {
#line 324 "hhf.m"
              hlds__hhf__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 0) = ((MR_Box) (hlds__hhf__Functors_44));
#line 324 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_56_56, 1) = ((MR_Box) (hlds__hhf__MaybeParent_39));
#line 324 "hhf.m"
            }
#line 324 "hhf.m"
            {
#line 324 "hhf.m"
              mercury__map__det_update_4_p_0(hlds__hhf__TypeInfo_71_71, hlds__hhf__TypeCtorInfo_72_72, ((MR_Box) (hlds__hhf__X_14)), ((MR_Box) (hlds__hhf__V_56_56)), hlds__hhf__InstGraph1_43, &hlds__hhf__InstGraph2_45);
            }
#line 326 "hhf.m"
            {
#line 326 "hhf.m"
              hlds__hhf__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 326 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 0) = ((MR_Box) (&hlds__hhf_scalar_common_5[1]));
#line 326 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 1) = ((MR_Box) (hlds__hhf__convert_unify_to_hhf_10_p_0_1));
#line 326 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "hhf.m"
              MR_hl_field(MR_mktag(0), hlds__hhf__V_57_57, 3) = ((MR_Box) (hlds__hhf__X_14));
#line 326 "hhf.m"
            }
#line 326 "hhf.m"
            {
#line 326 "hhf.m"
              mercury__list__foldl_4_p_0(hlds__hhf__TypeInfo_71_71, (MR_Word) &hlds__hhf_scalar_common_2[0], hlds__hhf__V_57_57, hlds__hhf__Args_42, ((MR_Box) (hlds__hhf__InstGraph2_45)), &hlds__hhf__conv3_InstGraph_46);
            }
#line 326 "hhf.m"
            hlds__hhf__InstGraph_46 = ((MR_Word) hlds__hhf__conv3_InstGraph_46);
#line 327 "hhf.m"
            hlds__hhf__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 0)));
#line 327 "hhf.m"
            hlds__hhf__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 1)));
#line 327 "hhf.m"
            hlds__hhf__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__STATE_VARIABLE_HI_55_55, (MR_Integer) 2)));
#line 327 "hhf.m"
            {
#line 327 "hhf.m"
              MR_Word base;
#line 327 "hhf.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "hhf.m"
              *hlds__hhf__STATE_VARIABLE_HI_53 = base;
#line 327 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__InstGraph_46));
#line 327 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__V_69_69));
#line 327 "hhf.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hhf__V_70_70));
#line 327 "hhf.m"
            }
#line 321 "hhf.m"
          }
#line 329 "hhf.m"
        {
#line 329 "hhf.m"
          hlds__hhf__GINonlocals0_47 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo0_13);
        }
#line 3335 "hlds.hhf.c"
        hlds__hhf__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 330 "hhf.m"
        {
#line 330 "hhf.m"
          hlds__hhf__V_59_59 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hhf__TypeCtorInfo_81_81, hlds__hhf__Args_42);
        }
#line 330 "hhf.m"
        {
#line 330 "hhf.m"
          hlds__hhf__GINonlocals_48 = parse_tree__set_of_var__union_2_f_0(hlds__hhf__TypeCtorInfo_81_81, hlds__hhf__GINonlocals0_47, hlds__hhf__V_59_59);
        }
#line 331 "hhf.m"
        {
#line 331 "hhf.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__hhf__GINonlocals_48, hlds__hhf__GoalInfo0_13, &hlds__hhf__GoalInfo_49);
        }
#line 332 "hhf.m"
        {
#line 332 "hhf.m"
          hlds__hhf__RHS_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 332 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 0) = ((MR_Box) (hlds__hhf__ConsId_36));
#line 332 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 1) = ((MR_Box) (hlds__hhf__IsExistConstruct_33));
#line 332 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__RHS_63, 2) = ((MR_Box) (hlds__hhf__Args_42));
#line 332 "hhf.m"
        }
#line 333 "hhf.m"
        {
#line 333 "hhf.m"
          hlds__hhf__UnifyGoalExpr_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 333 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 0) = ((MR_Box) (hlds__hhf__X_14));
#line 333 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 1) = ((MR_Box) (hlds__hhf__RHS_63));
#line 333 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 2) = ((MR_Box) (hlds__hhf__Mode_15));
#line 333 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 3) = ((MR_Box) (hlds__hhf__Unif_16));
#line 333 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__UnifyGoalExpr_50, 4) = ((MR_Box) (hlds__hhf__Context_17));
#line 333 "hhf.m"
        }
#line 334 "hhf.m"
        {
#line 334 "hhf.m"
          hlds__hhf__UnifyGoal_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__UnifyGoal_51, 0) = ((MR_Box) (hlds__hhf__UnifyGoalExpr_50));
#line 334 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__UnifyGoal_51, 1) = ((MR_Box) (hlds__hhf__GoalInfo_49));
#line 334 "hhf.m"
        }
#line 335 "hhf.m"
        {
#line 335 "hhf.m"
          hlds__hhf__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__V_61_61, 0) = ((MR_Box) (hlds__hhf__UnifyGoal_51));
#line 335 "hhf.m"
          MR_hl_field(MR_mktag(1), hlds__hhf__V_61_61, 1) = ((MR_Box) (hlds__hhf__Unifications_41));
#line 335 "hhf.m"
        }
#line 335 "hhf.m"
        {
#line 335 "hhf.m"
          MR_Word base;
#line 335 "hhf.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 335 "hhf.m"
          *hlds__hhf__GoalExpr_18 = base;
#line 335 "hhf.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 335 "hhf.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 335 "hhf.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__V_61_61));
#line 335 "hhf.m"
        }
#line 311 "hhf.m"
      }
#line 303 "hhf.m"
    else
#line 303 "hhf.m"
      if (((MR_tag((MR_Word) hlds__hhf__RHS0_11)) == (MR_mktag((MR_Integer) 2))))
#line 303 "hhf.m"
        {
#line 303 "hhf.m"
          MR_Word hlds__hhf__A_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 303 "hhf.m"
          MR_Word hlds__hhf__B_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 303 "hhf.m"
          MR_Word hlds__hhf__C_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 303 "hhf.m"
          MR_Word hlds__hhf__E_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 2)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__F_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 3)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__G_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 4)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__H_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 5)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__LambdaGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hhf__RHS0_11, (MR_Integer) 6)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__LambdaGoal_29;
#line 303 "hhf.m"
          MR_Word hlds__hhf__RHS_30;
#line 303 "hhf.m"
          MR_Word hlds__hhf__GoalExpr0_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal0_28, (MR_Integer) 0)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__GoalInfo_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal0_28, (MR_Integer) 1)));
#line 303 "hhf.m"
          MR_Word hlds__hhf__GoalExpr_90;

#line 220 "hhf.m"
          {
#line 220 "hhf.m"
            hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_12, hlds__hhf__GoalInfo_89, hlds__hhf__GoalExpr0_88, &hlds__hhf__GoalExpr_90, hlds__hhf__STATE_VARIABLE_HI_0_52, hlds__hhf__STATE_VARIABLE_HI_53);
          }
#line 221 "hhf.m"
          {
#line 221 "hhf.m"
            hlds__hhf__LambdaGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "hhf.m"
            MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal_29, 0) = ((MR_Box) (hlds__hhf__GoalExpr_90));
#line 221 "hhf.m"
            MR_hl_field(MR_mktag(0), hlds__hhf__LambdaGoal_29, 1) = ((MR_Box) (hlds__hhf__GoalInfo_89));
#line 221 "hhf.m"
          }
#line 305 "hhf.m"
          {
#line 305 "hhf.m"
            hlds__hhf__RHS_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 0) = ((MR_Box) ((hlds__hhf__A_20 | ((((hlds__hhf__B_21 << (MR_Integer) 2)) | ((hlds__hhf__C_22 << (MR_Integer) 3)))))));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 1) = (MR_Integer) 0;
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 2) = ((MR_Box) (hlds__hhf__E_24));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 3) = ((MR_Box) (hlds__hhf__F_25));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 4) = ((MR_Box) (hlds__hhf__G_26));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 5) = ((MR_Box) (hlds__hhf__H_27));
#line 305 "hhf.m"
            MR_hl_field(MR_mktag(2), hlds__hhf__RHS_30, 6) = ((MR_Box) (hlds__hhf__LambdaGoal_29));
#line 305 "hhf.m"
          }
#line 306 "hhf.m"
          {
#line 306 "hhf.m"
            MR_Word base;
#line 306 "hhf.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 306 "hhf.m"
            *hlds__hhf__GoalExpr_18 = base;
#line 306 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__X_14));
#line 306 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__RHS_30));
#line 306 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__hhf__Mode_15));
#line 306 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__hhf__Unif_16));
#line 306 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__hhf__Context_17));
#line 306 "hhf.m"
          }
#line 303 "hhf.m"
        }
#line 303 "hhf.m"
      else
#line 308 "hhf.m"
        {
#line 309 "hhf.m"
          {
#line 309 "hhf.m"
            MR_Word base;
#line 309 "hhf.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 309 "hhf.m"
            *hlds__hhf__GoalExpr_18 = base;
#line 309 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hhf__X_14));
#line 309 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hhf__RHS0_11));
#line 309 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__hhf__Mode_15));
#line 309 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__hhf__Unif_16));
#line 309 "hhf.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__hhf__Context_17));
#line 309 "hhf.m"
          }
#line 308 "hhf.m"
          *hlds__hhf__STATE_VARIABLE_HI_53 = hlds__hhf__STATE_VARIABLE_HI_0_52;
#line 308 "hhf.m"
        }
#line 303 "hhf.m"
  }
#line 295 "hhf.m"
}

#line 263 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_2(
#line 263 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 263 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 263 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 263 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 263 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4)
#line 263 "hhf.m"
{
#line 263 "hhf.m"
  {
#line 263 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 263 "hhf.m"
    MR_Word hlds__hhf__conv4_Goal_6;
#line 263 "hhf.m"
    MR_Word hlds__hhf__conv3_STATE_VARIABLE_HI_13;

#line 263 "hhf.m"
    {
#line 263 "hhf.m"
      hlds__hhf__goal_use_own_nonlocals_4_p_0(((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv4_Goal_6, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv3_STATE_VARIABLE_HI_13);
    }
#line 263 "hhf.m"
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv4_Goal_6));
#line 263 "hhf.m"
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv3_STATE_VARIABLE_HI_13));
#line 263 "hhf.m"
  }
#line 263 "hhf.m"
}

#line 252 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1(
#line 252 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 252 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 252 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 252 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 252 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4)
#line 252 "hhf.m"
{
#line 252 "hhf.m"
  {
#line 252 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 252 "hhf.m"
    MR_Word hlds__hhf__conv1_Goal_8;
#line 252 "hhf.m"
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_14;

#line 252 "hhf.m"
    {
#line 252 "hhf.m"
      hlds__hhf__convert_goal_to_hhf_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv1_Goal_8, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv0_STATE_VARIABLE_HI_14);
    }
#line 252 "hhf.m"
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv1_Goal_8));
#line 252 "hhf.m"
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_14));
#line 252 "hhf.m"
  }
#line 252 "hhf.m"
}

#line 232 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_expr_to_hhf_6_p_0(
#line 232 "hhf.m"
  MR_Word hlds__hhf__NonLocals_7,
#line 232 "hhf.m"
  MR_Word hlds__hhf__GoalInfo_8,
#line 232 "hhf.m"
  MR_Word hlds__hhf__GoalExpr0_9,
#line 232 "hhf.m"
  MR_Word * hlds__hhf__GoalExpr_10,
#line 232 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_61,
#line 232 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_62)
#line 232 "hhf.m"
{
#line 238 "hhf.m"
  {
#line 238 "hhf.m"
    MR_bool hlds__hhf__succeeded;

#line 238 "hhf.m"
    if (((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 0))))
#line 273 "hhf.m"
      {
#line 273 "hhf.m"
        MR_Word hlds__hhf__SubGoal0_81 = (MR_Word) MR_body(((MR_Word) hlds__hhf__GoalExpr0_9), (MR_Integer) 0);
#line 273 "hhf.m"
        MR_Word hlds__hhf__SubGoal_82;

#line 274 "hhf.m"
        {
#line 274 "hhf.m"
          hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__SubGoal0_81, &hlds__hhf__SubGoal_82, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
        }
#line 275 "hhf.m"
        *hlds__hhf__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__hhf__SubGoal_82);
#line 273 "hhf.m"
      }
#line 238 "hhf.m"
    else
#line 238 "hhf.m"
      if (((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 2))))
#line 242 "hhf.m"
        {
#line 243 "hhf.m"
          *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
#line 242 "hhf.m"
          *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
#line 242 "hhf.m"
        }
#line 238 "hhf.m"
      else
#line 238 "hhf.m"
        if (((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 1))))
#line 238 "hhf.m"
          {
#line 238 "hhf.m"
            MR_Word hlds__hhf__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)));
#line 238 "hhf.m"
            MR_Word hlds__hhf__RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
#line 238 "hhf.m"
            MR_Word hlds__hhf__Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
#line 238 "hhf.m"
            MR_Word hlds__hhf__Unif_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 3)));
#line 238 "hhf.m"
            MR_Word hlds__hhf__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hhf__GoalExpr0_9, (MR_Integer) 4)));

#line 239 "hhf.m"
            {
#line 239 "hhf.m"
              hlds__hhf__convert_unify_to_hhf_10_p_0(hlds__hhf__RHS_13, hlds__hhf__NonLocals_7, hlds__hhf__GoalInfo_8, hlds__hhf__Var_12, hlds__hhf__Mode_14, hlds__hhf__Unif_15, hlds__hhf__Context_16, hlds__hhf__GoalExpr_10, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
#line 239 "hhf.m"
              return;
            }
#line 238 "hhf.m"
          }
#line 238 "hhf.m"
        else
#line 238 "hhf.m"
          if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 248 "hhf.m"
            {
#line 249 "hhf.m"
              *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
#line 248 "hhf.m"
              *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
#line 248 "hhf.m"
            }
#line 238 "hhf.m"
          else
#line 238 "hhf.m"
            if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 251 "hhf.m"
              {
#line 251 "hhf.m"
                MR_Word hlds__hhf__TypeCtorInfo_87_87;
#line 251 "hhf.m"
                MR_Word hlds__hhf__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
#line 251 "hhf.m"
                MR_Word hlds__hhf__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
#line 251 "hhf.m"
                MR_Word hlds__hhf__Goals1_37;
#line 251 "hhf.m"
                MR_Word hlds__hhf__Goals_38;
#line 251 "hhf.m"
                MR_Word hlds__hhf__V_76_76;
#line 252 "hhf.m"
                MR_Box hlds__hhf__conv2_STATE_VARIABLE_HI_62;

#line 252 "hhf.m"
                {
#line 252 "hhf.m"
                  hlds__hhf__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 252 "hhf.m"
                  MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[2]));
#line 252 "hhf.m"
                  MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 1) = ((MR_Box) (hlds__hhf__convert_goal_expr_to_hhf_6_p_0_1));
#line 252 "hhf.m"
                  MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 252 "hhf.m"
                  MR_hl_field(MR_mktag(0), hlds__hhf__V_76_76, 3) = ((MR_Box) (hlds__hhf__NonLocals_7));
#line 252 "hhf.m"
                }
#line 3742 "hlds.hhf.c"
                hlds__hhf__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 252 "hhf.m"
                {
#line 252 "hhf.m"
                  mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_87_87, hlds__hhf__TypeCtorInfo_87_87, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_76_76, hlds__hhf__Goals0_36, &hlds__hhf__Goals1_37, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_61)), &hlds__hhf__conv2_STATE_VARIABLE_HI_62);
                }
#line 252 "hhf.m"
                *hlds__hhf__STATE_VARIABLE_HI_62 = ((MR_Word) hlds__hhf__conv2_STATE_VARIABLE_HI_62);
#line 256 "hhf.m"
                if ((hlds__hhf__ConjType_35 == (MR_Integer) 1))
#line 258 "hhf.m"
                  hlds__hhf__Goals_38 = hlds__hhf__Goals1_37;
#line 256 "hhf.m"
                else
#line 255 "hhf.m"
                  {
#line 255 "hhf.m"
                    hlds__goal_util__flatten_conj_2_p_0(hlds__hhf__Goals1_37, &hlds__hhf__Goals_38);
                  }
#line 260 "hhf.m"
                {
#line 260 "hhf.m"
                  MR_Word base;
#line 260 "hhf.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 260 "hhf.m"
                  *hlds__hhf__GoalExpr_10 = base;
#line 260 "hhf.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 260 "hhf.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__ConjType_35));
#line 260 "hhf.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__Goals_38));
#line 260 "hhf.m"
                }
#line 251 "hhf.m"
              }
#line 238 "hhf.m"
            else
#line 238 "hhf.m"
              if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 262 "hhf.m"
                {
#line 262 "hhf.m"
                  MR_Word hlds__hhf__TypeCtorInfo_93_93 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 262 "hhf.m"
                  MR_Word hlds__hhf__Goals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
#line 262 "hhf.m"
                  MR_Word hlds__hhf__Goals_80;
#line 263 "hhf.m"
                  MR_Box hlds__hhf__conv5_STATE_VARIABLE_HI_62;

#line 263 "hhf.m"
                  {
#line 263 "hhf.m"
                    mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_93_93, hlds__hhf__TypeCtorInfo_93_93, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, (MR_Word) &hlds__hhf_scalar_common_2[1], hlds__hhf__Goals0_79, &hlds__hhf__Goals_80, ((MR_Box) (hlds__hhf__STATE_VARIABLE_HI_0_61)), &hlds__hhf__conv5_STATE_VARIABLE_HI_62);
                  }
#line 263 "hhf.m"
                  *hlds__hhf__STATE_VARIABLE_HI_62 = ((MR_Word) hlds__hhf__conv5_STATE_VARIABLE_HI_62);
#line 264 "hhf.m"
                  {
#line 264 "hhf.m"
                    MR_Word base;
#line 264 "hhf.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "hhf.m"
                    *hlds__hhf__GoalExpr_10 = base;
#line 264 "hhf.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 264 "hhf.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Goals_80));
#line 264 "hhf.m"
                  }
#line 262 "hhf.m"
                }
#line 238 "hhf.m"
              else
#line 238 "hhf.m"
                if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 245 "hhf.m"
                  {
#line 246 "hhf.m"
                    *hlds__hhf__GoalExpr_10 = hlds__hhf__GoalExpr0_9;
#line 245 "hhf.m"
                    *hlds__hhf__STATE_VARIABLE_HI_62 = hlds__hhf__STATE_VARIABLE_HI_0_61;
#line 245 "hhf.m"
                  }
#line 238 "hhf.m"
                else
#line 238 "hhf.m"
                  if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 277 "hhf.m"
                    {
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Vs_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Cond0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Then0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 3)));
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Else0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 4)));
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Cond_49;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ThenExpr0_50;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ThenInfo_51;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ThenNonLocals_52;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ThenExpr_53;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Then_54;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ElseExpr0_55;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ElseInfo_56;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ElseNonLocals_57;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__ElseExpr_58;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__Else_59;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__STATE_VARIABLE_HI_66_66;
#line 277 "hhf.m"
                      MR_Word hlds__hhf__STATE_VARIABLE_HI_67_67;

#line 278 "hhf.m"
                      {
#line 278 "hhf.m"
                        hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__Cond0_46, &hlds__hhf__Cond_49, hlds__hhf__STATE_VARIABLE_HI_0_61, &hlds__hhf__STATE_VARIABLE_HI_66_66);
                      }
#line 279 "hhf.m"
                      hlds__hhf__ThenExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Then0_47, (MR_Integer) 0)));
#line 279 "hhf.m"
                      hlds__hhf__ThenInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Then0_47, (MR_Integer) 1)));
#line 280 "hhf.m"
                      {
#line 280 "hhf.m"
                        hlds__hhf__ThenNonLocals_52 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__ThenInfo_51);
                      }
#line 281 "hhf.m"
                      {
#line 281 "hhf.m"
                        hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__ThenNonLocals_52, hlds__hhf__ThenInfo_51, hlds__hhf__ThenExpr0_50, &hlds__hhf__ThenExpr_53, hlds__hhf__STATE_VARIABLE_HI_66_66, &hlds__hhf__STATE_VARIABLE_HI_67_67);
                      }
#line 283 "hhf.m"
                      {
#line 283 "hhf.m"
                        hlds__hhf__Then_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "hhf.m"
                        MR_hl_field(MR_mktag(0), hlds__hhf__Then_54, 0) = ((MR_Box) (hlds__hhf__ThenExpr_53));
#line 283 "hhf.m"
                        MR_hl_field(MR_mktag(0), hlds__hhf__Then_54, 1) = ((MR_Box) (hlds__hhf__ThenInfo_51));
#line 283 "hhf.m"
                      }
#line 284 "hhf.m"
                      hlds__hhf__ElseExpr0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Else0_48, (MR_Integer) 0)));
#line 284 "hhf.m"
                      hlds__hhf__ElseInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Else0_48, (MR_Integer) 1)));
#line 285 "hhf.m"
                      {
#line 285 "hhf.m"
                        hlds__hhf__ElseNonLocals_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__ElseInfo_56);
                      }
#line 286 "hhf.m"
                      {
#line 286 "hhf.m"
                        hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__ElseNonLocals_57, hlds__hhf__ElseInfo_56, hlds__hhf__ElseExpr0_55, &hlds__hhf__ElseExpr_58, hlds__hhf__STATE_VARIABLE_HI_67_67, hlds__hhf__STATE_VARIABLE_HI_62);
                      }
#line 288 "hhf.m"
                      {
#line 288 "hhf.m"
                        hlds__hhf__Else_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "hhf.m"
                        MR_hl_field(MR_mktag(0), hlds__hhf__Else_59, 0) = ((MR_Box) (hlds__hhf__ElseExpr_58));
#line 288 "hhf.m"
                        MR_hl_field(MR_mktag(0), hlds__hhf__Else_59, 1) = ((MR_Box) (hlds__hhf__ElseInfo_56));
#line 288 "hhf.m"
                      }
#line 289 "hhf.m"
                      {
#line 289 "hhf.m"
                        MR_Word base;
#line 289 "hhf.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 289 "hhf.m"
                        *hlds__hhf__GoalExpr_10 = base;
#line 289 "hhf.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 289 "hhf.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Vs_45));
#line 289 "hhf.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__Cond_49));
#line 289 "hhf.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__hhf__Then_54));
#line 289 "hhf.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__hhf__Else_59));
#line 289 "hhf.m"
                      }
#line 277 "hhf.m"
                    }
#line 238 "hhf.m"
                  else
#line 238 "hhf.m"
                    if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 269 "hhf.m"
                      {
#line 269 "hhf.m"
                        MR_Word hlds__hhf__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 1)));
#line 269 "hhf.m"
                        MR_Word hlds__hhf__SubGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 2)));
#line 269 "hhf.m"
                        MR_Word hlds__hhf__SubGoal_44;

#line 270 "hhf.m"
                        {
#line 270 "hhf.m"
                          hlds__hhf__convert_goal_to_hhf_5_p_0(hlds__hhf__NonLocals_7, hlds__hhf__SubGoal0_43, &hlds__hhf__SubGoal_44, hlds__hhf__STATE_VARIABLE_HI_0_61, hlds__hhf__STATE_VARIABLE_HI_62);
                        }
#line 271 "hhf.m"
                        {
#line 271 "hhf.m"
                          MR_Word base;
#line 271 "hhf.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 271 "hhf.m"
                          *hlds__hhf__GoalExpr_10 = base;
#line 271 "hhf.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 271 "hhf.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__hhf__Reason_42));
#line 271 "hhf.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__hhf__SubGoal_44));
#line 271 "hhf.m"
                        }
#line 269 "hhf.m"
                      }
#line 238 "hhf.m"
                    else
#line 238 "hhf.m"
                      if (((((MR_tag((MR_Word) hlds__hhf__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hhf__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 291 "hhf.m"
                        {
#line 292 "hhf.m"
                          {
#line 292 "hhf.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "shorthand");
#line 292 "hhf.m"
                            return;
                          }
#line 291 "hhf.m"
                        }
#line 238 "hhf.m"
                      else
#line 266 "hhf.m"
                        {
#line 267 "hhf.m"
                          {
#line 267 "hhf.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.hhf", (MR_String) "predicate \140hlds.hhf.convert_goal_expr_to_hhf\'/6", (MR_String) "switch");
#line 267 "hhf.m"
                            return;
                          }
#line 266 "hhf.m"
                        }
#line 238 "hhf.m"
  }
#line 232 "hhf.m"
}

#line 223 "hhf.m"
static void MR_CALL 
hlds__hhf__goal_use_own_nonlocals_4_p_0(
#line 223 "hhf.m"
  MR_Word hlds__hhf__Goal0_5,
#line 223 "hhf.m"
  MR_Word * hlds__hhf__Goal_6,
#line 223 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_12,
#line 223 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_13)
#line 223 "hhf.m"
{
#line 226 "hhf.m"
  {
#line 226 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 226 "hhf.m"
    MR_Word hlds__hhf__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_5, (MR_Integer) 0)));
#line 226 "hhf.m"
    MR_Word hlds__hhf__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_5, (MR_Integer) 1)));
#line 226 "hhf.m"
    MR_Word hlds__hhf__NonLocals_10;
#line 226 "hhf.m"
    MR_Word hlds__hhf__GoalExpr_11;

#line 228 "hhf.m"
    {
#line 228 "hhf.m"
      hlds__hhf__NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hhf__GoalInfo_9);
    }
#line 229 "hhf.m"
    {
#line 229 "hhf.m"
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_10, hlds__hhf__GoalInfo_9, hlds__hhf__GoalExpr0_8, &hlds__hhf__GoalExpr_11, hlds__hhf__STATE_VARIABLE_HI_0_12, hlds__hhf__STATE_VARIABLE_HI_13);
    }
#line 230 "hhf.m"
    {
#line 230 "hhf.m"
      MR_Word base;
#line 230 "hhf.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "hhf.m"
      *hlds__hhf__Goal_6 = base;
#line 230 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__GoalExpr_11));
#line 230 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__GoalInfo_9));
#line 230 "hhf.m"
    }
#line 226 "hhf.m"
  }
#line 223 "hhf.m"
}

#line 215 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_goal_to_hhf_5_p_0(
#line 215 "hhf.m"
  MR_Word hlds__hhf__NonLocals_6,
#line 215 "hhf.m"
  MR_Word hlds__hhf__Goal0_7,
#line 215 "hhf.m"
  MR_Word * hlds__hhf__Goal_8,
#line 215 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_13,
#line 215 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_14)
#line 215 "hhf.m"
{
#line 218 "hhf.m"
  {
#line 218 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 218 "hhf.m"
    MR_Word hlds__hhf__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_7, (MR_Integer) 0)));
#line 218 "hhf.m"
    MR_Word hlds__hhf__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Goal0_7, (MR_Integer) 1)));
#line 218 "hhf.m"
    MR_Word hlds__hhf__GoalExpr_12;

#line 220 "hhf.m"
    {
#line 220 "hhf.m"
      hlds__hhf__convert_goal_expr_to_hhf_6_p_0(hlds__hhf__NonLocals_6, hlds__hhf__GoalInfo_11, hlds__hhf__GoalExpr0_10, &hlds__hhf__GoalExpr_12, hlds__hhf__STATE_VARIABLE_HI_0_13, hlds__hhf__STATE_VARIABLE_HI_14);
    }
#line 221 "hhf.m"
    {
#line 221 "hhf.m"
      MR_Word base;
#line 221 "hhf.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "hhf.m"
      *hlds__hhf__Goal_8 = base;
#line 221 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hhf__GoalExpr_12));
#line 221 "hhf.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hhf__GoalInfo_11));
#line 221 "hhf.m"
    }
#line 218 "hhf.m"
  }
#line 215 "hhf.m"
}

#line 195 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clause_to_hhf_5_p_0(
#line 195 "hhf.m"
  MR_Word hlds__hhf___HeadVars_6,
#line 195 "hhf.m"
  MR_Word hlds__hhf__Clause0_7,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__Clause_8,
#line 195 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_HI_0_15,
#line 195 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_HI_16)
#line 195 "hhf.m"
{
#line 198 "hhf.m"
  {
#line 198 "hhf.m"
    MR_bool hlds__hhf__succeeded;

#line 198 "hhf.m"
    {
#line 198 "hhf.m"
      hlds__hhf__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_108_97_117_115_101_95_116_111_95_104_104_102_95_95_91_49_93_95_48_5_p_0(hlds__hhf__Clause0_7, hlds__hhf__Clause_8, hlds__hhf__STATE_VARIABLE_HI_0_15, hlds__hhf__STATE_VARIABLE_HI_16);
#line 198 "hhf.m"
      return;
    }
#line 198 "hhf.m"
  }
#line 195 "hhf.m"
}

#line 395 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2(
#line 395 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 395 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 395 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_2,
#line 395 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_3)
#line 395 "hhf.m"
{
#line 395 "hhf.m"
  {
#line 395 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 395 "hhf.m"
    MR_Word hlds__hhf__conv3_STATE_VARIABLE_HI_20;

#line 395 "hhf.m"
    {
#line 395 "hhf.m"
      hlds__hhf__complete_inst_graph_node_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), ((MR_Word) hlds__hhf__wrapper_arg_1), ((MR_Word) hlds__hhf__wrapper_arg_2), &hlds__hhf__conv3_STATE_VARIABLE_HI_20);
    }
#line 395 "hhf.m"
    *hlds__hhf__wrapper_arg_3 = ((MR_Box) (hlds__hhf__conv3_STATE_VARIABLE_HI_20));
#line 395 "hhf.m"
  }
#line 395 "hhf.m"
}

#line 159 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1(
#line 159 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 159 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_1,
#line 159 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_2,
#line 159 "hhf.m"
  MR_Box hlds__hhf__wrapper_arg_3,
#line 159 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_4)
#line 159 "hhf.m"
{
#line 159 "hhf.m"
  {
#line 159 "hhf.m"
    MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;
#line 159 "hhf.m"
    MR_Word hlds__hhf__conv1_Clause_8;
#line 159 "hhf.m"
    MR_Word hlds__hhf__conv0_STATE_VARIABLE_HI_16;

#line 159 "hhf.m"
    {
#line 159 "hhf.m"
      hlds__hhf__convert_clause_to_hhf_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) hlds__hhf__wrapper_arg_1), &hlds__hhf__conv1_Clause_8, ((MR_Word) hlds__hhf__wrapper_arg_3), &hlds__hhf__conv0_STATE_VARIABLE_HI_16);
    }
#line 159 "hhf.m"
    *hlds__hhf__wrapper_arg_2 = ((MR_Box) (hlds__hhf__conv1_Clause_8));
#line 159 "hhf.m"
    *hlds__hhf__wrapper_arg_4 = ((MR_Box) (hlds__hhf__conv0_STATE_VARIABLE_HI_16));
#line 159 "hhf.m"
  }
#line 159 "hhf.m"
}

#line 36 "hhf.m"
void MR_CALL 
hlds__hhf__convert_clauses_info_to_hhf_5_p_0(
#line 36 "hhf.m"
  MR_Word hlds__hhf__Simple_6,
#line 36 "hhf.m"
  MR_Word hlds__hhf__ModuleInfo_7,
#line 36 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26,
#line 36 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_ClausesInfo_27,
#line 36 "hhf.m"
  MR_Word * hlds__hhf__InstGraph_9)
#line 36 "hhf.m"
{
#line 141 "hhf.m"
  {
#line 141 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 141 "hhf.m"
    MR_Word hlds__hhf__TypeCtorInfo_37_37;
#line 141 "hhf.m"
    MR_Word hlds__hhf__TypeInfo_14_49;
#line 141 "hhf.m"
    MR_Word hlds__hhf__VarSet0_10;
#line 141 "hhf.m"
    MR_Word hlds__hhf__VarTypes0_11;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Vars0_12;
#line 141 "hhf.m"
    MR_Word hlds__hhf__InstGraph0_13;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Info0_14;
#line 141 "hhf.m"
    MR_Word hlds__hhf__HeadVars_15;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Clauses0_16;
#line 141 "hhf.m"
    MR_Word hlds__hhf__ItemNumbers_17;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Clauses_18;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Info1_19;
#line 141 "hhf.m"
    MR_Word hlds__hhf__ClausesRep_20;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Info_21;
#line 141 "hhf.m"
    MR_Word hlds__hhf__InstGraph1_22;
#line 141 "hhf.m"
    MR_Word hlds__hhf__VarSet_23;
#line 141 "hhf.m"
    MR_Word hlds__hhf__VarTypes_24;
#line 141 "hhf.m"
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28;
#line 141 "hhf.m"
    MR_Word hlds__hhf__V_29_29;
#line 141 "hhf.m"
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30;
#line 141 "hhf.m"
    MR_Word hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31;
#line 141 "hhf.m"
    MR_Word hlds__hhf__InstGraph0_43;
#line 141 "hhf.m"
    MR_Word hlds__hhf__Vars_44;
#line 141 "hhf.m"
    MR_Word hlds__hhf__V_45_45;
#line 159 "hhf.m"
    MR_Box hlds__hhf__conv2_Info1_19;
#line 393 "hhf.m"
    MR_Word hlds__hhf__V_47_47;
#line 393 "hhf.m"
    MR_Word hlds__hhf__V_48_48;
#line 395 "hhf.m"
    MR_Box hlds__hhf__conv4_Info_21;

#line 142 "hhf.m"
    {
#line 142 "hhf.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__VarSet0_10);
    }
#line 143 "hhf.m"
    {
#line 143 "hhf.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__VarTypes0_11);
    }
#line 144 "hhf.m"
    {
#line 144 "hhf.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(hlds__hhf__VarTypes0_11, &hlds__hhf__Vars0_12);
    }
#line 145 "hhf.m"
    {
#line 145 "hhf.m"
      hlds__inst_graph__init_2_p_0(hlds__hhf__Vars0_12, &hlds__hhf__InstGraph0_13);
    }
#line 146 "hhf.m"
    {
#line 146 "hhf.m"
      hlds__hhf__Info0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 146 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 0) = ((MR_Box) (hlds__hhf__InstGraph0_13));
#line 146 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 1) = ((MR_Box) (hlds__hhf__VarSet0_10));
#line 146 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__Info0_14, 2) = ((MR_Box) (hlds__hhf__VarTypes0_11));
#line 146 "hhf.m"
    }
#line 148 "hhf.m"
    {
#line 148 "hhf.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__HeadVars_15);
    }
#line 149 "hhf.m"
    {
#line 149 "hhf.m"
      hlds__hlds_clauses__clauses_info_clauses_4_p_0(&hlds__hhf__Clauses0_16, &hlds__hhf__ItemNumbers_17, hlds__hhf__STATE_VARIABLE_ClausesInfo_0_26, &hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28);
    }
#line 159 "hhf.m"
    {
#line 159 "hhf.m"
      hlds__hhf__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 159 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[0]));
#line 159 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_1));
#line 159 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_29_29, 3) = ((MR_Box) (hlds__hhf__HeadVars_15));
#line 159 "hhf.m"
    }
#line 4354 "hlds.hhf.c"
    hlds__hhf__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 159 "hhf.m"
    {
#line 159 "hhf.m"
      mercury__list__map_foldl_5_p_0(hlds__hhf__TypeCtorInfo_37_37, hlds__hhf__TypeCtorInfo_37_37, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_29_29, hlds__hhf__Clauses0_16, &hlds__hhf__Clauses_18, ((MR_Box) (hlds__hhf__Info0_14)), &hlds__hhf__conv2_Info1_19);
    }
#line 159 "hhf.m"
    hlds__hhf__Info1_19 = ((MR_Word) hlds__hhf__conv2_Info1_19);
#line 163 "hhf.m"
    {
#line 163 "hhf.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(hlds__hhf__Clauses_18, &hlds__hhf__ClausesRep_20);
    }
#line 164 "hhf.m"
    {
#line 164 "hhf.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__hhf__ClausesRep_20, hlds__hhf__ItemNumbers_17, hlds__hhf__STATE_VARIABLE_ClausesInfo_28_28, &hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30);
    }
#line 393 "hhf.m"
    hlds__hhf__InstGraph0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 0)));
#line 393 "hhf.m"
    hlds__hhf__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 1)));
#line 393 "hhf.m"
    hlds__hhf__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info1_19, (MR_Integer) 2)));
#line 4379 "hlds.hhf.c"
    hlds__hhf__TypeInfo_14_49 = (MR_Word) &hlds__hhf_scalar_common_1[0];
#line 394 "hhf.m"
    {
#line 394 "hhf.m"
      mercury__map__keys_2_p_0(hlds__hhf__TypeInfo_14_49, (MR_Word) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0, hlds__hhf__InstGraph0_43, &hlds__hhf__Vars_44);
    }
#line 395 "hhf.m"
    {
#line 395 "hhf.m"
      hlds__hhf__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 395 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 0) = ((MR_Box) (&hlds__hhf_scalar_common_4[1]));
#line 395 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 1) = ((MR_Box) (hlds__hhf__convert_clauses_info_to_hhf_5_p_0_2));
#line 395 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 395 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 3) = ((MR_Box) (hlds__hhf__ModuleInfo_7));
#line 395 "hhf.m"
      MR_hl_field(MR_mktag(0), hlds__hhf__V_45_45, 4) = ((MR_Box) (hlds__hhf__Vars_44));
#line 395 "hhf.m"
    }
#line 395 "hhf.m"
    {
#line 395 "hhf.m"
      mercury__list__foldl_4_p_0(hlds__hhf__TypeInfo_14_49, (MR_Word) &hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0, hlds__hhf__V_45_45, hlds__hhf__Vars_44, ((MR_Box) (hlds__hhf__Info1_19)), &hlds__hhf__conv4_Info_21);
    }
#line 395 "hhf.m"
    hlds__hhf__Info_21 = ((MR_Word) hlds__hhf__conv4_Info_21);
#line 170 "hhf.m"
    hlds__hhf__InstGraph1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 0)));
#line 170 "hhf.m"
    hlds__hhf__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 1)));
#line 170 "hhf.m"
    hlds__hhf__VarTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__Info_21, (MR_Integer) 2)));
#line 175 "hhf.m"
    if ((hlds__hhf__Simple_6 == (MR_Integer) 0))
#line 177 "hhf.m"
      *hlds__hhf__InstGraph_9 = hlds__hhf__InstGraph1_22;
#line 175 "hhf.m"
    else
#line 172 "hhf.m"
      {
#line 172 "hhf.m"
        MR_Word hlds__hhf__Vars_25;

#line 173 "hhf.m"
        {
#line 173 "hhf.m"
          parse_tree__prog_data__vartypes_vars_2_p_0(hlds__hhf__VarTypes_24, &hlds__hhf__Vars_25);
        }
#line 174 "hhf.m"
        {
#line 174 "hhf.m"
          hlds__inst_graph__init_2_p_0(hlds__hhf__Vars_25, hlds__hhf__InstGraph_9);
        }
#line 172 "hhf.m"
      }
#line 185 "hhf.m"
    {
#line 185 "hhf.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(hlds__hhf__VarSet_23, hlds__hhf__STATE_VARIABLE_ClausesInfo_30_30, &hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31);
    }
#line 186 "hhf.m"
    {
#line 186 "hhf.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(hlds__hhf__VarTypes_24, hlds__hhf__STATE_VARIABLE_ClausesInfo_31_31, hlds__hhf__STATE_VARIABLE_ClausesInfo_27);
#line 186 "hhf.m"
      return;
    }
#line 141 "hhf.m"
  }
#line 36 "hhf.m"
}

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_1(
#line 98 "hhf.m"
  void * hlds__hhf__env_ptr_arg)
#line 98 "hhf.m"
{
#line 98 "hhf.m"
  {
#line 98 "hhf.m"
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s * hlds__hhf__env_ptr = (struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s *) hlds__hhf__env_ptr_arg;

#line 98 "hhf.m"
    *((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_HeadVar__3_40));
#line 98 "hhf.m"
    {
#line 98 "hhf.m"
      ((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont)((hlds__hhf__env_ptr)->hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr);
#line 98 "hhf.m"
      return;
    }
#line 98 "hhf.m"
  }
#line 98 "hhf.m"
}

#line 98 "hhf.m"
static void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0_2(
#line 98 "hhf.m"
  MR_Box hlds__hhf__closure_arg,
#line 98 "hhf.m"
  MR_Box * hlds__hhf__wrapper_arg_1,
#line 98 "hhf.m"
  MR_Cont hlds__hhf__cont,
#line 98 "hhf.m"
  void * hlds__hhf__cont_env_ptr)
#line 98 "hhf.m"
{
#line 98 "hhf.m"
  {
#line 98 "hhf.m"
    struct hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0_s hlds__hhf__env;

#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__wrapper_arg_1 = hlds__hhf__wrapper_arg_1;
#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont = hlds__hhf__cont;
#line 98 "hhf.m"
    (hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__cont_env_ptr = hlds__hhf__cont_env_ptr;
#line 98 "hhf.m"
    {
#line 98 "hhf.m"
      MR_Box hlds__hhf__closure = hlds__hhf__closure_arg;

#line 98 "hhf.m"
      {
#line 98 "hhf.m"
        hlds__hhf__IntroducedFrom__pred__convert_pred_to_hhf__98__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hhf__closure, (MR_Integer) 4))), &(hlds__hhf__env).hlds__hhf__convert_pred_to_hhf_6_p_0_2_env_0__conv0_HeadVar__3_40, hlds__hhf__convert_pred_to_hhf_6_p_0_1, &hlds__hhf__env);
      }
#line 98 "hhf.m"
    }
#line 98 "hhf.m"
  }
#line 98 "hhf.m"
}

#line 33 "hhf.m"
void MR_CALL 
hlds__hhf__convert_pred_to_hhf_6_p_0(
#line 33 "hhf.m"
  MR_Word hlds__hhf__Simple_7,
#line 33 "hhf.m"
  MR_Word hlds__hhf__PredId_8,
#line 33 "hhf.m"
  MR_Word hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25,
#line 33 "hhf.m"
  MR_Word * hlds__hhf__STATE_VARIABLE_ModuleInfo_26)
#line 33 "hhf.m"
{
#line 65 "hhf.m"
  {
#line 65 "hhf.m"
    MR_bool hlds__hhf__succeeded;
#line 65 "hhf.m"
    MR_Word hlds__hhf__PredInfo0_11;
#line 65 "hhf.m"
    MR_Word hlds__hhf__PredInfo_24;

#line 66 "hhf.m"
    {
#line 66 "hhf.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__PredId_8, &hlds__hhf__PredInfo0_11);
    }
#line 67 "hhf.m"
    {
#line 67 "hhf.m"
      hlds__hhf__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hhf__PredInfo0_11);
    }
#line 82 "hhf.m"
    if (hlds__hhf__succeeded)
#line 70 "hhf.m"
      {
#line 70 "hhf.m"
        MR_Word hlds__hhf__ClausesInfo_12;
#line 70 "hhf.m"
        MR_Word hlds__hhf__HeadVars_13;
#line 70 "hhf.m"
        MR_Word hlds__hhf__VarSet_14;
#line 70 "hhf.m"
        MR_Word hlds__hhf__InstGraph_16;
#line 70 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_29_29;
#line 70 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_30_30;
#line 70 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_31_31;
#line 70 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_32_32;
#line 70 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_33_33;

#line 70 "hhf.m"
        {
#line 70 "hhf.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__ClausesInfo_12);
        }
#line 71 "hhf.m"
        {
#line 71 "hhf.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__ClausesInfo_12, &hlds__hhf__HeadVars_13);
        }
#line 72 "hhf.m"
        {
#line 72 "hhf.m"
          hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__ClausesInfo_12, &hlds__hhf__VarSet_14);
        }
#line 74 "hhf.m"
        {
#line 74 "hhf.m"
          hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__STATE_VARIABLE_IG_29_29);
        }
#line 75 "hhf.m"
        {
#line 75 "hhf.m"
          hlds__inst_graph__init_2_p_0(hlds__hhf__HeadVars_13, &hlds__hhf__InstGraph_16);
        }
#line 76 "hhf.m"
        {
#line 76 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_30_30 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_29_29, hlds__hhf__InstGraph_16);
        }
#line 77 "hhf.m"
        {
#line 77 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_31_31 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_30_30, hlds__hhf__InstGraph_16);
        }
#line 78 "hhf.m"
        {
#line 78 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_32_32 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_31_31, hlds__hhf__HeadVars_13);
        }
#line 79 "hhf.m"
        {
#line 79 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_33_33 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_32_32, hlds__hhf__VarSet_14);
        }
#line 80 "hhf.m"
        {
#line 80 "hhf.m"
          hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(hlds__hhf__STATE_VARIABLE_IG_33_33, hlds__hhf__PredInfo0_11, &hlds__hhf__PredInfo_24);
        }
#line 70 "hhf.m"
      }
#line 82 "hhf.m"
    else
#line 84 "hhf.m"
      {
#line 84 "hhf.m"
        MR_Word hlds__hhf__ClausesInfo0_18;
#line 84 "hhf.m"
        MR_Word hlds__hhf__ImplementationInstGraph_19;
#line 84 "hhf.m"
        MR_Word hlds__hhf__PredInfo1_20;
#line 84 "hhf.m"
        MR_Word hlds__hhf__InterfaceVars_23;
#line 84 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_36_36;
#line 84 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_37_37;
#line 84 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_38_38;
#line 84 "hhf.m"
        MR_Word hlds__hhf__V_39_39;
#line 84 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_41_41;
#line 84 "hhf.m"
        MR_Word hlds__hhf__STATE_VARIABLE_IG_42_42;
#line 84 "hhf.m"
        MR_Word hlds__hhf__HeadVars_45;
#line 84 "hhf.m"
        MR_Word hlds__hhf__VarSet_46;
#line 84 "hhf.m"
        MR_Word hlds__hhf__ClausesInfo_49;

#line 83 "hhf.m"
        {
#line 83 "hhf.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Calculating HHF and inst graph for ", hlds__hhf__PredId_8, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25);
        }
#line 86 "hhf.m"
        {
#line 86 "hhf.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__hhf__PredInfo0_11, &hlds__hhf__ClausesInfo0_18);
        }
#line 87 "hhf.m"
        {
#line 87 "hhf.m"
          hlds__hhf__convert_clauses_info_to_hhf_5_p_0(hlds__hhf__Simple_7, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__ClausesInfo0_18, &hlds__hhf__ClausesInfo_49, &hlds__hhf__ImplementationInstGraph_19);
        }
#line 89 "hhf.m"
        {
#line 89 "hhf.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__hhf__ClausesInfo_49, hlds__hhf__PredInfo0_11, &hlds__hhf__PredInfo1_20);
        }
#line 91 "hhf.m"
        {
#line 91 "hhf.m"
          hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(hlds__hhf__PredInfo1_20, &hlds__hhf__STATE_VARIABLE_IG_36_36);
        }
#line 92 "hhf.m"
        {
#line 92 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_37_37 = hlds__inst_graph__f_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_36_36, hlds__hhf__ImplementationInstGraph_19);
        }
#line 95 "hhf.m"
        {
#line 95 "hhf.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(hlds__hhf__ClausesInfo_49, &hlds__hhf__HeadVars_45);
        }
#line 96 "hhf.m"
        {
#line 96 "hhf.m"
          hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__hhf__ClausesInfo_49, &hlds__hhf__VarSet_46);
        }
#line 97 "hhf.m"
        {
#line 97 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_38_38 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_105_110_115_116_95_103_114_97_112_104_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_37_37, hlds__hhf__ImplementationInstGraph_19);
        }
#line 98 "hhf.m"
        {
#line 98 "hhf.m"
          hlds__hhf__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 98 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 0) = ((MR_Box) (&hlds__hhf_scalar_common_3[0]));
#line 98 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 1) = ((MR_Box) (hlds__hhf__convert_pred_to_hhf_6_p_0_2));
#line 98 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 98 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 3) = ((MR_Box) (hlds__hhf__ImplementationInstGraph_19));
#line 98 "hhf.m"
          MR_hl_field(MR_mktag(0), hlds__hhf__V_39_39, 4) = ((MR_Box) (hlds__hhf__HeadVars_45));
#line 98 "hhf.m"
        }
#line 98 "hhf.m"
        {
#line 98 "hhf.m"
          mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hhf_scalar_common_1[0], hlds__hhf__V_39_39, &hlds__hhf__InterfaceVars_23);
        }
#line 104 "hhf.m"
        {
#line 104 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_41_41 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_38_38, hlds__hhf__InterfaceVars_23);
        }
#line 105 "hhf.m"
        {
#line 105 "hhf.m"
          hlds__hhf__STATE_VARIABLE_IG_42_42 = hlds__inst_graph__f_105_110_116_101_114_102_97_99_101_95_118_97_114_115_101_116_32_58_61_2_f_0(hlds__hhf__STATE_VARIABLE_IG_41_41, hlds__hhf__VarSet_46);
        }
#line 107 "hhf.m"
        {
#line 107 "hhf.m"
          hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(hlds__hhf__STATE_VARIABLE_IG_42_42, hlds__hhf__PredInfo1_20, &hlds__hhf__PredInfo_24);
        }
#line 84 "hhf.m"
      }
#line 139 "hhf.m"
    {
#line 139 "hhf.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__hhf__PredId_8, hlds__hhf__PredInfo_24, hlds__hhf__STATE_VARIABLE_ModuleInfo_0_25, hlds__hhf__STATE_VARIABLE_ModuleInfo_26);
#line 139 "hhf.m"
      return;
    }
#line 65 "hhf.m"
  }
#line 33 "hhf.m"
}

void mercury__hlds__hhf__init(void)
{
}

void mercury__hlds__hhf__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hhf__hlds__hhf__type_ctor_info_hhf_info_0);
}

void mercury__hlds__hhf__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hhf. */
