/*
** Automatically generated from `inlining.m'
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



struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s {
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14;
  MR_bool transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded;
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81;
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73;
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75;
  jmp_buf transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0;
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77;
  MR_Word transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80;
  MR_Box transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[8];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[8];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[8];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
  MR_Word transform_hlds__inlining__PredId_10,
  MR_Integer transform_hlds__inlining__ProcId_11,
  MR_Word transform_hlds__inlining__BuiltinState_12,
  MR_Word transform_hlds__inlining__HighLevelCode_13,
  MR_Word transform_hlds__inlining__InlinedProcs_15,
  MR_Word transform_hlds__inlining__ModuleInfo_17,
  MR_Word * transform_hlds__inlining__UserReq_18);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
  MR_Word transform_hlds__inlining__PredId_12,
  MR_Integer transform_hlds__inlining__ProcId_13,
  MR_Word transform_hlds__inlining__ArgVars_14,
  MR_Word transform_hlds__inlining__Builtin_15,
  MR_Word transform_hlds__inlining__Context_16,
  MR_Word transform_hlds__inlining__Sym_17,
  MR_Word * transform_hlds__inlining__GoalExpr_18,
  MR_Word transform_hlds__inlining__GoalInfo0_19,
  MR_Word * transform_hlds__inlining__GoalInfo_20,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61);

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word transform_hlds__inlining__Goal0_5,
  MR_Word * transform_hlds__inlining__Goal_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56);

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
  MR_Word transform_hlds__inlining__PredProcId_6,
  MR_Word transform_hlds__inlining__InlinedProcs_7,
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1);

static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
  MR_Word transform_hlds__inlining__PredProcId_7,
  MR_Word transform_hlds__inlining__NeededMap_8,
  MR_Word transform_hlds__inlining__Params_9,
  MR_Word transform_hlds__inlining__ModuleInfo_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);

static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3,
  MR_Word transform_hlds__inlining__HeadVar__4_4,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
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



static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    {
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    {
      transform_hlds__inlining____Compare____inline_info_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    {
      transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    {
      transform_hlds__inlining____Compare____inline_params_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    }
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(
  MR_Word transform_hlds__inlining__PredId_10,
  MR_Integer transform_hlds__inlining__ProcId_11,
  MR_Word transform_hlds__inlining__BuiltinState_12,
  MR_Word transform_hlds__inlining__HighLevelCode_13,
  MR_Word transform_hlds__inlining__InlinedProcs_15,
  MR_Word transform_hlds__inlining__ModuleInfo_17,
  MR_Word * transform_hlds__inlining__UserReq_18)
{
  {
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_12 == (MR_Integer) 2);
    MR_Word transform_hlds__inlining__PredInfo_20;
    MR_Word transform_hlds__inlining__Markers_21;
    MR_Word transform_hlds__inlining__PredInfo_33;
    MR_Word transform_hlds__inlining__ProcInfo_34;
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_35;
    MR_Word transform_hlds__inlining__CalledGoal_39;
    MR_Word transform_hlds__inlining__CalledGoalExpr_40;
    MR_Word transform_hlds__inlining__V_54_54;
    MR_Word transform_hlds__inlining__V_59_59;
    MR_Integer transform_hlds__inlining__V_58_58;
    MR_Word transform_hlds__inlining__V_41_41;
    MR_Word transform_hlds__inlining__ForeignAttributes_42;
    MR_Word transform_hlds__inlining__V_43_43;
    MR_Integer transform_hlds__inlining__V_44_44;
    MR_Word transform_hlds__inlining__V_45_45;
    MR_Word transform_hlds__inlining__V_46_46;
    MR_Word transform_hlds__inlining__V_47_47;
    MR_Word transform_hlds__inlining__V_48_48;
    MR_Word transform_hlds__inlining__V_22_22;

    if (transform_hlds__inlining__succeeded)
      {
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, &transform_hlds__inlining__PredInfo_33, &transform_hlds__inlining__ProcInfo_34);
        }
        {
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
        }
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          {
            {
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_33);
            }
            if (transform_hlds__inlining__succeeded)
              {
                {
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_58_58);
                }
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_11 == transform_hlds__inlining__V_58_58);
              }
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__V_59_59);
                }
                {
                  transform_hlds__inlining__succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(transform_hlds__inlining__V_54_54, transform_hlds__inlining__V_59_59);
                }
                if (transform_hlds__inlining__succeeded)
                  {
                    {
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_33);
                    }
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      {
                        {
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__MaybeComplexityProcMap_35);
                        }
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          transform_hlds__inlining__succeeded = MR_TRUE;
                        else
                          {
                            MR_Word transform_hlds__inlining__ComplexityProcMap_37;
                            MR_Word transform_hlds__inlining__IsInComplexityMap_38;
                            MR_Word transform_hlds__inlining__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_35, (MR_Integer) 0)));
                            MR_Integer transform_hlds__inlining__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_55_55, (MR_Integer) 0)));

                            transform_hlds__inlining__ComplexityProcMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_55_55, (MR_Integer) 1)));
                            {
                              transform_hlds__inlining__IsInComplexityMap_38 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_37, transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11);
                            }
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        if (transform_hlds__inlining__succeeded)
                          {
                            {
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__CalledGoal_39);
                            }
                            transform_hlds__inlining__CalledGoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 0)));
                            transform_hlds__inlining__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_39, (MR_Integer) 1)));
                            transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (transform_hlds__inlining__succeeded)
                              {
                                transform_hlds__inlining__ForeignAttributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 1)));
                                transform_hlds__inlining__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 2)));
                                transform_hlds__inlining__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 3)));
                                transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 4)));
                                transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 5)));
                                transform_hlds__inlining__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 6)));
                                transform_hlds__inlining__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_40, (MR_Integer) 7)));
                                {
                                  MR_Word transform_hlds__inlining__Globals_49;
                                  MR_Word transform_hlds__inlining__Target_50;
                                  MR_Word transform_hlds__inlining__ForeignLanguage_51;
                                  MR_Word transform_hlds__inlining__MaybeMayDuplicate_52;
                                  MR_Word transform_hlds__inlining__Detism_53;

                                  {
                                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_17, &transform_hlds__inlining__Globals_49);
                                  }
                                  {
                                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_49, &transform_hlds__inlining__Target_50);
                                  }
                                  {
                                    transform_hlds__inlining__ForeignLanguage_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_42);
                                  }
                                  switch (transform_hlds__inlining__ForeignLanguage_51) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 0);
                                      break;
                                    case (MR_Integer) 1:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 1);
                                      break;
                                    case (MR_Integer) 3:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 3);
                                      break;
                                    case (MR_Integer) 2:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_50 == (MR_Integer) 2);
                                      break;
                                  }
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                  if (transform_hlds__inlining__succeeded)
                                    {
                                      {
                                        transform_hlds__inlining__MaybeMayDuplicate_52 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_42);
                                      }
                                      if ((transform_hlds__inlining__MaybeMayDuplicate_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        transform_hlds__inlining__succeeded = MR_TRUE;
                                      else
                                        {
                                          MR_Word transform_hlds__inlining__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_52, (MR_Integer) 0)));

                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_56_56 == (MR_Integer) 0);
                                        }
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                      if (transform_hlds__inlining__succeeded)
                                        {
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_13 == (MR_Integer) 0);
                                          if (transform_hlds__inlining__succeeded)
                                            {
                                              {
                                                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_34, &transform_hlds__inlining__Detism_53);
                                              }
                                              switch (transform_hlds__inlining__Detism_53) {
                                                default:
                                                  transform_hlds__inlining__succeeded = MR_FALSE;
                                                  break;
                                                case (MR_Integer) 2:
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
                                                  break;
                                                case (MR_Integer) 3:
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
                                                  break;
                                              }
                                            }
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                        }
                                    }
                                }
                              }
                            else
                              transform_hlds__inlining__succeeded = MR_TRUE;
                            if (transform_hlds__inlining__succeeded)
                              {
                                {
                                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_17, transform_hlds__inlining__PredId_10, &transform_hlds__inlining__PredInfo_20);
                                }
                                {
                                  hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__PredInfo_20, &transform_hlds__inlining__Markers_21);
                                }
                                transform_hlds__inlining__V_22_22 = (MR_Integer) 6;
                                {
                                  transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, transform_hlds__inlining__V_22_22);
                                }
                                if (transform_hlds__inlining__succeeded)
                                  {
                                    *transform_hlds__inlining__UserReq_18 = (MR_Integer) 1;
                                    transform_hlds__inlining__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    {
                                      transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_21, (MR_Integer) 8);
                                    }
                                    if (!(transform_hlds__inlining__succeeded))
                                      {
                                        MR_Word transform_hlds__inlining__V_23_23;

                                        {
                                          transform_hlds__inlining__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_10));
                                          MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_23_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_11));
                                        }
                                        {
                                          transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__V_23_23)), transform_hlds__inlining__InlinedProcs_15);
                                        }
                                      }
                                    if (transform_hlds__inlining__succeeded)
                                      {
                                        *transform_hlds__inlining__UserReq_18 = (MR_Integer) 0;
                                        transform_hlds__inlining__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_54_93_95_48_6_p_0(
  MR_Word transform_hlds__inlining__ModuleInfo_7,
  MR_Word transform_hlds__inlining__PredId_8,
  MR_Integer transform_hlds__inlining__ProcId_9,
  MR_Word transform_hlds__inlining__BuiltinState_10,
  MR_Word transform_hlds__inlining__InlinePromisedPure_11)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__Globals_13;
    MR_Word transform_hlds__inlining__HighLevelCode_14;
    MR_Word transform_hlds__inlining__PredInfo_23;
    MR_Word transform_hlds__inlining__ProcInfo_24;
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_25;
    MR_Word transform_hlds__inlining__CalledGoal_29;
    MR_Word transform_hlds__inlining__CalledGoalExpr_30;
    MR_Word transform_hlds__inlining__V_44_44;
    MR_Word transform_hlds__inlining__V_49_49;
    MR_Integer transform_hlds__inlining__V_48_48;
    MR_Word transform_hlds__inlining__V_31_31;
    MR_Word transform_hlds__inlining__ForeignAttributes_32;
    MR_Word transform_hlds__inlining__V_33_33;
    MR_Integer transform_hlds__inlining__V_34_34;
    MR_Word transform_hlds__inlining__V_35_35;
    MR_Word transform_hlds__inlining__V_36_36;
    MR_Word transform_hlds__inlining__V_37_37;
    MR_Word transform_hlds__inlining__V_38_38;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__Globals_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_13, (MR_Integer) 254, &transform_hlds__inlining__HighLevelCode_14);
    }
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_10 == (MR_Integer) 2);
    if (transform_hlds__inlining__succeeded)
      {
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9, &transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__ProcInfo_24);
        }
        {
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
        }
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          {
            {
              transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_23);
            }
            if (transform_hlds__inlining__succeeded)
              {
                {
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__V_48_48);
                }
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_9 == transform_hlds__inlining__V_48_48);
              }
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__V_49_49);
                }
                {
                  transform_hlds__inlining__succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(transform_hlds__inlining__V_44_44, transform_hlds__inlining__V_49_49);
                }
                if (transform_hlds__inlining__succeeded)
                  {
                    {
                      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_23);
                    }
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      {
                        {
                          hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__MaybeComplexityProcMap_25);
                        }
                        if ((transform_hlds__inlining__MaybeComplexityProcMap_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          transform_hlds__inlining__succeeded = MR_TRUE;
                        else
                          {
                            MR_Word transform_hlds__inlining__ComplexityProcMap_27;
                            MR_Word transform_hlds__inlining__IsInComplexityMap_28;
                            MR_Word transform_hlds__inlining__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_25, (MR_Integer) 0)));
                            MR_Integer transform_hlds__inlining__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_45_45, (MR_Integer) 0)));

                            transform_hlds__inlining__ComplexityProcMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_45_45, (MR_Integer) 1)));
                            {
                              transform_hlds__inlining__IsInComplexityMap_28 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_27, transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9);
                            }
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        if (transform_hlds__inlining__succeeded)
                          {
                            {
                              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__CalledGoal_29);
                            }
                            transform_hlds__inlining__CalledGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 0)));
                            transform_hlds__inlining__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_29, (MR_Integer) 1)));
                            transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (transform_hlds__inlining__succeeded)
                              {
                                transform_hlds__inlining__ForeignAttributes_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 1)));
                                transform_hlds__inlining__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 2)));
                                transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 3)));
                                transform_hlds__inlining__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 4)));
                                transform_hlds__inlining__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 5)));
                                transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 6)));
                                transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_30, (MR_Integer) 7)));
                                {
                                  MR_Word transform_hlds__inlining__Globals_39;
                                  MR_Word transform_hlds__inlining__Target_40;
                                  MR_Word transform_hlds__inlining__ForeignLanguage_41;
                                  MR_Word transform_hlds__inlining__MaybeMayDuplicate_42;
                                  MR_Word transform_hlds__inlining__Detism_43;

                                  {
                                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_7, &transform_hlds__inlining__Globals_39);
                                  }
                                  {
                                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_39, &transform_hlds__inlining__Target_40);
                                  }
                                  {
                                    transform_hlds__inlining__ForeignLanguage_41 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_32);
                                  }
                                  switch (transform_hlds__inlining__ForeignLanguage_41) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 0:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 0);
                                      break;
                                    case (MR_Integer) 1:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 1);
                                      break;
                                    case (MR_Integer) 3:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 3);
                                      break;
                                    case (MR_Integer) 2:
                                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_40 == (MR_Integer) 2);
                                      break;
                                  }
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                  if (transform_hlds__inlining__succeeded)
                                    {
                                      {
                                        transform_hlds__inlining__MaybeMayDuplicate_42 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_32);
                                      }
                                      if ((transform_hlds__inlining__MaybeMayDuplicate_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        transform_hlds__inlining__succeeded = MR_TRUE;
                                      else
                                        {
                                          MR_Word transform_hlds__inlining__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_42, (MR_Integer) 0)));

                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
                                        }
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                      if (transform_hlds__inlining__succeeded)
                                        {
                                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_14 == (MR_Integer) 0);
                                          if (transform_hlds__inlining__succeeded)
                                            {
                                              {
                                                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_24, &transform_hlds__inlining__Detism_43);
                                              }
                                              switch (transform_hlds__inlining__Detism_43) {
                                                default:
                                                  transform_hlds__inlining__succeeded = MR_FALSE;
                                                  break;
                                                case (MR_Integer) 2:
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
                                                  break;
                                                case (MR_Integer) 3:
                                                  transform_hlds__inlining__succeeded = MR_TRUE;
                                                  break;
                                              }
                                            }
                                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                        }
                                    }
                                }
                              }
                            else
                              transform_hlds__inlining__succeeded = MR_TRUE;
                            if (transform_hlds__inlining__succeeded)
                              switch (transform_hlds__inlining__InlinePromisedPure_11) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word transform_hlds__inlining__V_50_50;

                                    {
                                      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(transform_hlds__inlining__PredInfo_23, &transform_hlds__inlining__V_50_50);
                                    }
                                    transform_hlds__inlining__succeeded = ((MR_Integer) 2 == transform_hlds__inlining__V_50_50);
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  transform_hlds__inlining__succeeded = MR_TRUE;
                                  break;
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_27 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__CastY_28 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_27 == transform_hlds__inlining__CastY_28);
    if (transform_hlds__inlining__succeeded)
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer transform_hlds__inlining__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer transform_hlds__inlining__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_20_20;
        MR_Integer transform_hlds__inlining__V_37_37 = (MR_Integer) transform_hlds__inlining__V_4_4;
        MR_Integer transform_hlds__inlining__V_38_38 = (MR_Integer) transform_hlds__inlining__V_12_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_20_20, transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_38_38);
        }
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_20_20;
        else
          {
            MR_Word transform_hlds__inlining__V_21_21;
            MR_Integer transform_hlds__inlining__V_39_39 = (MR_Integer) transform_hlds__inlining__V_5_5;
            MR_Integer transform_hlds__inlining__V_40_40 = (MR_Integer) transform_hlds__inlining__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_21_21, transform_hlds__inlining__V_39_39, transform_hlds__inlining__V_40_40);
            }
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_21_21 == (MR_Integer) 0);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_21_21;
            else
              {
                MR_Word transform_hlds__inlining__V_22_22;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_22_22, transform_hlds__inlining__V_6_6, transform_hlds__inlining__V_14_14);
                }
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_22_22 == (MR_Integer) 0);
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                if (transform_hlds__inlining__succeeded)
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_22_22;
                else
                  {
                    MR_Word transform_hlds__inlining__V_23_23;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_23_23, transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_15_15);
                    }
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_23_23 == (MR_Integer) 0);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_23_23;
                    else
                      {
                        MR_Word transform_hlds__inlining__V_24_24;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_24_24, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_16_16);
                        }
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_24_24 == (MR_Integer) 0);
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                        if (transform_hlds__inlining__succeeded)
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_24_24;
                        else
                          {
                            MR_Word transform_hlds__inlining__V_25_25;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_25_25, transform_hlds__inlining__V_9_9, transform_hlds__inlining__V_17_17);
                            }
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_25_25 == (MR_Integer) 0);
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                            if (transform_hlds__inlining__succeeded)
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_25_25;
                            else
                              {
                                MR_Word transform_hlds__inlining__V_26_26;
                                MR_Integer transform_hlds__inlining__V_41_41 = (MR_Integer) transform_hlds__inlining__V_10_10;
                                MR_Integer transform_hlds__inlining__V_42_42 = (MR_Integer) transform_hlds__inlining__V_18_18;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_26_26, transform_hlds__inlining__V_41_41, transform_hlds__inlining__V_42_42);
                                }
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_26_26 == (MR_Integer) 0);
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                if (transform_hlds__inlining__succeeded)
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_26_26;
                                else
                                  {
                                    MR_Integer transform_hlds__inlining__V_43_43 = (MR_Integer) transform_hlds__inlining__V_11_11;
                                    MR_Integer transform_hlds__inlining__V_44_44 = (MR_Integer) transform_hlds__inlining__V_19_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_43_43, transform_hlds__inlining__V_44_44);
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_19 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
    MR_Integer transform_hlds__inlining__CastY_20 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_19 == transform_hlds__inlining__CastY_20);
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__inlining__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__inlining__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer transform_hlds__inlining__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer transform_hlds__inlining__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__inlining__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__inlining__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer transform_hlds__inlining__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_11_11);
        if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_12_12);
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_13_13);
                if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_6_6 == transform_hlds__inlining__V_14_14);
                    if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_7_7 == transform_hlds__inlining__V_15_15);
                        if (transform_hlds__inlining__succeeded)
                          {
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == transform_hlds__inlining__V_16_16);
                            if (transform_hlds__inlining__succeeded)
                              {
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_9_9 == transform_hlds__inlining__V_17_17);
                                if (transform_hlds__inlining__succeeded)
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_10_10 == transform_hlds__inlining__V_18_18);
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_51 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__CastY_52 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_51 == transform_hlds__inlining__CastY_52);
    if (transform_hlds__inlining__succeeded)
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__inlining__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__inlining__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word transform_hlds__inlining__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word transform_hlds__inlining__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word transform_hlds__inlining__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_36_36;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_36_36, transform_hlds__inlining__V_4_4, transform_hlds__inlining__V_20_20);
        }
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_36_36 == (MR_Integer) 0);
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_36_36;
        else
          {
            MR_Word transform_hlds__inlining__V_37_37;
            MR_Integer transform_hlds__inlining__V_69_69 = (MR_Integer) transform_hlds__inlining__V_5_5;
            MR_Integer transform_hlds__inlining__V_70_70 = (MR_Integer) transform_hlds__inlining__V_21_21;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_37_37, transform_hlds__inlining__V_69_69, transform_hlds__inlining__V_70_70);
            }
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_37_37 == (MR_Integer) 0);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_37_37;
            else
              {
                MR_Word transform_hlds__inlining__V_38_38;
                MR_Integer transform_hlds__inlining__V_71_71 = (MR_Integer) transform_hlds__inlining__V_6_6;
                MR_Integer transform_hlds__inlining__V_72_72 = (MR_Integer) transform_hlds__inlining__V_22_22;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_38_38, transform_hlds__inlining__V_71_71, transform_hlds__inlining__V_72_72);
                }
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_38_38 == (MR_Integer) 0);
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                if (transform_hlds__inlining__succeeded)
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_38_38;
                else
                  {
                    MR_Word transform_hlds__inlining__V_39_39;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[2], &transform_hlds__inlining__V_39_39, ((MR_Box) (transform_hlds__inlining__V_7_7)), ((MR_Box) (transform_hlds__inlining__V_23_23)));
                    }
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_39_39 == (MR_Integer) 0);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_39_39;
                    else
                      {
                        MR_Word transform_hlds__inlining__V_40_40;

                        {
                          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__inlining__V_40_40, transform_hlds__inlining__V_8_8, transform_hlds__inlining__V_24_24);
                        }
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_40_40 == (MR_Integer) 0);
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                        if (transform_hlds__inlining__succeeded)
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_40_40;
                        else
                          {
                            MR_Word transform_hlds__inlining__V_41_41;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__V_41_41, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                            }
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_41_41 == (MR_Integer) 0);
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                            if (transform_hlds__inlining__succeeded)
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_41_41;
                            else
                              {
                                MR_Word transform_hlds__inlining__V_42_42;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[4], &transform_hlds__inlining__V_42_42, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                }
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_42_42 == (MR_Integer) 0);
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                if (transform_hlds__inlining__succeeded)
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_42_42;
                                else
                                  {
                                    MR_Word transform_hlds__inlining__V_43_43;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[5], &transform_hlds__inlining__V_43_43, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                    }
                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_43_43 == (MR_Integer) 0);
                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                    if (transform_hlds__inlining__succeeded)
                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_43_43;
                                    else
                                      {
                                        MR_Word transform_hlds__inlining__V_44_44;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_2[0], &transform_hlds__inlining__V_44_44, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                        }
                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_44_44 == (MR_Integer) 0);
                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                        if (transform_hlds__inlining__succeeded)
                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_44_44;
                                        else
                                          {
                                            MR_Word transform_hlds__inlining__V_45_45;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[6], &transform_hlds__inlining__V_45_45, ((MR_Box) (transform_hlds__inlining__V_13_13)), ((MR_Box) (transform_hlds__inlining__V_29_29)));
                                            }
                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_45_45 == (MR_Integer) 0);
                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                            if (transform_hlds__inlining__succeeded)
                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_45_45;
                                            else
                                              {
                                                MR_Word transform_hlds__inlining__V_46_46;

                                                {
                                                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__inlining__V_46_46, transform_hlds__inlining__V_14_14, transform_hlds__inlining__V_30_30);
                                                }
                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_46_46 == (MR_Integer) 0);
                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                                if (transform_hlds__inlining__succeeded)
                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_46_46;
                                                else
                                                  {
                                                    MR_Word transform_hlds__inlining__V_47_47;
                                                    MR_Integer transform_hlds__inlining__V_73_73 = (MR_Integer) transform_hlds__inlining__V_15_15;
                                                    MR_Integer transform_hlds__inlining__V_74_74 = (MR_Integer) transform_hlds__inlining__V_31_31;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_47_47, transform_hlds__inlining__V_73_73, transform_hlds__inlining__V_74_74);
                                                    }
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_47_47 == (MR_Integer) 0);
                                                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                                    if (transform_hlds__inlining__succeeded)
                                                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_47_47;
                                                    else
                                                      {
                                                        MR_Word transform_hlds__inlining__V_48_48;
                                                        MR_Integer transform_hlds__inlining__V_75_75 = (MR_Integer) transform_hlds__inlining__V_16_16;
                                                        MR_Integer transform_hlds__inlining__V_76_76 = (MR_Integer) transform_hlds__inlining__V_32_32;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_48_48, transform_hlds__inlining__V_75_75, transform_hlds__inlining__V_76_76);
                                                        }
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_48_48 == (MR_Integer) 0);
                                                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                                        if (transform_hlds__inlining__succeeded)
                                                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_48_48;
                                                        else
                                                          {
                                                            MR_Word transform_hlds__inlining__V_49_49;
                                                            MR_Integer transform_hlds__inlining__V_77_77 = (MR_Integer) transform_hlds__inlining__V_17_17;
                                                            MR_Integer transform_hlds__inlining__V_78_78 = (MR_Integer) transform_hlds__inlining__V_33_33;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_49_49, transform_hlds__inlining__V_77_77, transform_hlds__inlining__V_78_78);
                                                            }
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_49_49 == (MR_Integer) 0);
                                                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                                            if (transform_hlds__inlining__succeeded)
                                                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_49_49;
                                                            else
                                                              {
                                                                MR_Word transform_hlds__inlining__V_50_50;
                                                                MR_Integer transform_hlds__inlining__V_79_79 = (MR_Integer) transform_hlds__inlining__V_18_18;
                                                                MR_Integer transform_hlds__inlining__V_80_80 = (MR_Integer) transform_hlds__inlining__V_34_34;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__V_50_50, transform_hlds__inlining__V_79_79, transform_hlds__inlining__V_80_80);
                                                                }
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_50_50 == (MR_Integer) 0);
                                                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                                                if (transform_hlds__inlining__succeeded)
                                                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__V_50_50;
                                                                else
                                                                  {
                                                                    MR_Integer transform_hlds__inlining__V_81_81 = (MR_Integer) transform_hlds__inlining__V_19_19;
                                                                    MR_Integer transform_hlds__inlining__V_82_82 = (MR_Integer) transform_hlds__inlining__V_35_35;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__V_81_81, transform_hlds__inlining__V_82_82);
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
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_35 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
    MR_Integer transform_hlds__inlining__CastY_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_35 == transform_hlds__inlining__CastY_36);
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__inlining__TypeInfo_37_37;
        MR_Word transform_hlds__inlining__TypeInfo_39_39;
        MR_Word transform_hlds__inlining__TypeInfo_40_40;
        MR_Word transform_hlds__inlining__TypeInfo_41_41;
        MR_Word transform_hlds__inlining__TypeInfo_42_42;
        MR_Word transform_hlds__inlining__TypeInfo_43_43;
        MR_Integer transform_hlds__inlining__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__inlining__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word transform_hlds__inlining__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__inlining__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__inlining__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__inlining__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__inlining__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__inlining__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__inlining__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__inlining__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word transform_hlds__inlining__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_3_3 == transform_hlds__inlining__V_19_19);
        if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_4_4 == transform_hlds__inlining__V_20_20);
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_5_5 == transform_hlds__inlining__V_21_21);
                if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__TypeInfo_37_37 = (MR_Word) &transform_hlds__inlining_scalar_common_1[2];
                    {
                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_37_37, ((MR_Box) (transform_hlds__inlining__V_6_6)), ((MR_Box) (transform_hlds__inlining__V_22_22)));
                    }
                    if (transform_hlds__inlining__succeeded)
                      {
                        {
                          transform_hlds__inlining__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__inlining__V_7_7, transform_hlds__inlining__V_23_23);
                        }
                        if (transform_hlds__inlining__succeeded)
                          {
                            transform_hlds__inlining__TypeInfo_39_39 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
                            {
                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_39_39, ((MR_Box) (transform_hlds__inlining__V_8_8)), ((MR_Box) (transform_hlds__inlining__V_24_24)));
                            }
                            if (transform_hlds__inlining__succeeded)
                              {
                                transform_hlds__inlining__TypeInfo_40_40 = (MR_Word) &transform_hlds__inlining_scalar_common_1[4];
                                {
                                  transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_40_40, ((MR_Box) (transform_hlds__inlining__V_9_9)), ((MR_Box) (transform_hlds__inlining__V_25_25)));
                                }
                                if (transform_hlds__inlining__succeeded)
                                  {
                                    transform_hlds__inlining__TypeInfo_41_41 = (MR_Word) &transform_hlds__inlining_scalar_common_1[5];
                                    {
                                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_41_41, ((MR_Box) (transform_hlds__inlining__V_10_10)), ((MR_Box) (transform_hlds__inlining__V_26_26)));
                                    }
                                    if (transform_hlds__inlining__succeeded)
                                      {
                                        transform_hlds__inlining__TypeInfo_42_42 = (MR_Word) &transform_hlds__inlining_scalar_common_2[0];
                                        {
                                          transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_42_42, ((MR_Box) (transform_hlds__inlining__V_11_11)), ((MR_Box) (transform_hlds__inlining__V_27_27)));
                                        }
                                        if (transform_hlds__inlining__succeeded)
                                          {
                                            transform_hlds__inlining__TypeInfo_43_43 = (MR_Word) &transform_hlds__inlining_scalar_common_1[6];
                                            {
                                              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_43_43, ((MR_Box) (transform_hlds__inlining__V_12_12)), ((MR_Box) (transform_hlds__inlining__V_28_28)));
                                            }
                                            if (transform_hlds__inlining__succeeded)
                                              {
                                                {
                                                  transform_hlds__inlining__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__inlining__V_13_13, transform_hlds__inlining__V_29_29);
                                                }
                                                if (transform_hlds__inlining__succeeded)
                                                  {
                                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_14_14 == transform_hlds__inlining__V_30_30);
                                                    if (transform_hlds__inlining__succeeded)
                                                      {
                                                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_15_15 == transform_hlds__inlining__V_31_31);
                                                        if (transform_hlds__inlining__succeeded)
                                                          {
                                                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_16_16 == transform_hlds__inlining__V_32_32);
                                                            if (transform_hlds__inlining__succeeded)
                                                              {
                                                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_17_17 == transform_hlds__inlining__V_33_33);
                                                                if (transform_hlds__inlining__succeeded)
                                                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_18_18 == transform_hlds__inlining__V_34_34);
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
                  }
              }
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Goal1_12;
        MR_Word transform_hlds__inlining__Goal1List_13;
        MR_Word transform_hlds__inlining__Goals1_14;
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

        {
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
        {
          hlds__hlds_goal__goal_to_par_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
        {
          transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Goal1_12;
        MR_Word transform_hlds__inlining__Goal1List_13;
        MR_Word transform_hlds__inlining__Goals1_14;
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

        {
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal1_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
        }
        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__inlining__Goal1_12, &transform_hlds__inlining__Goal1List_13);
        }
        {
          transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals1_14, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__Goal1List_13, transform_hlds__inlining__Goals1_14, transform_hlds__inlining__HeadVar__2_2);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__inlining__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Case_10;
        MR_Word transform_hlds__inlining__Cases_11;
        MR_Word transform_hlds__inlining__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 2)));
        MR_Word transform_hlds__inlining__Goal_16;
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_19_19;

        {
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_15, &transform_hlds__inlining__Goal_16, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_19_19);
        }
        {
          transform_hlds__inlining__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 0) = ((MR_Box) (transform_hlds__inlining__MainConsId_13));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 1) = ((MR_Box) (transform_hlds__inlining__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 2) = ((MR_Box) (transform_hlds__inlining__Goal_16));
        }
        {
          transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_9, &transform_hlds__inlining__Cases_11, transform_hlds__inlining__STATE_VARIABLE_Info_19_19, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__inlining__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Case_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Cases_11));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_goals_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Goal_10;
        MR_Word transform_hlds__inlining__Goals_11;
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_15_15;

        {
          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal_10, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_15_15);
        }
        {
          transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals_11, transform_hlds__inlining__STATE_VARIABLE_Info_15_15, transform_hlds__inlining__STATE_VARIABLE_Info_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__inlining__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Goals_11));
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__inlining__VarA_4;
        MR_Word transform_hlds__inlining__VarB_5;
        MR_Word transform_hlds__inlining__V_11_11;
        MR_Word transform_hlds__inlining__Vars_6;

        if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__VarA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__V_11_11)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__VarB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 0)));
                transform_hlds__inlining__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__V_11_11, (MR_Integer) 1)));
                {
                  MR_Word transform_hlds__inlining__VarInfoA_7;
                  MR_Word transform_hlds__inlining__VarInfoB_8;
                  MR_Word transform_hlds__inlining__ConstraintA_9;
                  MR_Word transform_hlds__inlining__ConstraintB_10;

                  {
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarA_4, &transform_hlds__inlining__VarInfoA_7);
                  }
                  {
                    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarB_5, &transform_hlds__inlining__VarInfoB_8);
                  }
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoA_7)) == (MR_mktag((MR_Integer) 2)));
                  if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__ConstraintA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoA_7, (MR_Integer) 0)));
                      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoB_8)) == (MR_mktag((MR_Integer) 2)));
                      if (transform_hlds__inlining__succeeded)
                        {
                          transform_hlds__inlining__ConstraintB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoB_8, (MR_Integer) 0)));
                          {
                            transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(transform_hlds__inlining__ConstraintA_9, transform_hlds__inlining__ConstraintB_10);
                          }
                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                        }
                    }
                }
                if (!(transform_hlds__inlining__succeeded))
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__inlining__HeadVar__2__tmp_copy_2 = transform_hlds__inlining__V_11_11;

                      transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
              }
          }
        return transform_hlds__inlining__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_1(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_3(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80 = ((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80);
    {
      transform_hlds__inlining__inlining_in_call_11_p_0_2(transform_hlds__inlining__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_2(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    {
      MR_Word transform_hlds__inlining__V_78_78;
      MR_Word transform_hlds__inlining__V_79_79;

      {
        mercury__multi_map__lookup_3_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75, ((MR_Box) ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVar_80)), &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
      }
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77)) == (MR_mktag((MR_Integer) 1)));
      if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
        {
          {
            transform_hlds__inlining__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 0)));
            transform_hlds__inlining__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77, (MR_Integer) 1)));
          }
          {
            {
              (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__HeadVarsForArgVar_77);
            }
            if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
              {
                transform_hlds__inlining__inlining_in_call_11_p_0_1(transform_hlds__inlining__env_ptr);
              }
          }
        }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0_4(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__conv0_ArgVar_80, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__inlining_in_call_11_p_0_3, transform_hlds__inlining__env_ptr);
        }
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_11_p_0(
  MR_Word transform_hlds__inlining__PredId_12,
  MR_Integer transform_hlds__inlining__ProcId_13,
  MR_Word transform_hlds__inlining__ArgVars_14,
  MR_Word transform_hlds__inlining__Builtin_15,
  MR_Word transform_hlds__inlining__Context_16,
  MR_Word transform_hlds__inlining__Sym_17,
  MR_Word * transform_hlds__inlining__GoalExpr_18,
  MR_Word transform_hlds__inlining__GoalInfo0_19,
  MR_Word * transform_hlds__inlining__GoalInfo_20,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_60,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_61)
{
  {
    struct transform_hlds__inlining__inlining_in_call_11_p_0_env_0_s transform_hlds__inlining__env;

    (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14 = transform_hlds__inlining__ArgVars_14;
    {
      MR_Integer transform_hlds__inlining__VarThresh_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__HighLevelCode_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__AnyTracing_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__InlinedProcs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ExternalTypeParams_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__Markers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__VarSet0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__VarTypes0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__TypeVarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__RttiVarMaps0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__InlinedParallel0_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__Requantify0_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__DetChanged0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__PurityChanged0_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__PredInfo_38;
      MR_Word transform_hlds__inlining__ProcInfo_39;
      MR_Word transform_hlds__inlining___DidInlining0_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_60, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__UserReq_40;
      MR_Word transform_hlds__inlining__HeadVars_74;

      {
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_26, transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, &transform_hlds__inlining__PredInfo_38, &transform_hlds__inlining__ProcInfo_39);
      }
      {
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_111_117_108_100_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_53_44_32_55_93_95_48_9_p_0(transform_hlds__inlining__PredId_12, transform_hlds__inlining__ProcId_13, transform_hlds__inlining__Builtin_15, transform_hlds__inlining__HighLevelCode_23, transform_hlds__inlining__InlinedProcs_25, transform_hlds__inlining__ModuleInfo_26, &transform_hlds__inlining__UserReq_40);
      }
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
        {
          switch (transform_hlds__inlining__UserReq_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__inlining__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                MR_Word transform_hlds__inlining__TypeInfo_66_66;
                MR_Word transform_hlds__inlining__ListOfVars_41;
                MR_Integer transform_hlds__inlining__ThisMany_42;
                MR_Word transform_hlds__inlining__CalleeVarSet_43;
                MR_Word transform_hlds__inlining__CalleeListOfVars_44;
                MR_Integer transform_hlds__inlining__CalleeThisMany_45;
                MR_Integer transform_hlds__inlining__TotalVars_46;

                {
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__ListOfVars_41);
                }
                transform_hlds__inlining__TypeInfo_66_66 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
                {
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__ListOfVars_41, &transform_hlds__inlining__ThisMany_42);
                }
                {
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__CalleeVarSet_43);
                }
                {
                  mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_65_65, transform_hlds__inlining__CalleeVarSet_43, &transform_hlds__inlining__CalleeListOfVars_44);
                }
                {
                  mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_66_66, transform_hlds__inlining__CalleeListOfVars_44, &transform_hlds__inlining__CalleeThisMany_45);
                }
                transform_hlds__inlining__TotalVars_46 = (transform_hlds__inlining__ThisMany_42 + transform_hlds__inlining__CalleeThisMany_45);
                (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__TotalVars_46 <= transform_hlds__inlining__VarThresh_22);
              }
              break;
            case (MR_Integer) 1:
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = MR_TRUE;
              break;
          }
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
            {
              {
                hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_39, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__RttiVarMaps_73);
              }
              {
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HeadVars_74);
              }
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
              {
                mercury__multi_map__from_corresponding_lists_3_p_0((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__TypeInfo_13_81, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__HeadVars_74, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__MultiMap_75);
              }
              {
                transform_hlds__inlining__inlining_in_call_11_p_0_4(&transform_hlds__inlining__env);
              }
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = !((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded);
            }
        }
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
        {
          MR_Word transform_hlds__inlining__VarSet_47;
          MR_Word transform_hlds__inlining__VarTypes_48;
          MR_Word transform_hlds__inlining__TypeVarSet_49;
          MR_Word transform_hlds__inlining__RttiVarMaps_50;
          MR_Word transform_hlds__inlining__NonLocals_51;
          MR_Word transform_hlds__inlining__Requantify_52;
          MR_Word transform_hlds__inlining__PurityChanged_53;
          MR_Word transform_hlds__inlining__Determinism0_54;
          MR_Word transform_hlds__inlining__Determinism_55;
          MR_Word transform_hlds__inlining__DetChanged_56;
          MR_Word transform_hlds__inlining__HasParallelConj_57;
          MR_Word transform_hlds__inlining__InlinedParallel_58;
          MR_Word transform_hlds__inlining__V_62_62;
          MR_Word transform_hlds__inlining__V_68_68;
          MR_Word transform_hlds__inlining__V_63_63;
          MR_Word transform_hlds__inlining__V_69_69;

          {
            transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__inlining__ExternalTypeParams_27, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14, transform_hlds__inlining__PredInfo_38, transform_hlds__inlining__ProcInfo_39, transform_hlds__inlining__VarSet0_29, &transform_hlds__inlining__VarSet_47, transform_hlds__inlining__VarTypes0_30, &transform_hlds__inlining__VarTypes_48, transform_hlds__inlining__TypeVarSet0_31, &transform_hlds__inlining__TypeVarSet_49, transform_hlds__inlining__RttiVarMaps0_32, &transform_hlds__inlining__RttiVarMaps_50, &transform_hlds__inlining__V_62_62);
          }
          *transform_hlds__inlining__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 0)));
          *transform_hlds__inlining__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__V_62_62, (MR_Integer) 1)));
          {
            transform_hlds__inlining__NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
          {
            transform_hlds__inlining__V_68_68 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14);
          }
          {
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[7], ((MR_Box) (transform_hlds__inlining__NonLocals_51)), ((MR_Box) (transform_hlds__inlining__V_68_68)));
          }
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
            transform_hlds__inlining__Requantify_52 = transform_hlds__inlining__Requantify0_35;
          else
            transform_hlds__inlining__Requantify_52 = (MR_Integer) 1;
          {
            transform_hlds__inlining__V_63_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
          {
            transform_hlds__inlining__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__V_63_63 == transform_hlds__inlining__V_69_69);
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
            transform_hlds__inlining__PurityChanged_53 = transform_hlds__inlining__PurityChanged0_37;
          else
            transform_hlds__inlining__PurityChanged_53 = (MR_Integer) 1;
          {
            transform_hlds__inlining__Determinism0_54 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo0_19);
          }
          {
            transform_hlds__inlining__Determinism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(*transform_hlds__inlining__GoalInfo_20);
          }
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded = (transform_hlds__inlining__Determinism0_54 == transform_hlds__inlining__Determinism_55);
          if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__succeeded)
            transform_hlds__inlining__DetChanged_56 = transform_hlds__inlining__DetChanged0_36;
          else
            transform_hlds__inlining__DetChanged_56 = (MR_Integer) 1;
          {
            hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__inlining__ProcInfo_39, &transform_hlds__inlining__HasParallelConj_57);
          }
          switch (transform_hlds__inlining__HasParallelConj_57) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              transform_hlds__inlining__InlinedParallel_58 = transform_hlds__inlining__InlinedParallel0_34;
              break;
            case (MR_Integer) 0:
              transform_hlds__inlining__InlinedParallel_58 = (MR_Integer) 1;
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__inlining__STATE_VARIABLE_Info_61 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_22));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_23 | ((transform_hlds__inlining__AnyTracing_24 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_25));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__inlining__ModuleInfo_26));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__inlining__ExternalTypeParams_27));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__inlining__Markers_28));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__inlining__VarSet_47));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes_48));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet_49));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps_50));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (((MR_Integer) 1 | ((((transform_hlds__inlining__InlinedParallel_58 << (MR_Integer) 1)) | ((((transform_hlds__inlining__Requantify_52 << (MR_Integer) 2)) | ((((transform_hlds__inlining__DetChanged_56 << (MR_Integer) 3)) | ((transform_hlds__inlining__PurityChanged_53 << (MR_Integer) 4)))))))))));
          }
        }
      else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__inlining__GoalExpr_18 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__inlining__PredId_12));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_13));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_11_p_0_env_0__ArgVars_14));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__inlining__Builtin_15));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__inlining__Context_16));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__inlining__Sym_17));
          }
          *transform_hlds__inlining__GoalInfo_20 = transform_hlds__inlining__GoalInfo0_19;
          *transform_hlds__inlining__STATE_VARIABLE_Info_61 = transform_hlds__inlining__STATE_VARIABLE_Info_0_60;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word transform_hlds__inlining__Goal0_5,
  MR_Word * transform_hlds__inlining__Goal_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_55,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_56)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__GoalExpr_16;
    MR_Word transform_hlds__inlining__GoalInfo_17;

    switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__inlining__SubGoal0_49 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr0_8), (MR_Integer) 0);
          MR_Word transform_hlds__inlining__SubGoal_50;

          {
            transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_49, &transform_hlds__inlining__SubGoal_50, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
          transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__inlining__SubGoal_50);
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
          transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
          *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__inlining__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)));
          MR_Integer transform_hlds__inlining__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__inlining__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__inlining__Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__inlining__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word transform_hlds__inlining__Sym_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 5)));

          {
            transform_hlds__inlining__inlining_in_call_11_p_0(transform_hlds__inlining__PredId_10, transform_hlds__inlining__ProcId_11, transform_hlds__inlining__ArgVars_12, transform_hlds__inlining__Builtin_13, transform_hlds__inlining__Context_14, transform_hlds__inlining__Sym_15, &transform_hlds__inlining__GoalExpr_16, transform_hlds__inlining__GoalInfo0_9, &transform_hlds__inlining__GoalInfo_17, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
              *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__inlining__ConjType_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Goals_37;

              switch (transform_hlds__inlining__ConjType_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_36, &transform_hlds__inlining__Goals_37, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
                  break;
              }
              {
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__ConjType_35));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Goals_37));
              }
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__inlining__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Goals_71;

              {
                transform_hlds__inlining__inlining_in_goals_4_p_0(transform_hlds__inlining__Goals0_70, &transform_hlds__inlining__Goals_71, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
              {
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Goals_71));
              }
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__inlining__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Cases0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__inlining__Cases_41;

              {
                transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_40, &transform_hlds__inlining__Cases_41, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
              {
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Var_38));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Det_39));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Cases_41));
              }
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__inlining__Reason_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__FGT_53;
              MR_Word transform_hlds__inlining__V_52_52;

              transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 1)));
                  transform_hlds__inlining__FGT_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_51, (MR_Integer) 2)));
                  switch (transform_hlds__inlining__FGT_53) {
                    default:
                      transform_hlds__inlining__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__inlining__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__inlining__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__GoalExpr_16 = transform_hlds__inlining__GoalExpr0_8;
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
                  *transform_hlds__inlining__STATE_VARIABLE_Info_56 = transform_hlds__inlining__STATE_VARIABLE_Info_0_55;
                }
              else
                {
                  MR_Word transform_hlds__inlining__SubGoal_72;

                  {
                    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_74, &transform_hlds__inlining__SubGoal_72, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, transform_hlds__inlining__STATE_VARIABLE_Info_56);
                  }
                  {
                    transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Reason_51));
                    MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__SubGoal_72));
                  }
                  transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__inlining__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Cond0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Then0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__inlining__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__inlining__Cond_46;
              MR_Word transform_hlds__inlining__Then_47;
              MR_Word transform_hlds__inlining__Else_48;
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_62_62;
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_63_63;

              {
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Cond0_43, &transform_hlds__inlining__Cond_46, transform_hlds__inlining__STATE_VARIABLE_Info_0_55, &transform_hlds__inlining__STATE_VARIABLE_Info_62_62);
              }
              {
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Then0_44, &transform_hlds__inlining__Then_47, transform_hlds__inlining__STATE_VARIABLE_Info_62_62, &transform_hlds__inlining__STATE_VARIABLE_Info_63_63);
              }
              {
                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Else0_45, &transform_hlds__inlining__Else_48, transform_hlds__inlining__STATE_VARIABLE_Info_63_63, transform_hlds__inlining__STATE_VARIABLE_Info_56);
              }
              {
                transform_hlds__inlining__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 1) = ((MR_Box) (transform_hlds__inlining__Vars_42));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 2) = ((MR_Box) (transform_hlds__inlining__Cond_46));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 3) = ((MR_Box) (transform_hlds__inlining__Then_47));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_16, 4) = ((MR_Box) (transform_hlds__inlining__Else_48));
              }
              transform_hlds__inlining__GoalInfo_17 = transform_hlds__inlining__GoalInfo0_9;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__inlining__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo_17));
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_5_p_0(
  MR_Word transform_hlds__inlining__PredProcId_6,
  MR_Word transform_hlds__inlining__InlinedProcs_7,
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__TypeCtorInfo_94_94;
    MR_Word transform_hlds__inlining__TypeCtorInfo_95_95;
    MR_Word transform_hlds__inlining__TypeCtorInfo_97_97;
    MR_Integer transform_hlds__inlining__VarThresh_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 4)));
    MR_Word transform_hlds__inlining__HighLevelCode_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__AnyTracing_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 0)));
    MR_Integer transform_hlds__inlining__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__PredTable0_17;
    MR_Word transform_hlds__inlining__ProcTable0_18;
    MR_Word transform_hlds__inlining__UnivQTVars_19;
    MR_Word transform_hlds__inlining__TypeVarSet0_20;
    MR_Word transform_hlds__inlining__Markers0_21;
    MR_Word transform_hlds__inlining__Goal0_22;
    MR_Word transform_hlds__inlining__VarSet0_23;
    MR_Word transform_hlds__inlining__VarTypes0_24;
    MR_Word transform_hlds__inlining__RttiVarMaps0_25;
    MR_Word transform_hlds__inlining__InlineInfo0_31;
    MR_Word transform_hlds__inlining__Goal_32;
    MR_Word transform_hlds__inlining__InlineInfo_33;
    MR_Word transform_hlds__inlining__Markers_40;
    MR_Word transform_hlds__inlining__VarSet_41;
    MR_Word transform_hlds__inlining__VarTypes_42;
    MR_Word transform_hlds__inlining__TypeVarSet_43;
    MR_Word transform_hlds__inlining__RttiVarMaps_44;
    MR_Word transform_hlds__inlining__DidInlining_45;
    MR_Word transform_hlds__inlining__InlinedParallel_46;
    MR_Word transform_hlds__inlining__Requantify_47;
    MR_Word transform_hlds__inlining__DetChanged_48;
    MR_Word transform_hlds__inlining__PurityChanged_49;
    MR_Word transform_hlds__inlining__ProcTable_50;
    MR_Word transform_hlds__inlining__PredTable_51;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word transform_hlds__inlining__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer transform_hlds__inlining__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 1)));
    MR_Integer transform_hlds__inlining__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 2)));
    MR_Integer transform_hlds__inlining__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 3)));
    MR_Box transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54;
    MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55;
    MR_Integer transform_hlds__inlining__V_34_34;
    MR_Word transform_hlds__inlining__V_35_35;
    MR_Word transform_hlds__inlining__V_36_36;
    MR_Word transform_hlds__inlining__V_37_37;
    MR_Word transform_hlds__inlining__V_38_38;
    MR_Word transform_hlds__inlining__V_39_39;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52, &transform_hlds__inlining__PredTable0_17);
    }
    transform_hlds__inlining__TypeCtorInfo_94_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__inlining__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_94_94, transform_hlds__inlining__TypeCtorInfo_95_95, transform_hlds__inlining__PredTable0_17, ((MR_Box) (transform_hlds__inlining__PredId_13)), &transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54);
    }
    transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54 = ((MR_Word) transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_54_54);
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__ProcTable0_18);
    }
    transform_hlds__inlining__TypeCtorInfo_97_97 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__inlining__TypeCtorInfo_97_97, transform_hlds__inlining__ProcTable0_18, transform_hlds__inlining__ProcId_14, &transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55);
    }
    transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_55_55);
    {
      hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__UnivQTVars_19);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__TypeVarSet0_20);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__Markers0_21);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__Goal0_22);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__VarSet0_23);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__VarTypes0_24);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__RttiVarMaps0_25);
    }
    {
      transform_hlds__inlining__InlineInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_10));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_12 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 2) = ((MR_Box) (transform_hlds__inlining__InlinedProcs_7));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 4) = ((MR_Box) (transform_hlds__inlining__UnivQTVars_19));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 5) = ((MR_Box) (transform_hlds__inlining__Markers0_21));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 6) = ((MR_Box) (transform_hlds__inlining__VarSet0_23));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes0_24));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet0_20));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps0_25));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_31, 10) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))));
    }
    {
      transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_22, &transform_hlds__inlining__Goal_32, transform_hlds__inlining__InlineInfo0_31, &transform_hlds__inlining__InlineInfo_33);
    }
    transform_hlds__inlining__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 0)));
    transform_hlds__inlining__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) & (MR_Integer) 1);
    transform_hlds__inlining__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 2)));
    transform_hlds__inlining__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 3)));
    transform_hlds__inlining__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 4)));
    transform_hlds__inlining__Markers_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 5)));
    transform_hlds__inlining__VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 6)));
    transform_hlds__inlining__VarTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 7)));
    transform_hlds__inlining__TypeVarSet_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 8)));
    transform_hlds__inlining__RttiVarMaps_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 9)));
    transform_hlds__inlining__DidInlining_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) & (MR_Integer) 1);
    transform_hlds__inlining__InlinedParallel_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Requantify_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    transform_hlds__inlining__DetChanged_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    transform_hlds__inlining__PurityChanged_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_33, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(transform_hlds__inlining__Markers_40, transform_hlds__inlining__STATE_VARIABLE_PredInfo_54_54, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56);
    }
    {
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__inlining__TypeVarSet_43, transform_hlds__inlining__STATE_VARIABLE_PredInfo_56_56, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__inlining__VarSet_41, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_55_55, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__inlining__VarTypes_42, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59);
    }
    {
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__inlining__RttiVarMaps_44, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__inlining__Goal_32, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61);
    }
    switch (transform_hlds__inlining__InlinedParallel_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63);
          }
        }
        break;
    }
    switch (transform_hlds__inlining__Requantify_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65);
          }
        }
        break;
    }
    switch (transform_hlds__inlining__DidInlining_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52;
          transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_52, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68);
          }
        }
        break;
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__inlining__TypeCtorInfo_97_97, transform_hlds__inlining__ProcId_14, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67)), transform_hlds__inlining__ProcTable0_18, &transform_hlds__inlining__ProcTable_50);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__inlining__ProcTable_50, transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69);
    }
    switch (transform_hlds__inlining__PurityChanged_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70 = transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
        break;
      case (MR_Integer) 1:
        {
          check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__inlining__PredProcId_6, transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70);
        }
        break;
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_94_94, transform_hlds__inlining__TypeCtorInfo_95_95, ((MR_Box) (transform_hlds__inlining__PredId_13)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70)), transform_hlds__inlining__PredTable0_17, &transform_hlds__inlining__PredTable_51);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__inlining__PredTable_51, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71);
    }
    switch (transform_hlds__inlining__DetChanged_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
        break;
      case (MR_Integer) 1:
        {
          check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(transform_hlds__inlining__PredId_13, transform_hlds__inlining__ProcId_14, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_53);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__inlining__succeeded;

        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__inlining__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__inlining__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__inlining__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

            {
              transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_2);
            }
            if (transform_hlds__inlining__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goals_3;

                  transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return transform_hlds__inlining__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__inlining__succeeded;
        MR_Word transform_hlds__inlining__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) {
          default:
            transform_hlds__inlining__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__inlining__Goal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr_2), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_5;

                transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__inlining__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__inlining__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 3)));
              MR_Word transform_hlds__inlining__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)));
              MR_Integer transform_hlds__inlining__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 4)));
              MR_Word transform_hlds__inlining__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 5)));

              transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_19_19 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) {
              default:
                transform_hlds__inlining__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__inlining__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
                  MR_Word transform_hlds__inlining__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));

                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_20_20 == (MR_Integer) 0);
                  if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(transform_hlds__inlining__Goals_4);
                    }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__inlining__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
                  MR_Word transform_hlds__inlining__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
                  MR_Word transform_hlds__inlining__FGT_8;
                  MR_Word transform_hlds__inlining__V_7_7;

                  transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 1)));
                      transform_hlds__inlining__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 2)));
                      switch (transform_hlds__inlining__FGT_8) {
                        default:
                          transform_hlds__inlining__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          transform_hlds__inlining__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          transform_hlds__inlining__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (transform_hlds__inlining__succeeded)
                    transform_hlds__inlining__succeeded = MR_TRUE;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__Goal_21;

                        transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                }
                break;
            }
            break;
        }
        return transform_hlds__inlining__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__inlining__mark_predproc_6_p_0(
  MR_Word transform_hlds__inlining__PredProcId_7,
  MR_Word transform_hlds__inlining__NeededMap_8,
  MR_Word transform_hlds__inlining__Params_9,
  MR_Word transform_hlds__inlining__ModuleInfo_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__Simple_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__SingleUse_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer transform_hlds__inlining__CallCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 1)));
    MR_Integer transform_hlds__inlining__CompoundThreshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 2)));
    MR_Integer transform_hlds__inlining__SimpleThreshold_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 3)));
    MR_Word transform_hlds__inlining__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
    MR_Integer transform_hlds__inlining__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__PredInfo_19;
    MR_Word transform_hlds__inlining__Procs_20;
    MR_Word transform_hlds__inlining__ProcInfo_21;
    MR_Word transform_hlds__inlining__CalledGoal_22;
    MR_Word transform_hlds__inlining__Entity_23;
    MR_Integer transform_hlds__inlining__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 4)));
    MR_Word transform_hlds__inlining__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Box transform_hlds__inlining__conv0_ProcInfo_21;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_17, &transform_hlds__inlining__PredInfo_19);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__PredInfo_19, &transform_hlds__inlining__Procs_20);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__inlining__Procs_20, transform_hlds__inlining__ProcId_18, &transform_hlds__inlining__conv0_ProcInfo_21);
    }
    transform_hlds__inlining__ProcInfo_21 = ((MR_Word) transform_hlds__inlining__conv0_ProcInfo_21);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__CalledGoal_22);
    }
    {
      transform_hlds__inlining__Entity_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 0) = ((MR_Box) (transform_hlds__inlining__PredId_17));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_23, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_18));
    }
    {
      MR_Integer transform_hlds__inlining__Size_78;

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Simple_12 == (MR_Integer) 1);
      if (transform_hlds__inlining__succeeded)
        {
          {
            hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_78);
          }
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__SimpleThreshold_16);
          if (!(transform_hlds__inlining__succeeded))
            {
              MR_Integer transform_hlds__inlining__V_79_79 = (transform_hlds__inlining__SimpleThreshold_16 * (MR_Integer) 3);

              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_78 < transform_hlds__inlining__V_79_79);
              if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_22);
                }
            }
        }
    }
    if (!(transform_hlds__inlining__succeeded))
      {
        {
          MR_Word transform_hlds__inlining__TypeCtorInfo_72_72;
          MR_Word transform_hlds__inlining__TypeCtorInfo_73_73;
          MR_Word transform_hlds__inlining__Needed_24;
          MR_Integer transform_hlds__inlining__NumUses_25;
          MR_Integer transform_hlds__inlining__Size_26;
          MR_Integer transform_hlds__inlining__V_30_30;
          MR_Integer transform_hlds__inlining__V_31_31;
          MR_Box transform_hlds__inlining__conv1_Needed_24;

          transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_15 > (MR_Integer) 0);
          if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__TypeCtorInfo_72_72 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
              transform_hlds__inlining__TypeCtorInfo_73_73 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
              {
                transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_72_72, transform_hlds__inlining__TypeCtorInfo_73_73, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv1_Needed_24);
              }
              if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__Needed_24 = ((MR_Word) transform_hlds__inlining__conv1_Needed_24);
                  transform_hlds__inlining__succeeded = MR_TRUE;
                }
              if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_24)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__NumUses_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_24, (MR_Integer) 0)));
                      {
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_22, &transform_hlds__inlining__Size_26);
                      }
                      transform_hlds__inlining__V_31_31 = (transform_hlds__inlining__Size_26 - transform_hlds__inlining__CallCost_14);
                      transform_hlds__inlining__V_30_30 = (transform_hlds__inlining__V_31_31 * transform_hlds__inlining__NumUses_25);
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_30_30 <= transform_hlds__inlining__CompoundThreshold_15);
                    }
                }
            }
        }
        if (!(transform_hlds__inlining__succeeded))
          {
            MR_Word transform_hlds__inlining__TypeCtorInfo_74_74;
            MR_Word transform_hlds__inlining__TypeCtorInfo_75_75;
            MR_Word transform_hlds__inlining__Needed_33;
            MR_Integer transform_hlds__inlining__NumUses_34;
            MR_Box transform_hlds__inlining__conv2_Needed_33;

            transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_13 == (MR_Integer) 1);
            if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__TypeCtorInfo_74_74 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
                transform_hlds__inlining__TypeCtorInfo_75_75 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
                {
                  transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_74_74, transform_hlds__inlining__TypeCtorInfo_75_75, transform_hlds__inlining__NeededMap_8, ((MR_Box) (transform_hlds__inlining__Entity_23)), &transform_hlds__inlining__conv2_Needed_33);
                }
                if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__Needed_33 = ((MR_Word) transform_hlds__inlining__conv2_Needed_33);
                    transform_hlds__inlining__succeeded = MR_TRUE;
                  }
                if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_33)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__NumUses_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_33, (MR_Integer) 0)));
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumUses_34 == (MR_Integer) 1);
                      }
                  }
              }
          }
      }
    if (transform_hlds__inlining__succeeded)
      {
        {
          transform_hlds__inlining__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__inlining__CalledGoal_22, transform_hlds__inlining__PredProcId_7);
        }
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
      }
    if (transform_hlds__inlining__succeeded)
      {
        MR_Word transform_hlds__inlining__PredId_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 0)));
        MR_Integer transform_hlds__inlining__ProcId_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_7, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__PredInfo_87;

        {
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_7)), transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27, transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28);
        }
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_10, transform_hlds__inlining__PredId_84, &transform_hlds__inlining__PredInfo_87);
        }
        {
          transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__inlining__PredInfo_87);
        }
        if (transform_hlds__inlining__succeeded)
          {
          }
        else
          {
            {
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Inlining ", transform_hlds__inlining__PredId_84, transform_hlds__inlining__ProcId_85, transform_hlds__inlining__ModuleInfo_10);
            }
          }
      }
    else
      *transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_28 = transform_hlds__inlining__STATE_VARIABLE_InlinedProcs_0_27;
  }
}

static void MR_CALL 
transform_hlds__inlining__do_inlining_6_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3,
  MR_Word transform_hlds__inlining__HeadVar__4_4,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0_5,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Module_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__inlining__succeeded;

        if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__inlining__STATE_VARIABLE_Module_6 = transform_hlds__inlining__STATE_VARIABLE_Module_0_5;
        else
          {
            MR_Word transform_hlds__inlining__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__inlining__PPIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_22_22;
            MR_Word transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;

            {
              transform_hlds__inlining__inline_in_proc_5_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__4_4, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_0_5, &transform_hlds__inlining__STATE_VARIABLE_Module_22_22);
            }
            {
              transform_hlds__inlining__mark_predproc_6_p_0(transform_hlds__inlining__PPId_13, transform_hlds__inlining__HeadVar__2_2, transform_hlds__inlining__HeadVar__3_3, transform_hlds__inlining__STATE_VARIABLE_Module_22_22, transform_hlds__inlining__HeadVar__4_4, &transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__inlining__HeadVar__1__tmp_copy_1 = transform_hlds__inlining__PPIds_14;
              MR_Word transform_hlds__inlining__HeadVar__4__tmp_copy_4 = transform_hlds__inlining__STATE_VARIABLE_Inlined_23_23;
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5 = transform_hlds__inlining__STATE_VARIABLE_Module_22_22;

              transform_hlds__inlining__STATE_VARIABLE_Module_0_5 = transform_hlds__inlining__STATE_VARIABLE_Module_0__tmp_copy_5;
              transform_hlds__inlining__HeadVar__4_4 = transform_hlds__inlining__HeadVar__4__tmp_copy_4;
              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_6_p_0(
  MR_Word transform_hlds__inlining__ModuleInfo_7,
  MR_Word transform_hlds__inlining__PredId_8,
  MR_Integer transform_hlds__inlining__ProcId_9,
  MR_Word transform_hlds__inlining__BuiltinState_10,
  MR_Word transform_hlds__inlining__InlinePromisedPure_11,
  MR_Word transform_hlds__inlining__CallingPredMarkers_12)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    {
      transform_hlds__inlining__succeeded = transform_hlds__inlining__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_110_95_105_110_108_105_110_101_95_112_114_111_99_95_95_91_54_93_95_48_6_p_0(transform_hlds__inlining__ModuleInfo_7, transform_hlds__inlining__PredId_8, transform_hlds__inlining__ProcId_9, transform_hlds__inlining__BuiltinState_10, transform_hlds__inlining__InlinePromisedPure_11);
    }
    return transform_hlds__inlining__succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
  MR_Word transform_hlds__inlining__HeadVars_12,
  MR_Word transform_hlds__inlining__ArgVars_13,
  MR_Word transform_hlds__inlining__VarSet0_14,
  MR_Word transform_hlds__inlining__CalleeVarSet_15,
  MR_Word * transform_hlds__inlining__VarSet_16,
  MR_Word transform_hlds__inlining__VarTypes1_17,
  MR_Word transform_hlds__inlining__CalleeVarTypes_18,
  MR_Word * transform_hlds__inlining__VarTypes_19,
  MR_Word * transform_hlds__inlining__Renaming_20,
  MR_Word transform_hlds__inlining__CalledGoal_21,
  MR_Word * transform_hlds__inlining__Goal_22)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__TypeInfo_25_25 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
    MR_Word transform_hlds__inlining__Renaming0_23;
    MR_Word transform_hlds__inlining__CalleeListOfVars_24;

    {
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__HeadVars_12, transform_hlds__inlining__ArgVars_13, &transform_hlds__inlining__Renaming0_23);
    }
    {
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_15, &transform_hlds__inlining__CalleeListOfVars_24);
    }
    {
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_24, transform_hlds__inlining__CalleeVarSet_15, transform_hlds__inlining__CalleeVarTypes_18, transform_hlds__inlining__VarSet0_14, transform_hlds__inlining__VarSet_16, transform_hlds__inlining__VarTypes1_17, transform_hlds__inlining__VarTypes_19, transform_hlds__inlining__Renaming0_23, transform_hlds__inlining__Renaming_20);
    }
    {
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*transform_hlds__inlining__Renaming_20, transform_hlds__inlining__CalledGoal_21, transform_hlds__inlining__Goal_22);
    }
  }
}

void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
  MR_Word transform_hlds__inlining__HeadTypes_6,
  MR_Word transform_hlds__inlining__ArgTypes_7,
  MR_Word transform_hlds__inlining__ExternalTypeParams_8,
  MR_Word transform_hlds__inlining__CalleeExistQVars_9,
  MR_Word * transform_hlds__inlining__TypeSubn_10)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__CalleeExistQVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__inlining__TypeSubn0_11;

        {
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, &transform_hlds__inlining__TypeSubn0_11);
        }
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn0_11;
        else
          {
            {
              mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__inlining__TypeSubn_10);
            }
          }
      }
    else
      {
        MR_Word transform_hlds__inlining__TypeSubn1_14;
        MR_Word transform_hlds__inlining__TypeSubn0_18;

        {
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__inlining__TypeSubn0_18);
        }
        {
          transform_hlds__inlining__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, transform_hlds__inlining__ExternalTypeParams_8, transform_hlds__inlining__TypeSubn0_18, &transform_hlds__inlining__TypeSubn1_14);
        }
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn1_14;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
              return;
            }
          }
      }
  }
}

void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
  MR_Word transform_hlds__inlining__ExternalTypeParams_14,
  MR_Word transform_hlds__inlining__ArgVars_15,
  MR_Word transform_hlds__inlining__PredInfo_16,
  MR_Word transform_hlds__inlining__ProcInfo_17,
  MR_Word transform_hlds__inlining__VarSet0_18,
  MR_Word * transform_hlds__inlining__VarSet_19,
  MR_Word transform_hlds__inlining__VarTypes0_20,
  MR_Word * transform_hlds__inlining__VarTypes_21,
  MR_Word transform_hlds__inlining__TypeVarSet0_22,
  MR_Word * transform_hlds__inlining__TypeVarSet_23,
  MR_Word transform_hlds__inlining__RttiVarMaps0_24,
  MR_Word * transform_hlds__inlining__RttiVarMaps_25,
  MR_Word * transform_hlds__inlining__Goal_26)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__TypeInfo_25_58;
    MR_Word transform_hlds__inlining__CalledGoal_27;
    MR_Word transform_hlds__inlining__CalleeTypeVarSet_28;
    MR_Word transform_hlds__inlining__HeadVars_29;
    MR_Word transform_hlds__inlining__CalleeVarTypes0_30;
    MR_Word transform_hlds__inlining__CalleeVarSet_31;
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps0_32;
    MR_Word transform_hlds__inlining__TypeRenaming_33;
    MR_Word transform_hlds__inlining__CalleeVarTypes1_34;
    MR_Word transform_hlds__inlining__HeadTypes_35;
    MR_Word transform_hlds__inlining__ArgTypes_36;
    MR_Word transform_hlds__inlining__CalleeExistQVars_37;
    MR_Word transform_hlds__inlining__TypeSubn_38;
    MR_Word transform_hlds__inlining__CalleeVarTypes_39;
    MR_Word transform_hlds__inlining__VarTypes1_40;
    MR_Word transform_hlds__inlining__Subn_43;
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps1_44;
    MR_Word transform_hlds__inlining__Renaming0_56;
    MR_Word transform_hlds__inlining__CalleeListOfVars_57;

    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalledGoal_27);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeTypeVarSet_28);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__HeadVars_29);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarTypes0_30);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarSet_31);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeRttiVarMaps0_32);
    }
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__inlining__TypeVarSet0_22, transform_hlds__inlining__CalleeTypeVarSet_28, transform_hlds__inlining__TypeVarSet_23, &transform_hlds__inlining__TypeRenaming_33);
    }
    {
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__CalleeVarTypes0_30, &transform_hlds__inlining__CalleeVarTypes1_34);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__CalleeVarTypes1_34, transform_hlds__inlining__HeadVars_29, &transform_hlds__inlining__HeadTypes_35);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__VarTypes0_20, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__ArgTypes_36);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeExistQVars_37);
    }
    {
      transform_hlds__inlining__get_type_substitution_5_p_0(transform_hlds__inlining__HeadTypes_35, transform_hlds__inlining__ArgTypes_36, transform_hlds__inlining__ExternalTypeParams_14, transform_hlds__inlining__CalleeExistQVars_37, &transform_hlds__inlining__TypeSubn_38);
    }
    if ((transform_hlds__inlining__CalleeExistQVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
        transform_hlds__inlining__VarTypes1_40 = transform_hlds__inlining__VarTypes0_20;
      }
    else
      {
        {
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
        }
        {
          hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__VarTypes0_20, &transform_hlds__inlining__VarTypes1_40);
        }
      }
    transform_hlds__inlining__TypeInfo_25_58 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
    {
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__HeadVars_29, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__Renaming0_56);
    }
    {
      mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_31, &transform_hlds__inlining__CalleeListOfVars_57);
    }
    {
      hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_57, transform_hlds__inlining__CalleeVarSet_31, transform_hlds__inlining__CalleeVarTypes_39, transform_hlds__inlining__VarSet0_18, transform_hlds__inlining__VarSet_19, transform_hlds__inlining__VarTypes1_40, transform_hlds__inlining__VarTypes_21, transform_hlds__inlining__Renaming0_56, &transform_hlds__inlining__Subn_43);
    }
    {
      hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalledGoal_27, transform_hlds__inlining__Goal_26);
    }
    {
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalleeRttiVarMaps0_32, &transform_hlds__inlining__CalleeRttiVarMaps1_44);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(transform_hlds__inlining__CalleeRttiVarMaps1_44, transform_hlds__inlining__RttiVarMaps0_24, transform_hlds__inlining__RttiVarMaps_25);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
  MR_Word transform_hlds__inlining__CalledGoal_3,
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__Size_5;

    {
      hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_3, &transform_hlds__inlining__Size_5);
    }
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
    if (!(transform_hlds__inlining__succeeded))
      {
        MR_Integer transform_hlds__inlining__V_6_6 = (transform_hlds__inlining__SimpleThreshold_4 * (MR_Integer) 3);

        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_6_6);
        if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_3);
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
  MR_Word transform_hlds__inlining__Clauses_3,
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__Size_5;

    {
      hlds__goal_util__clause_list_size_2_p_0(transform_hlds__inlining__Clauses_3, &transform_hlds__inlining__Size_5);
    }
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
    if (!(transform_hlds__inlining__succeeded))
      {
        MR_Word transform_hlds__inlining__Clause_6;
        MR_Word transform_hlds__inlining__Goal_7;
        MR_Word transform_hlds__inlining__V_8_8;
        MR_Integer transform_hlds__inlining__V_9_9;
        MR_Integer transform_hlds__inlining__V_10_10;

        transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__Clause_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 0)));
            transform_hlds__inlining__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 1)));
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (transform_hlds__inlining__succeeded)
              {
                {
                  transform_hlds__inlining__Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__inlining__Clause_6);
                }
                transform_hlds__inlining__V_10_10 = (MR_Integer) 3;
                transform_hlds__inlining__V_9_9 = (transform_hlds__inlining__SimpleThreshold_4 * transform_hlds__inlining__V_10_10);
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__V_9_9);
                if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_7);
                  }
              }
          }
      }
    return transform_hlds__inlining__succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining__inlining_2_p_0(
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__TypeCtorInfo_36_36;
    MR_Word transform_hlds__inlining__Globals_4;
    MR_Word transform_hlds__inlining__Simple_5;
    MR_Word transform_hlds__inlining__SingleUse_6;
    MR_Integer transform_hlds__inlining__CallCost_7;
    MR_Integer transform_hlds__inlining__CompoundThreshold_8;
    MR_Integer transform_hlds__inlining__SimpleThreshold_9;
    MR_Integer transform_hlds__inlining__VarThreshold_10;
    MR_Word transform_hlds__inlining__HighLevelCode_11;
    MR_Word transform_hlds__inlining__TraceLevel_12;
    MR_Word transform_hlds__inlining__AnyTracing_13;
    MR_Word transform_hlds__inlining__Params_14;
    MR_Word transform_hlds__inlining__NeededMap_15;
    MR_Word transform_hlds__inlining__DepInfo_16;
    MR_Word transform_hlds__inlining__SCCs_17;
    MR_Word transform_hlds__inlining__PredProcs_18;
    MR_Word transform_hlds__inlining__InlinedProcs0_19;
    MR_Word transform_hlds__inlining__V_29_29;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__Globals_4);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 332, &transform_hlds__inlining__Simple_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 334, &transform_hlds__inlining__SingleUse_6);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 335, &transform_hlds__inlining__CallCost_7);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 336, &transform_hlds__inlining__CompoundThreshold_8);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 337, &transform_hlds__inlining__SimpleThreshold_9);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 338, &transform_hlds__inlining__VarThreshold_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 254, &transform_hlds__inlining__HighLevelCode_11);
    }
    {
      libs__globals__get_trace_level_2_p_0(transform_hlds__inlining__Globals_4, &transform_hlds__inlining__TraceLevel_12);
    }
    {
      transform_hlds__inlining__V_29_29 = libs__trace_params__given_trace_level_is_none_1_f_0(transform_hlds__inlining__TraceLevel_12);
    }
    {
      transform_hlds__inlining__AnyTracing_13 = mercury__bool__not_1_f_0(transform_hlds__inlining__V_29_29);
    }
    {
      transform_hlds__inlining__Params_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 0) = ((MR_Box) ((transform_hlds__inlining__Simple_5 | ((transform_hlds__inlining__SingleUse_6 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 1) = ((MR_Box) (transform_hlds__inlining__CallCost_7));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 2) = ((MR_Box) (transform_hlds__inlining__CompoundThreshold_8));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 3) = ((MR_Box) (transform_hlds__inlining__SimpleThreshold_9));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 4) = ((MR_Box) (transform_hlds__inlining__VarThreshold_10));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_14, 5) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_13 << (MR_Integer) 1)))));
    }
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_6 == (MR_Integer) 1);
    if (!(transform_hlds__inlining__succeeded))
      {
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_8 > (MR_Integer) 0);
      }
    if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__NeededMap_15);
      }
    else
      {
        {
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, &transform_hlds__inlining__NeededMap_15);
        }
      }
    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__DepInfo_16);
    }
    transform_hlds__inlining__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__DepInfo_16, &transform_hlds__inlining__SCCs_17);
    }
    {
      mercury__list__condense_2_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, transform_hlds__inlining__SCCs_17, &transform_hlds__inlining__PredProcs_18);
    }
    {
      mercury__set__init_1_p_0(transform_hlds__inlining__TypeCtorInfo_36_36, &transform_hlds__inlining__InlinedProcs0_19);
    }
    {
      transform_hlds__inlining__do_inlining_6_p_0(transform_hlds__inlining__PredProcs_18, transform_hlds__inlining__NeededMap_15, transform_hlds__inlining__Params_14, transform_hlds__inlining__InlinedProcs0_19, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_31_31, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32);
    }
    {
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_32_32, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_21);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__inlining__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.inlining. */
