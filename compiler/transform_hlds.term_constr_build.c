/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2019-10-14
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


// :- module transform_hlds.term_constr_build.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_build__init
ENDINIT
*/

#include "transform_hlds.term_constr_build.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s {
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__ModuleInfo_8;
  MR_bool transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Args_19;
  jmp_buf transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Arg_22;
  MR_Box transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__conv0_Arg_22;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2];

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15];

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15];

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15];

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1];

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1];

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_10,
  MR_Word LambdaHeadVar__1_26,
  MR_Integer LambdaHeadVar__2_27,
  MR_Integer * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1222__1_1_p_0(
  MR_Integer LambdaHeadVar__1_29);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_3_p_0(
  MR_Word ConsName_45,
  MR_Integer ConsArity_46,
  MR_Word LambdaHeadVar__1_65);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1187__1_2_p_0(
  MR_Word TypeCtor_43,
  MR_Word ConsTypeCtor_47);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1149__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word HeadVar__2_176);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__943__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_127);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__834__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Integer * HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__471__1_1_f_0(
  MR_Word LambdaHeadVar__1_69);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__239__1_4_f_0(
  MR_Word ModuleInfo_10,
  MR_Word VarTypes_21,
  MR_Word LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0(
  MR_Word SizeVarset_14,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44,
  MR_Word LambdaHeadVar__4_45,
  MR_Word * LambdaHeadVar__5_46);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__178__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
  MR_Word Norm_6,
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word Constructor_9);

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
  MR_Word SizeVarMap_7,
  MR_Word Zeros_8,
  MR_Word Coeff_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Terms_0_13,
  MR_Word * STATE_VARIABLE_Terms_14);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Options_11,
  MR_Word SCC_12,
  MR_Word EntryProcs_13,
  MR_Word PPId_14,
  MR_Word STATE_VARIABLE_SizeVarset_0_43,
  MR_Word * STATE_VARIABLE_SizeVarset_44,
  MR_Word STATE_VARIABLE_AbstractInfo_0_45,
  MR_Word * STATE_VARIABLE_AbstractInfo_46);

static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
  MR_Word HeadProgVars_6,
  MR_Word Goal_7,
  MR_Word * SizeVarMap_8,
  MR_Word STATE_VARIABLE_SizeVarset_0_11,
  MR_Word * STATE_VARIABLE_SizeVarset_12);

static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SizeVarset_0_2,
  MR_Word * STATE_VARIABLE_SizeVarset_3,
  MR_Word STATE_VARIABLE_SizeVarMap_0_4,
  MR_Word * STATE_VARIABLE_SizeVarMap_5);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
  MR_Word SwitchProgVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AbstractGoals_0_3,
  MR_Word * STATE_VARIABLE_AbstractGoals_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractGoals_0_2,
  MR_Word * STATE_VARIABLE_AbstractGoals_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
  MR_Word Type_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
  MR_Word Info_4,
  MR_Word Goal_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word Var_10,
  MR_Word Constructors_11,
  MR_Word * Polyhedron_12);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word Var_9,
  MR_Word TypeCtor_10,
  MR_Word Ctors_11,
  MR_Word * Constraints_12);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
  MR_Word Unification_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
  MR_Word LeftProgVar_6,
  MR_Word RightProgVar_7,
  MR_Word * Constraints_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Word ArgVars_10,
  MR_Word Modes_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Args_0_9,
  MR_Word * STATE_VARIABLE_Args_10,
  MR_Word STATE_VARIABLE_Modes_0_11,
  MR_Word * STATE_VARIABLE_Modes_12);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
  MR_Word TermVar_6,
  MR_Word SubGoal_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
  MR_Word Constraints_3);

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SizeMap_0_5,
  MR_Word * STATE_VARIABLE_SizeMap_6);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalSize_0_2,
  MR_Integer * STATE_VARIABLE_TotalSize_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word ConsId_3);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word GoalInfo_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
  MR_Word RecType_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
  MR_Word Conjuncts_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
  MR_Word Context_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
  MR_Word ModuleInfo_12,
  MR_Word Norm_13,
  MR_Word PPId_14,
  MR_Word Context_15,
  MR_Word Types_16,
  MR_Word Zeros_17,
  MR_Word VarMap_18,
  MR_Word SCC_19,
  MR_Word FailConstrs_20,
  MR_Word ArgSizeOnly_21);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[12][3];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][7];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[6][5];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[1][4];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[2][6];




static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_2[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0 = {
  (MR_String) "switch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1 = {
  (MR_String) "non_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1
};

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____disj_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____disj_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "disj_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3] = {
  (MR_String) "tbo_functor_info",
  (MR_String) "tbo_failure_constrs",
  (MR_String) "tbo_arg_size_only"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 = {
  (MR_String) "term_build_options",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_build_options",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6] = {
  (MR_String) "tsi_scc_ppid",
  (MR_String) "tsi_proc",
  (MR_String) "tsi_size_var_map",
  (MR_String) "tsi_intermod",
  (MR_String) "tsi_accum_errors",
  (MR_String) "tsi_non_zero_heads"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0[6] = {
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
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 = {
  (MR_String) "term_scc_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_scc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_scc_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)
};

static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15] = {
  (MR_String) "tti_arg_analysis_only",
  (MR_String) "tti_find_fail_constrs",
  (MR_String) "tti_recursion",
  (MR_String) "tti_intermod_status",
  (MR_String) "tti_errors",
  (MR_String) "tti_module_info",
  (MR_String) "tti_norm",
  (MR_String) "tti_ppid",
  (MR_String) "tti_context",
  (MR_String) "tti_vartypes",
  (MR_String) "tti_zeros",
  (MR_String) "tti_size_var_map",
  (MR_String) "tti_scc",
  (MR_String) "tti_maxcalls",
  (MR_String) "tti_ho_info"
};

static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 = {
  (MR_String) "tti_traversal_info",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "tti_traversal_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0
};

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Arg_22 = ((MR_Word) ((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__conv0_Arg_22));
    transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Arg_22, (MR_Integer) 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Arg_22, (MR_Integer) 0))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Arg_22, (MR_Integer) 2))));

      (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__ModuleInfo_8, Var_31);
      (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded)
        transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), &(env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__conv0_Arg_22, (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Args_19, transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_10,
  MR_Word LambdaHeadVar__1_26,
  MR_Integer LambdaHeadVar__2_27,
  MR_Integer * LambdaHeadVar__3_28)
{
  {
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0_s env;

    (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__ModuleInfo_8 = ModuleInfo_8;
    {
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 2))));
      MR_Integer Arity_20;
      MR_Word ConsId_23;
      MR_Integer Bound_24;
      uint32_t Var_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0)));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 1))));
      MR_Word Var_21;

      (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 3))));
      Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 4))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 5))));
      transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_4(&env);
      (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = !((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded);
      if ((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded)
      {
        {
          ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_23, 1) = ((MR_Box) (SymName_18));
          MR_hl_field(MR_mktag(3), ConsId_23, 2) = ((MR_Box) (Arity_20));
          MR_hl_field(MR_mktag(3), ConsId_23, 3) = ((MR_Box) (TypeCtor_10));
        }
        Bound_24 = transform_hlds__term_norm__functor_lower_bound_4_f_0((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__ModuleInfo_8, Norm_7, TypeCtor_10, ConsId_23);
        (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = (Bound_24 > LambdaHeadVar__2_27);
        if ((env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded)
          *LambdaHeadVar__3_28 = Bound_24;
        else
          *LambdaHeadVar__3_28 = LambdaHeadVar__2_27;
        (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded = MR_TRUE;
      }
      return (env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1222__1_1_p_0(
  MR_Integer LambdaHeadVar__1_29)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_29 == (MR_Integer) 0);

    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_3_p_0(
  MR_Word ConsName_45,
  MR_Integer ConsArity_46,
  MR_Word LambdaHeadVar__1_65)
{
  {
    MR_bool succeeded;
    MR_Word SymName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 2))));
    MR_Integer Arity_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 4))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_52, ConsName_45);
    if (succeeded)
      succeeded = (Arity_54 == ConsArity_46);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1187__1_2_p_0(
  MR_Word TypeCtor_43,
  MR_Word ConsTypeCtor_47)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_43, ConsTypeCtor_47);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1149__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word HeadVar__2_176)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), HeadVar__1_71, ((MR_Box) (HeadVar__2_176)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__943__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_127)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), HeadVar__1_48, ((MR_Box) (HeadVar__2_127)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__834__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Integer * HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47)
{
  {
    MR_Box conv0_HeadVar__2_45;

    mercury__map__det_remove_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadVar__1_44)), &conv0_HeadVar__2_45, HeadVar__3_46, HeadVar__4_47);
    *HeadVar__2_45 = ((MR_Integer) (conv0_HeadVar__2_45));
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__471__1_1_f_0(
  MR_Word LambdaHeadVar__1_69)
{
  {
    MR_Word LambdaHeadVar__2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_69, (MR_Integer) 0))));

    return LambdaHeadVar__2_70;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__239__1_4_f_0(
  MR_Word ModuleInfo_10,
  MR_Word VarTypes_21,
  MR_Word LambdaHeadVar__1_57,
  MR_Word LambdaHeadVar__2_58)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__3_59;
    MR_Word Type_38;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_21, LambdaHeadVar__1_57, &Type_38);
    succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(ModuleInfo_10, Type_38);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_10, LambdaHeadVar__2_58);
    if (succeeded)
      LambdaHeadVar__3_59 = (MR_Integer) 1;
    else
      LambdaHeadVar__3_59 = (MR_Integer) 0;
    return LambdaHeadVar__3_59;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_64;

    conv2_LambdaHeadVar__2_64 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__178__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_64));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0(
  MR_Word SizeVarset_14,
  MR_Word LambdaHeadVar__1_42,
  MR_Word LambdaHeadVar__2_43,
  MR_Word * LambdaHeadVar__3_44,
  MR_Word LambdaHeadVar__4_45,
  MR_Word * LambdaHeadVar__5_46)
{
  {
    MR_bool succeeded;
    MR_Word PredId_20;
    MR_Integer ProcId_21;
    MR_Word AR0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1))));
    MR_Word VarMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 2))));
    MR_Word Status_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ProcErrors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 4))));
    MR_Word HeadSizeVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 5))));
    MR_Word AR_27;
    MR_Word PredInfo0_28;
    MR_Word ProcTable0_29;
    MR_Word ProcInfo0_30;
    MR_Word ProcInfo_34;
    MR_Word ProcTable_35;
    MR_Word PredInfo_36;
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Term2Info_52_52;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_Term2Info_54_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Term2Info_56_56;
    MR_Word STATE_VARIABLE_Term2Info_57_57;
    MR_Word STATE_VARIABLE_Term2Info_58_58;
    MR_Word STATE_VARIABLE_Term2Info_60_60;
    MR_Word STATE_VARIABLE_Errors_67_67;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Integer Var_88;
    MR_Word Var_89;
    MR_Unsigned packed_word_1;
    MR_Box conv0_PredInfo0_28;
    MR_Box conv1_ProcInfo0_30;

    PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
    ProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 2))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 3))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 5))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 7))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 8)));
    Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 9))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR0_22, (MR_Integer) 10))));
    {
      AR_27 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AR_27, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), AR_27, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), AR_27, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), AR_27, 3) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), AR_27, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), AR_27, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), AR_27, 6) = ((MR_Box) (SizeVarset_14));
      MR_hl_field(MR_mktag(0), AR_27, 7) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), AR_27, 8) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), AR_27, 9) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), AR_27, 10) = ((MR_Box) (Var_89));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), LambdaHeadVar__4_45, ((MR_Box) (PredId_20)), &conv0_PredInfo0_28);
    PredInfo0_28 = ((MR_Word) (conv0_PredInfo0_28));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_28, &ProcTable0_29);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_29, ((MR_Box) (ProcId_21)), &conv1_ProcInfo0_30);
    ProcInfo0_30 = ((MR_Word) (conv1_ProcInfo0_30));
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_30, &STATE_VARIABLE_Term2Info_52_52);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Status_24));
    }
    transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(Var_53, STATE_VARIABLE_Term2Info_52_52, &STATE_VARIABLE_Term2Info_54_54);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (AR_27));
    }
    transform_hlds__term_constr_main_types__term2_info_set_abstract_rep_3_p_0(Var_55, STATE_VARIABLE_Term2Info_54_54, &STATE_VARIABLE_Term2Info_56_56);
    transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(VarMap_23, STATE_VARIABLE_Term2Info_56_56, &STATE_VARIABLE_Term2Info_57_57);
    transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_26, STATE_VARIABLE_Term2Info_57_57, &STATE_VARIABLE_Term2Info_58_58);
    succeeded = transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(AR_27);
    if (succeeded)
    {
      MR_Word HorderErrors_32;
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_66;

      Var_61 = libs__polyhedron__universe_0_f_0();
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_61));
      }
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_59, STATE_VARIABLE_Term2Info_58_58, &STATE_VARIABLE_Term2Info_60_60);
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AR_27, (MR_Integer) 10))));
      HorderErrors_32 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0), (MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[11]), Var_66);
      mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), HorderErrors_32, LambdaHeadVar__2_43, &STATE_VARIABLE_Errors_67_67);
    }
    else
    {
      STATE_VARIABLE_Term2Info_60_60 = STATE_VARIABLE_Term2Info_58_58;
      STATE_VARIABLE_Errors_67_67 = LambdaHeadVar__2_43;
    }
    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_60_60, ProcInfo0_30, &ProcInfo_34);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_21)), ((MR_Box) (ProcInfo_34)), ProcTable0_29, &ProcTable_35);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_35, PredInfo0_28, &PredInfo_36);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_20)), ((MR_Box) (PredInfo_36)), LambdaHeadVar__4_45, LambdaHeadVar__5_46);
    mercury__list__append_3_p_1((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), ProcErrors_25, STATE_VARIABLE_Errors_67_67, LambdaHeadVar__3_44);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__178__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  {
    MR_Word LambdaHeadVar__2_64;
    MR_Word Context_72 = (MR_Word) (LambdaHeadVar__1_63);

    {
      LambdaHeadVar__2_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_64, 0) = ((MR_Box) (Context_72));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_64, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    }
    return LambdaHeadVar__2_64;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word SubResult1_6;
      MR_Integer Var_65 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_66 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_65 < Var_66);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_65 > Var_66);
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
      {
        MR_Word SubResult2_9;
        MR_Integer Var_67 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_68 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_67 < Var_68);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_67 > Var_68);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_69 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_70 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_69 < Var_70);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_69 > Var_70);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_71 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_72 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_71 < Var_72);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_71 > Var_72);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                hlds__hlds_module____Compare____module_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  transform_hlds__term_norm____Compare____functor_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__term____Compare____context_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[9]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[10]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                succeeded = (ArgX14_43 < ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX14_43 > ArgY14_44);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
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
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_35_35;
      MR_Word TypeCtorInfo_40_40;
      MR_Word TypeInfo_41_41;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_35_35 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX8_17, ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = mercury__term____Unify____context_0_0(ArgX9_19, ArgY9_20);
                      if (succeeded)
                      {
                        TypeCtorInfo_40_40 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_40_40, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_41_41 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[9]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_42_42 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_43_43 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[10]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  TypeInfo_44_44 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[11]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
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
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      transform_hlds__term_norm____Compare____functor_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

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
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_16)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_11_11 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
  MR_Word Norm_6,
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word Constructor_9)
{
  {
    MR_Integer LowerBound_10;
    MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constructor_9, (MR_Integer) 2))));
    MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Constructor_9, (MR_Integer) 4))));
    MR_Word ConsId_17;

    {
      ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_17, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(3), ConsId_17, 2) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(3), ConsId_17, 3) = ((MR_Box) (TypeCtor_8));
    }
    LowerBound_10 = transform_hlds__term_norm__functor_lower_bound_4_f_0(ModuleInfo_7, Norm_6, TypeCtor_8, ConsId_17);
    return LowerBound_10;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
  MR_Word SizeVarMap_7,
  MR_Word Zeros_8,
  MR_Word Coeff_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_Terms_0_13,
  MR_Word * STATE_VARIABLE_Terms_14)
{
  {
    MR_bool succeeded;
    MR_Word SizeVar_12;

    SizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_7, Var_10);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SizeVar_12)), Zeros_8);
    if (succeeded)
      *STATE_VARIABLE_Terms_14 = STATE_VARIABLE_Terms_0_13;
    else
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SizeVar_12));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Coeff_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Terms_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Terms_0_13));
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_59;

    conv0_LambdaHeadVar__3_59 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__239__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_59));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Options_11,
  MR_Word SCC_12,
  MR_Word EntryProcs_13,
  MR_Word PPId_14,
  MR_Word STATE_VARIABLE_SizeVarset_0_43,
  MR_Word * STATE_VARIABLE_SizeVarset_44,
  MR_Word STATE_VARIABLE_AbstractInfo_0_45,
  MR_Word * STATE_VARIABLE_AbstractInfo_46)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_18;
    MR_Word ProcInfo_19;
    MR_Word Context_20;
    MR_Word VarTypes_21;
    MR_Word HeadProgVars_22;
    MR_Word ArgModes0_23;
    MR_Word Goal0_24;
    MR_Word Goal_25;
    MR_Word SizeVarMap_26;
    MR_Word Zeros_27;
    MR_Word Info0_28;
    MR_Word AbstractBody0_29;
    MR_Word Info_30;
    MR_Word IntermodStatus_31;
    MR_Word HeadSizeVars_32;
    MR_Word AbstractBody_33;
    MR_Word ChooseArg_34;
    MR_Word Inputs_39;
    MR_Word IsEntryPoint_40;
    MR_Word AbstractProc_41;
    MR_Word ThisProcInfo_42;
    MR_Word Var_54;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_97;
    MR_Integer Var_106;
    MR_Word Var_107;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_10, PPId_14, &PredInfo_18, &ProcInfo_19);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_18, &Context_20);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_19, &VarTypes_21);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_19, &HeadProgVars_22);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_19, &ArgModes0_23);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_19, &Goal0_24);
    Goal_25 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(Goal0_24);
    transform_hlds__term_constr_build__allocate_sizevars_5_p_0(HeadProgVars_22, Goal_25, &SizeVarMap_26, STATE_VARIABLE_SizeVarset_0_43, STATE_VARIABLE_SizeVarset_44);
    Zeros_27 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_10, SizeVarMap_26, VarTypes_21);
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Options_11, (MR_Integer) 0))));
    Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Options_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Options_11, (MR_Integer) 1))) & (MR_Integer) 1);
    Info0_28 = transform_hlds__term_constr_build__init_traversal_info_10_f_0(ModuleInfo_10, Var_54, PPId_14, Context_20, VarTypes_21, Zeros_27, SizeVarMap_26, SCC_12, Var_74, Var_75);
    transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Goal_25, &AbstractBody0_29, Info0_28, &Info_30);
    IntermodStatus_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_30, (MR_Integer) 0))) & (MR_Integer) 1);
    HeadSizeVars_32 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_26, HeadProgVars_22);
    AbstractBody_33 = transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(AbstractBody0_29);
    {
      ChooseArg_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ChooseArg_34, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), ChooseArg_34, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1));
      MR_hl_field(MR_mktag(0), ChooseArg_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ChooseArg_34, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), ChooseArg_34, 4) = ((MR_Box) (VarTypes_21));
    }
    Inputs_39 = mercury__list__map_corresponding_3_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ChooseArg_34, HeadProgVars_22, ArgModes0_23);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PPId_14)), EntryProcs_13);
    if (succeeded)
      IsEntryPoint_40 = (MR_Integer) 1;
    else
      IsEntryPoint_40 = (MR_Integer) 0;
    Var_60 = (MR_Word) (PPId_14);
    Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_30, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_30, (MR_Integer) 1))));
    Var_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_30, (MR_Integer) 10))));
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_30, (MR_Integer) 11))));
    {
      AbstractProc_41 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AbstractProc_41, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 1) = ((MR_Box) (Context_20));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 2) = ((MR_Box) (HeadSizeVars_32));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 3) = ((MR_Box) (Inputs_39));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 4) = ((MR_Box) (AbstractBody_33));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 5) = ((MR_Box) (SizeVarMap_26));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 6) = ((MR_Box) (*STATE_VARIABLE_SizeVarset_44));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 7) = ((MR_Box) (Zeros_27));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 8) = (MR_Box) (((((MR_Unsigned) (IsEntryPoint_40) << 2)) | (MR_Unsigned) (Var_61)));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 9) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), AbstractProc_41, 10) = ((MR_Box) (Var_107));
    }
    {
      ThisProcInfo_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 0) = ((MR_Box) (PPId_14));
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 1) = ((MR_Box) (AbstractProc_41));
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 2) = ((MR_Box) (SizeVarMap_26));
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 3) = (MR_Box) ((MR_Unsigned) (IntermodStatus_31));
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 4) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), ThisProcInfo_42, 5) = ((MR_Box) (HeadSizeVars_32));
    }
    mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0), ((MR_Box) (ThisProcInfo_42)), STATE_VARIABLE_AbstractInfo_0_45, STATE_VARIABLE_AbstractInfo_46);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
  MR_Word HeadProgVars_6,
  MR_Word Goal_7,
  MR_Word * SizeVarMap_8,
  MR_Word STATE_VARIABLE_SizeVarset_0_11,
  MR_Word * STATE_VARIABLE_SizeVarset_12)
{
  {
    MR_Word SizeVarMap0_10;
    MR_Word STATE_VARIABLE_SizeVarset_13_13;
    MR_Word ProgVarsInGoal_20;
    MR_Word ProgVars_21;

    ProgVarsInGoal_20 = hlds__quantification__free_goal_vars_1_f_0(Goal_7);
    ProgVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsInGoal_20);
    transform_hlds__term_constr_util__make_size_var_map_4_p_0(ProgVars_21, STATE_VARIABLE_SizeVarset_0_11, &STATE_VARIABLE_SizeVarset_13_13, &SizeVarMap0_10);
    transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(HeadProgVars_6, STATE_VARIABLE_SizeVarset_13_13, STATE_VARIABLE_SizeVarset_12, SizeVarMap0_10, SizeVarMap_8);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SizeVarset_0_2,
  MR_Word * STATE_VARIABLE_SizeVarset_3,
  MR_Word STATE_VARIABLE_SizeVarMap_0_4,
  MR_Word * STATE_VARIABLE_SizeVarMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SizeVarMap_5 = STATE_VARIABLE_SizeVarMap_0_4;
      *STATE_VARIABLE_SizeVarset_3 = STATE_VARIABLE_SizeVarset_0_2;
    }
    else
    {
      MR_Word ProgVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProgVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box conv0_Var_16;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), STATE_VARIABLE_SizeVarMap_0_4, ((MR_Box) (ProgVar_12)), &conv0_Var_16);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = ProgVars_13;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word SizeVar_17;
        MR_Word STATE_VARIABLE_SizeVarset_24_24;
        MR_Word STATE_VARIABLE_SizeVarMap_25_25;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_SizeVarset_0_2;
        MR_Word next_value_of_STATE_VARIABLE_SizeVarMap_0_4;

        mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &SizeVar_17, STATE_VARIABLE_SizeVarset_0_2, &STATE_VARIABLE_SizeVarset_24_24);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (ProgVar_12)), ((MR_Box) (SizeVar_17)), STATE_VARIABLE_SizeVarMap_0_4, &STATE_VARIABLE_SizeVarMap_25_25);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = ProgVars_13;
        next_value_of_STATE_VARIABLE_SizeVarset_0_2 = STATE_VARIABLE_SizeVarset_24_24;
        next_value_of_STATE_VARIABLE_SizeVarMap_0_4 = STATE_VARIABLE_SizeVarMap_25_25;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_SizeVarset_0_2 = next_value_of_STATE_VARIABLE_SizeVarset_0_2;
        STATE_VARIABLE_SizeVarMap_0_4 = next_value_of_STATE_VARIABLE_SizeVarMap_0_4;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_70;

    conv0_LambdaHeadVar__2_70 = transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__471__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_70));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
  MR_Word GoalExpr_6,
  MR_Word GoalInfo_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_111 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word Var_39;

          transform_hlds__term_constr_build__build_abstract_goal_4_p_0(SubGoal_111, &Var_39, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
          *AbstractGoal_8 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(*STATE_VARIABLE_Info_62, SubGoal_111);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

          transform_hlds__term_constr_build__build_abstract_unification_4_p_0(Unification_37, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
          MR_Integer CallProcId_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
          MR_Word CallArgs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
          MR_Word CallSizeArgs_33;
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 8))));
          MR_Word Var_85;

          CallSizeArgs_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_84, CallArgs_29);
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (CallPredId_27));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (CallProcId_28));
          }
          transform_hlds__term_constr_build__build_abstract_call_6_p_0(Var_85, CallSizeArgs_33, GoalInfo_7, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_65;
              MR_Word Context_113;

              Context_113 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
              Var_65 = libs__polyhedron__universe_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *AbstractGoal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              transform_hlds__term_constr_build__info_update_ho_info_3_p_0(Context_113, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attrs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word PredId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Integer ProcId_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Args_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word ProgVars_49;
              MR_Word SizeVars_50;
              MR_Word Constraints_51;
              MR_Word Polyhedron_54;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;

              Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_43, ExtraArgs_44);
              ProgVars_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[10]), Var_71);
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 8))));
              SizeVars_50 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_72, ProgVars_49);
              Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_61, (MR_Integer) 7))));
              Constraints_51 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(SizeVars_50, Var_73);
              {
                MR_Word Var_76;

                Var_76 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_40);
                succeeded = (Var_76 == (MR_Integer) 0);
              }
              if (!(succeeded))
              {
                MR_Word Var_74;
                MR_Word Var_75;

                Var_74 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attrs_40);
                succeeded = (Var_74 == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_75 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attrs_40);
                  succeeded = (Var_75 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                *STATE_VARIABLE_Info_62 = STATE_VARIABLE_Info_0_61;
              else
              {
                MR_Word Context_52;
                MR_Word Error_53;
                MR_Word Var_77;
                MR_Word Var_78;

                Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
                {
                  Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (PredId_41));
                  MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ProcId_42));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (Var_78));
                }
                {
                  Error_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_53, 0) = ((MR_Box) (Context_52));
                  MR_hl_field(MR_mktag(0), Error_53, 1) = ((MR_Box) (Var_77));
                }
                transform_hlds__term_constr_build__tti_info_add_error_3_p_0(Error_53, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
              }
              Polyhedron_54 = libs__polyhedron__from_constraints_1_f_0(Constraints_51);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *AbstractGoal_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_54));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              transform_hlds__term_constr_build__build_abstract_conj_4_p_0(Goals_11, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_107;
              MR_Word Goals_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Goals_110));
              }
              transform_hlds__term_constr_build__build_abstract_disj_4_p_0(Var_107, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Var_105;

              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (SwitchVar_12));
                MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (Cases_14));
              }
              transform_hlds__term_constr_build__build_abstract_disj_4_p_0(Var_105, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word TermVar_26;
              MR_Word Var_87;

              succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 1))));
                Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_87 == (MR_Integer) 1);
              }
              if (succeeded)
                transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(TermVar_26, SubGoal_25, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
              else
                transform_hlds__term_constr_build__build_abstract_goal_4_p_0(SubGoal_25, AbstractGoal_8, STATE_VARIABLE_Info_0_61, STATE_VARIABLE_Info_62);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word AbstractSuccessGoal_19;
              MR_Word CondFail_20;
              MR_Word AbstractElse_21;
              MR_Word AbstractFailureGoal_22;
              MR_Word AbstractDisjuncts_23;
              MR_Word Var_90;
              MR_Word STATE_VARIABLE_Info_91_91;
              MR_Word Var_92;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_100;

              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Then_17));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Cond_16));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
              }
              transform_hlds__term_constr_build__build_abstract_conj_4_p_0(Var_90, &AbstractSuccessGoal_19, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_91_91);
              CondFail_20 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(STATE_VARIABLE_Info_91_91, Cond_16);
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Else_18, &AbstractElse_21, STATE_VARIABLE_Info_91_91, STATE_VARIABLE_Info_62);
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (AbstractElse_21));
                MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CondFail_20));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                AbstractFailureGoal_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AbstractFailureGoal_22, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(1), AbstractFailureGoal_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), AbstractFailureGoal_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (AbstractFailureGoal_22));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                AbstractDisjuncts_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AbstractDisjuncts_23, 0) = ((MR_Box) (AbstractSuccessGoal_19));
                MR_hl_field(MR_mktag(1), AbstractDisjuncts_23, 1) = ((MR_Box) (Var_100));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *AbstractGoal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AbstractDisjuncts_23));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
  MR_Word SwitchProgVar_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_AbstractGoals_0_3,
  MR_Word * STATE_VARIABLE_AbstractGoals_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_AbstractGoals_4 = STATE_VARIABLE_AbstractGoals_0_3;
    }
    else
    {
      MR_Word Case_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2))));
      MR_Word AbstractGoal0_22;
      MR_Word AbstractGoal_23;
      MR_Word STATE_VARIABLE_Info_42_42;
      MR_Word STATE_VARIABLE_AbstractGoals_51_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_AbstractGoals_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(Goal_21, &AbstractGoal0_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_42_42);
      succeeded = (OtherConsIds_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = transform_hlds__term_constr_build__detect_switch_var_3_p_0(Goal_21, SwitchProgVar_1, MainConsId_19);
      if (succeeded)
        AbstractGoal_23 = AbstractGoal0_22;
      else
      {
        MR_Word TypeMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
        MR_Word SizeVarMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 8))));
        MR_Word SwitchVarType_26;
        MR_Word SwitchSizeVar_27;
        MR_Word TypeCtor_28;
        MR_Word ModuleInfo_29;
        MR_Word Norm_30;
        MR_Word Zeros_31;
        MR_Integer Size_32;
        MR_Word ExtraConstr_33;
        MR_Word ExtraPoly_36;
        MR_Word ExtraGoal_37;
        MR_Word Var_46;
        MR_Word Var_47;

        hlds__vartypes__lookup_var_type_3_p_0(TypeMap_24, SwitchProgVar_1, &SwitchVarType_26);
        SwitchSizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_25, SwitchProgVar_1);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(SwitchVarType_26, &TypeCtor_28);
        ModuleInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
        Norm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
        Zeros_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
        Size_32 = transform_hlds__term_norm__functor_lower_bound_4_f_0(ModuleInfo_29, Norm_30, TypeCtor_28, MainConsId_19);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SwitchSizeVar_27)), Zeros_31);
        if (succeeded)
          ExtraConstr_33 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word SwitchVarConst_34;
          MR_Word SwitchVarConstr_35;

          SwitchVarConst_34 = libs__rat__rat_1_f_0(Size_32);
          succeeded = (Size_32 == (MR_Integer) 0);
          if (succeeded)
            SwitchVarConstr_35 = libs__lp_rational__make_var_const_eq_constraint_2_f_0(SwitchSizeVar_27, SwitchVarConst_34);
          else
            SwitchVarConstr_35 = libs__lp_rational__make_var_const_gte_constraint_2_f_0(SwitchSizeVar_27, SwitchVarConst_34);
          {
            ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExtraConstr_33, 0) = ((MR_Box) (SwitchVarConstr_35));
            MR_hl_field(MR_mktag(1), ExtraConstr_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        ExtraPoly_36 = libs__polyhedron__from_constraints_1_f_0(ExtraConstr_33);
        {
          ExtraGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ExtraGoal_37, 0) = ((MR_Box) (ExtraPoly_36));
          MR_hl_field(MR_mktag(3), ExtraGoal_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ExtraGoal_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (AbstractGoal0_22));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ExtraGoal_37));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          AbstractGoal_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbstractGoal_23, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), AbstractGoal_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), AbstractGoal_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (AbstractGoal_23)), STATE_VARIABLE_AbstractGoals_0_3, &STATE_VARIABLE_AbstractGoals_51_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_16;
      next_value_of_STATE_VARIABLE_AbstractGoals_0_3 = STATE_VARIABLE_AbstractGoals_51_51;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_42_42;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_AbstractGoals_0_3 = next_value_of_STATE_VARIABLE_AbstractGoals_0_3;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AbstractGoals_0_2,
  MR_Word * STATE_VARIABLE_AbstractGoals_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *STATE_VARIABLE_AbstractGoals_3 = STATE_VARIABLE_AbstractGoals_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word AbstractGoal_16;
      MR_Word STATE_VARIABLE_Info_21_21;
      MR_Word STATE_VARIABLE_AbstractGoals_22_22;
      MR_Word GoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
      MR_Word GoalInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
      MR_Word AbstractGoal0_33;
      MR_Word Locals0_34;
      MR_Word NonLocals0_35;
      MR_Word SizeVarMap_36;
      MR_Word Locals_37;
      MR_Word NonLocals_38;
      MR_Word GoalInfo_57;
      MR_Word NonLocals0_58;
      MR_Word QuantVars_59;
      MR_Word Var_61;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AbstractGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(GoalExpr_31, GoalInfo_32, &AbstractGoal0_33, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_21_21);
      GoalInfo_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
      NonLocals0_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_57);
      QuantVars_59 = hlds__quantification__free_goal_vars_1_f_0(Goal_12);
      Var_61 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantVars_59, NonLocals0_58);
      Locals0_34 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_61);
      NonLocals0_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_58);
      SizeVarMap_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 8))));
      Locals_37 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_36, Locals0_34);
      NonLocals_38 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_36, NonLocals0_35);
      AbstractGoal_16 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(AbstractGoal0_33, Locals_37, NonLocals_38);
      mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (AbstractGoal_16)), STATE_VARIABLE_AbstractGoals_0_2, &STATE_VARIABLE_AbstractGoals_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_AbstractGoals_0_2 = STATE_VARIABLE_AbstractGoals_22_22;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AbstractGoals_0_2 = next_value_of_STATE_VARIABLE_AbstractGoals_0_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
  MR_Word Type_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word AbstractGoals_9;

    if (((MR_tag((MR_Word) Type_5)) == (MR_Integer) 1))
    {
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_5, (MR_Integer) 0))));

      transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(Goals_8, (MR_Word) ((MR_Unsigned) 0U), &AbstractGoals_9, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    }
    else
    {
      MR_Word SwitchVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 1))));

      transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(SwitchVar_10, Cases_11, (MR_Word) ((MR_Unsigned) 0U), &AbstractGoals_9, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    }
    if ((AbstractGoals_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_27;

      Var_27 = libs__polyhedron__universe_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *AbstractGoal_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractGoals_9, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractGoals_9, (MR_Integer) 0))));

      if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
        *AbstractGoal_6 = Var_32;
      else
      {
        MR_Integer DisjSize_16;

        DisjSize_16 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), AbstractGoals_9);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *AbstractGoal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AbstractGoals_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (DisjSize_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Word AbstractGoal0_10;
    MR_Word Locals0_11;
    MR_Word NonLocals0_12;
    MR_Word SizeVarMap_13;
    MR_Word Locals_14;
    MR_Word NonLocals_15;
    MR_Word GoalInfo_36;
    MR_Word NonLocals0_37;
    MR_Word QuantVars_38;
    MR_Word Var_40;

    transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(GoalExpr_8, GoalInfo_9, &AbstractGoal0_10, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    GoalInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_36);
    QuantVars_38 = hlds__quantification__free_goal_vars_1_f_0(Goal_5);
    Var_40 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), QuantVars_38, NonLocals0_37);
    Locals0_11 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40);
    NonLocals0_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_37);
    SizeVarMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_17, (MR_Integer) 8))));
    Locals_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_13, Locals0_11);
    NonLocals_15 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_13, NonLocals0_12);
    *AbstractGoal_6 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(AbstractGoal0_10, Locals_14, NonLocals_15);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
  MR_Word Info_4,
  MR_Word Goal_5)
{
  {
    MR_bool succeeded;
    MR_Word AbstractGoal_6;
    MR_Word AbstractGoal0_7;
    MR_Word Var_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

    succeeded = (Var_13 == (MR_Integer) 1);
    if (succeeded)
      succeeded = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(Info_4, Goal_5, &AbstractGoal0_7);
    if (succeeded)
      AbstractGoal_6 = AbstractGoal0_7;
    else
    {
      MR_Word NonLocalProgVars0_8;
      MR_Word NonLocalProgVars_9;
      MR_Word NonLocalSizeVars_10;
      MR_Word Constraints_11;
      MR_Word FailPoly_12;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
      MR_Word Var_15;
      MR_Word Var_16;

      NonLocalProgVars0_8 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Var_14);
      NonLocalProgVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalProgVars0_8);
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));
      NonLocalSizeVars_10 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_15, NonLocalProgVars_9);
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7))));
      Constraints_11 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(NonLocalSizeVars_10, Var_16);
      FailPoly_12 = libs__polyhedron__from_constraints_1_f_0(Constraints_11);
      {
        AbstractGoal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), AbstractGoal_6, 0) = ((MR_Box) (FailPoly_12));
        MR_hl_field(MR_mktag(3), AbstractGoal_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), AbstractGoal_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return AbstractGoal_6;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1187__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1149__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
  MR_Word Info_4,
  MR_Word Goal_5,
  MR_Word * AbstractGoal_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));
    MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6))));

    if (((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 2))
    {
      MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
      MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
      MR_Word CallArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
      MR_Word CallSizeArgs0_16;
      MR_Word Zeros_17;
      MR_Word CallSizeArgs_18;
      MR_Word ModuleInfo_19;
      MR_Word ProcInfo_21;
      MR_Word Term2Info_22;
      MR_Word MaybeFailureConstrs_23;
      MR_Word FailureConstraints_24;
      MR_Word FailurePolyhedron_31;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_20;

      CallSizeArgs0_16 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(Var_184, CallArgs_11);
      Zeros_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7))));
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Zeros_17));
      }
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Var_71));
      }
      CallSizeArgs_18 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), Var_70, CallSizeArgs0_16);
      ModuleInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_19, PredId_9, ProcId_10, &Var_20, &ProcInfo_21);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_21, &Term2Info_22);
      MaybeFailureConstrs_23 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(Term2Info_22);
      if ((MaybeFailureConstrs_23 == (MR_Word) ((MR_Unsigned) 0U)))
        FailureConstraints_24 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word CalleeFailurePolyhedron_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailureConstrs_23, (MR_Integer) 0))));
        MR_Word CalleeFailureConstraints_26;

        CalleeFailureConstraints_26 = libs__polyhedron__non_false_constraints_1_f_0(CalleeFailurePolyhedron_25);
        if ((CalleeFailureConstraints_26 == (MR_Word) ((MR_Unsigned) 0U)))
          FailureConstraints_24 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word CalleeHeadVars_29;
          MR_Word SubstMap_30;

          CalleeHeadVars_29 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(Term2Info_22);
          SubstMap_30 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(CallSizeArgs_18, CalleeHeadVars_29);
          FailureConstraints_24 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(CalleeFailureConstraints_26, SubstMap_30);
        }
      }
      FailurePolyhedron_31 = libs__polyhedron__from_constraints_1_f_0(FailureConstraints_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *AbstractGoal_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (FailurePolyhedron_31));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) GoalExpr_7)) == (MR_Integer) 1))
    {
      MR_Word Unification_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));
      MR_Word Var_37;
      MR_Word ConsId_38;
      MR_Word Type_42;
      MR_Word TypeCtor_43;
      MR_Word Constructors0_44;
      MR_Word Constructors_56;
      MR_Word SizeVar_57;
      MR_Word Norm_58;
      MR_Word Polyhedron_59;
      MR_Word Var_60;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word SizeVarMap_75;
      MR_Word ModuleInfo_76;
      MR_Word ConsName_45;
      MR_Integer ConsArity_46;
      MR_Word ConsTypeCtor_47;

      succeeded = ((MR_tag((MR_Word) Unification_35)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_35, (MR_Integer) 0))));
        ConsId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_35, (MR_Integer) 1))));
        Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_35, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_60 == (MR_Integer) 0);
        if (succeeded)
        {
          hlds__vartypes__lookup_var_type_3_p_0(Var_186, Var_37, &Type_42);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_42, &TypeCtor_43);
          ModuleInfo_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
          succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_76, Type_42, &Constructors0_44);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) ConsId_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConsName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_38, (MR_Integer) 1))));
              ConsArity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_38, (MR_Integer) 2))));
              ConsTypeCtor_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_38, (MR_Integer) 3))));
              {
                MR_Word FindComplement_48;
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3]));
                  MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (TypeCtor_43));
                  MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (ConsTypeCtor_47));
                }
                mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "mismatched type_ctors");
                {
                  FindComplement_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FindComplement_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[1]));
                  MR_hl_field(MR_mktag(0), FindComplement_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4));
                  MR_hl_field(MR_mktag(0), FindComplement_48, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), FindComplement_48, 3) = ((MR_Box) (ConsName_45));
                  MR_hl_field(MR_mktag(0), FindComplement_48, 4) = ((MR_Box) (ConsArity_46));
                }
                mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), FindComplement_48, Constructors0_44, &Constructors_56);
              }
            }
            else
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "non cons cons_id.");
            SizeVarMap_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));
            SizeVar_57 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_75, Var_37);
            Norm_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
            transform_hlds__term_constr_build__bounds_on_var_6_p_0(Norm_58, ModuleInfo_76, TypeCtor_43, SizeVar_57, Constructors_56, &Polyhedron_59);
            Var_68 = (MR_Word) ((MR_Unsigned) 0U);
            Var_69 = (MR_Word) ((MR_Unsigned) 0U);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *AbstractGoal_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_59));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_69));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__int__min_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1222__1_1_p_0(((MR_Integer) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LowerBound_10;

    conv0_LowerBound_10 = transform_hlds__term_constr_build__lower_bound_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LowerBound_10));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word Var_10,
  MR_Word Constructors_11,
  MR_Word * Polyhedron_12)
{
  {
    MR_bool succeeded;
    MR_Word CtorSizes_13;
    MR_Word ZeroSizeCtors_15;
    MR_Word NonZeroSizeCtors_16;
    MR_Word Constraints_19;
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Norm_7));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (TypeCtor_9));
    }
    CtorSizes_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_27, Constructors_11);
    mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[8]), CtorSizes_13, &ZeroSizeCtors_15, &NonZeroSizeCtors_16);
    if ((NonZeroSizeCtors_16 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ZeroSizeCtors_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.bounds_on_var\'/6", (MR_String) "no other constructors for type");
          return;
        }
      else
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;

        Var_50 = libs__rat__one_0_f_0();
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_53 = libs__rat__zero_0_f_0();
        Var_47 = libs__lp_rational__construct_constraint_3_f_0(Var_48, (MR_Integer) 1, Var_53);
        {
          Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Constraints_19, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    else
    {
      MR_Integer C_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), NonZeroSizeCtors_16, (MR_Integer) 0))));
      MR_Word Cs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonZeroSizeCtors_16, (MR_Integer) 1))));
      MR_Word UpperBoundConstr_22;
      MR_Word LowerBoundConstr_24;

      transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(Norm_7, ModuleInfo_8, Var_10, TypeCtor_9, Constructors_11, &UpperBoundConstr_22);
      if ((ZeroSizeCtors_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer LowerBound_23;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Box conv2_LowerBound_23;

        conv2_LowerBound_23 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[9]), Cs_21, ((MR_Box) (C_20)));
        LowerBound_23 = ((MR_Integer) (conv2_LowerBound_23));
        Var_42 = libs__rat__one_0_f_0();
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_45 = libs__rat__rat_1_f_0(LowerBound_23);
        Var_39 = libs__lp_rational__construct_constraint_3_f_0(Var_40, (MR_Integer) 2, Var_45);
        {
          LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LowerBoundConstr_24, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), LowerBoundConstr_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_36;

        Var_33 = libs__rat__one_0_f_0();
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_36 = libs__rat__zero_0_f_0();
        Var_30 = libs__lp_rational__construct_constraint_3_f_0(Var_31, (MR_Integer) 2, Var_36);
        {
          LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LowerBoundConstr_24, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), LowerBoundConstr_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), LowerBoundConstr_24, UpperBoundConstr_22);
    }
    *Polyhedron_12 = libs__polyhedron__from_constraints_1_f_0(Constraints_19);
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__3_28;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1275__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
  MR_Word Norm_7,
  MR_Word ModuleInfo_8,
  MR_Word Var_9,
  MR_Word TypeCtor_10,
  MR_Word Ctors_11,
  MR_Word * Constraints_12)
{
  {
    MR_bool succeeded;
    MR_Word FindUpperBound_13;
    MR_Integer Bound0_25;
    MR_Box conv1_Bound0_25;

    {
      FindUpperBound_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 1) = ((MR_Box) (transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 3) = ((MR_Box) (Norm_7));
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 4) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), FindUpperBound_13, 5) = ((MR_Box) (TypeCtor_10));
    }
    succeeded = mercury__list__foldl_4_p_3((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FindUpperBound_13, Ctors_11, ((MR_Box) ((MR_Integer) 0)), &conv1_Bound0_25);
    if (succeeded)
    {
      Bound0_25 = ((MR_Integer) (conv1_Bound0_25));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Bound0_25 == (MR_Integer) 0);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", (MR_String) "zero upper bound");
          return;
        }
      else
      {
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;

        Var_39 = libs__rat__one_0_f_0();
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_42 = libs__rat__rat_1_f_0(Bound0_25);
        Var_36 = libs__lp_rational__construct_constraint_3_f_0(Var_37, (MR_Integer) 0, Var_42);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Constraints_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
      *Constraints_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
  MR_Word Unification_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 0))));
          MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 1))));
          MR_Word ArgVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 2))));
          MR_Word Modes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 3))));
          MR_Word Constraints_15;
          MR_Word Polyhedron_47;

          transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(Var_8, ConsId_9, ArgVars_10, Modes_11, &Constraints_15, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          Polyhedron_47 = libs__polyhedron__from_constraints_1_f_0(Constraints_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *AbstractGoal_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_47));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_47);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
              return;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 0))));
          MR_Word ConsId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 1))));
          MR_Word ArgVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 2))));
          MR_Word Modes_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 3))));
          MR_Word Constraints_35;
          MR_Word Polyhedron_53;

          transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(Var_31, ConsId_32, ArgVars_33, Modes_34, &Constraints_35, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          Polyhedron_53 = libs__polyhedron__from_constraints_1_f_0(Constraints_35);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *AbstractGoal_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_53));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_53);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_5, (MR_Integer) 0))));
          MR_Word RVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_5, (MR_Integer) 1))));
          MR_Word Constraints_36;
          MR_Word Polyhedron_41;

          transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(LVar_18, RVar_19, &Constraints_36, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          Polyhedron_41 = libs__polyhedron__from_constraints_1_f_0(Constraints_36);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *AbstractGoal_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_41));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_41);
          if (succeeded)
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
              return;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Constraints_37;
              MR_Word LVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_5, (MR_Integer) 1))));
              MR_Word RVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_5, (MR_Integer) 2))));
              MR_Word Polyhedron_59;

              transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(LVar_38, RVar_39, &Constraints_37, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
              Polyhedron_59 = libs__polyhedron__from_constraints_1_f_0(Constraints_37);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *AbstractGoal_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_59));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_59);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
                  return;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/4", (MR_String) "complicated_unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
  MR_Word LeftProgVar_6,
  MR_Word RightProgVar_7,
  MR_Word * Constraints_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word SizeVarMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
    MR_Word Zeros_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
    MR_Word LeftSizeVar_12;
    MR_Word RightSizeVar_13;

    LeftSizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_10, LeftProgVar_6);
    RightSizeVar_13 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_10, RightProgVar_7);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_12)), Zeros_11);
    if (succeeded)
      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_13)), Zeros_11);
    if (succeeded)
      *Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (LeftSizeVar_12)), Zeros_11);
      if (!(succeeded))
        succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (RightSizeVar_13)), Zeros_11);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/5", (MR_String) "zero unified with non-zero");
          return;
        }
      else
      {
        MR_Word NonNegConstrs_14;
        MR_Word Terms_15;
        MR_Word AssignConstr_16;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_33;
        MR_Word Var_34;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (RightSizeVar_13));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (LeftSizeVar_12));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
        }
        NonNegConstrs_14 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[7]), Var_22);
        Var_26 = libs__rat__one_0_f_0();
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (LeftSizeVar_12));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Var_26));
        }
        Var_30 = libs__rat__one_0_f_0();
        Var_29 = libs__rat__f_minus_1_f_0(Var_30);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (RightSizeVar_13));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Terms_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Terms_15, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(1), Terms_15, 1) = ((MR_Box) (Var_27));
        }
        Var_33 = libs__rat__zero_0_f_0();
        AssignConstr_16 = libs__lp_rational__construct_constraint_3_f_0(Terms_15, (MR_Integer) 1, Var_33);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (AssignConstr_16));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (NonNegConstrs_14));
        }
        *Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(Var_34);
      }
    }
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__943__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Terms_14;

    transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Terms_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Terms_14));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Word ArgVars_10,
  MR_Word Modes_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 6))));
    MR_Word Type_15;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_14, Var_8, &Type_15);
    succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_15);
    if (!(succeeded))
    {
      MR_Integer Var_16;

      succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_9, &Var_16);
    }
    if (succeeded)
      *Constraints_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FixedArgVars_17;
      MR_Word FixedModes_18;
      MR_Word ModuleInfo_19;
      MR_Word Norm_20;
      MR_Word TypeCtor_21;
      MR_Integer Constant_22;
      MR_Word CountedVars_23;
      MR_Word SizeVarMap_25;
      MR_Word Zeros_26;
      MR_Word SizeVar_27;
      MR_Word FirstTerms_28;
      MR_Word Terms_29;
      MR_Word Constraint_30;
      MR_Word SizeVars_33;
      MR_Word NonNegConstraints_34;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_24;
      MR_Box conv1_Terms_29;

      transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(VarTypes_14, ArgVars_10, &FixedArgVars_17, Modes_11, &FixedModes_18);
      ModuleInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 2))));
      Norm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 3))));
      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_15, &TypeCtor_21);
      transform_hlds__term_norm__functor_norm_9_p_0(ModuleInfo_19, Norm_20, TypeCtor_21, ConsId_9, &Constant_22, FixedArgVars_17, &CountedVars_23, FixedModes_18, &Var_24);
      Zeros_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 7))));
      SizeVarMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 8))));
      SizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_25, Var_8);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (SizeVar_27)), Zeros_26);
      if (succeeded)
        FirstTerms_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_37;
        MR_Word Var_38;

        Var_38 = libs__rat__one_0_f_0();
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (SizeVar_27));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_38));
        }
        {
          FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FirstTerms_28, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), FirstTerms_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      Var_42 = libs__rat__one_0_f_0();
      Var_41 = libs__rat__f_minus_1_f_0(Var_42);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (SizeVarMap_25));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Zeros_26));
        MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (Var_41));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[5]), Var_40, CountedVars_23, ((MR_Box) (FirstTerms_28)), &conv1_Terms_29);
      Terms_29 = ((MR_Word) (conv1_Terms_29));
      Var_44 = libs__rat__rat_1_f_0(Constant_22);
      Constraint_30 = libs__lp_rational__construct_constraint_3_f_0(Terms_29, (MR_Integer) 1, Var_44);
      succeeded = libs__lp_rational__is_false_1_p_0(Constraint_30);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/7", (MR_String) "false constraint from unification");
          return;
        }
      else
      {
        MR_Word SizeVars0_31;
        MR_Word SizeVars1_32;
        MR_Word Var_47;
        MR_Word Var_48;

        SizeVars0_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_25, ArgVars_10);
        {
          SizeVars1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SizeVars1_32, 0) = ((MR_Box) (SizeVar_27));
          MR_hl_field(MR_mktag(1), SizeVars1_32, 1) = ((MR_Box) (SizeVars0_31));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Zeros_26));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Var_48));
        }
        SizeVars_33 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), Var_47, SizeVars1_32);
      }
      NonNegConstraints_34 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[6]), SizeVars_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Constraints_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonNegConstraints_34));
      }
    }
    *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Args_0_9,
  MR_Word * STATE_VARIABLE_Args_10,
  MR_Word STATE_VARIABLE_Modes_0_11,
  MR_Word * STATE_VARIABLE_Modes_12)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Args_13_13;
    MR_Word STATE_VARIABLE_Modes_14_14;

    succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(VarTypes_6, STATE_VARIABLE_Args_0_9, &STATE_VARIABLE_Args_13_13, STATE_VARIABLE_Modes_0_11, &STATE_VARIABLE_Modes_14_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Modes_12 = STATE_VARIABLE_Modes_14_14;
      *STATE_VARIABLE_Args_10 = STATE_VARIABLE_Args_13_13;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
  MR_Word TermVar_6,
  MR_Word SubGoal_7,
  MR_Word * AbstractGoal_8,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word SubGoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_7, (MR_Integer) 0))));
    MR_Word Conjuncts_12;
    MR_Word Var_26;

    succeeded = ((((MR_tag((MR_Word) SubGoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr_10, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_10, (MR_Integer) 2))));
      succeeded = (Var_26 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word SizeVarMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 8))));
      MR_Word Zeros_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 7))));
      MR_Word TermSizeVar_15;
      MR_Word Constraints_16;

      TermSizeVar_15 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_13, TermVar_6);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[4]), ((MR_Box) (TermSizeVar_15)), Zeros_14);
      if (succeeded)
        Constraints_16 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
        MR_Word Norm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
        MR_Word VarTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 6))));
        MR_Word SizeMap_20;
        MR_Integer KnownTermVarSize_21;
        MR_Word Terms_22;
        MR_Word Constraint_23;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Box conv0_KnownTermVarSize_21;

        Var_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(ModuleInfo_17, Norm_18, VarTypes_19, Conjuncts_12, Var_27, &SizeMap_20);
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SizeMap_20, ((MR_Box) (TermVar_6)), &conv0_KnownTermVarSize_21);
        KnownTermVarSize_21 = ((MR_Integer) (conv0_KnownTermVarSize_21));
        Var_29 = libs__rat__one_0_f_0();
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (TermSizeVar_15));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Var_29));
        }
        {
          Terms_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Terms_22, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Terms_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_32 = libs__rat__rat_1_f_0(KnownTermVarSize_21);
        Constraint_23 = libs__lp_rational__construct_constraint_3_f_0(Terms_22, (MR_Integer) 1, Var_32);
        {
          Constraints_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Constraints_16, 0) = ((MR_Box) (Constraint_23));
          MR_hl_field(MR_mktag(1), Constraints_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      *AbstractGoal_8 = transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(Constraints_16);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/5", (MR_String) "not conj");
        return;
      }
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
  MR_Word Constraints_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Polyhedron_4;

    Polyhedron_4 = libs__polyhedron__from_constraints_1_f_0(Constraints_3);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (Polyhedron_4));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron_4);
    if (succeeded)
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_45;
    MR_Word conv0_HeadVar__4_47;

    transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__834__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_45, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_47);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_45));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_47));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SizeMap_0_5,
  MR_Word * STATE_VARIABLE_SizeMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SizeMap_6 = STATE_VARIABLE_SizeMap_0_5;
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SizeMap_21_21;
      MR_Word GoalExpr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 0))));
      MR_Word Var_37;
      MR_Word ConsId_38;
      MR_Word ArgVars_39;
      MR_Word Modes_40;
      MR_Word Unify_35;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_SizeMap_0_5;

      succeeded = ((MR_tag((MR_Word) GoalExpr_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unify_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_30, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unify_35)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_35, (MR_Integer) 0))));
          ConsId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_35, (MR_Integer) 1))));
          ArgVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_35, (MR_Integer) 2))));
          Modes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_35, (MR_Integer) 3))));
        }
      }
      if (succeeded)
      {
        MR_Word FixedArgVars_44;
        MR_Word FixedModes_45;
        MR_Word Type_46;
        MR_Word TypeCtor_47;
        MR_Integer ConsIdSize_48;
        MR_Word CountedVars_49;
        MR_Word ArgSizes_51;
        MR_Integer TotalArgSize_52;
        MR_Integer Size_53;
        MR_Word STATE_VARIABLE_SizeMap_39_55;
        MR_Word STATE_VARIABLE_Args_13_76;
        MR_Word STATE_VARIABLE_Modes_14_77;
        MR_Word Var_50;
        MR_Box conv2_STATE_VARIABLE_SizeMap_39_55;

        succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(HeadVar__3_3, ArgVars_39, &STATE_VARIABLE_Args_13_76, Modes_40, &STATE_VARIABLE_Modes_14_77);
        if (succeeded)
        {
          FixedModes_45 = STATE_VARIABLE_Modes_14_77;
          FixedArgVars_44 = STATE_VARIABLE_Args_13_76;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
            return;
          }
        hlds__vartypes__lookup_var_type_3_p_0(HeadVar__3_3, Var_37, &Type_46);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_46, &TypeCtor_47);
        transform_hlds__term_norm__functor_norm_9_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtor_47, ConsId_38, &ConsIdSize_48, FixedArgVars_44, &CountedVars_49, FixedModes_45, &Var_50);
        mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[1]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[5]), CountedVars_49, &ArgSizes_51, ((MR_Box) (STATE_VARIABLE_SizeMap_0_5)), &conv2_STATE_VARIABLE_SizeMap_39_55);
        STATE_VARIABLE_SizeMap_39_55 = ((MR_Word) (conv2_STATE_VARIABLE_SizeMap_39_55));
        transform_hlds__term_constr_build__accumulate_sum_3_p_0(ArgSizes_51, (MR_Integer) 0, &TotalArgSize_52);
        Size_53 = (MR_Integer) ((MR_Unsigned) ConsIdSize_48 + (MR_Unsigned) TotalArgSize_52);
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_37)), ((MR_Box) (Size_53)), STATE_VARIABLE_SizeMap_39_55, &STATE_VARIABLE_SizeMap_21_21);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", (MR_String) "malformed conjunct");
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Goals_17;
      next_value_of_STATE_VARIABLE_SizeMap_0_5 = STATE_VARIABLE_SizeMap_21_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_SizeMap_0_5 = next_value_of_STATE_VARIABLE_SizeMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Arg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mode_10;
      MR_Word Type_12;
      MR_Word STATE_VARIABLE_Args_0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Modes_0_15;
      MR_Word STATE_VARIABLE_Args_17_17;
      MR_Word STATE_VARIABLE_Modes_18_18;

      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        STATE_VARIABLE_Modes_0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(VarTypes_1, STATE_VARIABLE_Args_0_13, &STATE_VARIABLE_Args_17_17, STATE_VARIABLE_Modes_0_15, &STATE_VARIABLE_Modes_18_18);
        if (succeeded)
        {
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Arg_8, &Type_12);
          succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_12);
          if (succeeded)
          {
            *HeadVar__5_5 = STATE_VARIABLE_Modes_18_18;
            *HeadVar__3_3 = STATE_VARIABLE_Args_17_17;
          }
          else
          {
            mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), ((MR_Box) (Arg_8)), STATE_VARIABLE_Args_17_17, HeadVar__3_3);
            mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), ((MR_Box) (Mode_10)), STATE_VARIABLE_Modes_18_18, HeadVar__5_5);
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalSize_0_2,
  MR_Integer * STATE_VARIABLE_TotalSize_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TotalSize_3 = STATE_VARIABLE_TotalSize_0_2;
    else
    {
      MR_Integer Size_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Sizes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_TotalSize_12_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_2 + (MR_Unsigned) Size_7);
      MR_Word next_value_of_HeadVar__1_1 = Sizes_8;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_2 = STATE_VARIABLE_TotalSize_12_12;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TotalSize_0_2 = next_value_of_STATE_VARIABLE_TotalSize_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVar_2,
  MR_Word ConsId_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1))
    {
      MR_Word Kind_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 3))));

      if (((MR_tag((MR_Word) Kind_7)) == (MR_Integer) 1))
      {
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_7, (MR_Integer) 0))));
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Kind_7, (MR_Integer) 1))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[3]), ((MR_Box) (SwitchVar_2)), ((MR_Box) (Var_40)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_3, Var_41);
      }
      else
      if (((((MR_tag((MR_Word) Kind_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Kind_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "complicated_unify");
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 7))))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "shorthand");
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word GoalInfo_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word Context_12;
    MR_Word Var_15;

    Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CalleePPId_7)), Var_15);
    if (succeeded)
      transform_hlds__term_constr_build__build_recursive_call_6_p_0(CalleePPId_7, CallerArgs_8, Context_12, AbstractGoal_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    else
      transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(CalleePPId_7, CallerArgs_8, Context_12, AbstractGoal_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 2))));
    MR_Word CallerPPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
    MR_Word ZeroVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 7))));
    MR_Word CalleeProcInfo_16;
    MR_Word CalleeTerm2Info_17;
    MR_Word ArgAnalysisOnly_18;
    MR_Word ArgSizeInfo_24;
    MR_Word Constraints_27;
    MR_Word Polyhedron_33;
    MR_Word Var_15;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_12, CalleePPId_7, &Var_15, &CalleeProcInfo_16);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(CalleeProcInfo_16, &CalleeTerm2Info_17);
    ArgAnalysisOnly_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    switch (ArgAnalysisOnly_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeTermStatus_19;

          MaybeTermStatus_19 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(CalleeTerm2Info_17);
          if ((MaybeTermStatus_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "callee procedure has no termination status.");
              return;
            }
          else
          {
            MR_Word TermStatus_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermStatus_19, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) TermStatus_20)) == (MR_Integer) 1))
            {
              MR_Word Error_22;
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CallerPPId_13));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (CalleePPId_7));
              }
              {
                Error_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_22, 0) = ((MR_Box) (Context_9));
                MR_hl_field(MR_mktag(0), Error_22, 1) = ((MR_Box) (Var_38));
              }
              transform_hlds__term_constr_build__tti_info_add_error_3_p_0(Error_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            }
            else
              *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        break;
    }
    ArgSizeInfo_24 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(CalleeTerm2Info_17);
    if ((ArgSizeInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "no argument size info for callee proc");
        return;
      }
    else
    {
      MR_Word SizeInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgSizeInfo_24, (MR_Integer) 0))));
      MR_Word ArgSizeConstrs0_26;

      ArgSizeConstrs0_26 = libs__polyhedron__non_false_constraints_1_f_0(SizeInfo_25);
      if ((ArgSizeConstrs0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        Constraints_27 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word CalleeHeadVars_30;
        MR_Word SubstMap_31;
        MR_Word Constraints0_32;

        CalleeHeadVars_30 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(CalleeTerm2Info_17);
        SubstMap_31 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(CallerArgs_8, CalleeHeadVars_30);
        Constraints0_32 = libs__lp_rational__substitute_vars_2_f_0(SubstMap_31, ArgSizeConstrs0_26);
        Constraints_27 = libs__lp_rational__set_vars_to_zero_2_f_0(ZeroVars_14, Constraints0_32);
      }
    }
    Polyhedron_33 = libs__polyhedron__from_constraints_1_f_0(Constraints_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Polyhedron_33));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
  MR_Word CalleePPId_7,
  MR_Word CallerArgs_8,
  MR_Word Context_9,
  MR_Word * AbstractGoal_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word CallerPPId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
    MR_Word CallerZeros_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
    MR_Word CallerArgConstrs_14;
    MR_Word CallerArgPoly_15;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word Var_23;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPPId_12, CalleePPId_7);
    if (succeeded)
    {
      MR_Word UpdatedRecType_59;
      MR_Word Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Integer Var_89;
      MR_Word Var_90;
      MR_Unsigned packed_word_2;

      UpdatedRecType_59 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(Var_60, (MR_Integer) 1);
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
      Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8))));
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9))));
      Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10))));
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11))));
      {
        STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 6U)))) | (((MR_Unsigned) (UpdatedRecType_59) << 1))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 8) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 9) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 10) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, 11) = ((MR_Box) (Var_90));
      }
    }
    else
      transform_hlds__term_constr_build__info_update_recursion_3_p_0((MR_Integer) 2, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
    CallerArgConstrs_14 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(CallerArgs_8, CallerZeros_13);
    CallerArgPoly_15 = libs__polyhedron__from_constraints_1_f_0(CallerArgConstrs_14);
    transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_17);
    Var_23 = (MR_Word) (CalleePPId_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_10 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (CallerArgs_8));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (CallerZeros_13));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (CallerArgPoly_15));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
  MR_Word RecType_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Word UpdatedRecType_6;
    MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Var_38;
    MR_Word Var_39;
    MR_Unsigned packed_word_1;

    UpdatedRecType_6 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(Var_9, RecType_4);
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 4))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 5))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 7))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 8))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 9))));
    Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 10))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 6U)))) | (((MR_Unsigned) (UpdatedRecType_6) << 1))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_39));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    MR_Integer Var_7;
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 10))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 8))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 9))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 11))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));

    Var_7 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_AbstractGoal_6;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    transform_hlds__term_constr_build__build_abstract_goal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_AbstractGoal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_AbstractGoal_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
  MR_Word Conjuncts_5,
  MR_Word * AbstractGoal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word AbstractGoals0_8;
    MR_Word AbstractGoals_9;
    MR_Box conv2_STATE_VARIABLE_Info_11;

    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[4]), Conjuncts_5, &AbstractGoals0_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
    AbstractGoals_9 = transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(AbstractGoals0_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *AbstractGoal_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AbstractGoals_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
  MR_Word Context_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9;
    MR_Word Var_10 = (MR_Word) (Context_4);
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
    MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_9));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
    MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Error_4));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_24));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
  MR_Word ModuleInfo_12,
  MR_Word Norm_13,
  MR_Word PPId_14,
  MR_Word Context_15,
  MR_Word Types_16,
  MR_Word Zeros_17,
  MR_Word VarMap_18,
  MR_Word SCC_19,
  MR_Word FailConstrs_20,
  MR_Word ArgSizeOnly_21)
{
  {
    MR_Word HeadVar__11_11;

    {
      HeadVar__11_11 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 0) = (MR_Box) (((((MR_Unsigned) (ArgSizeOnly_21) << 4)) | (((((MR_Unsigned) (FailConstrs_20) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 2) = ((MR_Box) (ModuleInfo_12));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 3) = ((MR_Box) (Norm_13));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 4) = ((MR_Box) (PPId_14));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 5) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 6) = ((MR_Box) (Types_16));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 7) = ((MR_Box) (Zeros_17));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 8) = ((MR_Box) (VarMap_18));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 9) = ((MR_Box) (SCC_19));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 10) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), HeadVar__11_11, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__11_11;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__3_44;
    MR_Word conv4_LambdaHeadVar__5_46;

    transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__149__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_44, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_46);
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_44));
    *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_46));
  }
}

static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_SizeVarset_44;
    MR_Word conv0_STATE_VARIABLE_AbstractInfo_46;

    transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SizeVarset_44, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_AbstractInfo_46);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SizeVarset_44));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_AbstractInfo_46));
  }
}

void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0(
  MR_Word Options_6,
  MR_Word SCCWithEntryPoints_7,
  MR_Word * Errors_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38)
{
  {
    MR_Word SCC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCWithEntryPoints_7, (MR_Integer) 0))));
    MR_Word SCCProcsCalledFromHigherSCCs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCWithEntryPoints_7, (MR_Integer) 1))));
    MR_Word ExportedSCCProcs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCWithEntryPoints_7, (MR_Integer) 2))));
    MR_Word EntryProcs_13;
    MR_Word SizeVarset_14;
    MR_Word AbstractSCC_15;
    MR_Word PredTable0_16;
    MR_Word RecordInfo_17;
    MR_Word PredTable_19;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Box conv3_SizeVarset_14;
    MR_Box conv2_AbstractSCC_15;
    MR_Box conv7_Errors_8;
    MR_Box conv6_PredTable_19;

    mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCCProcsCalledFromHigherSCCs_11, ExportedSCCProcs_12, &EntryProcs_13);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_37));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Options_6));
      MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (SCC_10));
      MR_hl_field(MR_mktag(0), Var_39, 6) = ((MR_Box) (EntryProcs_13));
    }
    Var_40 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[1]), Var_39, SCC_10, ((MR_Box) (Var_40)), &conv3_SizeVarset_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_AbstractSCC_15);
    SizeVarset_14 = ((MR_Word) (conv3_SizeVarset_14));
    AbstractSCC_15 = ((MR_Word) (conv2_AbstractSCC_15));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &PredTable0_16);
    {
      RecordInfo_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecordInfo_17, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), RecordInfo_17, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0_2));
      MR_hl_field(MR_mktag(0), RecordInfo_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), RecordInfo_17, 3) = ((MR_Box) (SizeVarset_14));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_constr_build_scalar_common_2[0]), RecordInfo_17, AbstractSCC_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_Errors_8, ((MR_Box) (PredTable0_16)), &conv6_PredTable_19);
    *Errors_8 = ((MR_Word) (conv7_Errors_8));
    PredTable_19 = ((MR_Word) (conv6_PredTable_19));
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_19, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_build__term_build_options_init_3_f_0(
  MR_Word Norm_5,
  MR_Word Failure_6,
  MR_Word ArgSizeOnly_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Norm_5));
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (Failure_6) << 1)) | (MR_Unsigned) (ArgSizeOnly_7)));
    }
    return HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_build____Unify____disj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_build____Compare____disj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_build____Unify____term_build_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_build____Compare____term_build_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_build____Unify____term_scc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_build____Compare____term_scc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_constr_build__init(void)
{
}

void mercury__transform_hlds__term_constr_build__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0);
}

void mercury__transform_hlds__term_constr_build__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_build__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_build.
