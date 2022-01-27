/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
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



#line 630 "inlining.m"
struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s {
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14;
#line 637 "inlining.m"
  MR_bool transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded;
#line 718 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97;
#line 718 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_89;
#line 718 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_91;
#line 723 "inlining.m"
  jmp_buf transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0;
#line 723 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93;
#line 723 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_96;
#line 723 "inlining.m"
  MR_Box transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_96;
#line 630 "inlining.m"
};


#line 169 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 172 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 181 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 193 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16];

#line 196 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16];

#line 199 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16];

#line 202 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

#line 205 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

#line 208 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

#line 211 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

#line 214 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

#line 217 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[8];

#line 220 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[8];

#line 223 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[8];

#line 226 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

#line 229 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

#line 232 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

#line 235 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

#line 238 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

#line 241 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 244 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 246 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 249 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 252 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 254 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 256 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 259 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 262 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 264 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 267 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 270 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 272 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 274 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 959 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_p_0(
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_8,
#line 959 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_9,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_10,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_11,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_12,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_14);

#line 183 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 183 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 183 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 404 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 404 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 404 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 905 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 905 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 905 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 905 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 905 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 893 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 893 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 893 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 893 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 893 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 881 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 881 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 881 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 881 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 881 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 871 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 871 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 871 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 871 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 871 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 729 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 729 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 729 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 630 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 630 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61);

#line 558 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 558 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 558 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 558 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 558 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56);

#line 459 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55,
#line 459 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56);

#line 373 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 373 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 345 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 345 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 268 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 268 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);

#line 255 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 255 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6);


static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[7][2];




static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[7][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 566 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 574 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 582 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 590 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 598 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 606 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 614 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 623 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 631 "transform_hlds.inlining.c"
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

#line 651 "transform_hlds.inlining.c"
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

#line 671 "transform_hlds.inlining.c"
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

#line 755 "transform_hlds.inlining.c"
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

#line 770 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 775 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0
  }
};

#line 784 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 789 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = {
  (MR_Integer) 0
};

#line 794 "transform_hlds.inlining.c"
const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_info_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_info_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_info",
  {
    transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0
  },
  {
    transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0
};

#line 815 "transform_hlds.inlining.c"
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

#line 827 "transform_hlds.inlining.c"
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

#line 839 "transform_hlds.inlining.c"
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

#line 883 "transform_hlds.inlining.c"
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

#line 898 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 903 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0
  }
};

#line 912 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 917 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = {
  (MR_Integer) 0
};

#line 922 "transform_hlds.inlining.c"
const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_params_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_params_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_params",
  {
    transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0
  },
  {
    transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0
};

#line 943 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 946 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 948 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 950 "transform_hlds.inlining.c"
{
#line 952 "transform_hlds.inlining.c"
  {
#line 954 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 957 "transform_hlds.inlining.c"
    {
#line 959 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 962 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 964 "transform_hlds.inlining.c"
  }
#line 966 "transform_hlds.inlining.c"
}

#line 969 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 972 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 974 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 976 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 978 "transform_hlds.inlining.c"
{
#line 980 "transform_hlds.inlining.c"
  {
#line 982 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 985 "transform_hlds.inlining.c"
    {
#line 987 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_info_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 990 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 992 "transform_hlds.inlining.c"
  }
#line 994 "transform_hlds.inlining.c"
}

#line 997 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 1000 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 1002 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 1004 "transform_hlds.inlining.c"
{
#line 1006 "transform_hlds.inlining.c"
  {
#line 1008 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 1011 "transform_hlds.inlining.c"
    {
#line 1013 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 1016 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 1018 "transform_hlds.inlining.c"
  }
#line 1020 "transform_hlds.inlining.c"
}

#line 1023 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 1026 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 1028 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 1030 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 1032 "transform_hlds.inlining.c"
{
#line 1034 "transform_hlds.inlining.c"
  {
#line 1036 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 1039 "transform_hlds.inlining.c"
    {
#line 1041 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_params_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 1044 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 1046 "transform_hlds.inlining.c"
  }
#line 1048 "transform_hlds.inlining.c"
}

#line 959 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_p_0(
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_8,
#line 959 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_9,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_10,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_11,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_12,
#line 959 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_14)
#line 959 "inlining.m"
{
#line 964 "inlining.m"
  {
#line 964 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_10 == (MR_Integer) 2);
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_15;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_16;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_17;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_21;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_31;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__Target_32;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__V_43_43;
#line 964 "inlining.m"
    MR_Word transform_hlds__inlining__V_50_50;
#line 976 "inlining.m"
    MR_Integer transform_hlds__inlining__V_49_49;
#line 1007 "inlining.m"
    MR_Word transform_hlds__inlining__Detism_30;
#line 1007 "inlining.m"
    MR_Word transform_hlds__inlining__V_45_45;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_29_29;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_22_22;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_23_23;
#line 1008 "inlining.m"
    MR_Integer transform_hlds__inlining__V_24_24;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_25_25;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_26_26;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_27_27;
#line 1008 "inlining.m"
    MR_Word transform_hlds__inlining__V_28_28;
#line 1038 "inlining.m"
    MR_Word transform_hlds__inlining__ForeignAttributes_33;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_46_46;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_40_40;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_34_34;
#line 1016 "inlining.m"
    MR_Integer transform_hlds__inlining__V_35_35;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_38_38;
#line 1016 "inlining.m"
    MR_Word transform_hlds__inlining__V_39_39;

#line 964 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
      {
#line 967 "inlining.m"
        {
#line 967 "inlining.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_14, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9, &transform_hlds__inlining__PredInfo_15, &transform_hlds__inlining__ProcInfo_16);
        }
#line 971 "inlining.m"
        {
#line 971 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_15);
        }
#line 971 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 964 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
          {
#line 976 "inlining.m"
            {
#line 976 "inlining.m"
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_15);
            }
#line 976 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 976 "inlining.m"
              {
#line 977 "inlining.m"
                {
#line 977 "inlining.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_49_49);
                }
#line 977 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_9 == transform_hlds__inlining__V_49_49);
#line 976 "inlining.m"
              }
#line 975 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 964 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
              {
#line 984 "inlining.m"
                transform_hlds__inlining__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 984 "inlining.m"
                {
#line 984 "inlining.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_16, &transform_hlds__inlining__V_50_50);
                }
#line 984 "inlining.m"
                {
#line 984 "inlining.m"
                  transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__inlining__V_43_43, transform_hlds__inlining__V_50_50);
                }
#line 964 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
                  {
#line 987 "inlining.m"
                    {
#line 987 "inlining.m"
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_15);
                    }
#line 987 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 964 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
                      {
#line 992 "inlining.m"
                        {
#line 992 "inlining.m"
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_14, &transform_hlds__inlining__MaybeComplexityProcMap_17);
                        }
#line 996 "inlining.m"
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 996 "inlining.m"
                        else
#line 997 "inlining.m"
                          {
#line 997 "inlining.m"
                            MR_Word transform_hlds__inlining__ComplexityProcMap_19;
#line 997 "inlining.m"
                            MR_Word transform_hlds__inlining__IsInComplexityMap_20;
#line 997 "inlining.m"
                            MR_Word transform_hlds__inlining__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_17, (MR_Integer) 0)));
#line 997 "inlining.m"
                            MR_Integer transform_hlds__inlining__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_44_44, (MR_Integer) 0)));

#line 997 "inlining.m"
                            transform_hlds__inlining__ComplexityProcMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_44_44, (MR_Integer) 1)));
#line 998 "inlining.m"
                            {
#line 998 "inlining.m"
                              transform_hlds__inlining__IsInComplexityMap_20 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_19, transform_hlds__inlining__ModuleInfo_14, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9);
                            }
#line 1000 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "inlining.m"
                          }
#line 964 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
                          {
#line 1005 "inlining.m"
                            {
#line 1005 "inlining.m"
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_16, &transform_hlds__inlining__CalledGoal_21);
                            }
#line 1007 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_11 == (MR_Integer) 0);
#line 1007 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1007 "inlining.m"
                              {
#line 1008 "inlining.m"
                                transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_21, (MR_Integer) 0)));
#line 1008 "inlining.m"
                                transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_21, (MR_Integer) 1)));
#line 1008 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1008 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1008 "inlining.m"
                                  {
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 1)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 2)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 3)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 4)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 5)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 6)));
#line 1008 "inlining.m"
                                    transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_45_45, (MR_Integer) 7)));
#line 1009 "inlining.m"
                                    {
#line 1009 "inlining.m"
                                      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_16, &transform_hlds__inlining__Detism_30);
                                    }
#line 1010 "inlining.m"
                                    if ((transform_hlds__inlining__Detism_30 == (MR_Integer) 2))
#line 1010 "inlining.m"
                                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 1010 "inlining.m"
                                    else
#line 1010 "inlining.m"
                                      if ((transform_hlds__inlining__Detism_30 == (MR_Integer) 3))
#line 1010 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1010 "inlining.m"
                                      else
#line 1010 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_FALSE;
#line 1008 "inlining.m"
                                  }
#line 1007 "inlining.m"
                              }
#line 1006 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 964 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 964 "inlining.m"
                              {
#line 1013 "inlining.m"
                                {
#line 1013 "inlining.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_14, &transform_hlds__inlining__Globals_31);
                                }
#line 1014 "inlining.m"
                                {
#line 1014 "inlining.m"
                                  libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_31, &transform_hlds__inlining__Target_32);
                                }
#line 1016 "inlining.m"
                                transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_21, (MR_Integer) 0)));
#line 1016 "inlining.m"
                                transform_hlds__inlining__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_21, (MR_Integer) 1)));
#line 1016 "inlining.m"
                                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1016 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1016 "inlining.m"
                                  {
#line 1016 "inlining.m"
                                    transform_hlds__inlining__ForeignAttributes_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 1)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 2)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 3)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 4)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 5)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 6)));
#line 1016 "inlining.m"
                                    transform_hlds__inlining__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__V_46_46, (MR_Integer) 7)));
#line 1025 "inlining.m"
                                    {
#line 1023 "inlining.m"
                                      MR_Word transform_hlds__inlining__ForeignLanguage_41;
#line 1031 "inlining.m"
                                      MR_Word transform_hlds__inlining__MaybeMayDuplicate_42;

#line 1022 "inlining.m"
                                      {
#line 1022 "inlining.m"
                                        transform_hlds__inlining__ForeignLanguage_41 = parse_tree__prog_data__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_33);
                                      }
#line 1061 "inlining.m"
                                      if ((transform_hlds__inlining__ForeignLanguage_41 == (MR_Integer) 0))
#line 1061 "inlining.m"
                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_32 == (MR_Integer) 0);
#line 1061 "inlining.m"
                                      else
#line 1061 "inlining.m"
                                        if ((transform_hlds__inlining__ForeignLanguage_41 == (MR_Integer) 1))
#line 1064 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_32 == (MR_Integer) 2);
#line 1061 "inlining.m"
                                        else
#line 1061 "inlining.m"
                                          if ((transform_hlds__inlining__ForeignLanguage_41 == (MR_Integer) 4))
#line 1062 "inlining.m"
                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_32 == (MR_Integer) 4);
#line 1061 "inlining.m"
                                          else
#line 1061 "inlining.m"
                                            if ((transform_hlds__inlining__ForeignLanguage_41 == (MR_Integer) 2))
#line 1063 "inlining.m"
                                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_32 == (MR_Integer) 3);
#line 1061 "inlining.m"
                                            else
#line 1061 "inlining.m"
                                              transform_hlds__inlining__succeeded = MR_FALSE;
#line 1023 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1023 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1025 "inlining.m"
                                      if (transform_hlds__inlining__succeeded)
#line 1025 "inlining.m"
                                        {
#line 1030 "inlining.m"
                                          {
#line 1030 "inlining.m"
                                            transform_hlds__inlining__MaybeMayDuplicate_42 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_33);
                                          }
#line 1034 "inlining.m"
                                          if ((transform_hlds__inlining__MaybeMayDuplicate_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "inlining.m"
                                            transform_hlds__inlining__succeeded = MR_TRUE;
#line 1034 "inlining.m"
                                          else
#line 1035 "inlining.m"
                                            {
#line 1035 "inlining.m"
                                              MR_Word transform_hlds__inlining__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_42, (MR_Integer) 0)));

#line 1035 "inlining.m"
                                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_47_47 == (MR_Integer) 0);
#line 1035 "inlining.m"
                                            }
#line 1031 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1031 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1025 "inlining.m"
                                        }
#line 1025 "inlining.m"
                                    }
#line 1016 "inlining.m"
                                  }
#line 1016 "inlining.m"
                                else
#line 1039 "inlining.m"
                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 964 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1044 "inlining.m"
                                  {
#line 1044 "inlining.m"
                                    if ((transform_hlds__inlining__InlinePromisedPure_12 == (MR_Integer) 0))
#line 1049 "inlining.m"
                                      {
#line 1049 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_51_51;

#line 1050 "inlining.m"
                                        {
#line 1050 "inlining.m"
                                          hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(transform_hlds__inlining__PredInfo_15, &transform_hlds__inlining__V_51_51);
                                        }
#line 1050 "inlining.m"
                                        transform_hlds__inlining__succeeded = ((MR_Integer) 2 == transform_hlds__inlining__V_51_51);
#line 1049 "inlining.m"
                                      }
#line 1044 "inlining.m"
                                    else
#line 1043 "inlining.m"
                                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 1044 "inlining.m"
                                  }
#line 964 "inlining.m"
                              }
#line 964 "inlining.m"
                          }
#line 964 "inlining.m"
                      }
#line 964 "inlining.m"
                  }
#line 964 "inlining.m"
              }
#line 964 "inlining.m"
          }
#line 964 "inlining.m"
      }
#line 964 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 964 "inlining.m"
  }
#line 959 "inlining.m"
}

#line 142 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_p_0(
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_7,
#line 142 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_8,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_9,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_10,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_12)
#line 142 "inlining.m"
{
#line 953 "inlining.m"
  {
#line 953 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 953 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_13;
#line 953 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_14;

#line 954 "inlining.m"
    {
#line 954 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__Globals_13);
    }
#line 955 "inlining.m"
    {
#line 955 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_13, (MR_Integer) 251, &transform_hlds__inlining__HighLevelCode_14);
    }
#line 956 "inlining.m"
    {
#line 956 "inlining.m"
      return transform_hlds__inlining__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_p_0(transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8, transform_hlds__inlining__BuiltinState_9, transform_hlds__inlining__HighLevelCode_14, transform_hlds__inlining__InlinePromisedPure_10, transform_hlds__inlining__ModuleInfo_12);
    }
#line 953 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 953 "inlining.m"
  }
#line 142 "inlining.m"
}

#line 183 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 183 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 183 "inlining.m"
{
#line 183 "inlining.m"
  {
#line 183 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 183 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_27 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 183 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_28 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 183 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_27 == transform_hlds__inlining__CastY_28);
#line 183 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 1532 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 183 "inlining.m"
    else
#line 183 "inlining.m"
      {
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20;
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_37_37 = (MR_Integer) transform_hlds__inlining__V_4_4;
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_38_38 = (MR_Integer) transform_hlds__inlining__V_12_12;

#line 183 "inlining.m"
        {
#line 183 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_20_20, transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_38_38);
        }
#line 1582 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 183 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_20_20;
#line 183 "inlining.m"
        else
#line 183 "inlining.m"
          {
#line 183 "inlining.m"
            MR_Word transform_hlds__inlining__V_21_21;
#line 183 "inlining.m"
            MR_Integer transform_hlds__inlining__V_39_39 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 183 "inlining.m"
            MR_Integer transform_hlds__inlining__V_40_40 = (MR_Integer) transform_hlds__inlining__V_13_13;

#line 183 "inlining.m"
            {
#line 183 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_21_21, transform_hlds__inlining__V_39_39, transform_hlds__inlining__V_40_40);
            }
#line 1606 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_21_21 == (MR_Integer) 0);
#line 183 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_21_21;
#line 183 "inlining.m"
            else
#line 183 "inlining.m"
              {
#line 183 "inlining.m"
                MR_Word transform_hlds__inlining__V_22_22;

#line 183 "inlining.m"
                {
#line 183 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_22_22, transform_hlds__inlining__V_6_6, transform_hlds__inlining__V_14_14);
                }
#line 1626 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_22_22 == (MR_Integer) 0);
#line 183 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_22_22;
#line 183 "inlining.m"
                else
#line 183 "inlining.m"
                  {
#line 183 "inlining.m"
                    MR_Word transform_hlds__inlining__V_23_23;

#line 183 "inlining.m"
                    {
#line 183 "inlining.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_23_23, transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_15_15);
                    }
#line 1646 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_23_23 == (MR_Integer) 0);
#line 183 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_23_23;
#line 183 "inlining.m"
                    else
#line 183 "inlining.m"
                      {
#line 183 "inlining.m"
                        MR_Word transform_hlds__inlining__V_24_24;

#line 183 "inlining.m"
                        {
#line 183 "inlining.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_24_24, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_16_16);
                        }
#line 1666 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_24_24 == (MR_Integer) 0);
#line 183 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_24_24;
#line 183 "inlining.m"
                        else
#line 183 "inlining.m"
                          {
#line 183 "inlining.m"
                            MR_Word transform_hlds__inlining__V_25_25;

#line 183 "inlining.m"
                            {
#line 183 "inlining.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_25_25, transform_hlds__inlining__V_9_9, transform_hlds__inlining__V_17_17);
                            }
#line 1686 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_25_25 == (MR_Integer) 0);
#line 183 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_25_25;
#line 183 "inlining.m"
                            else
#line 183 "inlining.m"
                              {
#line 183 "inlining.m"
                                MR_Word transform_hlds__inlining__V_26_26;
#line 183 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_41_41 = (MR_Integer) transform_hlds__inlining__V_10_10;
#line 183 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_42_42 = (MR_Integer) transform_hlds__inlining__V_18_18;

#line 183 "inlining.m"
                                {
#line 183 "inlining.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_26_26, transform_hlds__inlining__V_41_41, transform_hlds__inlining__V_42_42);
                                }
#line 1710 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_26_26 == (MR_Integer) 0);
#line 183 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 183 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_26_26;
#line 183 "inlining.m"
                                else
#line 183 "inlining.m"
                                  {
#line 183 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_43_43 = (MR_Integer) transform_hlds__inlining__V_11_11;
#line 183 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_44_44 = (MR_Integer) transform_hlds__inlining__V_19_19;

#line 183 "inlining.m"
                                    {
#line 183 "inlining.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_43_43, transform_hlds__inlining__V_44_44);
#line 183 "inlining.m"
                                      return;
                                    }
#line 183 "inlining.m"
                                  }
#line 183 "inlining.m"
                              }
#line 183 "inlining.m"
                          }
#line 183 "inlining.m"
                      }
#line 183 "inlining.m"
                  }
#line 183 "inlining.m"
              }
#line 183 "inlining.m"
          }
#line 183 "inlining.m"
      }
#line 183 "inlining.m"
  }
#line 183 "inlining.m"
}

#line 183 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 183 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 183 "inlining.m"
{
#line 183 "inlining.m"
  {
#line 183 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 183 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_19 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 183 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_20 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 183 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_19 == transform_hlds__inlining__CastY_20);
#line 183 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 183 "inlining.m"
    else
#line 183 "inlining.m"
      {
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 183 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 183 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1816 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_11_11);
#line 183 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
          {
#line 1822 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_12_12);
#line 183 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
              {
#line 1828 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_13_13);
#line 183 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                  {
#line 1834 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_6_6 == transform_hlds__inlining__V_14_14);
#line 183 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                      {
#line 1840 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_7_7 == transform_hlds__inlining__V_15_15);
#line 183 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                          {
#line 1846 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == transform_hlds__inlining__V_16_16);
#line 183 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 183 "inlining.m"
                              {
#line 1852 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_9_9 == transform_hlds__inlining__V_17_17);
#line 183 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 1856 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_10_10 == transform_hlds__inlining__V_18_18);
#line 183 "inlining.m"
                              }
#line 183 "inlining.m"
                          }
#line 183 "inlining.m"
                      }
#line 183 "inlining.m"
                  }
#line 183 "inlining.m"
              }
#line 183 "inlining.m"
          }
#line 183 "inlining.m"
      }
#line 183 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 183 "inlining.m"
  }
#line 183 "inlining.m"
}

#line 404 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 404 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 404 "inlining.m"
{
#line 404 "inlining.m"
  {
#line 404 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 404 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_51 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 404 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_52 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 404 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_51 == transform_hlds__inlining__CastY_52);
#line 404 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 1903 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 404 "inlining.m"
    else
#line 404 "inlining.m"
      {
#line 404 "inlining.m"
        MR_Integer transform_hlds__inlining__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Integer transform_hlds__inlining__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 8)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 9)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_36_36;

#line 404 "inlining.m"
        {
#line 404 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_36_36, transform_hlds__inlining__V_4_4, transform_hlds__inlining__V_20_20);
        }
#line 1981 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_36_36 == (MR_Integer) 0);
#line 404 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_36_36;
#line 404 "inlining.m"
        else
#line 404 "inlining.m"
          {
#line 404 "inlining.m"
            MR_Word transform_hlds__inlining__V_37_37;
#line 404 "inlining.m"
            MR_Integer transform_hlds__inlining__V_69_69 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 404 "inlining.m"
            MR_Integer transform_hlds__inlining__V_70_70 = (MR_Integer) transform_hlds__inlining__V_21_21;

#line 404 "inlining.m"
            {
#line 404 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_69_69, transform_hlds__inlining__V_70_70);
            }
#line 2005 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_37_37 == (MR_Integer) 0);
#line 404 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_37_37;
#line 404 "inlining.m"
            else
#line 404 "inlining.m"
              {
#line 404 "inlining.m"
                MR_Word transform_hlds__inlining__V_38_38;
#line 404 "inlining.m"
                MR_Integer transform_hlds__inlining__V_71_71 = (MR_Integer) transform_hlds__inlining__V_6_6;
#line 404 "inlining.m"
                MR_Integer transform_hlds__inlining__V_72_72 = (MR_Integer) transform_hlds__inlining__V_22_22;

#line 404 "inlining.m"
                {
#line 404 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_38_38, transform_hlds__inlining__V_71_71, transform_hlds__inlining__V_72_72);
                }
#line 2029 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_38_38 == (MR_Integer) 0);
#line 404 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_38_38;
#line 404 "inlining.m"
                else
#line 404 "inlining.m"
                  {
#line 404 "inlining.m"
                    MR_Word transform_hlds__inlining__V_39_39;

#line 404 "inlining.m"
                    {
#line 404 "inlining.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[2], &transform_hlds__inlining__V_39_39, ((MR_Box) (transform_hlds__inlining__V_7_7)), ((MR_Box) (transform_hlds__inlining__V_23_23)));
                    }
#line 2049 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_39_39 == (MR_Integer) 0);
#line 404 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_39_39;
#line 404 "inlining.m"
                    else
#line 404 "inlining.m"
                      {
#line 404 "inlining.m"
                        MR_Word transform_hlds__inlining__V_40_40;

#line 404 "inlining.m"
                        {
#line 404 "inlining.m"
                          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__inlining__V_40_40, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_24_24);
                        }
#line 2069 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_40_40 == (MR_Integer) 0);
#line 404 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_40_40;
#line 404 "inlining.m"
                        else
#line 404 "inlining.m"
                          {
#line 404 "inlining.m"
                            MR_Word transform_hlds__inlining__V_41_41;

#line 404 "inlining.m"
                            {
#line 404 "inlining.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__V_41_41, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                            }
#line 2089 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_41_41 == (MR_Integer) 0);
#line 404 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_41_41;
#line 404 "inlining.m"
                            else
#line 404 "inlining.m"
                              {
#line 404 "inlining.m"
                                MR_Word transform_hlds__inlining__V_42_42;

#line 404 "inlining.m"
                                {
#line 404 "inlining.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, &transform_hlds__inlining__V_42_42, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                }
#line 2109 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_42_42 == (MR_Integer) 0);
#line 404 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_42_42;
#line 404 "inlining.m"
                                else
#line 404 "inlining.m"
                                  {
#line 404 "inlining.m"
                                    MR_Word transform_hlds__inlining__V_43_43;

#line 404 "inlining.m"
                                    {
#line 404 "inlining.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[4], &transform_hlds__inlining__V_43_43, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                    }
#line 2129 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_43_43 == (MR_Integer) 0);
#line 404 "inlining.m"
                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_43_43;
#line 404 "inlining.m"
                                    else
#line 404 "inlining.m"
                                      {
#line 404 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_44_44;

#line 404 "inlining.m"
                                        {
#line 404 "inlining.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__inlining__V_44_44, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                        }
#line 2149 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_44_44 == (MR_Integer) 0);
#line 404 "inlining.m"
                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_44_44;
#line 404 "inlining.m"
                                        else
#line 404 "inlining.m"
                                          {
#line 404 "inlining.m"
                                            MR_Word transform_hlds__inlining__V_45_45;

#line 404 "inlining.m"
                                            {
#line 404 "inlining.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[5], &transform_hlds__inlining__V_45_45, ((MR_Box) (transform_hlds__inlining__V_13_13)), ((MR_Box) (transform_hlds__inlining__V_29_29)));
                                            }
#line 2169 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_45_45 == (MR_Integer) 0);
#line 404 "inlining.m"
                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_45_45;
#line 404 "inlining.m"
                                            else
#line 404 "inlining.m"
                                              {
#line 404 "inlining.m"
                                                MR_Word transform_hlds__inlining__V_46_46;

#line 404 "inlining.m"
                                                {
#line 404 "inlining.m"
                                                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__inlining__V_46_46, transform_hlds__inlining__V_14_14, transform_hlds__inlining__V_30_30);
                                                }
#line 2189 "transform_hlds.inlining.c"
                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
#line 404 "inlining.m"
                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_46_46;
#line 404 "inlining.m"
                                                else
#line 404 "inlining.m"
                                                  {
#line 404 "inlining.m"
                                                    MR_Word transform_hlds__inlining__V_47_47;
#line 404 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_73_73 = (MR_Integer) transform_hlds__inlining__V_15_15;
#line 404 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_74_74 = (MR_Integer) transform_hlds__inlining__V_31_31;

#line 404 "inlining.m"
                                                    {
#line 404 "inlining.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_47_47, transform_hlds__inlining__V_73_73, transform_hlds__inlining__V_74_74);
                                                    }
#line 2213 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_47_47 == (MR_Integer) 0);
#line 404 "inlining.m"
                                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_47_47;
#line 404 "inlining.m"
                                                    else
#line 404 "inlining.m"
                                                      {
#line 404 "inlining.m"
                                                        MR_Word transform_hlds__inlining__V_48_48;
#line 404 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_75_75 = (MR_Integer) transform_hlds__inlining__V_16_16;
#line 404 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_76_76 = (MR_Integer) transform_hlds__inlining__V_32_32;

#line 404 "inlining.m"
                                                        {
#line 404 "inlining.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_48_48, transform_hlds__inlining__V_75_75, transform_hlds__inlining__V_76_76);
                                                        }
#line 2237 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_48_48 == (MR_Integer) 0);
#line 404 "inlining.m"
                                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_48_48;
#line 404 "inlining.m"
                                                        else
#line 404 "inlining.m"
                                                          {
#line 404 "inlining.m"
                                                            MR_Word transform_hlds__inlining__V_49_49;
#line 404 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_77_77 = (MR_Integer) transform_hlds__inlining__V_17_17;
#line 404 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_78_78 = (MR_Integer) transform_hlds__inlining__V_33_33;

#line 404 "inlining.m"
                                                            {
#line 404 "inlining.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_49_49, transform_hlds__inlining__V_77_77, transform_hlds__inlining__V_78_78);
                                                            }
#line 2261 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_49_49 == (MR_Integer) 0);
#line 404 "inlining.m"
                                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_49_49;
#line 404 "inlining.m"
                                                            else
#line 404 "inlining.m"
                                                              {
#line 404 "inlining.m"
                                                                MR_Word transform_hlds__inlining__V_50_50;
#line 404 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_79_79 = (MR_Integer) transform_hlds__inlining__V_18_18;
#line 404 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_80_80 = (MR_Integer) transform_hlds__inlining__V_34_34;

#line 404 "inlining.m"
                                                                {
#line 404 "inlining.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_50_50, transform_hlds__inlining__V_79_79, transform_hlds__inlining__V_80_80);
                                                                }
#line 2285 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_50_50 == (MR_Integer) 0);
#line 404 "inlining.m"
                                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 404 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_50_50;
#line 404 "inlining.m"
                                                                else
#line 404 "inlining.m"
                                                                  {
#line 404 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_81_81 = (MR_Integer) transform_hlds__inlining__V_19_19;
#line 404 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_82_82 = (MR_Integer) transform_hlds__inlining__V_35_35;

#line 404 "inlining.m"
                                                                    {
#line 404 "inlining.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_81_81, transform_hlds__inlining__V_82_82);
#line 404 "inlining.m"
                                                                      return;
                                                                    }
#line 404 "inlining.m"
                                                                  }
#line 404 "inlining.m"
                                                              }
#line 404 "inlining.m"
                                                          }
#line 404 "inlining.m"
                                                      }
#line 404 "inlining.m"
                                                  }
#line 404 "inlining.m"
                                              }
#line 404 "inlining.m"
                                          }
#line 404 "inlining.m"
                                      }
#line 404 "inlining.m"
                                  }
#line 404 "inlining.m"
                              }
#line 404 "inlining.m"
                          }
#line 404 "inlining.m"
                      }
#line 404 "inlining.m"
                  }
#line 404 "inlining.m"
              }
#line 404 "inlining.m"
          }
#line 404 "inlining.m"
      }
#line 404 "inlining.m"
  }
#line 404 "inlining.m"
}

#line 404 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 404 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 404 "inlining.m"
{
#line 404 "inlining.m"
  {
#line 404 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 404 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_35 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 404 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 404 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_35 == transform_hlds__inlining__CastY_36);
#line 404 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 404 "inlining.m"
    else
#line 404 "inlining.m"
      {
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_37_37;
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_39_39;
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeCtorInfo_40_40;
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_41_41;
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeCtorInfo_42_42;
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_43_43;
#line 404 "inlining.m"
        MR_Integer transform_hlds__inlining__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 8)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 9)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Integer transform_hlds__inlining__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 2451 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_19_19);
#line 404 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
          {
#line 2457 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_20_20);
#line 404 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
              {
#line 2463 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_21_21);
#line 404 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                  {
#line 2469 "transform_hlds.inlining.c"
                    transform_hlds__inlining__TypeInfo_37_37 = (MR_Word) &transform_hlds__inlining_scalar_common_1[2];
#line 2471 "transform_hlds.inlining.c"
                    {
#line 2473 "transform_hlds.inlining.c"
                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_37_37, ((MR_Box) (transform_hlds__inlining__V_6_6)), ((MR_Box) (transform_hlds__inlining__V_22_22)));
                    }
#line 404 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                      {
#line 2480 "transform_hlds.inlining.c"
                        {
#line 2482 "transform_hlds.inlining.c"
                          transform_hlds__inlining__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_23_23);
                        }
#line 404 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                          {
#line 2489 "transform_hlds.inlining.c"
                            transform_hlds__inlining__TypeInfo_39_39 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
#line 2491 "transform_hlds.inlining.c"
                            {
#line 2493 "transform_hlds.inlining.c"
                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_39_39, ((MR_Box) (transform_hlds__inlining__V_8_8)), ((MR_Box) (transform_hlds__inlining__V_24_24)));
                            }
#line 404 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                              {
#line 2500 "transform_hlds.inlining.c"
                                transform_hlds__inlining__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0;
#line 2502 "transform_hlds.inlining.c"
                                {
#line 2504 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                                }
#line 404 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                  {
#line 2511 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__TypeInfo_41_41 = (MR_Word) &transform_hlds__inlining_scalar_common_1[4];
#line 2513 "transform_hlds.inlining.c"
                                    {
#line 2515 "transform_hlds.inlining.c"
                                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_41_41, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                    }
#line 404 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                      {
#line 2522 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2524 "transform_hlds.inlining.c"
                                        {
#line 2526 "transform_hlds.inlining.c"
                                          transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeCtorInfo_42_42, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                        }
#line 404 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                          {
#line 2533 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__TypeInfo_43_43 = (MR_Word) &transform_hlds__inlining_scalar_common_1[5];
#line 2535 "transform_hlds.inlining.c"
                                            {
#line 2537 "transform_hlds.inlining.c"
                                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_43_43, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                            }
#line 404 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                              {
#line 2544 "transform_hlds.inlining.c"
                                                {
#line 2546 "transform_hlds.inlining.c"
                                                  transform_hlds__inlining__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__inlining__V_13_13, transform_hlds__inlining__V_29_29);
                                                }
#line 404 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                  {
#line 2553 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_14_14 == transform_hlds__inlining__V_30_30);
#line 404 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                      {
#line 2559 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_15_15 == transform_hlds__inlining__V_31_31);
#line 404 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                          {
#line 2565 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_16_16 == transform_hlds__inlining__V_32_32);
#line 404 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 404 "inlining.m"
                                                              {
#line 2571 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_17_17 == transform_hlds__inlining__V_33_33);
#line 404 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 2575 "transform_hlds.inlining.c"
                                                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_18_18 == transform_hlds__inlining__V_34_34);
#line 404 "inlining.m"
                                                              }
#line 404 "inlining.m"
                                                          }
#line 404 "inlining.m"
                                                      }
#line 404 "inlining.m"
                                                  }
#line 404 "inlining.m"
                                              }
#line 404 "inlining.m"
                                          }
#line 404 "inlining.m"
                                      }
#line 404 "inlining.m"
                                  }
#line 404 "inlining.m"
                              }
#line 404 "inlining.m"
                          }
#line 404 "inlining.m"
                      }
#line 404 "inlining.m"
                  }
#line 404 "inlining.m"
              }
#line 404 "inlining.m"
          }
#line 404 "inlining.m"
      }
#line 404 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 404 "inlining.m"
  }
#line 404 "inlining.m"
}

#line 905 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 905 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 905 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 905 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 905 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 905 "inlining.m"
{
#line 908 "inlining.m"
  {
#line 908 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 908 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "inlining.m"
      {
#line 908 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 908 "inlining.m"
      }
#line 908 "inlining.m"
    else
#line 909 "inlining.m"
      {
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 909 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 912 "inlining.m"
        {
#line 912 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 913 "inlining.m"
        {
#line 913 "inlining.m"
          hlds__hlds_goal__goal_to_par_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 914 "inlining.m"
        {
#line 914 "inlining.m"
          transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 915 "inlining.m"
        {
#line 915 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
#line 915 "inlining.m"
          return;
        }
#line 909 "inlining.m"
      }
#line 908 "inlining.m"
  }
#line 905 "inlining.m"
}

#line 893 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 893 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 893 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 893 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 893 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 893 "inlining.m"
{
#line 896 "inlining.m"
  {
#line 896 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 896 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "inlining.m"
      {
#line 896 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 896 "inlining.m"
      }
#line 896 "inlining.m"
    else
#line 897 "inlining.m"
      {
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 897 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 900 "inlining.m"
        {
#line 900 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 901 "inlining.m"
        {
#line 901 "inlining.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 902 "inlining.m"
        {
#line 902 "inlining.m"
          transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 903 "inlining.m"
        {
#line 903 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
#line 903 "inlining.m"
          return;
        }
#line 897 "inlining.m"
      }
#line 896 "inlining.m"
  }
#line 893 "inlining.m"
}

#line 881 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 881 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 881 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 881 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 881 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 881 "inlining.m"
{
#line 884 "inlining.m"
  {
#line 884 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 884 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "inlining.m"
      {
#line 884 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 884 "inlining.m"
      }
#line 884 "inlining.m"
    else
#line 885 "inlining.m"
      {
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Case_10;
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Cases_11;
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 0)));
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 1)));
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 2)));
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_16;
#line 885 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_19_19;

#line 887 "inlining.m"
        {
#line 887 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_15, &transform_hlds__inlining__Goal_16, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_19_19);
        }
#line 888 "inlining.m"
        {
#line 888 "inlining.m"
          transform_hlds__inlining__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 888 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 0) = ((MR_Box) (transform_hlds__inlining__MainConsId_13));
#line 888 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 1) = ((MR_Box) (transform_hlds__inlining__OtherConsIds_14));
#line 888 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 2) = ((MR_Box) (transform_hlds__inlining__Goal_16));
#line 888 "inlining.m"
        }
#line 889 "inlining.m"
        {
#line 889 "inlining.m"
          transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_9, &transform_hlds__inlining__Cases_11, transform_hlds__inlining__STATE_VARIABLE_Info_19_19, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 885 "inlining.m"
        {
#line 885 "inlining.m"
          MR_Word base;
#line 885 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 885 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Case_10));
#line 885 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Cases_11));
#line 885 "inlining.m"
        }
#line 885 "inlining.m"
      }
#line 884 "inlining.m"
  }
#line 881 "inlining.m"
}

#line 871 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 871 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 871 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 871 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 871 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 871 "inlining.m"
{
#line 874 "inlining.m"
  {
#line 874 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 874 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "inlining.m"
      {
#line 874 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 874 "inlining.m"
      }
#line 874 "inlining.m"
    else
#line 875 "inlining.m"
      {
#line 875 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 875 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 875 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_10;
#line 875 "inlining.m"
        MR_Word transform_hlds__inlining__Goals_11;
#line 875 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_15_15;

#line 876 "inlining.m"
        {
#line 876 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal_10, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_15_15);
        }
#line 877 "inlining.m"
        {
#line 877 "inlining.m"
          transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals_11, transform_hlds__inlining__STATE_VARIABLE_Info_15_15, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 875 "inlining.m"
        {
#line 875 "inlining.m"
          MR_Word base;
#line 875 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 875 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Goal_10));
#line 875 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Goals_11));
#line 875 "inlining.m"
        }
#line 875 "inlining.m"
      }
#line 874 "inlining.m"
  }
#line 871 "inlining.m"
}

#line 729 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 729 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 729 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 729 "inlining.m"
{
#line 732 "inlining.m"
  while (MR_TRUE)
#line 732 "inlining.m"
    {
#line 732 "inlining.m"
      /* tailcall optimized into a loop */
#line 732 "inlining.m"
      {
#line 732 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 732 "inlining.m"
        MR_Word transform_hlds__inlining__VarA_4;
#line 732 "inlining.m"
        MR_Word transform_hlds__inlining__VarB_5;
#line 732 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11;
#line 732 "inlining.m"
        MR_Word transform_hlds__inlining__Vars_6;

#line 732 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 732 "inlining.m"
          {
#line 732 "inlining.m"
            transform_hlds__inlining__VarA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 732 "inlining.m"
            transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 732 "inlining.m"
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 732 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 732 "inlining.m"
              {
#line 732 "inlining.m"
                transform_hlds__inlining__VarB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 0)));
#line 732 "inlining.m"
                transform_hlds__inlining__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 1)));
#line 734 "inlining.m"
                {
#line 734 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoA_7;
#line 734 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoB_8;
#line 734 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintA_9;
#line 734 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintB_10;

#line 734 "inlining.m"
                  {
#line 734 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarA_4, &transform_hlds__inlining__VarInfoA_7);
                  }
#line 735 "inlining.m"
                  {
#line 735 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarB_5, &transform_hlds__inlining__VarInfoB_8);
                  }
#line 736 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoA_7)) == (MR_mktag((MR_Integer) 2)));
#line 736 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 736 "inlining.m"
                    {
#line 736 "inlining.m"
                      transform_hlds__inlining__ConstraintA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoA_7, (MR_Integer) 0)));
#line 737 "inlining.m"
                      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoB_8)) == (MR_mktag((MR_Integer) 2)));
#line 737 "inlining.m"
                      if (transform_hlds__inlining__succeeded)
#line 737 "inlining.m"
                        {
#line 737 "inlining.m"
                          transform_hlds__inlining__ConstraintB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoB_8, (MR_Integer) 0)));
#line 738 "inlining.m"
                          {
#line 738 "inlining.m"
                            transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(transform_hlds__inlining__ConstraintA_9, transform_hlds__inlining__ConstraintB_10);
                          }
#line 738 "inlining.m"
                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 737 "inlining.m"
                        }
#line 736 "inlining.m"
                    }
#line 734 "inlining.m"
                }
#line 739 "inlining.m"
                if (!(transform_hlds__inlining__succeeded))
#line 740 "inlining.m"
                  {
#line 740 "inlining.m"
                    /* direct tailcall eliminated */
#line 740 "inlining.m"
                    {
#line 740 "inlining.m"
                      MR_Word transform_hlds__inlining__HeadVar__2__tmp_copy_2 = transform_hlds__inlining__V_11_11;

#line 740 "inlining.m"
                      transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__HeadVar__2__tmp_copy_2;
#line 740 "inlining.m"
                    }
#line 740 "inlining.m"
                    continue;
#line 740 "inlining.m"
                  }
#line 732 "inlining.m"
              }
#line 732 "inlining.m"
          }
#line 732 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 732 "inlining.m"
      }
#line 732 "inlining.m"
      break;
#line 732 "inlining.m"
    }
#line 729 "inlining.m"
}

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 723 "inlining.m"
{
#line 723 "inlining.m"
  {
#line 723 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 723 "inlining.m"
    MR_builtin_longjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0, 1);
#line 723 "inlining.m"
  }
#line 723 "inlining.m"
}

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 723 "inlining.m"
{
#line 723 "inlining.m"
  {
#line 723 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 723 "inlining.m"
    (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_96 = ((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_96);
#line 723 "inlining.m"
    {
#line 723 "inlining.m"
      transform_hlds__inlining__inlining_in_call_11_p_0_2(transform_hlds__inlining__env_ptr);
#line 723 "inlining.m"
      return;
    }
#line 723 "inlining.m"
  }
#line 723 "inlining.m"
}

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 723 "inlining.m"
{
#line 723 "inlining.m"
  {
#line 723 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 723 "inlining.m"
    {
#line 725 "inlining.m"
      MR_Word transform_hlds__inlining__V_94_94;
#line 725 "inlining.m"
      MR_Word transform_hlds__inlining__V_95_95;

#line 724 "inlining.m"
      {
#line 724 "inlining.m"
        mercury__multi_map__lookup_3_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_91, ((MR_Box) ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_96)), &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93);
      }
#line 725 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93)) == (MR_mktag((MR_Integer) 1)));
#line 725 "inlining.m"
      if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 725 "inlining.m"
        {
#line 725 "inlining.m"
          {
#line 725 "inlining.m"
            transform_hlds__inlining__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93, (MR_Integer) 0)));
#line 725 "inlining.m"
            transform_hlds__inlining__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93, (MR_Integer) 1)));
#line 725 "inlining.m"
          }
#line 723 "inlining.m"
          {
#line 726 "inlining.m"
            {
#line 726 "inlining.m"
              (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_89, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_93);
            }
#line 726 "inlining.m"
            if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 726 "inlining.m"
              {
#line 726 "inlining.m"
                transform_hlds__inlining__inlining_in_call_11_p_0_1(transform_hlds__inlining__env_ptr);
#line 726 "inlining.m"
                return;
              }
#line 723 "inlining.m"
          }
#line 725 "inlining.m"
        }
#line 723 "inlining.m"
    }
#line 723 "inlining.m"
  }
#line 723 "inlining.m"
}

#line 723 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 723 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 723 "inlining.m"
{
#line 723 "inlining.m"
  {
#line 723 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 723 "inlining.m"
    if (MR_builtin_setjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0) == 0)
#line 723 "inlining.m"
      {
#line 723 "inlining.m"
        {
#line 723 "inlining.m"
          mercury__list__member_2_p_1((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97, &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_96, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__inlining_in_call_11_p_0_3, transform_hlds__inlining__env_ptr);
        }
#line 723 "inlining.m"
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 723 "inlining.m"
      }
#line 723 "inlining.m"
    else
#line 723 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 723 "inlining.m"
  }
#line 723 "inlining.m"
}

#line 630 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 630 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 630 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 630 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61)
#line 630 "inlining.m"
{
#line 630 "inlining.m"
  {
#line 630 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s transform_hlds__inlining__env;

#line 630 "inlining.m"
    (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14 = transform_hlds__inlining__ArgVars_14;
#line 637 "inlining.m"
    {
#line 637 "inlining.m"
      MR_Integer transform_hlds__inlining__VarThresh_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__HighLevelCode_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__AnyTracing_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedProcs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__HeadTypeParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__Markers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__VarSet0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 6)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__VarTypes0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 7)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__TypeVarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 8)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__RttiVarMaps0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 9)));
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedParallel0_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__Requantify0_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__DetChanged0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__PurityChanged0_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__PredInfo_38;
#line 637 "inlining.m"
      MR_Word transform_hlds__inlining__ProcInfo_39;
#line 638 "inlining.m"
      MR_Word transform_hlds__inlining___DidInlining0_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 647 "inlining.m"
      MR_Word transform_hlds__inlining__UserReq_40;
#line 647 "inlining.m"
      MR_Word transform_hlds__inlining__PredInfo_81;
#line 647 "inlining.m"
      MR_Word transform_hlds__inlining__Markers_82;
#line 940 "inlining.m"
      MR_Word transform_hlds__inlining__V_83_83;
#line 718 "inlining.m"
      MR_Word transform_hlds__inlining__HeadVars_90;

#line 643 "inlining.m"
      {
#line 643 "inlining.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_26, transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, &transform_hlds__inlining__PredInfo_38, &transform_hlds__inlining__ProcInfo_39);
      }
#line 935 "inlining.m"
      {
#line 935 "inlining.m"
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_50_95_95_91_54_93_95_48_7_p_0(transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, transform_hlds__inlining__Builtin_15, transform_hlds__inlining__HighLevelCode_23, (MR_Integer) 1, transform_hlds__inlining__ModuleInfo_26);
      }
#line 647 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 647 "inlining.m"
        {
#line 938 "inlining.m"
          {
#line 938 "inlining.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_26, transform_hlds__inlining__PredId_12, &transform_hlds__inlining__PredInfo_81);
          }
#line 939 "inlining.m"
          {
#line 939 "inlining.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__PredInfo_81, &transform_hlds__inlining__Markers_82);
          }
#line 940 "inlining.m"
          transform_hlds__inlining__V_83_83 = (MR_Integer) 6;
#line 940 "inlining.m"
          {
#line 940 "inlining.m"
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_82, transform_hlds__inlining__V_83_83);
          }
#line 942 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 941 "inlining.m"
            {
#line 941 "inlining.m"
              transform_hlds__inlining__UserReq_40 = (MR_Integer) 1;
#line 941 "inlining.m"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 941 "inlining.m"
            }
#line 942 "inlining.m"
          else
#line 948 "inlining.m"
            {
#line 943 "inlining.m"
              {
#line 943 "inlining.m"
                (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_82, (MR_Integer) 8);
              }
#line 944 "inlining.m"
              if (!((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded))
#line 944 "inlining.m"
                {
#line 944 "inlining.m"
                  MR_Word transform_hlds__inlining__V_84_84;

#line 944 "inlining.m"
                  {
#line 944 "inlining.m"
                    transform_hlds__inlining__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "inlining.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_84_84, 0) = ((MR_Box) (transform_hlds__inlining__PredId_12));
#line 944 "inlining.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_84_84, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_13));
#line 944 "inlining.m"
                  }
#line 944 "inlining.m"
                  {
#line 944 "inlining.m"
                    (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__V_84_84)), transform_hlds__inlining__InlinedProcs_25);
                  }
#line 944 "inlining.m"
                }
#line 948 "inlining.m"
              if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 948 "inlining.m"
                {
#line 947 "inlining.m"
                  transform_hlds__inlining__UserReq_40 = (MR_Integer) 0;
#line 947 "inlining.m"
                  (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 948 "inlining.m"
                }
#line 948 "inlining.m"
            }
#line 647 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 647 "inlining.m"
            {
#line 650 "inlining.m"
              if ((transform_hlds__inlining__UserReq_40 == (MR_Integer) 0))
#line 651 "inlining.m"
                {
#line 651 "inlining.m"
                  MR_Word transform_hlds__inlining__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 651 "inlining.m"
                  MR_Word transform_hlds__inlining__TypeInfo_66_66;
#line 651 "inlining.m"
                  MR_Word transform_hlds__inlining__ListOfVars_41;
#line 651 "inlining.m"
                  MR_Integer transform_hlds__inlining__ThisMany_42;
#line 651 "inlining.m"
                  MR_Word transform_hlds__inlining__CalleeVarSet_43;
#line 651 "inlining.m"
                  MR_Word transform_hlds__inlining__CalleeListOfVars_44;
#line 651 "inlining.m"
                  MR_Integer transform_hlds__inlining__CalleeThisMany_45;
#line 651 "inlining.m"
                  MR_Integer transform_hlds__inlining__TotalVars_46;

#line 653 "inlining.m"
                  {
#line 653 "inlining.m"
                    mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__ListOfVars_41);
                  }
#line 3403 "transform_hlds.inlining.c"
                  transform_hlds__inlining__TypeInfo_66_66 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 654 "inlining.m"
                  {
#line 654 "inlining.m"
                    mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__ListOfVars_41, &transform_hlds__inlining__ThisMany_42);
                  }
#line 657 "inlining.m"
                  {
#line 657 "inlining.m"
                    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__CalleeVarSet_43);
                  }
#line 658 "inlining.m"
                  {
#line 658 "inlining.m"
                    mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__CalleeVarSet_43, &transform_hlds__inlining__CalleeListOfVars_44);
                  }
#line 659 "inlining.m"
                  {
#line 659 "inlining.m"
                    mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__CalleeListOfVars_44, &transform_hlds__inlining__CalleeThisMany_45);
                  }
#line 660 "inlining.m"
                  transform_hlds__inlining__TotalVars_46 = (transform_hlds__inlining__ThisMany_42 + transform_hlds__inlining__CalleeThisMany_45);
#line 661 "inlining.m"
                  (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__TotalVars_46 <= transform_hlds__inlining__VarThresh_22);
#line 651 "inlining.m"
                }
#line 650 "inlining.m"
              else
#line 649 "inlining.m"
                (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 647 "inlining.m"
              if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 647 "inlining.m"
                {
#line 719 "inlining.m"
                  {
#line 719 "inlining.m"
                    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_39, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_89);
                  }
#line 720 "inlining.m"
                  {
#line 720 "inlining.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HeadVars_90);
                  }
#line 3449 "transform_hlds.inlining.c"
                  (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 721 "inlining.m"
                  {
#line 721 "inlining.m"
                    mercury__multi_map__from_corresponding_lists_3_p_0((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_97, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__HeadVars_90, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_91);
                  }
#line 723 "inlining.m"
                  {
#line 723 "inlining.m"
                    transform_hlds__inlining__inlining_in_call_11_p_0_4(&transform_hlds__inlining__env);
                  }
#line 664 "inlining.m"
                  (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = !((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded);
#line 647 "inlining.m"
                }
#line 647 "inlining.m"
            }
#line 647 "inlining.m"
        }
#line 711 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 668 "inlining.m"
        {
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__VarSet_47;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__VarTypes_48;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__TypeVarSet_49;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__RttiVarMaps_50;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__NonLocals_51;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__Requantify_52;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__PurityChanged_53;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism0_54;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism_55;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__DetChanged_56;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__HasParallelConj_57;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__InlinedParallel_58;
#line 668 "inlining.m"
          MR_Word transform_hlds__inlining__V_62_62;
#line 673 "inlining.m"
          MR_Word transform_hlds__inlining__V_68_68;
#line 679 "inlining.m"
          MR_Word transform_hlds__inlining__V_63_63;
#line 679 "inlining.m"
          MR_Word transform_hlds__inlining__V_69_69;

#line 666 "inlining.m"
          {
#line 666 "inlining.m"
            transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__inlining__HeadTypeParams_27, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__PredInfo_38, transform_hlds__inlining__ProcInfo_39, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__VarSet_47, transform_hlds__inlining__VarTypes0_30, &transform_hlds__inlining__VarTypes_48, transform_hlds__inlining__TypeVarSet0_31, &transform_hlds__inlining__TypeVarSet_49, transform_hlds__inlining__RttiVarMaps0_32, &transform_hlds__inlining__RttiVarMaps_50, &transform_hlds__inlining__V_62_62);
          }
#line 668 "inlining.m"
          *transform_hlds__inlining__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 0)));
#line 668 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 1)));
#line 672 "inlining.m"
          {
#line 672 "inlining.m"
            transform_hlds__inlining__NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 673 "inlining.m"
          {
#line 673 "inlining.m"
            transform_hlds__inlining__V_68_68 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14);
          }
#line 673 "inlining.m"
          {
#line 673 "inlining.m"
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[6], ((MR_Box) (transform_hlds__inlining__NonLocals_51)), ((MR_Box) (transform_hlds__inlining__V_68_68)));
          }
#line 675 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 674 "inlining.m"
            transform_hlds__inlining__Requantify_52 = transform_hlds__inlining__Requantify0_35;
#line 675 "inlining.m"
          else
#line 676 "inlining.m"
            transform_hlds__inlining__Requantify_52 = (MR_Integer) 1;
#line 679 "inlining.m"
          {
#line 679 "inlining.m"
            transform_hlds__inlining__V_63_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 679 "inlining.m"
          {
#line 679 "inlining.m"
            transform_hlds__inlining__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 679 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__V_63_63 == transform_hlds__inlining__V_69_69);
#line 681 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 680 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = transform_hlds__inlining__PurityChanged0_37;
#line 681 "inlining.m"
          else
#line 682 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = (MR_Integer) 1;
#line 688 "inlining.m"
          {
#line 688 "inlining.m"
            transform_hlds__inlining__Determinism0_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 689 "inlining.m"
          {
#line 689 "inlining.m"
            transform_hlds__inlining__Determinism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 690 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__Determinism0_54 == transform_hlds__inlining__Determinism_55);
#line 692 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 691 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = transform_hlds__inlining__DetChanged0_36;
#line 692 "inlining.m"
          else
#line 693 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = (MR_Integer) 1;
#line 696 "inlining.m"
          {
#line 696 "inlining.m"
            hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HasParallelConj_57);
          }
#line 700 "inlining.m"
          if ((transform_hlds__inlining__HasParallelConj_57 == (MR_Integer) 1))
#line 702 "inlining.m"
            transform_hlds__inlining__InlinedParallel_58 = transform_hlds__inlining__InlinedParallel0_34;
#line 700 "inlining.m"
          else
#line 699 "inlining.m"
            transform_hlds__inlining__InlinedParallel_58 = (MR_Integer) 1;
#line 707 "inlining.m"
          {
#line 707 "inlining.m"
            MR_Word base;
#line 707 "inlining.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 707 "inlining.m"
            *transform_hlds__inlining__STATE_VARIABLE_Info_61 = base;
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_22));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_23 | ((transform_hlds__inlining__AnyTracing_24 << (MR_Integer) 1)))));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_25));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__inlining__ModuleInfo_26));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__inlining__HeadTypeParams_27));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__inlining__Markers_28));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__inlining__VarSet_47));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes_48));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet_49));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps_50));
#line 707 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (((MR_Integer) 1 | ((((transform_hlds__inlining__InlinedParallel_58 << (MR_Integer) 1)) | ((((transform_hlds__inlining__Requantify_52 << (MR_Integer) 2)) | ((((transform_hlds__inlining__DetChanged_56 << (MR_Integer) 3)) | ((transform_hlds__inlining__PurityChanged_53 << (MR_Integer) 4)))))))))));
#line 707 "inlining.m"
          }
#line 668 "inlining.m"
        }
#line 711 "inlining.m"
      else
#line 712 "inlining.m"
        {
#line 712 "inlining.m"
          {
#line 712 "inlining.m"
            MR_Word base;
#line 712 "inlining.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 712 "inlining.m"
            *transform_hlds__inlining__GoalExpr_18 = base;
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__inlining__PredId_12));
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_13));
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14));
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__inlining__Builtin_15));
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__inlining__Context_16));
#line 712 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__inlining__Sym_17));
#line 712 "inlining.m"
          }
#line 713 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = transform_hlds__inlining__GoalInfo0_19;
#line 713 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Info_61 = transform_hlds__inlining__STATE_VARIABLE_Info_0_60;
#line 712 "inlining.m"
        }
#line 637 "inlining.m"
    }
#line 630 "inlining.m"
  }
#line 630 "inlining.m"
}

#line 558 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 558 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 558 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 558 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 558 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56)
#line 558 "inlining.m"
{
#line 561 "inlining.m"
  {
#line 561 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 561 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 0)));
#line 561 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 1)));
#line 561 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr_16;
#line 561 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo_17;

#line 567 "inlining.m"
    if (((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 603 "inlining.m"
      {
#line 603 "inlining.m"
        MR_Word transform_hlds__inlining__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr0_8), (MR_Integer) 0);
#line 603 "inlining.m"
        MR_Word transform_hlds__inlining__SubGoal_50;

#line 604 "inlining.m"
        {
#line 604 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_49, &transform_hlds__inlining__SubGoal_50, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
        }
#line 605 "inlining.m"
        transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__inlining__SubGoal_50);
#line 606 "inlining.m"
        transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 603 "inlining.m"
      }
#line 567 "inlining.m"
    else
#line 567 "inlining.m"
      if (((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 564 "inlining.m"
        {
#line 564 "inlining.m"
          MR_Word transform_hlds__inlining__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)));
#line 564 "inlining.m"
          MR_Integer transform_hlds__inlining__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 564 "inlining.m"
          MR_Word transform_hlds__inlining__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 564 "inlining.m"
          MR_Word transform_hlds__inlining__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 564 "inlining.m"
          MR_Word transform_hlds__inlining__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 564 "inlining.m"
          MR_Word transform_hlds__inlining__Sym_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 5)));

#line 565 "inlining.m"
          {
#line 565 "inlining.m"
            transform_hlds__inlining__inlining_in_call_11_p_0(transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, transform_hlds__inlining__ArgVars_12, transform_hlds__inlining__Builtin_13, transform_hlds__inlining__Context_14, transform_hlds__inlining__Sym_15, &transform_hlds__inlining__GoalExpr_16, transform_hlds__inlining__GoalInfo0_9, &transform_hlds__inlining__GoalInfo_17, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
#line 564 "inlining.m"
        }
#line 567 "inlining.m"
      else
#line 567 "inlining.m"
        if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 575 "inlining.m"
          {
#line 575 "inlining.m"
            MR_Word transform_hlds__inlining__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 575 "inlining.m"
            MR_Word transform_hlds__inlining__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 575 "inlining.m"
            MR_Word transform_hlds__inlining__Goals_37;

#line 579 "inlining.m"
            if ((transform_hlds__inlining__ConjType_35 == (MR_Integer) 1))
#line 581 "inlining.m"
              {
#line 581 "inlining.m"
                transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 579 "inlining.m"
            else
#line 578 "inlining.m"
              {
#line 578 "inlining.m"
                transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 583 "inlining.m"
            {
#line 583 "inlining.m"
              transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 583 "inlining.m"
              MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 583 "inlining.m"
              MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__ConjType_35));
#line 583 "inlining.m"
              MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Goals_37));
#line 583 "inlining.m"
            }
#line 584 "inlining.m"
            transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 575 "inlining.m"
          }
#line 567 "inlining.m"
        else
#line 567 "inlining.m"
          if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 586 "inlining.m"
            {
#line 586 "inlining.m"
              MR_Word transform_hlds__inlining__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 586 "inlining.m"
              MR_Word transform_hlds__inlining__Goals_71;

#line 587 "inlining.m"
              {
#line 587 "inlining.m"
                transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_70, &transform_hlds__inlining__Goals_71, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 588 "inlining.m"
              {
#line 588 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 588 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Goals_71));
#line 588 "inlining.m"
              }
#line 589 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 586 "inlining.m"
            }
#line 567 "inlining.m"
          else
#line 567 "inlining.m"
            if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 596 "inlining.m"
              {
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Cond0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Then0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Cond_46;
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Then_47;
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__Else_48;
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_62_62;
#line 596 "inlining.m"
                MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_63_63;

#line 597 "inlining.m"
                {
#line 597 "inlining.m"
                  transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Cond0_43, &transform_hlds__inlining__Cond_46, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, &transform_hlds__inlining__STATE_VARIABLE_Info_62_62);
                }
#line 598 "inlining.m"
                {
#line 598 "inlining.m"
                  transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Then0_44, &transform_hlds__inlining__Then_47, transform_hlds__inlining__STATE_VARIABLE_Info_62_62, &transform_hlds__inlining__STATE_VARIABLE_Info_63_63);
                }
#line 599 "inlining.m"
                {
#line 599 "inlining.m"
                  transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Else0_45, &transform_hlds__inlining__Else_48, transform_hlds__inlining__STATE_VARIABLE_Info_63_63, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                }
#line 600 "inlining.m"
                {
#line 600 "inlining.m"
                  transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 600 "inlining.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 600 "inlining.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Vars_42));
#line 600 "inlining.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Cond_46));
#line 600 "inlining.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Then_47));
#line 600 "inlining.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__inlining__Else_48));
#line 600 "inlining.m"
                }
#line 601 "inlining.m"
                transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 596 "inlining.m"
              }
#line 567 "inlining.m"
            else
#line 567 "inlining.m"
              if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 608 "inlining.m"
                {
#line 608 "inlining.m"
                  MR_Word transform_hlds__inlining__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 608 "inlining.m"
                  MR_Word transform_hlds__inlining__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 610 "inlining.m"
                  MR_Word transform_hlds__inlining__FGT_53;
#line 610 "inlining.m"
                  MR_Word transform_hlds__inlining__V_52_52;

#line 610 "inlining.m"
                  transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 610 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 610 "inlining.m"
                    {
#line 610 "inlining.m"
                      transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 1)));
#line 610 "inlining.m"
                      transform_hlds__inlining__FGT_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 2)));
#line 612 "inlining.m"
                      if ((transform_hlds__inlining__FGT_53 == (MR_Integer) 1))
#line 611 "inlining.m"
                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 612 "inlining.m"
                      else
#line 612 "inlining.m"
                        if ((transform_hlds__inlining__FGT_53 == (MR_Integer) 2))
#line 612 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 612 "inlining.m"
                        else
#line 612 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_FALSE;
#line 610 "inlining.m"
                    }
#line 618 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 616 "inlining.m"
                    {
#line 616 "inlining.m"
                      transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 617 "inlining.m"
                      transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 617 "inlining.m"
                      *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 616 "inlining.m"
                    }
#line 618 "inlining.m"
                  else
#line 619 "inlining.m"
                    {
#line 619 "inlining.m"
                      MR_Word transform_hlds__inlining__SubGoal_72;

#line 619 "inlining.m"
                      {
#line 619 "inlining.m"
                        transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_74, &transform_hlds__inlining__SubGoal_72, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                      }
#line 620 "inlining.m"
                      {
#line 620 "inlining.m"
                        transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 620 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 620 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Reason_51));
#line 620 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__SubGoal_72));
#line 620 "inlining.m"
                      }
#line 621 "inlining.m"
                      transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 619 "inlining.m"
                    }
#line 608 "inlining.m"
                }
#line 567 "inlining.m"
              else
#line 567 "inlining.m"
                if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 624 "inlining.m"
                  {
#line 626 "inlining.m"
                    {
#line 626 "inlining.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
#line 626 "inlining.m"
                      return;
                    }
#line 624 "inlining.m"
                  }
#line 567 "inlining.m"
                else
#line 567 "inlining.m"
                  if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 591 "inlining.m"
                    {
#line 591 "inlining.m"
                      MR_Word transform_hlds__inlining__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 591 "inlining.m"
                      MR_Word transform_hlds__inlining__Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 591 "inlining.m"
                      MR_Word transform_hlds__inlining__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 591 "inlining.m"
                      MR_Word transform_hlds__inlining__Cases_41;

#line 592 "inlining.m"
                      {
#line 592 "inlining.m"
                        transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_40, &transform_hlds__inlining__Cases_41, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                      }
#line 593 "inlining.m"
                      {
#line 593 "inlining.m"
                        transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 593 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Var_38));
#line 593 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Det_39));
#line 593 "inlining.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Cases_41));
#line 593 "inlining.m"
                      }
#line 594 "inlining.m"
                      transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 591 "inlining.m"
                    }
#line 567 "inlining.m"
                  else
#line 571 "inlining.m"
                    {
#line 572 "inlining.m"
                      transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 573 "inlining.m"
                      transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 573 "inlining.m"
                      *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 571 "inlining.m"
                    }
#line 628 "inlining.m"
    {
#line 628 "inlining.m"
      MR_Word base;
#line 628 "inlining.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "inlining.m"
      *transform_hlds__inlining__Goal_6 = base;
#line 628 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_16));
#line 628 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo_17));
#line 628 "inlining.m"
    }
#line 561 "inlining.m"
  }
#line 558 "inlining.m"
}

#line 459 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 459 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55,
#line 459 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56)
#line 459 "inlining.m"
{
#line 462 "inlining.m"
  {
#line 462 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_98_98;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_99_99;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_100_100;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_101_101;
#line 462 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThresh_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 4)));
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 0)));
#line 462 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 1)));
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable0_17;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable0_18;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__UnivQTVars_19;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet0_20;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__Markers0_21;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__Goal0_22;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet0_23;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes0_24;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps0_25;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo0_31;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__Goal_32;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo_33;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__Markers_40;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet_41;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes_42;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet_43;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps_44;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__DidInlining_45;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedParallel_46;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__Requantify_47;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__DetChanged_48;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__PurityChanged_49;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable_50;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable_51;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73;
#line 462 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74;
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 463 "inlining.m"
    MR_Word transform_hlds__inlining__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 463 "inlining.m"
    MR_Integer transform_hlds__inlining__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 1)));
#line 463 "inlining.m"
    MR_Integer transform_hlds__inlining__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 2)));
#line 463 "inlining.m"
    MR_Integer transform_hlds__inlining__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 3)));
#line 471 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57;
#line 473 "inlining.m"
    MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58;
#line 498 "inlining.m"
    MR_Integer transform_hlds__inlining__V_34_34;
#line 498 "inlining.m"
    MR_Word transform_hlds__inlining__V_35_35;
#line 498 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 498 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 498 "inlining.m"
    MR_Word transform_hlds__inlining__V_38_38;
#line 498 "inlining.m"
    MR_Word transform_hlds__inlining__V_39_39;

#line 470 "inlining.m"
    {
#line 470 "inlining.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__inlining__PredTable0_17);
    }
#line 4183 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4185 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_99_99 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 471 "inlining.m"
    {
#line 471 "inlining.m"
      mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_98_98, transform_hlds__inlining__TypeCtorInfo_99_99, transform_hlds__inlining__PredTable0_17, ((MR_Box) (transform_hlds__inlining__PredId_13)), &transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57);
    }
#line 471 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57 = ((MR_Word) transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_57_57);
#line 472 "inlining.m"
    {
#line 472 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__ProcTable0_18);
    }
#line 4199 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_100_100 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4201 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 473 "inlining.m"
    {
#line 473 "inlining.m"
      mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_100_100, transform_hlds__inlining__TypeCtorInfo_101_101, transform_hlds__inlining__ProcTable0_18, ((MR_Box) (transform_hlds__inlining__ProcId_14)), &transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58);
    }
#line 473 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_58_58);
#line 475 "inlining.m"
    {
#line 475 "inlining.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__UnivQTVars_19);
    }
#line 476 "inlining.m"
    {
#line 476 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__TypeVarSet0_20);
    }
#line 477 "inlining.m"
    {
#line 477 "inlining.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__Markers0_21);
    }
#line 479 "inlining.m"
    {
#line 479 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__Goal0_22);
    }
#line 480 "inlining.m"
    {
#line 480 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__VarSet0_23);
    }
#line 481 "inlining.m"
    {
#line 481 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__VarTypes0_24);
    }
#line 482 "inlining.m"
    {
#line 482 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__RttiVarMaps0_25);
    }
#line 490 "inlining.m"
    {
#line 490 "inlining.m"
      transform_hlds__inlining__InlineInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_10));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_12 << (MR_Integer) 1)))));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_7));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 4) = ((MR_Box) (transform_hlds__inlining__UnivQTVars_19));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 5) = ((MR_Box) (transform_hlds__inlining__Markers0_21));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 6) = ((MR_Box) (transform_hlds__inlining__VarSet0_23));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes0_24));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet0_20));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps0_25));
#line 490 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 10) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))));
#line 490 "inlining.m"
    }
#line 496 "inlining.m"
    {
#line 496 "inlining.m"
      transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_22, &transform_hlds__inlining__Goal_32, transform_hlds__inlining__InlineInfo0_31, &transform_hlds__inlining__InlineInfo_33);
    }
#line 498 "inlining.m"
    transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 0)));
#line 498 "inlining.m"
    transform_hlds__inlining__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 2)));
#line 498 "inlining.m"
    transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 3)));
#line 498 "inlining.m"
    transform_hlds__inlining__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 4)));
#line 498 "inlining.m"
    transform_hlds__inlining__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 5)));
#line 498 "inlining.m"
    transform_hlds__inlining__VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 6)));
#line 498 "inlining.m"
    transform_hlds__inlining__VarTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 7)));
#line 498 "inlining.m"
    transform_hlds__inlining__TypeVarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 8)));
#line 498 "inlining.m"
    transform_hlds__inlining__RttiVarMaps_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 9)));
#line 498 "inlining.m"
    transform_hlds__inlining__DidInlining_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__InlinedParallel_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__Requantify_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__DetChanged_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 498 "inlining.m"
    transform_hlds__inlining__PurityChanged_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 502 "inlining.m"
    {
#line 502 "inlining.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(transform_hlds__inlining__Markers_40, transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59);
    }
#line 503 "inlining.m"
    {
#line 503 "inlining.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__inlining__TypeVarSet_43, transform_hlds__inlining__STATE_VARIABLE_PredInfo_59_59, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60);
    }
#line 505 "inlining.m"
    {
#line 505 "inlining.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__inlining__VarSet_41, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61);
    }
#line 506 "inlining.m"
    {
#line 506 "inlining.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__inlining__VarTypes_42, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62);
    }
#line 507 "inlining.m"
    {
#line 507 "inlining.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__inlining__RttiVarMaps_44, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_62_62, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63);
    }
#line 508 "inlining.m"
    {
#line 508 "inlining.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__inlining__Goal_32, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 513 "inlining.m"
    if ((transform_hlds__inlining__InlinedParallel_46 == (MR_Integer) 0))
#line 514 "inlining.m"
      transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64;
#line 513 "inlining.m"
    else
#line 511 "inlining.m"
      {
#line 512 "inlining.m"
        {
#line 512 "inlining.m"
          hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_64_64, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66);
        }
#line 511 "inlining.m"
      }
#line 520 "inlining.m"
    if ((transform_hlds__inlining__Requantify_47 == (MR_Integer) 0))
#line 521 "inlining.m"
      transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66;
#line 520 "inlining.m"
    else
#line 518 "inlining.m"
      {
#line 519 "inlining.m"
        {
#line 519 "inlining.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_66_66, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68);
        }
#line 518 "inlining.m"
      }
#line 528 "inlining.m"
    if ((transform_hlds__inlining__DidInlining_45 == (MR_Integer) 0))
#line 529 "inlining.m"
      {
#line 529 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55;
#line 529 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68;
#line 529 "inlining.m"
      }
#line 528 "inlining.m"
    else
#line 525 "inlining.m"
      {
#line 526 "inlining.m"
        {
#line 526 "inlining.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_68_68, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_55, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71);
        }
#line 525 "inlining.m"
      }
#line 532 "inlining.m"
    {
#line 532 "inlining.m"
      mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_100_100, transform_hlds__inlining__TypeCtorInfo_101_101, ((MR_Box) (transform_hlds__inlining__ProcId_14)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ProcInfo_70_70)), transform_hlds__inlining__ProcTable0_18, &transform_hlds__inlining__ProcTable_50);
    }
#line 533 "inlining.m"
    {
#line 533 "inlining.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__inlining__ProcTable_50, transform_hlds__inlining__STATE_VARIABLE_PredInfo_60_60, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72);
    }
#line 538 "inlining.m"
    if ((transform_hlds__inlining__PurityChanged_49 == (MR_Integer) 0))
#line 539 "inlining.m"
      transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73 = transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72;
#line 538 "inlining.m"
    else
#line 537 "inlining.m"
      {
#line 537 "inlining.m"
        check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__inlining__PredProcId_6, transform_hlds__inlining__STATE_VARIABLE_PredInfo_72_72, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73);
      }
#line 542 "inlining.m"
    {
#line 542 "inlining.m"
      mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_98_98, transform_hlds__inlining__TypeCtorInfo_99_99, ((MR_Box) (transform_hlds__inlining__PredId_13)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_PredInfo_73_73)), transform_hlds__inlining__PredTable0_17, &transform_hlds__inlining__PredTable_51);
    }
#line 543 "inlining.m"
    {
#line 543 "inlining.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__inlining__PredTable_51, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74);
    }
#line 551 "inlining.m"
    if ((transform_hlds__inlining__DetChanged_48 == (MR_Integer) 0))
#line 552 "inlining.m"
      *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74;
#line 551 "inlining.m"
    else
#line 549 "inlining.m"
      {
#line 550 "inlining.m"
        MR_Word transform_hlds__inlining__V_52_52;
#line 550 "inlining.m"
        MR_Word transform_hlds__inlining__V_53_53;
#line 550 "inlining.m"
        MR_Word transform_hlds__inlining__V_54_54;

#line 550 "inlining.m"
        {
#line 550 "inlining.m"
          check_hlds__det_analysis__det_infer_proc_8_p_0(transform_hlds__inlining__PredId_13, transform_hlds__inlining__ProcId_14, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_74_74, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_56, &transform_hlds__inlining__V_52_52, &transform_hlds__inlining__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__inlining__V_54_54);
        }
#line 549 "inlining.m"
      }
#line 462 "inlining.m"
  }
#line 459 "inlining.m"
}

#line 373 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 373 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 373 "inlining.m"
{
#line 375 "inlining.m"
  while (MR_TRUE)
#line 375 "inlining.m"
    {
#line 375 "inlining.m"
      /* tailcall optimized into a loop */
#line 375 "inlining.m"
      {
#line 375 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 375 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "inlining.m"
          transform_hlds__inlining__succeeded = MR_TRUE;
#line 375 "inlining.m"
        else
#line 376 "inlining.m"
          {
#line 376 "inlining.m"
            MR_Word transform_hlds__inlining__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "inlining.m"
            MR_Word transform_hlds__inlining__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 377 "inlining.m"
            {
#line 377 "inlining.m"
              transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_2);
            }
#line 376 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 378 "inlining.m"
              {
#line 378 "inlining.m"
                /* direct tailcall eliminated */
#line 378 "inlining.m"
                {
#line 378 "inlining.m"
                  MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goals_3;

#line 378 "inlining.m"
                  transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 378 "inlining.m"
                }
#line 378 "inlining.m"
                continue;
#line 378 "inlining.m"
              }
#line 376 "inlining.m"
          }
#line 375 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 375 "inlining.m"
      }
#line 375 "inlining.m"
      break;
#line 375 "inlining.m"
    }
#line 373 "inlining.m"
}

#line 345 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 345 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 345 "inlining.m"
{
#line 347 "inlining.m"
  while (MR_TRUE)
#line 347 "inlining.m"
    {
#line 347 "inlining.m"
      /* tailcall optimized into a loop */
#line 347 "inlining.m"
      {
#line 347 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;
#line 347 "inlining.m"
        MR_Word transform_hlds__inlining__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 351 "inlining.m"
        if (((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) == (MR_mktag((MR_Integer) 0))))
#line 352 "inlining.m"
          {
#line 352 "inlining.m"
            MR_Word transform_hlds__inlining__Goal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr_2), (MR_Integer) 0);

#line 353 "inlining.m"
            /* direct tailcall eliminated */
#line 353 "inlining.m"
            {
#line 353 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_5;

#line 353 "inlining.m"
              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 353 "inlining.m"
            }
#line 353 "inlining.m"
            continue;
#line 352 "inlining.m"
          }
#line 351 "inlining.m"
        else
#line 351 "inlining.m"
          if (((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) == (MR_mktag((MR_Integer) 2))))
#line 368 "inlining.m"
            {
#line 368 "inlining.m"
              MR_Word transform_hlds__inlining__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 3)));
#line 368 "inlining.m"
              MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)));
#line 368 "inlining.m"
              MR_Integer transform_hlds__inlining__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 368 "inlining.m"
              MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 368 "inlining.m"
              MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 4)));
#line 368 "inlining.m"
              MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 5)));

#line 368 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_19_19 == (MR_Integer) 0);
#line 368 "inlining.m"
            }
#line 351 "inlining.m"
          else
#line 351 "inlining.m"
            if (((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) == (MR_mktag((MR_Integer) 1))))
#line 370 "inlining.m"
              transform_hlds__inlining__succeeded = MR_TRUE;
#line 351 "inlining.m"
            else
#line 351 "inlining.m"
              if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 349 "inlining.m"
                {
#line 349 "inlining.m"
                  MR_Word transform_hlds__inlining__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 349 "inlining.m"
                  MR_Word transform_hlds__inlining__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));

#line 349 "inlining.m"
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 349 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 350 "inlining.m"
                    {
#line 350 "inlining.m"
                      return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(transform_hlds__inlining__Goals_4);
                    }
#line 349 "inlining.m"
                }
#line 351 "inlining.m"
              else
#line 351 "inlining.m"
                if (((((MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 355 "inlining.m"
                  {
#line 355 "inlining.m"
                    MR_Word transform_hlds__inlining__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 355 "inlining.m"
                    MR_Word transform_hlds__inlining__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 357 "inlining.m"
                    MR_Word transform_hlds__inlining__FGT_8;
#line 357 "inlining.m"
                    MR_Word transform_hlds__inlining__V_7_7;

#line 357 "inlining.m"
                    transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 357 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 357 "inlining.m"
                      {
#line 357 "inlining.m"
                        transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 1)));
#line 357 "inlining.m"
                        transform_hlds__inlining__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 2)));
#line 359 "inlining.m"
                        if ((transform_hlds__inlining__FGT_8 == (MR_Integer) 1))
#line 358 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 359 "inlining.m"
                        else
#line 359 "inlining.m"
                          if ((transform_hlds__inlining__FGT_8 == (MR_Integer) 2))
#line 359 "inlining.m"
                            transform_hlds__inlining__succeeded = MR_TRUE;
#line 359 "inlining.m"
                          else
#line 359 "inlining.m"
                            transform_hlds__inlining__succeeded = MR_FALSE;
#line 357 "inlining.m"
                      }
#line 364 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 363 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 364 "inlining.m"
                    else
#line 365 "inlining.m"
                      {
#line 365 "inlining.m"
                        /* direct tailcall eliminated */
#line 365 "inlining.m"
                        {
#line 365 "inlining.m"
                          MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_21;

#line 365 "inlining.m"
                          transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 365 "inlining.m"
                        }
#line 365 "inlining.m"
                        continue;
#line 365 "inlining.m"
                      }
#line 355 "inlining.m"
                  }
#line 351 "inlining.m"
                else
#line 351 "inlining.m"
                  transform_hlds__inlining__succeeded = MR_FALSE;
#line 347 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 347 "inlining.m"
      }
#line 347 "inlining.m"
      break;
#line 347 "inlining.m"
    }
#line 345 "inlining.m"
}

#line 268 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 268 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 268 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28)
#line 268 "inlining.m"
{
#line 310 "inlining.m"
  {
#line 310 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 274 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 1)));
#line 274 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 2)));
#line 274 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 3)));
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 274 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_19;
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__Procs_20;
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_21;
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_22;
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__Entity_23;
#line 274 "inlining.m"
    MR_Integer transform_hlds__inlining__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 4)));
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 274 "inlining.m"
    MR_Word transform_hlds__inlining__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 282 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_ProcInfo_21;

#line 280 "inlining.m"
    {
#line 280 "inlining.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_17, &transform_hlds__inlining__PredInfo_19);
    }
#line 281 "inlining.m"
    {
#line 281 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__PredInfo_19, &transform_hlds__inlining__Procs_20);
    }
#line 282 "inlining.m"
    {
#line 282 "inlining.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__inlining__Procs_20, ((MR_Box) (transform_hlds__inlining__ProcId_18)), &transform_hlds__inlining__conv0_ProcInfo_21);
    }
#line 282 "inlining.m"
    transform_hlds__inlining__ProcInfo_21 = ((MR_Word) transform_hlds__inlining__conv0_ProcInfo_21);
#line 283 "inlining.m"
    {
#line 283 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__CalledGoal_22);
    }
#line 284 "inlining.m"
    {
#line 284 "inlining.m"
      transform_hlds__inlining__Entity_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 284 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_17));
#line 284 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_18));
#line 284 "inlining.m"
    }
#line 288 "inlining.m"
    {
#line 288 "inlining.m"
      MR_Integer transform_hlds__inlining__Size_78;

#line 288 "inlining.m"
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Simple_12 == (MR_Integer) 1);
#line 288 "inlining.m"
      if (transform_hlds__inlining__succeeded)
#line 288 "inlining.m"
        {
#line 332 "inlining.m"
          {
#line 332 "inlining.m"
            hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_78);
          }
#line 334 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__SimpleThreshold_16);
#line 335 "inlining.m"
          if (!(transform_hlds__inlining__succeeded))
#line 341 "inlining.m"
            {
#line 341 "inlining.m"
              MR_Integer transform_hlds__inlining__V_79_79 = (transform_hlds__inlining__SimpleThreshold_16 * (MR_Integer) 3);

#line 341 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__V_79_79);
#line 341 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 342 "inlining.m"
                {
#line 342 "inlining.m"
                  transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_22);
                }
#line 341 "inlining.m"
            }
#line 288 "inlining.m"
        }
#line 288 "inlining.m"
    }
#line 290 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 290 "inlining.m"
      {
#line 291 "inlining.m"
        {
#line 291 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_72_72;
#line 291 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_73_73;
#line 291 "inlining.m"
          MR_Word transform_hlds__inlining__Needed_24;
#line 291 "inlining.m"
          MR_Integer transform_hlds__inlining__NumUses_25;
#line 291 "inlining.m"
          MR_Integer transform_hlds__inlining__Size_26;
#line 291 "inlining.m"
          MR_Integer transform_hlds__inlining__V_30_30;
#line 291 "inlining.m"
          MR_Integer transform_hlds__inlining__V_31_31;
#line 292 "inlining.m"
          MR_Box transform_hlds__inlining__conv1_Needed_24;

#line 291 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_15 > (MR_Integer) 0);
#line 291 "inlining.m"
          if (transform_hlds__inlining__succeeded)
#line 291 "inlining.m"
            {
#line 4848 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 4850 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_73_73 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 292 "inlining.m"
              {
#line 292 "inlining.m"
                transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_72_72, transform_hlds__inlining__TypeCtorInfo_73_73, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv1_Needed_24);
              }
#line 292 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 292 "inlining.m"
                {
#line 292 "inlining.m"
                  transform_hlds__inlining__Needed_24 = ((MR_Word) transform_hlds__inlining__conv1_Needed_24);
#line 292 "inlining.m"
                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 292 "inlining.m"
                }
#line 291 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 291 "inlining.m"
                {
#line 293 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_24)) == (MR_mktag((MR_Integer) 1)));
#line 293 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 293 "inlining.m"
                    {
#line 293 "inlining.m"
                      transform_hlds__inlining__NumUses_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_24, (MR_Integer) 0)));
#line 294 "inlining.m"
                      {
#line 294 "inlining.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_26);
                      }
#line 299 "inlining.m"
                      transform_hlds__inlining__V_31_31 = (transform_hlds__inlining__Size_26 - transform_hlds__inlining__CallCost_14);
#line 299 "inlining.m"
                      transform_hlds__inlining__V_30_30 = (transform_hlds__inlining__V_31_31 * transform_hlds__inlining__NumUses_25);
#line 299 "inlining.m"
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_30_30 <= transform_hlds__inlining__CompoundThreshold_15);
#line 293 "inlining.m"
                    }
#line 291 "inlining.m"
                }
#line 291 "inlining.m"
            }
#line 291 "inlining.m"
        }
#line 290 "inlining.m"
        if (!(transform_hlds__inlining__succeeded))
#line 301 "inlining.m"
          {
#line 301 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_74_74;
#line 301 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_75_75;
#line 301 "inlining.m"
            MR_Word transform_hlds__inlining__Needed_33;
#line 301 "inlining.m"
            MR_Integer transform_hlds__inlining__NumUses_34;
#line 302 "inlining.m"
            MR_Box transform_hlds__inlining__conv2_Needed_33;

#line 301 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_13 == (MR_Integer) 1);
#line 301 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 301 "inlining.m"
              {
#line 4919 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_74_74 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 4921 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 302 "inlining.m"
                {
#line 302 "inlining.m"
                  transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_74_74, transform_hlds__inlining__TypeCtorInfo_75_75, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv2_Needed_33);
                }
#line 302 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 302 "inlining.m"
                  {
#line 302 "inlining.m"
                    transform_hlds__inlining__Needed_33 = ((MR_Word) transform_hlds__inlining__conv2_Needed_33);
#line 302 "inlining.m"
                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 302 "inlining.m"
                  }
#line 301 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 301 "inlining.m"
                  {
#line 303 "inlining.m"
                    transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_33)) == (MR_mktag((MR_Integer) 1)));
#line 303 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 303 "inlining.m"
                      {
#line 303 "inlining.m"
                        transform_hlds__inlining__NumUses_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_33, (MR_Integer) 0)));
#line 304 "inlining.m"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumUses_34 == (MR_Integer) 1);
#line 303 "inlining.m"
                      }
#line 301 "inlining.m"
                  }
#line 301 "inlining.m"
              }
#line 301 "inlining.m"
          }
#line 290 "inlining.m"
      }
#line 274 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 274 "inlining.m"
      {
#line 307 "inlining.m"
        {
#line 307 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__inlining__CalledGoal_22, transform_hlds__inlining__PredProcId_7);
        }
#line 307 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 274 "inlining.m"
      }
#line 310 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 383 "inlining.m"
      {
#line 383 "inlining.m"
        MR_Word transform_hlds__inlining__PredId_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 383 "inlining.m"
        MR_Integer transform_hlds__inlining__ProcId_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 383 "inlining.m"
        MR_Word transform_hlds__inlining__PredInfo_87;

#line 384 "inlining.m"
        {
#line 384 "inlining.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_7)), transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27, transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);
        }
#line 385 "inlining.m"
        {
#line 385 "inlining.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_84, &transform_hlds__inlining__PredInfo_87);
        }
#line 386 "inlining.m"
        {
#line 386 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__inlining__PredInfo_87);
        }
#line 388 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 387 "inlining.m"
          {
#line 387 "inlining.m"
          }
#line 388 "inlining.m"
        else
#line 389 "inlining.m"
          {
#line 390 "inlining.m"
            {
#line 390 "inlining.m"
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Inlining ", transform_hlds__inlining__PredId_84, transform_hlds__inlining__ProcId_85, transform_hlds__inlining__ModuleInfo_10);
#line 390 "inlining.m"
              return;
            }
#line 389 "inlining.m"
          }
#line 383 "inlining.m"
      }
#line 310 "inlining.m"
    else
#line 309 "inlining.m"
      *transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28 = transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27;
#line 310 "inlining.m"
  }
#line 268 "inlining.m"
}

#line 255 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 255 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 255 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6)
#line 255 "inlining.m"
{
#line 259 "inlining.m"
  while (MR_TRUE)
#line 259 "inlining.m"
    {
#line 259 "inlining.m"
      /* tailcall optimized into a loop */
#line 259 "inlining.m"
      {
#line 259 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 259 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Module_6 = transform_hlds__inlining__STATE_VARIABLE_Module_0_5;
#line 259 "inlining.m"
        else
#line 260 "inlining.m"
          {
#line 260 "inlining.m"
            MR_Word transform_hlds__inlining__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "inlining.m"
            MR_Word transform_hlds__inlining__PPIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_22_22;
#line 260 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;

#line 261 "inlining.m"
            {
#line 261 "inlining.m"
              transform_hlds__inlining__inline_in_proc_5_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__4_4, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_0_5, &transform_hlds__inlining__STATE_VARIABLE_Module_22_22);
            }
#line 262 "inlining.m"
            {
#line 262 "inlining.m"
              transform_hlds__inlining__mark_predproc_6_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__2_2, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_22_22, transform_hlds__inlining__HeadVar__4_4, &transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23);
            }
#line 263 "inlining.m"
            /* direct tailcall eliminated */
#line 263 "inlining.m"
            {
#line 263 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__PPIds_14;
#line 263 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__4__tmp_copy_4 = transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;
#line 263 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5 = transform_hlds__inlining__STATE_VARIABLE_Module_22_22;

#line 263 "inlining.m"
              transform_hlds__inlining__STATE_VARIABLE_Module_0_5 = transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5;
#line 263 "inlining.m"
              transform_hlds__inlining__HeadVar__4_4 = transform_hlds__inlining__HeadVar__4__tmp_copy_4;
#line 263 "inlining.m"
              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 263 "inlining.m"
            }
#line 263 "inlining.m"
            continue;
#line 260 "inlining.m"
          }
#line 259 "inlining.m"
      }
#line 259 "inlining.m"
      break;
#line 259 "inlining.m"
    }
#line 255 "inlining.m"
}

#line 142 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_6_p_0(
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_7,
#line 142 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_8,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_9,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_10,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__CallingPredMarkers_11,
#line 142 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_12)
#line 142 "inlining.m"
{
#line 953 "inlining.m"
  {
#line 953 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 953 "inlining.m"
    {
#line 953 "inlining.m"
      return transform_hlds__inlining__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_93_95_48_6_p_0(transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8, transform_hlds__inlining__BuiltinState_9, transform_hlds__inlining__InlinePromisedPure_10, transform_hlds__inlining__ModuleInfo_12);
    }
#line 953 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 953 "inlining.m"
  }
#line 142 "inlining.m"
}

#line 132 "inlining.m"
void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVars_12,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_13,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_14,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarSet_15,
#line 132 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_16,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes1_17,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarTypes_18,
#line 132 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_19,
#line 132 "inlining.m"
  MR_Word * transform_hlds__inlining__Renaming_20,
#line 132 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_21,
#line 132 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_22)
#line 132 "inlining.m"
{
#line 859 "inlining.m"
  {
#line 859 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 859 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_25 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 859 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_23;
#line 859 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_24;

#line 860 "inlining.m"
    {
#line 860 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__HeadVars_12, transform_hlds__inlining__ArgVars_13, &transform_hlds__inlining__Renaming0_23);
    }
#line 861 "inlining.m"
    {
#line 861 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_15, &transform_hlds__inlining__CalleeListOfVars_24);
    }
#line 862 "inlining.m"
    {
#line 862 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_24, transform_hlds__inlining__CalleeVarSet_15, transform_hlds__inlining__CalleeVarTypes_18, transform_hlds__inlining__VarSet0_14, transform_hlds__inlining__VarSet_16, transform_hlds__inlining__VarTypes1_17, transform_hlds__inlining__VarTypes_19, transform_hlds__inlining__Renaming0_23, transform_hlds__inlining__Renaming_20);
    }
#line 864 "inlining.m"
    {
#line 864 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*transform_hlds__inlining__Renaming_20, transform_hlds__inlining__CalledGoal_21, transform_hlds__inlining__Goal_22);
#line 864 "inlining.m"
      return;
    }
#line 859 "inlining.m"
  }
#line 132 "inlining.m"
}

#line 124 "inlining.m"
void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
#line 124 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypes_6,
#line 124 "inlining.m"
  MR_Word transform_hlds__inlining__ArgTypes_7,
#line 124 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_8,
#line 124 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeExistQVars_9,
#line 124 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeSubn_10)
#line 124 "inlining.m"
{
#line 828 "inlining.m"
  {
#line 828 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 828 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "inlining.m"
      {
#line 831 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_11;

#line 829 "inlining.m"
        {
#line 829 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, &transform_hlds__inlining__TypeSubn0_11);
        }
#line 831 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 830 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn0_11;
#line 831 "inlining.m"
        else
#line 841 "inlining.m"
          {
#line 841 "inlining.m"
            {
#line 841 "inlining.m"
              mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__inlining__TypeSubn_10);
#line 841 "inlining.m"
              return;
            }
#line 841 "inlining.m"
          }
#line 831 "inlining.m"
      }
#line 828 "inlining.m"
    else
#line 853 "inlining.m"
      {
#line 853 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn1_14;
#line 848 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_18;

#line 848 "inlining.m"
        {
#line 848 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__inlining__TypeSubn0_18);
        }
#line 849 "inlining.m"
        {
#line 849 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, transform_hlds__inlining__HeadTypeParams_8, transform_hlds__inlining__TypeSubn0_18, &transform_hlds__inlining__TypeSubn1_14);
        }
#line 853 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 852 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn1_14;
#line 853 "inlining.m"
        else
#line 854 "inlining.m"
          {
#line 854 "inlining.m"
            {
#line 854 "inlining.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
#line 854 "inlining.m"
              return;
            }
#line 854 "inlining.m"
          }
#line 853 "inlining.m"
      }
#line 828 "inlining.m"
  }
#line 124 "inlining.m"
}

#line 113 "inlining.m"
void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_14,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_15,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__PredInfo_16,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__ProcInfo_17,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_18,
#line 113 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_19,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes0_20,
#line 113 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_21,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__TypeVarSet0_22,
#line 113 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeVarSet_23,
#line 113 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps0_24,
#line 113 "inlining.m"
  MR_Word * transform_hlds__inlining__RttiVarMaps_25,
#line 113 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_26)
#line 113 "inlining.m"
{
#line 747 "inlining.m"
  {
#line 747 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_58;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_27;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeTypeVarSet_28;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__HeadVars_29;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes0_30;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarSet_31;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps0_32;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__TypeRenaming_33;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes1_34;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__HeadTypes_35;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__ArgTypes_36;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeExistQVars_37;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__TypeSubn_38;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes_39;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes1_40;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__Subn_43;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps1_44;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_56;
#line 747 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_57;

#line 749 "inlining.m"
    {
#line 749 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalledGoal_27);
    }
#line 753 "inlining.m"
    {
#line 753 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeTypeVarSet_28);
    }
#line 754 "inlining.m"
    {
#line 754 "inlining.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__HeadVars_29);
    }
#line 755 "inlining.m"
    {
#line 755 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarTypes0_30);
    }
#line 756 "inlining.m"
    {
#line 756 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarSet_31);
    }
#line 757 "inlining.m"
    {
#line 757 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeRttiVarMaps0_32);
    }
#line 773 "inlining.m"
    {
#line 773 "inlining.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__inlining__TypeVarSet0_22, transform_hlds__inlining__CalleeTypeVarSet_28, transform_hlds__inlining__TypeVarSet_23, &transform_hlds__inlining__TypeRenaming_33);
    }
#line 775 "inlining.m"
    {
#line 775 "inlining.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__CalleeVarTypes0_30, &transform_hlds__inlining__CalleeVarTypes1_34);
    }
#line 789 "inlining.m"
    {
#line 789 "inlining.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__inlining__CalleeVarTypes1_34, transform_hlds__inlining__HeadVars_29, &transform_hlds__inlining__HeadTypes_35);
    }
#line 790 "inlining.m"
    {
#line 790 "inlining.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__inlining__VarTypes0_20, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__ArgTypes_36);
    }
#line 792 "inlining.m"
    {
#line 792 "inlining.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeExistQVars_37);
    }
#line 793 "inlining.m"
    {
#line 793 "inlining.m"
      transform_hlds__inlining__get_type_substitution_5_p_0(transform_hlds__inlining__HeadTypes_35, transform_hlds__inlining__ArgTypes_36, transform_hlds__inlining__HeadTypeParams_14, transform_hlds__inlining__CalleeExistQVars_37, &transform_hlds__inlining__TypeSubn_38);
    }
#line 803 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "inlining.m"
      {
#line 801 "inlining.m"
        {
#line 801 "inlining.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 802 "inlining.m"
        transform_hlds__inlining__VarTypes1_40 = transform_hlds__inlining__VarTypes0_20;
#line 799 "inlining.m"
      }
#line 803 "inlining.m"
    else
#line 804 "inlining.m"
      {
#line 806 "inlining.m"
        {
#line 806 "inlining.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 808 "inlining.m"
        {
#line 808 "inlining.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__VarTypes0_20, &transform_hlds__inlining__VarTypes1_40);
        }
#line 804 "inlining.m"
      }
#line 5474 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeInfo_25_58 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 860 "inlining.m"
    {
#line 860 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__HeadVars_29, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__Renaming0_56);
    }
#line 861 "inlining.m"
    {
#line 861 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_31, &transform_hlds__inlining__CalleeListOfVars_57);
    }
#line 862 "inlining.m"
    {
#line 862 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_57, transform_hlds__inlining__CalleeVarSet_31, transform_hlds__inlining__CalleeVarTypes_39, transform_hlds__inlining__VarSet0_18, transform_hlds__inlining__VarSet_19, transform_hlds__inlining__VarTypes1_40, transform_hlds__inlining__VarTypes_21, transform_hlds__inlining__Renaming0_56, &transform_hlds__inlining__Subn_43);
    }
#line 864 "inlining.m"
    {
#line 864 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalledGoal_27, transform_hlds__inlining__Goal_26);
    }
#line 815 "inlining.m"
    {
#line 815 "inlining.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalleeRttiVarMaps0_32, &transform_hlds__inlining__CalleeRttiVarMaps1_44);
    }
#line 823 "inlining.m"
    {
#line 823 "inlining.m"
      hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(transform_hlds__inlining__CalleeRttiVarMaps1_44, transform_hlds__inlining__RttiVarMaps0_24, transform_hlds__inlining__RttiVarMaps_25);
#line 823 "inlining.m"
      return;
    }
#line 747 "inlining.m"
  }
#line 113 "inlining.m"
}

#line 102 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
#line 102 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_3,
#line 102 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 102 "inlining.m"
{
#line 331 "inlining.m"
  {
#line 331 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 331 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 332 "inlining.m"
    {
#line 332 "inlining.m"
      hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_3, &transform_hlds__inlining__Size_5);
    }
#line 334 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 335 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 341 "inlining.m"
      {
#line 341 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = (transform_hlds__inlining__SimpleThreshold_4 * (MR_Integer) 3);

#line 341 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_6_6);
#line 341 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 342 "inlining.m"
          {
#line 342 "inlining.m"
            return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_3);
          }
#line 341 "inlining.m"
      }
#line 331 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 331 "inlining.m"
  }
#line 102 "inlining.m"
}

#line 100 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
#line 100 "inlining.m"
  MR_Word transform_hlds__inlining__Clauses_3,
#line 100 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 100 "inlining.m"
{
#line 314 "inlining.m"
  {
#line 314 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 314 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 315 "inlining.m"
    {
#line 315 "inlining.m"
      hlds__goal_util__clause_list_size_2_p_0(transform_hlds__inlining__Clauses_3, &transform_hlds__inlining__Size_5);
    }
#line 317 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 318 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 319 "inlining.m"
      {
#line 319 "inlining.m"
        MR_Word transform_hlds__inlining__Clause_6;
#line 319 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_7;
#line 319 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8;
#line 319 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9;
#line 319 "inlining.m"
        MR_Integer transform_hlds__inlining__V_10_10;

#line 319 "inlining.m"
        transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
#line 319 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 319 "inlining.m"
          {
#line 319 "inlining.m"
            transform_hlds__inlining__Clause_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 0)));
#line 319 "inlining.m"
            transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 1)));
#line 319 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 319 "inlining.m"
              {
#line 320 "inlining.m"
                {
#line 320 "inlining.m"
                  transform_hlds__inlining__Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__inlining__Clause_6);
                }
#line 321 "inlining.m"
                transform_hlds__inlining__V_10_10 = (MR_Integer) 3;
#line 321 "inlining.m"
                transform_hlds__inlining__V_9_9 = (transform_hlds__inlining__SimpleThreshold_4 * transform_hlds__inlining__V_10_10);
#line 321 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_9_9);
#line 319 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 328 "inlining.m"
                  {
#line 328 "inlining.m"
                    return transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_7);
                  }
#line 319 "inlining.m"
              }
#line 319 "inlining.m"
          }
#line 319 "inlining.m"
      }
#line 314 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 314 "inlining.m"
  }
#line 100 "inlining.m"
}

#line 96 "inlining.m"
void MR_CALL 
transform_hlds__inlining__inlining_2_p_0(
#line 96 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20,
#line 96 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21)
#line 96 "inlining.m"
{
#line 197 "inlining.m"
  {
#line 197 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_37_37;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_4;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_5;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_6;
#line 197 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_7;
#line 197 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_8;
#line 197 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_9;
#line 197 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThreshold_10;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__TraceLevel_12;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_13;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__Params_14;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__NeededMap_15;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__DepInfo_16;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__SCCs_17;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__PredProcs_18;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedProcs0_19;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__V_29_29;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32;
#line 197 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_33_33;

#line 208 "inlining.m"
    {
#line 208 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__Globals_4);
    }
#line 209 "inlining.m"
    {
#line 209 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 336, &transform_hlds__inlining__Simple_5);
    }
#line 210 "inlining.m"
    {
#line 210 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 338, &transform_hlds__inlining__SingleUse_6);
    }
#line 211 "inlining.m"
    {
#line 211 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 339, &transform_hlds__inlining__CallCost_7);
    }
#line 212 "inlining.m"
    {
#line 212 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 340, &transform_hlds__inlining__CompoundThreshold_8);
    }
#line 214 "inlining.m"
    {
#line 214 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 341, &transform_hlds__inlining__SimpleThreshold_9);
    }
#line 216 "inlining.m"
    {
#line 216 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 342, &transform_hlds__inlining__VarThreshold_10);
    }
#line 217 "inlining.m"
    {
#line 217 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 251, &transform_hlds__inlining__HighLevelCode_11);
    }
#line 218 "inlining.m"
    {
#line 218 "inlining.m"
      libs__globals__get_trace_level_2_p_0(transform_hlds__inlining__Globals_4, &transform_hlds__inlining__TraceLevel_12);
    }
#line 219 "inlining.m"
    {
#line 219 "inlining.m"
      transform_hlds__inlining__V_29_29 = libs__trace_params__given_trace_level_is_none_1_f_0(transform_hlds__inlining__TraceLevel_12);
    }
#line 219 "inlining.m"
    {
#line 219 "inlining.m"
      transform_hlds__inlining__AnyTracing_13 = mercury__bool__not_1_f_0(transform_hlds__inlining__V_29_29);
    }
#line 220 "inlining.m"
    {
#line 220 "inlining.m"
      transform_hlds__inlining__Params_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 0) = ((MR_Box) ((transform_hlds__inlining__Simple_5 | ((transform_hlds__inlining__SingleUse_6 << (MR_Integer) 1)))));
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 1) = ((MR_Box) (transform_hlds__inlining__CallCost_7));
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 2) = ((MR_Box) (transform_hlds__inlining__CompoundThreshold_8));
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 3) = ((MR_Box) (transform_hlds__inlining__SimpleThreshold_9));
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 4) = ((MR_Box) (transform_hlds__inlining__VarThreshold_10));
#line 220 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 5) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_13 << (MR_Integer) 1)))));
#line 220 "inlining.m"
    }
#line 226 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_6 == (MR_Integer) 1);
#line 227 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 227 "inlining.m"
      {
#line 227 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_8 > (MR_Integer) 0);
#line 227 "inlining.m"
      }
#line 231 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 230 "inlining.m"
      {
#line 230 "inlining.m"
        transform_hlds__dead_proc_elim__dead_proc_analyze_3_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__NeededMap_15);
      }
#line 231 "inlining.m"
    else
#line 232 "inlining.m"
      {
#line 232 "inlining.m"
        {
#line 232 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, &transform_hlds__inlining__NeededMap_15);
        }
#line 232 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20;
#line 232 "inlining.m"
      }
#line 245 "inlining.m"
    {
#line 245 "inlining.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 246 "inlining.m"
    {
#line 246 "inlining.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__inlining__DepInfo_16);
    }
#line 5815 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 247 "inlining.m"
    {
#line 247 "inlining.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__inlining__TypeCtorInfo_37_37, transform_hlds__inlining__DepInfo_16, &transform_hlds__inlining__SCCs_17);
    }
#line 248 "inlining.m"
    {
#line 248 "inlining.m"
      mercury__list__condense_2_p_0(transform_hlds__inlining__TypeCtorInfo_37_37, transform_hlds__inlining__SCCs_17, &transform_hlds__inlining__PredProcs_18);
    }
#line 249 "inlining.m"
    {
#line 249 "inlining.m"
      mercury__set__init_1_p_0(transform_hlds__inlining__TypeCtorInfo_37_37, &transform_hlds__inlining__InlinedProcs0_19);
    }
#line 250 "inlining.m"
    {
#line 250 "inlining.m"
      transform_hlds__inlining__do_inlining_6_p_0(transform_hlds__inlining__PredProcs_18, transform_hlds__inlining__NeededMap_15, transform_hlds__inlining__Params_14, transform_hlds__inlining__InlinedProcs0_19, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_33_33);
    }
#line 253 "inlining.m"
    {
#line 253 "inlining.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21);
#line 253 "inlining.m"
      return;
    }
#line 197 "inlining.m"
  }
#line 96 "inlining.m"
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
