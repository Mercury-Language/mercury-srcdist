/*
** Automatically generated from `mode_constraint_robdd.m'
** by the Mercury compiler,
** version rotd-2025-04-16
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


// :- module check_hlds.mode_constraint_robdd.
// :- implementation.

/*
INIT mercury__check_hlds__mode_constraint_robdd__init
ENDINIT
*/

#include "check_hlds.mode_constraint_robdd.mih"


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
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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
#include "analysis.framework.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s {
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__VarMap_8;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaPath_9;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__PredId_10;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Constraint1_12;
  MR_Word * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaHeadVar__1_20;
  MR_Cont check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont;
  void * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_81_81;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_88_88;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__RobddVar_15;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_21;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_85;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_86;
  MR_Box check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__conv0_Key_14;
};

struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s {
  MR_Box * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont;
  void * check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20;
};


static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0;

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_ordinal_ordered_mc_type_0[1];

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[11];

static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[11];

static const MR_DuArgLocn check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_locns_mode_constraint_info_0_0[11];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1];

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1];

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1];

static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1];

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__421__1_4_p_0(
  MR_Word MCI_5,
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27);

static MR_String MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__robdd_to_dot__401__1_3_f_0(
  MR_Word ProgVarSet_8,
  MR_Word VarMap_12,
  MR_Word LambdaHeadVar__1_23);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0(
  MR_Word VarMap_8,
  MR_Word LambdaPath_9,
  MR_Word PredId_10,
  MR_Word Keys_11,
  MR_Word Constraint1_12,
  MR_Word * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__321__1_1_f_0(
  MR_Word HeadVar__1_70);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__2_3_f_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_58);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__316__2_2_f_0(
  MR_Word HeadVar__1_15,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__316__1_4_p_0(
  MR_Word PredId_5,
  MR_Word MinVars_7,
  MR_Word MaxVars_8,
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__1_1_f_0(
  MR_Word HeadVar__1_62);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__288__1_3_p_0(
  MR_Word P0_5,
  MR_Word MCI_6,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[4][7];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][9];




static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[0])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "lambda_path",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_ordinal_ordered_mc_type_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 };

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 };

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mc_type",
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0 },
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_ordinal_ordered_mc_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0),
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[11] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
};

static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[11] = {
  (MR_String) "mci_debug_stream",
  (MR_String) "mci_varset",
  (MR_String) "mci_varmap",
  (MR_String) "mci_pred_id",
  (MR_String) "mci_lambda_path",
  (MR_String) "mci_min_vars",
  (MR_String) "mci_max_vars",
  (MR_String) "mci_input_nodes",
  (MR_String) "mci_zero_var",
  (MR_String) "mci_simple_constraints",
  (MR_String) "mci_goal_path_map"
};

static const MR_DuArgLocn check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_locns_mode_constraint_info_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 = {
  (MR_String) "mode_constraint_info",
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_locns_mode_constraint_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 };

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 };

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_info",
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0 },
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_varmap",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prodvars_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 = {
  (MR_String) "prog_var_and_level",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 };

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 };

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prog_var_and_level",
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0 },
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0 = {
  (MR_String) "in",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1 = {
  (MR_String) "out",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2 = {
  (MR_String) "at",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0 };

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1 };

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2 };

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0[3] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0,
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "rep_var",
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0 },
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "robdd_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 = {
  (MR_String) "threshold",
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "threshold",
  { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 = {
  (MR_String) "key",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 };

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1] = { &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 };

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "varmap_key",
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0 },
  { check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0,

};

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__421__1_4_p_0(
  MR_Word MCI_5,
  MR_Word LambdaHeadVar__1_25,
  MR_Word LambdaHeadVar__2_26,
  MR_Word * LambdaHeadVar__3_27)
{
  MR_bool succeeded;
  MR_Word ProgVar_15;
  MR_Word LambdaId_17;
  MR_Word TypeCtorInfo_58_58;
  MR_Word Key_11;
  MR_Word RepVar_12;
  MR_Word PredId_13;
  MR_Word LambdaId0_14;
  MR_Word GoalId_16;
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, MCI_5, 2))));
  MR_Word Var_72;
  MR_Box conv0_Key_11;

  mercury__bimap__reverse_lookup_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), Var_28, &conv0_Key_11, ((MR_Box) (LambdaHeadVar__1_25)));
  Key_11 = ((MR_Word) (conv0_Key_11));
  RepVar_12 = ((MR_Word) ((MR_hl_field(0, Key_11, 0))));
  PredId_13 = ((MR_Word) ((MR_hl_field(0, Key_11, 1))));
  LambdaId0_14 = ((MR_Word) ((MR_hl_field(0, Key_11, 2))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, MCI_5, 3))));
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_13, Var_72);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) RepVar_12)) == (MR_Integer) 2);
    if (succeeded)
    {
      ProgVar_15 = ((MR_Word) ((MR_hl_field(2, RepVar_12, 0))));
      GoalId_16 = ((MR_Word) ((MR_hl_field(2, RepVar_12, 1))));
      TypeCtorInfo_58_58 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
      mercury__stack__push_3_p_0(TypeCtorInfo_58_58, ((MR_Box) (GoalId_16)), LambdaId0_14, &LambdaId_17);
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Vs0_18;
    MR_Box conv1_Vs0_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]), LambdaHeadVar__2_26, ((MR_Box) (LambdaId_17)), &conv1_Vs0_18);
    if (succeeded)
    {
      Vs0_18 = ((MR_Word) (conv1_Vs0_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Vs_19;

      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVar_15, Vs0_18, &Vs_19);
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]), ((MR_Box) (LambdaId_17)), ((MR_Box) (Vs_19)), LambdaHeadVar__2_26, LambdaHeadVar__3_27);
    }
    else
    {
      MR_Word Vs_31;

      parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVar_15, &Vs_31);
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]), ((MR_Box) (LambdaId_17)), ((MR_Box) (Vs_31)), LambdaHeadVar__2_26, LambdaHeadVar__3_27);
    }
  }
  else
    *LambdaHeadVar__3_27 = LambdaHeadVar__2_26;
}

static MR_String MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__robdd_to_dot__401__1_3_f_0(
  MR_Word ProgVarSet_8,
  MR_Word VarMap_12,
  MR_Word LambdaHeadVar__1_23)
{
  MR_String LambdaHeadVar__2_24;
  MR_Word RepVar_16;
  MR_Word PredId_17;
  MR_Word LambdaId_18;
  MR_String RepVarStr_19;
  MR_Integer PredIdNum_20;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Integer Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Integer Var_36;
  MR_Box conv0_Var_25;

  mercury__bimap__reverse_lookup_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), VarMap_12, &conv0_Var_25, ((MR_Box) (LambdaHeadVar__1_23)));
  Var_25 = ((MR_Word) (conv0_Var_25));
  RepVar_16 = ((MR_Word) ((MR_hl_field(0, Var_25, 0))));
  PredId_17 = ((MR_Word) ((MR_hl_field(0, Var_25, 1))));
  LambdaId_18 = ((MR_Word) ((MR_hl_field(0, Var_25, 2))));
  switch (MR_tag((MR_Word) RepVar_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word V_55 = ((MR_Word) ((MR_hl_field(0, RepVar_16, 0))));
        MR_String Name_56;

        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, V_55, &Name_56);
        RepVarStr_19 = mercury__string__f_43_43_2_f_0(Name_56, (MR_String) "_in");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word V_73 = ((MR_Word) ((MR_hl_field(1, RepVar_16, 0))));
        MR_String Name_74;

        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, V_73, &Name_74);
        RepVarStr_19 = mercury__string__f_43_43_2_f_0(Name_74, (MR_String) "_out");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Id_57 = ((MR_Word) ((MR_hl_field(2, RepVar_16, 1))));
        MR_Unsigned IdNum_58;
        MR_Word V_75 = ((MR_Word) ((MR_hl_field(2, RepVar_16, 0))));
        MR_String Name_76;
        MR_String Var_83;
        MR_String Var_91;

        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, V_75, &Name_76);
        IdNum_58 = (MR_Unsigned) (Id_57);
        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_3[0]), (MR_Integer) 1, IdNum_58, &Var_83);
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_83);
        RepVarStr_19 = mercury__string__f_43_43_2_f_0(Name_76, Var_91);
      }
      break;
  }
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_17, &PredIdNum_20);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (RepVarStr_19));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (PredIdNum_20));
  }
  Var_33 = mercury__stack__depth_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), LambdaId_18);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
  }
  Var_36 = mercury__term__var_to_int_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), LambdaHeadVar__1_23);
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  mercury__string__format_3_p_0((MR_String) "%s %d %d (%d)", Var_27, &LambdaHeadVar__2_24);
  return LambdaHeadVar__2_24;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s * env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14 = ((MR_Word) ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__conv0_Key_14));
  check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s * env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Box conv1_RobddVar_15;

    (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14, 0))));
    (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_85 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14, 1))));
    (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_86 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14, 2))));
    (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__PredId_10, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_85);
    if ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded)
    {
      (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_88_88 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]);
      (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_88_88, ((MR_Box) ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaPath_9)), ((MR_Box) ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_86)));
      if ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded)
      {
        (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_21)) == (MR_Integer) 0);
        if ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded)
        {
          *((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaHeadVar__1_20) = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Var_21, 0))));
          (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_81_81 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]);
          mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__TypeInfo_81_81, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__VarMap_8, ((MR_Box) ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Key_14)), &conv1_RobddVar_15);
          (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__RobddVar_15 = ((MR_Word) (conv1_RobddVar_15));
          (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Constraint1_12, (env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__RobddVar_15);
          if ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__succeeded)
            ((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont)((env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont_env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0(
  MR_Word VarMap_8,
  MR_Word LambdaPath_9,
  MR_Word PredId_10,
  MR_Word Keys_11,
  MR_Word Constraint1_12,
  MR_Word * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0_s env;

  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__VarMap_8 = VarMap_8;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaPath_9 = LambdaPath_9;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__PredId_10 = PredId_10;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__Constraint1_12 = Constraint1_12;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__LambdaHeadVar__1_20 = LambdaHeadVar__1_20;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont = cont;
  (env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__list__member_2_p_1((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), &(env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_env_0__conv0_Key_14, Keys_11, check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0_2, &env);
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__321__1_1_f_0(
  MR_Word HeadVar__1_70)
{
  MR_Word HeadVar__2_71;

  HeadVar__2_71 = mercury__varset__vars_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), HeadVar__1_70);
  return HeadVar__2_71;
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__2_3_f_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_58)
{
  MR_Word HeadVar__4_59;
  MR_Box conv0_HeadVar__4_59;

  conv0_HeadVar__4_59 = mercury__std_util__compose_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[1]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[1]), HeadVar__1_13, HeadVar__2_14, ((MR_Box) (HeadVar__3_58)));
  HeadVar__4_59 = ((MR_Word) (conv0_HeadVar__4_59));
  return HeadVar__4_59;
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__316__2_2_f_0(
  MR_Word HeadVar__1_15,
  MR_Word HeadVar__2_65)
{
  MR_Word HeadVar__3_66;

  HeadVar__3_66 = mercury__list__filter_2_f_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), HeadVar__1_15, HeadVar__2_65);
  return HeadVar__3_66;
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__316__1_4_p_0(
  MR_Word PredId_5,
  MR_Word MinVars_7,
  MR_Word MaxVars_8,
  MR_Word LambdaHeadVar__1_16)
{
  MR_bool succeeded;
  MR_Word Var_18;
  MR_Word Var_73;
  MR_Box conv0_Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_74;
  MR_Box conv1_Var_20;

  conv0_Var_18 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), MinVars_7, ((MR_Box) (PredId_5)));
  Var_18 = ((MR_Word) (conv0_Var_18));
  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), &Var_73, ((MR_Box) (Var_18)), ((MR_Box) (LambdaHeadVar__1_16)));
  succeeded = ((MR_Integer) 1 == Var_73);
  if (succeeded)
  {
    Var_19 = (MR_Integer) 1;
    conv1_Var_20 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), MaxVars_8, ((MR_Box) (PredId_5)));
    Var_20 = ((MR_Word) (conv1_Var_20));
    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), &Var_74, ((MR_Box) (Var_20)), ((MR_Box) (LambdaHeadVar__1_16)));
    succeeded = (Var_19 != Var_74);
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__1_1_f_0(
  MR_Word HeadVar__1_62)
{
  MR_Word HeadVar__2_63;

  HeadVar__2_63 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), HeadVar__1_62);
  return HeadVar__2_63;
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__288__1_3_p_0(
  MR_Word P0_5,
  MR_Word MCI_6,
  MR_Word LambdaHeadVar__1_14)
{
  MR_bool succeeded;
  MR_Word RV_10;
  MR_Word PredId_11;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, MCI_6, 2))));
  MR_Word Var_16;
  MR_Box conv0_Var_16;

  mercury__bimap__reverse_lookup_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), Var_15, &conv0_Var_16, ((MR_Box) (LambdaHeadVar__1_14)));
  Var_16 = ((MR_Word) (conv0_Var_16));
  RV_10 = ((MR_Word) ((MR_hl_field(0, Var_16, 0))));
  PredId_11 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, MCI_6, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_11, Var_41);
    succeeded = !(succeeded);
  }
  if (!(succeeded))
  {
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P0_5, 1))));

    succeeded = func_1(((MR_Box) (P0_5)), ((MR_Box) (RV_10)));
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_10;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), &SubResult1_10, ((MR_Box) (ArgX1_8)), ((MR_Box) (ArgY1_9)));
              succeeded = (SubResult1_10 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
              {
                MR_Unsigned Var_19 = (MR_Unsigned) (ArgX2_11);
                MR_Unsigned Var_20 = (MR_Unsigned) (ArgY2_12);

                succeeded = (Var_19 < Var_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_19 > Var_20);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_15_15;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            TypeInfo_15_15 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_16_16 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;
          MR_Unsigned Var_17;
          MR_Unsigned Var_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            TypeInfo_13_13 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            if (succeeded)
            {
              Var_17 = (MR_Unsigned) (ArgX2_9);
              Var_18 = (MR_Unsigned) (ArgY2_10);
              succeeded = (Var_17 == Var_18);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word SubResult1_6;

    mercury__io____Compare____text_output_stream_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____pred_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[4]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_49 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_50 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_49 < Var_50);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_49 > Var_50);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
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

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));

    succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_28_28 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_29_29 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_31_31 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_32_32 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_33_33 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_35_35 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        TypeInfo_36_36 = (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[5]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
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
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(
  MR_Word * HeadVar__1_1)
{
  check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_27;

  check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__421__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_27));
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(
  MR_Word Constraint_4,
  MR_Word MCI_5)
{
  MR_bool succeeded;
  MR_Word ProdVarsMap_6;
  MR_Word VarsEntailed_7;
  MR_Word Var_20;
  MR_Word Var_21;

  Var_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Constraint_4);
  Var_20 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Var_21);
  succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    VarsEntailed_7 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
    {
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Box conv1_ProdVarsMap_6;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[3]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (MCI_5));
      }
      Var_23 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[1]), VarsEntailed_7);
      Var_24 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[5]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]));
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[2]), Var_22, Var_23, ((MR_Box) (Var_24)), &conv1_ProdVarsMap_6);
      ProdVarsMap_6 = ((MR_Word) (conv1_ProdVarsMap_6));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.mode_constraint_robdd.atomic_prodvars_map\'/2", (MR_String) "zero constraint");
  return ProdVarsMap_6;
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_24;

  conv0_LambdaHeadVar__2_24 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__robdd_to_dot__401__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0(
  MR_Word Constraint_7,
  MR_Word ProgVarSet_8,
  MR_Word MCI_9,
  MR_String FileName_10)
{
  MR_Word VarMap_12 = ((MR_Word) ((MR_hl_field(0, MCI_9, 2))));
  MR_Word VarToStr_13;
  MR_Word Var_38;

  {
    VarToStr_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, VarToStr_13, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[2]));
    MR_hl_field(0, VarToStr_13, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1));
    MR_hl_field(0, VarToStr_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, VarToStr_13, 3) = ((MR_Box) (ProgVarSet_8));
    MR_hl_field(0, VarToStr_13, 4) = ((MR_Box) (VarMap_12));
  }
  Var_38 = mode_robdd__tfeirn__robdd_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Constraint_7);
  mercury__robdd__robdd_to_dot_5_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), Var_38, VarToStr_13, FileName_10);
}

void MR_CALL 
check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_p_0(
  MR_Word PredId_5,
  MR_Word ForwardGoalPathMap_6,
  MR_Word STATE_VARIABLE_MCI_0_10,
  MR_Word * STATE_VARIABLE_MCI_11)
{
  MR_Word ForwardGoalPathMapMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 10))));
  MR_Word ForwardGoalPathMapMap_9;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]), ((MR_Box) (PredId_5)), ((MR_Box) (ForwardGoalPathMap_6)), ForwardGoalPathMapMap0_8, &ForwardGoalPathMapMap_9);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 2))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 3))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 4))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 5))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 6))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 7))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 8))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_10, 9))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(0, base, 10) = ((MR_Box) (ForwardGoalPathMapMap_9));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(
  MR_Word MCI_4,
  MR_Word PredId_5,
  MR_Word * ForwardGoalPathMap_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, MCI_4, 10))));
  MR_Box conv0_ForwardGoalPathMap_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]), Var_7, ((MR_Box) (PredId_5)), &conv0_ForwardGoalPathMap_6);
  *ForwardGoalPathMap_6 = ((MR_Word) (conv0_ForwardGoalPathMap_6));
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_p_0(
  MR_Word MCI_3,
  MR_Word * ForwardGoalPathMap_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MCI_3, 10))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, MCI_3, 3))));
  MR_Box conv0_ForwardGoalPathMap_4;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]), Var_5, ((MR_Box) (Var_10)), &conv0_ForwardGoalPathMap_4);
  *ForwardGoalPathMap_4 = ((MR_Word) (conv0_ForwardGoalPathMap_4));
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_p_0(
  MR_Word MCI_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Unsigned) ((MR_hl_field(0, MCI_2, 9))) & (MR_Integer) 1);

  succeeded = (Var_3 == (MR_Integer) 1);
  return succeeded;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_p_0(
  MR_Word STATE_VARIABLE_MCI_0_4,
  MR_Word * STATE_VARIABLE_MCI_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 10))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_p_0(
  MR_Word STATE_VARIABLE_MCI_0_4,
  MR_Word * STATE_VARIABLE_MCI_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_4, 10))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s * env_ptr = (struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20));
  ((env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont)((env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s env;

  (env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont = cont;
  (env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__330__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), &(env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20, check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1, &env);
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0(
  MR_Word Constraint0_5,
  MR_Word * Constraint_6,
  MR_Word STATE_VARIABLE_MCI_0_17,
  MR_Word * STATE_VARIABLE_MCI_18)
{
  MR_Word VarMap_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 2))));
  MR_Word LambdaPath_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 4))));
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 3))));
  MR_Word Keys_11;
  MR_Word Constraint1_12;
  MR_Word InputNodes_16;
  MR_Word Var_19;
  MR_Word Var_23;
  MR_Word Var_64;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_65;
  MR_Word Var_66;

  mercury__bimap__ordinates_2_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), VarMap_8, &Keys_11);
  Constraint1_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Constraint0_5);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_7[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (VarMap_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (LambdaPath_9));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (PredId_10));
    MR_hl_field(0, Var_19, 6) = ((MR_Box) (Keys_11));
    MR_hl_field(0, Var_19, 7) = ((MR_Box) (Constraint1_12));
  }
  mercury__solutions__solutions_2_p_1((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]), Var_19, &InputNodes_16);
  Var_23 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InputNodes_16);
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 0))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 1))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 2))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 3))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 4))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 5))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 6))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 8))));
  Var_65 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 9))) & (MR_Integer) 1);
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_17, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_65));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_66));
  }
  *Constraint_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Var_64, Constraint0_5);
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_71;

  conv3_HeadVar__2_71 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__321__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_71));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_59;

  conv2_HeadVar__4_59 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__2_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_59));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_66;

  conv1_HeadVar__3_66 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__316__2_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_66));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__316__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_63;

  conv0_HeadVar__2_63 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__315__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_63));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0(
  MR_Word MCI_4,
  MR_Word PredId_5,
  MR_Word * Vars_6)
{
  MR_bool succeeded;
  MR_Word MinVars_7 = ((MR_Word) ((MR_hl_field(0, MCI_4, 5))));
  MR_Word MaxVars_8 = ((MR_Word) ((MR_hl_field(0, MCI_4, 6))));
  MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(0, MCI_4, 1))));
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv4_Vars_6;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (PredId_5));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (MinVars_7));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (MaxVars_8));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Var_15));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[6]));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_14));
  }
  conv4_Vars_6 = mercury__std_util__compose_3_f_0((MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[1]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[2]), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[3]), Var_12, (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[7]), ((MR_Box) (VarSet_9)));
  *Vars_6 = ((MR_Word) (conv4_Vars_6));
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MCI_0_9,
  MR_Word * STATE_VARIABLE_MCI_10)
{
  MR_Word Threshold_6;
  MR_Word MaxVars0_7;
  MR_Word MaxVars_8;
  MR_Word VarSet_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 1))));
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarSet_35);
  MaxVars0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 6))));
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (PredId_4)), ((MR_Box) (Threshold_6)), MaxVars0_7, &MaxVars_8);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 2))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 3))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 4))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 5))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 7))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 8))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 9))) & (MR_Integer) 1);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 6) = ((MR_Box) (MaxVars_8));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_32));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MCI_0_9,
  MR_Word * STATE_VARIABLE_MCI_10)
{
  MR_Word Threshold_6;
  MR_Word MinVars0_7;
  MR_Word MinVars_8;
  MR_Word VarSet_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 1))));
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarSet_35);
  MinVars0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 5))));
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (PredId_4)), ((MR_Box) (Threshold_6)), MinVars0_7, &MinVars_8);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 0))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 2))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 3))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 4))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 6))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 7))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 8))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 9))) & (MR_Integer) 1);
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_9, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (MinVars_8));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_32));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__288__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0(
  MR_Word P0_5,
  MR_Word MCI_6,
  MR_Word M_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word P_8;
  MR_Word Var_13;

  Var_13 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(M_7);
  {
    P_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, P_8, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[0]));
    MR_hl_field(0, P_8, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1));
    MR_hl_field(0, P_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, P_8, 3) = ((MR_Box) (P0_5));
    MR_hl_field(0, P_8, 4) = ((MR_Box) (MCI_6));
  }
  HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(P_8, Var_13);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_threshold_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Constraint_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Threshold_4 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_6;

  Var_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(Constraint_5);
  HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_99_104_101_99_107_95_104_108_100_115_46_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_46_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(Threshold_4, Var_6);
  return HeadVar__3_3;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_threshold_2_p_0(
  MR_Word MCI_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word VarSet_4 = ((MR_Word) ((MR_hl_field(0, MCI_3, 1))));
  MR_Word Var_5;

  Var_5 = mercury__varset__max_var_1_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), VarSet_4);
  *HeadVar__2_2 = (MR_Word) (Var_5);
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_level_from_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MCI_0_8,
  MR_Word * STATE_VARIABLE_MCI_9)
{
  MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word LambdaPath_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 8))));
  MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 9))) & (MR_Integer) 1);
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 10))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredId_5));
    MR_hl_field(0, base, 4) = ((MR_Box) (LambdaPath_6));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_prog_var_level_3_p_0(
  MR_Word MCI_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, MCI_4, 3))));
  MR_Word LambdaPath_7 = ((MR_Word) ((MR_hl_field(0, MCI_4, 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredId_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (LambdaPath_7));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__leave_lambda_goal_2_p_0(
  MR_Word STATE_VARIABLE_MCI_0_7,
  MR_Word * STATE_VARIABLE_MCI_8)
{
  MR_Word LambdaPath0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 4))));
  MR_Word LambdaPath_6;
  MR_Box conv0__GoalPath_5;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  mercury__stack__det_pop_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), &conv0__GoalPath_5, LambdaPath0_4, &LambdaPath_6);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 8))));
  Var_28 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 9))) & (MR_Integer) 1);
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (LambdaPath_6));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_29));
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__enter_lambda_goal_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_MCI_0_7,
  MR_Word * STATE_VARIABLE_MCI_8)
{
  MR_Word LambdaPath0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 4))));
  MR_Word Var_10;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  Var_10 = mercury__stack__push_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), LambdaPath0_6, ((MR_Box) (GoalId_4)));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 2))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 3))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 5))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 6))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 7))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 8))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 9))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_7, 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MCI_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_31));
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0(
  MR_Word MCI_4,
  MR_Word RepVar_5)
{
  MR_Word Var_6;
  MR_Word Key_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, MCI_4, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, MCI_4, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, MCI_4, 4))));
  MR_Box conv0_Var_6;

  {
    Key_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Key_7, 0) = ((MR_Box) (RepVar_5));
    MR_hl_field(0, Key_7, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, Key_7, 2) = ((MR_Box) (Var_14));
  }
  mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), Var_13, ((MR_Box) (Key_7)), &conv0_Var_6);
  Var_6 = ((MR_Word) (conv0_Var_6));
  return Var_6;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_4_p_0(
  MR_Word RepVar0_5,
  MR_Word * RobddVar_6,
  MR_Word STATE_VARIABLE_MCI_0_8,
  MR_Word * STATE_VARIABLE_MCI_9)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_8, 3))));

  check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(Var_10, RepVar0_5, RobddVar_6, STATE_VARIABLE_MCI_0_8, STATE_VARIABLE_MCI_9);
}

void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(
  MR_Word PredId_6,
  MR_Word RepVar0_7,
  MR_Word * RobddVar_8,
  MR_Word STATE_VARIABLE_MCI_0_18,
  MR_Word * STATE_VARIABLE_MCI_19)
{
  MR_bool succeeded = ((MR_tag((MR_Word) RepVar0_7)) == (MR_Integer) 2);
  MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 8))));
  MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 4))));
  MR_Word TypeCtorInfo_107_107;
  MR_Word ProgVar_10;
  MR_Word Var_20;

  if (succeeded)
  {
    ProgVar_10 = ((MR_Word) ((MR_hl_field(2, RepVar0_7, 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 7))));
    TypeCtorInfo_107_107 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    succeeded = parse_tree__set_of_var__contains_2_p_0(TypeCtorInfo_107_107, Var_20, ProgVar_10);
  }
  if (succeeded)
  {
    *RobddVar_8 = Var_115;
    *STATE_VARIABLE_MCI_19 = STATE_VARIABLE_MCI_0_18;
  }
  else
  {
    MR_Word Key_14;
    MR_Word RobddVar0_15;
    MR_Word Var_21;
    MR_Box conv0_RobddVar0_15;

    {
      Key_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Key_14, 0) = ((MR_Box) (RepVar0_7));
      MR_hl_field(0, Key_14, 1) = ((MR_Box) (PredId_6));
      MR_hl_field(0, Key_14, 2) = ((MR_Box) (Var_119));
    }
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 2))));
    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), Var_21, ((MR_Box) (Key_14)), &conv0_RobddVar0_15);
    if (succeeded)
    {
      RobddVar0_15 = ((MR_Word) (conv0_RobddVar0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *RobddVar_8 = RobddVar0_15;
      *STATE_VARIABLE_MCI_19 = STATE_VARIABLE_MCI_0_18;
    }
    else
    {
      MR_Word NewVarSet_16;
      MR_Word NewVarMap_17;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 1))));
      MR_Word Var_23;
      MR_Word Var_85;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;

      mercury__varset__new_var_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), RobddVar_8, Var_22, &NewVarSet_16);
      Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 2))));
      mercury__bimap__set_4_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]), ((MR_Box) (Key_14)), ((MR_Box) (*RobddVar_8)), Var_23, &NewVarMap_17);
      Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 0))));
      Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 3))));
      Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 4))));
      Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 5))));
      Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 6))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 7))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 8))));
      Var_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 9))) & (MR_Integer) 1);
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MCI_0_18, 10))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MCI_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
        MR_hl_field(0, base, 1) = ((MR_Box) (NewVarSet_16));
        MR_hl_field(0, base, 2) = ((MR_Box) (NewVarMap_17));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_88));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_89));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_90));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_91));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_92));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_93));
        MR_hl_field(0, base, 9) = (MR_Box) ((MR_Unsigned) (Var_94));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_95));
      }
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mci_set_pred_id_2_f_0(
  MR_Word MCI_4,
  MR_Word PredId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, MCI_4, 0))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, MCI_4, 1))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, MCI_4, 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, MCI_4, 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, MCI_4, 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, MCI_4, 6))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, MCI_4, 7))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, MCI_4, 8))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, MCI_4, 9))) & (MR_Integer) 1);
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, MCI_4, 10))));

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (PredId_5));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, HeadVar__3_3, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__3_3, 6) = ((MR_Box) (Var_12));
    MR_hl_field(0, HeadVar__3_3, 7) = ((MR_Box) (Var_13));
    MR_hl_field(0, HeadVar__3_3, 8) = ((MR_Box) (Var_14));
    MR_hl_field(0, HeadVar__3_3, 9) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, HeadVar__3_3, 10) = ((MR_Box) (Var_16));
  }
  return HeadVar__3_3;
}

void MR_CALL 
check_hlds__mode_constraint_robdd__mci_get_debug_stream_2_p_0(
  MR_Word MCI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MCI_3, 0))));
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__init_mode_constraint_info_2_f_0(
  MR_Word DebugStream_4,
  MR_Word Simple_5)
{
  MR_Word MCI_6;
  MR_Word VarSet0_7;
  MR_Word ZeroVar_8;
  MR_Word VarSet_9;
  MR_Word PredId_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  VarSet0_7 = mercury__varset__init_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0));
  mercury__varset__new_var_3_p_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0), &ZeroVar_8, VarSet0_7, &VarSet_9);
  PredId_10 = hlds__hlds_pred__initial_pred_id_0_f_0();
  Var_11 = mercury__bimap__init_0_f_0((MR_Word) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]));
  Var_12 = mercury__stack__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0));
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]));
  Var_14 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]));
  Var_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]));
  {
    MCI_6 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MCI_6, 0) = ((MR_Box) (DebugStream_4));
    MR_hl_field(0, MCI_6, 1) = ((MR_Box) (VarSet_9));
    MR_hl_field(0, MCI_6, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, MCI_6, 3) = ((MR_Box) (PredId_10));
    MR_hl_field(0, MCI_6, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, MCI_6, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, MCI_6, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, MCI_6, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, MCI_6, 8) = ((MR_Box) (ZeroVar_8));
    MR_hl_field(0, MCI_6, 9) = (MR_Box) ((MR_Unsigned) (Simple_5));
    MR_hl_field(0, MCI_6, 10) = ((MR_Box) (Var_16));
  }
  return MCI_6;
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mc_type_0_0();
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____threshold_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____threshold_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__mode_constraint_robdd__init(void)
{
}

void mercury__check_hlds__mode_constraint_robdd__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0);
  MR_register_type_ctor_info(&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0);
}

void mercury__check_hlds__mode_constraint_robdd__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_constraint_robdd__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_constraint_robdd.
