/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module transform_hlds.inlining. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__inlining__init
ENDINIT
*/

#include "transform_hlds.inlining.mih"


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
#include "int.mih"
#include "integer.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.purity.mih"
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
#include "hlds.quantification.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 631 "inlining.m"
struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s {
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14;
#line 638 "inlining.m"
  MR_bool transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded;
#line 719 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81;
#line 719 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73;
#line 719 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75;
#line 724 "inlining.m"
  jmp_buf transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0;
#line 724 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77;
#line 724 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80;
#line 724 "inlining.m"
  MR_Box transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80;
#line 631 "inlining.m"
};


#line 175 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 178 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 181 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 184 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 187 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 196 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 199 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16];

#line 202 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16];

#line 205 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16];

#line 208 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

#line 211 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

#line 214 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

#line 217 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

#line 220 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

#line 223 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[8];

#line 226 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[8];

#line 229 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[8];

#line 232 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

#line 235 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

#line 238 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

#line 241 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

#line 244 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

#line 247 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 250 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 252 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 255 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 258 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 260 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 262 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 265 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 268 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 270 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 273 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 276 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 278 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 280 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 929 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_10,
#line 929 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_11,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_12,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_13,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_15,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_17,
#line 929 "inlining.m"
  MR_Word * transform_hlds__inlining__UserReq_18);

#line 184 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 184 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 184 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 405 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 405 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 405 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 906 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 906 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 906 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 906 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 906 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 894 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 894 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 894 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 894 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 894 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 882 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 882 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 882 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 882 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 882 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 872 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 872 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 872 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 872 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 872 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 730 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 730 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 730 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 631 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 631 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61);

#line 559 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 559 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 559 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 559 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 559 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56);

#line 460 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55,
#line 460 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56);

#line 374 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 374 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 346 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 346 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 269 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 269 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);

#line 256 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 256 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6);


static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[1][3];




static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 584 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 592 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 600 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 608 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 616 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 624 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 632 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 641 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 649 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 669 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16] = {
  (MR_String) "i_var_threshold",
  (MR_String) "i_highlevel_code",
  (MR_String) "i_exec_trace",
  (MR_String) "i_inlined_procs",
  (MR_String) "i_module_info",
  (MR_String) "i_univ_caller_tvars",
  (MR_String) "i_pred_markers",
  (MR_String) "i_prog_varset",
  (MR_String) "i_vartypes",
  (MR_String) "i_tvarset",
  (MR_String) "i_rtti_varmaps",
  (MR_String) "i_done_any_inlining",
  (MR_String) "i_inlined_parallel",
  (MR_String) "i_need_requant",
  (MR_String) "i_changed_detism",
  (MR_String) "i_changed_purity"
};

#line 689 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 773 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 = {
  (MR_String) "inline_info",
  (MR_Integer) 16,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0,
  NULL
};

#line 788 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 793 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0
  }
};

#line 802 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 807 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = {
  (MR_Integer) 0
};

#line 812 "transform_hlds.inlining.c"
const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_info_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_info_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_info",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0
};

#line 829 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 841 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[8] = {
  (MR_String) "simple",
  (MR_String) "single_use",
  (MR_String) "call_cost",
  (MR_String) "compound_size_threshold",
  (MR_String) "simple_goal_threshold",
  (MR_String) "var_threshold",
  (MR_String) "highlevel_code",
  (MR_String) "any_tracing"
};

#line 853 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 897 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 = {
  (MR_String) "params",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0,
  NULL
};

#line 912 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 917 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0
  }
};

#line 926 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 931 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = {
  (MR_Integer) 0
};

#line 936 "transform_hlds.inlining.c"
const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_params_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_params_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_params",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0
};

#line 953 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 956 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 958 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 960 "transform_hlds.inlining.c"
{
#line 962 "transform_hlds.inlining.c"
  {
#line 964 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 967 "transform_hlds.inlining.c"
    {
#line 969 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 972 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 974 "transform_hlds.inlining.c"
  }
#line 976 "transform_hlds.inlining.c"
}

#line 979 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 982 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 984 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 986 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 988 "transform_hlds.inlining.c"
{
#line 990 "transform_hlds.inlining.c"
  {
#line 992 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 995 "transform_hlds.inlining.c"
    {
#line 997 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_info_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 1000 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 1002 "transform_hlds.inlining.c"
  }
#line 1004 "transform_hlds.inlining.c"
}

#line 1007 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 1010 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 1012 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 1014 "transform_hlds.inlining.c"
{
#line 1016 "transform_hlds.inlining.c"
  {
#line 1018 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 1021 "transform_hlds.inlining.c"
    {
#line 1023 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 1026 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 1028 "transform_hlds.inlining.c"
  }
#line 1030 "transform_hlds.inlining.c"
}

#line 1033 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 1036 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 1038 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 1040 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 1042 "transform_hlds.inlining.c"
{
#line 1044 "transform_hlds.inlining.c"
  {
#line 1046 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 1049 "transform_hlds.inlining.c"
    {
#line 1051 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_params_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 1054 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 1056 "transform_hlds.inlining.c"
  }
#line 1058 "transform_hlds.inlining.c"
}

#line 929 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_10,
#line 929 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_11,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_12,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_13,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_15,
#line 929 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_17,
#line 929 "inlining.m"
  MR_Word * transform_hlds__inlining__UserReq_18)
#line 929 "inlining.m"
{
#line 934 "inlining.m"
  {
#line 934 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_12 == (MR_Integer) 2);
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_20;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__Markers_21;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_33;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_34;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_35;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_39;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_49;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__Target_50;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__V_61_61;
#line 934 "inlining.m"
    MR_Word transform_hlds__inlining__V_68_68;
#line 977 "inlining.m"
    MR_Integer transform_hlds__inlining__V_67_67;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__Detism_48;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_63_63;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_47_47;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_40_40;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_41_41;
#line 1009 "inlining.m"
    MR_Integer transform_hlds__inlining__V_42_42;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_43_43;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_44_44;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_45_45;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_46_46;
#line 1039 "inlining.m"
    MR_Word transform_hlds__inlining__ForeignAttributes_51;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_64_64;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_58_58;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_52_52;
#line 1017 "inlining.m"
    MR_Integer transform_hlds__inlining__V_53_53;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_54_54;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_55_55;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_56_56;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_57_57;
#line 941 "inlining.m"
    MR_Word transform_hlds__inlining__V_22_22;

#line 934 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
      {
#line 968 "inlining.m"
        {
#line 968 "inlining.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, &transform_hlds__inlining__PredInfo_33, &transform_hlds__inlining__ProcInfo_34);
        }
#line 972 "inlining.m"
        {
#line 972 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
        }
#line 972 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 934 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
          {
#line 977 "inlining.m"
            {
#line 977 "inlining.m"
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
            }
#line 977 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 977 "inlining.m"
              {
#line 978 "inlining.m"
                {
#line 978 "inlining.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_67_67);
                }
#line 978 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_11 == transform_hlds__inlining__V_67_67);
#line 977 "inlining.m"
              }
#line 976 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 934 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
              {
#line 985 "inlining.m"
                transform_hlds__inlining__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "inlining.m"
                {
#line 985 "inlining.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__V_68_68);
                }
#line 985 "inlining.m"
                {
#line 985 "inlining.m"
                  transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__inlining__V_61_61, transform_hlds__inlining__V_68_68);
                }
#line 934 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
                  {
#line 988 "inlining.m"
                    {
#line 988 "inlining.m"
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_33);
                    }
#line 988 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 934 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
                      {
#line 993 "inlining.m"
                        {
#line 993 "inlining.m"
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__MaybeComplexityProcMap_35);
                        }
#line 997 "inlining.m"
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 997 "inlining.m"
                        else
#line 998 "inlining.m"
                          {
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__ComplexityProcMap_37;
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__IsInComplexityMap_38;
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_35, (MR_Integer) 0)));
#line 998 "inlining.m"
                            MR_Integer transform_hlds__inlining__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 0)));

#line 998 "inlining.m"
                            transform_hlds__inlining__ComplexityProcMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 1)));
#line 999 "inlining.m"
                            {
#line 999 "inlining.m"
                              transform_hlds__inlining__IsInComplexityMap_38 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_37, transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11);
                            }
#line 1001 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "inlining.m"
                          }
#line 934 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
                          {
#line 1006 "inlining.m"
                            {
#line 1006 "inlining.m"
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__CalledGoal_39);
                            }
#line 1008 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_13 == (MR_Integer) 0);
#line 1008 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1008 "inlining.m"
                              {
#line 1009 "inlining.m"
                                transform_hlds__inlining__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 0)));
#line 1009 "inlining.m"
                                transform_hlds__inlining__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 1)));
#line 1009 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_63_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1009 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1009 "inlining.m"
                                  {
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 1)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 2)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 3)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 4)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 5)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 6)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_63_63, (MR_Integer) 7)));
#line 1010 "inlining.m"
                                    {
#line 1010 "inlining.m"
                                      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__Detism_48);
                                    }
#line 1011 "inlining.m"
#line 1011 "inlining.m"
                                    switch (transform_hlds__inlining__Detism_48) {
#line 1011 "inlining.m"
                                      default:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_FALSE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                      case (MR_Integer) 2:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                      case (MR_Integer) 3:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                    }
#line 1009 "inlining.m"
                                  }
#line 1008 "inlining.m"
                              }
#line 1007 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 934 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
                              {
#line 1014 "inlining.m"
                                {
#line 1014 "inlining.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__Globals_49);
                                }
#line 1015 "inlining.m"
                                {
#line 1015 "inlining.m"
                                  libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_49, &transform_hlds__inlining__Target_50);
                                }
#line 1017 "inlining.m"
                                transform_hlds__inlining__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 0)));
#line 1017 "inlining.m"
                                transform_hlds__inlining__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 1)));
#line 1017 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1017 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1017 "inlining.m"
                                  {
#line 1017 "inlining.m"
                                    transform_hlds__inlining__ForeignAttributes_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 1)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 2)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 3)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 4)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 5)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 6)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_64_64, (MR_Integer) 7)));
#line 1026 "inlining.m"
                                    {
#line 1024 "inlining.m"
                                      MR_Word transform_hlds__inlining__ForeignLanguage_59;
#line 1032 "inlining.m"
                                      MR_Word transform_hlds__inlining__MaybeMayDuplicate_60;

#line 1023 "inlining.m"
                                      {
#line 1023 "inlining.m"
                                        transform_hlds__inlining__ForeignLanguage_59 = parse_tree__prog_data__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_51);
                                      }
#line 1062 "inlining.m"
#line 1062 "inlining.m"
                                      switch (transform_hlds__inlining__ForeignLanguage_59) {
#line 1062 "inlining.m"
                                        default:
#line 1062 "inlining.m"
                                          transform_hlds__inlining__succeeded = MR_FALSE;
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 0:
#line 1062 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 0);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 1:
#line 1065 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 2);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 4:
#line 1063 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 4);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 2:
#line 1064 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 3);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                      }
#line 1024 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1024 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1026 "inlining.m"
                                      if (transform_hlds__inlining__succeeded)
#line 1026 "inlining.m"
                                        {
#line 1031 "inlining.m"
                                          {
#line 1031 "inlining.m"
                                            transform_hlds__inlining__MaybeMayDuplicate_60 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_51);
                                          }
#line 1035 "inlining.m"
                                          if ((transform_hlds__inlining__MaybeMayDuplicate_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "inlining.m"
                                            transform_hlds__inlining__succeeded = MR_TRUE;
#line 1035 "inlining.m"
                                          else
#line 1036 "inlining.m"
                                            {
#line 1036 "inlining.m"
                                              MR_Word transform_hlds__inlining__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_60, (MR_Integer) 0)));

#line 1036 "inlining.m"
                                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_65_65 == (MR_Integer) 0);
#line 1036 "inlining.m"
                                            }
#line 1032 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1032 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1026 "inlining.m"
                                        }
#line 1026 "inlining.m"
                                    }
#line 1017 "inlining.m"
                                  }
#line 1017 "inlining.m"
                                else
#line 1040 "inlining.m"
                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 934 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 934 "inlining.m"
                                  {
#line 939 "inlining.m"
                                    {
#line 939 "inlining.m"
                                      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, &transform_hlds__inlining__PredInfo_20);
                                    }
#line 940 "inlining.m"
                                    {
#line 940 "inlining.m"
                                      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__PredInfo_20, &transform_hlds__inlining__Markers_21);
                                    }
#line 941 "inlining.m"
                                    transform_hlds__inlining__V_22_22 = (MR_Integer) 6;
#line 941 "inlining.m"
                                    {
#line 941 "inlining.m"
                                      transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, transform_hlds__inlining__V_22_22);
                                    }
#line 943 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 942 "inlining.m"
                                      {
#line 942 "inlining.m"
                                        *transform_hlds__inlining__UserReq_18 = (MR_Integer) 1;
#line 942 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 942 "inlining.m"
                                      }
#line 943 "inlining.m"
                                    else
#line 949 "inlining.m"
                                      {
#line 944 "inlining.m"
                                        {
#line 944 "inlining.m"
                                          transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, (MR_Integer) 8);
                                        }
#line 945 "inlining.m"
                                        if (!(transform_hlds__inlining__succeeded))
#line 945 "inlining.m"
                                          {
#line 945 "inlining.m"
                                            MR_Word transform_hlds__inlining__V_23_23;

#line 945 "inlining.m"
                                            {
#line 945 "inlining.m"
                                              transform_hlds__inlining__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "inlining.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_10));
#line 945 "inlining.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_11));
#line 945 "inlining.m"
                                            }
#line 945 "inlining.m"
                                            {
#line 945 "inlining.m"
                                              transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__V_23_23)), transform_hlds__inlining__InlinedProcs_15);
                                            }
#line 945 "inlining.m"
                                          }
#line 949 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 949 "inlining.m"
                                          {
#line 948 "inlining.m"
                                            *transform_hlds__inlining__UserReq_18 = (MR_Integer) 0;
#line 948 "inlining.m"
                                            transform_hlds__inlining__succeeded = MR_TRUE;
#line 949 "inlining.m"
                                          }
#line 949 "inlining.m"
                                      }
#line 934 "inlining.m"
                                  }
#line 934 "inlining.m"
                              }
#line 934 "inlining.m"
                          }
#line 934 "inlining.m"
                      }
#line 934 "inlining.m"
                  }
#line 934 "inlining.m"
              }
#line 934 "inlining.m"
          }
#line 934 "inlining.m"
      }
#line 934 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 934 "inlining.m"
  }
#line 929 "inlining.m"
}

#line 143 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_p_0(
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_7,
#line 143 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_8,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_9,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_10,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_12)
#line 143 "inlining.m"
{
#line 954 "inlining.m"
  {
#line 954 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_13;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_14;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_23;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_24;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_25;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_29;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_39;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__Target_40;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__V_51_51;
#line 954 "inlining.m"
    MR_Word transform_hlds__inlining__V_58_58;
#line 977 "inlining.m"
    MR_Integer transform_hlds__inlining__V_57_57;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__Detism_38;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_53_53;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_30_30;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_31_31;
#line 1009 "inlining.m"
    MR_Integer transform_hlds__inlining__V_32_32;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_33_33;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_34_34;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_35_35;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 1039 "inlining.m"
    MR_Word transform_hlds__inlining__ForeignAttributes_41;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_54_54;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_48_48;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_42_42;
#line 1017 "inlining.m"
    MR_Integer transform_hlds__inlining__V_43_43;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_44_44;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_45_45;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_46_46;
#line 1017 "inlining.m"
    MR_Word transform_hlds__inlining__V_47_47;

#line 955 "inlining.m"
    {
#line 955 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__Globals_13);
    }
#line 956 "inlining.m"
    {
#line 956 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_13, (MR_Integer) 255, &transform_hlds__inlining__HighLevelCode_14);
    }
#line 967 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_9 == (MR_Integer) 2);
#line 954 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
      {
#line 968 "inlining.m"
        {
#line 968 "inlining.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_12, transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8, &transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__ProcInfo_24);
        }
#line 972 "inlining.m"
        {
#line 972 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
        }
#line 972 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 954 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
          {
#line 977 "inlining.m"
            {
#line 977 "inlining.m"
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
            }
#line 977 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 977 "inlining.m"
              {
#line 978 "inlining.m"
                {
#line 978 "inlining.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_57_57);
                }
#line 978 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_8 == transform_hlds__inlining__V_57_57);
#line 977 "inlining.m"
              }
#line 976 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 954 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
              {
#line 985 "inlining.m"
                transform_hlds__inlining__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "inlining.m"
                {
#line 985 "inlining.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__V_58_58);
                }
#line 985 "inlining.m"
                {
#line 985 "inlining.m"
                  transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__inlining__V_51_51, transform_hlds__inlining__V_58_58);
                }
#line 954 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
                  {
#line 988 "inlining.m"
                    {
#line 988 "inlining.m"
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_23);
                    }
#line 988 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 954 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
                      {
#line 993 "inlining.m"
                        {
#line 993 "inlining.m"
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__MaybeComplexityProcMap_25);
                        }
#line 997 "inlining.m"
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 997 "inlining.m"
                        else
#line 998 "inlining.m"
                          {
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__ComplexityProcMap_27;
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__IsInComplexityMap_28;
#line 998 "inlining.m"
                            MR_Word transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_25, (MR_Integer) 0)));
#line 998 "inlining.m"
                            MR_Integer transform_hlds__inlining__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_52_52, (MR_Integer) 0)));

#line 998 "inlining.m"
                            transform_hlds__inlining__ComplexityProcMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_52_52, (MR_Integer) 1)));
#line 999 "inlining.m"
                            {
#line 999 "inlining.m"
                              transform_hlds__inlining__IsInComplexityMap_28 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_27, transform_hlds__inlining__ModuleInfo_12, transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8);
                            }
#line 1001 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "inlining.m"
                          }
#line 954 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
                          {
#line 1006 "inlining.m"
                            {
#line 1006 "inlining.m"
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__CalledGoal_29);
                            }
#line 1008 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_14 == (MR_Integer) 0);
#line 1008 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1008 "inlining.m"
                              {
#line 1009 "inlining.m"
                                transform_hlds__inlining__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 0)));
#line 1009 "inlining.m"
                                transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 1)));
#line 1009 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1009 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1009 "inlining.m"
                                  {
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 1)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 2)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 3)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 4)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 5)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 6)));
#line 1009 "inlining.m"
                                    transform_hlds__inlining__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_53_53, (MR_Integer) 7)));
#line 1010 "inlining.m"
                                    {
#line 1010 "inlining.m"
                                      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__Detism_38);
                                    }
#line 1011 "inlining.m"
#line 1011 "inlining.m"
                                    switch (transform_hlds__inlining__Detism_38) {
#line 1011 "inlining.m"
                                      default:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_FALSE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                      case (MR_Integer) 2:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                      case (MR_Integer) 3:
#line 1011 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1011 "inlining.m"
                                        break;
#line 1011 "inlining.m"
                                    }
#line 1009 "inlining.m"
                                  }
#line 1008 "inlining.m"
                              }
#line 1007 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 954 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 954 "inlining.m"
                              {
#line 1014 "inlining.m"
                                {
#line 1014 "inlining.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__Globals_39);
                                }
#line 1015 "inlining.m"
                                {
#line 1015 "inlining.m"
                                  libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_39, &transform_hlds__inlining__Target_40);
                                }
#line 1017 "inlining.m"
                                transform_hlds__inlining__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 0)));
#line 1017 "inlining.m"
                                transform_hlds__inlining__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 1)));
#line 1017 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1017 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1017 "inlining.m"
                                  {
#line 1017 "inlining.m"
                                    transform_hlds__inlining__ForeignAttributes_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 1)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 2)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 3)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 4)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 5)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 6)));
#line 1017 "inlining.m"
                                    transform_hlds__inlining__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_54_54, (MR_Integer) 7)));
#line 1026 "inlining.m"
                                    {
#line 1024 "inlining.m"
                                      MR_Word transform_hlds__inlining__ForeignLanguage_49;
#line 1032 "inlining.m"
                                      MR_Word transform_hlds__inlining__MaybeMayDuplicate_50;

#line 1023 "inlining.m"
                                      {
#line 1023 "inlining.m"
                                        transform_hlds__inlining__ForeignLanguage_49 = parse_tree__prog_data__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_41);
                                      }
#line 1062 "inlining.m"
#line 1062 "inlining.m"
                                      switch (transform_hlds__inlining__ForeignLanguage_49) {
#line 1062 "inlining.m"
                                        default:
#line 1062 "inlining.m"
                                          transform_hlds__inlining__succeeded = MR_FALSE;
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 0:
#line 1062 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 0);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 1:
#line 1065 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 2);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 4:
#line 1063 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 4);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                        case (MR_Integer) 2:
#line 1064 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 3);
#line 1062 "inlining.m"
                                          break;
#line 1062 "inlining.m"
                                      }
#line 1024 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1024 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1026 "inlining.m"
                                      if (transform_hlds__inlining__succeeded)
#line 1026 "inlining.m"
                                        {
#line 1031 "inlining.m"
                                          {
#line 1031 "inlining.m"
                                            transform_hlds__inlining__MaybeMayDuplicate_50 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_41);
                                          }
#line 1035 "inlining.m"
                                          if ((transform_hlds__inlining__MaybeMayDuplicate_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "inlining.m"
                                            transform_hlds__inlining__succeeded = MR_TRUE;
#line 1035 "inlining.m"
                                          else
#line 1036 "inlining.m"
                                            {
#line 1036 "inlining.m"
                                              MR_Word transform_hlds__inlining__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_50, (MR_Integer) 0)));

#line 1036 "inlining.m"
                                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_55_55 == (MR_Integer) 0);
#line 1036 "inlining.m"
                                            }
#line 1032 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1032 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1026 "inlining.m"
                                        }
#line 1026 "inlining.m"
                                    }
#line 1017 "inlining.m"
                                  }
#line 1017 "inlining.m"
                                else
#line 1040 "inlining.m"
                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 954 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1045 "inlining.m"
#line 1045 "inlining.m"
                                  switch (transform_hlds__inlining__InlinePromisedPure_10) {
#line 1045 "inlining.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1045 "inlining.m"
                                    case (MR_Integer) 0:
#line 1050 "inlining.m"
                                      {
#line 1050 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_59_59;

#line 1051 "inlining.m"
                                        {
#line 1051 "inlining.m"
                                          hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__V_59_59);
                                        }
#line 1051 "inlining.m"
                                        transform_hlds__inlining__succeeded = ((MR_Integer) 2 == transform_hlds__inlining__V_59_59);
#line 1050 "inlining.m"
                                      }
#line 1045 "inlining.m"
                                      break;
#line 1045 "inlining.m"
                                    case (MR_Integer) 1:
#line 1044 "inlining.m"
                                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 1045 "inlining.m"
                                      break;
#line 1045 "inlining.m"
                                  }
#line 954 "inlining.m"
                              }
#line 954 "inlining.m"
                          }
#line 954 "inlining.m"
                      }
#line 954 "inlining.m"
                  }
#line 954 "inlining.m"
              }
#line 954 "inlining.m"
          }
#line 954 "inlining.m"
      }
#line 954 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 954 "inlining.m"
  }
#line 143 "inlining.m"
}

#line 184 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 184 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 184 "inlining.m"
{
#line 184 "inlining.m"
  {
#line 184 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 184 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_27 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 184 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_28 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 184 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_27 == transform_hlds__inlining__CastY_28);
#line 184 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 2024 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 184 "inlining.m"
    else
#line 184 "inlining.m"
      {
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20;
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_37_37 = (MR_Integer) transform_hlds__inlining__V_4_4;
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_38_38 = (MR_Integer) transform_hlds__inlining__V_12_12;

#line 184 "inlining.m"
        {
#line 184 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_20_20, transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_38_38);
        }
#line 2074 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 184 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_20_20;
#line 184 "inlining.m"
        else
#line 184 "inlining.m"
          {
#line 184 "inlining.m"
            MR_Word transform_hlds__inlining__V_21_21;
#line 184 "inlining.m"
            MR_Integer transform_hlds__inlining__V_39_39 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 184 "inlining.m"
            MR_Integer transform_hlds__inlining__V_40_40 = (MR_Integer) transform_hlds__inlining__V_13_13;

#line 184 "inlining.m"
            {
#line 184 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_21_21, transform_hlds__inlining__V_39_39, transform_hlds__inlining__V_40_40);
            }
#line 2098 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_21_21 == (MR_Integer) 0);
#line 184 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_21_21;
#line 184 "inlining.m"
            else
#line 184 "inlining.m"
              {
#line 184 "inlining.m"
                MR_Word transform_hlds__inlining__V_22_22;

#line 184 "inlining.m"
                {
#line 184 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_22_22, transform_hlds__inlining__V_6_6, transform_hlds__inlining__V_14_14);
                }
#line 2118 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_22_22 == (MR_Integer) 0);
#line 184 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_22_22;
#line 184 "inlining.m"
                else
#line 184 "inlining.m"
                  {
#line 184 "inlining.m"
                    MR_Word transform_hlds__inlining__V_23_23;

#line 184 "inlining.m"
                    {
#line 184 "inlining.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_23_23, transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_15_15);
                    }
#line 2138 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_23_23 == (MR_Integer) 0);
#line 184 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_23_23;
#line 184 "inlining.m"
                    else
#line 184 "inlining.m"
                      {
#line 184 "inlining.m"
                        MR_Word transform_hlds__inlining__V_24_24;

#line 184 "inlining.m"
                        {
#line 184 "inlining.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_24_24, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_16_16);
                        }
#line 2158 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_24_24 == (MR_Integer) 0);
#line 184 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_24_24;
#line 184 "inlining.m"
                        else
#line 184 "inlining.m"
                          {
#line 184 "inlining.m"
                            MR_Word transform_hlds__inlining__V_25_25;

#line 184 "inlining.m"
                            {
#line 184 "inlining.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_25_25, transform_hlds__inlining__V_9_9, transform_hlds__inlining__V_17_17);
                            }
#line 2178 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_25_25 == (MR_Integer) 0);
#line 184 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_25_25;
#line 184 "inlining.m"
                            else
#line 184 "inlining.m"
                              {
#line 184 "inlining.m"
                                MR_Word transform_hlds__inlining__V_26_26;
#line 184 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_41_41 = (MR_Integer) transform_hlds__inlining__V_10_10;
#line 184 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_42_42 = (MR_Integer) transform_hlds__inlining__V_18_18;

#line 184 "inlining.m"
                                {
#line 184 "inlining.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_26_26, transform_hlds__inlining__V_41_41, transform_hlds__inlining__V_42_42);
                                }
#line 2202 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_26_26 == (MR_Integer) 0);
#line 184 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 184 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_26_26;
#line 184 "inlining.m"
                                else
#line 184 "inlining.m"
                                  {
#line 184 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_43_43 = (MR_Integer) transform_hlds__inlining__V_11_11;
#line 184 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_44_44 = (MR_Integer) transform_hlds__inlining__V_19_19;

#line 184 "inlining.m"
                                    {
#line 184 "inlining.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_43_43, transform_hlds__inlining__V_44_44);
#line 184 "inlining.m"
                                      return;
                                    }
#line 184 "inlining.m"
                                  }
#line 184 "inlining.m"
                              }
#line 184 "inlining.m"
                          }
#line 184 "inlining.m"
                      }
#line 184 "inlining.m"
                  }
#line 184 "inlining.m"
              }
#line 184 "inlining.m"
          }
#line 184 "inlining.m"
      }
#line 184 "inlining.m"
  }
#line 184 "inlining.m"
}

#line 184 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 184 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 184 "inlining.m"
{
#line 184 "inlining.m"
  {
#line 184 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 184 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_19 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 184 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_20 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 184 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_19 == transform_hlds__inlining__CastY_20);
#line 184 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 184 "inlining.m"
    else
#line 184 "inlining.m"
      {
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 184 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 184 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 2308 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_11_11);
#line 184 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
          {
#line 2314 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_12_12);
#line 184 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
              {
#line 2320 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_13_13);
#line 184 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                  {
#line 2326 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_6_6 == transform_hlds__inlining__V_14_14);
#line 184 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                      {
#line 2332 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_7_7 == transform_hlds__inlining__V_15_15);
#line 184 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                          {
#line 2338 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == transform_hlds__inlining__V_16_16);
#line 184 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 184 "inlining.m"
                              {
#line 2344 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_9_9 == transform_hlds__inlining__V_17_17);
#line 184 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 2348 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_10_10 == transform_hlds__inlining__V_18_18);
#line 184 "inlining.m"
                              }
#line 184 "inlining.m"
                          }
#line 184 "inlining.m"
                      }
#line 184 "inlining.m"
                  }
#line 184 "inlining.m"
              }
#line 184 "inlining.m"
          }
#line 184 "inlining.m"
      }
#line 184 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 184 "inlining.m"
  }
#line 184 "inlining.m"
}

#line 405 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 405 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 405 "inlining.m"
{
#line 405 "inlining.m"
  {
#line 405 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 405 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_51 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 405 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_52 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 405 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_51 == transform_hlds__inlining__CastY_52);
#line 405 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 2395 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 405 "inlining.m"
    else
#line 405 "inlining.m"
      {
#line 405 "inlining.m"
        MR_Integer transform_hlds__inlining__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Integer transform_hlds__inlining__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 8)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 9)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_36_36;

#line 405 "inlining.m"
        {
#line 405 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_36_36, transform_hlds__inlining__V_4_4, transform_hlds__inlining__V_20_20);
        }
#line 2473 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_36_36 == (MR_Integer) 0);
#line 405 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_36_36;
#line 405 "inlining.m"
        else
#line 405 "inlining.m"
          {
#line 405 "inlining.m"
            MR_Word transform_hlds__inlining__V_37_37;
#line 405 "inlining.m"
            MR_Integer transform_hlds__inlining__V_69_69 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 405 "inlining.m"
            MR_Integer transform_hlds__inlining__V_70_70 = (MR_Integer) transform_hlds__inlining__V_21_21;

#line 405 "inlining.m"
            {
#line 405 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_69_69, transform_hlds__inlining__V_70_70);
            }
#line 2497 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_37_37 == (MR_Integer) 0);
#line 405 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_37_37;
#line 405 "inlining.m"
            else
#line 405 "inlining.m"
              {
#line 405 "inlining.m"
                MR_Word transform_hlds__inlining__V_38_38;
#line 405 "inlining.m"
                MR_Integer transform_hlds__inlining__V_71_71 = (MR_Integer) transform_hlds__inlining__V_6_6;
#line 405 "inlining.m"
                MR_Integer transform_hlds__inlining__V_72_72 = (MR_Integer) transform_hlds__inlining__V_22_22;

#line 405 "inlining.m"
                {
#line 405 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_38_38, transform_hlds__inlining__V_71_71, transform_hlds__inlining__V_72_72);
                }
#line 2521 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_38_38 == (MR_Integer) 0);
#line 405 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_38_38;
#line 405 "inlining.m"
                else
#line 405 "inlining.m"
                  {
#line 405 "inlining.m"
                    MR_Word transform_hlds__inlining__V_39_39;

#line 405 "inlining.m"
                    {
#line 405 "inlining.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[2], &transform_hlds__inlining__V_39_39, ((MR_Box) (transform_hlds__inlining__V_7_7)), ((MR_Box) (transform_hlds__inlining__V_23_23)));
                    }
#line 2541 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_39_39 == (MR_Integer) 0);
#line 405 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_39_39;
#line 405 "inlining.m"
                    else
#line 405 "inlining.m"
                      {
#line 405 "inlining.m"
                        MR_Word transform_hlds__inlining__V_40_40;

#line 405 "inlining.m"
                        {
#line 405 "inlining.m"
                          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__inlining__V_40_40, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_24_24);
                        }
#line 2561 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_40_40 == (MR_Integer) 0);
#line 405 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_40_40;
#line 405 "inlining.m"
                        else
#line 405 "inlining.m"
                          {
#line 405 "inlining.m"
                            MR_Word transform_hlds__inlining__V_41_41;

#line 405 "inlining.m"
                            {
#line 405 "inlining.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__V_41_41, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                            }
#line 2581 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_41_41 == (MR_Integer) 0);
#line 405 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_41_41;
#line 405 "inlining.m"
                            else
#line 405 "inlining.m"
                              {
#line 405 "inlining.m"
                                MR_Word transform_hlds__inlining__V_42_42;

#line 405 "inlining.m"
                                {
#line 405 "inlining.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[4], &transform_hlds__inlining__V_42_42, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                }
#line 2601 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_42_42 == (MR_Integer) 0);
#line 405 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_42_42;
#line 405 "inlining.m"
                                else
#line 405 "inlining.m"
                                  {
#line 405 "inlining.m"
                                    MR_Word transform_hlds__inlining__V_43_43;

#line 405 "inlining.m"
                                    {
#line 405 "inlining.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[5], &transform_hlds__inlining__V_43_43, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                    }
#line 2621 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_43_43 == (MR_Integer) 0);
#line 405 "inlining.m"
                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_43_43;
#line 405 "inlining.m"
                                    else
#line 405 "inlining.m"
                                      {
#line 405 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_44_44;

#line 405 "inlining.m"
                                        {
#line 405 "inlining.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_2[0], &transform_hlds__inlining__V_44_44, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                        }
#line 2641 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_44_44 == (MR_Integer) 0);
#line 405 "inlining.m"
                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_44_44;
#line 405 "inlining.m"
                                        else
#line 405 "inlining.m"
                                          {
#line 405 "inlining.m"
                                            MR_Word transform_hlds__inlining__V_45_45;

#line 405 "inlining.m"
                                            {
#line 405 "inlining.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[6], &transform_hlds__inlining__V_45_45, ((MR_Box) (transform_hlds__inlining__V_13_13)), ((MR_Box) (transform_hlds__inlining__V_29_29)));
                                            }
#line 2661 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_45_45 == (MR_Integer) 0);
#line 405 "inlining.m"
                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_45_45;
#line 405 "inlining.m"
                                            else
#line 405 "inlining.m"
                                              {
#line 405 "inlining.m"
                                                MR_Word transform_hlds__inlining__V_46_46;

#line 405 "inlining.m"
                                                {
#line 405 "inlining.m"
                                                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__inlining__V_46_46, transform_hlds__inlining__V_14_14, transform_hlds__inlining__V_30_30);
                                                }
#line 2681 "transform_hlds.inlining.c"
                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
#line 405 "inlining.m"
                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_46_46;
#line 405 "inlining.m"
                                                else
#line 405 "inlining.m"
                                                  {
#line 405 "inlining.m"
                                                    MR_Word transform_hlds__inlining__V_47_47;
#line 405 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_73_73 = (MR_Integer) transform_hlds__inlining__V_15_15;
#line 405 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_74_74 = (MR_Integer) transform_hlds__inlining__V_31_31;

#line 405 "inlining.m"
                                                    {
#line 405 "inlining.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_47_47, transform_hlds__inlining__V_73_73, transform_hlds__inlining__V_74_74);
                                                    }
#line 2705 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_47_47 == (MR_Integer) 0);
#line 405 "inlining.m"
                                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_47_47;
#line 405 "inlining.m"
                                                    else
#line 405 "inlining.m"
                                                      {
#line 405 "inlining.m"
                                                        MR_Word transform_hlds__inlining__V_48_48;
#line 405 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_75_75 = (MR_Integer) transform_hlds__inlining__V_16_16;
#line 405 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_76_76 = (MR_Integer) transform_hlds__inlining__V_32_32;

#line 405 "inlining.m"
                                                        {
#line 405 "inlining.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_48_48, transform_hlds__inlining__V_75_75, transform_hlds__inlining__V_76_76);
                                                        }
#line 2729 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_48_48 == (MR_Integer) 0);
#line 405 "inlining.m"
                                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_48_48;
#line 405 "inlining.m"
                                                        else
#line 405 "inlining.m"
                                                          {
#line 405 "inlining.m"
                                                            MR_Word transform_hlds__inlining__V_49_49;
#line 405 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_77_77 = (MR_Integer) transform_hlds__inlining__V_17_17;
#line 405 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_78_78 = (MR_Integer) transform_hlds__inlining__V_33_33;

#line 405 "inlining.m"
                                                            {
#line 405 "inlining.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_49_49, transform_hlds__inlining__V_77_77, transform_hlds__inlining__V_78_78);
                                                            }
#line 2753 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_49_49 == (MR_Integer) 0);
#line 405 "inlining.m"
                                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_49_49;
#line 405 "inlining.m"
                                                            else
#line 405 "inlining.m"
                                                              {
#line 405 "inlining.m"
                                                                MR_Word transform_hlds__inlining__V_50_50;
#line 405 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_79_79 = (MR_Integer) transform_hlds__inlining__V_18_18;
#line 405 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_80_80 = (MR_Integer) transform_hlds__inlining__V_34_34;

#line 405 "inlining.m"
                                                                {
#line 405 "inlining.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_50_50, transform_hlds__inlining__V_79_79, transform_hlds__inlining__V_80_80);
                                                                }
#line 2777 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_50_50 == (MR_Integer) 0);
#line 405 "inlining.m"
                                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 405 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_50_50;
#line 405 "inlining.m"
                                                                else
#line 405 "inlining.m"
                                                                  {
#line 405 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_81_81 = (MR_Integer) transform_hlds__inlining__V_19_19;
#line 405 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_82_82 = (MR_Integer) transform_hlds__inlining__V_35_35;

#line 405 "inlining.m"
                                                                    {
#line 405 "inlining.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_81_81, transform_hlds__inlining__V_82_82);
#line 405 "inlining.m"
                                                                      return;
                                                                    }
#line 405 "inlining.m"
                                                                  }
#line 405 "inlining.m"
                                                              }
#line 405 "inlining.m"
                                                          }
#line 405 "inlining.m"
                                                      }
#line 405 "inlining.m"
                                                  }
#line 405 "inlining.m"
                                              }
#line 405 "inlining.m"
                                          }
#line 405 "inlining.m"
                                      }
#line 405 "inlining.m"
                                  }
#line 405 "inlining.m"
                              }
#line 405 "inlining.m"
                          }
#line 405 "inlining.m"
                      }
#line 405 "inlining.m"
                  }
#line 405 "inlining.m"
              }
#line 405 "inlining.m"
          }
#line 405 "inlining.m"
      }
#line 405 "inlining.m"
  }
#line 405 "inlining.m"
}

#line 405 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 405 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 405 "inlining.m"
{
#line 405 "inlining.m"
  {
#line 405 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 405 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_35 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 405 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 405 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_35 == transform_hlds__inlining__CastY_36);
#line 405 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 405 "inlining.m"
    else
#line 405 "inlining.m"
      {
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_37_37;
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_39_39;
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_40_40;
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_41_41;
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_42_42;
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_43_43;
#line 405 "inlining.m"
        MR_Integer transform_hlds__inlining__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 8)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 9)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Integer transform_hlds__inlining__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 2943 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_19_19);
#line 405 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
          {
#line 2949 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_20_20);
#line 405 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
              {
#line 2955 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_21_21);
#line 405 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                  {
#line 2961 "transform_hlds.inlining.c"
                    transform_hlds__inlining__TypeInfo_37_37 = (MR_Word) &transform_hlds__inlining_scalar_common_1[2];
#line 2963 "transform_hlds.inlining.c"
                    {
#line 2965 "transform_hlds.inlining.c"
                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_37_37, ((MR_Box) (transform_hlds__inlining__V_6_6)), ((MR_Box) (transform_hlds__inlining__V_22_22)));
                    }
#line 405 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                      {
#line 2972 "transform_hlds.inlining.c"
                        {
#line 2974 "transform_hlds.inlining.c"
                          transform_hlds__inlining__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_23_23);
                        }
#line 405 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                          {
#line 2981 "transform_hlds.inlining.c"
                            transform_hlds__inlining__TypeInfo_39_39 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
#line 2983 "transform_hlds.inlining.c"
                            {
#line 2985 "transform_hlds.inlining.c"
                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_39_39, ((MR_Box) (transform_hlds__inlining__V_8_8)), ((MR_Box) (transform_hlds__inlining__V_24_24)));
                            }
#line 405 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                              {
#line 2992 "transform_hlds.inlining.c"
                                transform_hlds__inlining__TypeInfo_40_40 = (MR_Word) &transform_hlds__inlining_scalar_common_1[4];
#line 2994 "transform_hlds.inlining.c"
                                {
#line 2996 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_40_40, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                                }
#line 405 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                  {
#line 3003 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__TypeInfo_41_41 = (MR_Word) &transform_hlds__inlining_scalar_common_1[5];
#line 3005 "transform_hlds.inlining.c"
                                    {
#line 3007 "transform_hlds.inlining.c"
                                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_41_41, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                    }
#line 405 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                      {
#line 3014 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__TypeInfo_42_42 = (MR_Word) &transform_hlds__inlining_scalar_common_2[0];
#line 3016 "transform_hlds.inlining.c"
                                        {
#line 3018 "transform_hlds.inlining.c"
                                          transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_42_42, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                        }
#line 405 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                          {
#line 3025 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__TypeInfo_43_43 = (MR_Word) &transform_hlds__inlining_scalar_common_1[6];
#line 3027 "transform_hlds.inlining.c"
                                            {
#line 3029 "transform_hlds.inlining.c"
                                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_43_43, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                            }
#line 405 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                              {
#line 3036 "transform_hlds.inlining.c"
                                                {
#line 3038 "transform_hlds.inlining.c"
                                                  transform_hlds__inlining__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__inlining__V_13_13, transform_hlds__inlining__V_29_29);
                                                }
#line 405 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                  {
#line 3045 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_14_14 == transform_hlds__inlining__V_30_30);
#line 405 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                      {
#line 3051 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_15_15 == transform_hlds__inlining__V_31_31);
#line 405 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                          {
#line 3057 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_16_16 == transform_hlds__inlining__V_32_32);
#line 405 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 405 "inlining.m"
                                                              {
#line 3063 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_17_17 == transform_hlds__inlining__V_33_33);
#line 405 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 3067 "transform_hlds.inlining.c"
                                                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_18_18 == transform_hlds__inlining__V_34_34);
#line 405 "inlining.m"
                                                              }
#line 405 "inlining.m"
                                                          }
#line 405 "inlining.m"
                                                      }
#line 405 "inlining.m"
                                                  }
#line 405 "inlining.m"
                                              }
#line 405 "inlining.m"
                                          }
#line 405 "inlining.m"
                                      }
#line 405 "inlining.m"
                                  }
#line 405 "inlining.m"
                              }
#line 405 "inlining.m"
                          }
#line 405 "inlining.m"
                      }
#line 405 "inlining.m"
                  }
#line 405 "inlining.m"
              }
#line 405 "inlining.m"
          }
#line 405 "inlining.m"
      }
#line 405 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 405 "inlining.m"
  }
#line 405 "inlining.m"
}

#line 906 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 906 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 906 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 906 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 906 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 906 "inlining.m"
{
#line 909 "inlining.m"
  {
#line 909 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 909 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "inlining.m"
      {
#line 909 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 909 "inlining.m"
      }
#line 909 "inlining.m"
    else
#line 910 "inlining.m"
      {
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 910 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 913 "inlining.m"
        {
#line 913 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 914 "inlining.m"
        {
#line 914 "inlining.m"
          hlds__hlds_goal__goal_to_par_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 915 "inlining.m"
        {
#line 915 "inlining.m"
          transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 916 "inlining.m"
        {
#line 916 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
#line 916 "inlining.m"
          return;
        }
#line 910 "inlining.m"
      }
#line 909 "inlining.m"
  }
#line 906 "inlining.m"
}

#line 894 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 894 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 894 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 894 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 894 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 894 "inlining.m"
{
#line 897 "inlining.m"
  {
#line 897 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 897 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "inlining.m"
      {
#line 897 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 897 "inlining.m"
      }
#line 897 "inlining.m"
    else
#line 898 "inlining.m"
      {
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 898 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 901 "inlining.m"
        {
#line 901 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 902 "inlining.m"
        {
#line 902 "inlining.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 903 "inlining.m"
        {
#line 903 "inlining.m"
          transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 904 "inlining.m"
        {
#line 904 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
#line 904 "inlining.m"
          return;
        }
#line 898 "inlining.m"
      }
#line 897 "inlining.m"
  }
#line 894 "inlining.m"
}

#line 882 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 882 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 882 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 882 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 882 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 882 "inlining.m"
{
#line 885 "inlining.m"
  {
#line 885 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 885 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "inlining.m"
      {
#line 885 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 885 "inlining.m"
      }
#line 885 "inlining.m"
    else
#line 886 "inlining.m"
      {
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Case_10;
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Cases_11;
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 0)));
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 1)));
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 2)));
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_16;
#line 886 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_19_19;

#line 888 "inlining.m"
        {
#line 888 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_15, &transform_hlds__inlining__Goal_16, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_19_19);
        }
#line 889 "inlining.m"
        {
#line 889 "inlining.m"
          transform_hlds__inlining__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 889 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 0) = ((MR_Box) (transform_hlds__inlining__MainConsId_13));
#line 889 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 1) = ((MR_Box) (transform_hlds__inlining__OtherConsIds_14));
#line 889 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 2) = ((MR_Box) (transform_hlds__inlining__Goal_16));
#line 889 "inlining.m"
        }
#line 890 "inlining.m"
        {
#line 890 "inlining.m"
          transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_9, &transform_hlds__inlining__Cases_11, transform_hlds__inlining__STATE_VARIABLE_Info_19_19, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 886 "inlining.m"
        {
#line 886 "inlining.m"
          MR_Word base;
#line 886 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 886 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Case_10));
#line 886 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Cases_11));
#line 886 "inlining.m"
        }
#line 886 "inlining.m"
      }
#line 885 "inlining.m"
  }
#line 882 "inlining.m"
}

#line 872 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 872 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 872 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 872 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 872 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 872 "inlining.m"
{
#line 875 "inlining.m"
  {
#line 875 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 875 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "inlining.m"
      {
#line 875 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 875 "inlining.m"
      }
#line 875 "inlining.m"
    else
#line 876 "inlining.m"
      {
#line 876 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 876 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_10;
#line 876 "inlining.m"
        MR_Word transform_hlds__inlining__Goals_11;
#line 876 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_15_15;

#line 877 "inlining.m"
        {
#line 877 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal_10, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_15_15);
        }
#line 878 "inlining.m"
        {
#line 878 "inlining.m"
          transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals_11, transform_hlds__inlining__STATE_VARIABLE_Info_15_15, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 876 "inlining.m"
        {
#line 876 "inlining.m"
          MR_Word base;
#line 876 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 876 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Goal_10));
#line 876 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Goals_11));
#line 876 "inlining.m"
        }
#line 876 "inlining.m"
      }
#line 875 "inlining.m"
  }
#line 872 "inlining.m"
}

#line 730 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 730 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 730 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 730 "inlining.m"
{
#line 733 "inlining.m"
  while (MR_TRUE)
#line 733 "inlining.m"
    {
#line 733 "inlining.m"
      /* tailcall optimized into a loop */
#line 733 "inlining.m"
      {
#line 733 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 733 "inlining.m"
        MR_Word transform_hlds__inlining__VarA_4;
#line 733 "inlining.m"
        MR_Word transform_hlds__inlining__VarB_5;
#line 733 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11;
#line 733 "inlining.m"
        MR_Word transform_hlds__inlining__Vars_6;

#line 733 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 733 "inlining.m"
          {
#line 733 "inlining.m"
            transform_hlds__inlining__VarA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 733 "inlining.m"
            transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 733 "inlining.m"
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 733 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 733 "inlining.m"
              {
#line 733 "inlining.m"
                transform_hlds__inlining__VarB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 0)));
#line 733 "inlining.m"
                transform_hlds__inlining__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 1)));
#line 735 "inlining.m"
                {
#line 735 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoA_7;
#line 735 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoB_8;
#line 735 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintA_9;
#line 735 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintB_10;

#line 735 "inlining.m"
                  {
#line 735 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarA_4, &transform_hlds__inlining__VarInfoA_7);
                  }
#line 736 "inlining.m"
                  {
#line 736 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarB_5, &transform_hlds__inlining__VarInfoB_8);
                  }
#line 737 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoA_7)) == (MR_mktag((MR_Integer) 2)));
#line 737 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 737 "inlining.m"
                    {
#line 737 "inlining.m"
                      transform_hlds__inlining__ConstraintA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoA_7, (MR_Integer) 0)));
#line 738 "inlining.m"
                      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoB_8)) == (MR_mktag((MR_Integer) 2)));
#line 738 "inlining.m"
                      if (transform_hlds__inlining__succeeded)
#line 738 "inlining.m"
                        {
#line 738 "inlining.m"
                          transform_hlds__inlining__ConstraintB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoB_8, (MR_Integer) 0)));
#line 739 "inlining.m"
                          {
#line 739 "inlining.m"
                            transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(transform_hlds__inlining__ConstraintA_9, transform_hlds__inlining__ConstraintB_10);
                          }
#line 739 "inlining.m"
                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 738 "inlining.m"
                        }
#line 737 "inlining.m"
                    }
#line 735 "inlining.m"
                }
#line 740 "inlining.m"
                if (!(transform_hlds__inlining__succeeded))
#line 741 "inlining.m"
                  {
#line 741 "inlining.m"
                    /* direct tailcall eliminated */
#line 741 "inlining.m"
                    {
#line 741 "inlining.m"
                      MR_Word transform_hlds__inlining__HeadVar__2__tmp_copy_2 = transform_hlds__inlining__V_11_11;

#line 741 "inlining.m"
                      transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__HeadVar__2__tmp_copy_2;
#line 741 "inlining.m"
                    }
#line 741 "inlining.m"
                    continue;
#line 741 "inlining.m"
                  }
#line 733 "inlining.m"
              }
#line 733 "inlining.m"
          }
#line 733 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 733 "inlining.m"
      }
#line 733 "inlining.m"
      break;
#line 733 "inlining.m"
    }
#line 730 "inlining.m"
}

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 724 "inlining.m"
{
#line 724 "inlining.m"
  {
#line 724 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 724 "inlining.m"
    MR_builtin_longjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0, 1);
#line 724 "inlining.m"
  }
#line 724 "inlining.m"
}

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 724 "inlining.m"
{
#line 724 "inlining.m"
  {
#line 724 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 724 "inlining.m"
    (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80 = ((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80);
#line 724 "inlining.m"
    {
#line 724 "inlining.m"
      transform_hlds__inlining__inlining_in_call_11_p_0_2(transform_hlds__inlining__env_ptr);
#line 724 "inlining.m"
      return;
    }
#line 724 "inlining.m"
  }
#line 724 "inlining.m"
}

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 724 "inlining.m"
{
#line 724 "inlining.m"
  {
#line 724 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 724 "inlining.m"
    {
#line 726 "inlining.m"
      MR_Word transform_hlds__inlining__V_78_78;
#line 726 "inlining.m"
      MR_Word transform_hlds__inlining__V_79_79;

#line 725 "inlining.m"
      {
#line 725 "inlining.m"
        mercury__multi_map__lookup_3_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75, ((MR_Box) ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80)), &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
      }
#line 726 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77)) == (MR_mktag((MR_Integer) 1)));
#line 726 "inlining.m"
      if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 726 "inlining.m"
        {
#line 726 "inlining.m"
          {
#line 726 "inlining.m"
            transform_hlds__inlining__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 0)));
#line 726 "inlining.m"
            transform_hlds__inlining__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 1)));
#line 726 "inlining.m"
          }
#line 724 "inlining.m"
          {
#line 727 "inlining.m"
            {
#line 727 "inlining.m"
              (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
            }
#line 727 "inlining.m"
            if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 727 "inlining.m"
              {
#line 727 "inlining.m"
                transform_hlds__inlining__inlining_in_call_11_p_0_1(transform_hlds__inlining__env_ptr);
#line 727 "inlining.m"
                return;
              }
#line 724 "inlining.m"
          }
#line 726 "inlining.m"
        }
#line 724 "inlining.m"
    }
#line 724 "inlining.m"
  }
#line 724 "inlining.m"
}

#line 724 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 724 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 724 "inlining.m"
{
#line 724 "inlining.m"
  {
#line 724 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 724 "inlining.m"
    if (MR_builtin_setjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0) == 0)
#line 724 "inlining.m"
      {
#line 724 "inlining.m"
        {
#line 724 "inlining.m"
          mercury__list__member_2_p_1((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__inlining_in_call_11_p_0_3, transform_hlds__inlining__env_ptr);
        }
#line 724 "inlining.m"
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 724 "inlining.m"
      }
#line 724 "inlining.m"
    else
#line 724 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 724 "inlining.m"
  }
#line 724 "inlining.m"
}

#line 631 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 631 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 631 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 631 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61)
#line 631 "inlining.m"
{
#line 631 "inlining.m"
  {
#line 631 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s transform_hlds__inlining__env;

#line 631 "inlining.m"
    (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14 = transform_hlds__inlining__ArgVars_14;
#line 638 "inlining.m"
    {
#line 638 "inlining.m"
      MR_Integer transform_hlds__inlining__VarThresh_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__HighLevelCode_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__AnyTracing_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedProcs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__HeadTypeParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__Markers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__VarSet0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 6)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__VarTypes0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 7)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__TypeVarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 8)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__RttiVarMaps0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 9)));
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedParallel0_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__Requantify0_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__DetChanged0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__PurityChanged0_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__PredInfo_38;
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining__ProcInfo_39;
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining___DidInlining0_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 648 "inlining.m"
      MR_Word transform_hlds__inlining__UserReq_40;
#line 719 "inlining.m"
      MR_Word transform_hlds__inlining__HeadVars_74;

#line 644 "inlining.m"
      {
#line 644 "inlining.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_26, transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, &transform_hlds__inlining__PredInfo_38, &transform_hlds__inlining__ProcInfo_39);
      }
#line 647 "inlining.m"
      {
#line 647 "inlining.m"
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, transform_hlds__inlining__Builtin_15, transform_hlds__inlining__HighLevelCode_23, transform_hlds__inlining__InlinedProcs_25, transform_hlds__inlining__ModuleInfo_26, &transform_hlds__inlining__UserReq_40);
      }
#line 648 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 648 "inlining.m"
        {
#line 651 "inlining.m"
#line 651 "inlining.m"
          switch (transform_hlds__inlining__UserReq_40) {
#line 651 "inlining.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 651 "inlining.m"
            case (MR_Integer) 0:
#line 652 "inlining.m"
              {
#line 652 "inlining.m"
                MR_Word transform_hlds__inlining__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 652 "inlining.m"
                MR_Word transform_hlds__inlining__TypeInfo_66_66;
#line 652 "inlining.m"
                MR_Word transform_hlds__inlining__ListOfVars_41;
#line 652 "inlining.m"
                MR_Integer transform_hlds__inlining__ThisMany_42;
#line 652 "inlining.m"
                MR_Word transform_hlds__inlining__CalleeVarSet_43;
#line 652 "inlining.m"
                MR_Word transform_hlds__inlining__CalleeListOfVars_44;
#line 652 "inlining.m"
                MR_Integer transform_hlds__inlining__CalleeThisMany_45;
#line 652 "inlining.m"
                MR_Integer transform_hlds__inlining__TotalVars_46;

#line 654 "inlining.m"
                {
#line 654 "inlining.m"
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__ListOfVars_41);
                }
#line 3818 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeInfo_66_66 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 655 "inlining.m"
                {
#line 655 "inlining.m"
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__ListOfVars_41, &transform_hlds__inlining__ThisMany_42);
                }
#line 658 "inlining.m"
                {
#line 658 "inlining.m"
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__CalleeVarSet_43);
                }
#line 659 "inlining.m"
                {
#line 659 "inlining.m"
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__CalleeVarSet_43, &transform_hlds__inlining__CalleeListOfVars_44);
                }
#line 660 "inlining.m"
                {
#line 660 "inlining.m"
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__CalleeListOfVars_44, &transform_hlds__inlining__CalleeThisMany_45);
                }
#line 661 "inlining.m"
                transform_hlds__inlining__TotalVars_46 = (transform_hlds__inlining__ThisMany_42 + transform_hlds__inlining__CalleeThisMany_45);
#line 662 "inlining.m"
                (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__TotalVars_46 <= transform_hlds__inlining__VarThresh_22);
#line 652 "inlining.m"
              }
#line 651 "inlining.m"
              break;
#line 651 "inlining.m"
            case (MR_Integer) 1:
#line 650 "inlining.m"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 651 "inlining.m"
              break;
#line 651 "inlining.m"
          }
#line 648 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 648 "inlining.m"
            {
#line 720 "inlining.m"
              {
#line 720 "inlining.m"
                hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_39, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73);
              }
#line 721 "inlining.m"
              {
#line 721 "inlining.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HeadVars_74);
              }
#line 3870 "transform_hlds.inlining.c"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 722 "inlining.m"
              {
#line 722 "inlining.m"
                mercury__multi_map__from_corresponding_lists_3_p_0((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__HeadVars_74, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75);
              }
#line 724 "inlining.m"
              {
#line 724 "inlining.m"
                transform_hlds__inlining__inlining_in_call_11_p_0_4(&transform_hlds__inlining__env);
              }
#line 665 "inlining.m"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = !((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded);
#line 648 "inlining.m"
            }
#line 648 "inlining.m"
        }
#line 712 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 669 "inlining.m"
        {
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__VarSet_47;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__VarTypes_48;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__TypeVarSet_49;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__RttiVarMaps_50;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__NonLocals_51;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__Requantify_52;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__PurityChanged_53;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism0_54;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism_55;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__DetChanged_56;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__HasParallelConj_57;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__InlinedParallel_58;
#line 669 "inlining.m"
          MR_Word transform_hlds__inlining__V_62_62;
#line 674 "inlining.m"
          MR_Word transform_hlds__inlining__V_68_68;
#line 680 "inlining.m"
          MR_Word transform_hlds__inlining__V_63_63;
#line 680 "inlining.m"
          MR_Word transform_hlds__inlining__V_69_69;

#line 667 "inlining.m"
          {
#line 667 "inlining.m"
            transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__inlining__HeadTypeParams_27, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__PredInfo_38, transform_hlds__inlining__ProcInfo_39, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__VarSet_47, transform_hlds__inlining__VarTypes0_30, &transform_hlds__inlining__VarTypes_48, transform_hlds__inlining__TypeVarSet0_31, &transform_hlds__inlining__TypeVarSet_49, transform_hlds__inlining__RttiVarMaps0_32, &transform_hlds__inlining__RttiVarMaps_50, &transform_hlds__inlining__V_62_62);
          }
#line 669 "inlining.m"
          *transform_hlds__inlining__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 0)));
#line 669 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 1)));
#line 673 "inlining.m"
          {
#line 673 "inlining.m"
            transform_hlds__inlining__NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 674 "inlining.m"
          {
#line 674 "inlining.m"
            transform_hlds__inlining__V_68_68 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14);
          }
#line 674 "inlining.m"
          {
#line 674 "inlining.m"
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[7], ((MR_Box) (transform_hlds__inlining__NonLocals_51)), ((MR_Box) (transform_hlds__inlining__V_68_68)));
          }
#line 676 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 675 "inlining.m"
            transform_hlds__inlining__Requantify_52 = transform_hlds__inlining__Requantify0_35;
#line 676 "inlining.m"
          else
#line 677 "inlining.m"
            transform_hlds__inlining__Requantify_52 = (MR_Integer) 1;
#line 680 "inlining.m"
          {
#line 680 "inlining.m"
            transform_hlds__inlining__V_63_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 680 "inlining.m"
          {
#line 680 "inlining.m"
            transform_hlds__inlining__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 680 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__V_63_63 == transform_hlds__inlining__V_69_69);
#line 682 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 681 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = transform_hlds__inlining__PurityChanged0_37;
#line 682 "inlining.m"
          else
#line 683 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = (MR_Integer) 1;
#line 689 "inlining.m"
          {
#line 689 "inlining.m"
            transform_hlds__inlining__Determinism0_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 690 "inlining.m"
          {
#line 690 "inlining.m"
            transform_hlds__inlining__Determinism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 691 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__Determinism0_54 == transform_hlds__inlining__Determinism_55);
#line 693 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 692 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = transform_hlds__inlining__DetChanged0_36;
#line 693 "inlining.m"
          else
#line 694 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = (MR_Integer) 1;
#line 697 "inlining.m"
          {
#line 697 "inlining.m"
            hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HasParallelConj_57);
          }
#line 701 "inlining.m"
#line 701 "inlining.m"
          switch (transform_hlds__inlining__HasParallelConj_57) {
#line 701 "inlining.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 701 "inlining.m"
            case (MR_Integer) 1:
#line 703 "inlining.m"
              transform_hlds__inlining__InlinedParallel_58 = transform_hlds__inlining__InlinedParallel0_34;
#line 701 "inlining.m"
              break;
#line 701 "inlining.m"
            case (MR_Integer) 0:
#line 700 "inlining.m"
              transform_hlds__inlining__InlinedParallel_58 = (MR_Integer) 1;
#line 701 "inlining.m"
              break;
#line 701 "inlining.m"
          }
#line 708 "inlining.m"
          {
#line 708 "inlining.m"
            MR_Word base;
#line 708 "inlining.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 708 "inlining.m"
            *transform_hlds__inlining__STATE_VARIABLE_Info_61 = base;
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_22));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_23 | ((transform_hlds__inlining__AnyTracing_24 << (MR_Integer) 1)))));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_25));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__inlining__ModuleInfo_26));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__inlining__HeadTypeParams_27));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__inlining__Markers_28));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__inlining__VarSet_47));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes_48));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet_49));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps_50));
#line 708 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (((MR_Integer) 1 | ((((transform_hlds__inlining__InlinedParallel_58 << (MR_Integer) 1)) | ((((transform_hlds__inlining__Requantify_52 << (MR_Integer) 2)) | ((((transform_hlds__inlining__DetChanged_56 << (MR_Integer) 3)) | ((transform_hlds__inlining__PurityChanged_53 << (MR_Integer) 4)))))))))));
#line 708 "inlining.m"
          }
#line 669 "inlining.m"
        }
#line 712 "inlining.m"
      else
#line 713 "inlining.m"
        {
#line 713 "inlining.m"
          {
#line 713 "inlining.m"
            MR_Word base;
#line 713 "inlining.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 713 "inlining.m"
            *transform_hlds__inlining__GoalExpr_18 = base;
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__inlining__PredId_12));
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_13));
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14));
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__inlining__Builtin_15));
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__inlining__Context_16));
#line 713 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__inlining__Sym_17));
#line 713 "inlining.m"
          }
#line 714 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = transform_hlds__inlining__GoalInfo0_19;
#line 713 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Info_61 = transform_hlds__inlining__STATE_VARIABLE_Info_0_60;
#line 713 "inlining.m"
        }
#line 638 "inlining.m"
    }
#line 631 "inlining.m"
  }
#line 631 "inlining.m"
}

#line 559 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 559 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 559 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 559 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 559 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56)
#line 559 "inlining.m"
{
#line 562 "inlining.m"
  {
#line 562 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 562 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 0)));
#line 562 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 1)));
#line 562 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr_16;
#line 562 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo_17;

#line 568 "inlining.m"
#line 568 "inlining.m"
    switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) {
#line 568 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 568 "inlining.m"
      case (MR_Integer) 0:
#line 604 "inlining.m"
        {
#line 604 "inlining.m"
          MR_Word transform_hlds__inlining__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr0_8), (MR_Integer) 0);
#line 604 "inlining.m"
          MR_Word transform_hlds__inlining__SubGoal_50;

#line 605 "inlining.m"
          {
#line 605 "inlining.m"
            transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_49, &transform_hlds__inlining__SubGoal_50, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
#line 606 "inlining.m"
          transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__inlining__SubGoal_50);
#line 607 "inlining.m"
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 604 "inlining.m"
        }
#line 568 "inlining.m"
        break;
#line 568 "inlining.m"
      case (MR_Integer) 1:
#line 572 "inlining.m"
        {
#line 573 "inlining.m"
          transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 574 "inlining.m"
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 572 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 572 "inlining.m"
        }
#line 568 "inlining.m"
        break;
#line 568 "inlining.m"
      case (MR_Integer) 2:
#line 565 "inlining.m"
        {
#line 565 "inlining.m"
          MR_Word transform_hlds__inlining__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)));
#line 565 "inlining.m"
          MR_Integer transform_hlds__inlining__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 565 "inlining.m"
          MR_Word transform_hlds__inlining__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 565 "inlining.m"
          MR_Word transform_hlds__inlining__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 565 "inlining.m"
          MR_Word transform_hlds__inlining__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 565 "inlining.m"
          MR_Word transform_hlds__inlining__Sym_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 5)));

#line 566 "inlining.m"
          {
#line 566 "inlining.m"
            transform_hlds__inlining__inlining_in_call_11_p_0(transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, transform_hlds__inlining__ArgVars_12, transform_hlds__inlining__Builtin_13, transform_hlds__inlining__Context_14, transform_hlds__inlining__Sym_15, &transform_hlds__inlining__GoalExpr_16, transform_hlds__inlining__GoalInfo0_9, &transform_hlds__inlining__GoalInfo_17, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
#line 565 "inlining.m"
        }
#line 568 "inlining.m"
        break;
#line 568 "inlining.m"
      case (MR_Integer) 3:
#line 568 "inlining.m"
#line 568 "inlining.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) {
#line 568 "inlining.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 568 "inlining.m"
          case (MR_Integer) 0:
#line 568 "inlining.m"
          case (MR_Integer) 1:
#line 572 "inlining.m"
            {
#line 573 "inlining.m"
              transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 574 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 572 "inlining.m"
              *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 572 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 2:
#line 576 "inlining.m"
            {
#line 576 "inlining.m"
              MR_Word transform_hlds__inlining__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 576 "inlining.m"
              MR_Word transform_hlds__inlining__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 576 "inlining.m"
              MR_Word transform_hlds__inlining__Goals_37;

#line 580 "inlining.m"
#line 580 "inlining.m"
              switch (transform_hlds__inlining__ConjType_35) {
#line 580 "inlining.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 580 "inlining.m"
                case (MR_Integer) 1:
#line 582 "inlining.m"
                  {
#line 582 "inlining.m"
                    transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 580 "inlining.m"
                  break;
#line 580 "inlining.m"
                case (MR_Integer) 0:
#line 579 "inlining.m"
                  {
#line 579 "inlining.m"
                    transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 580 "inlining.m"
                  break;
#line 580 "inlining.m"
              }
#line 584 "inlining.m"
              {
#line 584 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 584 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 584 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__ConjType_35));
#line 584 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Goals_37));
#line 584 "inlining.m"
              }
#line 585 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 576 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 3:
#line 587 "inlining.m"
            {
#line 587 "inlining.m"
              MR_Word transform_hlds__inlining__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 587 "inlining.m"
              MR_Word transform_hlds__inlining__Goals_71;

#line 588 "inlining.m"
              {
#line 588 "inlining.m"
                transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_70, &transform_hlds__inlining__Goals_71, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 589 "inlining.m"
              {
#line 589 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 589 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Goals_71));
#line 589 "inlining.m"
              }
#line 590 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 587 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 4:
#line 592 "inlining.m"
            {
#line 592 "inlining.m"
              MR_Word transform_hlds__inlining__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 592 "inlining.m"
              MR_Word transform_hlds__inlining__Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 592 "inlining.m"
              MR_Word transform_hlds__inlining__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 592 "inlining.m"
              MR_Word transform_hlds__inlining__Cases_41;

#line 593 "inlining.m"
              {
#line 593 "inlining.m"
                transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_40, &transform_hlds__inlining__Cases_41, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 594 "inlining.m"
              {
#line 594 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 594 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 594 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Var_38));
#line 594 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Det_39));
#line 594 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Cases_41));
#line 594 "inlining.m"
              }
#line 595 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 592 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 5:
#line 609 "inlining.m"
            {
#line 609 "inlining.m"
              MR_Word transform_hlds__inlining__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 609 "inlining.m"
              MR_Word transform_hlds__inlining__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 611 "inlining.m"
              MR_Word transform_hlds__inlining__FGT_53;
#line 611 "inlining.m"
              MR_Word transform_hlds__inlining__V_52_52;

#line 611 "inlining.m"
              transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 611 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 611 "inlining.m"
                {
#line 611 "inlining.m"
                  transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 1)));
#line 611 "inlining.m"
                  transform_hlds__inlining__FGT_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 2)));
#line 613 "inlining.m"
#line 613 "inlining.m"
                  switch (transform_hlds__inlining__FGT_53) {
#line 613 "inlining.m"
                    default:
#line 613 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_FALSE;
#line 613 "inlining.m"
                      break;
#line 613 "inlining.m"
                    case (MR_Integer) 1:
#line 612 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 613 "inlining.m"
                      break;
#line 613 "inlining.m"
                    case (MR_Integer) 2:
#line 613 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 613 "inlining.m"
                      break;
#line 613 "inlining.m"
                  }
#line 611 "inlining.m"
                }
#line 619 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 617 "inlining.m"
                {
#line 617 "inlining.m"
                  transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 618 "inlining.m"
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 617 "inlining.m"
                  *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 617 "inlining.m"
                }
#line 619 "inlining.m"
              else
#line 620 "inlining.m"
                {
#line 620 "inlining.m"
                  MR_Word transform_hlds__inlining__SubGoal_72;

#line 620 "inlining.m"
                  {
#line 620 "inlining.m"
                    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_74, &transform_hlds__inlining__SubGoal_72, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 621 "inlining.m"
                  {
#line 621 "inlining.m"
                    transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 621 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 621 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Reason_51));
#line 621 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__SubGoal_72));
#line 621 "inlining.m"
                  }
#line 622 "inlining.m"
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 620 "inlining.m"
                }
#line 609 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 6:
#line 597 "inlining.m"
            {
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Cond0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Then0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Cond_46;
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Then_47;
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__Else_48;
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_62_62;
#line 597 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_63_63;

#line 598 "inlining.m"
              {
#line 598 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Cond0_43, &transform_hlds__inlining__Cond_46, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, &transform_hlds__inlining__STATE_VARIABLE_Info_62_62);
              }
#line 599 "inlining.m"
              {
#line 599 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Then0_44, &transform_hlds__inlining__Then_47, transform_hlds__inlining__STATE_VARIABLE_Info_62_62, &transform_hlds__inlining__STATE_VARIABLE_Info_63_63);
              }
#line 600 "inlining.m"
              {
#line 600 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Else0_45, &transform_hlds__inlining__Else_48, transform_hlds__inlining__STATE_VARIABLE_Info_63_63, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 601 "inlining.m"
              {
#line 601 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 601 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 601 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Vars_42));
#line 601 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Cond_46));
#line 601 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Then_47));
#line 601 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__inlining__Else_48));
#line 601 "inlining.m"
              }
#line 602 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 597 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
          case (MR_Integer) 7:
#line 625 "inlining.m"
            {
#line 627 "inlining.m"
              {
#line 627 "inlining.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
#line 627 "inlining.m"
                return;
              }
#line 625 "inlining.m"
            }
#line 568 "inlining.m"
            break;
#line 568 "inlining.m"
        }
#line 568 "inlining.m"
        break;
#line 568 "inlining.m"
    }
#line 629 "inlining.m"
    {
#line 629 "inlining.m"
      MR_Word base;
#line 629 "inlining.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "inlining.m"
      *transform_hlds__inlining__Goal_6 = base;
#line 629 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_16));
#line 629 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo_17));
#line 629 "inlining.m"
    }
#line 562 "inlining.m"
  }
#line 559 "inlining.m"
}

#line 460 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 460 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55,
#line 460 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56)
#line 460 "inlining.m"
{
#line 463 "inlining.m"
  {
#line 463 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_98_98;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_99_99;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_101_101;
#line 463 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThresh_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 4)));
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 0)));
#line 463 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 1)));
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable0_17;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable0_18;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__UnivQTVars_19;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet0_20;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__Markers0_21;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__Goal0_22;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet0_23;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes0_24;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps0_25;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo0_31;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__Goal_32;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo_33;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__Markers_40;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet_41;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes_42;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet_43;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps_44;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__DidInlining_45;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedParallel_46;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__Requantify_47;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__DetChanged_48;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__PurityChanged_49;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable_50;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable_51;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 464 "inlining.m"
    MR_Integer transform_hlds__inlining__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 1)));
#line 464 "inlining.m"
    MR_Integer transform_hlds__inlining__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 2)));
#line 464 "inlining.m"
    MR_Integer transform_hlds__inlining__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 3)));
#line 472 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57;
#line 474 "inlining.m"
    MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58;
#line 499 "inlining.m"
    MR_Integer transform_hlds__inlining__V_34_34;
#line 499 "inlining.m"
    MR_Word transform_hlds__inlining__V_35_35;
#line 499 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 499 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 499 "inlining.m"
    MR_Word transform_hlds__inlining__V_38_38;
#line 499 "inlining.m"
    MR_Word transform_hlds__inlining__V_39_39;

#line 471 "inlining.m"
    {
#line 471 "inlining.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__inlining__PredTable0_17);
    }
#line 4669 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4671 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 472 "inlining.m"
    {
#line 472 "inlining.m"
      mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_98_98, transform_hlds__inlining__TypeCtorInfo_99_99, transform_hlds__inlining__PredTable0_17, ((MR_Box) (transform_hlds__inlining__PredId_13)), &transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57);
    }
#line 472 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57 = ((MR_Word) transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57);
#line 473 "inlining.m"
    {
#line 473 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__ProcTable0_18);
    }
#line 4685 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 474 "inlining.m"
    {
#line 474 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__inlining__TypeCtorInfo_101_101, transform_hlds__inlining__ProcTable0_18, transform_hlds__inlining__ProcId_14, &transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58);
    }
#line 474 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58);
#line 476 "inlining.m"
    {
#line 476 "inlining.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__UnivQTVars_19);
    }
#line 477 "inlining.m"
    {
#line 477 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__TypeVarSet0_20);
    }
#line 478 "inlining.m"
    {
#line 478 "inlining.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__Markers0_21);
    }
#line 480 "inlining.m"
    {
#line 480 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__Goal0_22);
    }
#line 481 "inlining.m"
    {
#line 481 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__VarSet0_23);
    }
#line 482 "inlining.m"
    {
#line 482 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__VarTypes0_24);
    }
#line 483 "inlining.m"
    {
#line 483 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__RttiVarMaps0_25);
    }
#line 491 "inlining.m"
    {
#line 491 "inlining.m"
      transform_hlds__inlining__InlineInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_10));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_12 << (MR_Integer) 1)))));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_7));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 4) = ((MR_Box) (transform_hlds__inlining__UnivQTVars_19));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 5) = ((MR_Box) (transform_hlds__inlining__Markers0_21));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 6) = ((MR_Box) (transform_hlds__inlining__VarSet0_23));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes0_24));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet0_20));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps0_25));
#line 491 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 10) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))));
#line 491 "inlining.m"
    }
#line 497 "inlining.m"
    {
#line 497 "inlining.m"
      transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_22, &transform_hlds__inlining__Goal_32, transform_hlds__inlining__InlineInfo0_31, &transform_hlds__inlining__InlineInfo_33);
    }
#line 499 "inlining.m"
    transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 0)));
#line 499 "inlining.m"
    transform_hlds__inlining__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 2)));
#line 499 "inlining.m"
    transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 3)));
#line 499 "inlining.m"
    transform_hlds__inlining__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 4)));
#line 499 "inlining.m"
    transform_hlds__inlining__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 5)));
#line 499 "inlining.m"
    transform_hlds__inlining__VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 6)));
#line 499 "inlining.m"
    transform_hlds__inlining__VarTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 7)));
#line 499 "inlining.m"
    transform_hlds__inlining__TypeVarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 8)));
#line 499 "inlining.m"
    transform_hlds__inlining__RttiVarMaps_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 9)));
#line 499 "inlining.m"
    transform_hlds__inlining__DidInlining_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__InlinedParallel_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__Requantify_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__DetChanged_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 499 "inlining.m"
    transform_hlds__inlining__PurityChanged_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 503 "inlining.m"
    {
#line 503 "inlining.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(transform_hlds__inlining__Markers_40, transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59);
    }
#line 504 "inlining.m"
    {
#line 504 "inlining.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__inlining__TypeVarSet_43, transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60);
    }
#line 506 "inlining.m"
    {
#line 506 "inlining.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__inlining__VarSet_41, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61);
    }
#line 507 "inlining.m"
    {
#line 507 "inlining.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__inlining__VarTypes_42, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62);
    }
#line 508 "inlining.m"
    {
#line 508 "inlining.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__inlining__RttiVarMaps_44, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63);
    }
#line 509 "inlining.m"
    {
#line 509 "inlining.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__inlining__Goal_32, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 514 "inlining.m"
#line 514 "inlining.m"
    switch (transform_hlds__inlining__InlinedParallel_46) {
#line 514 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "inlining.m"
      case (MR_Integer) 0:
#line 515 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64;
#line 514 "inlining.m"
        break;
#line 514 "inlining.m"
      case (MR_Integer) 1:
#line 512 "inlining.m"
        {
#line 513 "inlining.m"
          {
#line 513 "inlining.m"
            hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66);
          }
#line 512 "inlining.m"
        }
#line 514 "inlining.m"
        break;
#line 514 "inlining.m"
    }
#line 521 "inlining.m"
#line 521 "inlining.m"
    switch (transform_hlds__inlining__Requantify_47) {
#line 521 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 521 "inlining.m"
      case (MR_Integer) 0:
#line 522 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66;
#line 521 "inlining.m"
        break;
#line 521 "inlining.m"
      case (MR_Integer) 1:
#line 519 "inlining.m"
        {
#line 520 "inlining.m"
          {
#line 520 "inlining.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68);
          }
#line 519 "inlining.m"
        }
#line 521 "inlining.m"
        break;
#line 521 "inlining.m"
    }
#line 529 "inlining.m"
#line 529 "inlining.m"
    switch (transform_hlds__inlining__DidInlining_45) {
#line 529 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 529 "inlining.m"
      case (MR_Integer) 0:
#line 530 "inlining.m"
        {
#line 530 "inlining.m"
          transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55;
#line 530 "inlining.m"
          transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68;
#line 530 "inlining.m"
        }
#line 529 "inlining.m"
        break;
#line 529 "inlining.m"
      case (MR_Integer) 1:
#line 526 "inlining.m"
        {
#line 527 "inlining.m"
          {
#line 527 "inlining.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71);
          }
#line 526 "inlining.m"
        }
#line 529 "inlining.m"
        break;
#line 529 "inlining.m"
    }
#line 533 "inlining.m"
    {
#line 533 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__inlining__TypeCtorInfo_101_101, transform_hlds__inlining__ProcId_14, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70)), transform_hlds__inlining__ProcTable0_18, &transform_hlds__inlining__ProcTable_50);
    }
#line 534 "inlining.m"
    {
#line 534 "inlining.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__inlining__ProcTable_50, transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72);
    }
#line 539 "inlining.m"
#line 539 "inlining.m"
    switch (transform_hlds__inlining__PurityChanged_49) {
#line 539 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 539 "inlining.m"
      case (MR_Integer) 0:
#line 540 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73 = transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72;
#line 539 "inlining.m"
        break;
#line 539 "inlining.m"
      case (MR_Integer) 1:
#line 538 "inlining.m"
        {
#line 538 "inlining.m"
          check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__inlining__PredProcId_6, transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73);
        }
#line 539 "inlining.m"
        break;
#line 539 "inlining.m"
    }
#line 543 "inlining.m"
    {
#line 543 "inlining.m"
      mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_98_98, transform_hlds__inlining__TypeCtorInfo_99_99, ((MR_Box) (transform_hlds__inlining__PredId_13)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73)), transform_hlds__inlining__PredTable0_17, &transform_hlds__inlining__PredTable_51);
    }
#line 544 "inlining.m"
    {
#line 544 "inlining.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__inlining__PredTable_51, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74);
    }
#line 552 "inlining.m"
#line 552 "inlining.m"
    switch (transform_hlds__inlining__DetChanged_48) {
#line 552 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 552 "inlining.m"
      case (MR_Integer) 0:
#line 553 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74;
#line 552 "inlining.m"
        break;
#line 552 "inlining.m"
      case (MR_Integer) 1:
#line 550 "inlining.m"
        {
#line 551 "inlining.m"
          MR_Word transform_hlds__inlining__V_52_52;
#line 551 "inlining.m"
          MR_Word transform_hlds__inlining__V_53_53;
#line 551 "inlining.m"
          MR_Word transform_hlds__inlining__V_54_54;

#line 551 "inlining.m"
          {
#line 551 "inlining.m"
            check_hlds__det_analysis__det_infer_proc_8_p_0(transform_hlds__inlining__PredId_13, transform_hlds__inlining__ProcId_14, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56, &transform_hlds__inlining__V_52_52, &transform_hlds__inlining__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__inlining__V_54_54);
          }
#line 550 "inlining.m"
        }
#line 552 "inlining.m"
        break;
#line 552 "inlining.m"
    }
#line 463 "inlining.m"
  }
#line 460 "inlining.m"
}

#line 374 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 374 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 374 "inlining.m"
{
#line 376 "inlining.m"
  while (MR_TRUE)
#line 376 "inlining.m"
    {
#line 376 "inlining.m"
      /* tailcall optimized into a loop */
#line 376 "inlining.m"
      {
#line 376 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 376 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "inlining.m"
          transform_hlds__inlining__succeeded = MR_TRUE;
#line 376 "inlining.m"
        else
#line 377 "inlining.m"
          {
#line 377 "inlining.m"
            MR_Word transform_hlds__inlining__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "inlining.m"
            MR_Word transform_hlds__inlining__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 378 "inlining.m"
            {
#line 378 "inlining.m"
              transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_2);
            }
#line 377 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 379 "inlining.m"
              {
#line 379 "inlining.m"
                /* direct tailcall eliminated */
#line 379 "inlining.m"
                {
#line 379 "inlining.m"
                  MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goals_3;

#line 379 "inlining.m"
                  transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 379 "inlining.m"
                }
#line 379 "inlining.m"
                continue;
#line 379 "inlining.m"
              }
#line 377 "inlining.m"
          }
#line 376 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 376 "inlining.m"
      }
#line 376 "inlining.m"
      break;
#line 376 "inlining.m"
    }
#line 374 "inlining.m"
}

#line 346 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 346 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 346 "inlining.m"
{
#line 348 "inlining.m"
  while (MR_TRUE)
#line 348 "inlining.m"
    {
#line 348 "inlining.m"
      /* tailcall optimized into a loop */
#line 348 "inlining.m"
      {
#line 348 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;
#line 348 "inlining.m"
        MR_Word transform_hlds__inlining__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 352 "inlining.m"
#line 352 "inlining.m"
        switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) {
#line 352 "inlining.m"
          default:
#line 352 "inlining.m"
            transform_hlds__inlining__succeeded = MR_FALSE;
#line 352 "inlining.m"
            break;
#line 352 "inlining.m"
          case (MR_Integer) 0:
#line 353 "inlining.m"
            {
#line 353 "inlining.m"
              MR_Word transform_hlds__inlining__Goal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr_2), (MR_Integer) 0);

#line 354 "inlining.m"
              /* direct tailcall eliminated */
#line 354 "inlining.m"
              {
#line 354 "inlining.m"
                MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_5;

#line 354 "inlining.m"
                transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 354 "inlining.m"
              }
#line 354 "inlining.m"
              continue;
#line 353 "inlining.m"
            }
#line 352 "inlining.m"
            break;
#line 352 "inlining.m"
          case (MR_Integer) 1:
#line 371 "inlining.m"
            transform_hlds__inlining__succeeded = MR_TRUE;
#line 352 "inlining.m"
            break;
#line 352 "inlining.m"
          case (MR_Integer) 2:
#line 369 "inlining.m"
            {
#line 369 "inlining.m"
              MR_Word transform_hlds__inlining__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 3)));
#line 369 "inlining.m"
              MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)));
#line 369 "inlining.m"
              MR_Integer transform_hlds__inlining__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 369 "inlining.m"
              MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 369 "inlining.m"
              MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 4)));
#line 369 "inlining.m"
              MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 5)));

#line 369 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_19_19 == (MR_Integer) 0);
#line 369 "inlining.m"
            }
#line 352 "inlining.m"
            break;
#line 352 "inlining.m"
          case (MR_Integer) 3:
#line 352 "inlining.m"
#line 352 "inlining.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) {
#line 352 "inlining.m"
              default:
#line 352 "inlining.m"
                transform_hlds__inlining__succeeded = MR_FALSE;
#line 352 "inlining.m"
                break;
#line 352 "inlining.m"
              case (MR_Integer) 2:
#line 350 "inlining.m"
                {
#line 350 "inlining.m"
                  MR_Word transform_hlds__inlining__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 350 "inlining.m"
                  MR_Word transform_hlds__inlining__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));

#line 350 "inlining.m"
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 350 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 351 "inlining.m"
                    {
#line 351 "inlining.m"
                      return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(transform_hlds__inlining__Goals_4);
                    }
#line 350 "inlining.m"
                }
#line 352 "inlining.m"
                break;
#line 352 "inlining.m"
              case (MR_Integer) 5:
#line 356 "inlining.m"
                {
#line 356 "inlining.m"
                  MR_Word transform_hlds__inlining__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 356 "inlining.m"
                  MR_Word transform_hlds__inlining__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 358 "inlining.m"
                  MR_Word transform_hlds__inlining__FGT_8;
#line 358 "inlining.m"
                  MR_Word transform_hlds__inlining__V_7_7;

#line 358 "inlining.m"
                  transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 358 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 358 "inlining.m"
                    {
#line 358 "inlining.m"
                      transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 1)));
#line 358 "inlining.m"
                      transform_hlds__inlining__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 2)));
#line 360 "inlining.m"
#line 360 "inlining.m"
                      switch (transform_hlds__inlining__FGT_8) {
#line 360 "inlining.m"
                        default:
#line 360 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_FALSE;
#line 360 "inlining.m"
                          break;
#line 360 "inlining.m"
                        case (MR_Integer) 1:
#line 359 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 360 "inlining.m"
                          break;
#line 360 "inlining.m"
                        case (MR_Integer) 2:
#line 360 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 360 "inlining.m"
                          break;
#line 360 "inlining.m"
                      }
#line 358 "inlining.m"
                    }
#line 365 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 364 "inlining.m"
                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 365 "inlining.m"
                  else
#line 366 "inlining.m"
                    {
#line 366 "inlining.m"
                      /* direct tailcall eliminated */
#line 366 "inlining.m"
                      {
#line 366 "inlining.m"
                        MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_21;

#line 366 "inlining.m"
                        transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 366 "inlining.m"
                      }
#line 366 "inlining.m"
                      continue;
#line 366 "inlining.m"
                    }
#line 356 "inlining.m"
                }
#line 352 "inlining.m"
                break;
#line 352 "inlining.m"
            }
#line 352 "inlining.m"
            break;
#line 352 "inlining.m"
        }
#line 348 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 348 "inlining.m"
      }
#line 348 "inlining.m"
      break;
#line 348 "inlining.m"
    }
#line 346 "inlining.m"
}

#line 269 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 269 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 269 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28)
#line 269 "inlining.m"
{
#line 311 "inlining.m"
  {
#line 311 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 275 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 1)));
#line 275 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 2)));
#line 275 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 3)));
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 275 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_19;
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__Procs_20;
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_21;
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_22;
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__Entity_23;
#line 275 "inlining.m"
    MR_Integer transform_hlds__inlining__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 4)));
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 275 "inlining.m"
    MR_Word transform_hlds__inlining__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 283 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_ProcInfo_21;

#line 281 "inlining.m"
    {
#line 281 "inlining.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_17, &transform_hlds__inlining__PredInfo_19);
    }
#line 282 "inlining.m"
    {
#line 282 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__PredInfo_19, &transform_hlds__inlining__Procs_20);
    }
#line 283 "inlining.m"
    {
#line 283 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__inlining__Procs_20, transform_hlds__inlining__ProcId_18, &transform_hlds__inlining__conv0_ProcInfo_21);
    }
#line 283 "inlining.m"
    transform_hlds__inlining__ProcInfo_21 = ((MR_Word) transform_hlds__inlining__conv0_ProcInfo_21);
#line 284 "inlining.m"
    {
#line 284 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__CalledGoal_22);
    }
#line 285 "inlining.m"
    {
#line 285 "inlining.m"
      transform_hlds__inlining__Entity_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_17));
#line 285 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_18));
#line 285 "inlining.m"
    }
#line 289 "inlining.m"
    {
#line 289 "inlining.m"
      MR_Integer transform_hlds__inlining__Size_78;

#line 289 "inlining.m"
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Simple_12 == (MR_Integer) 1);
#line 289 "inlining.m"
      if (transform_hlds__inlining__succeeded)
#line 289 "inlining.m"
        {
#line 333 "inlining.m"
          {
#line 333 "inlining.m"
            hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_78);
          }
#line 335 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__SimpleThreshold_16);
#line 336 "inlining.m"
          if (!(transform_hlds__inlining__succeeded))
#line 342 "inlining.m"
            {
#line 342 "inlining.m"
              MR_Integer transform_hlds__inlining__V_79_79 = (transform_hlds__inlining__SimpleThreshold_16 * (MR_Integer) 3);

#line 342 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__V_79_79);
#line 342 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 343 "inlining.m"
                {
#line 343 "inlining.m"
                  transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_22);
                }
#line 342 "inlining.m"
            }
#line 289 "inlining.m"
        }
#line 289 "inlining.m"
    }
#line 291 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 291 "inlining.m"
      {
#line 292 "inlining.m"
        {
#line 292 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_72_72;
#line 292 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_73_73;
#line 292 "inlining.m"
          MR_Word transform_hlds__inlining__Needed_24;
#line 292 "inlining.m"
          MR_Integer transform_hlds__inlining__NumUses_25;
#line 292 "inlining.m"
          MR_Integer transform_hlds__inlining__Size_26;
#line 292 "inlining.m"
          MR_Integer transform_hlds__inlining__V_30_30;
#line 292 "inlining.m"
          MR_Integer transform_hlds__inlining__V_31_31;
#line 293 "inlining.m"
          MR_Box transform_hlds__inlining__conv1_Needed_24;

#line 292 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_15 > (MR_Integer) 0);
#line 292 "inlining.m"
          if (transform_hlds__inlining__succeeded)
#line 292 "inlining.m"
            {
#line 5420 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 5422 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_73_73 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 293 "inlining.m"
              {
#line 293 "inlining.m"
                transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_72_72, transform_hlds__inlining__TypeCtorInfo_73_73, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv1_Needed_24);
              }
#line 293 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 293 "inlining.m"
                {
#line 293 "inlining.m"
                  transform_hlds__inlining__Needed_24 = ((MR_Word) transform_hlds__inlining__conv1_Needed_24);
#line 293 "inlining.m"
                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 293 "inlining.m"
                }
#line 292 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 292 "inlining.m"
                {
#line 294 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_24)) == (MR_mktag((MR_Integer) 1)));
#line 294 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 294 "inlining.m"
                    {
#line 294 "inlining.m"
                      transform_hlds__inlining__NumUses_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_24, (MR_Integer) 0)));
#line 295 "inlining.m"
                      {
#line 295 "inlining.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_26);
                      }
#line 300 "inlining.m"
                      transform_hlds__inlining__V_31_31 = (transform_hlds__inlining__Size_26 - transform_hlds__inlining__CallCost_14);
#line 300 "inlining.m"
                      transform_hlds__inlining__V_30_30 = (transform_hlds__inlining__V_31_31 * transform_hlds__inlining__NumUses_25);
#line 300 "inlining.m"
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_30_30 <= transform_hlds__inlining__CompoundThreshold_15);
#line 294 "inlining.m"
                    }
#line 292 "inlining.m"
                }
#line 292 "inlining.m"
            }
#line 292 "inlining.m"
        }
#line 291 "inlining.m"
        if (!(transform_hlds__inlining__succeeded))
#line 302 "inlining.m"
          {
#line 302 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_74_74;
#line 302 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_75_75;
#line 302 "inlining.m"
            MR_Word transform_hlds__inlining__Needed_33;
#line 302 "inlining.m"
            MR_Integer transform_hlds__inlining__NumUses_34;
#line 303 "inlining.m"
            MR_Box transform_hlds__inlining__conv2_Needed_33;

#line 302 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_13 == (MR_Integer) 1);
#line 302 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 302 "inlining.m"
              {
#line 5491 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_74_74 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 5493 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 303 "inlining.m"
                {
#line 303 "inlining.m"
                  transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_74_74, transform_hlds__inlining__TypeCtorInfo_75_75, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv2_Needed_33);
                }
#line 303 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 303 "inlining.m"
                  {
#line 303 "inlining.m"
                    transform_hlds__inlining__Needed_33 = ((MR_Word) transform_hlds__inlining__conv2_Needed_33);
#line 303 "inlining.m"
                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 303 "inlining.m"
                  }
#line 302 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 302 "inlining.m"
                  {
#line 304 "inlining.m"
                    transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_33)) == (MR_mktag((MR_Integer) 1)));
#line 304 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 304 "inlining.m"
                      {
#line 304 "inlining.m"
                        transform_hlds__inlining__NumUses_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_33, (MR_Integer) 0)));
#line 305 "inlining.m"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumUses_34 == (MR_Integer) 1);
#line 304 "inlining.m"
                      }
#line 302 "inlining.m"
                  }
#line 302 "inlining.m"
              }
#line 302 "inlining.m"
          }
#line 291 "inlining.m"
      }
#line 275 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 275 "inlining.m"
      {
#line 308 "inlining.m"
        {
#line 308 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__inlining__CalledGoal_22, transform_hlds__inlining__PredProcId_7);
        }
#line 308 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 275 "inlining.m"
      }
#line 311 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 384 "inlining.m"
      {
#line 384 "inlining.m"
        MR_Word transform_hlds__inlining__PredId_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 384 "inlining.m"
        MR_Integer transform_hlds__inlining__ProcId_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 384 "inlining.m"
        MR_Word transform_hlds__inlining__PredInfo_87;

#line 385 "inlining.m"
        {
#line 385 "inlining.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_7)), transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27, transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);
        }
#line 386 "inlining.m"
        {
#line 386 "inlining.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_84, &transform_hlds__inlining__PredInfo_87);
        }
#line 387 "inlining.m"
        {
#line 387 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__inlining__PredInfo_87);
        }
#line 389 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 388 "inlining.m"
          {
#line 388 "inlining.m"
          }
#line 389 "inlining.m"
        else
#line 390 "inlining.m"
          {
#line 391 "inlining.m"
            {
#line 391 "inlining.m"
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Inlining ", transform_hlds__inlining__PredId_84, transform_hlds__inlining__ProcId_85, transform_hlds__inlining__ModuleInfo_10);
#line 391 "inlining.m"
              return;
            }
#line 390 "inlining.m"
          }
#line 384 "inlining.m"
      }
#line 311 "inlining.m"
    else
#line 311 "inlining.m"
      *transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28 = transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27;
#line 311 "inlining.m"
  }
#line 269 "inlining.m"
}

#line 256 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 256 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 256 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6)
#line 256 "inlining.m"
{
#line 260 "inlining.m"
  while (MR_TRUE)
#line 260 "inlining.m"
    {
#line 260 "inlining.m"
      /* tailcall optimized into a loop */
#line 260 "inlining.m"
      {
#line 260 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 260 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Module_6 = transform_hlds__inlining__STATE_VARIABLE_Module_0_5;
#line 260 "inlining.m"
        else
#line 261 "inlining.m"
          {
#line 261 "inlining.m"
            MR_Word transform_hlds__inlining__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "inlining.m"
            MR_Word transform_hlds__inlining__PPIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_22_22;
#line 261 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;

#line 262 "inlining.m"
            {
#line 262 "inlining.m"
              transform_hlds__inlining__inline_in_proc_5_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__4_4, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_0_5, &transform_hlds__inlining__STATE_VARIABLE_Module_22_22);
            }
#line 263 "inlining.m"
            {
#line 263 "inlining.m"
              transform_hlds__inlining__mark_predproc_6_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__2_2, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_22_22, transform_hlds__inlining__HeadVar__4_4, &transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23);
            }
#line 264 "inlining.m"
            /* direct tailcall eliminated */
#line 264 "inlining.m"
            {
#line 264 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__PPIds_14;
#line 264 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__4__tmp_copy_4 = transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;
#line 264 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5 = transform_hlds__inlining__STATE_VARIABLE_Module_22_22;

#line 264 "inlining.m"
              transform_hlds__inlining__STATE_VARIABLE_Module_0_5 = transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5;
#line 264 "inlining.m"
              transform_hlds__inlining__HeadVar__4_4 = transform_hlds__inlining__HeadVar__4__tmp_copy_4;
#line 264 "inlining.m"
              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 264 "inlining.m"
            }
#line 264 "inlining.m"
            continue;
#line 261 "inlining.m"
          }
#line 260 "inlining.m"
      }
#line 260 "inlining.m"
      break;
#line 260 "inlining.m"
    }
#line 256 "inlining.m"
}

#line 143 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_6_p_0(
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_7,
#line 143 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_8,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_9,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_10,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__CallingPredMarkers_11,
#line 143 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_12)
#line 143 "inlining.m"
{
#line 954 "inlining.m"
  {
#line 954 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 954 "inlining.m"
    {
#line 954 "inlining.m"
      return transform_hlds__inlining__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_p_0(transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8, transform_hlds__inlining__BuiltinState_9, transform_hlds__inlining__InlinePromisedPure_10, transform_hlds__inlining__ModuleInfo_12);
    }
#line 954 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 954 "inlining.m"
  }
#line 143 "inlining.m"
}

#line 133 "inlining.m"
void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVars_12,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_13,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_14,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarSet_15,
#line 133 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_16,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes1_17,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarTypes_18,
#line 133 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_19,
#line 133 "inlining.m"
  MR_Word * transform_hlds__inlining__Renaming_20,
#line 133 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_21,
#line 133 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_22)
#line 133 "inlining.m"
{
#line 860 "inlining.m"
  {
#line 860 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 860 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_25 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 860 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_23;
#line 860 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_24;

#line 861 "inlining.m"
    {
#line 861 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__HeadVars_12, transform_hlds__inlining__ArgVars_13, &transform_hlds__inlining__Renaming0_23);
    }
#line 862 "inlining.m"
    {
#line 862 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_15, &transform_hlds__inlining__CalleeListOfVars_24);
    }
#line 863 "inlining.m"
    {
#line 863 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_24, transform_hlds__inlining__CalleeVarSet_15, transform_hlds__inlining__CalleeVarTypes_18, transform_hlds__inlining__VarSet0_14, transform_hlds__inlining__VarSet_16, transform_hlds__inlining__VarTypes1_17, transform_hlds__inlining__VarTypes_19, transform_hlds__inlining__Renaming0_23, transform_hlds__inlining__Renaming_20);
    }
#line 865 "inlining.m"
    {
#line 865 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*transform_hlds__inlining__Renaming_20, transform_hlds__inlining__CalledGoal_21, transform_hlds__inlining__Goal_22);
#line 865 "inlining.m"
      return;
    }
#line 860 "inlining.m"
  }
#line 133 "inlining.m"
}

#line 125 "inlining.m"
void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
#line 125 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypes_6,
#line 125 "inlining.m"
  MR_Word transform_hlds__inlining__ArgTypes_7,
#line 125 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_8,
#line 125 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeExistQVars_9,
#line 125 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeSubn_10)
#line 125 "inlining.m"
{
#line 829 "inlining.m"
  {
#line 829 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 829 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "inlining.m"
      {
#line 832 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_11;

#line 830 "inlining.m"
        {
#line 830 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, &transform_hlds__inlining__TypeSubn0_11);
        }
#line 832 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 831 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn0_11;
#line 832 "inlining.m"
        else
#line 842 "inlining.m"
          {
#line 842 "inlining.m"
            {
#line 842 "inlining.m"
              mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__inlining__TypeSubn_10);
#line 842 "inlining.m"
              return;
            }
#line 842 "inlining.m"
          }
#line 832 "inlining.m"
      }
#line 829 "inlining.m"
    else
#line 854 "inlining.m"
      {
#line 854 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn1_14;
#line 849 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_18;

#line 849 "inlining.m"
        {
#line 849 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__inlining__TypeSubn0_18);
        }
#line 850 "inlining.m"
        {
#line 850 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, transform_hlds__inlining__HeadTypeParams_8, transform_hlds__inlining__TypeSubn0_18, &transform_hlds__inlining__TypeSubn1_14);
        }
#line 854 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 853 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn1_14;
#line 854 "inlining.m"
        else
#line 855 "inlining.m"
          {
#line 855 "inlining.m"
            {
#line 855 "inlining.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
#line 855 "inlining.m"
              return;
            }
#line 855 "inlining.m"
          }
#line 854 "inlining.m"
      }
#line 829 "inlining.m"
  }
#line 125 "inlining.m"
}

#line 114 "inlining.m"
void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_14,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_15,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__PredInfo_16,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__ProcInfo_17,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_18,
#line 114 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_19,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes0_20,
#line 114 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_21,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__TypeVarSet0_22,
#line 114 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeVarSet_23,
#line 114 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps0_24,
#line 114 "inlining.m"
  MR_Word * transform_hlds__inlining__RttiVarMaps_25,
#line 114 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_26)
#line 114 "inlining.m"
{
#line 748 "inlining.m"
  {
#line 748 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_58;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_27;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeTypeVarSet_28;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__HeadVars_29;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes0_30;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarSet_31;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps0_32;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__TypeRenaming_33;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes1_34;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__HeadTypes_35;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__ArgTypes_36;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeExistQVars_37;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__TypeSubn_38;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes_39;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes1_40;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__Subn_43;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps1_44;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_56;
#line 748 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_57;

#line 750 "inlining.m"
    {
#line 750 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalledGoal_27);
    }
#line 754 "inlining.m"
    {
#line 754 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeTypeVarSet_28);
    }
#line 755 "inlining.m"
    {
#line 755 "inlining.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__HeadVars_29);
    }
#line 756 "inlining.m"
    {
#line 756 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarTypes0_30);
    }
#line 757 "inlining.m"
    {
#line 757 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarSet_31);
    }
#line 758 "inlining.m"
    {
#line 758 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeRttiVarMaps0_32);
    }
#line 774 "inlining.m"
    {
#line 774 "inlining.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__inlining__TypeVarSet0_22, transform_hlds__inlining__CalleeTypeVarSet_28, transform_hlds__inlining__TypeVarSet_23, &transform_hlds__inlining__TypeRenaming_33);
    }
#line 776 "inlining.m"
    {
#line 776 "inlining.m"
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__CalleeVarTypes0_30, &transform_hlds__inlining__CalleeVarTypes1_34);
    }
#line 790 "inlining.m"
    {
#line 790 "inlining.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__CalleeVarTypes1_34, transform_hlds__inlining__HeadVars_29, &transform_hlds__inlining__HeadTypes_35);
    }
#line 791 "inlining.m"
    {
#line 791 "inlining.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__VarTypes0_20, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__ArgTypes_36);
    }
#line 793 "inlining.m"
    {
#line 793 "inlining.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeExistQVars_37);
    }
#line 794 "inlining.m"
    {
#line 794 "inlining.m"
      transform_hlds__inlining__get_type_substitution_5_p_0(transform_hlds__inlining__HeadTypes_35, transform_hlds__inlining__ArgTypes_36, transform_hlds__inlining__HeadTypeParams_14, transform_hlds__inlining__CalleeExistQVars_37, &transform_hlds__inlining__TypeSubn_38);
    }
#line 804 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "inlining.m"
      {
#line 802 "inlining.m"
        {
#line 802 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 803 "inlining.m"
        transform_hlds__inlining__VarTypes1_40 = transform_hlds__inlining__VarTypes0_20;
#line 800 "inlining.m"
      }
#line 804 "inlining.m"
    else
#line 805 "inlining.m"
      {
#line 807 "inlining.m"
        {
#line 807 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 809 "inlining.m"
        {
#line 809 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__VarTypes0_20, &transform_hlds__inlining__VarTypes1_40);
        }
#line 805 "inlining.m"
      }
#line 6046 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeInfo_25_58 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 861 "inlining.m"
    {
#line 861 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__HeadVars_29, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__Renaming0_56);
    }
#line 862 "inlining.m"
    {
#line 862 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_31, &transform_hlds__inlining__CalleeListOfVars_57);
    }
#line 863 "inlining.m"
    {
#line 863 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_57, transform_hlds__inlining__CalleeVarSet_31, transform_hlds__inlining__CalleeVarTypes_39, transform_hlds__inlining__VarSet0_18, transform_hlds__inlining__VarSet_19, transform_hlds__inlining__VarTypes1_40, transform_hlds__inlining__VarTypes_21, transform_hlds__inlining__Renaming0_56, &transform_hlds__inlining__Subn_43);
    }
#line 865 "inlining.m"
    {
#line 865 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalledGoal_27, transform_hlds__inlining__Goal_26);
    }
#line 816 "inlining.m"
    {
#line 816 "inlining.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalleeRttiVarMaps0_32, &transform_hlds__inlining__CalleeRttiVarMaps1_44);
    }
#line 824 "inlining.m"
    {
#line 824 "inlining.m"
      hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(transform_hlds__inlining__CalleeRttiVarMaps1_44, transform_hlds__inlining__RttiVarMaps0_24, transform_hlds__inlining__RttiVarMaps_25);
#line 824 "inlining.m"
      return;
    }
#line 748 "inlining.m"
  }
#line 114 "inlining.m"
}

#line 103 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
#line 103 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_3,
#line 103 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 103 "inlining.m"
{
#line 332 "inlining.m"
  {
#line 332 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 332 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 333 "inlining.m"
    {
#line 333 "inlining.m"
      hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_3, &transform_hlds__inlining__Size_5);
    }
#line 335 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 336 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 342 "inlining.m"
      {
#line 342 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = (transform_hlds__inlining__SimpleThreshold_4 * (MR_Integer) 3);

#line 342 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_6_6);
#line 342 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 343 "inlining.m"
          {
#line 343 "inlining.m"
            return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_3);
          }
#line 342 "inlining.m"
      }
#line 332 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 332 "inlining.m"
  }
#line 103 "inlining.m"
}

#line 101 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
#line 101 "inlining.m"
  MR_Word transform_hlds__inlining__Clauses_3,
#line 101 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 101 "inlining.m"
{
#line 315 "inlining.m"
  {
#line 315 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 315 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 316 "inlining.m"
    {
#line 316 "inlining.m"
      hlds__goal_util__clause_list_size_2_p_0(transform_hlds__inlining__Clauses_3, &transform_hlds__inlining__Size_5);
    }
#line 318 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 319 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 320 "inlining.m"
      {
#line 320 "inlining.m"
        MR_Word transform_hlds__inlining__Clause_6;
#line 320 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_7;
#line 320 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8;
#line 320 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9;
#line 320 "inlining.m"
        MR_Integer transform_hlds__inlining__V_10_10;

#line 320 "inlining.m"
        transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
#line 320 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 320 "inlining.m"
          {
#line 320 "inlining.m"
            transform_hlds__inlining__Clause_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 0)));
#line 320 "inlining.m"
            transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 1)));
#line 320 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 320 "inlining.m"
              {
#line 321 "inlining.m"
                {
#line 321 "inlining.m"
                  transform_hlds__inlining__Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__inlining__Clause_6);
                }
#line 322 "inlining.m"
                transform_hlds__inlining__V_10_10 = (MR_Integer) 3;
#line 322 "inlining.m"
                transform_hlds__inlining__V_9_9 = (transform_hlds__inlining__SimpleThreshold_4 * transform_hlds__inlining__V_10_10);
#line 322 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_9_9);
#line 320 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 329 "inlining.m"
                  {
#line 329 "inlining.m"
                    return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_7);
                  }
#line 320 "inlining.m"
              }
#line 320 "inlining.m"
          }
#line 320 "inlining.m"
      }
#line 315 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 315 "inlining.m"
  }
#line 101 "inlining.m"
}

#line 97 "inlining.m"
void MR_CALL 
transform_hlds__inlining__inlining_2_p_0(
#line 97 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20,
#line 97 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21)
#line 97 "inlining.m"
{
#line 198 "inlining.m"
  {
#line 198 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_36_36;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_4;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_5;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_6;
#line 198 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_7;
#line 198 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_8;
#line 198 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_9;
#line 198 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThreshold_10;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__TraceLevel_12;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_13;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__Params_14;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__NeededMap_15;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__DepInfo_16;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__SCCs_17;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__PredProcs_18;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedProcs0_19;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__V_29_29;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31;
#line 198 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32;

#line 209 "inlining.m"
    {
#line 209 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__Globals_4);
    }
#line 210 "inlining.m"
    {
#line 210 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 339, &transform_hlds__inlining__Simple_5);
    }
#line 211 "inlining.m"
    {
#line 211 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 341, &transform_hlds__inlining__SingleUse_6);
    }
#line 212 "inlining.m"
    {
#line 212 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 342, &transform_hlds__inlining__CallCost_7);
    }
#line 213 "inlining.m"
    {
#line 213 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 343, &transform_hlds__inlining__CompoundThreshold_8);
    }
#line 215 "inlining.m"
    {
#line 215 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 344, &transform_hlds__inlining__SimpleThreshold_9);
    }
#line 217 "inlining.m"
    {
#line 217 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 345, &transform_hlds__inlining__VarThreshold_10);
    }
#line 218 "inlining.m"
    {
#line 218 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 255, &transform_hlds__inlining__HighLevelCode_11);
    }
#line 219 "inlining.m"
    {
#line 219 "inlining.m"
      libs__globals__get_trace_level_2_p_0(transform_hlds__inlining__Globals_4, &transform_hlds__inlining__TraceLevel_12);
    }
#line 220 "inlining.m"
    {
#line 220 "inlining.m"
      transform_hlds__inlining__V_29_29 = libs__trace_params__given_trace_level_is_none_1_f_0(transform_hlds__inlining__TraceLevel_12);
    }
#line 220 "inlining.m"
    {
#line 220 "inlining.m"
      transform_hlds__inlining__AnyTracing_13 = mercury__bool__not_1_f_0(transform_hlds__inlining__V_29_29);
    }
#line 221 "inlining.m"
    {
#line 221 "inlining.m"
      transform_hlds__inlining__Params_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 0) = ((MR_Box) ((transform_hlds__inlining__Simple_5 | ((transform_hlds__inlining__SingleUse_6 << (MR_Integer) 1)))));
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 1) = ((MR_Box) (transform_hlds__inlining__CallCost_7));
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 2) = ((MR_Box) (transform_hlds__inlining__CompoundThreshold_8));
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 3) = ((MR_Box) (transform_hlds__inlining__SimpleThreshold_9));
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 4) = ((MR_Box) (transform_hlds__inlining__VarThreshold_10));
#line 221 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 5) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_13 << (MR_Integer) 1)))));
#line 221 "inlining.m"
    }
#line 227 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_6 == (MR_Integer) 1);
#line 228 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 228 "inlining.m"
      {
#line 228 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_8 > (MR_Integer) 0);
#line 228 "inlining.m"
      }
#line 232 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 231 "inlining.m"
      {
#line 231 "inlining.m"
        transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__NeededMap_15);
      }
#line 232 "inlining.m"
    else
#line 233 "inlining.m"
      {
#line 233 "inlining.m"
        {
#line 233 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, &transform_hlds__inlining__NeededMap_15);
        }
#line 233 "inlining.m"
      }
#line 246 "inlining.m"
    {
#line 246 "inlining.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 247 "inlining.m"
    {
#line 247 "inlining.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__DepInfo_16);
    }
#line 6383 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 248 "inlining.m"
    {
#line 248 "inlining.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__DepInfo_16, &transform_hlds__inlining__SCCs_17);
    }
#line 249 "inlining.m"
    {
#line 249 "inlining.m"
      mercury__list__condense_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__SCCs_17, &transform_hlds__inlining__PredProcs_18);
    }
#line 250 "inlining.m"
    {
#line 250 "inlining.m"
      mercury__set__init_1_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, &transform_hlds__inlining__InlinedProcs0_19);
    }
#line 251 "inlining.m"
    {
#line 251 "inlining.m"
      transform_hlds__inlining__do_inlining_6_p_0(transform_hlds__inlining__PredProcs_18, transform_hlds__inlining__NeededMap_15, transform_hlds__inlining__Params_14, transform_hlds__inlining__InlinedProcs0_19, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 254 "inlining.m"
    {
#line 254 "inlining.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21);
#line 254 "inlining.m"
      return;
    }
#line 198 "inlining.m"
  }
#line 97 "inlining.m"
}

void mercury__transform_hlds__inlining__init(void)
{
}

void mercury__transform_hlds__inlining__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0);
}

void mercury__transform_hlds__inlining__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.inlining. */
