/*
** Automatically generated from `inlining.m'
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


/* :- module transform_hlds.inlining. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__inlining__init
ENDINIT
*/

#include "transform_hlds.inlining.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 632 "inlining.m"
struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s {
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14;
#line 639 "inlining.m"
  MR_bool transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded;
#line 722 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81;
#line 722 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73;
#line 722 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75;
#line 727 "inlining.m"
  jmp_buf transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0;
#line 727 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77;
#line 727 "inlining.m"
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80;
#line 727 "inlining.m"
  MR_Box transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80;
#line 632 "inlining.m"
};


#line 176 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 179 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 182 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 185 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0;

#line 188 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 197 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16];

#line 203 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16];

#line 206 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16];

#line 209 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

#line 212 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

#line 215 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

#line 218 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

#line 221 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

#line 224 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[8];

#line 227 "transform_hlds.inlining.c"
static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[8];

#line 230 "transform_hlds.inlining.c"
static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[8];

#line 233 "transform_hlds.inlining.c"
static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

#line 236 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

#line 239 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

#line 242 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

#line 245 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

#line 248 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 251 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 253 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 256 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 259 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 261 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 263 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 266 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 269 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 271 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2);

#line 274 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 277 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 279 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 281 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3);

#line 932 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_10,
#line 932 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_11,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_12,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_13,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_15,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_17,
#line 932 "inlining.m"
  MR_Word * transform_hlds__inlining__UserReq_18);

#line 185 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 185 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 185 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 406 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 406 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3);

#line 406 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 909 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 909 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 909 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 909 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 909 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 897 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 897 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 897 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 897 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 897 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 885 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 885 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 885 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 885 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 885 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 875 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 875 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 875 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 875 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 875 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

#line 733 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 733 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 733 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2);

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg);

#line 632 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 632 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61);

#line 560 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 560 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 560 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 560 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 560 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56);

#line 461 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52,
#line 461 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53);

#line 375 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 375 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 347 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 347 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1);

#line 270 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 270 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);

#line 257 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 257 "inlining.m"
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 583 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 591 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 599 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 607 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0
  }
};

#line 615 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 623 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 631 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 640 "transform_hlds.inlining.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 648 "transform_hlds.inlining.c"
static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0,
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

#line 668 "transform_hlds.inlining.c"
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

#line 688 "transform_hlds.inlining.c"
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

#line 772 "transform_hlds.inlining.c"
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

#line 787 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 792 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0
  }
};

#line 801 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

#line 806 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = {
  (MR_Integer) 0
};

#line 811 "transform_hlds.inlining.c"
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

#line 828 "transform_hlds.inlining.c"
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

#line 840 "transform_hlds.inlining.c"
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

#line 852 "transform_hlds.inlining.c"
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

#line 896 "transform_hlds.inlining.c"
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

#line 911 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 916 "transform_hlds.inlining.c"
static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0
  }
};

#line 925 "transform_hlds.inlining.c"
static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

#line 930 "transform_hlds.inlining.c"
static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = {
  (MR_Integer) 0
};

#line 935 "transform_hlds.inlining.c"
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

#line 952 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
#line 955 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 957 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 959 "transform_hlds.inlining.c"
{
#line 961 "transform_hlds.inlining.c"
  {
#line 963 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 966 "transform_hlds.inlining.c"
    {
#line 968 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 971 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 973 "transform_hlds.inlining.c"
  }
#line 975 "transform_hlds.inlining.c"
}

#line 978 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
#line 981 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 983 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 985 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 987 "transform_hlds.inlining.c"
{
#line 989 "transform_hlds.inlining.c"
  {
#line 991 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 994 "transform_hlds.inlining.c"
    {
#line 996 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_info_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 999 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 1001 "transform_hlds.inlining.c"
  }
#line 1003 "transform_hlds.inlining.c"
}

#line 1006 "transform_hlds.inlining.c"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
#line 1009 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_1,
#line 1011 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2)
#line 1013 "transform_hlds.inlining.c"
{
#line 1015 "transform_hlds.inlining.c"
  {
#line 1017 "transform_hlds.inlining.c"
    MR_bool transform_hlds__inlining__succeeded;

#line 1020 "transform_hlds.inlining.c"
    {
#line 1022 "transform_hlds.inlining.c"
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
#line 1025 "transform_hlds.inlining.c"
    return transform_hlds__inlining__succeeded;
#line 1027 "transform_hlds.inlining.c"
  }
#line 1029 "transform_hlds.inlining.c"
}

#line 1032 "transform_hlds.inlining.c"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
#line 1035 "transform_hlds.inlining.c"
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
#line 1037 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_2,
#line 1039 "transform_hlds.inlining.c"
  MR_Box transform_hlds__inlining__wrapper_arg_3)
#line 1041 "transform_hlds.inlining.c"
{
#line 1043 "transform_hlds.inlining.c"
  {
#line 1045 "transform_hlds.inlining.c"
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

#line 1048 "transform_hlds.inlining.c"
    {
#line 1050 "transform_hlds.inlining.c"
      transform_hlds__inlining____Compare____inline_params_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
#line 1053 "transform_hlds.inlining.c"
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
#line 1055 "transform_hlds.inlining.c"
  }
#line 1057 "transform_hlds.inlining.c"
}

#line 932 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_10,
#line 932 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_11,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_12,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__HighLevelCode_13,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_15,
#line 932 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_17,
#line 932 "inlining.m"
  MR_Word * transform_hlds__inlining__UserReq_18)
#line 932 "inlining.m"
{
#line 937 "inlining.m"
  {
#line 937 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_12 == (MR_Integer) 2);
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_20;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__Markers_21;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_33;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_34;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_35;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_39;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoalExpr_40;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__V_54_54;
#line 937 "inlining.m"
    MR_Word transform_hlds__inlining__V_59_59;
#line 981 "inlining.m"
    MR_Integer transform_hlds__inlining__V_58_58;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_41_41;
#line 1010 "inlining.m"
    MR_Word transform_hlds__inlining__ForeignAttributes_42;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_43_43;
#line 1011 "inlining.m"
    MR_Integer transform_hlds__inlining__V_44_44;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_45_45;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_46_46;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_47_47;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_48_48;
#line 945 "inlining.m"
    MR_Word transform_hlds__inlining__V_22_22;

#line 937 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
      {
#line 972 "inlining.m"
        {
#line 972 "inlining.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, &transform_hlds__inlining__PredInfo_33, &transform_hlds__inlining__ProcInfo_34);
        }
#line 976 "inlining.m"
        {
#line 976 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
        }
#line 976 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 937 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
          {
#line 981 "inlining.m"
            {
#line 981 "inlining.m"
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
            }
#line 981 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 981 "inlining.m"
              {
#line 982 "inlining.m"
                {
#line 982 "inlining.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_58_58);
                }
#line 982 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_11 == transform_hlds__inlining__V_58_58);
#line 981 "inlining.m"
              }
#line 980 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 937 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
              {
#line 989 "inlining.m"
                transform_hlds__inlining__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "inlining.m"
                {
#line 989 "inlining.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__V_59_59);
                }
#line 989 "inlining.m"
                {
#line 989 "inlining.m"
                  transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__inlining__V_54_54, transform_hlds__inlining__V_59_59);
                }
#line 937 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
                  {
#line 992 "inlining.m"
                    {
#line 992 "inlining.m"
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_33);
                    }
#line 992 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 937 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
                      {
#line 997 "inlining.m"
                        {
#line 997 "inlining.m"
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__MaybeComplexityProcMap_35);
                        }
#line 1001 "inlining.m"
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 1001 "inlining.m"
                        else
#line 1002 "inlining.m"
                          {
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__ComplexityProcMap_37;
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__IsInComplexityMap_38;
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_35, (MR_Integer) 0)));
#line 1002 "inlining.m"
                            MR_Integer transform_hlds__inlining__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_55_55, (MR_Integer) 0)));

#line 1002 "inlining.m"
                            transform_hlds__inlining__ComplexityProcMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_55_55, (MR_Integer) 1)));
#line 1003 "inlining.m"
                            {
#line 1003 "inlining.m"
                              transform_hlds__inlining__IsInComplexityMap_38 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_37, transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11);
                            }
#line 1005 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "inlining.m"
                          }
#line 937 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
                          {
#line 1008 "inlining.m"
                            {
#line 1008 "inlining.m"
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__CalledGoal_39);
                            }
#line 1009 "inlining.m"
                            transform_hlds__inlining__CalledGoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 0)));
#line 1009 "inlining.m"
                            transform_hlds__inlining__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 1)));
#line 1011 "inlining.m"
                            transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1011 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1011 "inlining.m"
                              {
#line 1011 "inlining.m"
                                transform_hlds__inlining__ForeignAttributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 1)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 2)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 3)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 4)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 5)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 6)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 7)));
#line 1015 "inlining.m"
                                {
#line 1015 "inlining.m"
                                  MR_Word transform_hlds__inlining__Globals_49;
#line 1015 "inlining.m"
                                  MR_Word transform_hlds__inlining__Target_50;
#line 1019 "inlining.m"
                                  MR_Word transform_hlds__inlining__ForeignLanguage_51;
#line 1027 "inlining.m"
                                  MR_Word transform_hlds__inlining__MaybeMayDuplicate_52;
#line 1038 "inlining.m"
                                  MR_Word transform_hlds__inlining__Detism_53;

#line 1015 "inlining.m"
                                  {
#line 1015 "inlining.m"
                                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__Globals_49);
                                  }
#line 1016 "inlining.m"
                                  {
#line 1016 "inlining.m"
                                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_49, &transform_hlds__inlining__Target_50);
                                  }
#line 1018 "inlining.m"
                                  {
#line 1018 "inlining.m"
                                    transform_hlds__inlining__ForeignLanguage_51 = parse_tree__prog_data__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_42);
                                  }
#line 1066 "inlining.m"
#line 1066 "inlining.m"
                                  switch (transform_hlds__inlining__ForeignLanguage_51) {
#line 1066 "inlining.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "inlining.m"
                                    case (MR_Integer) 0:
#line 1066 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 0);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 1:
#line 1069 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 1);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 3:
#line 1067 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 3);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 2:
#line 1068 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 2);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                  }
#line 1019 "inlining.m"
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1019 "inlining.m"
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                  if (transform_hlds__inlining__succeeded)
#line 1015 "inlining.m"
                                    {
#line 1026 "inlining.m"
                                      {
#line 1026 "inlining.m"
                                        transform_hlds__inlining__MaybeMayDuplicate_52 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_42);
                                      }
#line 1030 "inlining.m"
                                      if ((transform_hlds__inlining__MaybeMayDuplicate_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1030 "inlining.m"
                                      else
#line 1031 "inlining.m"
                                        {
#line 1031 "inlining.m"
                                          MR_Word transform_hlds__inlining__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_52, (MR_Integer) 0)));

#line 1031 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_56_56 == (MR_Integer) 0);
#line 1031 "inlining.m"
                                        }
#line 1027 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1027 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                      if (transform_hlds__inlining__succeeded)
#line 1015 "inlining.m"
                                        {
#line 1038 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_13 == (MR_Integer) 0);
#line 1038 "inlining.m"
                                          if (transform_hlds__inlining__succeeded)
#line 1038 "inlining.m"
                                            {
#line 1039 "inlining.m"
                                              {
#line 1039 "inlining.m"
                                                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__Detism_53);
                                              }
#line 1041 "inlining.m"
#line 1041 "inlining.m"
                                              switch (transform_hlds__inlining__Detism_53) {
#line 1041 "inlining.m"
                                                default:
#line 1041 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_FALSE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                                case (MR_Integer) 2:
#line 1041 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                                case (MR_Integer) 3:
#line 1040 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                              }
#line 1038 "inlining.m"
                                            }
#line 1037 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                        }
#line 1015 "inlining.m"
                                    }
#line 1015 "inlining.m"
                                }
#line 1011 "inlining.m"
                              }
#line 1011 "inlining.m"
                            else
#line 1045 "inlining.m"
                              transform_hlds__inlining__succeeded = MR_TRUE;
#line 937 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 937 "inlining.m"
                              {
#line 942 "inlining.m"
                                {
#line 942 "inlining.m"
                                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, &transform_hlds__inlining__PredInfo_20);
                                }
#line 943 "inlining.m"
                                {
#line 943 "inlining.m"
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__PredInfo_20, &transform_hlds__inlining__Markers_21);
                                }
#line 945 "inlining.m"
                                transform_hlds__inlining__V_22_22 = (MR_Integer) 6;
#line 945 "inlining.m"
                                {
#line 945 "inlining.m"
                                  transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, transform_hlds__inlining__V_22_22);
                                }
#line 944 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 947 "inlining.m"
                                  {
#line 947 "inlining.m"
                                    *transform_hlds__inlining__UserReq_18 = (MR_Integer) 1;
#line 947 "inlining.m"
                                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 947 "inlining.m"
                                  }
#line 944 "inlining.m"
                                else
#line 948 "inlining.m"
                                  {
#line 949 "inlining.m"
                                    {
#line 949 "inlining.m"
                                      transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, (MR_Integer) 8);
                                    }
#line 950 "inlining.m"
                                    if (!(transform_hlds__inlining__succeeded))
#line 950 "inlining.m"
                                      {
#line 950 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_23_23;

#line 950 "inlining.m"
                                        {
#line 950 "inlining.m"
                                          transform_hlds__inlining__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "inlining.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_10));
#line 950 "inlining.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_11));
#line 950 "inlining.m"
                                        }
#line 950 "inlining.m"
                                        {
#line 950 "inlining.m"
                                          transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__V_23_23)), transform_hlds__inlining__InlinedProcs_15);
                                        }
#line 950 "inlining.m"
                                      }
#line 948 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 948 "inlining.m"
                                      {
#line 953 "inlining.m"
                                        *transform_hlds__inlining__UserReq_18 = (MR_Integer) 0;
#line 953 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 948 "inlining.m"
                                      }
#line 948 "inlining.m"
                                  }
#line 937 "inlining.m"
                              }
#line 937 "inlining.m"
                          }
#line 937 "inlining.m"
                      }
#line 937 "inlining.m"
                  }
#line 937 "inlining.m"
              }
#line 937 "inlining.m"
          }
#line 937 "inlining.m"
      }
#line 937 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 937 "inlining.m"
  }
#line 932 "inlining.m"
}

#line 145 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_54_93_95_48_6_p_0(
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_7,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_8,
#line 145 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_9,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_10,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_11)
#line 145 "inlining.m"
{
#line 959 "inlining.m"
  {
#line 959 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_13;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_14;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_23;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_24;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_25;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_29;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoalExpr_30;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__V_44_44;
#line 959 "inlining.m"
    MR_Word transform_hlds__inlining__V_49_49;
#line 981 "inlining.m"
    MR_Integer transform_hlds__inlining__V_48_48;
#line 1009 "inlining.m"
    MR_Word transform_hlds__inlining__V_31_31;
#line 1010 "inlining.m"
    MR_Word transform_hlds__inlining__ForeignAttributes_32;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_33_33;
#line 1011 "inlining.m"
    MR_Integer transform_hlds__inlining__V_34_34;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_35_35;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 1011 "inlining.m"
    MR_Word transform_hlds__inlining__V_38_38;

#line 960 "inlining.m"
    {
#line 960 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__Globals_13);
    }
#line 961 "inlining.m"
    {
#line 961 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_13, (MR_Integer) 252, &transform_hlds__inlining__HighLevelCode_14);
    }
#line 971 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_10 == (MR_Integer) 2);
#line 959 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
      {
#line 972 "inlining.m"
        {
#line 972 "inlining.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9, &transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__ProcInfo_24);
        }
#line 976 "inlining.m"
        {
#line 976 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
        }
#line 976 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 959 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
          {
#line 981 "inlining.m"
            {
#line 981 "inlining.m"
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
            }
#line 981 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 981 "inlining.m"
              {
#line 982 "inlining.m"
                {
#line 982 "inlining.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_48_48);
                }
#line 982 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_9 == transform_hlds__inlining__V_48_48);
#line 981 "inlining.m"
              }
#line 980 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 959 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
              {
#line 989 "inlining.m"
                transform_hlds__inlining__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "inlining.m"
                {
#line 989 "inlining.m"
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__V_49_49);
                }
#line 989 "inlining.m"
                {
#line 989 "inlining.m"
                  transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__inlining__V_44_44, transform_hlds__inlining__V_49_49);
                }
#line 959 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
                  {
#line 992 "inlining.m"
                    {
#line 992 "inlining.m"
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_23);
                    }
#line 992 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 959 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
                      {
#line 997 "inlining.m"
                        {
#line 997 "inlining.m"
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__MaybeComplexityProcMap_25);
                        }
#line 1001 "inlining.m"
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1000 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 1001 "inlining.m"
                        else
#line 1002 "inlining.m"
                          {
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__ComplexityProcMap_27;
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__IsInComplexityMap_28;
#line 1002 "inlining.m"
                            MR_Word transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_25, (MR_Integer) 0)));
#line 1002 "inlining.m"
                            MR_Integer transform_hlds__inlining__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_45_45, (MR_Integer) 0)));

#line 1002 "inlining.m"
                            transform_hlds__inlining__ComplexityProcMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_45_45, (MR_Integer) 1)));
#line 1003 "inlining.m"
                            {
#line 1003 "inlining.m"
                              transform_hlds__inlining__IsInComplexityMap_28 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_27, transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9);
                            }
#line 1005 "inlining.m"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "inlining.m"
                          }
#line 959 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 959 "inlining.m"
                          {
#line 1008 "inlining.m"
                            {
#line 1008 "inlining.m"
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__CalledGoal_29);
                            }
#line 1009 "inlining.m"
                            transform_hlds__inlining__CalledGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 0)));
#line 1009 "inlining.m"
                            transform_hlds__inlining__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 1)));
#line 1011 "inlining.m"
                            transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1011 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1011 "inlining.m"
                              {
#line 1011 "inlining.m"
                                transform_hlds__inlining__ForeignAttributes_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 1)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 2)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 3)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 4)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 5)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 6)));
#line 1011 "inlining.m"
                                transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 7)));
#line 1015 "inlining.m"
                                {
#line 1015 "inlining.m"
                                  MR_Word transform_hlds__inlining__Globals_39;
#line 1015 "inlining.m"
                                  MR_Word transform_hlds__inlining__Target_40;
#line 1019 "inlining.m"
                                  MR_Word transform_hlds__inlining__ForeignLanguage_41;
#line 1027 "inlining.m"
                                  MR_Word transform_hlds__inlining__MaybeMayDuplicate_42;
#line 1038 "inlining.m"
                                  MR_Word transform_hlds__inlining__Detism_43;

#line 1015 "inlining.m"
                                  {
#line 1015 "inlining.m"
                                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__Globals_39);
                                  }
#line 1016 "inlining.m"
                                  {
#line 1016 "inlining.m"
                                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_39, &transform_hlds__inlining__Target_40);
                                  }
#line 1018 "inlining.m"
                                  {
#line 1018 "inlining.m"
                                    transform_hlds__inlining__ForeignLanguage_41 = parse_tree__prog_data__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_32);
                                  }
#line 1066 "inlining.m"
#line 1066 "inlining.m"
                                  switch (transform_hlds__inlining__ForeignLanguage_41) {
#line 1066 "inlining.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "inlining.m"
                                    case (MR_Integer) 0:
#line 1066 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 0);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 1:
#line 1069 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 1);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 3:
#line 1067 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 3);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                    case (MR_Integer) 2:
#line 1068 "inlining.m"
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 2);
#line 1066 "inlining.m"
                                      break;
#line 1066 "inlining.m"
                                  }
#line 1019 "inlining.m"
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1019 "inlining.m"
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                  if (transform_hlds__inlining__succeeded)
#line 1015 "inlining.m"
                                    {
#line 1026 "inlining.m"
                                      {
#line 1026 "inlining.m"
                                        transform_hlds__inlining__MaybeMayDuplicate_42 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_32);
                                      }
#line 1030 "inlining.m"
                                      if ((transform_hlds__inlining__MaybeMayDuplicate_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "inlining.m"
                                        transform_hlds__inlining__succeeded = MR_TRUE;
#line 1030 "inlining.m"
                                      else
#line 1031 "inlining.m"
                                        {
#line 1031 "inlining.m"
                                          MR_Word transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_42, (MR_Integer) 0)));

#line 1031 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
#line 1031 "inlining.m"
                                        }
#line 1027 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1027 "inlining.m"
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                      if (transform_hlds__inlining__succeeded)
#line 1015 "inlining.m"
                                        {
#line 1038 "inlining.m"
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_14 == (MR_Integer) 0);
#line 1038 "inlining.m"
                                          if (transform_hlds__inlining__succeeded)
#line 1038 "inlining.m"
                                            {
#line 1039 "inlining.m"
                                              {
#line 1039 "inlining.m"
                                                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__Detism_43);
                                              }
#line 1041 "inlining.m"
#line 1041 "inlining.m"
                                              switch (transform_hlds__inlining__Detism_43) {
#line 1041 "inlining.m"
                                                default:
#line 1041 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_FALSE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                                case (MR_Integer) 2:
#line 1041 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                                case (MR_Integer) 3:
#line 1040 "inlining.m"
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 1041 "inlining.m"
                                                  break;
#line 1041 "inlining.m"
                                              }
#line 1038 "inlining.m"
                                            }
#line 1037 "inlining.m"
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 1015 "inlining.m"
                                        }
#line 1015 "inlining.m"
                                    }
#line 1015 "inlining.m"
                                }
#line 1011 "inlining.m"
                              }
#line 1011 "inlining.m"
                            else
#line 1045 "inlining.m"
                              transform_hlds__inlining__succeeded = MR_TRUE;
#line 959 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 1050 "inlining.m"
#line 1050 "inlining.m"
                              switch (transform_hlds__inlining__InlinePromisedPure_11) {
#line 1050 "inlining.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 1050 "inlining.m"
                                case (MR_Integer) 0:
#line 1054 "inlining.m"
                                  {
#line 1054 "inlining.m"
                                    MR_Word transform_hlds__inlining__V_50_50;

#line 1055 "inlining.m"
                                    {
#line 1055 "inlining.m"
                                      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__V_50_50);
                                    }
#line 1055 "inlining.m"
                                    transform_hlds__inlining__succeeded = ((MR_Integer) 2 == transform_hlds__inlining__V_50_50);
#line 1054 "inlining.m"
                                  }
#line 1050 "inlining.m"
                                  break;
#line 1050 "inlining.m"
                                case (MR_Integer) 1:
#line 1049 "inlining.m"
                                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 1050 "inlining.m"
                                  break;
#line 1050 "inlining.m"
                              }
#line 959 "inlining.m"
                          }
#line 959 "inlining.m"
                      }
#line 959 "inlining.m"
                  }
#line 959 "inlining.m"
              }
#line 959 "inlining.m"
          }
#line 959 "inlining.m"
      }
#line 959 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 959 "inlining.m"
  }
#line 145 "inlining.m"
}

#line 185 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
#line 185 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 185 "inlining.m"
{
#line 185 "inlining.m"
  {
#line 185 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 185 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_27 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 185 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_28 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 185 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_27 == transform_hlds__inlining__CastY_28);
#line 185 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 1927 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "inlining.m"
    else
#line 185 "inlining.m"
      {
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20;
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_37_37 = (MR_Integer) transform_hlds__inlining__V_4_4;
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_38_38 = (MR_Integer) transform_hlds__inlining__V_12_12;

#line 185 "inlining.m"
        {
#line 185 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_20_20, transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_38_38);
        }
#line 1977 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 185 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_20_20;
#line 185 "inlining.m"
        else
#line 185 "inlining.m"
          {
#line 185 "inlining.m"
            MR_Word transform_hlds__inlining__V_21_21;
#line 185 "inlining.m"
            MR_Integer transform_hlds__inlining__V_39_39 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 185 "inlining.m"
            MR_Integer transform_hlds__inlining__V_40_40 = (MR_Integer) transform_hlds__inlining__V_13_13;

#line 185 "inlining.m"
            {
#line 185 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_21_21, transform_hlds__inlining__V_39_39, transform_hlds__inlining__V_40_40);
            }
#line 2001 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_21_21 == (MR_Integer) 0);
#line 185 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_21_21;
#line 185 "inlining.m"
            else
#line 185 "inlining.m"
              {
#line 185 "inlining.m"
                MR_Word transform_hlds__inlining__V_22_22;

#line 185 "inlining.m"
                {
#line 185 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_22_22, transform_hlds__inlining__V_6_6, transform_hlds__inlining__V_14_14);
                }
#line 2021 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_22_22 == (MR_Integer) 0);
#line 185 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_22_22;
#line 185 "inlining.m"
                else
#line 185 "inlining.m"
                  {
#line 185 "inlining.m"
                    MR_Word transform_hlds__inlining__V_23_23;

#line 185 "inlining.m"
                    {
#line 185 "inlining.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_23_23, transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_15_15);
                    }
#line 2041 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_23_23 == (MR_Integer) 0);
#line 185 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_23_23;
#line 185 "inlining.m"
                    else
#line 185 "inlining.m"
                      {
#line 185 "inlining.m"
                        MR_Word transform_hlds__inlining__V_24_24;

#line 185 "inlining.m"
                        {
#line 185 "inlining.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_24_24, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_16_16);
                        }
#line 2061 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_24_24 == (MR_Integer) 0);
#line 185 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_24_24;
#line 185 "inlining.m"
                        else
#line 185 "inlining.m"
                          {
#line 185 "inlining.m"
                            MR_Word transform_hlds__inlining__V_25_25;

#line 185 "inlining.m"
                            {
#line 185 "inlining.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_25_25, transform_hlds__inlining__V_9_9, transform_hlds__inlining__V_17_17);
                            }
#line 2081 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_25_25 == (MR_Integer) 0);
#line 185 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_25_25;
#line 185 "inlining.m"
                            else
#line 185 "inlining.m"
                              {
#line 185 "inlining.m"
                                MR_Word transform_hlds__inlining__V_26_26;
#line 185 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_41_41 = (MR_Integer) transform_hlds__inlining__V_10_10;
#line 185 "inlining.m"
                                MR_Integer transform_hlds__inlining__V_42_42 = (MR_Integer) transform_hlds__inlining__V_18_18;

#line 185 "inlining.m"
                                {
#line 185 "inlining.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_26_26, transform_hlds__inlining__V_41_41, transform_hlds__inlining__V_42_42);
                                }
#line 2105 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_26_26 == (MR_Integer) 0);
#line 185 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 185 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_26_26;
#line 185 "inlining.m"
                                else
#line 185 "inlining.m"
                                  {
#line 185 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_43_43 = (MR_Integer) transform_hlds__inlining__V_11_11;
#line 185 "inlining.m"
                                    MR_Integer transform_hlds__inlining__V_44_44 = (MR_Integer) transform_hlds__inlining__V_19_19;

#line 185 "inlining.m"
                                    {
#line 185 "inlining.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_43_43, transform_hlds__inlining__V_44_44);
                                    }
#line 185 "inlining.m"
                                  }
#line 185 "inlining.m"
                              }
#line 185 "inlining.m"
                          }
#line 185 "inlining.m"
                      }
#line 185 "inlining.m"
                  }
#line 185 "inlining.m"
              }
#line 185 "inlining.m"
          }
#line 185 "inlining.m"
      }
#line 185 "inlining.m"
  }
#line 185 "inlining.m"
}

#line 185 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 185 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 185 "inlining.m"
{
#line 185 "inlining.m"
  {
#line 185 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 185 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_19 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 185 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_20 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 185 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_19 == transform_hlds__inlining__CastY_20);
#line 185 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 185 "inlining.m"
    else
#line 185 "inlining.m"
      {
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 185 "inlining.m"
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 185 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 2209 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_11_11);
#line 185 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
          {
#line 2215 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_12_12);
#line 185 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
              {
#line 2221 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_13_13);
#line 185 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                  {
#line 2227 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_6_6 == transform_hlds__inlining__V_14_14);
#line 185 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                      {
#line 2233 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_7_7 == transform_hlds__inlining__V_15_15);
#line 185 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                          {
#line 2239 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == transform_hlds__inlining__V_16_16);
#line 185 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 185 "inlining.m"
                              {
#line 2245 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_9_9 == transform_hlds__inlining__V_17_17);
#line 185 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 2249 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_10_10 == transform_hlds__inlining__V_18_18);
#line 185 "inlining.m"
                              }
#line 185 "inlining.m"
                          }
#line 185 "inlining.m"
                      }
#line 185 "inlining.m"
                  }
#line 185 "inlining.m"
              }
#line 185 "inlining.m"
          }
#line 185 "inlining.m"
      }
#line 185 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 185 "inlining.m"
  }
#line 185 "inlining.m"
}

#line 406 "inlining.m"
static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
#line 406 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3)
#line 406 "inlining.m"
{
#line 406 "inlining.m"
  {
#line 406 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 406 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_51 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
#line 406 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_52 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

#line 406 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_51 == transform_hlds__inlining__CastY_52);
#line 406 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 2296 "transform_hlds.inlining.c"
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
#line 406 "inlining.m"
    else
#line 406 "inlining.m"
      {
#line 406 "inlining.m"
        MR_Integer transform_hlds__inlining__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Integer transform_hlds__inlining__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 8)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 9)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_36_36;

#line 406 "inlining.m"
        {
#line 406 "inlining.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_36_36, transform_hlds__inlining__V_4_4, transform_hlds__inlining__V_20_20);
        }
#line 2374 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_36_36 == (MR_Integer) 0);
#line 406 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_36_36;
#line 406 "inlining.m"
        else
#line 406 "inlining.m"
          {
#line 406 "inlining.m"
            MR_Word transform_hlds__inlining__V_37_37;
#line 406 "inlining.m"
            MR_Integer transform_hlds__inlining__V_69_69 = (MR_Integer) transform_hlds__inlining__V_5_5;
#line 406 "inlining.m"
            MR_Integer transform_hlds__inlining__V_70_70 = (MR_Integer) transform_hlds__inlining__V_21_21;

#line 406 "inlining.m"
            {
#line 406 "inlining.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_69_69, transform_hlds__inlining__V_70_70);
            }
#line 2398 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_37_37 == (MR_Integer) 0);
#line 406 "inlining.m"
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_37_37;
#line 406 "inlining.m"
            else
#line 406 "inlining.m"
              {
#line 406 "inlining.m"
                MR_Word transform_hlds__inlining__V_38_38;
#line 406 "inlining.m"
                MR_Integer transform_hlds__inlining__V_71_71 = (MR_Integer) transform_hlds__inlining__V_6_6;
#line 406 "inlining.m"
                MR_Integer transform_hlds__inlining__V_72_72 = (MR_Integer) transform_hlds__inlining__V_22_22;

#line 406 "inlining.m"
                {
#line 406 "inlining.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_38_38, transform_hlds__inlining__V_71_71, transform_hlds__inlining__V_72_72);
                }
#line 2422 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_38_38 == (MR_Integer) 0);
#line 406 "inlining.m"
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_38_38;
#line 406 "inlining.m"
                else
#line 406 "inlining.m"
                  {
#line 406 "inlining.m"
                    MR_Word transform_hlds__inlining__V_39_39;

#line 406 "inlining.m"
                    {
#line 406 "inlining.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[2], &transform_hlds__inlining__V_39_39, ((MR_Box) (transform_hlds__inlining__V_7_7)), ((MR_Box) (transform_hlds__inlining__V_23_23)));
                    }
#line 2442 "transform_hlds.inlining.c"
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_39_39 == (MR_Integer) 0);
#line 406 "inlining.m"
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_39_39;
#line 406 "inlining.m"
                    else
#line 406 "inlining.m"
                      {
#line 406 "inlining.m"
                        MR_Word transform_hlds__inlining__V_40_40;

#line 406 "inlining.m"
                        {
#line 406 "inlining.m"
                          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__inlining__V_40_40, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_24_24);
                        }
#line 2462 "transform_hlds.inlining.c"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_40_40 == (MR_Integer) 0);
#line 406 "inlining.m"
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_40_40;
#line 406 "inlining.m"
                        else
#line 406 "inlining.m"
                          {
#line 406 "inlining.m"
                            MR_Word transform_hlds__inlining__V_41_41;

#line 406 "inlining.m"
                            {
#line 406 "inlining.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__V_41_41, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                            }
#line 2482 "transform_hlds.inlining.c"
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_41_41 == (MR_Integer) 0);
#line 406 "inlining.m"
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_41_41;
#line 406 "inlining.m"
                            else
#line 406 "inlining.m"
                              {
#line 406 "inlining.m"
                                MR_Word transform_hlds__inlining__V_42_42;

#line 406 "inlining.m"
                                {
#line 406 "inlining.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[4], &transform_hlds__inlining__V_42_42, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                }
#line 2502 "transform_hlds.inlining.c"
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_42_42 == (MR_Integer) 0);
#line 406 "inlining.m"
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_42_42;
#line 406 "inlining.m"
                                else
#line 406 "inlining.m"
                                  {
#line 406 "inlining.m"
                                    MR_Word transform_hlds__inlining__V_43_43;

#line 406 "inlining.m"
                                    {
#line 406 "inlining.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[5], &transform_hlds__inlining__V_43_43, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                    }
#line 2522 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_43_43 == (MR_Integer) 0);
#line 406 "inlining.m"
                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_43_43;
#line 406 "inlining.m"
                                    else
#line 406 "inlining.m"
                                      {
#line 406 "inlining.m"
                                        MR_Word transform_hlds__inlining__V_44_44;

#line 406 "inlining.m"
                                        {
#line 406 "inlining.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_2[0], &transform_hlds__inlining__V_44_44, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                        }
#line 2542 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_44_44 == (MR_Integer) 0);
#line 406 "inlining.m"
                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_44_44;
#line 406 "inlining.m"
                                        else
#line 406 "inlining.m"
                                          {
#line 406 "inlining.m"
                                            MR_Word transform_hlds__inlining__V_45_45;

#line 406 "inlining.m"
                                            {
#line 406 "inlining.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[6], &transform_hlds__inlining__V_45_45, ((MR_Box) (transform_hlds__inlining__V_13_13)), ((MR_Box) (transform_hlds__inlining__V_29_29)));
                                            }
#line 2562 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_45_45 == (MR_Integer) 0);
#line 406 "inlining.m"
                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_45_45;
#line 406 "inlining.m"
                                            else
#line 406 "inlining.m"
                                              {
#line 406 "inlining.m"
                                                MR_Word transform_hlds__inlining__V_46_46;

#line 406 "inlining.m"
                                                {
#line 406 "inlining.m"
                                                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__inlining__V_46_46, transform_hlds__inlining__V_14_14, transform_hlds__inlining__V_30_30);
                                                }
#line 2582 "transform_hlds.inlining.c"
                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
#line 406 "inlining.m"
                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_46_46;
#line 406 "inlining.m"
                                                else
#line 406 "inlining.m"
                                                  {
#line 406 "inlining.m"
                                                    MR_Word transform_hlds__inlining__V_47_47;
#line 406 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_73_73 = (MR_Integer) transform_hlds__inlining__V_15_15;
#line 406 "inlining.m"
                                                    MR_Integer transform_hlds__inlining__V_74_74 = (MR_Integer) transform_hlds__inlining__V_31_31;

#line 406 "inlining.m"
                                                    {
#line 406 "inlining.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_47_47, transform_hlds__inlining__V_73_73, transform_hlds__inlining__V_74_74);
                                                    }
#line 2606 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_47_47 == (MR_Integer) 0);
#line 406 "inlining.m"
                                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_47_47;
#line 406 "inlining.m"
                                                    else
#line 406 "inlining.m"
                                                      {
#line 406 "inlining.m"
                                                        MR_Word transform_hlds__inlining__V_48_48;
#line 406 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_75_75 = (MR_Integer) transform_hlds__inlining__V_16_16;
#line 406 "inlining.m"
                                                        MR_Integer transform_hlds__inlining__V_76_76 = (MR_Integer) transform_hlds__inlining__V_32_32;

#line 406 "inlining.m"
                                                        {
#line 406 "inlining.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_48_48, transform_hlds__inlining__V_75_75, transform_hlds__inlining__V_76_76);
                                                        }
#line 2630 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_48_48 == (MR_Integer) 0);
#line 406 "inlining.m"
                                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_48_48;
#line 406 "inlining.m"
                                                        else
#line 406 "inlining.m"
                                                          {
#line 406 "inlining.m"
                                                            MR_Word transform_hlds__inlining__V_49_49;
#line 406 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_77_77 = (MR_Integer) transform_hlds__inlining__V_17_17;
#line 406 "inlining.m"
                                                            MR_Integer transform_hlds__inlining__V_78_78 = (MR_Integer) transform_hlds__inlining__V_33_33;

#line 406 "inlining.m"
                                                            {
#line 406 "inlining.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_49_49, transform_hlds__inlining__V_77_77, transform_hlds__inlining__V_78_78);
                                                            }
#line 2654 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_49_49 == (MR_Integer) 0);
#line 406 "inlining.m"
                                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_49_49;
#line 406 "inlining.m"
                                                            else
#line 406 "inlining.m"
                                                              {
#line 406 "inlining.m"
                                                                MR_Word transform_hlds__inlining__V_50_50;
#line 406 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_79_79 = (MR_Integer) transform_hlds__inlining__V_18_18;
#line 406 "inlining.m"
                                                                MR_Integer transform_hlds__inlining__V_80_80 = (MR_Integer) transform_hlds__inlining__V_34_34;

#line 406 "inlining.m"
                                                                {
#line 406 "inlining.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_50_50, transform_hlds__inlining__V_79_79, transform_hlds__inlining__V_80_80);
                                                                }
#line 2678 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_50_50 == (MR_Integer) 0);
#line 406 "inlining.m"
                                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 406 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_50_50;
#line 406 "inlining.m"
                                                                else
#line 406 "inlining.m"
                                                                  {
#line 406 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_81_81 = (MR_Integer) transform_hlds__inlining__V_19_19;
#line 406 "inlining.m"
                                                                    MR_Integer transform_hlds__inlining__V_82_82 = (MR_Integer) transform_hlds__inlining__V_35_35;

#line 406 "inlining.m"
                                                                    {
#line 406 "inlining.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_81_81, transform_hlds__inlining__V_82_82);
                                                                    }
#line 406 "inlining.m"
                                                                  }
#line 406 "inlining.m"
                                                              }
#line 406 "inlining.m"
                                                          }
#line 406 "inlining.m"
                                                      }
#line 406 "inlining.m"
                                                  }
#line 406 "inlining.m"
                                              }
#line 406 "inlining.m"
                                          }
#line 406 "inlining.m"
                                      }
#line 406 "inlining.m"
                                  }
#line 406 "inlining.m"
                              }
#line 406 "inlining.m"
                          }
#line 406 "inlining.m"
                      }
#line 406 "inlining.m"
                  }
#line 406 "inlining.m"
              }
#line 406 "inlining.m"
          }
#line 406 "inlining.m"
      }
#line 406 "inlining.m"
  }
#line 406 "inlining.m"
}

#line 406 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 406 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 406 "inlining.m"
{
#line 406 "inlining.m"
  {
#line 406 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 406 "inlining.m"
    MR_Integer transform_hlds__inlining__CastX_35 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
#line 406 "inlining.m"
    MR_Integer transform_hlds__inlining__CastY_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

#line 406 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_35 == transform_hlds__inlining__CastY_36);
#line 406 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
      transform_hlds__inlining__succeeded = MR_TRUE;
#line 406 "inlining.m"
    else
#line 406 "inlining.m"
      {
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_37_37;
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_39_39;
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_40_40;
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_41_41;
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_42_42;
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__TypeInfo_43_43;
#line 406 "inlining.m"
        MR_Integer transform_hlds__inlining__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 8)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 9)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Integer transform_hlds__inlining__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "inlining.m"
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 2842 "transform_hlds.inlining.c"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_19_19);
#line 406 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
          {
#line 2848 "transform_hlds.inlining.c"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_20_20);
#line 406 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
              {
#line 2854 "transform_hlds.inlining.c"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_21_21);
#line 406 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                  {
#line 2860 "transform_hlds.inlining.c"
                    transform_hlds__inlining__TypeInfo_37_37 = (MR_Word) &transform_hlds__inlining_scalar_common_1[2];
#line 2862 "transform_hlds.inlining.c"
                    {
#line 2864 "transform_hlds.inlining.c"
                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_37_37, ((MR_Box) (transform_hlds__inlining__V_6_6)), ((MR_Box) (transform_hlds__inlining__V_22_22)));
                    }
#line 406 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                      {
#line 2871 "transform_hlds.inlining.c"
                        {
#line 2873 "transform_hlds.inlining.c"
                          transform_hlds__inlining__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_23_23);
                        }
#line 406 "inlining.m"
                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                          {
#line 2880 "transform_hlds.inlining.c"
                            transform_hlds__inlining__TypeInfo_39_39 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
#line 2882 "transform_hlds.inlining.c"
                            {
#line 2884 "transform_hlds.inlining.c"
                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_39_39, ((MR_Box) (transform_hlds__inlining__V_8_8)), ((MR_Box) (transform_hlds__inlining__V_24_24)));
                            }
#line 406 "inlining.m"
                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                              {
#line 2891 "transform_hlds.inlining.c"
                                transform_hlds__inlining__TypeInfo_40_40 = (MR_Word) &transform_hlds__inlining_scalar_common_1[4];
#line 2893 "transform_hlds.inlining.c"
                                {
#line 2895 "transform_hlds.inlining.c"
                                  transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_40_40, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                                }
#line 406 "inlining.m"
                                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                  {
#line 2902 "transform_hlds.inlining.c"
                                    transform_hlds__inlining__TypeInfo_41_41 = (MR_Word) &transform_hlds__inlining_scalar_common_1[5];
#line 2904 "transform_hlds.inlining.c"
                                    {
#line 2906 "transform_hlds.inlining.c"
                                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_41_41, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                    }
#line 406 "inlining.m"
                                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                      {
#line 2913 "transform_hlds.inlining.c"
                                        transform_hlds__inlining__TypeInfo_42_42 = (MR_Word) &transform_hlds__inlining_scalar_common_2[0];
#line 2915 "transform_hlds.inlining.c"
                                        {
#line 2917 "transform_hlds.inlining.c"
                                          transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_42_42, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                        }
#line 406 "inlining.m"
                                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                          {
#line 2924 "transform_hlds.inlining.c"
                                            transform_hlds__inlining__TypeInfo_43_43 = (MR_Word) &transform_hlds__inlining_scalar_common_1[6];
#line 2926 "transform_hlds.inlining.c"
                                            {
#line 2928 "transform_hlds.inlining.c"
                                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_43_43, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                            }
#line 406 "inlining.m"
                                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                              {
#line 2935 "transform_hlds.inlining.c"
                                                {
#line 2937 "transform_hlds.inlining.c"
                                                  transform_hlds__inlining__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__inlining__V_13_13, transform_hlds__inlining__V_29_29);
                                                }
#line 406 "inlining.m"
                                                if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                  {
#line 2944 "transform_hlds.inlining.c"
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_14_14 == transform_hlds__inlining__V_30_30);
#line 406 "inlining.m"
                                                    if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                      {
#line 2950 "transform_hlds.inlining.c"
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_15_15 == transform_hlds__inlining__V_31_31);
#line 406 "inlining.m"
                                                        if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                          {
#line 2956 "transform_hlds.inlining.c"
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_16_16 == transform_hlds__inlining__V_32_32);
#line 406 "inlining.m"
                                                            if (transform_hlds__inlining__succeeded)
#line 406 "inlining.m"
                                                              {
#line 2962 "transform_hlds.inlining.c"
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_17_17 == transform_hlds__inlining__V_33_33);
#line 406 "inlining.m"
                                                                if (transform_hlds__inlining__succeeded)
#line 2966 "transform_hlds.inlining.c"
                                                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_18_18 == transform_hlds__inlining__V_34_34);
#line 406 "inlining.m"
                                                              }
#line 406 "inlining.m"
                                                          }
#line 406 "inlining.m"
                                                      }
#line 406 "inlining.m"
                                                  }
#line 406 "inlining.m"
                                              }
#line 406 "inlining.m"
                                          }
#line 406 "inlining.m"
                                      }
#line 406 "inlining.m"
                                  }
#line 406 "inlining.m"
                              }
#line 406 "inlining.m"
                          }
#line 406 "inlining.m"
                      }
#line 406 "inlining.m"
                  }
#line 406 "inlining.m"
              }
#line 406 "inlining.m"
          }
#line 406 "inlining.m"
      }
#line 406 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 406 "inlining.m"
  }
#line 406 "inlining.m"
}

#line 909 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
#line 909 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 909 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 909 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 909 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 909 "inlining.m"
{
#line 912 "inlining.m"
  {
#line 912 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 912 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "inlining.m"
      {
#line 912 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 912 "inlining.m"
      }
#line 912 "inlining.m"
    else
#line 913 "inlining.m"
      {
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 913 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 916 "inlining.m"
        {
#line 916 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 917 "inlining.m"
        {
#line 917 "inlining.m"
          hlds__hlds_goal__goal_to_par_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 918 "inlining.m"
        {
#line 918 "inlining.m"
          transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 919 "inlining.m"
        {
#line 919 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
        }
#line 913 "inlining.m"
      }
#line 912 "inlining.m"
  }
#line 909 "inlining.m"
}

#line 897 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
#line 897 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 897 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 897 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 897 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 897 "inlining.m"
{
#line 900 "inlining.m"
  {
#line 900 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 900 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 900 "inlining.m"
      {
#line 900 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 900 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 900 "inlining.m"
      }
#line 900 "inlining.m"
    else
#line 901 "inlining.m"
      {
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1_12;
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__Goal1List_13;
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__Goals1_14;
#line 901 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

#line 904 "inlining.m"
        {
#line 904 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
#line 905 "inlining.m"
        {
#line 905 "inlining.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
#line 906 "inlining.m"
        {
#line 906 "inlining.m"
          transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 907 "inlining.m"
        {
#line 907 "inlining.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
        }
#line 901 "inlining.m"
      }
#line 900 "inlining.m"
  }
#line 897 "inlining.m"
}

#line 885 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
#line 885 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 885 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 885 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 885 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 885 "inlining.m"
{
#line 888 "inlining.m"
  {
#line 888 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 888 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "inlining.m"
      {
#line 888 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 888 "inlining.m"
      }
#line 888 "inlining.m"
    else
#line 889 "inlining.m"
      {
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Case_10;
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Cases_11;
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 0)));
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 1)));
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 2)));
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_16;
#line 889 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_19_19;

#line 891 "inlining.m"
        {
#line 891 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_15, &transform_hlds__inlining__Goal_16, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_19_19);
        }
#line 892 "inlining.m"
        {
#line 892 "inlining.m"
          transform_hlds__inlining__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 892 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 0) = ((MR_Box) (transform_hlds__inlining__MainConsId_13));
#line 892 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 1) = ((MR_Box) (transform_hlds__inlining__OtherConsIds_14));
#line 892 "inlining.m"
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 2) = ((MR_Box) (transform_hlds__inlining__Goal_16));
#line 892 "inlining.m"
        }
#line 893 "inlining.m"
        {
#line 893 "inlining.m"
          transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_9, &transform_hlds__inlining__Cases_11, transform_hlds__inlining__STATE_VARIABLE_Info_19_19, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 889 "inlining.m"
        {
#line 889 "inlining.m"
          MR_Word base;
#line 889 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 889 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Case_10));
#line 889 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Cases_11));
#line 889 "inlining.m"
        }
#line 889 "inlining.m"
      }
#line 888 "inlining.m"
  }
#line 885 "inlining.m"
}

#line 875 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
#line 875 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 875 "inlining.m"
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
#line 875 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
#line 875 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
#line 875 "inlining.m"
{
#line 878 "inlining.m"
  {
#line 878 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 878 "inlining.m"
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "inlining.m"
      {
#line 878 "inlining.m"
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
#line 878 "inlining.m"
      }
#line 878 "inlining.m"
    else
#line 879 "inlining.m"
      {
#line 879 "inlining.m"
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "inlining.m"
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_10;
#line 879 "inlining.m"
        MR_Word transform_hlds__inlining__Goals_11;
#line 879 "inlining.m"
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_15_15;

#line 880 "inlining.m"
        {
#line 880 "inlining.m"
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal_10, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_15_15);
        }
#line 881 "inlining.m"
        {
#line 881 "inlining.m"
          transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals_11, transform_hlds__inlining__STATE_VARIABLE_Info_15_15, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
#line 879 "inlining.m"
        {
#line 879 "inlining.m"
          MR_Word base;
#line 879 "inlining.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "inlining.m"
          *transform_hlds__inlining__HeadVar__2_2 = base;
#line 879 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Goal_10));
#line 879 "inlining.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Goals_11));
#line 879 "inlining.m"
        }
#line 879 "inlining.m"
      }
#line 878 "inlining.m"
  }
#line 875 "inlining.m"
}

#line 733 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
#line 733 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
#line 733 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2)
#line 733 "inlining.m"
{
#line 736 "inlining.m"
  while (MR_TRUE)
#line 736 "inlining.m"
    {
#line 736 "inlining.m"
      /* tailcall optimized into a loop */
#line 736 "inlining.m"
      {
#line 736 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 736 "inlining.m"
        MR_Word transform_hlds__inlining__VarA_4;
#line 736 "inlining.m"
        MR_Word transform_hlds__inlining__VarB_5;
#line 736 "inlining.m"
        MR_Word transform_hlds__inlining__V_11_11;
#line 736 "inlining.m"
        MR_Word transform_hlds__inlining__Vars_6;

#line 736 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 736 "inlining.m"
          {
#line 736 "inlining.m"
            transform_hlds__inlining__VarA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
#line 736 "inlining.m"
            transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
#line 736 "inlining.m"
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 736 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 736 "inlining.m"
              {
#line 736 "inlining.m"
                transform_hlds__inlining__VarB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 0)));
#line 736 "inlining.m"
                transform_hlds__inlining__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 1)));
#line 738 "inlining.m"
                {
#line 738 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoA_7;
#line 738 "inlining.m"
                  MR_Word transform_hlds__inlining__VarInfoB_8;
#line 738 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintA_9;
#line 738 "inlining.m"
                  MR_Word transform_hlds__inlining__ConstraintB_10;

#line 738 "inlining.m"
                  {
#line 738 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarA_4, &transform_hlds__inlining__VarInfoA_7);
                  }
#line 739 "inlining.m"
                  {
#line 739 "inlining.m"
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarB_5, &transform_hlds__inlining__VarInfoB_8);
                  }
#line 740 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoA_7)) == (MR_mktag((MR_Integer) 2)));
#line 740 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 740 "inlining.m"
                    {
#line 740 "inlining.m"
                      transform_hlds__inlining__ConstraintA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoA_7, (MR_Integer) 0)));
#line 741 "inlining.m"
                      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoB_8)) == (MR_mktag((MR_Integer) 2)));
#line 741 "inlining.m"
                      if (transform_hlds__inlining__succeeded)
#line 741 "inlining.m"
                        {
#line 741 "inlining.m"
                          transform_hlds__inlining__ConstraintB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoB_8, (MR_Integer) 0)));
#line 742 "inlining.m"
                          {
#line 742 "inlining.m"
                            transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(transform_hlds__inlining__ConstraintA_9, transform_hlds__inlining__ConstraintB_10);
                          }
#line 742 "inlining.m"
                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 741 "inlining.m"
                        }
#line 740 "inlining.m"
                    }
#line 738 "inlining.m"
                }
#line 743 "inlining.m"
                if (!(transform_hlds__inlining__succeeded))
#line 744 "inlining.m"
                  {
#line 744 "inlining.m"
                    /* direct tailcall eliminated */
#line 744 "inlining.m"
                    {
#line 744 "inlining.m"
                      MR_Word transform_hlds__inlining__HeadVar__2__tmp_copy_2 = transform_hlds__inlining__V_11_11;

#line 744 "inlining.m"
                      transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__HeadVar__2__tmp_copy_2;
#line 744 "inlining.m"
                    }
#line 744 "inlining.m"
                    continue;
#line 744 "inlining.m"
                  }
#line 736 "inlining.m"
              }
#line 736 "inlining.m"
          }
#line 736 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 736 "inlining.m"
      }
#line 736 "inlining.m"
      break;
#line 736 "inlining.m"
    }
#line 733 "inlining.m"
}

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 727 "inlining.m"
{
#line 727 "inlining.m"
  {
#line 727 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 727 "inlining.m"
    MR_builtin_longjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0, 1);
#line 727 "inlining.m"
  }
#line 727 "inlining.m"
}

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 727 "inlining.m"
{
#line 727 "inlining.m"
  {
#line 727 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 727 "inlining.m"
    (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80 = ((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80);
#line 727 "inlining.m"
    {
#line 727 "inlining.m"
      transform_hlds__inlining__inlining_in_call_11_p_0_2(transform_hlds__inlining__env_ptr);
    }
#line 727 "inlining.m"
  }
#line 727 "inlining.m"
}

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 727 "inlining.m"
{
#line 727 "inlining.m"
  {
#line 727 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 727 "inlining.m"
    {
#line 729 "inlining.m"
      MR_Word transform_hlds__inlining__V_78_78;
#line 729 "inlining.m"
      MR_Word transform_hlds__inlining__V_79_79;

#line 728 "inlining.m"
      {
#line 728 "inlining.m"
        mercury__multi_map__lookup_3_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75, ((MR_Box) ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80)), &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
      }
#line 729 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77)) == (MR_mktag((MR_Integer) 1)));
#line 729 "inlining.m"
      if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 729 "inlining.m"
        {
#line 729 "inlining.m"
          {
#line 729 "inlining.m"
            transform_hlds__inlining__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 0)));
#line 729 "inlining.m"
            transform_hlds__inlining__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 1)));
#line 729 "inlining.m"
          }
#line 727 "inlining.m"
          {
#line 730 "inlining.m"
            {
#line 730 "inlining.m"
              (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
            }
#line 730 "inlining.m"
            if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 730 "inlining.m"
              {
#line 730 "inlining.m"
                transform_hlds__inlining__inlining_in_call_11_p_0_1(transform_hlds__inlining__env_ptr);
              }
#line 727 "inlining.m"
          }
#line 729 "inlining.m"
        }
#line 727 "inlining.m"
    }
#line 727 "inlining.m"
  }
#line 727 "inlining.m"
}

#line 727 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
#line 727 "inlining.m"
  void * transform_hlds__inlining__env_ptr_arg)
#line 727 "inlining.m"
{
#line 727 "inlining.m"
  {
#line 727 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

#line 727 "inlining.m"
    if (MR_builtin_setjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0) == 0)
#line 727 "inlining.m"
      {
#line 727 "inlining.m"
        {
#line 727 "inlining.m"
          mercury__list__member_2_p_1((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__inlining_in_call_11_p_0_3, transform_hlds__inlining__env_ptr);
        }
#line 727 "inlining.m"
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 727 "inlining.m"
      }
#line 727 "inlining.m"
    else
#line 727 "inlining.m"
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 727 "inlining.m"
  }
#line 727 "inlining.m"
}

#line 632 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_12,
#line 632 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_13,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_14,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Builtin_15,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Context_16,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__Sym_17,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalExpr_18,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__GoalInfo0_19,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__GoalInfo_20,
#line 632 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
#line 632 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61)
#line 632 "inlining.m"
{
#line 632 "inlining.m"
  {
#line 632 "inlining.m"
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s transform_hlds__inlining__env;

#line 632 "inlining.m"
    (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14 = transform_hlds__inlining__ArgVars_14;
#line 639 "inlining.m"
    {
#line 639 "inlining.m"
      MR_Integer transform_hlds__inlining__VarThresh_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__HighLevelCode_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__AnyTracing_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedProcs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__HeadTypeParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__Markers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__VarSet0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 6)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__VarTypes0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 7)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__TypeVarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 8)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__RttiVarMaps0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 9)));
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__InlinedParallel0_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__Requantify0_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__DetChanged0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__PurityChanged0_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__PredInfo_38;
#line 639 "inlining.m"
      MR_Word transform_hlds__inlining__ProcInfo_39;
#line 640 "inlining.m"
      MR_Word transform_hlds__inlining___DidInlining0_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 649 "inlining.m"
      MR_Word transform_hlds__inlining__UserReq_40;
#line 722 "inlining.m"
      MR_Word transform_hlds__inlining__HeadVars_74;

#line 645 "inlining.m"
      {
#line 645 "inlining.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_26, transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, &transform_hlds__inlining__PredInfo_38, &transform_hlds__inlining__ProcInfo_39);
      }
#line 648 "inlining.m"
      {
#line 648 "inlining.m"
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, transform_hlds__inlining__Builtin_15, transform_hlds__inlining__HighLevelCode_23, transform_hlds__inlining__InlinedProcs_25, transform_hlds__inlining__ModuleInfo_26, &transform_hlds__inlining__UserReq_40);
      }
#line 649 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 649 "inlining.m"
        {
#line 652 "inlining.m"
#line 652 "inlining.m"
          switch (transform_hlds__inlining__UserReq_40) {
#line 652 "inlining.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 652 "inlining.m"
            case (MR_Integer) 0:
#line 653 "inlining.m"
              {
#line 653 "inlining.m"
                MR_Word transform_hlds__inlining__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 653 "inlining.m"
                MR_Word transform_hlds__inlining__TypeInfo_66_66;
#line 653 "inlining.m"
                MR_Word transform_hlds__inlining__ListOfVars_41;
#line 653 "inlining.m"
                MR_Integer transform_hlds__inlining__ThisMany_42;
#line 653 "inlining.m"
                MR_Word transform_hlds__inlining__CalleeVarSet_43;
#line 653 "inlining.m"
                MR_Word transform_hlds__inlining__CalleeListOfVars_44;
#line 653 "inlining.m"
                MR_Integer transform_hlds__inlining__CalleeThisMany_45;
#line 653 "inlining.m"
                MR_Integer transform_hlds__inlining__TotalVars_46;

#line 655 "inlining.m"
                {
#line 655 "inlining.m"
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__ListOfVars_41);
                }
#line 3709 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeInfo_66_66 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 656 "inlining.m"
                {
#line 656 "inlining.m"
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__ListOfVars_41, &transform_hlds__inlining__ThisMany_42);
                }
#line 659 "inlining.m"
                {
#line 659 "inlining.m"
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__CalleeVarSet_43);
                }
#line 660 "inlining.m"
                {
#line 660 "inlining.m"
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__CalleeVarSet_43, &transform_hlds__inlining__CalleeListOfVars_44);
                }
#line 661 "inlining.m"
                {
#line 661 "inlining.m"
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__CalleeListOfVars_44, &transform_hlds__inlining__CalleeThisMany_45);
                }
#line 662 "inlining.m"
                transform_hlds__inlining__TotalVars_46 = (transform_hlds__inlining__ThisMany_42 + transform_hlds__inlining__CalleeThisMany_45);
#line 663 "inlining.m"
                (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__TotalVars_46 <= transform_hlds__inlining__VarThresh_22);
#line 653 "inlining.m"
              }
#line 652 "inlining.m"
              break;
#line 652 "inlining.m"
            case (MR_Integer) 1:
#line 651 "inlining.m"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 652 "inlining.m"
              break;
#line 652 "inlining.m"
          }
#line 649 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 649 "inlining.m"
            {
#line 723 "inlining.m"
              {
#line 723 "inlining.m"
                hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_39, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73);
              }
#line 724 "inlining.m"
              {
#line 724 "inlining.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HeadVars_74);
              }
#line 3761 "transform_hlds.inlining.c"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 725 "inlining.m"
              {
#line 725 "inlining.m"
                mercury__multi_map__from_corresponding_lists_3_p_0((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__HeadVars_74, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75);
              }
#line 727 "inlining.m"
              {
#line 727 "inlining.m"
                transform_hlds__inlining__inlining_in_call_11_p_0_4(&transform_hlds__inlining__env);
              }
#line 666 "inlining.m"
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = !((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded);
#line 649 "inlining.m"
            }
#line 649 "inlining.m"
        }
#line 647 "inlining.m"
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 670 "inlining.m"
        {
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__VarSet_47;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__VarTypes_48;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__TypeVarSet_49;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__RttiVarMaps_50;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__NonLocals_51;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__Requantify_52;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__PurityChanged_53;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism0_54;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__Determinism_55;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__DetChanged_56;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__HasParallelConj_57;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__InlinedParallel_58;
#line 670 "inlining.m"
          MR_Word transform_hlds__inlining__V_62_62;
#line 675 "inlining.m"
          MR_Word transform_hlds__inlining__V_68_68;
#line 682 "inlining.m"
          MR_Word transform_hlds__inlining__V_63_63;
#line 682 "inlining.m"
          MR_Word transform_hlds__inlining__V_69_69;

#line 668 "inlining.m"
          {
#line 668 "inlining.m"
            transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__inlining__HeadTypeParams_27, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__PredInfo_38, transform_hlds__inlining__ProcInfo_39, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__VarSet_47, transform_hlds__inlining__VarTypes0_30, &transform_hlds__inlining__VarTypes_48, transform_hlds__inlining__TypeVarSet0_31, &transform_hlds__inlining__TypeVarSet_49, transform_hlds__inlining__RttiVarMaps0_32, &transform_hlds__inlining__RttiVarMaps_50, &transform_hlds__inlining__V_62_62);
          }
#line 670 "inlining.m"
          *transform_hlds__inlining__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 0)));
#line 670 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 1)));
#line 674 "inlining.m"
          {
#line 674 "inlining.m"
            transform_hlds__inlining__NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 675 "inlining.m"
          {
#line 675 "inlining.m"
            transform_hlds__inlining__V_68_68 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14);
          }
#line 675 "inlining.m"
          {
#line 675 "inlining.m"
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[7], ((MR_Box) (transform_hlds__inlining__NonLocals_51)), ((MR_Box) (transform_hlds__inlining__V_68_68)));
          }
#line 675 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 676 "inlining.m"
            transform_hlds__inlining__Requantify_52 = transform_hlds__inlining__Requantify0_35;
#line 675 "inlining.m"
          else
#line 678 "inlining.m"
            transform_hlds__inlining__Requantify_52 = (MR_Integer) 1;
#line 682 "inlining.m"
          {
#line 682 "inlining.m"
            transform_hlds__inlining__V_63_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 682 "inlining.m"
          {
#line 682 "inlining.m"
            transform_hlds__inlining__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 682 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__V_63_63 == transform_hlds__inlining__V_69_69);
#line 681 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 684 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = transform_hlds__inlining__PurityChanged0_37;
#line 681 "inlining.m"
          else
#line 686 "inlining.m"
            transform_hlds__inlining__PurityChanged_53 = (MR_Integer) 1;
#line 692 "inlining.m"
          {
#line 692 "inlining.m"
            transform_hlds__inlining__Determinism0_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
#line 693 "inlining.m"
          {
#line 693 "inlining.m"
            transform_hlds__inlining__Determinism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
#line 694 "inlining.m"
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__Determinism0_54 == transform_hlds__inlining__Determinism_55);
#line 694 "inlining.m"
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
#line 695 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = transform_hlds__inlining__DetChanged0_36;
#line 694 "inlining.m"
          else
#line 697 "inlining.m"
            transform_hlds__inlining__DetChanged_56 = (MR_Integer) 1;
#line 700 "inlining.m"
          {
#line 700 "inlining.m"
            hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HasParallelConj_57);
          }
#line 704 "inlining.m"
#line 704 "inlining.m"
          switch (transform_hlds__inlining__HasParallelConj_57) {
#line 704 "inlining.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 704 "inlining.m"
            case (MR_Integer) 1:
#line 706 "inlining.m"
              transform_hlds__inlining__InlinedParallel_58 = transform_hlds__inlining__InlinedParallel0_34;
#line 704 "inlining.m"
              break;
#line 704 "inlining.m"
            case (MR_Integer) 0:
#line 703 "inlining.m"
              transform_hlds__inlining__InlinedParallel_58 = (MR_Integer) 1;
#line 704 "inlining.m"
              break;
#line 704 "inlining.m"
          }
#line 711 "inlining.m"
          {
#line 711 "inlining.m"
            MR_Word base;
#line 711 "inlining.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 711 "inlining.m"
            *transform_hlds__inlining__STATE_VARIABLE_Info_61 = base;
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_22));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_23 | ((transform_hlds__inlining__AnyTracing_24 << (MR_Integer) 1)))));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_25));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__inlining__ModuleInfo_26));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__inlining__HeadTypeParams_27));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__inlining__Markers_28));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__inlining__VarSet_47));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes_48));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet_49));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps_50));
#line 711 "inlining.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (((MR_Integer) 1 | ((((transform_hlds__inlining__InlinedParallel_58 << (MR_Integer) 1)) | ((((transform_hlds__inlining__Requantify_52 << (MR_Integer) 2)) | ((((transform_hlds__inlining__DetChanged_56 << (MR_Integer) 3)) | ((transform_hlds__inlining__PurityChanged_53 << (MR_Integer) 4)))))))))));
#line 711 "inlining.m"
          }
#line 670 "inlining.m"
        }
#line 647 "inlining.m"
      else
#line 716 "inlining.m"
        {
#line 716 "inlining.m"
          {
#line 716 "inlining.m"
            MR_Word base;
#line 716 "inlining.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 716 "inlining.m"
            *transform_hlds__inlining__GoalExpr_18 = base;
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__inlining__PredId_12));
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_13));
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14));
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__inlining__Builtin_15));
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__inlining__Context_16));
#line 716 "inlining.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__inlining__Sym_17));
#line 716 "inlining.m"
          }
#line 717 "inlining.m"
          *transform_hlds__inlining__GoalInfo_20 = transform_hlds__inlining__GoalInfo0_19;
#line 716 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Info_61 = transform_hlds__inlining__STATE_VARIABLE_Info_0_60;
#line 716 "inlining.m"
        }
#line 639 "inlining.m"
    }
#line 632 "inlining.m"
  }
#line 632 "inlining.m"
}

#line 560 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
#line 560 "inlining.m"
  MR_Word transform_hlds__inlining__Goal0_5,
#line 560 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_6,
#line 560 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
#line 560 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56)
#line 560 "inlining.m"
{
#line 563 "inlining.m"
  {
#line 563 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 563 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 0)));
#line 563 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 1)));
#line 563 "inlining.m"
    MR_Word transform_hlds__inlining__GoalExpr_16;
#line 563 "inlining.m"
    MR_Word transform_hlds__inlining__GoalInfo_17;

#line 569 "inlining.m"
#line 569 "inlining.m"
    switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) {
#line 569 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 569 "inlining.m"
      case (MR_Integer) 0:
#line 605 "inlining.m"
        {
#line 605 "inlining.m"
          MR_Word transform_hlds__inlining__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr0_8), (MR_Integer) 0);
#line 605 "inlining.m"
          MR_Word transform_hlds__inlining__SubGoal_50;

#line 606 "inlining.m"
          {
#line 606 "inlining.m"
            transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_49, &transform_hlds__inlining__SubGoal_50, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
#line 607 "inlining.m"
          transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__inlining__SubGoal_50);
#line 608 "inlining.m"
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 605 "inlining.m"
        }
#line 569 "inlining.m"
        break;
#line 569 "inlining.m"
      case (MR_Integer) 1:
#line 573 "inlining.m"
        {
#line 574 "inlining.m"
          transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 575 "inlining.m"
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 573 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 573 "inlining.m"
        }
#line 569 "inlining.m"
        break;
#line 569 "inlining.m"
      case (MR_Integer) 2:
#line 566 "inlining.m"
        {
#line 566 "inlining.m"
          MR_Word transform_hlds__inlining__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)));
#line 566 "inlining.m"
          MR_Integer transform_hlds__inlining__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 566 "inlining.m"
          MR_Word transform_hlds__inlining__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 566 "inlining.m"
          MR_Word transform_hlds__inlining__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 566 "inlining.m"
          MR_Word transform_hlds__inlining__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 566 "inlining.m"
          MR_Word transform_hlds__inlining__Sym_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 5)));

#line 567 "inlining.m"
          {
#line 567 "inlining.m"
            transform_hlds__inlining__inlining_in_call_11_p_0(transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, transform_hlds__inlining__ArgVars_12, transform_hlds__inlining__Builtin_13, transform_hlds__inlining__Context_14, transform_hlds__inlining__Sym_15, &transform_hlds__inlining__GoalExpr_16, transform_hlds__inlining__GoalInfo0_9, &transform_hlds__inlining__GoalInfo_17, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
#line 566 "inlining.m"
        }
#line 569 "inlining.m"
        break;
#line 569 "inlining.m"
      case (MR_Integer) 3:
#line 569 "inlining.m"
#line 569 "inlining.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) {
#line 569 "inlining.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 569 "inlining.m"
          case (MR_Integer) 0:
#line 569 "inlining.m"
          case (MR_Integer) 1:
#line 573 "inlining.m"
            {
#line 574 "inlining.m"
              transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 575 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 573 "inlining.m"
              *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 573 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 2:
#line 577 "inlining.m"
            {
#line 577 "inlining.m"
              MR_Word transform_hlds__inlining__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 577 "inlining.m"
              MR_Word transform_hlds__inlining__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 577 "inlining.m"
              MR_Word transform_hlds__inlining__Goals_37;

#line 581 "inlining.m"
#line 581 "inlining.m"
              switch (transform_hlds__inlining__ConjType_35) {
#line 581 "inlining.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 581 "inlining.m"
                case (MR_Integer) 1:
#line 583 "inlining.m"
                  {
#line 583 "inlining.m"
                    transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 581 "inlining.m"
                  break;
#line 581 "inlining.m"
                case (MR_Integer) 0:
#line 580 "inlining.m"
                  {
#line 580 "inlining.m"
                    transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 581 "inlining.m"
                  break;
#line 581 "inlining.m"
              }
#line 585 "inlining.m"
              {
#line 585 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 585 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__ConjType_35));
#line 585 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Goals_37));
#line 585 "inlining.m"
              }
#line 586 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 577 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 3:
#line 588 "inlining.m"
            {
#line 588 "inlining.m"
              MR_Word transform_hlds__inlining__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 588 "inlining.m"
              MR_Word transform_hlds__inlining__Goals_71;

#line 589 "inlining.m"
              {
#line 589 "inlining.m"
                transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_70, &transform_hlds__inlining__Goals_71, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 590 "inlining.m"
              {
#line 590 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Goals_71));
#line 590 "inlining.m"
              }
#line 591 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 588 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 4:
#line 593 "inlining.m"
            {
#line 593 "inlining.m"
              MR_Word transform_hlds__inlining__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 593 "inlining.m"
              MR_Word transform_hlds__inlining__Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 593 "inlining.m"
              MR_Word transform_hlds__inlining__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 593 "inlining.m"
              MR_Word transform_hlds__inlining__Cases_41;

#line 594 "inlining.m"
              {
#line 594 "inlining.m"
                transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_40, &transform_hlds__inlining__Cases_41, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 595 "inlining.m"
              {
#line 595 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 595 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 595 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Var_38));
#line 595 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Det_39));
#line 595 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Cases_41));
#line 595 "inlining.m"
              }
#line 596 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 593 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 5:
#line 610 "inlining.m"
            {
#line 610 "inlining.m"
              MR_Word transform_hlds__inlining__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 610 "inlining.m"
              MR_Word transform_hlds__inlining__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 612 "inlining.m"
              MR_Word transform_hlds__inlining__FGT_53;
#line 612 "inlining.m"
              MR_Word transform_hlds__inlining__V_52_52;

#line 612 "inlining.m"
              transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 612 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 612 "inlining.m"
                {
#line 612 "inlining.m"
                  transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 1)));
#line 612 "inlining.m"
                  transform_hlds__inlining__FGT_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 2)));
#line 614 "inlining.m"
#line 614 "inlining.m"
                  switch (transform_hlds__inlining__FGT_53) {
#line 614 "inlining.m"
                    default:
#line 614 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_FALSE;
#line 614 "inlining.m"
                      break;
#line 614 "inlining.m"
                    case (MR_Integer) 1:
#line 613 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 614 "inlining.m"
                      break;
#line 614 "inlining.m"
                    case (MR_Integer) 2:
#line 614 "inlining.m"
                      transform_hlds__inlining__succeeded = MR_TRUE;
#line 614 "inlining.m"
                      break;
#line 614 "inlining.m"
                  }
#line 612 "inlining.m"
                }
#line 611 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 618 "inlining.m"
                {
#line 618 "inlining.m"
                  transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
#line 619 "inlining.m"
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 618 "inlining.m"
                  *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
#line 618 "inlining.m"
                }
#line 611 "inlining.m"
              else
#line 621 "inlining.m"
                {
#line 621 "inlining.m"
                  MR_Word transform_hlds__inlining__SubGoal_72;

#line 621 "inlining.m"
                  {
#line 621 "inlining.m"
                    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_74, &transform_hlds__inlining__SubGoal_72, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
#line 622 "inlining.m"
                  {
#line 622 "inlining.m"
                    transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 622 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 622 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Reason_51));
#line 622 "inlining.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__SubGoal_72));
#line 622 "inlining.m"
                  }
#line 623 "inlining.m"
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 621 "inlining.m"
                }
#line 610 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 6:
#line 598 "inlining.m"
            {
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Cond0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Then0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Cond_46;
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Then_47;
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__Else_48;
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_62_62;
#line 598 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_63_63;

#line 599 "inlining.m"
              {
#line 599 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Cond0_43, &transform_hlds__inlining__Cond_46, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, &transform_hlds__inlining__STATE_VARIABLE_Info_62_62);
              }
#line 600 "inlining.m"
              {
#line 600 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Then0_44, &transform_hlds__inlining__Then_47, transform_hlds__inlining__STATE_VARIABLE_Info_62_62, &transform_hlds__inlining__STATE_VARIABLE_Info_63_63);
              }
#line 601 "inlining.m"
              {
#line 601 "inlining.m"
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Else0_45, &transform_hlds__inlining__Else_48, transform_hlds__inlining__STATE_VARIABLE_Info_63_63, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
#line 602 "inlining.m"
              {
#line 602 "inlining.m"
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 602 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 602 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Vars_42));
#line 602 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Cond_46));
#line 602 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Then_47));
#line 602 "inlining.m"
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__inlining__Else_48));
#line 602 "inlining.m"
              }
#line 603 "inlining.m"
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
#line 598 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
          case (MR_Integer) 7:
#line 626 "inlining.m"
            {
#line 628 "inlining.m"
              {
#line 628 "inlining.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
#line 628 "inlining.m"
                return;
              }
#line 626 "inlining.m"
            }
#line 569 "inlining.m"
            break;
#line 569 "inlining.m"
        }
#line 569 "inlining.m"
        break;
#line 569 "inlining.m"
    }
#line 630 "inlining.m"
    {
#line 630 "inlining.m"
      MR_Word base;
#line 630 "inlining.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "inlining.m"
      *transform_hlds__inlining__Goal_6 = base;
#line 630 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_16));
#line 630 "inlining.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo_17));
#line 630 "inlining.m"
    }
#line 563 "inlining.m"
  }
#line 560 "inlining.m"
}

#line 461 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_6,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__InlinedProcs_7,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__Params_8,
#line 461 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52,
#line 461 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53)
#line 461 "inlining.m"
{
#line 464 "inlining.m"
  {
#line 464 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_94_94;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_95_95;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_97_97;
#line 464 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThresh_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 4)));
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 0)));
#line 464 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 1)));
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable0_17;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable0_18;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__UnivQTVars_19;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet0_20;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__Markers0_21;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__Goal0_22;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet0_23;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes0_24;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps0_25;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo0_31;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__Goal_32;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__InlineInfo_33;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__Markers_40;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__VarSet_41;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes_42;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__TypeVarSet_43;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__RttiVarMaps_44;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__DidInlining_45;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedParallel_46;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__Requantify_47;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__DetChanged_48;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__PurityChanged_49;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__ProcTable_50;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__PredTable_51;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70;
#line 464 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
#line 465 "inlining.m"
    MR_Word transform_hlds__inlining__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 465 "inlining.m"
    MR_Word transform_hlds__inlining__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 465 "inlining.m"
    MR_Integer transform_hlds__inlining__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 1)));
#line 465 "inlining.m"
    MR_Integer transform_hlds__inlining__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 2)));
#line 465 "inlining.m"
    MR_Integer transform_hlds__inlining__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 3)));
#line 473 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54;
#line 475 "inlining.m"
    MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55;
#line 500 "inlining.m"
    MR_Integer transform_hlds__inlining__V_34_34;
#line 500 "inlining.m"
    MR_Word transform_hlds__inlining__V_35_35;
#line 500 "inlining.m"
    MR_Word transform_hlds__inlining__V_36_36;
#line 500 "inlining.m"
    MR_Word transform_hlds__inlining__V_37_37;
#line 500 "inlining.m"
    MR_Word transform_hlds__inlining__V_38_38;
#line 500 "inlining.m"
    MR_Word transform_hlds__inlining__V_39_39;

#line 472 "inlining.m"
    {
#line 472 "inlining.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52, &transform_hlds__inlining__PredTable0_17);
    }
#line 4560 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_94_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4562 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 473 "inlining.m"
    {
#line 473 "inlining.m"
      mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_94_94, transform_hlds__inlining__TypeCtorInfo_95_95, transform_hlds__inlining__PredTable0_17, ((MR_Box) (transform_hlds__inlining__PredId_13)), &transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54);
    }
#line 473 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54 = ((MR_Word) transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54);
#line 474 "inlining.m"
    {
#line 474 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__ProcTable0_18);
    }
#line 4576 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_97_97 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 475 "inlining.m"
    {
#line 475 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__inlining__TypeCtorInfo_97_97, transform_hlds__inlining__ProcTable0_18, transform_hlds__inlining__ProcId_14, &transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55);
    }
#line 475 "inlining.m"
    transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55);
#line 477 "inlining.m"
    {
#line 477 "inlining.m"
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__UnivQTVars_19);
    }
#line 478 "inlining.m"
    {
#line 478 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__TypeVarSet0_20);
    }
#line 479 "inlining.m"
    {
#line 479 "inlining.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__Markers0_21);
    }
#line 481 "inlining.m"
    {
#line 481 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__Goal0_22);
    }
#line 482 "inlining.m"
    {
#line 482 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__VarSet0_23);
    }
#line 483 "inlining.m"
    {
#line 483 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__VarTypes0_24);
    }
#line 484 "inlining.m"
    {
#line 484 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__RttiVarMaps0_25);
    }
#line 492 "inlining.m"
    {
#line 492 "inlining.m"
      transform_hlds__inlining__InlineInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_10));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_12 << (MR_Integer) 1)))));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_7));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 4) = ((MR_Box) (transform_hlds__inlining__UnivQTVars_19));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 5) = ((MR_Box) (transform_hlds__inlining__Markers0_21));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 6) = ((MR_Box) (transform_hlds__inlining__VarSet0_23));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes0_24));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet0_20));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps0_25));
#line 492 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 10) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))));
#line 492 "inlining.m"
    }
#line 498 "inlining.m"
    {
#line 498 "inlining.m"
      transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_22, &transform_hlds__inlining__Goal_32, transform_hlds__inlining__InlineInfo0_31, &transform_hlds__inlining__InlineInfo_33);
    }
#line 500 "inlining.m"
    transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 0)));
#line 500 "inlining.m"
    transform_hlds__inlining__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 2)));
#line 500 "inlining.m"
    transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 3)));
#line 500 "inlining.m"
    transform_hlds__inlining__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 4)));
#line 500 "inlining.m"
    transform_hlds__inlining__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 5)));
#line 500 "inlining.m"
    transform_hlds__inlining__VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 6)));
#line 500 "inlining.m"
    transform_hlds__inlining__VarTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 7)));
#line 500 "inlining.m"
    transform_hlds__inlining__TypeVarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 8)));
#line 500 "inlining.m"
    transform_hlds__inlining__RttiVarMaps_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 9)));
#line 500 "inlining.m"
    transform_hlds__inlining__DidInlining_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__InlinedParallel_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__Requantify_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__DetChanged_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 500 "inlining.m"
    transform_hlds__inlining__PurityChanged_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 504 "inlining.m"
    {
#line 504 "inlining.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(transform_hlds__inlining__Markers_40, transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56);
    }
#line 505 "inlining.m"
    {
#line 505 "inlining.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__inlining__TypeVarSet_43, transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57);
    }
#line 507 "inlining.m"
    {
#line 507 "inlining.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__inlining__VarSet_41, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58);
    }
#line 508 "inlining.m"
    {
#line 508 "inlining.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__inlining__VarTypes_42, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59);
    }
#line 509 "inlining.m"
    {
#line 509 "inlining.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__inlining__RttiVarMaps_44, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60);
    }
#line 510 "inlining.m"
    {
#line 510 "inlining.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__inlining__Goal_32, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61);
    }
#line 515 "inlining.m"
#line 515 "inlining.m"
    switch (transform_hlds__inlining__InlinedParallel_46) {
#line 515 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 515 "inlining.m"
      case (MR_Integer) 0:
#line 516 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
#line 515 "inlining.m"
        break;
#line 515 "inlining.m"
      case (MR_Integer) 1:
#line 513 "inlining.m"
        {
#line 514 "inlining.m"
          {
#line 514 "inlining.m"
            hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63);
          }
#line 513 "inlining.m"
        }
#line 515 "inlining.m"
        break;
#line 515 "inlining.m"
    }
#line 522 "inlining.m"
#line 522 "inlining.m"
    switch (transform_hlds__inlining__Requantify_47) {
#line 522 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 522 "inlining.m"
      case (MR_Integer) 0:
#line 523 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
#line 522 "inlining.m"
        break;
#line 522 "inlining.m"
      case (MR_Integer) 1:
#line 520 "inlining.m"
        {
#line 521 "inlining.m"
          {
#line 521 "inlining.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65);
          }
#line 520 "inlining.m"
        }
#line 522 "inlining.m"
        break;
#line 522 "inlining.m"
    }
#line 530 "inlining.m"
#line 530 "inlining.m"
    switch (transform_hlds__inlining__DidInlining_45) {
#line 530 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 530 "inlining.m"
      case (MR_Integer) 0:
#line 531 "inlining.m"
        {
#line 531 "inlining.m"
          transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52;
#line 531 "inlining.m"
          transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
#line 531 "inlining.m"
        }
#line 530 "inlining.m"
        break;
#line 530 "inlining.m"
      case (MR_Integer) 1:
#line 527 "inlining.m"
        {
#line 528 "inlining.m"
          {
#line 528 "inlining.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68);
          }
#line 527 "inlining.m"
        }
#line 530 "inlining.m"
        break;
#line 530 "inlining.m"
    }
#line 534 "inlining.m"
    {
#line 534 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__inlining__TypeCtorInfo_97_97, transform_hlds__inlining__ProcId_14, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67)), transform_hlds__inlining__ProcTable0_18, &transform_hlds__inlining__ProcTable_50);
    }
#line 535 "inlining.m"
    {
#line 535 "inlining.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__inlining__ProcTable_50, transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69);
    }
#line 540 "inlining.m"
#line 540 "inlining.m"
    switch (transform_hlds__inlining__PurityChanged_49) {
#line 540 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 540 "inlining.m"
      case (MR_Integer) 0:
#line 541 "inlining.m"
        transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70 = transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
#line 540 "inlining.m"
        break;
#line 540 "inlining.m"
      case (MR_Integer) 1:
#line 539 "inlining.m"
        {
#line 539 "inlining.m"
          check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__inlining__PredProcId_6, transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70);
        }
#line 540 "inlining.m"
        break;
#line 540 "inlining.m"
    }
#line 544 "inlining.m"
    {
#line 544 "inlining.m"
      mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_94_94, transform_hlds__inlining__TypeCtorInfo_95_95, ((MR_Box) (transform_hlds__inlining__PredId_13)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70)), transform_hlds__inlining__PredTable0_17, &transform_hlds__inlining__PredTable_51);
    }
#line 545 "inlining.m"
    {
#line 545 "inlining.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__inlining__PredTable_51, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71);
    }
#line 553 "inlining.m"
#line 553 "inlining.m"
    switch (transform_hlds__inlining__DetChanged_48) {
#line 553 "inlining.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 553 "inlining.m"
      case (MR_Integer) 0:
#line 554 "inlining.m"
        *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
#line 553 "inlining.m"
        break;
#line 553 "inlining.m"
      case (MR_Integer) 1:
#line 552 "inlining.m"
        {
#line 552 "inlining.m"
          check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(transform_hlds__inlining__PredId_13, transform_hlds__inlining__ProcId_14, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53);
        }
#line 553 "inlining.m"
        break;
#line 553 "inlining.m"
    }
#line 464 "inlining.m"
  }
#line 461 "inlining.m"
}

#line 375 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
#line 375 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 375 "inlining.m"
{
#line 377 "inlining.m"
  while (MR_TRUE)
#line 377 "inlining.m"
    {
#line 377 "inlining.m"
      /* tailcall optimized into a loop */
#line 377 "inlining.m"
      {
#line 377 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 377 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "inlining.m"
          transform_hlds__inlining__succeeded = MR_TRUE;
#line 377 "inlining.m"
        else
#line 378 "inlining.m"
          {
#line 378 "inlining.m"
            MR_Word transform_hlds__inlining__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "inlining.m"
            MR_Word transform_hlds__inlining__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 379 "inlining.m"
            {
#line 379 "inlining.m"
              transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_2);
            }
#line 378 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 380 "inlining.m"
              {
#line 380 "inlining.m"
                /* direct tailcall eliminated */
#line 380 "inlining.m"
                {
#line 380 "inlining.m"
                  MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goals_3;

#line 380 "inlining.m"
                  transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 380 "inlining.m"
                }
#line 380 "inlining.m"
                continue;
#line 380 "inlining.m"
              }
#line 378 "inlining.m"
          }
#line 377 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 377 "inlining.m"
      }
#line 377 "inlining.m"
      break;
#line 377 "inlining.m"
    }
#line 375 "inlining.m"
}

#line 347 "inlining.m"
static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
#line 347 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1)
#line 347 "inlining.m"
{
#line 349 "inlining.m"
  while (MR_TRUE)
#line 349 "inlining.m"
    {
#line 349 "inlining.m"
      /* tailcall optimized into a loop */
#line 349 "inlining.m"
      {
#line 349 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;
#line 349 "inlining.m"
        MR_Word transform_hlds__inlining__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "inlining.m"
        MR_Word transform_hlds__inlining__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

#line 353 "inlining.m"
#line 353 "inlining.m"
        switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) {
#line 353 "inlining.m"
          default:
#line 353 "inlining.m"
            transform_hlds__inlining__succeeded = MR_FALSE;
#line 353 "inlining.m"
            break;
#line 353 "inlining.m"
          case (MR_Integer) 0:
#line 354 "inlining.m"
            {
#line 354 "inlining.m"
              MR_Word transform_hlds__inlining__Goal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr_2), (MR_Integer) 0);

#line 355 "inlining.m"
              /* direct tailcall eliminated */
#line 355 "inlining.m"
              {
#line 355 "inlining.m"
                MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_5;

#line 355 "inlining.m"
                transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 355 "inlining.m"
              }
#line 355 "inlining.m"
              continue;
#line 354 "inlining.m"
            }
#line 353 "inlining.m"
            break;
#line 353 "inlining.m"
          case (MR_Integer) 1:
#line 372 "inlining.m"
            transform_hlds__inlining__succeeded = MR_TRUE;
#line 353 "inlining.m"
            break;
#line 353 "inlining.m"
          case (MR_Integer) 2:
#line 370 "inlining.m"
            {
#line 370 "inlining.m"
              MR_Word transform_hlds__inlining__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 3)));
#line 370 "inlining.m"
              MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)));
#line 370 "inlining.m"
              MR_Integer transform_hlds__inlining__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 370 "inlining.m"
              MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 370 "inlining.m"
              MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 4)));
#line 370 "inlining.m"
              MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 5)));

#line 370 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_19_19 == (MR_Integer) 0);
#line 370 "inlining.m"
            }
#line 353 "inlining.m"
            break;
#line 353 "inlining.m"
          case (MR_Integer) 3:
#line 353 "inlining.m"
#line 353 "inlining.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) {
#line 353 "inlining.m"
              default:
#line 353 "inlining.m"
                transform_hlds__inlining__succeeded = MR_FALSE;
#line 353 "inlining.m"
                break;
#line 353 "inlining.m"
              case (MR_Integer) 2:
#line 351 "inlining.m"
                {
#line 351 "inlining.m"
                  MR_Word transform_hlds__inlining__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 351 "inlining.m"
                  MR_Word transform_hlds__inlining__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));

#line 351 "inlining.m"
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
#line 351 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 352 "inlining.m"
                    {
#line 352 "inlining.m"
                      transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(transform_hlds__inlining__Goals_4);
                    }
#line 351 "inlining.m"
                }
#line 353 "inlining.m"
                break;
#line 353 "inlining.m"
              case (MR_Integer) 5:
#line 357 "inlining.m"
                {
#line 357 "inlining.m"
                  MR_Word transform_hlds__inlining__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
#line 357 "inlining.m"
                  MR_Word transform_hlds__inlining__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
#line 359 "inlining.m"
                  MR_Word transform_hlds__inlining__FGT_8;
#line 359 "inlining.m"
                  MR_Word transform_hlds__inlining__V_7_7;

#line 359 "inlining.m"
                  transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 359 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 359 "inlining.m"
                    {
#line 359 "inlining.m"
                      transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 1)));
#line 359 "inlining.m"
                      transform_hlds__inlining__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 2)));
#line 361 "inlining.m"
#line 361 "inlining.m"
                      switch (transform_hlds__inlining__FGT_8) {
#line 361 "inlining.m"
                        default:
#line 361 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_FALSE;
#line 361 "inlining.m"
                          break;
#line 361 "inlining.m"
                        case (MR_Integer) 1:
#line 360 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 361 "inlining.m"
                          break;
#line 361 "inlining.m"
                        case (MR_Integer) 2:
#line 361 "inlining.m"
                          transform_hlds__inlining__succeeded = MR_TRUE;
#line 361 "inlining.m"
                          break;
#line 361 "inlining.m"
                      }
#line 359 "inlining.m"
                    }
#line 358 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 365 "inlining.m"
                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 358 "inlining.m"
                  else
#line 367 "inlining.m"
                    {
#line 367 "inlining.m"
                      /* direct tailcall eliminated */
#line 367 "inlining.m"
                      {
#line 367 "inlining.m"
                        MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_21;

#line 367 "inlining.m"
                        transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 367 "inlining.m"
                      }
#line 367 "inlining.m"
                      continue;
#line 367 "inlining.m"
                    }
#line 357 "inlining.m"
                }
#line 353 "inlining.m"
                break;
#line 353 "inlining.m"
            }
#line 353 "inlining.m"
            break;
#line 353 "inlining.m"
        }
#line 349 "inlining.m"
        return transform_hlds__inlining__succeeded;
#line 349 "inlining.m"
      }
#line 349 "inlining.m"
      break;
#line 349 "inlining.m"
    }
#line 347 "inlining.m"
}

#line 270 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__PredProcId_7,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__NeededMap_8,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__Params_9,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_10,
#line 270 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
#line 270 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28)
#line 270 "inlining.m"
{
#line 275 "inlining.m"
  {
#line 275 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 276 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 1)));
#line 276 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 2)));
#line 276 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 3)));
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 276 "inlining.m"
    MR_Integer transform_hlds__inlining__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__PredInfo_19;
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__Procs_20;
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__ProcInfo_21;
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_22;
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__Entity_23;
#line 276 "inlining.m"
    MR_Integer transform_hlds__inlining__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 4)));
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 276 "inlining.m"
    MR_Word transform_hlds__inlining__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 284 "inlining.m"
    MR_Box transform_hlds__inlining__conv0_ProcInfo_21;

#line 282 "inlining.m"
    {
#line 282 "inlining.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_17, &transform_hlds__inlining__PredInfo_19);
    }
#line 283 "inlining.m"
    {
#line 283 "inlining.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__PredInfo_19, &transform_hlds__inlining__Procs_20);
    }
#line 284 "inlining.m"
    {
#line 284 "inlining.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__inlining__Procs_20, transform_hlds__inlining__ProcId_18, &transform_hlds__inlining__conv0_ProcInfo_21);
    }
#line 284 "inlining.m"
    transform_hlds__inlining__ProcInfo_21 = ((MR_Word) transform_hlds__inlining__conv0_ProcInfo_21);
#line 285 "inlining.m"
    {
#line 285 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__CalledGoal_22);
    }
#line 286 "inlining.m"
    {
#line 286 "inlining.m"
      transform_hlds__inlining__Entity_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_17));
#line 286 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_18));
#line 286 "inlining.m"
    }
#line 290 "inlining.m"
    {
#line 290 "inlining.m"
      MR_Integer transform_hlds__inlining__Size_78;

#line 290 "inlining.m"
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Simple_12 == (MR_Integer) 1);
#line 290 "inlining.m"
      if (transform_hlds__inlining__succeeded)
#line 290 "inlining.m"
        {
#line 334 "inlining.m"
          {
#line 334 "inlining.m"
            hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_78);
          }
#line 336 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__SimpleThreshold_16);
#line 337 "inlining.m"
          if (!(transform_hlds__inlining__succeeded))
#line 343 "inlining.m"
            {
#line 343 "inlining.m"
              MR_Integer transform_hlds__inlining__V_79_79 = (transform_hlds__inlining__SimpleThreshold_16 * (MR_Integer) 3);

#line 343 "inlining.m"
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__V_79_79);
#line 343 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 344 "inlining.m"
                {
#line 344 "inlining.m"
                  transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_22);
                }
#line 343 "inlining.m"
            }
#line 290 "inlining.m"
        }
#line 290 "inlining.m"
    }
#line 292 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 292 "inlining.m"
      {
#line 293 "inlining.m"
        {
#line 293 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_72_72;
#line 293 "inlining.m"
          MR_Word transform_hlds__inlining__TypeCtorInfo_73_73;
#line 293 "inlining.m"
          MR_Word transform_hlds__inlining__Needed_24;
#line 293 "inlining.m"
          MR_Integer transform_hlds__inlining__NumUses_25;
#line 293 "inlining.m"
          MR_Integer transform_hlds__inlining__Size_26;
#line 293 "inlining.m"
          MR_Integer transform_hlds__inlining__V_30_30;
#line 293 "inlining.m"
          MR_Integer transform_hlds__inlining__V_31_31;
#line 294 "inlining.m"
          MR_Box transform_hlds__inlining__conv1_Needed_24;

#line 293 "inlining.m"
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_15 > (MR_Integer) 0);
#line 293 "inlining.m"
          if (transform_hlds__inlining__succeeded)
#line 293 "inlining.m"
            {
#line 5300 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 5302 "transform_hlds.inlining.c"
              transform_hlds__inlining__TypeCtorInfo_73_73 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 294 "inlining.m"
              {
#line 294 "inlining.m"
                transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_72_72, transform_hlds__inlining__TypeCtorInfo_73_73, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv1_Needed_24);
              }
#line 294 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 294 "inlining.m"
                {
#line 294 "inlining.m"
                  transform_hlds__inlining__Needed_24 = ((MR_Word) transform_hlds__inlining__conv1_Needed_24);
#line 294 "inlining.m"
                  transform_hlds__inlining__succeeded = MR_TRUE;
#line 294 "inlining.m"
                }
#line 293 "inlining.m"
              if (transform_hlds__inlining__succeeded)
#line 293 "inlining.m"
                {
#line 295 "inlining.m"
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_24)) == (MR_mktag((MR_Integer) 1)));
#line 295 "inlining.m"
                  if (transform_hlds__inlining__succeeded)
#line 295 "inlining.m"
                    {
#line 295 "inlining.m"
                      transform_hlds__inlining__NumUses_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_24, (MR_Integer) 0)));
#line 296 "inlining.m"
                      {
#line 296 "inlining.m"
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_26);
                      }
#line 301 "inlining.m"
                      transform_hlds__inlining__V_31_31 = (transform_hlds__inlining__Size_26 - transform_hlds__inlining__CallCost_14);
#line 301 "inlining.m"
                      transform_hlds__inlining__V_30_30 = (transform_hlds__inlining__V_31_31 * transform_hlds__inlining__NumUses_25);
#line 301 "inlining.m"
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_30_30 <= transform_hlds__inlining__CompoundThreshold_15);
#line 295 "inlining.m"
                    }
#line 293 "inlining.m"
                }
#line 293 "inlining.m"
            }
#line 293 "inlining.m"
        }
#line 292 "inlining.m"
        if (!(transform_hlds__inlining__succeeded))
#line 303 "inlining.m"
          {
#line 303 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_74_74;
#line 303 "inlining.m"
            MR_Word transform_hlds__inlining__TypeCtorInfo_75_75;
#line 303 "inlining.m"
            MR_Word transform_hlds__inlining__Needed_33;
#line 303 "inlining.m"
            MR_Integer transform_hlds__inlining__NumUses_34;
#line 304 "inlining.m"
            MR_Box transform_hlds__inlining__conv2_Needed_33;

#line 303 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_13 == (MR_Integer) 1);
#line 303 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 303 "inlining.m"
              {
#line 5371 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_74_74 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
#line 5373 "transform_hlds.inlining.c"
                transform_hlds__inlining__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
#line 304 "inlining.m"
                {
#line 304 "inlining.m"
                  transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_74_74, transform_hlds__inlining__TypeCtorInfo_75_75, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv2_Needed_33);
                }
#line 304 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 304 "inlining.m"
                  {
#line 304 "inlining.m"
                    transform_hlds__inlining__Needed_33 = ((MR_Word) transform_hlds__inlining__conv2_Needed_33);
#line 304 "inlining.m"
                    transform_hlds__inlining__succeeded = MR_TRUE;
#line 304 "inlining.m"
                  }
#line 303 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 303 "inlining.m"
                  {
#line 305 "inlining.m"
                    transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_33)) == (MR_mktag((MR_Integer) 1)));
#line 305 "inlining.m"
                    if (transform_hlds__inlining__succeeded)
#line 305 "inlining.m"
                      {
#line 305 "inlining.m"
                        transform_hlds__inlining__NumUses_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_33, (MR_Integer) 0)));
#line 306 "inlining.m"
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumUses_34 == (MR_Integer) 1);
#line 305 "inlining.m"
                      }
#line 303 "inlining.m"
                  }
#line 303 "inlining.m"
              }
#line 303 "inlining.m"
          }
#line 292 "inlining.m"
      }
#line 276 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 276 "inlining.m"
      {
#line 309 "inlining.m"
        {
#line 309 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__inlining__CalledGoal_22, transform_hlds__inlining__PredProcId_7);
        }
#line 309 "inlining.m"
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
#line 276 "inlining.m"
      }
#line 275 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 385 "inlining.m"
      {
#line 385 "inlining.m"
        MR_Word transform_hlds__inlining__PredId_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
#line 385 "inlining.m"
        MR_Integer transform_hlds__inlining__ProcId_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
#line 385 "inlining.m"
        MR_Word transform_hlds__inlining__PredInfo_87;

#line 386 "inlining.m"
        {
#line 386 "inlining.m"
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_7)), transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27, transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);
        }
#line 387 "inlining.m"
        {
#line 387 "inlining.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_84, &transform_hlds__inlining__PredInfo_87);
        }
#line 388 "inlining.m"
        {
#line 388 "inlining.m"
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__inlining__PredInfo_87);
        }
#line 388 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 389 "inlining.m"
          {
#line 389 "inlining.m"
          }
#line 388 "inlining.m"
        else
#line 391 "inlining.m"
          {
#line 392 "inlining.m"
            {
#line 392 "inlining.m"
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Inlining ", transform_hlds__inlining__PredId_84, transform_hlds__inlining__ProcId_85, transform_hlds__inlining__ModuleInfo_10);
            }
#line 391 "inlining.m"
          }
#line 385 "inlining.m"
      }
#line 275 "inlining.m"
    else
#line 275 "inlining.m"
      *transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28 = transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27;
#line 275 "inlining.m"
  }
#line 270 "inlining.m"
}

#line 257 "inlining.m"
static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__1_1,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__2_2,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__3_3,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVar__4_4,
#line 257 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
#line 257 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6)
#line 257 "inlining.m"
{
#line 261 "inlining.m"
  while (MR_TRUE)
#line 261 "inlining.m"
    {
#line 261 "inlining.m"
      /* tailcall optimized into a loop */
#line 261 "inlining.m"
      {
#line 261 "inlining.m"
        MR_bool transform_hlds__inlining__succeeded;

#line 261 "inlining.m"
        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "inlining.m"
          *transform_hlds__inlining__STATE_VARIABLE_Module_6 = transform_hlds__inlining__STATE_VARIABLE_Module_0_5;
#line 261 "inlining.m"
        else
#line 262 "inlining.m"
          {
#line 262 "inlining.m"
            MR_Word transform_hlds__inlining__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "inlining.m"
            MR_Word transform_hlds__inlining__PPIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_22_22;
#line 262 "inlining.m"
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;

#line 263 "inlining.m"
            {
#line 263 "inlining.m"
              transform_hlds__inlining__inline_in_proc_5_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__4_4, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_0_5, &transform_hlds__inlining__STATE_VARIABLE_Module_22_22);
            }
#line 264 "inlining.m"
            {
#line 264 "inlining.m"
              transform_hlds__inlining__mark_predproc_6_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__2_2, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_22_22, transform_hlds__inlining__HeadVar__4_4, &transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23);
            }
#line 265 "inlining.m"
            /* direct tailcall eliminated */
#line 265 "inlining.m"
            {
#line 265 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__PPIds_14;
#line 265 "inlining.m"
              MR_Word transform_hlds__inlining__HeadVar__4__tmp_copy_4 = transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;
#line 265 "inlining.m"
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5 = transform_hlds__inlining__STATE_VARIABLE_Module_22_22;

#line 265 "inlining.m"
              transform_hlds__inlining__STATE_VARIABLE_Module_0_5 = transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5;
#line 265 "inlining.m"
              transform_hlds__inlining__HeadVar__4_4 = transform_hlds__inlining__HeadVar__4__tmp_copy_4;
#line 265 "inlining.m"
              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
#line 265 "inlining.m"
            }
#line 265 "inlining.m"
            continue;
#line 262 "inlining.m"
          }
#line 261 "inlining.m"
      }
#line 261 "inlining.m"
      break;
#line 261 "inlining.m"
    }
#line 257 "inlining.m"
}

#line 145 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_6_p_0(
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__ModuleInfo_7,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__PredId_8,
#line 145 "inlining.m"
  MR_Integer transform_hlds__inlining__ProcId_9,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__BuiltinState_10,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__InlinePromisedPure_11,
#line 145 "inlining.m"
  MR_Word transform_hlds__inlining__CallingPredMarkers_12)
#line 145 "inlining.m"
{
#line 959 "inlining.m"
  {
#line 959 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 959 "inlining.m"
    {
#line 959 "inlining.m"
      transform_hlds__inlining__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_54_93_95_48_6_p_0(transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9, transform_hlds__inlining__BuiltinState_10, transform_hlds__inlining__InlinePromisedPure_11);
    }
#line 959 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 959 "inlining.m"
  }
#line 145 "inlining.m"
}

#line 135 "inlining.m"
void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__HeadVars_12,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_13,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_14,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarSet_15,
#line 135 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_16,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes1_17,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeVarTypes_18,
#line 135 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_19,
#line 135 "inlining.m"
  MR_Word * transform_hlds__inlining__Renaming_20,
#line 135 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_21,
#line 135 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_22)
#line 135 "inlining.m"
{
#line 863 "inlining.m"
  {
#line 863 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 863 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_25 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 863 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_23;
#line 863 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_24;

#line 864 "inlining.m"
    {
#line 864 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__HeadVars_12, transform_hlds__inlining__ArgVars_13, &transform_hlds__inlining__Renaming0_23);
    }
#line 865 "inlining.m"
    {
#line 865 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_15, &transform_hlds__inlining__CalleeListOfVars_24);
    }
#line 866 "inlining.m"
    {
#line 866 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_24, transform_hlds__inlining__CalleeVarSet_15, transform_hlds__inlining__CalleeVarTypes_18, transform_hlds__inlining__VarSet0_14, transform_hlds__inlining__VarSet_16, transform_hlds__inlining__VarTypes1_17, transform_hlds__inlining__VarTypes_19, transform_hlds__inlining__Renaming0_23, transform_hlds__inlining__Renaming_20);
    }
#line 868 "inlining.m"
    {
#line 868 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*transform_hlds__inlining__Renaming_20, transform_hlds__inlining__CalledGoal_21, transform_hlds__inlining__Goal_22);
    }
#line 863 "inlining.m"
  }
#line 135 "inlining.m"
}

#line 127 "inlining.m"
void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
#line 127 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypes_6,
#line 127 "inlining.m"
  MR_Word transform_hlds__inlining__ArgTypes_7,
#line 127 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_8,
#line 127 "inlining.m"
  MR_Word transform_hlds__inlining__CalleeExistQVars_9,
#line 127 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeSubn_10)
#line 127 "inlining.m"
{
#line 832 "inlining.m"
  {
#line 832 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;

#line 832 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "inlining.m"
      {
#line 833 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_11;

#line 833 "inlining.m"
        {
#line 833 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, &transform_hlds__inlining__TypeSubn0_11);
        }
#line 833 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 834 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn0_11;
#line 833 "inlining.m"
        else
#line 845 "inlining.m"
          {
#line 845 "inlining.m"
            {
#line 845 "inlining.m"
              mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__inlining__TypeSubn_10);
            }
#line 845 "inlining.m"
          }
#line 833 "inlining.m"
      }
#line 832 "inlining.m"
    else
#line 851 "inlining.m"
      {
#line 851 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn1_14;
#line 852 "inlining.m"
        MR_Word transform_hlds__inlining__TypeSubn0_18;

#line 852 "inlining.m"
        {
#line 852 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__inlining__TypeSubn0_18);
        }
#line 853 "inlining.m"
        {
#line 853 "inlining.m"
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, transform_hlds__inlining__HeadTypeParams_8, transform_hlds__inlining__TypeSubn0_18, &transform_hlds__inlining__TypeSubn1_14);
        }
#line 851 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 856 "inlining.m"
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn1_14;
#line 851 "inlining.m"
        else
#line 858 "inlining.m"
          {
#line 858 "inlining.m"
            {
#line 858 "inlining.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
#line 858 "inlining.m"
              return;
            }
#line 858 "inlining.m"
          }
#line 851 "inlining.m"
      }
#line 832 "inlining.m"
  }
#line 127 "inlining.m"
}

#line 116 "inlining.m"
void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__HeadTypeParams_14,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__ArgVars_15,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__PredInfo_16,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__ProcInfo_17,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__VarSet0_18,
#line 116 "inlining.m"
  MR_Word * transform_hlds__inlining__VarSet_19,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__VarTypes0_20,
#line 116 "inlining.m"
  MR_Word * transform_hlds__inlining__VarTypes_21,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__TypeVarSet0_22,
#line 116 "inlining.m"
  MR_Word * transform_hlds__inlining__TypeVarSet_23,
#line 116 "inlining.m"
  MR_Word transform_hlds__inlining__RttiVarMaps0_24,
#line 116 "inlining.m"
  MR_Word * transform_hlds__inlining__RttiVarMaps_25,
#line 116 "inlining.m"
  MR_Word * transform_hlds__inlining__Goal_26)
#line 116 "inlining.m"
{
#line 751 "inlining.m"
  {
#line 751 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__TypeInfo_25_58;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalledGoal_27;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeTypeVarSet_28;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__HeadVars_29;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes0_30;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarSet_31;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps0_32;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__TypeRenaming_33;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes1_34;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__HeadTypes_35;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__ArgTypes_36;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeExistQVars_37;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__TypeSubn_38;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeVarTypes_39;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__VarTypes1_40;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__Subn_43;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps1_44;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__Renaming0_56;
#line 751 "inlining.m"
    MR_Word transform_hlds__inlining__CalleeListOfVars_57;

#line 753 "inlining.m"
    {
#line 753 "inlining.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalledGoal_27);
    }
#line 757 "inlining.m"
    {
#line 757 "inlining.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeTypeVarSet_28);
    }
#line 758 "inlining.m"
    {
#line 758 "inlining.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__HeadVars_29);
    }
#line 759 "inlining.m"
    {
#line 759 "inlining.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarTypes0_30);
    }
#line 760 "inlining.m"
    {
#line 760 "inlining.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarSet_31);
    }
#line 761 "inlining.m"
    {
#line 761 "inlining.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeRttiVarMaps0_32);
    }
#line 777 "inlining.m"
    {
#line 777 "inlining.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__inlining__TypeVarSet0_22, transform_hlds__inlining__CalleeTypeVarSet_28, transform_hlds__inlining__TypeVarSet_23, &transform_hlds__inlining__TypeRenaming_33);
    }
#line 779 "inlining.m"
    {
#line 779 "inlining.m"
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__CalleeVarTypes0_30, &transform_hlds__inlining__CalleeVarTypes1_34);
    }
#line 793 "inlining.m"
    {
#line 793 "inlining.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__CalleeVarTypes1_34, transform_hlds__inlining__HeadVars_29, &transform_hlds__inlining__HeadTypes_35);
    }
#line 794 "inlining.m"
    {
#line 794 "inlining.m"
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__VarTypes0_20, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__ArgTypes_36);
    }
#line 796 "inlining.m"
    {
#line 796 "inlining.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeExistQVars_37);
    }
#line 797 "inlining.m"
    {
#line 797 "inlining.m"
      transform_hlds__inlining__get_type_substitution_5_p_0(transform_hlds__inlining__HeadTypes_35, transform_hlds__inlining__ArgTypes_36, transform_hlds__inlining__HeadTypeParams_14, transform_hlds__inlining__CalleeExistQVars_37, &transform_hlds__inlining__TypeSubn_38);
    }
#line 807 "inlining.m"
    if ((transform_hlds__inlining__CalleeExistQVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "inlining.m"
      {
#line 805 "inlining.m"
        {
#line 805 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 806 "inlining.m"
        transform_hlds__inlining__VarTypes1_40 = transform_hlds__inlining__VarTypes0_20;
#line 803 "inlining.m"
      }
#line 807 "inlining.m"
    else
#line 808 "inlining.m"
      {
#line 810 "inlining.m"
        {
#line 810 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
#line 812 "inlining.m"
        {
#line 812 "inlining.m"
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__VarTypes0_20, &transform_hlds__inlining__VarTypes1_40);
        }
#line 808 "inlining.m"
      }
#line 5920 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeInfo_25_58 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
#line 864 "inlining.m"
    {
#line 864 "inlining.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__HeadVars_29, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__Renaming0_56);
    }
#line 865 "inlining.m"
    {
#line 865 "inlining.m"
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_31, &transform_hlds__inlining__CalleeListOfVars_57);
    }
#line 866 "inlining.m"
    {
#line 866 "inlining.m"
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_57, transform_hlds__inlining__CalleeVarSet_31, transform_hlds__inlining__CalleeVarTypes_39, transform_hlds__inlining__VarSet0_18, transform_hlds__inlining__VarSet_19, transform_hlds__inlining__VarTypes1_40, transform_hlds__inlining__VarTypes_21, transform_hlds__inlining__Renaming0_56, &transform_hlds__inlining__Subn_43);
    }
#line 868 "inlining.m"
    {
#line 868 "inlining.m"
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalledGoal_27, transform_hlds__inlining__Goal_26);
    }
#line 819 "inlining.m"
    {
#line 819 "inlining.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalleeRttiVarMaps0_32, &transform_hlds__inlining__CalleeRttiVarMaps1_44);
    }
#line 827 "inlining.m"
    {
#line 827 "inlining.m"
      hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(transform_hlds__inlining__CalleeRttiVarMaps1_44, transform_hlds__inlining__RttiVarMaps0_24, transform_hlds__inlining__RttiVarMaps_25);
    }
#line 751 "inlining.m"
  }
#line 116 "inlining.m"
}

#line 105 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
#line 105 "inlining.m"
  MR_Word transform_hlds__inlining__CalledGoal_3,
#line 105 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 105 "inlining.m"
{
#line 333 "inlining.m"
  {
#line 333 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 333 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 334 "inlining.m"
    {
#line 334 "inlining.m"
      hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_3, &transform_hlds__inlining__Size_5);
    }
#line 336 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 337 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 343 "inlining.m"
      {
#line 343 "inlining.m"
        MR_Integer transform_hlds__inlining__V_6_6 = (transform_hlds__inlining__SimpleThreshold_4 * (MR_Integer) 3);

#line 343 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_6_6);
#line 343 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 344 "inlining.m"
          {
#line 344 "inlining.m"
            transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_3);
          }
#line 343 "inlining.m"
      }
#line 333 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 333 "inlining.m"
  }
#line 105 "inlining.m"
}

#line 103 "inlining.m"
MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
#line 103 "inlining.m"
  MR_Word transform_hlds__inlining__Clauses_3,
#line 103 "inlining.m"
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
#line 103 "inlining.m"
{
#line 316 "inlining.m"
  {
#line 316 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 316 "inlining.m"
    MR_Integer transform_hlds__inlining__Size_5;

#line 317 "inlining.m"
    {
#line 317 "inlining.m"
      hlds__goal_util__clause_list_size_2_p_0(transform_hlds__inlining__Clauses_3, &transform_hlds__inlining__Size_5);
    }
#line 319 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
#line 320 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 321 "inlining.m"
      {
#line 321 "inlining.m"
        MR_Word transform_hlds__inlining__Clause_6;
#line 321 "inlining.m"
        MR_Word transform_hlds__inlining__Goal_7;
#line 321 "inlining.m"
        MR_Word transform_hlds__inlining__V_8_8;
#line 321 "inlining.m"
        MR_Integer transform_hlds__inlining__V_9_9;
#line 321 "inlining.m"
        MR_Integer transform_hlds__inlining__V_10_10;

#line 321 "inlining.m"
        transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
#line 321 "inlining.m"
        if (transform_hlds__inlining__succeeded)
#line 321 "inlining.m"
          {
#line 321 "inlining.m"
            transform_hlds__inlining__Clause_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 0)));
#line 321 "inlining.m"
            transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 1)));
#line 321 "inlining.m"
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "inlining.m"
            if (transform_hlds__inlining__succeeded)
#line 321 "inlining.m"
              {
#line 322 "inlining.m"
                {
#line 322 "inlining.m"
                  transform_hlds__inlining__Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__inlining__Clause_6);
                }
#line 323 "inlining.m"
                transform_hlds__inlining__V_10_10 = (MR_Integer) 3;
#line 323 "inlining.m"
                transform_hlds__inlining__V_9_9 = (transform_hlds__inlining__SimpleThreshold_4 * transform_hlds__inlining__V_10_10);
#line 323 "inlining.m"
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_9_9);
#line 321 "inlining.m"
                if (transform_hlds__inlining__succeeded)
#line 330 "inlining.m"
                  {
#line 330 "inlining.m"
                    transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_7);
                  }
#line 321 "inlining.m"
              }
#line 321 "inlining.m"
          }
#line 321 "inlining.m"
      }
#line 316 "inlining.m"
    return transform_hlds__inlining__succeeded;
#line 316 "inlining.m"
  }
#line 103 "inlining.m"
}

#line 99 "inlining.m"
void MR_CALL 
transform_hlds__inlining__inlining_2_p_0(
#line 99 "inlining.m"
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20,
#line 99 "inlining.m"
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21)
#line 99 "inlining.m"
{
#line 199 "inlining.m"
  {
#line 199 "inlining.m"
    MR_bool transform_hlds__inlining__succeeded;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__TypeCtorInfo_36_36;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__Globals_4;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__Simple_5;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__SingleUse_6;
#line 199 "inlining.m"
    MR_Integer transform_hlds__inlining__CallCost_7;
#line 199 "inlining.m"
    MR_Integer transform_hlds__inlining__CompoundThreshold_8;
#line 199 "inlining.m"
    MR_Integer transform_hlds__inlining__SimpleThreshold_9;
#line 199 "inlining.m"
    MR_Integer transform_hlds__inlining__VarThreshold_10;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__HighLevelCode_11;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__TraceLevel_12;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__AnyTracing_13;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__Params_14;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__NeededMap_15;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__DepInfo_16;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__SCCs_17;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__PredProcs_18;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__InlinedProcs0_19;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__V_29_29;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31;
#line 199 "inlining.m"
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32;

#line 210 "inlining.m"
    {
#line 210 "inlining.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__Globals_4);
    }
#line 211 "inlining.m"
    {
#line 211 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 331, &transform_hlds__inlining__Simple_5);
    }
#line 212 "inlining.m"
    {
#line 212 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 333, &transform_hlds__inlining__SingleUse_6);
    }
#line 213 "inlining.m"
    {
#line 213 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 334, &transform_hlds__inlining__CallCost_7);
    }
#line 214 "inlining.m"
    {
#line 214 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 335, &transform_hlds__inlining__CompoundThreshold_8);
    }
#line 216 "inlining.m"
    {
#line 216 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 336, &transform_hlds__inlining__SimpleThreshold_9);
    }
#line 218 "inlining.m"
    {
#line 218 "inlining.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 337, &transform_hlds__inlining__VarThreshold_10);
    }
#line 219 "inlining.m"
    {
#line 219 "inlining.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 252, &transform_hlds__inlining__HighLevelCode_11);
    }
#line 220 "inlining.m"
    {
#line 220 "inlining.m"
      libs__globals__get_trace_level_2_p_0(transform_hlds__inlining__Globals_4, &transform_hlds__inlining__TraceLevel_12);
    }
#line 221 "inlining.m"
    {
#line 221 "inlining.m"
      transform_hlds__inlining__V_29_29 = libs__trace_params__given_trace_level_is_none_1_f_0(transform_hlds__inlining__TraceLevel_12);
    }
#line 221 "inlining.m"
    {
#line 221 "inlining.m"
      transform_hlds__inlining__AnyTracing_13 = mercury__bool__not_1_f_0(transform_hlds__inlining__V_29_29);
    }
#line 222 "inlining.m"
    {
#line 222 "inlining.m"
      transform_hlds__inlining__Params_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 0) = ((MR_Box) ((transform_hlds__inlining__Simple_5 | ((transform_hlds__inlining__SingleUse_6 << (MR_Integer) 1)))));
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 1) = ((MR_Box) (transform_hlds__inlining__CallCost_7));
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 2) = ((MR_Box) (transform_hlds__inlining__CompoundThreshold_8));
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 3) = ((MR_Box) (transform_hlds__inlining__SimpleThreshold_9));
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 4) = ((MR_Box) (transform_hlds__inlining__VarThreshold_10));
#line 222 "inlining.m"
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 5) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_13 << (MR_Integer) 1)))));
#line 222 "inlining.m"
    }
#line 228 "inlining.m"
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_6 == (MR_Integer) 1);
#line 229 "inlining.m"
    if (!(transform_hlds__inlining__succeeded))
#line 229 "inlining.m"
      {
#line 229 "inlining.m"
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_8 > (MR_Integer) 0);
#line 229 "inlining.m"
      }
#line 227 "inlining.m"
    if (transform_hlds__inlining__succeeded)
#line 232 "inlining.m"
      {
#line 232 "inlining.m"
        transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__NeededMap_15);
      }
#line 227 "inlining.m"
    else
#line 234 "inlining.m"
      {
#line 234 "inlining.m"
        {
#line 234 "inlining.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, &transform_hlds__inlining__NeededMap_15);
        }
#line 234 "inlining.m"
      }
#line 247 "inlining.m"
    {
#line 247 "inlining.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31);
    }
#line 248 "inlining.m"
    {
#line 248 "inlining.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__DepInfo_16);
    }
#line 6255 "transform_hlds.inlining.c"
    transform_hlds__inlining__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 249 "inlining.m"
    {
#line 249 "inlining.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__DepInfo_16, &transform_hlds__inlining__SCCs_17);
    }
#line 250 "inlining.m"
    {
#line 250 "inlining.m"
      mercury__list__condense_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__SCCs_17, &transform_hlds__inlining__PredProcs_18);
    }
#line 251 "inlining.m"
    {
#line 251 "inlining.m"
      mercury__set__init_1_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, &transform_hlds__inlining__InlinedProcs0_19);
    }
#line 252 "inlining.m"
    {
#line 252 "inlining.m"
      transform_hlds__inlining__do_inlining_6_p_0(transform_hlds__inlining__PredProcs_18, transform_hlds__inlining__NeededMap_15, transform_hlds__inlining__Params_14, transform_hlds__inlining__InlinedProcs0_19, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32);
    }
#line 255 "inlining.m"
    {
#line 255 "inlining.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21);
    }
#line 199 "inlining.m"
  }
#line 99 "inlining.m"
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
