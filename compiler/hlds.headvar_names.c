/*
** Automatically generated from `headvar_names.m'
** by the Mercury compiler,
** version rotd-2023-04-18
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


// :- module hlds.headvar_names.
// :- implementation.

/*
INIT mercury__hlds__headvar_names__init
ENDINIT
*/

#include "hlds.headvar_names.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s {
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
  MR_bool hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28;
  jmp_buf hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_60_60;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54;
  MR_Box hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54;
  MR_Box hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0[2];

static const MR_ConstString hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0[2];

static const MR_DuArgLocn hlds__headvar_names__hlds__headvar_names__field_locns_var_name_info_0_0[2];

static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0;

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1];

static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1];

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0[1];

static const MR_Integer hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0[1];

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
  MR_Word VarNameInfos_5,
  MR_Word HeadVar_6,
  MR_Word STATE_VARIABLE_ConsensusMap_0_10,
  MR_Word * STATE_VARIABLE_ConsensusMap_11);

static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar_2,
  MR_Word STATE_VARIABLE_Inconsistents_0_3,
  MR_Word * STATE_VARIABLE_Inconsistents_4,
  MR_Word STATE_VARIABLE_Consistents_0_5,
  MR_Word * STATE_VARIABLE_Consistents_6,
  MR_Word STATE_VARIABLE_FunctorOnlys_0_7,
  MR_Word * STATE_VARIABLE_FunctorOnlys_8);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
  MR_Word VarSet_8,
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarNameInfoMap_0_23,
  MR_Word * STATE_VARIABLE_VarNameInfoMap_24,
  MR_Word STATE_VARIABLE_VarsInMap_0_25,
  MR_Word * STATE_VARIABLE_VarsInMap_26);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
  MR_Word VarSet_6,
  MR_Word HeadVars_7,
  MR_Word Clause_8,
  MR_Word * VarNameInfoMap_9,
  MR_Word * VarsInMap_10);

static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
  MR_Word ConsensusMap_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_10,
  MR_Word * STATE_VARIABLE_ProcTable_11);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word SeenVars0_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Subst_0_6,
  MR_Word * STATE_VARIABLE_Subst_7,
  MR_Word STATE_VARIABLE_RevConj_0_8,
  MR_Word * STATE_VARIABLE_RevConj_9);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10];




static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0[2] = {
  (MR_String) "vni_unified_with_functor",
  (MR_String) "vni_unified_with_vars"
};

static const MR_DuArgLocn hlds__headvar_names__hlds__headvar_names__field_locns_var_name_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0 = {
  (MR_String) "var_name_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0,
  hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0,
  hlds__headvar_names__hlds__headvar_names__field_locns_var_name_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1] = {
  &hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0[1] = {
  &hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

static const MR_Integer hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info",
  { hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0 },
  { hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0,

};

const MR_TypeCtorInfo_Struct hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_map_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_map_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__headvar_names_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
  MR_Word VarNameInfos_5,
  MR_Word HeadVar_6,
  MR_Word STATE_VARIABLE_ConsensusMap_0_10,
  MR_Word * STATE_VARIABLE_ConsensusMap_11)
{
  MR_bool succeeded;
  MR_Word Inconsistents_14;
  MR_Word Consistents_15;
  MR_Word FunctorOnlys_16;

  hlds__headvar_names__group_var_infos_8_p_0(VarNameInfos_5, HeadVar_6, (MR_Word) ((MR_Unsigned) 0U), &Inconsistents_14, (MR_Word) ((MR_Unsigned) 0U), &Consistents_15, (MR_Word) ((MR_Unsigned) 0U), &FunctorOnlys_16);
  if ((Inconsistents_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Consistents_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsensusMap_11 = STATE_VARIABLE_ConsensusMap_0_10;
    else
    if ((FunctorOnlys_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SortedConsistents_21;
      MR_String ConsensusName_22;
      MR_Word Var_28;

      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Consistents_15, &SortedConsistents_21);
      succeeded = (SortedConsistents_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConsensusName_22 = ((MR_String) ((MR_hl_field(1, SortedConsistents_21, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(1, SortedConsistents_21, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadVar_6)), ((MR_Box) (ConsensusName_22)), STATE_VARIABLE_ConsensusMap_0_10, STATE_VARIABLE_ConsensusMap_11);
      else
        *STATE_VARIABLE_ConsensusMap_11 = STATE_VARIABLE_ConsensusMap_0_10;
    }
    else
      *STATE_VARIABLE_ConsensusMap_11 = STATE_VARIABLE_ConsensusMap_0_10;
  else
    *STATE_VARIABLE_ConsensusMap_11 = STATE_VARIABLE_ConsensusMap_0_10;
}

static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar_2,
  MR_Word STATE_VARIABLE_Inconsistents_0_3,
  MR_Word * STATE_VARIABLE_Inconsistents_4,
  MR_Word STATE_VARIABLE_Consistents_0_5,
  MR_Word * STATE_VARIABLE_Consistents_6,
  MR_Word STATE_VARIABLE_FunctorOnlys_0_7,
  MR_Word * STATE_VARIABLE_FunctorOnlys_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FunctorOnlys_8 = STATE_VARIABLE_FunctorOnlys_0_7;
      *STATE_VARIABLE_Consistents_6 = STATE_VARIABLE_Consistents_0_5;
      *STATE_VARIABLE_Inconsistents_4 = STATE_VARIABLE_Inconsistents_0_3;
    }
    else
    {
      MR_Word VarNameInfoMap_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarNameInfoMaps_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FunctorOnlys_37_37;
      MR_Word STATE_VARIABLE_Consistents_39_39;
      MR_Word STATE_VARIABLE_Inconsistents_42_42;
      MR_Word VarInfo_25;
      MR_Box conv0_VarInfo_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Inconsistents_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Consistents_0_5;
      MR_Word next_value_of_STATE_VARIABLE_FunctorOnlys_0_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), VarNameInfoMap_19, ((MR_Box) (HeadVar_2)), &conv0_VarInfo_25);
      if (succeeded)
      {
        VarInfo_25 = ((MR_Word) (conv0_VarInfo_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word UnifiedFunctor_26 = ((MR_Unsigned) ((MR_hl_field(0, VarInfo_25, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word VarNameSet_27 = ((MR_Word) ((MR_hl_field(0, VarInfo_25, (MR_Integer) 1))));
        MR_Integer NameCount_28;

        mercury__set__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNameSet_27, &NameCount_28);
        succeeded = (NameCount_28 == (MR_Integer) 0);
        if (succeeded)
        {
          switch (UnifiedFunctor_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_FunctorOnlys_37_37 = STATE_VARIABLE_FunctorOnlys_0_7;
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_FunctorOnlys_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_FunctorOnlys_37_37, 0) = ((MR_Box) (VarInfo_25));
                MR_hl_field(1, STATE_VARIABLE_FunctorOnlys_37_37, 1) = ((MR_Box) (STATE_VARIABLE_FunctorOnlys_0_7));
              }
              break;
          }
          STATE_VARIABLE_Consistents_39_39 = STATE_VARIABLE_Consistents_0_5;
          STATE_VARIABLE_Inconsistents_42_42 = STATE_VARIABLE_Inconsistents_0_3;
        }
        else
        {
          succeeded = (NameCount_28 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word VarNameList_29;
            MR_String VarName_30;
            MR_Word Var_38;

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNameSet_27, &VarNameList_29);
            succeeded = (VarNameList_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              VarName_30 = ((MR_String) ((MR_hl_field(1, VarNameList_29, (MR_Integer) 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(1, VarNameList_29, (MR_Integer) 1))));
              succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              {
                STATE_VARIABLE_Consistents_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Consistents_39_39, 0) = ((MR_Box) (VarName_30));
                MR_hl_field(1, STATE_VARIABLE_Consistents_39_39, 1) = ((MR_Box) (STATE_VARIABLE_Consistents_0_5));
              }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.headvar_names.group_var_infos\'/8", (MR_String) "bad singleton set");
                return;
              }
            STATE_VARIABLE_Inconsistents_42_42 = STATE_VARIABLE_Inconsistents_0_3;
          }
          else
          {
            {
              STATE_VARIABLE_Inconsistents_42_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Inconsistents_42_42, 0) = ((MR_Box) (VarInfo_25));
              MR_hl_field(1, STATE_VARIABLE_Inconsistents_42_42, 1) = ((MR_Box) (STATE_VARIABLE_Inconsistents_0_3));
            }
            STATE_VARIABLE_Consistents_39_39 = STATE_VARIABLE_Consistents_0_5;
          }
          STATE_VARIABLE_FunctorOnlys_37_37 = STATE_VARIABLE_FunctorOnlys_0_7;
        }
      }
      else
      {
        STATE_VARIABLE_FunctorOnlys_37_37 = STATE_VARIABLE_FunctorOnlys_0_7;
        STATE_VARIABLE_Consistents_39_39 = STATE_VARIABLE_Consistents_0_5;
        STATE_VARIABLE_Inconsistents_42_42 = STATE_VARIABLE_Inconsistents_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarNameInfoMaps_20;
      next_value_of_STATE_VARIABLE_Inconsistents_0_3 = STATE_VARIABLE_Inconsistents_42_42;
      next_value_of_STATE_VARIABLE_Consistents_0_5 = STATE_VARIABLE_Consistents_39_39;
      next_value_of_STATE_VARIABLE_FunctorOnlys_0_7 = STATE_VARIABLE_FunctorOnlys_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Inconsistents_0_3 = next_value_of_STATE_VARIABLE_Inconsistents_0_3;
      STATE_VARIABLE_Consistents_0_5 = next_value_of_STATE_VARIABLE_Consistents_0_5;
      STATE_VARIABLE_FunctorOnlys_0_7 = next_value_of_STATE_VARIABLE_FunctorOnlys_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
  MR_Word VarSet_8,
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarNameInfoMap_0_23,
  MR_Word * STATE_VARIABLE_VarNameInfoMap_24,
  MR_Word STATE_VARIABLE_VarsInMap_0_25,
  MR_Word * STATE_VARIABLE_VarsInMap_26)
{
  MR_bool succeeded;
  MR_Word HeadVar_13;
  MR_Word MaybeOtherVar_14;
  MR_Word GoalExpr_53 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
  MR_Word LVar_55;
  MR_Word RHS_56;

  succeeded = ((MR_tag((MR_Word) GoalExpr_53)) == (MR_Integer) 1);
  if (succeeded)
  {
    LVar_55 = ((MR_Word) ((MR_hl_field(1, GoalExpr_53, (MR_Integer) 0))));
    RHS_56 = ((MR_Word) ((MR_hl_field(1, GoalExpr_53, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) RHS_56)) == (MR_Integer) 1))
    {
      succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_9, ((MR_Box) (LVar_55)));
      if (succeeded)
      {
        HeadVar_13 = LVar_55;
        MaybeOtherVar_14 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    if (((MR_tag((MR_Word) RHS_56)) == (MR_Integer) 0))
    {
      MR_Word RVar_60 = ((MR_Word) ((MR_hl_field(0, RHS_56, (MR_Integer) 0))));

      succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_9, ((MR_Box) (LVar_55)));
      if (succeeded)
      {
        HeadVar_13 = LVar_55;
        {
          MaybeOtherVar_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOtherVar_14, 0) = ((MR_Box) (RVar_60));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_9, ((MR_Box) (RVar_60)));
        if (succeeded)
        {
          HeadVar_13 = RVar_60;
          {
            MaybeOtherVar_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeOtherVar_14, 0) = ((MR_Box) (LVar_55));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    mercury__set__insert_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), ((MR_Box) (HeadVar_13)), STATE_VARIABLE_VarsInMap_0_25, STATE_VARIABLE_VarsInMap_26);
    if ((MaybeOtherVar_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarNameInfo0_15;
      MR_Box conv0_VarNameInfo0_15;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (HeadVar_13)), &conv0_VarNameInfo0_15);
      if (succeeded)
      {
        VarNameInfo0_15 = ((MR_Word) (conv0_VarNameInfo0_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word VarNames_17 = ((MR_Word) ((MR_hl_field(0, VarNameInfo0_15, (MR_Integer) 1))));
        MR_Word VarNameInfo_18;

        {
          VarNameInfo_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarNameInfo_18, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, VarNameInfo_18, 1) = ((MR_Box) (VarNames_17));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), ((MR_Box) (HeadVar_13)), ((MR_Box) (VarNameInfo_18)), STATE_VARIABLE_VarNameInfoMap_0_23, STATE_VARIABLE_VarNameInfoMap_24);
      }
      else
      {
        MR_Word Var_31;
        MR_Word VarNameInfo_36;

        Var_31 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        {
          VarNameInfo_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarNameInfo_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, VarNameInfo_36, 1) = ((MR_Box) (Var_31));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), ((MR_Box) (HeadVar_13)), ((MR_Box) (VarNameInfo_36)), STATE_VARIABLE_VarNameInfoMap_0_23, STATE_VARIABLE_VarNameInfoMap_24);
      }
    }
    else
    {
      MR_Word OtherVar_19 = ((MR_Word) ((MR_hl_field(1, MaybeOtherVar_14, (MR_Integer) 0))));
      MR_String OtherVarName_20;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, OtherVar_19, &OtherVarName_20);
      if (succeeded)
      {
        MR_Word VarNameInfo0_41;
        MR_Box conv1_VarNameInfo0_41;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (HeadVar_13)), &conv1_VarNameInfo0_41);
        if (succeeded)
        {
          VarNameInfo0_41 = ((MR_Word) (conv1_VarNameInfo0_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word UnifiedFunctor_21 = ((MR_Unsigned) ((MR_hl_field(0, VarNameInfo0_41, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word VarNames0_22 = ((MR_Word) ((MR_hl_field(0, VarNameInfo0_41, (MR_Integer) 1))));
          MR_Word VarNames_37;
          MR_Word VarNameInfo_38;

          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OtherVarName_20)), VarNames0_22, &VarNames_37);
          {
            VarNameInfo_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarNameInfo_38, 0) = (MR_Box) ((MR_Unsigned) (UnifiedFunctor_21));
            MR_hl_field(0, VarNameInfo_38, 1) = ((MR_Box) (VarNames_37));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), ((MR_Box) (HeadVar_13)), ((MR_Box) (VarNameInfo_38)), STATE_VARIABLE_VarNameInfoMap_0_23, STATE_VARIABLE_VarNameInfoMap_24);
        }
        else
        {
          MR_Word VarNames_39;
          MR_Word VarNameInfo_40;

          VarNames_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OtherVarName_20)));
          {
            VarNameInfo_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, VarNameInfo_40, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, VarNameInfo_40, 1) = ((MR_Box) (VarNames_39));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0), ((MR_Box) (HeadVar_13)), ((MR_Box) (VarNameInfo_40)), STATE_VARIABLE_VarNameInfoMap_0_23, STATE_VARIABLE_VarNameInfoMap_24);
        }
      }
      else
        *STATE_VARIABLE_VarNameInfoMap_24 = STATE_VARIABLE_VarNameInfoMap_0_23;
    }
  }
  else
  {
    *STATE_VARIABLE_VarsInMap_26 = STATE_VARIABLE_VarsInMap_0_25;
    *STATE_VARIABLE_VarNameInfoMap_24 = STATE_VARIABLE_VarNameInfoMap_0_23;
  }
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarNameInfoMap_24;
  MR_Word conv0_STATE_VARIABLE_VarsInMap_26;

  hlds__headvar_names__find_headvar_names_in_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarNameInfoMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarsInMap_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarNameInfoMap_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarsInMap_26));
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
  MR_Word VarSet_6,
  MR_Word HeadVars_7,
  MR_Word Clause_8,
  MR_Word * VarNameInfoMap_9,
  MR_Word * VarsInMap_10)
{
  MR_Word Goal_11;
  MR_Word Conj_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv3_VarNameInfoMap_9;
  MR_Box conv2_VarsInMap_10;

  Goal_11 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_11, &Conj_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (VarSet_6));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (HeadVars_7));
  }
  Var_14 = mercury__map__init_0_f_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0));
  Var_15 = mercury__set__init_0_f_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__headvar_names_scalar_common_2[0]), (MR_Word) (&hlds__headvar_names_scalar_common_1[1]), Var_13, Conj_12, ((MR_Box) (Var_14)), &conv3_VarNameInfoMap_9, ((MR_Box) (Var_15)), &conv2_VarsInMap_10);
  *VarNameInfoMap_9 = ((MR_Word) (conv3_VarNameInfoMap_9));
  *VarsInMap_10 = ((MR_Word) (conv2_VarsInMap_10));
}

static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
  MR_Word ConsensusMap_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcTable_0_10,
  MR_Word * STATE_VARIABLE_ProcTable_11)
{
  MR_Word ProcInfo0_8;
  MR_Word ProcInfo_9;
  MR_Box conv0_ProcInfo0_8;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_10, ((MR_Box) (ProcId_6)), &conv0_ProcInfo0_8);
  ProcInfo0_8 = ((MR_Word) (conv0_ProcInfo0_8));
  hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(ConsensusMap_5, ProcInfo0_8, &ProcInfo_9);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_9)), STATE_VARIABLE_ProcTable_0_10, STATE_VARIABLE_ProcTable_11);
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ProcTable_11;

  hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ProcTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ProcTable_11));
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ConsensusMap_11;

  hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ConsensusMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ConsensusMap_11));
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_VarNameInfoMap_9;
  MR_Word conv0_VarsInMap_10;

  hlds__headvar_names__find_headvar_names_in_clause_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_VarNameInfoMap_9, &conv0_VarsInMap_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_VarNameInfoMap_9));
  *wrapper_arg_3 = ((MR_Box) (conv0_VarsInMap_10));
}

void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0(
  MR_Word Globals_4,
  MR_Word STATE_VARIABLE_PredInfo_0_41,
  MR_Word * STATE_VARIABLE_PredInfo_42)
{
  MR_bool succeeded;
  MR_Word OpMode_6;
  MR_Word Var_43;
  MR_Word Var_44;

  libs__globals__get_op_mode_2_p_0(Globals_4, &OpMode_6);
  succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_43 = ((MR_Word) ((MR_hl_field(3, OpMode_6, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(2, Var_43, (MR_Integer) 0))));
      succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    *STATE_VARIABLE_PredInfo_42 = STATE_VARIABLE_PredInfo_0_41;
  else
  {
    MR_Word ClausesInfo0_8;
    MR_Word ClausesRep0_9;
    MR_Word ItemNumbers_10;
    MR_Word HeadVars0_11;
    MR_Word VarSet0_12;
    MR_Word Clauses0_13;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_41, &ClausesInfo0_8);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_8, &ClausesRep0_9, &ItemNumbers_10);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_8, &HeadVars0_11);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_8, &VarSet0_12);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_9, &Clauses0_13);
    if ((Clauses0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredInfo_42 = STATE_VARIABLE_PredInfo_0_41;
    else
    {
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Clauses0_13, (MR_Integer) 1))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, Clauses0_13, (MR_Integer) 0))));

      if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal0_15;
        MR_Word GoalInfo0_17;
        MR_Word Conj0_18;
        MR_Word VarSet_19;
        MR_Word Subst_20;
        MR_Word RevConj_21;
        MR_Word NonLocals0_22;
        MR_Word NonLocals_23;
        MR_Word GoalInfo_24;
        MR_Word Goal_25;
        MR_Word HeadVars_26;
        MR_Word ClausesInfo1_27;
        MR_Word SingleClause_28;
        MR_Word ClausesRep_29;
        MR_Word ClausesInfo2_30;
        MR_Word ClausesInfo_31;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_58;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;

        Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(Var_78);
        GoalInfo0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_15, &Conj0_18);
        Var_47 = mercury__map__init_0_f_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names_scalar_common_1[0]));
        hlds__headvar_names__improve_single_clause_headvars_9_p_0(Conj0_18, HeadVars0_11, (MR_Word) ((MR_Unsigned) 0U), VarSet0_12, &VarSet_19, Var_47, &Subst_20, (MR_Word) ((MR_Unsigned) 0U), &RevConj_21);
        NonLocals0_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_17);
        parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Subst_20, NonLocals0_22, &NonLocals_23);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_23, GoalInfo0_17, &GoalInfo_24);
        Var_50 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevConj_21);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_50, GoalInfo_24, &Goal_25);
        hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), Subst_20, HeadVars0_11, &HeadVars_26);
        hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(HeadVars_26, ClausesInfo0_8, &ClausesInfo1_27);
        Var_58 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 0))));
        Var_60 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 2))));
        Var_61 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 3))));
        Var_62 = ((MR_Word) ((MR_hl_field(0, Var_78, (MR_Integer) 4))));
        {
          SingleClause_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SingleClause_28, 0) = ((MR_Box) (Var_58));
          MR_hl_field(0, SingleClause_28, 1) = ((MR_Box) (Goal_25));
          MR_hl_field(0, SingleClause_28, 2) = ((MR_Box) (Var_60));
          MR_hl_field(0, SingleClause_28, 3) = ((MR_Box) (Var_61));
          MR_hl_field(0, SingleClause_28, 4) = ((MR_Box) (Var_62));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (SingleClause_28));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_51, &ClausesRep_29);
        hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_29, ItemNumbers_10, ClausesInfo1_27, &ClausesInfo2_30);
        hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_19, ClausesInfo2_30, &ClausesInfo_31);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_31, STATE_VARIABLE_PredInfo_0_41, STATE_VARIABLE_PredInfo_42);
      }
      else
      {
        MR_Word VarNameInfoMaps_35;
        MR_Word VarsInMapSets_36;
        MR_Word ConsensusMap_37;
        MR_Word ProcIds_38;
        MR_Word ProcTable0_39;
        MR_Word ProcTable_40;
        MR_Word Var_55;
        MR_Word STATE_VARIABLE_PredInfo_56_56;
        MR_Word Var_57;
        MR_Word VarsInMapSet_79;
        MR_Word VarsInMaps_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Box conv3_ConsensusMap_37;
        MR_Box conv5_ProcTable_40;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_3[0]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (VarSet0_12));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) (HeadVars0_11));
        }
        mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__headvar_names_scalar_common_2[0]), (MR_Word) (&hlds__headvar_names_scalar_common_1[1]), Var_55, Clauses0_13, &VarNameInfoMaps_35, &VarsInMapSets_36);
        VarsInMapSet_79 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), VarsInMapSets_36);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), VarsInMapSet_79, &VarsInMaps_80);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (VarNameInfoMaps_35));
        }
        Var_82 = mercury__map__init_0_f_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names_scalar_common_2[2]), Var_81, VarsInMaps_80, ((MR_Box) (Var_82)), &conv3_ConsensusMap_37);
        ConsensusMap_37 = ((MR_Word) (conv3_ConsensusMap_37));
        hlds__hlds_pred__pred_info_set_var_name_remap_3_p_0(ConsensusMap_37, STATE_VARIABLE_PredInfo_0_41, &STATE_VARIABLE_PredInfo_56_56);
        ProcIds_38 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_56_56);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_56_56, &ProcTable0_39);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[1]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (ConsensusMap_37));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__headvar_names_scalar_common_2[1]), Var_57, ProcIds_38, ((MR_Box) (ProcTable0_39)), &conv5_ProcTable_40);
        ProcTable_40 = ((MR_Word) (conv5_ProcTable_40));
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_40, STATE_VARIABLE_PredInfo_56_56, STATE_VARIABLE_PredInfo_42);
      }
    }
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 0))));

    (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 1))));
    (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32);
    (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_60_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_60_60, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28);
    if ((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
      hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) ((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54));
  hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) ((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54));
  hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22, hlds__headvar_names__improve_single_clause_headvars_9_p_0_3, env_ptr);
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54, (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8, hlds__headvar_names__improve_single_clause_headvars_9_p_0_4, env_ptr);
      (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word SeenVars0_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_Subst_0_6,
  MR_Word * STATE_VARIABLE_Subst_7,
  MR_Word STATE_VARIABLE_RevConj_0_8,
  MR_Word * STATE_VARIABLE_RevConj_9)
{
  struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s env;

  (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = STATE_VARIABLE_RevConj_0_8;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevConj_9 = (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
      *STATE_VARIABLE_Subst_7 = STATE_VARIABLE_Subst_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SeenVars_34;
      MR_Word STATE_VARIABLE_Subst_45_45;
      MR_Word STATE_VARIABLE_VarSet_46_46;
      MR_Word STATE_VARIABLE_RevConj_47_47;
      MR_Word OtherVar_29;
      MR_Word Var_44;
      MR_Word GoalExpr_69;
      MR_Word LVar_71;
      MR_Word RHS_72;
      MR_Word Var_70;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_SeenVars0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevConj_0_8;

      (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      GoalExpr_69 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 1))));
      (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_69)) == (MR_Integer) 1);
      if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
      {
        LVar_71 = ((MR_Word) ((MR_hl_field(1, GoalExpr_69, (MR_Integer) 0))));
        RHS_72 = ((MR_Word) ((MR_hl_field(1, GoalExpr_69, (MR_Integer) 1))));
        Var_73 = ((MR_Word) ((MR_hl_field(1, GoalExpr_69, (MR_Integer) 2))));
        Var_74 = ((MR_Word) ((MR_hl_field(1, GoalExpr_69, (MR_Integer) 3))));
        Var_75 = ((MR_Word) ((MR_hl_field(1, GoalExpr_69, (MR_Integer) 4))));
        if (((MR_tag((MR_Word) RHS_72)) == (MR_Integer) 1))
        {
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_2, ((MR_Box) (LVar_71)));
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
          {
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = LVar_71;
            Var_44 = (MR_Word) ((MR_Unsigned) 0U);
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        else
        if (((MR_tag((MR_Word) RHS_72)) == (MR_Integer) 0))
        {
          MR_Word RVar_76 = ((MR_Word) ((MR_hl_field(0, RHS_72, (MR_Integer) 0))));

          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_2, ((MR_Box) (LVar_71)));
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
          {
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = LVar_71;
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (RVar_76));
            }
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
          }
          else
          {
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_2, ((MR_Box) (RVar_76)));
            if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
            {
              (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = RVar_76;
              {
                Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_44, 0) = ((MR_Box) (LVar_71));
              }
              (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
            }
          }
        }
        else
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
        if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
        {
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
            OtherVar_29 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
        }
      }
      if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
      {
        MR_Word TypeInfo_57_57;

        (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), HeadVars_2, ((MR_Box) (OtherVar_29)));
        (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
        if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
        {
          TypeInfo_57_57 = (MR_Word) (&hlds__headvar_names_scalar_common_1[0]);
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__list__member_2_p_0(TypeInfo_57_57, ((MR_Box) (OtherVar_29)), SeenVars0_3);
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
          {
            hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(&env);
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
          }
        }
        if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
        {
          MR_String HeadVarName_36;
          MR_Word TypeCtorInfo_63_63;
          MR_String Var_35;

          {
            SeenVars_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SeenVars_34, 0) = ((MR_Box) (OtherVar_29));
            MR_hl_field(1, SeenVars_34, 1) = ((MR_Box) (SeenVars0_3));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__headvar_names_scalar_common_1[0]), (MR_Word) (&hlds__headvar_names_scalar_common_1[0]), ((MR_Box) ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28)), ((MR_Box) (OtherVar_29)), STATE_VARIABLE_Subst_0_6, &STATE_VARIABLE_Subst_45_45);
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_4, OtherVar_29, &Var_35);
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
          {
            TypeCtorInfo_63_63 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0(TypeCtorInfo_63_63, STATE_VARIABLE_VarSet_0_4, (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &HeadVarName_36);
          }
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
            mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OtherVar_29, HeadVarName_36, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_46_46);
          else
            STATE_VARIABLE_VarSet_46_46 = STATE_VARIABLE_VarSet_0_4;
          STATE_VARIABLE_RevConj_47_47 = (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
        }
        else
        {
          MR_String OtherVarName_37;

          {
            STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (Goal_21));
            MR_hl_field(1, STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
          }
          SeenVars_34 = SeenVars0_3;
          (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_4, OtherVar_29, &OtherVarName_37);
          if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
            mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, OtherVarName_37, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_46_46);
          else
          {
            MR_String HeadVarName_55;

            (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_4, (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &HeadVarName_55);
            if ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
              mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OtherVar_29, HeadVarName_55, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_46_46);
            else
              STATE_VARIABLE_VarSet_46_46 = STATE_VARIABLE_VarSet_0_4;
          }
          STATE_VARIABLE_Subst_45_45 = STATE_VARIABLE_Subst_0_6;
        }
      }
      else
      {
        {
          STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (Goal_21));
          MR_hl_field(1, STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
        }
        SeenVars_34 = SeenVars0_3;
        STATE_VARIABLE_Subst_45_45 = STATE_VARIABLE_Subst_0_6;
        STATE_VARIABLE_VarSet_46_46 = STATE_VARIABLE_VarSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
      next_value_of_SeenVars0_3 = SeenVars_34;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_46_46;
      next_value_of_STATE_VARIABLE_Subst_0_6 = STATE_VARIABLE_Subst_45_45;
      next_value_of_STATE_VARIABLE_RevConj_0_8 = STATE_VARIABLE_RevConj_47_47;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      SeenVars0_3 = next_value_of_SeenVars0_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_Subst_0_6 = next_value_of_STATE_VARIABLE_Subst_0_6;
      (env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = next_value_of_STATE_VARIABLE_RevConj_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__headvar_names____Unify____var_name_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__headvar_names____Compare____var_name_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__headvar_names____Unify____var_name_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__headvar_names____Compare____var_name_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__headvar_names__init(void)
{
}

void mercury__hlds__headvar_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0);
	MR_register_type_ctor_info(&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_map_0);
}

void mercury__hlds__headvar_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__headvar_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.headvar_names.
