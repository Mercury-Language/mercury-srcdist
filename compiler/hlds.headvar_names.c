/*
** Automatically generated from `headvar_names.m'
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


/* :- module hlds.headvar_names. */
/* :- implementation. */

/*
INIT mercury__hlds__headvar_names__init
ENDINIT
*/

#include "hlds.headvar_names.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s {
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
  MR_bool hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28;
  jmp_buf hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0;
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62;
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

static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0;

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1];

static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1];

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0[1];

static const MR_Integer hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0[1];

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
  MR_Box * hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box hlds__headvar_names__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
  MR_Box * hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box hlds__headvar_names__wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
  MR_Word * hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2,
  MR_Word hlds__headvar_names__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2);

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
  MR_Word * hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2,
  MR_Word hlds__headvar_names__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2);

static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar_2,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Inconsistents_4,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0_5,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Consistents_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8);

static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
  MR_Word hlds__headvar_names__VarNameInfos_5,
  MR_Word hlds__headvar_names__HeadVar_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
  MR_Word hlds__headvar_names__VarSet_8,
  MR_Word hlds__headvar_names__HeadVars_9,
  MR_Word hlds__headvar_names__Goal_10,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarsInMap_26);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3,
  MR_Box hlds__headvar_names__wrapper_arg_4,
  MR_Box * hlds__headvar_names__wrapper_arg_5);

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
  MR_Word hlds__headvar_names__VarSet_6,
  MR_Word hlds__headvar_names__HeadVars_7,
  MR_Word hlds__headvar_names__Clause_8,
  MR_Word * hlds__headvar_names__VarNameInfoMap_9,
  MR_Word * hlds__headvar_names__VarsInMap_10);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
  void * hlds__headvar_names__env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
  void * hlds__headvar_names__env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
  void * hlds__headvar_names__env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
  void * hlds__headvar_names__env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
  void * hlds__headvar_names__env_ptr_arg);

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVars_2,
  MR_Word hlds__headvar_names__SeenVars0_3,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0_4,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarSet_5,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0_6,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Subst_7,
  MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0_8,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_RevConj_9);

static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
  MR_Word hlds__headvar_names__ConsensusMap_5,
  MR_Integer hlds__headvar_names__ProcId_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ProcTable_11);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3);

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box * hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3);


static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10];




static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

static const MR_ConstString hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0[2] = {
  (MR_String) "vni_unified_with_functor",
  (MR_String) "vni_unified_with_vars"
};

static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0 = {
  (MR_String) "var_name_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0,
  hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1] = {
  &hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info",
  {     hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0 },
  {     hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0
};

const MR_TypeCtorInfo_Struct hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_map_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_map_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2)
{
  {
    MR_bool hlds__headvar_names__succeeded;

    {
      hlds__headvar_names__succeeded = hlds__headvar_names____Unify____var_name_info_0_0(((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2));
    }
    return hlds__headvar_names__succeeded;
  }
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
  MR_Box * hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box hlds__headvar_names__wrapper_arg_3)
{
  {
    MR_Word hlds__headvar_names__conv0_HeadVar__1_1;

    {
      hlds__headvar_names____Compare____var_name_info_0_0(&hlds__headvar_names__conv0_HeadVar__1_1, ((MR_Word) hlds__headvar_names__wrapper_arg_2), ((MR_Word) hlds__headvar_names__wrapper_arg_3));
    }
    *hlds__headvar_names__wrapper_arg_1 = ((MR_Box) (hlds__headvar_names__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2)
{
  {
    MR_bool hlds__headvar_names__succeeded;

    {
      hlds__headvar_names__succeeded = hlds__headvar_names____Unify____var_name_info_map_0_0(((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2));
    }
    return hlds__headvar_names__succeeded;
  }
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
  MR_Box * hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box hlds__headvar_names__wrapper_arg_3)
{
  {
    MR_Word hlds__headvar_names__conv0_HeadVar__1_1;

    {
      hlds__headvar_names____Compare____var_name_info_map_0_0(&hlds__headvar_names__conv0_HeadVar__1_1, ((MR_Word) hlds__headvar_names__wrapper_arg_2), ((MR_Word) hlds__headvar_names__wrapper_arg_3));
    }
    *hlds__headvar_names__wrapper_arg_1 = ((MR_Box) (hlds__headvar_names__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
  MR_Word * hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2,
  MR_Word hlds__headvar_names__HeadVar__3_3)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__Cast_HeadVar1_4 = hlds__headvar_names__HeadVar__2_2;
    MR_Word hlds__headvar_names__Cast_HeadVar2_5 = hlds__headvar_names__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_2[0], hlds__headvar_names__HeadVar__1_1, ((MR_Box) (hlds__headvar_names__Cast_HeadVar1_4)), ((MR_Box) (hlds__headvar_names__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__Cast_HeadVar1_3 = hlds__headvar_names__HeadVar__1_1;
    MR_Word hlds__headvar_names__Cast_HeadVar2_4 = hlds__headvar_names__HeadVar__2_2;

    {
      hlds__headvar_names__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_2[0], ((MR_Box) (hlds__headvar_names__Cast_HeadVar1_3)), ((MR_Box) (hlds__headvar_names__Cast_HeadVar2_4)));
    }
    return hlds__headvar_names__succeeded;
  }
}

static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
  MR_Word * hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2,
  MR_Word hlds__headvar_names__HeadVar__3_3)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Integer hlds__headvar_names__CastX_9 = (MR_Integer) hlds__headvar_names__HeadVar__2_2;
    MR_Integer hlds__headvar_names__CastY_10 = (MR_Integer) hlds__headvar_names__HeadVar__3_3;

    hlds__headvar_names__succeeded = (hlds__headvar_names__CastX_9 == hlds__headvar_names__CastY_10);
    if (hlds__headvar_names__succeeded)
      *hlds__headvar_names__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__headvar_names__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__headvar_names__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__headvar_names__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__headvar_names__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__headvar_names__V_8_8;
        MR_Integer hlds__headvar_names__V_13_13 = (MR_Integer) hlds__headvar_names__V_4_4;
        MR_Integer hlds__headvar_names__V_14_14 = (MR_Integer) hlds__headvar_names__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__headvar_names__V_8_8, hlds__headvar_names__V_13_13, hlds__headvar_names__V_14_14);
        }
        hlds__headvar_names__succeeded = (hlds__headvar_names__V_8_8 == (MR_Integer) 0);
        hlds__headvar_names__succeeded = !(hlds__headvar_names__succeeded);
        if (hlds__headvar_names__succeeded)
          *hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[2], hlds__headvar_names__HeadVar__1_1, ((MR_Box) (hlds__headvar_names__V_5_5)), ((MR_Box) (hlds__headvar_names__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar__2_2)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Integer hlds__headvar_names__CastX_7 = (MR_Integer) hlds__headvar_names__HeadVar__1_1;
    MR_Integer hlds__headvar_names__CastY_8 = (MR_Integer) hlds__headvar_names__HeadVar__2_2;

    hlds__headvar_names__succeeded = (hlds__headvar_names__CastX_7 == hlds__headvar_names__CastY_8);
    if (hlds__headvar_names__succeeded)
      hlds__headvar_names__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__headvar_names__TypeInfo_9_9;
        MR_Word hlds__headvar_names__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__headvar_names__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__headvar_names__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__headvar_names__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 1)));

        hlds__headvar_names__succeeded = (hlds__headvar_names__V_3_3 == hlds__headvar_names__V_5_5);
        if (hlds__headvar_names__succeeded)
          {
            hlds__headvar_names__TypeInfo_9_9 = (MR_Word) &hlds__headvar_names_scalar_common_1[2];
            {
              hlds__headvar_names__succeeded = mercury__builtin__unify_2_p_0(hlds__headvar_names__TypeInfo_9_9, ((MR_Box) (hlds__headvar_names__V_4_4)), ((MR_Box) (hlds__headvar_names__V_6_6)));
            }
          }
      }
    return hlds__headvar_names__succeeded;
  }
}

static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVar_2,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Inconsistents_4,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0_5,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Consistents_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__headvar_names__succeeded;

        if ((hlds__headvar_names__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
            *hlds__headvar_names__STATE_VARIABLE_Consistents_6 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
            *hlds__headvar_names__STATE_VARIABLE_Inconsistents_4 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
          }
        else
          {
            MR_Word hlds__headvar_names__VarNameInfoMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__headvar_names__VarNameInfoMaps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37;
            MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_39_39;
            MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43;
            MR_Word hlds__headvar_names__VarInfo_25;
            MR_Box hlds__headvar_names__conv0_VarInfo_25;

            {
              hlds__headvar_names__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__VarNameInfoMap_19, ((MR_Box) (hlds__headvar_names__HeadVar_2)), &hlds__headvar_names__conv0_VarInfo_25);
            }
            if (hlds__headvar_names__succeeded)
              {
                hlds__headvar_names__VarInfo_25 = ((MR_Word) hlds__headvar_names__conv0_VarInfo_25);
                hlds__headvar_names__succeeded = MR_TRUE;
              }
            if (hlds__headvar_names__succeeded)
              {
                MR_Word hlds__headvar_names__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_Word hlds__headvar_names__UnifiedFunctor_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarInfo_25, (MR_Integer) 0)));
                MR_Word hlds__headvar_names__VarNameSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarInfo_25, (MR_Integer) 1)));
                MR_Integer hlds__headvar_names__NameCount_28;

                {
                  mercury__set__count_2_p_0(hlds__headvar_names__TypeCtorInfo_49_49, hlds__headvar_names__VarNameSet_27, &hlds__headvar_names__NameCount_28);
                }
                hlds__headvar_names__succeeded = (hlds__headvar_names__NameCount_28 == (MR_Integer) 0);
                if (hlds__headvar_names__succeeded)
                  {
                    switch (hlds__headvar_names__UnifiedFunctor_26) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
                        break;
                      case (MR_Integer) 1:
                        {
                          hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37, 0) = ((MR_Box) (hlds__headvar_names__VarInfo_25));
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7));
                        }
                        break;
                    }
                    hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
                    hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
                  }
                else
                  {
                    hlds__headvar_names__succeeded = (hlds__headvar_names__NameCount_28 == (MR_Integer) 1);
                    if (hlds__headvar_names__succeeded)
                      {
                        MR_Word hlds__headvar_names__VarNameList_29;
                        MR_String hlds__headvar_names__VarName_30;
                        MR_Word hlds__headvar_names__V_38_38;

                        {
                          mercury__set__to_sorted_list_2_p_0(hlds__headvar_names__TypeCtorInfo_49_49, hlds__headvar_names__VarNameSet_27, &hlds__headvar_names__VarNameList_29);
                        }
                        hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__VarNameList_29)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__headvar_names__succeeded)
                          {
                            hlds__headvar_names__VarName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__headvar_names__VarNameList_29, (MR_Integer) 0)));
                            hlds__headvar_names__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__VarNameList_29, (MR_Integer) 1)));
                            hlds__headvar_names__succeeded = (hlds__headvar_names__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        if (hlds__headvar_names__succeeded)
                          {
                            hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Consistents_39_39, 0) = ((MR_Box) (hlds__headvar_names__VarName_30));
                            MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Consistents_39_39, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_Consistents_0_5));
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.headvar_names", (MR_String) "predicate \140hlds.headvar_names.group_var_infos\'/8", (MR_String) "bad singleton set");
                              return;
                            }
                          }
                        hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
                      }
                    else
                      {
                        {
                          hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43, 0) = ((MR_Box) (hlds__headvar_names__VarInfo_25));
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3));
                        }
                        hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
                      }
                    hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
                  }
              }
            else
              {
                hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
                hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
                hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__headvar_names__HeadVar__1__tmp_copy_1 = hlds__headvar_names__VarNameInfoMaps_20;
              MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0__tmp_copy_3 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43;
              MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0__tmp_copy_5 = hlds__headvar_names__STATE_VARIABLE_Consistents_39_39;
              MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0__tmp_copy_7 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37;

              hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0__tmp_copy_7;
              hlds__headvar_names__STATE_VARIABLE_Consistents_0_5 = hlds__headvar_names__STATE_VARIABLE_Consistents_0__tmp_copy_5;
              hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0__tmp_copy_3;
              hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
  MR_Word hlds__headvar_names__VarNameInfos_5,
  MR_Word hlds__headvar_names__HeadVar_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__Inconsistents_18;
    MR_Word hlds__headvar_names__Consistents_19;
    MR_Word hlds__headvar_names__FunctorOnlys_20;

    {
      hlds__headvar_names__group_var_infos_8_p_0(hlds__headvar_names__VarNameInfos_5, hlds__headvar_names__HeadVar_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__Inconsistents_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__Consistents_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__FunctorOnlys_20);
    }
    if ((hlds__headvar_names__Inconsistents_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__headvar_names__Consistents_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
      else
      if ((hlds__headvar_names__FunctorOnlys_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__headvar_names__SortedConsistents_25;
          MR_String hlds__headvar_names__ConsensusName_26;
          MR_Word hlds__headvar_names__V_32_32;

          {
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__headvar_names__Consistents_19, &hlds__headvar_names__SortedConsistents_25);
          }
          hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__SortedConsistents_25)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__headvar_names__succeeded)
            {
              hlds__headvar_names__ConsensusName_26 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__headvar_names__SortedConsistents_25, (MR_Integer) 0)));
              hlds__headvar_names__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__SortedConsistents_25, (MR_Integer) 1)));
              hlds__headvar_names__succeeded = (hlds__headvar_names__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (hlds__headvar_names__succeeded)
            {
              {
                mercury__map__det_insert_4_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__HeadVar_6)), ((MR_Box) (hlds__headvar_names__ConsensusName_26)), hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10, hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11);
              }
            }
          else
            *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
        }
      else
        *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
    else
      *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
  }
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
  MR_Word hlds__headvar_names__VarSet_8,
  MR_Word hlds__headvar_names__HeadVars_9,
  MR_Word hlds__headvar_names__Goal_10,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarsInMap_26)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__HeadVar_13;
    MR_Word hlds__headvar_names__MaybeOtherVar_14;
    MR_Word hlds__headvar_names__GoalExpr_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_10, (MR_Integer) 0)));
    MR_Word hlds__headvar_names__LVar_67;
    MR_Word hlds__headvar_names__RHS_68;
    MR_Word hlds__headvar_names__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_10, (MR_Integer) 1)));
    MR_Word hlds__headvar_names__V_69_69;
    MR_Word hlds__headvar_names__V_70_70;
    MR_Word hlds__headvar_names__V_71_71;

    hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__GoalExpr_65)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__headvar_names__succeeded)
      {
        hlds__headvar_names__LVar_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 0)));
        hlds__headvar_names__RHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 1)));
        hlds__headvar_names__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 2)));
        hlds__headvar_names__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 3)));
        hlds__headvar_names__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 4)));
        if (((MR_tag((MR_Word) hlds__headvar_names__RHS_68)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__LVar_67)));
            }
            if (hlds__headvar_names__succeeded)
              {
                hlds__headvar_names__HeadVar_13 = hlds__headvar_names__LVar_67;
                hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__headvar_names__succeeded = MR_TRUE;
              }
          }
        else
        if (((MR_tag((MR_Word) hlds__headvar_names__RHS_68)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__headvar_names__RVar_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__RHS_68, (MR_Integer) 0)));

            {
              hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__LVar_67)));
            }
            if (hlds__headvar_names__succeeded)
              {
                hlds__headvar_names__HeadVar_13 = hlds__headvar_names__LVar_67;
                {
                  hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, 0) = ((MR_Box) (hlds__headvar_names__RVar_72));
                }
                hlds__headvar_names__succeeded = MR_TRUE;
              }
            else
              {
                {
                  hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__RVar_72)));
                }
                if (hlds__headvar_names__succeeded)
                  {
                    hlds__headvar_names__HeadVar_13 = hlds__headvar_names__RVar_72;
                    {
                      hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, 0) = ((MR_Box) (hlds__headvar_names__LVar_67));
                    }
                    hlds__headvar_names__succeeded = MR_TRUE;
                  }
              }
          }
        else
          hlds__headvar_names__succeeded = MR_FALSE;
      }
    if (hlds__headvar_names__succeeded)
      {
        MR_Word hlds__headvar_names__TypeInfo_50_50 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];

        {
          mercury__set__insert_3_p_0(hlds__headvar_names__TypeInfo_50_50, ((MR_Box) (hlds__headvar_names__HeadVar_13)), hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25, hlds__headvar_names__STATE_VARIABLE_VarsInMap_26);
        }
        if ((hlds__headvar_names__MaybeOtherVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__headvar_names__VarNameInfo0_15;
            MR_Box hlds__headvar_names__conv0_VarNameInfo0_15;

            {
              hlds__headvar_names__succeeded = mercury__map__search_3_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (hlds__headvar_names__HeadVar_13)), &hlds__headvar_names__conv0_VarNameInfo0_15);
            }
            if (hlds__headvar_names__succeeded)
              {
                hlds__headvar_names__VarNameInfo0_15 = ((MR_Word) hlds__headvar_names__conv0_VarNameInfo0_15);
                hlds__headvar_names__succeeded = MR_TRUE;
              }
            if (hlds__headvar_names__succeeded)
              {
                MR_Word hlds__headvar_names__VarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_15, (MR_Integer) 1)));
                MR_Word hlds__headvar_names__VarNameInfo_18;
                MR_Word hlds__headvar_names___UnifiedFunctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_15, (MR_Integer) 0)));

                {
                  hlds__headvar_names__VarNameInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_18, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_18, 1) = ((MR_Box) (hlds__headvar_names__VarNames_17));
                }
                {
                  mercury__map__det_update_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_18)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                }
              }
            else
              {
                MR_Word hlds__headvar_names__V_34_34;
                MR_Word hlds__headvar_names__VarNameInfo_36;

                {
                  hlds__headvar_names__V_34_34 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                }
                {
                  hlds__headvar_names__VarNameInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_36, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_36, 1) = ((MR_Box) (hlds__headvar_names__V_34_34));
                }
                {
                  mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_36)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                }
              }
          }
        else
          {
            MR_Word hlds__headvar_names__OtherVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, (MR_Integer) 0)));
            MR_String hlds__headvar_names__OtherVarName_20;

            {
              hlds__headvar_names__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__VarSet_8, hlds__headvar_names__OtherVar_19, &hlds__headvar_names__OtherVarName_20);
            }
            if (hlds__headvar_names__succeeded)
              {
                MR_Word hlds__headvar_names__VarNameInfo0_41;
                MR_Box hlds__headvar_names__conv1_VarNameInfo0_41;

                {
                  hlds__headvar_names__succeeded = mercury__map__search_3_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (hlds__headvar_names__HeadVar_13)), &hlds__headvar_names__conv1_VarNameInfo0_41);
                }
                if (hlds__headvar_names__succeeded)
                  {
                    hlds__headvar_names__VarNameInfo0_41 = ((MR_Word) hlds__headvar_names__conv1_VarNameInfo0_41);
                    hlds__headvar_names__succeeded = MR_TRUE;
                  }
                if (hlds__headvar_names__succeeded)
                  {
                    MR_Word hlds__headvar_names__UnifiedFunctor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_41, (MR_Integer) 0)));
                    MR_Word hlds__headvar_names__VarNames0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_41, (MR_Integer) 1)));
                    MR_Word hlds__headvar_names__VarNames_37;
                    MR_Word hlds__headvar_names__VarNameInfo_38;

                    {
                      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__OtherVarName_20)), hlds__headvar_names__VarNames0_22, &hlds__headvar_names__VarNames_37);
                    }
                    {
                      hlds__headvar_names__VarNameInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_38, 0) = ((MR_Box) (hlds__headvar_names__UnifiedFunctor_21));
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_38, 1) = ((MR_Box) (hlds__headvar_names__VarNames_37));
                    }
                    {
                      mercury__map__det_update_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_38)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                    }
                  }
                else
                  {
                    MR_Word hlds__headvar_names__VarNames_39;
                    MR_Word hlds__headvar_names__VarNameInfo_40;

                    {
                      hlds__headvar_names__VarNames_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__OtherVarName_20)));
                    }
                    {
                      hlds__headvar_names__VarNameInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_40, 0) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_40, 1) = ((MR_Box) (hlds__headvar_names__VarNames_39));
                    }
                    {
                      mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_40)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                    }
                  }
              }
            else
              *hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24 = hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23;
          }
      }
    else
      {
        *hlds__headvar_names__STATE_VARIABLE_VarsInMap_26 = hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25;
        *hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24 = hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23;
      }
  }
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3,
  MR_Box hlds__headvar_names__wrapper_arg_4,
  MR_Box * hlds__headvar_names__wrapper_arg_5)
{
  {
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
    MR_Word hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24;
    MR_Word hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26;

    {
      hlds__headvar_names__find_headvar_names_in_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 4))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24, ((MR_Word) hlds__headvar_names__wrapper_arg_4), &hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26);
    }
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24));
    *hlds__headvar_names__wrapper_arg_5 = ((MR_Box) (hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26));
  }
}

static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
  MR_Word hlds__headvar_names__VarSet_6,
  MR_Word hlds__headvar_names__HeadVars_7,
  MR_Word hlds__headvar_names__Clause_8,
  MR_Word * hlds__headvar_names__VarNameInfoMap_9,
  MR_Word * hlds__headvar_names__VarsInMap_10)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__TypeInfo_21_21;
    MR_Word hlds__headvar_names__Goal_11;
    MR_Word hlds__headvar_names__Conj_12;
    MR_Word hlds__headvar_names__V_13_13;
    MR_Word hlds__headvar_names__V_14_14;
    MR_Word hlds__headvar_names__V_15_15;
    MR_Box hlds__headvar_names__conv3_VarNameInfoMap_9;
    MR_Box hlds__headvar_names__conv2_VarsInMap_10;

    {
      hlds__headvar_names__Goal_11 = hlds__hlds_clauses__clause_body_1_f_0(hlds__headvar_names__Clause_8);
    }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__headvar_names__Goal_11, &hlds__headvar_names__Conj_12);
    }
    {
      hlds__headvar_names__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 1) = ((MR_Box) (hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 3) = ((MR_Box) (hlds__headvar_names__VarSet_6));
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 4) = ((MR_Box) (hlds__headvar_names__HeadVars_7));
    }
    hlds__headvar_names__TypeInfo_21_21 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
    {
      hlds__headvar_names__V_14_14 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_21_21, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0);
    }
    {
      hlds__headvar_names__V_15_15 = mercury__set__init_0_f_0(hlds__headvar_names__TypeInfo_21_21);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__headvar_names_scalar_common_2[0], (MR_Word) &hlds__headvar_names_scalar_common_1[1], hlds__headvar_names__V_13_13, hlds__headvar_names__Conj_12, ((MR_Box) (hlds__headvar_names__V_14_14)), &hlds__headvar_names__conv3_VarNameInfoMap_9, ((MR_Box) (hlds__headvar_names__V_15_15)), &hlds__headvar_names__conv2_VarsInMap_10);
    }
    *hlds__headvar_names__VarNameInfoMap_9 = ((MR_Word) hlds__headvar_names__conv3_VarNameInfoMap_9);
    *hlds__headvar_names__VarsInMap_10 = ((MR_Word) hlds__headvar_names__conv2_VarsInMap_10);
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
  void * hlds__headvar_names__env_ptr_arg)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

    MR_builtin_longjmp((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
  void * hlds__headvar_names__env_ptr_arg)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

    {
      MR_Word hlds__headvar_names__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 0)));

      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 1)));
      {
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32);
      }
      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      {
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28);
      }
      if ((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
        {
          hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(hlds__headvar_names__env_ptr);
        }
    }
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
  void * hlds__headvar_names__env_ptr_arg)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

    (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54);
    {
      hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(hlds__headvar_names__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
  void * hlds__headvar_names__env_ptr_arg)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

    (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54);
    {
      hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(hlds__headvar_names__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
  void * hlds__headvar_names__env_ptr_arg)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22, hlds__headvar_names__improve_single_clause_headvars_9_p_0_3, hlds__headvar_names__env_ptr);
          }
        }
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8, hlds__headvar_names__improve_single_clause_headvars_9_p_0_4, hlds__headvar_names__env_ptr);
          }
        }
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
  MR_Word hlds__headvar_names__HeadVar__1_1,
  MR_Word hlds__headvar_names__HeadVars_2,
  MR_Word hlds__headvar_names__SeenVars0_3,
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0_4,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarSet_5,
  MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0_6,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Subst_7,
  MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0_8,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_RevConj_9)
{
  {
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s hlds__headvar_names__env;

    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_0_8;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((hlds__headvar_names__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__headvar_names__STATE_VARIABLE_RevConj_9 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
            *hlds__headvar_names__STATE_VARIABLE_Subst_7 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
            *hlds__headvar_names__STATE_VARIABLE_VarSet_5 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
          }
        else
          {
            MR_Word hlds__headvar_names__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__headvar_names__SeenVars_34;
            MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_45_45;
            MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_46_46;
            MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_47_47;
            MR_Word hlds__headvar_names__OtherVar_29;
            MR_Word hlds__headvar_names__V_44_44;
            MR_Word hlds__headvar_names__GoalExpr_75;
            MR_Word hlds__headvar_names__LVar_77;
            MR_Word hlds__headvar_names__RHS_78;
            MR_Word hlds__headvar_names__V_76_76;
            MR_Word hlds__headvar_names__V_79_79;
            MR_Word hlds__headvar_names__V_80_80;
            MR_Word hlds__headvar_names__V_81_81;

            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
            hlds__headvar_names__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_21, (MR_Integer) 0)));
            hlds__headvar_names__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_21, (MR_Integer) 1)));
            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__GoalExpr_75)) == (MR_mktag((MR_Integer) 1)));
            if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
              {
                hlds__headvar_names__LVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 0)));
                hlds__headvar_names__RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 1)));
                hlds__headvar_names__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 2)));
                hlds__headvar_names__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 3)));
                hlds__headvar_names__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 4)));
                if (((MR_tag((MR_Word) hlds__headvar_names__RHS_78)) == (MR_mktag((MR_Integer) 1))))
                  {
                    {
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__LVar_77)));
                    }
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__LVar_77;
                        hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
                      }
                  }
                else
                if (((MR_tag((MR_Word) hlds__headvar_names__RHS_78)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word hlds__headvar_names__RVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__RHS_78, (MR_Integer) 0)));

                    {
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__LVar_77)));
                    }
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__LVar_77;
                        {
                          hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, 0) = ((MR_Box) (hlds__headvar_names__RVar_82));
                        }
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
                      }
                    else
                      {
                        {
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__RVar_82)));
                        }
                        if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                          {
                            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__RVar_82;
                            {
                              hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, 0) = ((MR_Box) (hlds__headvar_names__LVar_77));
                            }
                            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
                          }
                      }
                  }
                else
                  (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                  {
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      hlds__headvar_names__OtherVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, (MR_Integer) 0)));
                  }
              }
            if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
              {
                MR_Word hlds__headvar_names__TypeInfo_59_59;

                {
                  (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__OtherVar_29)));
                }
                (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                  {
                    hlds__headvar_names__TypeInfo_59_59 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
                    {
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__list__member_2_p_0(hlds__headvar_names__TypeInfo_59_59, ((MR_Box) (hlds__headvar_names__OtherVar_29)), hlds__headvar_names__SeenVars0_3);
                    }
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        {
                          hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(&hlds__headvar_names__env);
                        }
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
                      }
                  }
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                  {
                    MR_Word hlds__headvar_names__TypeInfo_63_63;
                    MR_String hlds__headvar_names__HeadVarName_36;
                    MR_Word hlds__headvar_names__TypeCtorInfo_65_65;
                    MR_String hlds__headvar_names__V_35_35;

                    {
                      hlds__headvar_names__SeenVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__SeenVars_34, 0) = ((MR_Box) (hlds__headvar_names__OtherVar_29));
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__SeenVars_34, 1) = ((MR_Box) (hlds__headvar_names__SeenVars0_3));
                    }
                    hlds__headvar_names__TypeInfo_63_63 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
                    {
                      mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_63_63, hlds__headvar_names__TypeInfo_63_63, ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28)), ((MR_Box) (hlds__headvar_names__OtherVar_29)), hlds__headvar_names__STATE_VARIABLE_Subst_0_6, &hlds__headvar_names__STATE_VARIABLE_Subst_45_45);
                    }
                    {
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, hlds__headvar_names__OtherVar_29, &hlds__headvar_names__V_35_35);
                    }
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        hlds__headvar_names__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0(hlds__headvar_names__TypeCtorInfo_65_65, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &hlds__headvar_names__HeadVarName_36);
                        }
                      }
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        {
                          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__OtherVar_29, hlds__headvar_names__HeadVarName_36, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                        }
                      }
                    else
                      hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
                    hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
                  }
                else
                  {
                    MR_String hlds__headvar_names__OtherVarName_37;

                    {
                      hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (hlds__headvar_names__Goal_21));
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
                    }
                    hlds__headvar_names__SeenVars_34 = hlds__headvar_names__SeenVars0_3;
                    {
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, hlds__headvar_names__OtherVar_29, &hlds__headvar_names__OtherVarName_37);
                    }
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                      {
                        {
                          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, hlds__headvar_names__OtherVarName_37, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                        }
                      }
                    else
                      {
                        MR_String hlds__headvar_names__HeadVarName_55;

                        {
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &hlds__headvar_names__HeadVarName_55);
                        }
                        if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
                          {
                            {
                              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__OtherVar_29, hlds__headvar_names__HeadVarName_55, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                            }
                          }
                        else
                          hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
                      }
                    hlds__headvar_names__STATE_VARIABLE_Subst_45_45 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
                  }
              }
            else
              {
                {
                  hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (hlds__headvar_names__Goal_21));
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
                }
                hlds__headvar_names__SeenVars_34 = hlds__headvar_names__SeenVars0_3;
                hlds__headvar_names__STATE_VARIABLE_Subst_45_45 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
                hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__headvar_names__HeadVar__1__tmp_copy_1 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
              MR_Word hlds__headvar_names__SeenVars0__tmp_copy_3 = hlds__headvar_names__SeenVars_34;
              MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__headvar_names__STATE_VARIABLE_VarSet_46_46;
              MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0__tmp_copy_6 = hlds__headvar_names__STATE_VARIABLE_Subst_45_45;
              MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0__tmp_copy_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_47_47;

              (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_0__tmp_copy_8;
              hlds__headvar_names__STATE_VARIABLE_Subst_0_6 = hlds__headvar_names__STATE_VARIABLE_Subst_0__tmp_copy_6;
              hlds__headvar_names__STATE_VARIABLE_VarSet_0_4 = hlds__headvar_names__STATE_VARIABLE_VarSet_0__tmp_copy_4;
              hlds__headvar_names__SeenVars0_3 = hlds__headvar_names__SeenVars0__tmp_copy_3;
              hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
  MR_Word hlds__headvar_names__ConsensusMap_5,
  MR_Integer hlds__headvar_names__ProcId_6,
  MR_Word hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ProcTable_11)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word hlds__headvar_names__ProcInfo0_8;
    MR_Word hlds__headvar_names__ProcInfo_9;
    MR_Box hlds__headvar_names__conv0_ProcInfo0_8;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__headvar_names__TypeCtorInfo_14_14, hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10, hlds__headvar_names__ProcId_6, &hlds__headvar_names__conv0_ProcInfo0_8);
    }
    hlds__headvar_names__ProcInfo0_8 = ((MR_Word) hlds__headvar_names__conv0_ProcInfo0_8);
    {
      hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(hlds__headvar_names__ConsensusMap_5, hlds__headvar_names__ProcInfo0_8, &hlds__headvar_names__ProcInfo_9);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__headvar_names__TypeCtorInfo_14_14, hlds__headvar_names__ProcId_6, ((MR_Box) (hlds__headvar_names__ProcInfo_9)), hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10, hlds__headvar_names__STATE_VARIABLE_ProcTable_11);
    }
  }
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3)
{
  {
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
    MR_Word hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11;

    {
      hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Integer) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11);
    }
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11));
  }
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3)
{
  {
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
    MR_Word hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11;

    {
      hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11);
    }
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11));
  }
}

static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
  MR_Box hlds__headvar_names__closure_arg,
  MR_Box hlds__headvar_names__wrapper_arg_1,
  MR_Box * hlds__headvar_names__wrapper_arg_2,
  MR_Box * hlds__headvar_names__wrapper_arg_3)
{
  {
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
    MR_Word hlds__headvar_names__conv1_VarNameInfoMap_9;
    MR_Word hlds__headvar_names__conv0_VarsInMap_10;

    {
      hlds__headvar_names__find_headvar_names_in_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 4))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), &hlds__headvar_names__conv1_VarNameInfoMap_9, &hlds__headvar_names__conv0_VarsInMap_10);
    }
    *hlds__headvar_names__wrapper_arg_2 = ((MR_Box) (hlds__headvar_names__conv1_VarNameInfoMap_9));
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv0_VarsInMap_10));
  }
}

void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0(
  MR_Word hlds__headvar_names__Globals_4,
  MR_Word hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40,
  MR_Word * hlds__headvar_names__STATE_VARIABLE_PredInfo_41)
{
  {
    MR_bool hlds__headvar_names__succeeded;
    MR_Word hlds__headvar_names__OpMode_6;
    MR_Word hlds__headvar_names__V_42_42;
    MR_Word hlds__headvar_names__V_43_43;

    {
      libs__globals__get_op_mode_2_p_0(hlds__headvar_names__Globals_4, &hlds__headvar_names__OpMode_6);
    }
    hlds__headvar_names__succeeded = ((((MR_tag((MR_Word) hlds__headvar_names__OpMode_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__headvar_names__OpMode_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (hlds__headvar_names__succeeded)
      {
        hlds__headvar_names__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__headvar_names__OpMode_6, (MR_Integer) 1)));
        hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__V_42_42)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__headvar_names__succeeded)
          {
            hlds__headvar_names__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__V_42_42, (MR_Integer) 0)));
            hlds__headvar_names__succeeded = (hlds__headvar_names__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (hlds__headvar_names__succeeded)
      *hlds__headvar_names__STATE_VARIABLE_PredInfo_41 = hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40;
    else
      {
        MR_Word hlds__headvar_names__ClausesInfo0_7;
        MR_Word hlds__headvar_names__ClausesRep0_8;
        MR_Word hlds__headvar_names__ItemNumbers_9;
        MR_Word hlds__headvar_names__HeadVars0_10;
        MR_Word hlds__headvar_names__VarSet0_11;
        MR_Word hlds__headvar_names__Clauses0_12;

        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, &hlds__headvar_names__ClausesInfo0_7);
        }
        {
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__ClausesRep0_8, &hlds__headvar_names__ItemNumbers_9);
        }
        {
          hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__HeadVars0_10);
        }
        {
          hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__VarSet0_11);
        }
        {
          hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(hlds__headvar_names__ClausesRep0_8, &hlds__headvar_names__Clauses0_12);
        }
        if ((hlds__headvar_names__Clauses0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__headvar_names__STATE_VARIABLE_PredInfo_41 = hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40;
        else
          {
            MR_Word hlds__headvar_names__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__Clauses0_12, (MR_Integer) 1)));
            MR_Word hlds__headvar_names__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__Clauses0_12, (MR_Integer) 0)));

            if ((hlds__headvar_names__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__headvar_names__TypeInfo_63_63;
                MR_Word hlds__headvar_names__Goal0_14;
                MR_Word hlds__headvar_names__GoalInfo0_16;
                MR_Word hlds__headvar_names__Conj0_17;
                MR_Word hlds__headvar_names__VarSet_18;
                MR_Word hlds__headvar_names__Subst_19;
                MR_Word hlds__headvar_names__RevConj_20;
                MR_Word hlds__headvar_names__NonLocals0_21;
                MR_Word hlds__headvar_names__NonLocals_22;
                MR_Word hlds__headvar_names__GoalInfo_23;
                MR_Word hlds__headvar_names__Goal_24;
                MR_Word hlds__headvar_names__HeadVars_25;
                MR_Word hlds__headvar_names__ClausesInfo1_26;
                MR_Word hlds__headvar_names__SingleClause_27;
                MR_Word hlds__headvar_names__ClausesRep_28;
                MR_Word hlds__headvar_names__ClausesInfo2_29;
                MR_Word hlds__headvar_names__ClausesInfo_30;
                MR_Word hlds__headvar_names__V_51_51;
                MR_Word hlds__headvar_names__V_54_54;
                MR_Word hlds__headvar_names__V_55_55;
                MR_Word hlds__headvar_names__V_15_15;
                MR_Word hlds__headvar_names__V_58_58;
                MR_Word hlds__headvar_names__V_60_60;
                MR_Word hlds__headvar_names__V_61_61;
                MR_Word hlds__headvar_names__V_62_62;
                MR_Word hlds__headvar_names__V_59_59;

                {
                  hlds__headvar_names__Goal0_14 = hlds__hlds_clauses__clause_body_1_f_0(hlds__headvar_names__V_78_78);
                }
                hlds__headvar_names__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal0_14, (MR_Integer) 0)));
                hlds__headvar_names__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal0_14, (MR_Integer) 1)));
                {
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__headvar_names__Goal0_14, &hlds__headvar_names__Conj0_17);
                }
                hlds__headvar_names__TypeInfo_63_63 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
                {
                  hlds__headvar_names__V_51_51 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_63_63, hlds__headvar_names__TypeInfo_63_63);
                }
                {
                  hlds__headvar_names__improve_single_clause_headvars_9_p_0(hlds__headvar_names__Conj0_17, hlds__headvar_names__HeadVars0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__headvar_names__VarSet0_11, &hlds__headvar_names__VarSet_18, hlds__headvar_names__V_51_51, &hlds__headvar_names__Subst_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__RevConj_20);
                }
                {
                  hlds__headvar_names__NonLocals0_21 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__headvar_names__GoalInfo0_16);
                }
                {
                  parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__headvar_names__Subst_19, hlds__headvar_names__NonLocals0_21, &hlds__headvar_names__NonLocals_22);
                }
                {
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__headvar_names__NonLocals_22, hlds__headvar_names__GoalInfo0_16, &hlds__headvar_names__GoalInfo_23);
                }
                {
                  hlds__headvar_names__V_54_54 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__headvar_names__RevConj_20);
                }
                {
                  hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__headvar_names__V_54_54, hlds__headvar_names__GoalInfo_23, &hlds__headvar_names__Goal_24);
                }
                {
                  hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(hlds__headvar_names__TypeInfo_63_63, hlds__headvar_names__Subst_19, hlds__headvar_names__HeadVars0_10, &hlds__headvar_names__HeadVars_25);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(hlds__headvar_names__HeadVars_25, hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__ClausesInfo1_26);
                }
                hlds__headvar_names__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_78_78, (MR_Integer) 0)));
                hlds__headvar_names__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_78_78, (MR_Integer) 1)));
                hlds__headvar_names__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_78_78, (MR_Integer) 2)));
                hlds__headvar_names__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_78_78, (MR_Integer) 3)));
                hlds__headvar_names__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_78_78, (MR_Integer) 4)));
                {
                  hlds__headvar_names__SingleClause_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 0) = ((MR_Box) (hlds__headvar_names__V_58_58));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 1) = ((MR_Box) (hlds__headvar_names__Goal_24));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 2) = ((MR_Box) (hlds__headvar_names__V_60_60));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 3) = ((MR_Box) (hlds__headvar_names__V_61_61));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 4) = ((MR_Box) (hlds__headvar_names__V_62_62));
                }
                {
                  hlds__headvar_names__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__V_55_55, 0) = ((MR_Box) (hlds__headvar_names__SingleClause_27));
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__hlds_clauses__set_clause_list_2_p_0(hlds__headvar_names__V_55_55, &hlds__headvar_names__ClausesRep_28);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__headvar_names__ClausesRep_28, hlds__headvar_names__ItemNumbers_9, hlds__headvar_names__ClausesInfo1_26, &hlds__headvar_names__ClausesInfo2_29);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_varset_3_p_0(hlds__headvar_names__VarSet_18, hlds__headvar_names__ClausesInfo2_29, &hlds__headvar_names__ClausesInfo_30);
                }
                {
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__headvar_names__ClausesInfo_30, hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, hlds__headvar_names__STATE_VARIABLE_PredInfo_41);
                }
              }
            else
              {
                MR_Word hlds__headvar_names__TypeInfo_11_86;
                MR_Word hlds__headvar_names__VarNameInfoMaps_34;
                MR_Word hlds__headvar_names__VarsInMapSets_35;
                MR_Word hlds__headvar_names__ConsensusMap_36;
                MR_Word hlds__headvar_names__ProcIds_37;
                MR_Word hlds__headvar_names__ProcTable0_38;
                MR_Word hlds__headvar_names__ProcTable_39;
                MR_Word hlds__headvar_names__V_45_45;
                MR_Word hlds__headvar_names__STATE_VARIABLE_PredInfo_46_46;
                MR_Word hlds__headvar_names__V_47_47;
                MR_Word hlds__headvar_names__VarsInMapSet_82;
                MR_Word hlds__headvar_names__VarsInMaps_83;
                MR_Word hlds__headvar_names__V_84_84;
                MR_Word hlds__headvar_names__V_85_85;
                MR_Box hlds__headvar_names__conv3_ConsensusMap_36;
                MR_Box hlds__headvar_names__conv5_ProcTable_39;

                {
                  hlds__headvar_names__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_45_45, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_45_45, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_45_45, 3) = ((MR_Box) (hlds__headvar_names__VarSet0_11));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_45_45, 4) = ((MR_Box) (hlds__headvar_names__HeadVars0_10));
                }
                {
                  mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__headvar_names_scalar_common_2[0], (MR_Word) &hlds__headvar_names_scalar_common_1[1], hlds__headvar_names__V_45_45, hlds__headvar_names__Clauses0_12, &hlds__headvar_names__VarNameInfoMaps_34, &hlds__headvar_names__VarsInMapSets_35);
                }
                hlds__headvar_names__TypeInfo_11_86 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
                {
                  hlds__headvar_names__VarsInMapSet_82 = mercury__set__union_list_1_f_0(hlds__headvar_names__TypeInfo_11_86, hlds__headvar_names__VarsInMapSets_35);
                }
                {
                  mercury__set__to_sorted_list_2_p_0(hlds__headvar_names__TypeInfo_11_86, hlds__headvar_names__VarsInMapSet_82, &hlds__headvar_names__VarsInMaps_83);
                }
                {
                  hlds__headvar_names__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_84_84, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_84_84, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_84_84, 3) = ((MR_Box) (hlds__headvar_names__VarNameInfoMaps_34));
                }
                {
                  hlds__headvar_names__V_85_85 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_11_86, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                }
                {
                  mercury__list__foldl_4_p_0(hlds__headvar_names__TypeInfo_11_86, (MR_Word) &hlds__headvar_names_scalar_common_2[2], hlds__headvar_names__V_84_84, hlds__headvar_names__VarsInMaps_83, ((MR_Box) (hlds__headvar_names__V_85_85)), &hlds__headvar_names__conv3_ConsensusMap_36);
                }
                hlds__headvar_names__ConsensusMap_36 = ((MR_Word) hlds__headvar_names__conv3_ConsensusMap_36);
                {
                  hlds__hlds_pred__pred_info_set_var_name_remap_3_p_0(hlds__headvar_names__ConsensusMap_36, hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, &hlds__headvar_names__STATE_VARIABLE_PredInfo_46_46);
                }
                {
                  hlds__headvar_names__ProcIds_37 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_46_46);
                }
                {
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_46_46, &hlds__headvar_names__ProcTable0_38);
                }
                {
                  hlds__headvar_names__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_47_47, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_47_47, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__V_47_47, 3) = ((MR_Box) (hlds__headvar_names__ConsensusMap_36));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__headvar_names_scalar_common_2[1], hlds__headvar_names__V_47_47, hlds__headvar_names__ProcIds_37, ((MR_Box) (hlds__headvar_names__ProcTable0_38)), &hlds__headvar_names__conv5_ProcTable_39);
                }
                hlds__headvar_names__ProcTable_39 = ((MR_Word) hlds__headvar_names__conv5_ProcTable_39);
                {
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__headvar_names__ProcTable_39, hlds__headvar_names__STATE_VARIABLE_PredInfo_46_46, hlds__headvar_names__STATE_VARIABLE_PredInfo_41);
                }
              }
          }
      }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.headvar_names. */
