/*
** Automatically generated from `mode_constraint_robdd.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module check_hlds.mode_constraint_robdd. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_constraint_robdd__init
ENDINIT
*/

#include "check_hlds.mode_constraint_robdd.mih"


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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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



struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s {
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12;
  MR_Word * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20;
  MR_Cont check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont;
  void * check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_21;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_80;
  MR_Word check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_81;
  MR_Box check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14;
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0;

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1];

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1];

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10];

static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[10];

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

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26,
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20,
  MR_Cont check_hlds__mode_constraint_robdd__cont,
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16);

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Cont check_hlds__mode_constraint_robdd__cont,
  void * check_hlds__mode_constraint_robdd__cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[2][6];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[3][7];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[1][9];

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][8];




static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[4]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[0])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_4[1])),
    ((MR_Box) (check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_constraint_robdd_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd____vpti_pred_1__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__set_ordlist__ti_set_ordlist_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd____vpti_func_2__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__list__ti_list_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__pti_bimap_2__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0__plain_term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__pti_stack_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__list__pti_list_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__pti_tree234_2__plain_stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__pti_varset_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_lambda_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "lambda_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

static const MR_EnumFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_functor_desc_mc_type_0_0
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mc_type",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_name_ordered_mc_type_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__enum_value_ordered_mc_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mc_type_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0[10] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__varset__ti_varset_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_ConstString check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0[10] = {
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

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0 = {
  (MR_String) "mode_constraint_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_mode_constraint_info_0_0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_names_mode_constraint_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_mode_constraint_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_mode_constraint_info_0_0
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_info",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_mode_constraint_info_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_mode_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_mode_constraint_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__bimap__ti_bimap_2check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "mode_constraint_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prodvars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prodvars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0 = {
  (MR_String) "prog_var_and_level",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_prog_var_and_level_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_prog_var_and_level_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_prog_var_and_level_0_0
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_prog_var_and_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "prog_var_and_level",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_prog_var_and_level_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_prog_var_and_level_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_prog_var_and_level_0
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0 = {
  (MR_String) "in",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1 = {
  (MR_String) "out",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2 = {
  (MR_String) "at",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_rep_var_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_rep_var_0_2
};

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_rep_var_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "rep_var",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_rep_var_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_rep_var_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_rep_var_0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_robdd_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "robdd_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 = {
  (MR_String) "threshold",
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__term__ti_var_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_threshold_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "threshold",
  {     &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  {     &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__notag_functor_desc_threshold_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_threshold_0
};

static const MR_PseudoTypeInfo check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_rep_var_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0 = {
  (MR_String) "key",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__field_types_varmap_key_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

static const MR_DuPtagLayout check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_stag_ordered_varmap_key_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0[1] = {
  &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_functor_desc_varmap_key_0_0
};

static const MR_Integer check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001)),
  ((MR_Box) (check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001)),
  (MR_String) "check_hlds.mode_constraint_robdd",
  (MR_String) "varmap_key",
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_name_ordered_varmap_key_0 },
  {     check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__du_ptag_ordered_varmap_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__functor_number_map_varmap_key_0
};

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mc_type_0_0();
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1);
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____threshold_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____threshold_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0_10001(
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0_10001(
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1;

    {
      check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(&check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_3));
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68;

    {
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_68));
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_12,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_50)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_51;
    MR_Box check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51;

    {
      check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51 = mercury__std_util__compose_3_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], check_hlds__mode_constraint_robdd__HeadVar__1_12, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[7], ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_50)));
    }
    check_hlds__mode_constraint_robdd__HeadVar__4_51 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_HeadVar__4_51);
    return check_hlds__mode_constraint_robdd__HeadVar__4_51;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_5,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26,
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_15;
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57;
    MR_Word check_hlds__mode_constraint_robdd__Key_11;
    MR_Word check_hlds__mode_constraint_robdd__RepVar_12;
    MR_Word check_hlds__mode_constraint_robdd__PredId_13;
    MR_Word check_hlds__mode_constraint_robdd__LambdaId0_14;
    MR_Word check_hlds__mode_constraint_robdd__GoalId_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_71;
    MR_Word check_hlds__mode_constraint_robdd__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
    MR_Box check_hlds__mode_constraint_robdd__conv0_Key_11;
    MR_Word check_hlds__mode_constraint_robdd__Var_45;
    MR_Word check_hlds__mode_constraint_robdd__Var_46;
    MR_Word check_hlds__mode_constraint_robdd__Var_47;
    MR_Word check_hlds__mode_constraint_robdd__Var_48;
    MR_Word check_hlds__mode_constraint_robdd__Var_49;
    MR_Word check_hlds__mode_constraint_robdd__Var_50;
    MR_Word check_hlds__mode_constraint_robdd__Var_51;
    MR_Word check_hlds__mode_constraint_robdd__Var_52;
    MR_Word check_hlds__mode_constraint_robdd__Var_53;

    {
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__Var_28, &check_hlds__mode_constraint_robdd__conv0_Key_11, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_25)));
    }
    check_hlds__mode_constraint_robdd__Key_11 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Key_11);
    check_hlds__mode_constraint_robdd__RepVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__LambdaId0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_11, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_5, (MR_Integer) 9)));
    {
      check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_13, check_hlds__mode_constraint_robdd__Var_71);
    }
    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_12)) == (MR_mktag((MR_Integer) 2)));
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            check_hlds__mode_constraint_robdd__ProgVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 0)));
            check_hlds__mode_constraint_robdd__GoalId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_12, (MR_Integer) 1)));
            check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
            {
              mercury__stack__push_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_57_57, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_16)), check_hlds__mode_constraint_robdd__LambdaId0_14, &check_hlds__mode_constraint_robdd__LambdaId_17);
            }
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
          }
      }
    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        MR_Word check_hlds__mode_constraint_robdd__Vs0_18;
        MR_Box check_hlds__mode_constraint_robdd__conv1_Vs0_18;

        {
          check_hlds__mode_constraint_robdd__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), &check_hlds__mode_constraint_robdd__conv1_Vs0_18);
        }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            check_hlds__mode_constraint_robdd__Vs0_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_Vs0_18);
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
          }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            MR_Word check_hlds__mode_constraint_robdd__Vs_19;

            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15, check_hlds__mode_constraint_robdd__Vs0_18, &check_hlds__mode_constraint_robdd__Vs_19);
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_19)), check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);
            }
          }
        else
          {
            MR_Word check_hlds__mode_constraint_robdd__Vs_32;

            {
              parse_tree__set_of_var__make_singleton_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVar_15, &check_hlds__mode_constraint_robdd__Vs_32);
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaId_17)), ((MR_Box) (check_hlds__mode_constraint_robdd__Vs_32)), check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26, check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27);
            }
          }
      }
    else
      *check_hlds__mode_constraint_robdd__LambdaHeadVar__3_27 = check_hlds__mode_constraint_robdd__LambdaHeadVar__2_26;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
  MR_Word check_hlds__mode_constraint_robdd__VarMap_12,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__RepVar_15;
    MR_Word check_hlds__mode_constraint_robdd__PredId_16;
    MR_Word check_hlds__mode_constraint_robdd__LambdaId_17;
    MR_Integer check_hlds__mode_constraint_robdd__PredIdNum_18;
    MR_Word check_hlds__mode_constraint_robdd__Var_33;
    MR_Integer check_hlds__mode_constraint_robdd__Var_36;
    MR_Integer check_hlds__mode_constraint_robdd__Var_38;
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_33;

    {
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_12, &check_hlds__mode_constraint_robdd__conv0_Var_33, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30)));
    }
    check_hlds__mode_constraint_robdd__Var_33 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_33);
    check_hlds__mode_constraint_robdd__RepVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_33, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_33, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__LambdaId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_33, (MR_Integer) 2)));
    switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mode_constraint_robdd__V_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
          MR_String check_hlds__mode_constraint_robdd__Name_62;

          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_60, &check_hlds__mode_constraint_robdd__Name_62);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_62);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_in");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mode_constraint_robdd__V_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
          MR_String check_hlds__mode_constraint_robdd__Name_71;

          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_69, &check_hlds__mode_constraint_robdd__Name_71);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_71);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_out");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mode_constraint_robdd__V_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 0)));
          MR_Word check_hlds__mode_constraint_robdd__Id_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar_15, (MR_Integer) 1)));
          MR_String check_hlds__mode_constraint_robdd__Name_81;
          MR_Integer check_hlds__mode_constraint_robdd__IdNum_82;

          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__ProgVarSet_8, check_hlds__mode_constraint_robdd__V_78, &check_hlds__mode_constraint_robdd__Name_81);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__mode_constraint_robdd__Name_81);
          }
          {
            mercury__io__write_char_3_p_0((MR_Char) 95);
          }
          check_hlds__mode_constraint_robdd__IdNum_82 = (MR_Integer) check_hlds__mode_constraint_robdd__Id_79;
          {
            mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__IdNum_82);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_constraint_robdd__PredId_16, &check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
    {
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__PredIdNum_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      check_hlds__mode_constraint_robdd__Var_36 = mercury__stack__depth_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaId_17);
    }
    {
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__Var_36);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " (");
    }
    {
      check_hlds__mode_constraint_robdd__Var_38 = mercury__term__var_to_int_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__LambdaHeadVar__1_30);
    }
    {
      mercury__io__write_int_3_p_0(check_hlds__mode_constraint_robdd__Var_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
{
  {
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14 = ((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14);
    {
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(check_hlds__mode_constraint_robdd__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_1(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
{
  {
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

    {
      MR_Box check_hlds__mode_constraint_robdd__conv1_RobddVar_15;

      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 0)));
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 1)));
      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14, (MR_Integer) 2)));
      {
        (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_80);
      }
      if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
        {
          (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
          {
            (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_83_83, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9)), ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_81)));
          }
          if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
            {
              (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_21)) == (MR_mktag((MR_Integer) 0)));
              if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
                {
                  *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20) = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Var_21, (MR_Integer) 0)));
                  {
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
                    {
                      mercury__bimap__lookup_3_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeInfo_76_76, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8, ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Key_14)), &check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
                    }
                    (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_RobddVar_15);
                    {
                      (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12, (check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__RobddVar_15);
                    }
                    if ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__succeeded)
                      {
                        ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr);
                      }
                  }
                }
            }
        }
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(
  MR_Word check_hlds__mode_constraint_robdd__VarMap_8,
  MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9,
  MR_Word check_hlds__mode_constraint_robdd__PredId_10,
  MR_Word check_hlds__mode_constraint_robdd__Keys_11,
  MR_Word check_hlds__mode_constraint_robdd__Constraint1_12,
  MR_Word * check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20,
  MR_Cont check_hlds__mode_constraint_robdd__cont,
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
{
  {
    struct check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0_s check_hlds__mode_constraint_robdd__env;

    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__VarMap_8 = check_hlds__mode_constraint_robdd__VarMap_8;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaPath_9 = check_hlds__mode_constraint_robdd__LambdaPath_9;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__PredId_10 = check_hlds__mode_constraint_robdd__PredId_10;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__Constraint1_12 = check_hlds__mode_constraint_robdd__Constraint1_12;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__LambdaHeadVar__1_20 = check_hlds__mode_constraint_robdd__LambdaHeadVar__1_20;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont = check_hlds__mode_constraint_robdd__cont;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0;
    {
      mercury__list__member_2_p_1((check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__TypeCtorInfo_75_75, &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_env_0__conv0_Key_14, check_hlds__mode_constraint_robdd__Keys_11, check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0_2, &check_hlds__mode_constraint_robdd__env);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__307__1_1_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_67)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_68;

    {
      check_hlds__mode_constraint_robdd__HeadVar__2_68 = mercury__varset__vars_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__HeadVar__1_67);
    }
    return check_hlds__mode_constraint_robdd__HeadVar__2_68;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_13,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_14,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_55)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_56;
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[1];
    MR_Box check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56;

    {
      check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56 = mercury__std_util__compose_3_f_0(check_hlds__mode_constraint_robdd__TypeInfo_57_57, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[2], check_hlds__mode_constraint_robdd__TypeInfo_57_57, check_hlds__mode_constraint_robdd__HeadVar__1_13, check_hlds__mode_constraint_robdd__HeadVar__2_14, ((MR_Box) (check_hlds__mode_constraint_robdd__HeadVar__3_55)));
    }
    check_hlds__mode_constraint_robdd__HeadVar__4_56 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_HeadVar__4_56);
    return check_hlds__mode_constraint_robdd__HeadVar__4_56;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_15,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_62)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_63;

    {
      check_hlds__mode_constraint_robdd__HeadVar__3_63 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_15, check_hlds__mode_constraint_robdd__HeadVar__2_62);
    }
    return check_hlds__mode_constraint_robdd__HeadVar__3_63;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
  MR_Word check_hlds__mode_constraint_robdd__MinVars_7,
  MR_Word check_hlds__mode_constraint_robdd__MaxVars_8,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_66_66 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
    MR_Word check_hlds__mode_constraint_robdd__Var_18;
    MR_Word check_hlds__mode_constraint_robdd__Var_70;
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_18;
    MR_Word check_hlds__mode_constraint_robdd__Var_19;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_71;
    MR_Box check_hlds__mode_constraint_robdd__conv1_Var_20;

    {
      check_hlds__mode_constraint_robdd__conv0_Var_18 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MinVars_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
    }
    check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_18);
    {
      mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__Var_70, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_18)), ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)));
    }
    check_hlds__mode_constraint_robdd__succeeded = ((MR_Integer) 1 == check_hlds__mode_constraint_robdd__Var_70);
    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        check_hlds__mode_constraint_robdd__Var_19 = (MR_Integer) 1;
        {
          check_hlds__mode_constraint_robdd__conv1_Var_20 = mercury__map__lookup_2_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_65_65, check_hlds__mode_constraint_robdd__TypeInfo_66_66, check_hlds__mode_constraint_robdd__MaxVars_8, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)));
        }
        check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_Var_20);
        {
          mercury__builtin__compare_3_p_0(check_hlds__mode_constraint_robdd__TypeInfo_66_66, &check_hlds__mode_constraint_robdd__Var_71, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20)), ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_16)));
        }
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_19 == check_hlds__mode_constraint_robdd__Var_71);
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_59)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_60;

    {
      check_hlds__mode_constraint_robdd__HeadVar__2_60 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_59);
    }
    return check_hlds__mode_constraint_robdd__HeadVar__2_60;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
  MR_Word check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__RV_10;
    MR_Word check_hlds__mode_constraint_robdd__PredId_11;
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_12;

    {
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__Var_15, &check_hlds__mode_constraint_robdd__conv0_Var_16, ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaHeadVar__1_14)));
    }
    check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_16);
    check_hlds__mode_constraint_robdd__RV_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_16, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_16, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_16, (MR_Integer) 2)));
    {
      MR_Word check_hlds__mode_constraint_robdd__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 2)));
      MR_Word check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 0)));
      MR_Word check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 1)));
      MR_Word check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 3)));
      MR_Word check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 4)));
      MR_Word check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 5)));
      MR_Word check_hlds__mode_constraint_robdd__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 6)));
      MR_Word check_hlds__mode_constraint_robdd__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 7)));
      MR_Word check_hlds__mode_constraint_robdd__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 8)));
      MR_Word check_hlds__mode_constraint_robdd__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_6, (MR_Integer) 9)));

      {
        check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__PredId_11, check_hlds__mode_constraint_robdd__Var_39);
      }
      check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
    }
    if (!(check_hlds__mode_constraint_robdd__succeeded))
      {
        MR_bool MR_CALL (* check_hlds__mode_constraint_robdd__func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P0_5, (MR_Integer) 1)));

        {
          check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__func_1(((MR_Box) check_hlds__mode_constraint_robdd__P0_5), ((MR_Box) (check_hlds__mode_constraint_robdd__RV_10)));
        }
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____varmap_key_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
    if (check_hlds__mode_constraint_robdd__succeeded)
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_10;

        {
          check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(&check_hlds__mode_constraint_robdd__Var_10, check_hlds__mode_constraint_robdd__Var_4, check_hlds__mode_constraint_robdd__Var_7);
        }
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_10 == (MR_Integer) 0);
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
        if (check_hlds__mode_constraint_robdd__succeeded)
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_10;
        else
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_11;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__Var_11, check_hlds__mode_constraint_robdd__Var_5, check_hlds__mode_constraint_robdd__Var_8);
            }
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_11 == (MR_Integer) 0);
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
            if (check_hlds__mode_constraint_robdd__succeeded)
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____varmap_key_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
    if (check_hlds__mode_constraint_robdd__succeeded)
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_12_12;
        MR_Word check_hlds__mode_constraint_robdd__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(check_hlds__mode_constraint_robdd__Var_3, check_hlds__mode_constraint_robdd__Var_6);
        }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            {
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__Var_4, check_hlds__mode_constraint_robdd__Var_7);
            }
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                check_hlds__mode_constraint_robdd__TypeInfo_12_12 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
                {
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_12_12, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8)));
                }
              }
          }
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____threshold_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_7 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_6 == check_hlds__mode_constraint_robdd__CastY_7);
    if (check_hlds__mode_constraint_robdd__succeeded)
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)));
        }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____threshold_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_5 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_6 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_5 == check_hlds__mode_constraint_robdd__CastY_6);
    if (check_hlds__mode_constraint_robdd__succeeded)
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Var_3 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2;

        {
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Var_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)));
        }
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____robdd_var_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____robdd_var_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____rep_var_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_29 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_30 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_29 == check_hlds__mode_constraint_robdd__CastY_30);
    if (check_hlds__mode_constraint_robdd__succeeded)
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_37)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)));
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_38)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__mode_constraint_robdd__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__mode_constraint_robdd__Var_28;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], &check_hlds__mode_constraint_robdd__Var_28, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_36)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_26)));
                  }
                  check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_28 == (MR_Integer) 0);
                  check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                  if (check_hlds__mode_constraint_robdd__succeeded)
                    *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_28;
                  else
                    {
                      MR_Integer check_hlds__mode_constraint_robdd__Var_39 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_35;
                      MR_Integer check_hlds__mode_constraint_robdd__Var_40 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_27;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_constraint_robdd__HeadVar__1_1, check_hlds__mode_constraint_robdd__Var_39, check_hlds__mode_constraint_robdd__Var_40);
                      }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____rep_var_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_11 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_11 == check_hlds__mode_constraint_robdd__CastY_12);
    if (check_hlds__mode_constraint_robdd__succeeded)
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__mode_constraint_robdd__TypeInfo_15_15;
            MR_Word check_hlds__mode_constraint_robdd__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mode_constraint_robdd__Var_4;

            check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mode_constraint_robdd__TypeInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
                {
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_15_15, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)));
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__mode_constraint_robdd__TypeInfo_16_16;
            MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mode_constraint_robdd__Var_6;

            check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mode_constraint_robdd__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
                {
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_16_16, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__mode_constraint_robdd__TypeInfo_13_13;
            MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__mode_constraint_robdd__Var_9;
            MR_Word check_hlds__mode_constraint_robdd__Var_10;
            MR_Integer check_hlds__mode_constraint_robdd__Var_17;
            MR_Integer check_hlds__mode_constraint_robdd__Var_18;

            check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4];
                {
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)));
                }
                if (check_hlds__mode_constraint_robdd__succeeded)
                  {
                    check_hlds__mode_constraint_robdd__Var_17 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_8;
                    check_hlds__mode_constraint_robdd__Var_18 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_10;
                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_17 == check_hlds__mode_constraint_robdd__Var_18);
                  }
              }
          }
          break;
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prog_var_and_level_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_12 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_13 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_12 == check_hlds__mode_constraint_robdd__CastY_13);
    if (check_hlds__mode_constraint_robdd__succeeded)
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], &check_hlds__mode_constraint_robdd__Var_10, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_7)));
        }
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_10 == (MR_Integer) 0);
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
        if (check_hlds__mode_constraint_robdd__succeeded)
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_10;
        else
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_11;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__Var_11, check_hlds__mode_constraint_robdd__Var_5, check_hlds__mode_constraint_robdd__Var_8);
            }
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_11 == (MR_Integer) 0);
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
            if (check_hlds__mode_constraint_robdd__succeeded)
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prog_var_and_level_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_9 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_10 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_9 == check_hlds__mode_constraint_robdd__CastY_10);
    if (check_hlds__mode_constraint_robdd__succeeded)
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_13_13;
        MR_Word check_hlds__mode_constraint_robdd__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], ((MR_Box) (check_hlds__mode_constraint_robdd__Var_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6)));
        }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            {
              check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__Var_4, check_hlds__mode_constraint_robdd__Var_7);
            }
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                check_hlds__mode_constraint_robdd__TypeInfo_13_13 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
                {
                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_13_13, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8)));
                }
              }
          }
      }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____prodvars_map_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____prodvars_map_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_vars_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[8], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_vars_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[8], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_varmap_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_varmap_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_var_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_var_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_33 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_34 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__3_3;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_33 == check_hlds__mode_constraint_robdd__CastY_34);
    if (check_hlds__mode_constraint_robdd__succeeded)
      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word check_hlds__mode_constraint_robdd__Var_24;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], &check_hlds__mode_constraint_robdd__Var_24, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14)));
        }
        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_24 == (MR_Integer) 0);
        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
        if (check_hlds__mode_constraint_robdd__succeeded)
          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_24;
        else
          {
            MR_Word check_hlds__mode_constraint_robdd__Var_25;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3], &check_hlds__mode_constraint_robdd__Var_25, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_15)));
            }
            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_25 == (MR_Integer) 0);
            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
            if (check_hlds__mode_constraint_robdd__succeeded)
              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_25;
            else
              {
                MR_Word check_hlds__mode_constraint_robdd__Var_26;

                {
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_constraint_robdd__Var_26, check_hlds__mode_constraint_robdd__Var_6, check_hlds__mode_constraint_robdd__Var_16);
                }
                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_26 == (MR_Integer) 0);
                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                if (check_hlds__mode_constraint_robdd__succeeded)
                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_26;
                else
                  {
                    MR_Word check_hlds__mode_constraint_robdd__Var_27;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], &check_hlds__mode_constraint_robdd__Var_27, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_17)));
                    }
                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_27 == (MR_Integer) 0);
                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                    if (check_hlds__mode_constraint_robdd__succeeded)
                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_27;
                    else
                      {
                        MR_Word check_hlds__mode_constraint_robdd__Var_28;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__Var_28, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_18)));
                        }
                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_28 == (MR_Integer) 0);
                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                        if (check_hlds__mode_constraint_robdd__succeeded)
                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_28;
                        else
                          {
                            MR_Word check_hlds__mode_constraint_robdd__Var_29;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4], &check_hlds__mode_constraint_robdd__Var_29, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_19)));
                            }
                            check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_29 == (MR_Integer) 0);
                            check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                            if (check_hlds__mode_constraint_robdd__succeeded)
                              *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_29;
                            else
                              {
                                MR_Word check_hlds__mode_constraint_robdd__Var_30;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6], &check_hlds__mode_constraint_robdd__Var_30, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20)));
                                }
                                check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_30 == (MR_Integer) 0);
                                check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                                if (check_hlds__mode_constraint_robdd__succeeded)
                                  *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_30;
                                else
                                  {
                                    MR_Word check_hlds__mode_constraint_robdd__Var_31;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], &check_hlds__mode_constraint_robdd__Var_31, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_11)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_21)));
                                    }
                                    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_31 == (MR_Integer) 0);
                                    check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                                    if (check_hlds__mode_constraint_robdd__succeeded)
                                      *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_31;
                                    else
                                      {
                                        MR_Word check_hlds__mode_constraint_robdd__Var_32;
                                        MR_Integer check_hlds__mode_constraint_robdd__Var_45 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_12;
                                        MR_Integer check_hlds__mode_constraint_robdd__Var_46 = (MR_Integer) check_hlds__mode_constraint_robdd__Var_22;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_constraint_robdd__Var_32, check_hlds__mode_constraint_robdd__Var_45, check_hlds__mode_constraint_robdd__Var_46);
                                        }
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_32 == (MR_Integer) 0);
                                        check_hlds__mode_constraint_robdd__succeeded = !(check_hlds__mode_constraint_robdd__succeeded);
                                        if (check_hlds__mode_constraint_robdd__succeeded)
                                          *check_hlds__mode_constraint_robdd__HeadVar__1_1 = check_hlds__mode_constraint_robdd__Var_32;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23)));
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

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Integer check_hlds__mode_constraint_robdd__CastX_23 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Integer check_hlds__mode_constraint_robdd__CastY_24 = (MR_Integer) check_hlds__mode_constraint_robdd__HeadVar__2_2;

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__CastX_23 == check_hlds__mode_constraint_robdd__CastY_24);
    if (check_hlds__mode_constraint_robdd__succeeded)
      check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_26_26;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_28_28;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_29_29;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_30_30;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_31_31;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_32_32;
        MR_Word check_hlds__mode_constraint_robdd__TypeInfo_33_33;
        MR_Word check_hlds__mode_constraint_robdd__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__2_2, (MR_Integer) 9)));

        {
          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[3], ((MR_Box) (check_hlds__mode_constraint_robdd__Var_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13)));
        }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            check_hlds__mode_constraint_robdd__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[3];
            {
              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14)));
            }
            if (check_hlds__mode_constraint_robdd__succeeded)
              {
                {
                  check_hlds__mode_constraint_robdd__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_constraint_robdd__Var_5, check_hlds__mode_constraint_robdd__Var_15);
                }
                if (check_hlds__mode_constraint_robdd__succeeded)
                  {
                    check_hlds__mode_constraint_robdd__TypeInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5];
                    {
                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_28_28, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_16)));
                    }
                    if (check_hlds__mode_constraint_robdd__succeeded)
                      {
                        check_hlds__mode_constraint_robdd__TypeInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
                        {
                          check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_29_29, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_7)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_17)));
                        }
                        if (check_hlds__mode_constraint_robdd__succeeded)
                          {
                            check_hlds__mode_constraint_robdd__TypeInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[4];
                            {
                              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_30_30, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_18)));
                            }
                            if (check_hlds__mode_constraint_robdd__succeeded)
                              {
                                check_hlds__mode_constraint_robdd__TypeInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6];
                                {
                                  check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_31_31, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_19)));
                                }
                                if (check_hlds__mode_constraint_robdd__succeeded)
                                  {
                                    check_hlds__mode_constraint_robdd__TypeInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
                                    {
                                      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_32_32, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20)));
                                    }
                                    if (check_hlds__mode_constraint_robdd__succeeded)
                                      {
                                        check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_11 == check_hlds__mode_constraint_robdd__Var_21);
                                        if (check_hlds__mode_constraint_robdd__succeeded)
                                          {
                                            check_hlds__mode_constraint_robdd__TypeInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[5];
                                            {
                                              check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_constraint_robdd__TypeInfo_33_33, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12)), ((MR_Box) (check_hlds__mode_constraint_robdd__Var_22)));
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
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mode_constraint_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[7], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mode_constraint_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[7], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____mc_type_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(check_hlds__mode_constraint_robdd__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____mc_type_0_0(void)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_95_114_111_98_100_100_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd____Compare____lambda_path_0_0(
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_5 = check_hlds__mode_constraint_robdd__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], check_hlds__mode_constraint_robdd__HeadVar__1_1, ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd____Unify____lambda_path_0_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar1_3 = check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Cast_HeadVar2_4 = check_hlds__mode_constraint_robdd__HeadVar__2_2;

    {
      check_hlds__mode_constraint_robdd__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_constraint_robdd__Cast_HeadVar2_4)));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
    MR_Word check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27;

    {
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__atomic_prodvars_map__422__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_2), &check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27);
    }
    *check_hlds__mode_constraint_robdd__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_LambdaHeadVar__3_27));
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__Constraint_4,
  MR_Word check_hlds__mode_constraint_robdd__MCI_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__ProdVarsMap_6;
    MR_Word check_hlds__mode_constraint_robdd__VarsEntailed_7;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_21;

    {
      check_hlds__mode_constraint_robdd__Var_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_4);
    }
    {
      check_hlds__mode_constraint_robdd__Var_20 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Var_21);
    }
    check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__Var_20)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        check_hlds__mode_constraint_robdd__VarsEntailed_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_constraint_robdd__Var_20, (MR_Integer) 0)));
        {
          MR_Word check_hlds__mode_constraint_robdd__Var_22;
          MR_Word check_hlds__mode_constraint_robdd__Var_23;
          MR_Word check_hlds__mode_constraint_robdd__Var_24;
          MR_Box check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6;

          {
            check_hlds__mode_constraint_robdd__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_22, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_22, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_22, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_5));
          }
          {
            check_hlds__mode_constraint_robdd__Var_23 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[1], check_hlds__mode_constraint_robdd__VarsEntailed_7);
          }
          {
            check_hlds__mode_constraint_robdd__Var_24 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[5], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[6]);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[2], check_hlds__mode_constraint_robdd__Var_22, check_hlds__mode_constraint_robdd__Var_23, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24)), &check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
          }
          check_hlds__mode_constraint_robdd__ProdVarsMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv1_ProdVarsMap_6);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_constraint_robdd", (MR_String) "function \140check_hlds.mode_constraint_robdd.atomic_prodvars_map\'/2", (MR_String) "zero constraint");
        }
      }
    return check_hlds__mode_constraint_robdd__ProdVarsMap_6;
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

    {
      check_hlds__mode_constraint_robdd__IntroducedFrom__pred__robdd_to_dot__387__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0(
  MR_Word check_hlds__mode_constraint_robdd__Constraint_7,
  MR_Word check_hlds__mode_constraint_robdd__ProgVarSet_8,
  MR_Word check_hlds__mode_constraint_robdd__MCI_9,
  MR_String check_hlds__mode_constraint_robdd__FileName_10)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58;
    MR_Word check_hlds__mode_constraint_robdd__VarMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__P_13;
    MR_Word check_hlds__mode_constraint_robdd__Var_40;
    MR_Word check_hlds__mode_constraint_robdd__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_9, (MR_Integer) 9)));

    {
      check_hlds__mode_constraint_robdd__P_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__robdd_to_dot_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__ProgVarSet_8));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_13, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_12));
    }
    check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    {
      check_hlds__mode_constraint_robdd__Var_40 = mode_robdd__tfeirn__robdd_1_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__Constraint_7);
    }
    {
      mercury__robdd__robdd_to_dot_5_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_58_58, check_hlds__mode_constraint_robdd__Var_40, check_hlds__mode_constraint_robdd__P_13, check_hlds__mode_constraint_robdd__FileName_10);
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__add_forward_goal_path_map_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
  MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_11)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9;
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_22;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;
    MR_Word check_hlds__mode_constraint_robdd__Var_24;
    MR_Word check_hlds__mode_constraint_robdd__Var_25;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_29;
    MR_Word check_hlds__mode_constraint_robdd__Var_30;
    MR_Word check_hlds__mode_constraint_robdd__Var_31;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6)), check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap0_8, &check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9);
    }
    check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_10, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_30));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__ForwardGoalPathMapMap_9));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
  MR_Word * check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__Var_7, ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
    }
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_6);
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_forward_goal_path_map_2_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_3,
  MR_Word * check_hlds__mode_constraint_robdd__ForwardGoalPathMap_4)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
    MR_Box check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0], check_hlds__mode_constraint_robdd__Var_5, ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9)), &check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
    }
    *check_hlds__mode_constraint_robdd__ForwardGoalPathMap_4 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_ForwardGoalPathMap_4);
  }
}

MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__using_simple_mode_constraints_1_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_2, (MR_Integer) 9)));

    check_hlds__mode_constraint_robdd__succeeded = (check_hlds__mode_constraint_robdd__Var_3 == (MR_Integer) 1);
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__unset_simple_mode_constraints_2_p_0(
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_17));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_simple_mode_constraints_2_p_0(
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_4, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_17));
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1(
  void * check_hlds__mode_constraint_robdd__env_ptr_arg)
{
  {
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s * check_hlds__mode_constraint_robdd__env_ptr = (struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s *) check_hlds__mode_constraint_robdd__env_ptr_arg;

    *((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20));
    {
      ((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont)((check_hlds__mode_constraint_robdd__env_ptr)->check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box * check_hlds__mode_constraint_robdd__wrapper_arg_1,
  MR_Cont check_hlds__mode_constraint_robdd__cont,
  void * check_hlds__mode_constraint_robdd__cont_env_ptr)
{
  {
    struct check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0_s check_hlds__mode_constraint_robdd__env;

    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__wrapper_arg_1 = check_hlds__mode_constraint_robdd__wrapper_arg_1;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont = check_hlds__mode_constraint_robdd__cont;
    (check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__cont_env_ptr = check_hlds__mode_constraint_robdd__cont_env_ptr;
    {
      MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

      {
        check_hlds__mode_constraint_robdd__IntroducedFrom__pred__set_input_nodes__316__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 7))), &(check_hlds__mode_constraint_robdd__env).check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2_env_0__conv0_LambdaHeadVar__1_20, check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_1, &check_hlds__mode_constraint_robdd__env);
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__Constraint0_5,
  MR_Word * check_hlds__mode_constraint_robdd__Constraint_6,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_18)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__VarMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Keys_11;
    MR_Word check_hlds__mode_constraint_robdd__Constraint1_12;
    MR_Word check_hlds__mode_constraint_robdd__InputNodes_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_19;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;
    MR_Word check_hlds__mode_constraint_robdd__Var_60;
    MR_Word check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_53;
    MR_Word check_hlds__mode_constraint_robdd__Var_54;
    MR_Word check_hlds__mode_constraint_robdd__Var_55;
    MR_Word check_hlds__mode_constraint_robdd__Var_56;
    MR_Word check_hlds__mode_constraint_robdd__Var_57;
    MR_Word check_hlds__mode_constraint_robdd__Var_58;
    MR_Word check_hlds__mode_constraint_robdd__Var_61;
    MR_Word check_hlds__mode_constraint_robdd__Var_62;
    MR_Word check_hlds__mode_constraint_robdd__Var_59;

    {
      mercury__bimap__ordinates_2_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__VarMap_8, &check_hlds__mode_constraint_robdd__Keys_11);
    }
    {
      check_hlds__mode_constraint_robdd__Constraint1_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint0_5);
    }
    {
      check_hlds__mode_constraint_robdd__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__set_input_nodes_4_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarMap_8));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_9));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_10));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Keys_11));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_19, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Constraint1_12));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[4], check_hlds__mode_constraint_robdd__Var_19, &check_hlds__mode_constraint_robdd__InputNodes_16);
    }
    {
      check_hlds__mode_constraint_robdd__Var_23 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_constraint_robdd__InputNodes_16);
    }
    check_hlds__mode_constraint_robdd__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_17, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_53));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_55));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_56));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_57));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_58));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_60));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_61));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_62));
    }
    {
      *check_hlds__mode_constraint_robdd__Constraint_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__Var_60, check_hlds__mode_constraint_robdd__Constraint0_5);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
    MR_Word check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56;

    {
      check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__2_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv2_HeadVar__4_56));
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
    MR_Word check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63;

    {
      check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__304__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv1_HeadVar__3_63));
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__get_interesting_vars_for_pred__304__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_2;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;
    MR_Word check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60;

    {
      check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60 = check_hlds__mode_constraint_robdd__IntroducedFrom__func__get_interesting_vars_for_pred__303__1_1_f_0(((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    check_hlds__mode_constraint_robdd__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_constraint_robdd__conv0_HeadVar__2_60));
    return check_hlds__mode_constraint_robdd__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
  MR_Word check_hlds__mode_constraint_robdd__PredId_5,
  MR_Word * check_hlds__mode_constraint_robdd__Vars_6)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__MinVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12;
    MR_Word check_hlds__mode_constraint_robdd__Var_14;
    MR_Word check_hlds__mode_constraint_robdd__Var_15;
    MR_Word check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

    {
      check_hlds__mode_constraint_robdd__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_15, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
    }
    {
      check_hlds__mode_constraint_robdd__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_14, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_14, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_15));
    }
    {
      check_hlds__mode_constraint_robdd__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_12, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_12, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__get_interesting_vars_for_pred_3_p_0_4));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_12, 3) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Var_12, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14));
    }
    {
      *check_hlds__mode_constraint_robdd__Vars_6 = check_hlds__mode_constraint_robdd__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_101_115_116_105_110_103_95_118_97_114_115_95_102_111_114_95_112_114_101_100_95_95_51_48_55_95_95_50_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(check_hlds__mode_constraint_robdd__Var_12, check_hlds__mode_constraint_robdd__VarSet_9);
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_max_var_for_pred_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_4,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
    MR_Word check_hlds__mode_constraint_robdd__MaxVars0_7;
    MR_Word check_hlds__mode_constraint_robdd__MaxVars_8;
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13;
    MR_Word check_hlds__mode_constraint_robdd__Var_14;
    MR_Word check_hlds__mode_constraint_robdd__Var_15;
    MR_Word check_hlds__mode_constraint_robdd__Var_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_17;
    MR_Word check_hlds__mode_constraint_robdd__Var_18;
    MR_Word check_hlds__mode_constraint_robdd__Var_19;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_21;
    MR_Word check_hlds__mode_constraint_robdd__Var_22;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;
    MR_Word check_hlds__mode_constraint_robdd__Var_24;
    MR_Word check_hlds__mode_constraint_robdd__Var_25;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_29;
    MR_Word check_hlds__mode_constraint_robdd__Var_30;
    MR_Word check_hlds__mode_constraint_robdd__Var_31;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;

    {
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
    check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__MaxVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MaxVars0_7, &check_hlds__mode_constraint_robdd__MaxVars_8);
    }
    check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__MaxVars_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_30));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_31));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_min_var_for_pred_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_4,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Threshold_6;
    MR_Word check_hlds__mode_constraint_robdd__MinVars0_7;
    MR_Word check_hlds__mode_constraint_robdd__MinVars_8;
    MR_Word check_hlds__mode_constraint_robdd__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13;
    MR_Word check_hlds__mode_constraint_robdd__Var_14;
    MR_Word check_hlds__mode_constraint_robdd__Var_15;
    MR_Word check_hlds__mode_constraint_robdd__Var_16;
    MR_Word check_hlds__mode_constraint_robdd__Var_17;
    MR_Word check_hlds__mode_constraint_robdd__Var_18;
    MR_Word check_hlds__mode_constraint_robdd__Var_19;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_21;
    MR_Word check_hlds__mode_constraint_robdd__Var_22;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;
    MR_Word check_hlds__mode_constraint_robdd__Var_24;
    MR_Word check_hlds__mode_constraint_robdd__Var_25;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_29;
    MR_Word check_hlds__mode_constraint_robdd__Var_30;
    MR_Word check_hlds__mode_constraint_robdd__Var_31;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;

    {
      check_hlds__mode_constraint_robdd__Threshold_6 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_35);
    }
    check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__MinVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    {
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_4)), ((MR_Box) (check_hlds__mode_constraint_robdd__Threshold_6)), check_hlds__mode_constraint_robdd__MinVars0_7, &check_hlds__mode_constraint_robdd__MinVars_8);
    }
    check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_9, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MinVars_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_30));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_31));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1(
  MR_Box check_hlds__mode_constraint_robdd__closure_arg,
  MR_Box check_hlds__mode_constraint_robdd__wrapper_arg_1)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Box check_hlds__mode_constraint_robdd__closure = check_hlds__mode_constraint_robdd__closure_arg;

    {
      check_hlds__mode_constraint_robdd__succeeded = check_hlds__mode_constraint_robdd__IntroducedFrom__pred__restrict_filter__278__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_constraint_robdd__wrapper_arg_1));
    }
    return check_hlds__mode_constraint_robdd__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_filter_3_f_0(
  MR_Word check_hlds__mode_constraint_robdd__P0_5,
  MR_Word check_hlds__mode_constraint_robdd__MCI_6,
  MR_Word check_hlds__mode_constraint_robdd__M_7)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__4_4;
    MR_Word check_hlds__mode_constraint_robdd__P_8;
    MR_Word check_hlds__mode_constraint_robdd__Var_13;

    {
      check_hlds__mode_constraint_robdd__Var_13 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__M_7);
    }
    {
      check_hlds__mode_constraint_robdd__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 0) = ((MR_Box) (&check_hlds__mode_constraint_robdd_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__restrict_filter_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__P0_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__P_8, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__MCI_6));
    }
    {
      check_hlds__mode_constraint_robdd__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__P_8, check_hlds__mode_constraint_robdd__Var_13);
    }
    return check_hlds__mode_constraint_robdd__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__restrict_threshold_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__Constraint_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
    MR_Word check_hlds__mode_constraint_robdd__Threshold_4 = (MR_Word) check_hlds__mode_constraint_robdd__HeadVar__1_1;
    MR_Word check_hlds__mode_constraint_robdd__Var_6;

    {
      check_hlds__mode_constraint_robdd__Var_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_constraint_robdd__Constraint_5);
    }
    {
      check_hlds__mode_constraint_robdd__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_constraint_robdd__Threshold_4, check_hlds__mode_constraint_robdd__Var_6);
    }
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__save_threshold_2_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_3,
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__VarSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_5;
    MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_3, (MR_Integer) 9)));

    {
      check_hlds__mode_constraint_robdd__Var_5 = mercury__varset__max_var_1_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__VarSet_4);
    }
    *check_hlds__mode_constraint_robdd__HeadVar__2_2 = (MR_Word) check_hlds__mode_constraint_robdd__Var_5;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__set_level_from_var_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__HeadVar__1_1,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd___Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_16));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_18));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_19));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_21));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__get_prog_var_level_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
  MR_Word check_hlds__mode_constraint_robdd__Var_5,
  MR_Word * check_hlds__mode_constraint_robdd__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_7));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__leave_lambda_goal_2_p_0(
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath_6;
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd___GoalPath_5;
    MR_Box check_hlds__mode_constraint_robdd__conv0__GoalPath_5;
    MR_Word check_hlds__mode_constraint_robdd__Var_19;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_21;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;
    MR_Word check_hlds__mode_constraint_robdd__Var_24;
    MR_Word check_hlds__mode_constraint_robdd__Var_25;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_22;

    {
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_constraint_robdd__conv0__GoalPath_5, check_hlds__mode_constraint_robdd__LambdaPath0_4, &check_hlds__mode_constraint_robdd__LambdaPath_6);
    }
    check_hlds__mode_constraint_robdd___GoalPath_5 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0__GoalPath_5);
    check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__LambdaPath_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_26));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_27));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_28));
    }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__enter_lambda_goal_3_p_0(
  MR_Word check_hlds__mode_constraint_robdd__GoalId_4,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__LambdaPath0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10;
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_21;
    MR_Word check_hlds__mode_constraint_robdd__Var_22;
    MR_Word check_hlds__mode_constraint_robdd__Var_24;
    MR_Word check_hlds__mode_constraint_robdd__Var_25;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_29;
    MR_Word check_hlds__mode_constraint_robdd__Var_23;

    {
      check_hlds__mode_constraint_robdd__Var_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_constraint_robdd__LambdaPath0_6, ((MR_Box) (check_hlds__mode_constraint_robdd__GoalId_4)));
    }
    check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 0)));
    check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 1)));
    check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 2)));
    check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 3)));
    check_hlds__mode_constraint_robdd__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 4)));
    check_hlds__mode_constraint_robdd__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 5)));
    check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 6)));
    check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 7)));
    check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 8)));
    check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_7, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_28));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_29));
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
  MR_Word check_hlds__mode_constraint_robdd__RepVar_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_6;
    MR_Word check_hlds__mode_constraint_robdd__Key_7;
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
    MR_Box check_hlds__mode_constraint_robdd__conv0_Var_6;

    {
      check_hlds__mode_constraint_robdd__Key_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_8));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_7, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
    }
    {
      mercury__bimap__lookup_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__Var_12, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_7)), &check_hlds__mode_constraint_robdd__conv0_Var_6);
    }
    check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_Var_6);
    return check_hlds__mode_constraint_robdd__Var_6;
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(
  MR_Word check_hlds__mode_constraint_robdd__PredId_6,
  MR_Word check_hlds__mode_constraint_robdd__RepVar0_7,
  MR_Word * check_hlds__mode_constraint_robdd__RobddVar_8,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded = ((MR_tag((MR_Word) check_hlds__mode_constraint_robdd__RepVar0_7)) == (MR_mktag((MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100;
    MR_Word check_hlds__mode_constraint_robdd__ProgVar_10;
    MR_Word check_hlds__mode_constraint_robdd__Var_20;
    MR_Word check_hlds__mode_constraint_robdd__Var_11;
    MR_Word check_hlds__mode_constraint_robdd__Var_26;
    MR_Word check_hlds__mode_constraint_robdd__Var_27;
    MR_Word check_hlds__mode_constraint_robdd__Var_28;
    MR_Word check_hlds__mode_constraint_robdd__Var_29;
    MR_Word check_hlds__mode_constraint_robdd__Var_30;
    MR_Word check_hlds__mode_constraint_robdd__Var_31;
    MR_Word check_hlds__mode_constraint_robdd__Var_32;
    MR_Word check_hlds__mode_constraint_robdd__Var_33;
    MR_Word check_hlds__mode_constraint_robdd__Var_34;

    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        check_hlds__mode_constraint_robdd__ProgVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 0)));
        check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_constraint_robdd__RepVar0_7, (MR_Integer) 1)));
        check_hlds__mode_constraint_robdd__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
        check_hlds__mode_constraint_robdd__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
        check_hlds__mode_constraint_robdd__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
        check_hlds__mode_constraint_robdd__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
        check_hlds__mode_constraint_robdd__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
        check_hlds__mode_constraint_robdd__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
        check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
        check_hlds__mode_constraint_robdd__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
        check_hlds__mode_constraint_robdd__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
        check_hlds__mode_constraint_robdd__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
        check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          check_hlds__mode_constraint_robdd__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_100_100, check_hlds__mode_constraint_robdd__Var_20, check_hlds__mode_constraint_robdd__ProgVar_10);
        }
      }
    if (check_hlds__mode_constraint_robdd__succeeded)
      {
        *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__Var_108;
        *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
      }
    else
      {
        MR_Word check_hlds__mode_constraint_robdd__Key_14;
        MR_Word check_hlds__mode_constraint_robdd__RobddVar0_15;
        MR_Word check_hlds__mode_constraint_robdd__Var_21;
        MR_Word check_hlds__mode_constraint_robdd__Var_53;
        MR_Word check_hlds__mode_constraint_robdd__Var_54;
        MR_Word check_hlds__mode_constraint_robdd__Var_55;
        MR_Word check_hlds__mode_constraint_robdd__Var_56;
        MR_Word check_hlds__mode_constraint_robdd__Var_57;
        MR_Word check_hlds__mode_constraint_robdd__Var_58;
        MR_Word check_hlds__mode_constraint_robdd__Var_59;
        MR_Word check_hlds__mode_constraint_robdd__Var_60;
        MR_Word check_hlds__mode_constraint_robdd__Var_61;
        MR_Box check_hlds__mode_constraint_robdd__conv0_RobddVar0_15;

        {
          check_hlds__mode_constraint_robdd__Key_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__RepVar0_7));
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_6));
          MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__Key_14, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_112));
        }
        check_hlds__mode_constraint_robdd__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
        check_hlds__mode_constraint_robdd__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
        check_hlds__mode_constraint_robdd__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
        check_hlds__mode_constraint_robdd__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
        check_hlds__mode_constraint_robdd__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
        check_hlds__mode_constraint_robdd__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
        check_hlds__mode_constraint_robdd__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
        check_hlds__mode_constraint_robdd__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
        check_hlds__mode_constraint_robdd__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
        check_hlds__mode_constraint_robdd__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
        {
          check_hlds__mode_constraint_robdd__succeeded = mercury__bimap__search_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], check_hlds__mode_constraint_robdd__Var_21, ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), &check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
        }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            check_hlds__mode_constraint_robdd__RobddVar0_15 = ((MR_Word) check_hlds__mode_constraint_robdd__conv0_RobddVar0_15);
            check_hlds__mode_constraint_robdd__succeeded = MR_TRUE;
          }
        if (check_hlds__mode_constraint_robdd__succeeded)
          {
            *check_hlds__mode_constraint_robdd__RobddVar_8 = check_hlds__mode_constraint_robdd__RobddVar0_15;
            *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18;
          }
        else
          {
            MR_Word check_hlds__mode_constraint_robdd__NewVarSet_16;
            MR_Word check_hlds__mode_constraint_robdd__NewVarMap_17;
            MR_Word check_hlds__mode_constraint_robdd__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
            MR_Word check_hlds__mode_constraint_robdd__Var_23;
            MR_Word check_hlds__mode_constraint_robdd__Var_82;
            MR_Word check_hlds__mode_constraint_robdd__Var_83;
            MR_Word check_hlds__mode_constraint_robdd__Var_84;
            MR_Word check_hlds__mode_constraint_robdd__Var_85;
            MR_Word check_hlds__mode_constraint_robdd__Var_86;
            MR_Word check_hlds__mode_constraint_robdd__Var_87;
            MR_Word check_hlds__mode_constraint_robdd__Var_88;
            MR_Word check_hlds__mode_constraint_robdd__Var_89;
            MR_Word check_hlds__mode_constraint_robdd__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
            MR_Word check_hlds__mode_constraint_robdd__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
            MR_Word check_hlds__mode_constraint_robdd__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
            MR_Word check_hlds__mode_constraint_robdd__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
            MR_Word check_hlds__mode_constraint_robdd__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
            MR_Word check_hlds__mode_constraint_robdd__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
            MR_Word check_hlds__mode_constraint_robdd__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
            MR_Word check_hlds__mode_constraint_robdd__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
            MR_Word check_hlds__mode_constraint_robdd__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
            MR_Word check_hlds__mode_constraint_robdd__Var_71;
            MR_Word check_hlds__mode_constraint_robdd__Var_72;
            MR_Word check_hlds__mode_constraint_robdd__Var_73;
            MR_Word check_hlds__mode_constraint_robdd__Var_74;
            MR_Word check_hlds__mode_constraint_robdd__Var_75;
            MR_Word check_hlds__mode_constraint_robdd__Var_76;
            MR_Word check_hlds__mode_constraint_robdd__Var_77;
            MR_Word check_hlds__mode_constraint_robdd__Var_78;
            MR_Word check_hlds__mode_constraint_robdd__Var_79;
            MR_Word check_hlds__mode_constraint_robdd__Var_80;
            MR_Word check_hlds__mode_constraint_robdd__Var_81;

            {
              mercury__varset__new_var_3_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0, check_hlds__mode_constraint_robdd__RobddVar_8, check_hlds__mode_constraint_robdd__Var_22, &check_hlds__mode_constraint_robdd__NewVarSet_16);
            }
            check_hlds__mode_constraint_robdd__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
            check_hlds__mode_constraint_robdd__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
            check_hlds__mode_constraint_robdd__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
            check_hlds__mode_constraint_robdd__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
            check_hlds__mode_constraint_robdd__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
            check_hlds__mode_constraint_robdd__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
            check_hlds__mode_constraint_robdd__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
            check_hlds__mode_constraint_robdd__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
            check_hlds__mode_constraint_robdd__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
            check_hlds__mode_constraint_robdd__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
            {
              mercury__bimap__set_4_p_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0], ((MR_Box) (check_hlds__mode_constraint_robdd__Key_14)), ((MR_Box) (*check_hlds__mode_constraint_robdd__RobddVar_8)), check_hlds__mode_constraint_robdd__Var_23, &check_hlds__mode_constraint_robdd__NewVarMap_17);
            }
            check_hlds__mode_constraint_robdd__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 0)));
            check_hlds__mode_constraint_robdd__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 1)));
            check_hlds__mode_constraint_robdd__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 2)));
            check_hlds__mode_constraint_robdd__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 3)));
            check_hlds__mode_constraint_robdd__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 4)));
            check_hlds__mode_constraint_robdd__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 5)));
            check_hlds__mode_constraint_robdd__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 6)));
            check_hlds__mode_constraint_robdd__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 7)));
            check_hlds__mode_constraint_robdd__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 8)));
            check_hlds__mode_constraint_robdd__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_18, (MR_Integer) 9)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_19 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarSet_16));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__NewVarMap_17));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_82));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_83));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_84));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_85));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_86));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_87));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_88));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_89));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mode_constraint_robdd__mode_constraint_var_4_p_0(
  MR_Word check_hlds__mode_constraint_robdd__RepVar0_5,
  MR_Word * check_hlds__mode_constraint_robdd__RobddVar_6,
  MR_Word check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8,
  MR_Word * check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, (MR_Integer) 9)));

    {
      check_hlds__mode_constraint_robdd__mode_constraint_var_5_p_0(check_hlds__mode_constraint_robdd__Var_10, check_hlds__mode_constraint_robdd__RepVar0_5, check_hlds__mode_constraint_robdd__RobddVar_6, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_0_8, check_hlds__mode_constraint_robdd__STATE_VARIABLE_MCI_9);
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__mci_set_pred_id_2_f_0(
  MR_Word check_hlds__mode_constraint_robdd__MCI_4,
  MR_Word check_hlds__mode_constraint_robdd__PredId_5)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__HeadVar__3_3;
    MR_Word check_hlds__mode_constraint_robdd__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 0)));
    MR_Word check_hlds__mode_constraint_robdd__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 1)));
    MR_Word check_hlds__mode_constraint_robdd__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 3)));
    MR_Word check_hlds__mode_constraint_robdd__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 4)));
    MR_Word check_hlds__mode_constraint_robdd__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 5)));
    MR_Word check_hlds__mode_constraint_robdd__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 6)));
    MR_Word check_hlds__mode_constraint_robdd__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 7)));
    MR_Word check_hlds__mode_constraint_robdd__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 8)));
    MR_Word check_hlds__mode_constraint_robdd__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 9)));
    MR_Word check_hlds__mode_constraint_robdd__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, (MR_Integer) 2)));

    {
      check_hlds__mode_constraint_robdd__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_6));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_5));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_11));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__HeadVar__3_3, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_15));
    }
    return check_hlds__mode_constraint_robdd__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
check_hlds__mode_constraint_robdd__init_mode_constraint_info_1_f_0(
  MR_Word check_hlds__mode_constraint_robdd__Simple_3)
{
  {
    MR_bool check_hlds__mode_constraint_robdd__succeeded;
    MR_Word check_hlds__mode_constraint_robdd__MCI_4;
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word check_hlds__mode_constraint_robdd__TypeInfo_17_17;
    MR_Word check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19;
    MR_Word check_hlds__mode_constraint_robdd__VarSet0_5;
    MR_Word check_hlds__mode_constraint_robdd__ZeroVar_6;
    MR_Word check_hlds__mode_constraint_robdd__VarSet_7;
    MR_Word check_hlds__mode_constraint_robdd__PredId_8;
    MR_Word check_hlds__mode_constraint_robdd__Var_9;
    MR_Word check_hlds__mode_constraint_robdd__Var_10;
    MR_Word check_hlds__mode_constraint_robdd__Var_11;
    MR_Word check_hlds__mode_constraint_robdd__Var_12;
    MR_Word check_hlds__mode_constraint_robdd__Var_13;
    MR_Word check_hlds__mode_constraint_robdd__Var_14;

    {
      check_hlds__mode_constraint_robdd__VarSet0_5 = mercury__varset__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15);
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_15_15, &check_hlds__mode_constraint_robdd__ZeroVar_6, check_hlds__mode_constraint_robdd__VarSet0_5, &check_hlds__mode_constraint_robdd__VarSet_7);
    }
    {
      check_hlds__mode_constraint_robdd__PredId_8 = hlds__hlds_pred__initial_pred_id_0_f_0();
    }
    check_hlds__mode_constraint_robdd__TypeInfo_17_17 = (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_1[0];
    {
      check_hlds__mode_constraint_robdd__Var_9 = mercury__bimap__init_0_f_0((MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_varmap_key_0, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
    {
      check_hlds__mode_constraint_robdd__Var_10 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
    check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    {
      check_hlds__mode_constraint_robdd__Var_11 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
    {
      check_hlds__mode_constraint_robdd__Var_12 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, check_hlds__mode_constraint_robdd__TypeInfo_17_17);
    }
    {
      check_hlds__mode_constraint_robdd__Var_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      check_hlds__mode_constraint_robdd__Var_14 = mercury__map__init_0_f_0(check_hlds__mode_constraint_robdd__TypeCtorInfo_19_19, (MR_Word) &check_hlds__mode_constraint_robdd_scalar_common_2[0]);
    }
    {
      check_hlds__mode_constraint_robdd__MCI_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 0) = ((MR_Box) (check_hlds__mode_constraint_robdd__VarSet_7));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 1) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_9));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 2) = ((MR_Box) (check_hlds__mode_constraint_robdd__PredId_8));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 3) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_10));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 4) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_11));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 5) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 6) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_13));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 7) = ((MR_Box) (check_hlds__mode_constraint_robdd__ZeroVar_6));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 8) = ((MR_Box) (check_hlds__mode_constraint_robdd__Simple_3));
      MR_hl_field(MR_mktag(0), check_hlds__mode_constraint_robdd__MCI_4, 9) = ((MR_Box) (check_hlds__mode_constraint_robdd__Var_14));
    }
    return check_hlds__mode_constraint_robdd__MCI_4;
  }
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

/* :- end_module check_hlds.mode_constraint_robdd. */
