/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2017-12-31
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.unify_proc.
// :- implementation.

/*
INIT mercury__check_hlds__unify_proc__init
ENDINIT
*/

#include "check_hlds.unify_proc.mih"


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
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1;
  MR_bool check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16;
  jmp_buf check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34;
  MR_Word check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36;
  MR_Box check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34;
};

struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1;
  MR_bool check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22;
  jmp_buf check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69;
  MR_Word check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71;
  MR_Box check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0[1];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(
  MR_Word LambdaHeadVar__1_21);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(
  MR_Word ErrorProcs_25,
  MR_Word HeadVar__2_34);

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(
  MR_Word Context_18,
  MR_Word LambdaHeadVar__1_37);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_y_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_x_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word X_12,
  MR_Word Index_13,
  MR_Word Context_14,
  MR_Word Ctor_15,
  MR_Word * Goal_16,
  MR_Integer STATE_VARIABLE_N_0_32,
  MR_Integer * STATE_VARIABLE_N_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word CanCompareAsInt_14,
  MR_Word Ctor_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Res_6);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word TypeBody_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Clause_16,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word Ctors0_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Clause_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word Ctors_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
  MR_Word Type_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cases_0_8,
  MR_Word * STATE_VARIABLE_Cases_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word Ctor1_13,
  MR_Word Ctor2_14,
  MR_String CompareOp_15,
  MR_Word R_16,
  MR_Word X_17,
  MR_Word Y_18,
  MR_Word Context_19,
  MR_Word * Case_20,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word ExistQTVars_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word Ctor_12,
  MR_Word R_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word Context_16,
  MR_Word Kind_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(
  MR_Word ExistQTVars_6,
  MR_Word CtorArgs_7,
  MR_Word * TypedVarPairs_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word R_3,
  MR_Word Context_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3);

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
  MR_Word EqvType_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
  MR_Word UnifyCompare_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_compare_8_p_0(
  MR_Word CtorCat_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
  MR_Word Type_9,
  MR_Word TypeBody_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
  MR_Word Type_9,
  MR_Word TypeBody_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
  MR_Word X_7,
  MR_Word Y_8,
  MR_Word Context_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
  MR_Word EqvType_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word Type_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
  MR_Word UserEqCompare_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word Context_4,
  MR_Word * Clause_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UPI_0_12,
  MR_Word * STATE_VARIABLE_UPI_13);

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word MaybeCompareRes_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word Type_6,
  MR_String Name_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UPI_0_14,
  MR_Word * STATE_VARIABLE_UPI_15);

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
  MR_Word CtorCat_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word HeadVars_7,
  MR_Word Goal0_8,
  MR_Word Context_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String Name_7,
  MR_Word ArgVars_8,
  MR_Word Context_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
  MR_Word SpecialId_12,
  MR_Word Item_13,
  MR_Word TVarSet_14,
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeBody_17,
  MR_Word Context_18,
  MR_Word TypeStatus_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[3][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][12];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][13];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[7][3];


/* sealed */ struct check_hlds__unify_proc__vector_common_type_6_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_6_0_s check_hlds__unify_proc_vector_common_6[16];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[4][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[2])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[2])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_index_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__unify_proc__vector_common_type_6_0_s check_hlds__unify_proc_vector_common_6[16] = {
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_uint" },
  /* row 2 */   {     (MR_String) "builtin_unify_int8" },
  /* row 3 */   {     (MR_String) "builtin_unify_uint8" },
  /* row 4 */   {     (MR_String) "builtin_unify_int16" },
  /* row 5 */   {     (MR_String) "builtin_unify_uint16" },
  /* row 6 */   {     (MR_String) "builtin_unify_int32" },
  /* row 7 */   {     (MR_String) "builtin_unify_uint32" },
  /* row 8 */   {     (MR_String) "builtin_compare_int" },
  /* row 9 */   {     (MR_String) "builtin_compare_uint" },
  /* row 10 */   {     (MR_String) "builtin_compare_int8" },
  /* row 11 */   {     (MR_String) "builtin_compare_uint8" },
  /* row 12 */   {     (MR_String) "builtin_compare_int16" },
  /* row 13 */   {     (MR_String) "builtin_compare_uint16" },
  /* row 14 */   {     (MR_String) "builtin_compare_int32" },
  /* row 15 */   {     (MR_String) "builtin_compare_uint32" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "linear_or_quad",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0 = {
  (MR_String) "typed_var_pair",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "typed_var_pair",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
  (MR_String) "declaration",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
  (MR_String) "clauses",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_pred_item",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_module_info",
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps"
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0
};

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(
  MR_Word LambdaHeadVar__1_21)
{
  {
    MR_Word LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 3)));

    return LambdaHeadVar__2_22;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(
  MR_Word ErrorProcs_25,
  MR_Word HeadVar__2_34)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[2], ((MR_Box) (ErrorProcs_25)), ((MR_Box) (HeadVar__2_34)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(
  MR_Word Context_18,
  MR_Word LambdaHeadVar__1_37)
{
  {
    MR_Word LambdaHeadVar__2_38;

    {
      LambdaHeadVar__2_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_38, 1) = ((MR_Box) (LambdaHeadVar__1_37));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_38, 3) = ((MR_Box) (Context_18));
    }
    return LambdaHeadVar__2_38;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      hlds__hlds_module____Compare____module_info_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            hlds__hlds_rtti____Compare____rtti_varmaps_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeCtorInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_15_15 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      parse_tree__prog_data____Compare____mer_type_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_y_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word VarY_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word _ArgType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _VarX_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    return VarY_5;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_x_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word VarX_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word _ArgType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _VarY_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));

    return VarX_4;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word X_12,
  MR_Word Index_13,
  MR_Word Context_14,
  MR_Word Ctor_15,
  MR_Word * Goal_16,
  MR_Integer STATE_VARIABLE_N_0_32,
  MR_Integer * STATE_VARIABLE_N_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 0)));
    MR_Word FunctorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 2)));
    MR_Word ArgTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 3)));
    MR_Integer FunctorArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 4)));
    MR_Word FunctorConsId_25;
    MR_Word ArgVars_26;
    MR_Word UnifyX_Goal_27;
    MR_Word UnifyIndex_Goal_28;
    MR_Word GoalList_29;
    MR_Word GoalInfo0_30;
    MR_Word GoalInfo_31;
    MR_Word Var_37;
    MR_Word Var_43;
    MR_Word _Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 1)));
    MR_Word _Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 5)));

    {
      FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorName_21));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_23));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_11));
    }
    if ((ExistQTVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ArgTypes_51;

      ArgTypes_51 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_9[6], ArgTypes_22);
      check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_51, &ArgVars_26, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
    }
    else
    {
      MR_Word VarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
      MR_Integer NumVars_56;
      MR_Word VarSet_57;
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
      MR_Word Var_81;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_82;

      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ArgTypes_22, &NumVars_56);
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NumVars_56, &ArgVars_26, VarSet0_55, &VarSet_57);
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_57));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_84));
      }
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FunctorConsId_25));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_37, 2) = ((MR_Box) (ArgVars_26));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_12, Var_37, Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_27);
    hlds__make_goal__make_int_const_construction_3_p_0(Index_13, STATE_VARIABLE_N_0_32, &UnifyIndex_Goal_28);
    *STATE_VARIABLE_N_33 = (STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (UnifyIndex_Goal_28));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_29, 0) = ((MR_Box) (UnifyX_Goal_27));
      MR_hl_field(MR_mktag(1), GoalList_29, 1) = ((MR_Box) (Var_43));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_30);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_14, GoalInfo0_30, &GoalInfo_31);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_29, GoalInfo_31, Goal_16);
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_VarY_5;

    conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_VarY_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_VarX_4;

    conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_VarX_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word CanCompareAsInt_14,
  MR_Word Ctor_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 0)));
    MR_Word FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 2)));
    MR_Word ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 3)));
    MR_Integer FunctorArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 4)));
    MR_Word FunctorConsId_25;
    MR_Word GoalList_35;
    MR_Word GoalInfo0_42;
    MR_Word GoalInfo_43;
    MR_Word _Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 1)));
    MR_Word _Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0)));
    MR_String Var_47;
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1)));

    succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0)));
      succeeded = (strcmp(Var_47, (MR_String) "{}") == 0);
    }
    if (succeeded)
      {
        FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorArity_22));
      }
    else
      {
        FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorName_20));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_22));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_10));
      }
    succeeded = (ArgTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (CanCompareAsInt_14 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word RHS_26;
      MR_Word UnifyX_Goal_27;
      MR_Word CastX_28;
      MR_Word CastY_29;
      MR_Word CastXGoal0_30;
      MR_Word CastYGoal0_31;
      MR_Word CastXGoal_32;
      MR_Word CastYGoal_33;
      MR_Word UnifyY_Goal_34;
      MR_Word Var_52;
      MR_Word STATE_VARIABLE_Info_54_54;
      MR_Word Var_55;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;

      {
        RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_26, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHS_26, Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_27);
      Var_52 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_52, (MR_String) "CastX", &CastX_28, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_54_54);
      Var_55 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_55, (MR_String) "CastY", &CastY_29, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_45);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_11, CastX_28, Context_13, &CastXGoal0_30);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_12, CastY_29, Context_13, &CastYGoal0_31);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_30, &CastXGoal_32);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_31, &CastYGoal_33);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (CastX_28));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastY_29, Var_62, Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyY_Goal_34);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (UnifyY_Goal_34));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (CastYGoal_33));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (CastXGoal_32));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_35, 0) = ((MR_Box) (UnifyX_Goal_27));
        MR_hl_field(MR_mktag(1), GoalList_35, 1) = ((MR_Box) (Var_65));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_82_82;
      MR_Word TypeInfo_83_83;
      MR_Word TypedVarPairs_36;
      MR_Word VarsX_37;
      MR_Word VarsY_38;
      MR_Word RHSX_39;
      MR_Word RHSY_40;
      MR_Word UnifyArgs_Goals_41;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word Var_79;
      MR_Word UnifyX_Goal_80;
      MR_Word UnifyY_Goal_81;

      check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(ExistQTVars_18, ArgTypes_21, &TypedVarPairs_36, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_69_69);
      TypeCtorInfo_82_82 = (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0;
      TypeInfo_83_83 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
      VarsX_37 = mercury__list__map_2_f_0(TypeCtorInfo_82_82, TypeInfo_83_83, (MR_Word) &check_hlds__unify_proc_scalar_common_9[4], TypedVarPairs_36);
      VarsY_38 = mercury__list__map_2_f_0(TypeCtorInfo_82_82, TypeInfo_83_83, (MR_Word) &check_hlds__unify_proc_scalar_common_9[5], TypedVarPairs_36);
      {
        RHSX_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_39, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSX_39, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_39, 2) = ((MR_Box) (VarsX_37));
      }
      {
        RHSY_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_40, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSY_40, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_40, 2) = ((MR_Box) (VarsY_38));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHSX_39, Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_80);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_12, RHSY_40, Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyY_Goal_81);
      check_hlds__unify_proc__unify_var_lists_5_p_0(ExistQTVars_18, TypedVarPairs_36, &UnifyArgs_Goals_41, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_45);
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (UnifyY_Goal_81));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (UnifyArgs_Goals_41));
      }
      {
        GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_35, 0) = ((MR_Box) (UnifyX_Goal_80));
        MR_hl_field(MR_mktag(1), GoalList_35, 1) = ((MR_Box) (Var_79));
      }
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_42);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo0_42, &GoalInfo_43);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_35, GoalInfo_43, Goal_16);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34 = ((MR_Word) (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34);
    check_hlds__unify_proc__unify_var_lists_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37, ((MR_Box) ((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34)), ((MR_Box) ((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36)));
    if ((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
      check_hlds__unify_proc__unify_var_lists_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) env_ptr_arg;

    parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16, &(env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36, check_hlds__unify_proc__unify_var_lists_5_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34, (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__unify_var_lists_5_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s env;

    (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1 = ExistQTVars_1;
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word TypedVarPair_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word TypedVarPairs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Goal_13;
      MR_Word Goals_14;
      MR_Word X_17;
      MR_Word Y_18;
      MR_Word Context_19;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word ModuleInfo_20;
      MR_Word Var_24;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;

      (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 0)));
      X_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 1)));
      Y_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 2)));
      mercury__term__context_init_1_p_0(&Context_19);
      ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
      Var_24 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_20, (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16);
      (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded = (Var_24 == (MR_Integer) 0);
      if ((env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
      {
        Goal_13 = hlds__make_goal__true_goal_0_f_0();
        STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_4;
      }
      else
      {
        check_hlds__unify_proc__unify_var_lists_5_p_0_5(&env);
        if ((env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__succeeded)
        {
          MR_Word Var_26;
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Y_18));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_17));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
          }
          check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", Var_26, Context_19, &Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
        }
        else
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Y_18));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_17, Var_30, Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Goal_13);
          STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_4;
        }
      }
      check_hlds__unify_proc__unify_var_lists_5_p_0((env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1, TypedVarPairs_12, &Goals_14, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Res_6)
{
  {
    MR_Word TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
    MR_Integer ArityA_7;
    MR_Integer ArityB_8;
    MR_Word ArityRes_9;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
    MR_Word Var_13;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
    MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 5)));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;
    MR_Word Var_25;

    mercury__list__length_2_p_0(TypeCtorInfo_36_36, Var_12, &ArityA_7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
    Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 4)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 5)));
    mercury__list__length_2_p_0(TypeCtorInfo_36_36, Var_13, &ArityB_8);
    mercury__private_builtin__builtin_compare_int_3_p_0(&ArityRes_9, ArityA_7, ArityB_8);
    switch (ArityRes_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Res_6 = ArityRes_9;
        break;
      case (MR_Integer) 0:
        {
          MR_String NameA_10;
          MR_String NameB_11;
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
          MR_Word Var_15;
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
          MR_Integer Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 4)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 5)));
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Integer Var_34;
          MR_Word Var_35;

          NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_14);
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
          Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
          Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
          Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 4)));
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 5)));
          NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_15);
          mercury__private_builtin__builtin_compare_string_3_p_0(Res_6, NameA_10, NameB_11);
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__unify_proc__generate_clause_info_6_p_0(
  MR_Word SpecialPredId_7,
  MR_Word Type_8,
  MR_Word TypeBody_9,
  MR_Word Context_10,
  MR_Word ModuleInfo_11,
  MR_Word * ClauseInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypes_13;
    MR_Word Args_17;
    MR_Word Clause_20;
    MR_Word VarSet_23;
    MR_Word Types_24;
    MR_Word TVarNameMap_25;
    MR_Word ArgVec_26;
    MR_Word ClausesRep_27;
    MR_Word RttiVarMaps_28;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word VarSet_67;
    MR_Word VarTypes_68;
    MR_Word RttiVarMaps_69;
    MR_Word _Modes_14;
    MR_Word _Det_15;
    MR_Word Var_72;
    MR_Word Var_74;

    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_7, Type_8, &ArgTypes_13, &_Modes_14, &_Det_15);
    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &VarSet_67);
    hlds__vartypes__init_vartypes_1_p_0(&VarTypes_68);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_69);
    {
      STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (VarSet_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (VarTypes_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (RttiVarMaps_69));
    }
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &Args_17, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_34_34);
    switch (SpecialPredId_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Res_22;
          MR_Word X_58;
          MR_Word Y_59;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;

          succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              X_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0)));
              Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Y_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0)));
                Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1)));
                succeeded = (Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_compare_proc_body_9_p_0(Type_8, TypeBody_9, Res_22, X_58, Y_59, Context_10, &Clause_20, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_48_48);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Index_21;
          MR_Word X_56;
          MR_Word Var_41;
          MR_Word Var_42;

          succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            X_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1)));
              succeeded = (Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_index_proc_body_8_p_0(Type_8, TypeBody_9, X_56, Index_21, Context_10, &Clause_20, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_48_48);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word X_18;
          MR_Word Y_19;
          MR_Word Var_46;
          MR_Word Var_47;

          succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
              succeeded = (Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_unify_proc_body_8_p_0(Type_8, TypeBody_9, X_18, Y_19, Context_10, &Clause_20, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_48_48);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
              return;
            }
          }
        }
        break;
    }
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
    VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
    Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
    mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &TVarNameMap_25);
    ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], (MR_Integer) 0, Args_17);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Clause_20));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_52, &ClausesRep_27);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_28);
    Var_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ClauseInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Types_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Types_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ArgVec_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_28));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_16;
    MR_Word Vars_17;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Integer Var_22;
    MR_String NumStr_32;
    MR_String Name_33;
    MR_Word VarSet0_41;
    MR_Word VarTypes0_42;
    MR_Word VarSet_43;
    MR_Word VarTypes_44;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_55;

    mercury__string__int_to_string_2_p_0(Num_3, &NumStr_32);
    mercury__string__append_3_p_2(BaseName_2, NumStr_32, &Name_33);
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_33, &Var_16, VarSet0_41, &VarSet_43);
    hlds__vartypes__add_var_type_4_p_0(Var_16, Type_12, VarTypes0_42, &VarTypes_44);
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    {
      STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (VarSet_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (VarTypes_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_56));
    }
    Var_22 = (Num_3 + (MR_Integer) 1);
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(Types_13, BaseName_2, Var_22, &Vars_17, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_17));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word TypeBody_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Clause_16,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
    MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
    MR_Word TypeCtor_19;
    MR_Word Var_42;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_19);
    Var_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(TypeCtor_19);
    succeeded = (Var_42 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Goal_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Goal0_81;
      MR_Word Var_82;
      MR_Word SymName_85;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Builtin_90;
      MR_Word Var_91;

      Builtin_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Builtin_90));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_String) "comparison_result"));
      }
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SymName_85, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), SymName_85, 1) = ((MR_Box) ((MR_String) "="));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (SymName_85));
        MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (Var_87));
      }
      hlds__make_goal__make_const_construction_3_p_0(Res_12, Var_82, &Goal0_81);
      hlds__hlds_goal__goal_set_context_3_p_0(Context_15, Goal0_81, &Goal_72);
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Y_14));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (X_13));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Res_12));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
      }
      check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_73, Goal_72, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
    }
    else
    {
      MR_Word UserEqComp_20;

      succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_18, TypeBody_11, &UserEqComp_20);
      if (succeeded)
        check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(UserEqComp_20, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
      else
        switch (MR_tag((MR_Word) TypeBody_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_49;

              Var_49 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(Var_49, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 0)));
              MR_Word DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 3)));
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 1)));
              MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 2)));
              MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 4)));
              MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 5)));
              MR_Word Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_11, (MR_Integer) 7)));

              switch (MR_tag((MR_Word) DuTypeKind_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DuTypeKind_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                      break;
                    case (MR_Integer) 2:
                      check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(Type_10, Ctors_21, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_24, (MR_Integer) 1)));
                    MR_Word IsDummyType_34;
                    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_24, (MR_Integer) 0)));
                    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_24, (MR_Integer) 2)));

                    IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_18, ArgType_32);
                    switch (IsDummyType_34) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                        break;
                      case (MR_Integer) 1:
                        check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(Type_10, Ctors_21, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_11, (MR_Integer) 0)));
              MR_Word IsDummyType_58;

              IsDummyType_58 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_18, EqvType_35);
              switch (IsDummyType_58) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(EqvType_35, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_18);
                  if (succeeded)
                  {
                    MR_Word TypeCategory_39;

                    TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_18, Type_10);
                    check_hlds__unify_proc__generate_builtin_compare_8_p_0(TypeCategory_39, Res_12, X_13, Y_14, Context_15, Clause_16, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
                      return;
                    }
                  }
                }
                break;
            }
            break;
        }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_6;

    check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Res_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Res_6));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word Ctors0_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Clause_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    MR_Word Globals_19;
    MR_Word LexicalOrder_20;
    MR_Word Ctors_21;
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 282, &LexicalOrder_20);
    switch (LexicalOrder_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Ctors_21 = Ctors0_11;
        break;
      case (MR_Integer) 1:
        {
          mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_9[3], Ctors0_11, &Ctors_21);
        }
        break;
    }
    if ((Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
        return;
      }
    }
    else
    {
      MR_Integer CompareSpec_24;
      MR_Integer NumCtors_25;
      MR_Word Goal0_27;
      MR_Word Goal_28;
      MR_Word HeadVars_29;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word Var_39;
      MR_Word Var_40;

      libs__globals__lookup_int_option_3_p_0(Globals_19, (MR_Integer) 323, &CompareSpec_24);
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, Ctors_21, &NumCtors_25);
      succeeded = (NumCtors_25 <= CompareSpec_24);
      if (succeeded)
      {
        MR_Word TypeCtor_26;
        MR_Word Cases_65;
        MR_Word GoalInfo0_66;
        MR_Word GoalInfo_67;
        MR_Word STATE_VARIABLE_Cases_39_98;
        MR_Word STATE_VARIABLE_Info_40_99;
        MR_Word RightCtor_117;
        MR_Word RightCtors_118;
        MR_Word Case_126;
        MR_String Cmp1_127;
        MR_Word STATE_VARIABLE_Info_44_133;
        MR_Word Var_135;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_26);
        RightCtor_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_21, (MR_Integer) 0)));
        RightCtors_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_21, (MR_Integer) 1)));
        succeeded = parse_tree__prog_data____Unify____constructor_0_0(RightCtor_117, RightCtor_117);
        if (succeeded)
        {
          check_hlds__unify_proc__generate_compare_case_10_p_0(TypeCtor_26, RightCtor_117, Res_12, X_13, Y_14, Context_15, (MR_Integer) 1, &Case_126, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_44_133);
          Cmp1_127 = (MR_String) "<";
        }
        else
        {
          check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(TypeCtor_26, RightCtor_117, RightCtor_117, (MR_String) ">", Res_12, X_13, Y_14, Context_15, &Case_126, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_44_133);
          Cmp1_127 = (MR_String) ">";
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Case_126));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(TypeCtor_26, RightCtor_117, RightCtors_118, Cmp1_127, Res_12, X_13, Y_14, Context_15, Var_135, &STATE_VARIABLE_Cases_39_98, STATE_VARIABLE_Info_44_133, &STATE_VARIABLE_Info_40_99);
        check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(TypeCtor_26, RightCtors_118, Ctors_21, Res_12, X_13, Y_14, Context_15, STATE_VARIABLE_Cases_39_98, &Cases_65, STATE_VARIABLE_Info_40_99, &STATE_VARIABLE_Info_35_35);
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_66);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_66, &GoalInfo_67);
        hlds__hlds_goal__disj_list_to_goal_3_p_0(Cases_65, GoalInfo_67, &Goal0_27);
      }
      else
        check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(Type_10, Ctors_21, Res_12, X_13, Y_14, Context_15, &Goal0_27, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Res_12));
      }
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_13, Y_14, Var_37, Goal0_27, &Goal_28, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_38_38);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Y_14));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (X_13));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVars_29, 0) = ((MR_Box) (Res_12));
        MR_hl_field(MR_mktag(1), HeadVars_29, 1) = ((MR_Box) (Var_39));
      }
      check_hlds__unify_proc__quantify_clause_body_6_p_0(HeadVars_29, Goal_28, Context_15, Clause_16, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_31);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
  MR_Word Type_10,
  MR_Word Ctors_11,
  MR_Word Res_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_Word IntType_18;
    MR_Word X_Index_19;
    MR_Word Y_Index_20;
    MR_Word R_21;
    MR_Word GoalInfo0_22;
    MR_Word GoalInfo_23;
    MR_Word X_InstmapDelta_24;
    MR_Word Call_X_Index_25;
    MR_Word Y_InstmapDelta_26;
    MR_Word Call_Y_Index_27;
    MR_Word Call_Less_Than_28;
    MR_Word Call_Greater_Than_29;
    MR_Word Return_Less_Than_30;
    MR_Word Return_Greater_Than_31;
    MR_Word Return_R_32;
    MR_Word TypeCtor_33;
    MR_Word Cases_34;
    MR_Word CasesGoal_35;
    MR_Word Abort_36;
    MR_Word HandleEqualGoal_37;
    MR_Word HandleGreaterEqualGoal_38;
    MR_Word HandleLessGreaterEqualGoal_39;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_Info_60_60;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word Var_76;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;

    IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_18, &X_Index_19, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_42_42);
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_18, &Y_Index_20, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
    Var_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(Var_44, &R_21, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_45_45);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_22);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_22, &GoalInfo_23);
    X_InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(X_Index_19);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (X_Index_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    check_hlds__unify_proc__build_specific_call_9_p_0(Type_10, (MR_Integer) 1, Var_47, X_InstmapDelta_24, (MR_Integer) 0, Context_15, &Call_X_Index_25, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_49_49);
    Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(Y_Index_20);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Y_Index_20));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    check_hlds__unify_proc__build_specific_call_9_p_0(Type_10, (MR_Integer) 1, Var_53, Y_InstmapDelta_26, (MR_Integer) 0, Context_15, &Call_Y_Index_27, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_55_55);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (X_Index_19));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_56));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", Var_59, Context_15, &Call_Less_Than_28, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_60_60);
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", Var_59, Context_15, &Call_Greater_Than_29, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_65_65);
    Var_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    hlds__make_goal__make_const_construction_3_p_0(Res_12, Var_68, &Return_Less_Than_30);
    Var_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    hlds__make_goal__make_const_construction_3_p_0(Res_12, Var_70, &Return_Greater_Than_31);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (R_21));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Res_12, Var_72, Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Return_R_32);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_33);
    check_hlds__unify_proc__generate_compare_cases_9_p_0(TypeCtor_33, Ctors_11, R_21, X_13, Y_14, Context_15, &Cases_34, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_75_75);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Cases_34));
    }
    {
      CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CasesGoal_35, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), CasesGoal_35, 1) = ((MR_Box) (GoalInfo_23));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_15, &Abort_36, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_41);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (CasesGoal_35));
      MR_hl_field(MR_mktag(3), Var_80, 3) = ((MR_Box) (Return_R_32));
      MR_hl_field(MR_mktag(3), Var_80, 4) = ((MR_Box) (Abort_36));
    }
    {
      HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleEqualGoal_37, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), HandleEqualGoal_37, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Call_Greater_Than_29));
      MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (Return_Greater_Than_31));
      MR_hl_field(MR_mktag(3), Var_82, 4) = ((MR_Box) (HandleEqualGoal_37));
    }
    {
      HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_38, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_38, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (Call_Less_Than_28));
      MR_hl_field(MR_mktag(3), Var_84, 3) = ((MR_Box) (Return_Less_Than_30));
      MR_hl_field(MR_mktag(3), Var_84, 4) = ((MR_Box) (HandleGreaterEqualGoal_38));
    }
    {
      HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (HandleLessGreaterEqualGoal_39));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Call_Y_Index_27));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Call_X_Index_25));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (Var_88));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_23));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
  MR_Word Type_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    MR_Word PredName_19;
    MR_Word PredId_20;
    MR_Integer ProcId_21;

    succeeded = check_hlds__polymorphism__get_special_proc_6_p_0(Type_10, SpecialPredId_11, ModuleInfo_18, &PredName_19, &PredId_20, &ProcId_21);
    if (succeeded)
    {
      MR_Word GoalExpr_22;
      MR_Word NonLocals_23;
      MR_Word GoalInfo0_24;
      MR_Word GoalInfo_25;

      {
        GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 0) = ((MR_Box) (PredId_20));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 1) = ((MR_Box) (ProcId_21));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 2) = ((MR_Box) (ArgVars_12));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), GoalExpr_22, 5) = ((MR_Box) (PredName_19));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ArgVars_12, &NonLocals_23);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_13, Detism_14, (MR_Integer) 0, &GoalInfo0_24);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_24, &GoalInfo_25);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
        return;
      }
    }
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  }
  else
  {
    MR_Word Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Case_25;
    MR_Word Cases_26;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__unify_proc__generate_compare_case_10_p_0(HeadVar__1_1, Ctor_19, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, (MR_Integer) 0, &Case_25, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_31_31);
    check_hlds__unify_proc__generate_compare_cases_9_p_0(HeadVar__1_1, Ctors_20, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Cases_26, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_26));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cases_0_8,
  MR_Word * STATE_VARIABLE_Cases_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Cases_9 = STATE_VARIABLE_Cases_0_8;
    }
    else
    {
      MR_Word LeftCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word LeftCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Cases_39_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

      check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(HeadVar__1_1, LeftCtor_25, HeadVar__3_3, (MR_String) ">", HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_Cases_0_8, &STATE_VARIABLE_Cases_39_39, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_40_40);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = LeftCtors_26;
      next_value_of_STATE_VARIABLE_Cases_0_8 = STATE_VARIABLE_Cases_39_39;
      next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_40_40;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cases_0_8 = next_value_of_STATE_VARIABLE_Cases_0_8;
      STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      *STATE_VARIABLE_Cases_10 = STATE_VARIABLE_Cases_0_9;
    }
    else
    {
      MR_Word RightCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word RightCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Case_37;
      MR_String Cmp1_38;
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word Var_46;
      MR_Word next_value_of_HeadVar__3_3;
      MR_String next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_11;

      succeeded = parse_tree__prog_data____Unify____constructor_0_0(HeadVar__2_2, RightCtor_28);
      if (succeeded)
      {
        check_hlds__unify_proc__generate_compare_case_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, (MR_Integer) 1, &Case_37, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_44_44);
        Cmp1_38 = (MR_String) "<";
      }
      else
      {
        check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(HeadVar__1_1, HeadVar__2_2, RightCtor_28, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, &Case_37, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_44_44);
        Cmp1_38 = HeadVar__4_4;
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Case_37));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_9));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = RightCtors_29;
      next_value_of_HeadVar__4_4 = Cmp1_38;
      next_value_of_STATE_VARIABLE_Cases_0_9 = Var_46;
      next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Cases_0_9 = next_value_of_STATE_VARIABLE_Cases_0_9;
      STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word Ctor1_13,
  MR_Word Ctor2_14,
  MR_String CompareOp_15,
  MR_Word R_16,
  MR_Word X_17,
  MR_Word Y_18,
  MR_Word Context_19,
  MR_Word * Case_20,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_Word TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
    MR_Word ExistQTVars1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 0)));
    MR_Word FunctorName1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 2)));
    MR_Word ArgTypes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 3)));
    MR_Word ExistQTVars2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 0)));
    MR_Word FunctorName2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 2)));
    MR_Word ArgTypes2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 3)));
    MR_Integer FunctorArity1_34;
    MR_Integer FunctorArity2_35;
    MR_Word FunctorConsId1_36;
    MR_Word FunctorConsId2_37;
    MR_Word Vars1_38;
    MR_Word Vars2_39;
    MR_Word RHS1_40;
    MR_Word RHS2_41;
    MR_Word UnifyX_Goal_42;
    MR_Word UnifyY_Goal_43;
    MR_Word ReturnResult_44;
    MR_Word GoalList_45;
    MR_Word GoalInfo0_46;
    MR_Word GoalInfo_47;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word SymName_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Builtin_69;
    MR_Word Var_70;
    MR_Word _Constraints1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 1)));
    MR_Integer _Arity1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 4)));
    MR_Word _Ctxt1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor1_13, (MR_Integer) 5)));
    MR_Word _Constraints2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 1)));
    MR_Integer _Arity2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 4)));
    MR_Word _Ctxt2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor2_14, (MR_Integer) 5)));

    mercury__list__length_2_p_0(TypeCtorInfo_62_62, ArgTypes1_25, &FunctorArity1_34);
    mercury__list__length_2_p_0(TypeCtorInfo_62_62, ArgTypes2_31, &FunctorArity2_35);
    {
      FunctorConsId1_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId1_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId1_36, 1) = ((MR_Box) (FunctorName1_24));
      MR_hl_field(MR_mktag(3), FunctorConsId1_36, 2) = ((MR_Box) (FunctorArity1_34));
      MR_hl_field(MR_mktag(3), FunctorConsId1_36, 3) = ((MR_Box) (TypeCtor_12));
    }
    {
      FunctorConsId2_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId2_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId2_37, 1) = ((MR_Box) (FunctorName2_30));
      MR_hl_field(MR_mktag(3), FunctorConsId2_37, 2) = ((MR_Box) (FunctorArity2_35));
      MR_hl_field(MR_mktag(3), FunctorConsId2_37, 3) = ((MR_Box) (TypeCtor_12));
    }
    check_hlds__unify_proc__make_fresh_vars_5_p_0(ArgTypes1_25, ExistQTVars1_22, &Vars1_38, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_50_50);
    check_hlds__unify_proc__make_fresh_vars_5_p_0(ArgTypes2_31, ExistQTVars2_28, &Vars2_39, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_49);
    {
      RHS1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS1_40, 0) = ((MR_Box) (FunctorConsId1_36));
      MR_hl_field(MR_mktag(1), RHS1_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS1_40, 2) = ((MR_Box) (Vars1_38));
    }
    {
      RHS2_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS2_41, 0) = ((MR_Box) (FunctorConsId2_37));
      MR_hl_field(MR_mktag(1), RHS2_41, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS2_41, 2) = ((MR_Box) (Vars2_39));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_17, RHS1_40, Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_42);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_18, RHS2_41, Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyY_Goal_43);
    Builtin_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Builtin_69));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_67 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_64, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), SymName_64, 1) = ((MR_Box) (CompareOp_15));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (SymName_64));
      MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (Var_66));
    }
    hlds__make_goal__make_const_construction_3_p_0(R_16, Var_58, &ReturnResult_44);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ReturnResult_44));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (UnifyY_Goal_43));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      GoalList_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_45, 0) = ((MR_Box) (UnifyX_Goal_42));
      MR_hl_field(MR_mktag(1), GoalList_45, 1) = ((MR_Box) (Var_59));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_46);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_19, GoalInfo0_46, &GoalInfo_47);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_45, GoalInfo_47, Case_20);
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1692__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word ExistQTVars_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  if ((ExistQTVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word ArgTypes_10;

    ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_9[2], CtorArgs_6);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_10, Vars_8, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
  else
  {
    MR_Word VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Integer NumVars_15;
    MR_Word VarSet_16;
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_43;

    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, CtorArgs_6, &NumVars_15);
    mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NumVars_15, Vars_8, VarSet0_14, &VarSet_16);
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_10;
    MR_Word Vars_11;
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
    MR_Word VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
    MR_Word VarSet_24;
    MR_Word VarTypes_25;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
    MR_Word Var_35;
    MR_Word Var_36;

    mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &Var_10, VarSet0_22, &VarSet_24);
    hlds__vartypes__add_var_type_4_p_0(Var_10, Type_8, VarTypes0_23, &VarTypes_25);
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (VarSet_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (VarTypes_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (Var_37));
    }
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(Types_9, &Vars_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_11));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_VarY_5;

    conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_VarY_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_VarX_4;

    conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_VarX_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word Ctor_12,
  MR_Word R_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word Context_16,
  MR_Word Kind_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_Word ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
    MR_Word FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2)));
    MR_Word ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3)));
    MR_Integer FunctorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4)));
    MR_Word FunctorConsId_26;
    MR_Word GoalList_30;
    MR_Word GoalInfo0_40;
    MR_Word GoalInfo_41;
    MR_Word _Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1)));
    MR_Word _Ctxt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5)));

    {
      FunctorConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId_26, 1) = ((MR_Box) (FunctorName_22));
      MR_hl_field(MR_mktag(3), FunctorConsId_26, 2) = ((MR_Box) (FunctorArity_24));
      MR_hl_field(MR_mktag(3), FunctorConsId_26, 3) = ((MR_Box) (TypeCtor_11));
    }
    if ((ArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word RHS_27;
      MR_Word UnifyX_Goal_28;
      MR_Word EqualGoal_29;
      MR_Word Goal0_79;
      MR_Word Var_80;
      MR_Word SymName_83;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Builtin_88;
      MR_Word Var_89;

      {
        RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_27, 0) = ((MR_Box) (FunctorConsId_26));
        MR_hl_field(MR_mktag(1), RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_14, RHS_27, Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_28);
      Builtin_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Builtin_88));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_String) "comparison_result"));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      Var_86 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        SymName_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SymName_83, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), SymName_83, 1) = ((MR_Box) ((MR_String) "="));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (SymName_83));
        MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_80, 3) = ((MR_Box) (Var_85));
      }
      hlds__make_goal__make_const_construction_3_p_0(R_13, Var_80, &Goal0_79);
      hlds__hlds_goal__goal_set_context_3_p_0(Context_16, Goal0_79, &EqualGoal_29);
      switch (Kind_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_66;

            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (EqualGoal_29));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_28));
              MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_66));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnifyY_Goal_31;
            MR_Word Var_63;
            MR_Word Var_64;

            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_15, RHS_27, Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyY_Goal_31);
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (EqualGoal_29));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (UnifyY_Goal_31));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
            }
            {
              GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_28));
              MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_63));
            }
          }
          break;
      }
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
    }
    else
    {
      MR_Word TypeCtorInfo_70_70;
      MR_Word TypeInfo_71_71;
      MR_Word TypedVarPairs_34;
      MR_Word VarsX_35;
      MR_Word VarsY_36;
      MR_Word RHSX_37;
      MR_Word RHSY_38;
      MR_Word CompareArgs_Goal_39;
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word UnifyX_Goal_68;
      MR_Word UnifyY_Goal_69;

      check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(ExistQTVars_20, ArgTypes_23, &TypedVarPairs_34, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_44_44);
      TypeCtorInfo_70_70 = (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0;
      TypeInfo_71_71 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[1];
      VarsX_35 = mercury__list__map_2_f_0(TypeCtorInfo_70_70, TypeInfo_71_71, (MR_Word) &check_hlds__unify_proc_scalar_common_9[0], TypedVarPairs_34);
      VarsY_36 = mercury__list__map_2_f_0(TypeCtorInfo_70_70, TypeInfo_71_71, (MR_Word) &check_hlds__unify_proc_scalar_common_9[1], TypedVarPairs_34);
      {
        RHSX_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_37, 0) = ((MR_Box) (FunctorConsId_26));
        MR_hl_field(MR_mktag(1), RHSX_37, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_37, 2) = ((MR_Box) (VarsX_35));
      }
      {
        RHSY_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_38, 0) = ((MR_Box) (FunctorConsId_26));
        MR_hl_field(MR_mktag(1), RHSY_38, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_38, 2) = ((MR_Box) (VarsY_36));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_14, RHSX_37, Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyX_Goal_68);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_15, RHSY_38, Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyY_Goal_69);
      check_hlds__unify_proc__compare_args_7_p_0(ExistQTVars_20, TypedVarPairs_34, R_13, Context_16, &CompareArgs_Goal_39, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_43);
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CompareArgs_Goal_39));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (UnifyY_Goal_69));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
      }
      {
        GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_68));
        MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_54));
      }
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_40);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_16, GoalInfo0_40, &GoalInfo_41);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_30, GoalInfo_41, Case_18);
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(
  MR_Word ExistQTVars_6,
  MR_Word CtorArgs_7,
  MR_Word * TypedVarPairs_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word GiveFreshVarsTypes_10;
    MR_Word VarSet0_13;
    MR_Word VarTypes0_14;
    MR_Word VarSet_15;
    MR_Word VarTypes_16;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_30;

    if ((ExistQTVars_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      GiveFreshVarsTypes_10 = (MR_Integer) 1;
    else
      GiveFreshVarsTypes_10 = (MR_Integer) 0;
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    VarSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    VarTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(GiveFreshVarsTypes_10, (MR_Integer) 1, CtorArgs_7, TypedVarPairs_8, VarSet0_13, &VarSet_15, VarTypes0_14, &VarTypes_16);
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word TypeCtorInfo_34_60;
    MR_Word CtorArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word CtorArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word TypedVarPair_21;
    MR_Word TypedVarPairs_22;
    MR_Word STATE_VARIABLE_VarSet_29_29;
    MR_Word STATE_VARIABLE_VarTypes_30_30;
    MR_Integer Var_31;
    MR_Word ArgType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 1)));
    MR_String ArgNumStr_46;
    MR_Word VarX_47;
    MR_Word VarY_48;
    MR_String Var_49;
    MR_Word STATE_VARIABLE_VarSet_24_50;
    MR_String Var_52;
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 0)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 2)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 3)));

    ArgNumStr_46 = mercury__string__int_to_string_1_f_0(HeadVar__2_2);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "ArgX", ArgNumStr_46);
    TypeCtorInfo_34_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__new_named_var_4_p_0(TypeCtorInfo_34_60, Var_49, &VarX_47, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_24_50);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "ArgY", ArgNumStr_46);
    mercury__varset__new_named_var_4_p_0(TypeCtorInfo_34_60, Var_52, &VarY_48, STATE_VARIABLE_VarSet_24_50, &STATE_VARIABLE_VarSet_29_29);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_VarTypes_30_30 = STATE_VARIABLE_VarTypes_0_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_VarTypes_29_55;

          hlds__vartypes__add_var_type_4_p_0(VarX_47, ArgType_45, STATE_VARIABLE_VarTypes_0_7, &STATE_VARIABLE_VarTypes_29_55);
          hlds__vartypes__add_var_type_4_p_0(VarY_48, ArgType_45, STATE_VARIABLE_VarTypes_29_55, &STATE_VARIABLE_VarTypes_30_30);
        }
        break;
    }
    {
      TypedVarPair_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypedVarPair_21, 0) = ((MR_Box) (ArgType_45));
      MR_hl_field(MR_mktag(0), TypedVarPair_21, 1) = ((MR_Box) (VarX_47));
      MR_hl_field(MR_mktag(0), TypedVarPair_21, 2) = ((MR_Box) (VarY_48));
    }
    Var_31 = (HeadVar__2_2 + (MR_Integer) 1);
    check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(HeadVar__1_1, Var_31, CtorArgs_20, &TypedVarPairs_22, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_VarTypes_30_30, STATE_VARIABLE_VarTypes_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedVarPair_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedVarPairs_22));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69 = ((MR_Word) (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69);
    check_hlds__unify_proc__compare_args_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
    (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__TypeInfo_72_72, ((MR_Box) ((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVar_69)), ((MR_Box) ((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71)));
    if ((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded)
      check_hlds__unify_proc__compare_args_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) env_ptr_arg;

    parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22, &(env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__Var_71, check_hlds__unify_proc__compare_args_7_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__conv0_ExistQTVar_69, (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__compare_args_7_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_args_7_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word R_3,
  MR_Word Context_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    struct check_hlds__unify_proc__compare_args_7_p_0_env_0_s env;

    (env).check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1 = ExistQTVars_1;
    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Goal0_76;
        MR_Word Var_77;
        MR_Word SymName_80;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Builtin_85;
        MR_Word Var_86;

        Builtin_85 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Builtin_85));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_String) "comparison_result"));
        }
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        Var_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          SymName_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_80, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), SymName_80, 1) = ((MR_Box) ((MR_String) "="));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (SymName_80));
          MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_77, 3) = ((MR_Box) (Var_82));
        }
        hlds__make_goal__make_const_construction_3_p_0(R_3, Var_77, &Goal0_76);
        hlds__hlds_goal__goal_set_context_3_p_0(Context_4, Goal0_76, HeadVar__5_5);
        *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      }
      else
      {
        MR_Word TypedVarPair_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word TypedVarPairs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word X_23;
        MR_Word Y_24;
        MR_Word GoalInfo0_25;
        MR_Word GoalInfo_26;
        MR_String ComparePred_28;
        MR_Word ModuleInfo_29;
        MR_Word IsDummy_30;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        (env).check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 0)));
        X_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 1)));
        Y_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 2)));
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_25);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_4, GoalInfo0_25, &GoalInfo_26);
        check_hlds__unify_proc__compare_args_7_p_0_5(&env);
        if ((env).check_hlds__unify_proc__compare_args_7_p_0_env_0__succeeded)
          ComparePred_28 = (MR_String) "typed_compare";
        else
          ComparePred_28 = (MR_String) "compare";
        ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
        Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
        Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
        Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
        IsDummy_30 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_29, (env).check_hlds__unify_proc__compare_args_7_p_0_env_0__Type_22);
        switch (IsDummy_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__2_2 = TypedVarPairs_17;

              // direct tailcall eliminated
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
            if ((TypedVarPairs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_63;
              MR_Word Var_65;
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Y_24));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (X_23));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (R_3));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
              }
              check_hlds__unify_proc__build_call_6_p_0(ComparePred_28, Var_63, Context_4, HeadVar__5_5, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
            }
            else
            {
              MR_Word R1_33;
              MR_Word Do_Comparison_34;
              MR_Word Check_Equal_35;
              MR_Word CheckNotEqual_36;
              MR_Word Return_R1_37;
              MR_Word Condition_38;
              MR_Word ElseCase_39;
              MR_Word Var_42;
              MR_Word STATE_VARIABLE_Info_43_43;
              MR_Word Var_44;
              MR_Word STATE_VARIABLE_Info_45_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_49;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_55;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_61;

              Var_42 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              check_hlds__unify_proc__info_new_var_4_p_0(Var_42, &R1_33, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_43_43);
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Y_24));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (X_23));
                MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (R1_33));
                MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
              }
              check_hlds__unify_proc__build_call_6_p_0(ComparePred_28, Var_44, Context_4, &Do_Comparison_34, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_45_45);
              Var_49 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
              hlds__make_goal__make_const_construction_3_p_0(R1_33, Var_49, &Check_Equal_35);
              Var_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Check_Equal_35);
              {
                CheckNotEqual_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckNotEqual_36, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(0), CheckNotEqual_36, 1) = ((MR_Box) (GoalInfo_26));
              }
              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (R1_33));
              }
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(R_3, Var_52, Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Return_R1_37);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CheckNotEqual_36));
                MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Do_Comparison_34));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_57));
              }
              {
                Condition_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Condition_38, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), Condition_38, 1) = ((MR_Box) (GoalInfo_26));
              }
              check_hlds__unify_proc__compare_args_7_p_0((env).check_hlds__unify_proc__compare_args_7_p_0_env_0__ExistQTVars_1, TypedVarPairs_17, R_3, Context_4, &ElseCase_39, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_7);
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), Var_61, 2) = ((MR_Box) (Condition_38));
                MR_hl_field(MR_mktag(3), Var_61, 3) = ((MR_Box) (Return_R1_37));
                MR_hl_field(MR_mktag(3), Var_61, 4) = ((MR_Box) (ElseCase_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_26));
              }
            }
            break;
        }
      }
      break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_4;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Builtin_9;
    MR_Word Var_10;

    Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Builtin_9));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), SymName_4, 1) = ((MR_Box) (Name_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (SymName_4));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 3) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
  MR_Word EqvType_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word CastX_16;
    MR_Word CastY_17;
    MR_Word CastXGoal_18;
    MR_Word CastYGoal_19;
    MR_Word CompareGoal_20;
    MR_Word GoalInfo0_21;
    MR_Word GoalInfo_22;
    MR_Word Goal_23;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_String NumStr_56;
    MR_String Name_57;
    MR_Word VarSet0_65;
    MR_Word VarTypes0_66;
    MR_Word VarSet_67;
    MR_Word VarTypes_68;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_79;

    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_56);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_56, &Name_57);
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_57, &CastX_16, VarSet0_65, &VarSet_67);
    hlds__vartypes__add_var_type_4_p_0(CastX_16, EqvType_9, VarTypes0_66, &VarTypes_68);
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    {
      STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (VarSet_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (VarTypes_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (Var_80));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_17, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_31_31);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_11, CastX_16, Context_13, &CastXGoal_18);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_12, CastY_17, Context_13, &CastYGoal_19);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CastY_17));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CastX_16));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Res_10));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", Var_35, Context_13, &CompareGoal_20, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_36_36);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_21);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo0_21, &GoalInfo_22);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CompareGoal_20));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CastYGoal_19));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (CastXGoal_18));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_40, GoalInfo_22, &Goal_23);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Y_12));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Res_10));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_44, Goal_23, Context_13, Clause_14, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
  MR_Word UnifyCompare_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  if (((MR_tag((MR_Word) UnifyCompare_9)) == (MR_mktag((MR_Integer) 1))))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
      return;
    }
  }
  else
  {
    MR_Word MaybeCompare_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyCompare_9, (MR_Integer) 1)));
    MR_Word ArgVars_19;
    MR_Word Goal_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyCompare_9, (MR_Integer) 0)));

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Y_12));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      ArgVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_19, 0) = ((MR_Box) (Res_10));
      MR_hl_field(MR_mktag(1), ArgVars_19, 1) = ((MR_Box) (Var_29));
    }
    if ((MaybeCompare_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", ArgVars_19, Context_13, &Goal_26, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_37_37);
    }
    else
    {
      MR_Word ComparePredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCompare_18, (MR_Integer) 0)));
      MR_Word PredId_21;
      MR_Integer ModeId_22;
      MR_Word Call_23;
      MR_Word GoalInfo_24;
      MR_Word Goal0_25;
      MR_Word Var_36;

      PredId_21 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      ModeId_22 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      {
        Call_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Call_23, 0) = ((MR_Box) (PredId_21));
        MR_hl_field(MR_mktag(2), Call_23, 1) = ((MR_Box) (ModeId_22));
        MR_hl_field(MR_mktag(2), Call_23, 2) = ((MR_Box) (ArgVars_19));
        MR_hl_field(MR_mktag(2), Call_23, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), Call_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), Call_23, 5) = ((MR_Box) (ComparePredName_20));
      }
      hlds__hlds_goal__goal_info_init_2_p_0(Context_13, &GoalInfo_24);
      {
        Goal0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal0_25, 0) = ((MR_Box) (Call_23));
        MR_hl_field(MR_mktag(0), Goal0_25, 1) = ((MR_Box) (GoalInfo_24));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Res_10));
      }
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_13, X_11, Y_12, Var_36, Goal0_25, &Goal_26, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_37_37);
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_19, Goal_26, Context_13, Clause_14, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_28);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word ArgVars_14;
    MR_Word Goal_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_14, 0) = ((MR_Box) (Res_8));
      MR_hl_field(MR_mktag(1), ArgVars_14, 1) = ((MR_Box) (Var_18));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", ArgVars_14, Context_11, &Goal_15, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_22_22);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_14, Goal_15, Context_11, Clause_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_compare_8_p_0(
  MR_Word CtorCat_9,
  MR_Word Res_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ArgVars_16;
    MR_String Name_17;
    MR_Word CompareGoal_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Info_48_48;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Y_12));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      ArgVars_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_16, 0) = ((MR_Box) (Res_10));
      MR_hl_field(MR_mktag(1), ArgVars_16, 1) = ((MR_Box) (Var_24));
    }
    switch (MR_tag((MR_Word) CtorCat_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_17 = (MR_String) "builtin_compare_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_9, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) Var_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Name_17 = (MR_String) "builtin_compare_float";
                  break;
                case (MR_Integer) 1:
                  Name_17 = (MR_String) "builtin_compare_character";
                  break;
                case (MR_Integer) 2:
                  Name_17 = (MR_String) "builtin_compare_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));

                Name_17 = ((&check_hlds__unify_proc_vector_common_6[8 + Var_51]))->check_hlds__unify_proc__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    check_hlds__unify_proc__build_call_6_p_0(Name_17, ArgVars_16, Context_13, &CompareGoal_21, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_48_48);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_16, CompareGoal_21, Context_13, Clause_14, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Goal_14;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Goal0_25;
    MR_Word Var_26;
    MR_Word SymName_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Builtin_34;
    MR_Word Var_35;

    Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Builtin_34));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_29, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), SymName_29, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (SymName_29));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_26, 3) = ((MR_Box) (Var_31));
    }
    hlds__make_goal__make_const_construction_3_p_0(Res_8, Var_26, &Goal0_25);
    hlds__hlds_goal__goal_set_context_3_p_0(Context_11, Goal0_25, &Goal_14);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Res_8));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_17, Goal_14, Context_11, Clause_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
  MR_Word Res_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word IntType_14;
    MR_Word CastX_15;
    MR_Word CastY_16;
    MR_Word CastXGoal_17;
    MR_Word CastYGoal_18;
    MR_Word CompareGoal_19;
    MR_Word GoalInfo0_20;
    MR_Word GoalInfo_21;
    MR_Word Goal_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_String NumStr_55;
    MR_String Name_56;
    MR_Word VarSet0_64;
    MR_Word VarTypes0_65;
    MR_Word VarSet_66;
    MR_Word VarTypes_67;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_77;
    MR_Word Var_78;

    IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_55);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_55, &Name_56);
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_56, &CastX_15, VarSet0_64, &VarSet_66);
    hlds__vartypes__add_var_type_4_p_0(CastX_15, IntType_14, VarTypes0_65, &VarTypes_67);
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    {
      STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (VarSet_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (VarTypes_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (Var_79));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_16, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_30_30);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_9, CastX_15, Context_11, &CastXGoal_17);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_10, CastY_16, Context_11, &CastYGoal_18);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CastY_16));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CastX_15));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Res_8));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", Var_34, Context_11, &CompareGoal_19, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_35_35);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_20);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_11, GoalInfo0_20, &GoalInfo_21);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CompareGoal_19));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (CastYGoal_18));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (CastXGoal_17));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_39, GoalInfo_21, &Goal_22);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Res_8));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_43, Goal_22, Context_11, Clause_12, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
  MR_Word Type_9,
  MR_Word TypeBody_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_36, (MR_Integer) 0)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_36, (MR_Integer) 1)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_36, (MR_Integer) 2)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_36, (MR_Integer) 3)));
    MR_Word Var_17;

    succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, TypeBody_10, &Var_17);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
        return;
      }
    }
    else
      switch (MR_tag((MR_Word) TypeBody_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 0)));
            MR_Word DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 3)));
            MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 1)));
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 2)));
            MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 4)));
            MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 5)));
            MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 7)));

            switch (MR_tag((MR_Word) DuTypeKind_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word TypeCtor_31;

                      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_31);
                      check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(TypeCtor_31, Ctors_18, X_11, Index_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
                    return;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
                  return;
                }
              }
              break;
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_16;
    MR_Integer conv1_STATE_VARIABLE_N_33;
    MR_Word conv0_STATE_VARIABLE_Info_35;

    check_hlds__unify_proc__generate_du_index_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv2_Goal_16, ((MR_Integer) wrapper_arg_3), &conv1_STATE_VARIABLE_N_33, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_35);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_N_33));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_Word Disjuncts_16;
    MR_Word GoalInfo0_18;
    MR_Word GoalInfo_19;
    MR_Word Goal_20;
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Integer Var_17;
    MR_Box conv4_Var_17;
    MR_Box conv3_STATE_VARIABLE_Info_25_25;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Index_12));
      MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (Context_13));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, Var_23, Ctors_10, &Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_17, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv3_STATE_VARIABLE_Info_25_25);
    Var_17 = ((MR_Integer) conv4_Var_17);
    STATE_VARIABLE_Info_25_25 = ((MR_Word) conv3_STATE_VARIABLE_Info_25_25);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_18);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo0_18, &GoalInfo_19);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Disjuncts_16));
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_19));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Index_12));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_27, Goal_20, Context_13, Clause_14, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_22);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
  MR_Word Type_9,
  MR_Word TypeBody_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 0)));
    MR_Word TypeCtor_17;
    MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 1)));
    MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 2)));
    MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 3)));
    MR_Word Var_41;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_17);
    Var_41 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(TypeCtor_17);
    succeeded = (Var_41 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Goal_18;
      MR_Word Var_42;
      MR_Word Var_44;

      Goal_18 = hlds__make_goal__true_goal_with_context_1_f_0(Context_13);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Y_12));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (X_11));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
      }
      check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_42, Goal_18, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
    }
    else
    {
      MR_Word UserEqComp_19;

      succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, TypeBody_10, &UserEqComp_19);
      if (succeeded)
        check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(UserEqComp_19, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
      else
        switch (MR_tag((MR_Word) TypeBody_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_50;

              Var_50 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(Var_50, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 0)));
              MR_Word DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 3)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 1)));
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 2)));
              MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 4)));
              MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 5)));
              MR_Word Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_10, (MR_Integer) 7)));

              switch (MR_tag((MR_Word) DuTypeKind_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DuTypeKind_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_70;
                        MR_Word Var_72;
                        MR_Word Goal_74;

                        hlds__make_goal__make_simple_test_5_p_0(X_11, Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Goal_74);
                        {
                          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Y_12));
                          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (X_11));
                          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
                        }
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_70, Goal_74, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_64;
                        MR_Word Var_66;
                        MR_Word Goal_75;

                        Goal_75 = hlds__make_goal__true_goal_with_context_1_f_0(Context_13);
                        {
                          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Y_12));
                          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (X_11));
                          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
                        }
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_64, Goal_75, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                      }
                      break;
                    case (MR_Integer) 2:
                      check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(TypeCtor_17, Ctors_20, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_70;
                    MR_Word Var_72;
                    MR_Word Goal_74;

                    hlds__make_goal__make_simple_test_5_p_0(X_11, Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Goal_74);
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Y_12));
                      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (X_11));
                      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
                    }
                    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_70, Goal_74, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_23, (MR_Integer) 1)));
                    MR_Word IsDummyType_33;
                    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_23, (MR_Integer) 0)));
                    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_23, (MR_Integer) 2)));

                    IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_16, ArgType_31);
                    switch (IsDummyType_33) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_60;
                          MR_Word Var_62;
                          MR_Word Goal_76;

                          Goal_76 = hlds__make_goal__true_goal_with_context_1_f_0(Context_13);
                          {
                            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Y_12));
                            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (X_11));
                            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
                          }
                          check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_60, Goal_76, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                        }
                        break;
                      case (MR_Integer) 1:
                        check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(TypeCtor_17, Ctors_20, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_10, (MR_Integer) 0)));
              MR_Word IsDummyType_84;

              IsDummyType_84 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_16, EqvType_34);
              switch (IsDummyType_84) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_54;
                    MR_Word Var_56;
                    MR_Word Goal_81;

                    Goal_81 = hlds__make_goal__true_goal_with_context_1_f_0(Context_13);
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Y_12));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (X_11));
                      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
                    }
                    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_54, Goal_81, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                  }
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(EqvType_34, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_16);
                  if (succeeded)
                  {
                    MR_Word TypeCategory_38;

                    TypeCategory_38 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_16, Type_9);
                    check_hlds__unify_proc__generate_builtin_unify_7_p_0(TypeCategory_38, X_11, Y_12, Context_13, Clause_14, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
                      return;
                    }
                  }
                }
                break;
            }
            break;
        }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_16;
    MR_Word conv0_STATE_VARIABLE_Info_45;

    check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1), &conv1_Goal_16, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Info_45);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_16));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_45));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word Context_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word CanCompareAsInt_16;
    MR_Word Disjuncts_17;
    MR_Word GoalInfo0_18;
    MR_Word GoalInfo_19;
    MR_Word Goal0_20;
    MR_Word Goal_21;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Word Globals_43;
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_Info_25_25;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_42, &Globals_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 279, &CanCompareAsInt_16);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeCtor_9));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Y_12));
      MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (CanCompareAsInt_16));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, Var_24, Ctors_10, &Disjuncts_17, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv2_STATE_VARIABLE_Info_25_25);
    STATE_VARIABLE_Info_25_25 = ((MR_Word) conv2_STATE_VARIABLE_Info_25_25);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_18);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo0_18, &GoalInfo_19);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Disjuncts_17));
    }
    {
      Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal0_20, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Goal0_20, 1) = ((MR_Box) (GoalInfo_19));
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_13, X_11, Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Goal0_20, &Goal_21, STATE_VARIABLE_Info_25_25, &STATE_VARIABLE_Info_28_28);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Y_12));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_29, Goal_21, Context_13, Clause_14, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
  MR_Word X_7,
  MR_Word Y_8,
  MR_Word Context_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word ArgVars_12;
    MR_Word Goal_13;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_19_19;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Y_8));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_12, 0) = ((MR_Box) (X_7));
      MR_hl_field(MR_mktag(1), ArgVars_12, 1) = ((MR_Box) (Var_16));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", ArgVars_12, Context_9, &Goal_13, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_19_19);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_12, Goal_13, Context_9, Clause_10, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
  MR_Word EqvType_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word CastX_14;
    MR_Word CastY_15;
    MR_Word CastXGoal_16;
    MR_Word CastYGoal_17;
    MR_Word UnifyGoal_18;
    MR_Word GoalInfo0_19;
    MR_Word GoalInfo_20;
    MR_Word Goal_21;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_String NumStr_50;
    MR_String Name_51;
    MR_Word VarSet0_59;
    MR_Word VarTypes0_60;
    MR_Word VarSet_61;
    MR_Word VarTypes_62;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_72;
    MR_Word Var_73;

    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_50);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_50, &Name_51);
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_51, &CastX_14, VarSet0_59, &VarSet_61);
    hlds__vartypes__add_var_type_4_p_0(CastX_14, EqvType_8, VarTypes0_60, &VarTypes_62);
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    {
      STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (VarSet_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (VarTypes_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (Var_74));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_8, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_15, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_9, CastX_14, Context_11, &CastXGoal_16);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_10, CastY_15, Context_11, &CastYGoal_17);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (CastY_15));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_14, Var_32, Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyGoal_18);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_19);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_11, GoalInfo0_19, &GoalInfo_20);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (UnifyGoal_18));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CastYGoal_17));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CastXGoal_16));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_35, GoalInfo_20, &Goal_21);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_39, Goal_21, Context_11, Clause_12, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word Type_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_String NumStr_12;
    MR_String Name_13;
    MR_Word VarSet0_23;
    MR_Word VarTypes0_24;
    MR_Word VarSet_25;
    MR_Word VarTypes_26;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;

    mercury__string__int_to_string_2_p_0(Num_9, &NumStr_12);
    mercury__string__append_3_p_2(BaseName_8, NumStr_12, &Name_13);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_13, Var_10, VarSet0_23, &VarSet_25);
    hlds__vartypes__add_var_type_4_p_0(*Var_10, Type_7, VarTypes0_24, &VarTypes_26);
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
  MR_Word UserEqCompare_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word Context_4,
  MR_Word * Clause_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if (((MR_tag((MR_Word) UserEqCompare_1)) == (MR_mktag((MR_Integer) 1))))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
      return;
    }
  }
  else
  {
    MR_Word MaybeUnify_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), UserEqCompare_1, (MR_Integer) 0)));
    MR_Word MaybeCompare_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), UserEqCompare_1, (MR_Integer) 1)));
    MR_Word Goal0_32;
    MR_Word Goal_37;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_66;
    MR_Word Var_68;

    if ((MaybeUnify_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((MaybeCompare_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
          return;
        }
      }
      else
      {
        MR_Word ComparePredName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCompare_26, (MR_Integer) 0)));
        MR_Word ResultVar_34;
        MR_Word CallGoal_35;
        MR_Word UnifyGoal_36;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_50;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word PredId_70;
        MR_Integer ModeId_71;
        MR_Word Call_72;
        MR_Word GoalInfo_73;
        MR_Word Var_83;
        MR_Word SymName_87;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Builtin_92;
        MR_Word Var_93;

        Var_42 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
        check_hlds__unify_proc__info_new_var_4_p_0(Var_42, &ResultVar_34, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_43_43);
        PredId_70 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        ModeId_71 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Y_3));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (X_2));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ResultVar_34));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
        }
        {
          Call_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Call_72, 0) = ((MR_Box) (PredId_70));
          MR_hl_field(MR_mktag(2), Call_72, 1) = ((MR_Box) (ModeId_71));
          MR_hl_field(MR_mktag(2), Call_72, 2) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(2), Call_72, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), Call_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(2), Call_72, 5) = ((MR_Box) (ComparePredName_33));
        }
        hlds__hlds_goal__goal_info_init_2_p_0(Context_4, &GoalInfo_73);
        {
          CallGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CallGoal_35, 0) = ((MR_Box) (Call_72));
          MR_hl_field(MR_mktag(0), CallGoal_35, 1) = ((MR_Box) (GoalInfo_73));
        }
        Builtin_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Builtin_92));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_String) "comparison_result"));
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Var_93));
          MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        Var_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        {
          SymName_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_87, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(1), SymName_87, 1) = ((MR_Box) ((MR_String) "="));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (SymName_87));
          MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_83, 3) = ((MR_Box) (Var_89));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Var_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_34, Var_50, Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &UnifyGoal_36);
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (UnifyGoal_36));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (CallGoal_35));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (Var_56));
        }
        {
          Goal0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal0_32, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), Goal0_32, 1) = ((MR_Box) (GoalInfo_73));
        }
      }
    else
    {
      MR_Word UnifyPredName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUnify_25, (MR_Integer) 0)));
      MR_Word PredId_28;
      MR_Integer ModeId_29;
      MR_Word Call_30;
      MR_Word GoalInfo_31;
      MR_Word Var_59;
      MR_Word Var_60;

      PredId_28 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      ModeId_29 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Y_3));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (X_2));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        Call_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Call_30, 0) = ((MR_Box) (PredId_28));
        MR_hl_field(MR_mktag(2), Call_30, 1) = ((MR_Box) (ModeId_29));
        MR_hl_field(MR_mktag(2), Call_30, 2) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(2), Call_30, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), Call_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), Call_30, 5) = ((MR_Box) (UnifyPredName_27));
      }
      hlds__hlds_goal__goal_info_init_2_p_0(Context_4, &GoalInfo_31);
      {
        Goal0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal0_32, 0) = ((MR_Box) (Call_30));
        MR_hl_field(MR_mktag(0), Goal0_32, 1) = ((MR_Box) (GoalInfo_31));
      }
      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_6;
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_4, X_2, Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Goal0_32, &Goal_37, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_65_65);
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Y_3));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (X_2));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_66, Goal_37, Context_4, Clause_5, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_7);
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UPI_0_12,
  MR_Word * STATE_VARIABLE_UPI_13)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    MR_Word VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    MR_Word VarSet_10;
    MR_Word VarTypes_11;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    MR_Word Var_23;
    MR_Word Var_24;

    mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_6, VarSet0_8, &VarSet_10);
    hlds__vartypes__add_var_type_4_p_0(*Var_6, Type_5, VarTypes0_9, &VarTypes_11);
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word MaybeCompareRes_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_Word ShouldPretestEq_16;
    MR_Word ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
    MR_Word Globals_64;
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_63, &Globals_64);
    libs__globals__lookup_bool_option_3_p_0(Globals_64, (MR_Integer) 324, &ShouldPretestEq_16);
    switch (ShouldPretestEq_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Goal_14 = Goal0_13;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CastType_17;
          MR_Word CastX_18;
          MR_Word CastY_19;
          MR_Word CastXGoal0_20;
          MR_Word CastYGoal0_21;
          MR_Word CastXGoal_22;
          MR_Word CastYGoal_23;
          MR_Word EqualityGoal0_24;
          MR_Word EqualityGoal_25;
          MR_Word CondGoalExpr_26;
          MR_Word GoalInfo0_27;
          MR_Word ContextGoalInfo_28;
          MR_Word CondGoal_29;
          MR_Word EqualGoal_30;
          MR_Word GoalInfo_31;
          MR_Word GoalExpr_36;
          MR_Word FeaturedGoalInfo_37;
          MR_Word STATE_VARIABLE_Info_41_41;
          MR_Word Var_48;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
          MR_Word Globals_72;
          MR_Word CastPointers_73;
          MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
          MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
          MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_71, &Globals_72);
          libs__globals__lookup_bool_option_3_p_0(Globals_72, (MR_Integer) 280, &CastPointers_73);
          switch (CastPointers_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
              break;
            case (MR_Integer) 1:
              CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              break;
          }
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_17, (MR_String) "CastX", &CastX_18, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_41_41);
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_17, (MR_String) "CastY", &CastY_19, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_39);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_18, Context_9, &CastXGoal0_20);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_19, Context_9, &CastYGoal0_21);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_20, &CastXGoal_22);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_21, &CastYGoal_23);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (CastY_19));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_18, Var_48, Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &EqualityGoal0_24);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 21, EqualityGoal0_24, &EqualityGoal_25);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (EqualityGoal_25));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (CastYGoal_23));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (CastXGoal_22));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 2) = ((MR_Box) (Var_53));
          }
          hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_27);
          hlds__hlds_goal__goal_info_set_context_3_p_0(Context_9, GoalInfo0_27, &ContextGoalInfo_28);
          {
            CondGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CondGoal_29, 0) = ((MR_Box) (CondGoalExpr_26));
            MR_hl_field(MR_mktag(0), CondGoal_29, 1) = ((MR_Box) (ContextGoalInfo_28));
          }
          if ((MaybeCompareRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            EqualGoal_30 = hlds__make_goal__true_goal_with_context_1_f_0(Context_9);
            GoalInfo_31 = ContextGoalInfo_28;
          }
          else
          {
            MR_Word Res_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCompareRes_12, (MR_Integer) 0)));
            MR_Word EqualGoalInfo_34;
            MR_Word InstmapDelta_35;
            MR_Word Var_57;
            MR_Word SymName_79;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Builtin_84;
            MR_Word Var_85;
            MR_Word Var_33;

            Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Builtin_84));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SymName_79, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(1), SymName_79, 1) = ((MR_Box) ((MR_String) "="));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (SymName_79));
              MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_57, 3) = ((MR_Box) (Var_81));
            }
            hlds__make_goal__make_const_construction_3_p_0(Res_32, Var_57, &EqualGoal_30);
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqualGoal_30, (MR_Integer) 0)));
            EqualGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), EqualGoal_30, (MR_Integer) 1)));
            InstmapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EqualGoalInfo_34);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstmapDelta_35, ContextGoalInfo_28, &GoalInfo_31);
          }
          {
            GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), GoalExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), GoalExpr_36, 2) = ((MR_Box) (CondGoal_29));
            MR_hl_field(MR_mktag(3), GoalExpr_36, 3) = ((MR_Box) (EqualGoal_30));
            MR_hl_field(MR_mktag(3), GoalExpr_36, 4) = ((MR_Box) (Goal0_13));
          }
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, GoalInfo_31, &FeaturedGoalInfo_37);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_36));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FeaturedGoalInfo_37));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word Type_6,
  MR_String Name_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UPI_0_14,
  MR_Word * STATE_VARIABLE_UPI_15)
{
  {
    MR_Word VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    MR_Word VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    MR_Word Var_25;
    MR_Word Var_26;

    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_7, Var_8, VarSet0_10, &VarSet_12);
    hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_6, VarTypes0_11, &VarTypes_13);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
  MR_Word CtorCat_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word ArgVars_14;
    MR_String Name_15;
    MR_Word UnifyGoal_19;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_Info_45_45;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_14, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), ArgVars_14, 1) = ((MR_Box) (Var_22));
    }
    switch (MR_tag((MR_Word) CtorCat_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_15 = (MR_String) "builtin_unify_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) Var_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_47)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Name_15 = (MR_String) "builtin_unify_float";
                  break;
                case (MR_Integer) 1:
                  Name_15 = (MR_String) "builtin_unify_character";
                  break;
                case (MR_Integer) 2:
                  Name_15 = (MR_String) "builtin_unify_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));

                Name_15 = ((&check_hlds__unify_proc_vector_common_6[0 + Var_48]))->check_hlds__unify_proc__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    check_hlds__unify_proc__build_call_6_p_0(Name_15, ArgVars_14, Context_11, &UnifyGoal_19, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_45_45);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_14, UnifyGoal_19, Context_11, Clause_12, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word HeadVars_7,
  MR_Word Goal0_8,
  MR_Word Context_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word Goal_16;
    MR_Word Varset_17;
    MR_Word Types_18;
    MR_Word RttiVarMaps_19;
    MR_Word Var_49;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word _Warnings_15;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_7, &_Warnings_15, Goal0_8, &Goal_16, Varset0_12, &Varset_17, Types0_13, &Types_18, RttiVarMaps0_14, &RttiVarMaps_19);
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    Var_58 = Var_49;
    Var_59 = Varset_17;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Types_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String Name_7,
  MR_Word ArgVars_8,
  MR_Word Context_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Integer Arity_13;
    MR_Word MercuryBuiltin_16;
    MR_Word Var_24;
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Integer Var_27;
    MR_Word Var_14;
    MR_String Var_15;

    mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], ArgVars_8, &Arity_13);
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&Var_14, Name_7, &Var_15, &Var_27);
    if (succeeded)
      succeeded = (Arity_13 == Var_27);
    if (succeeded)
      MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    else
      MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(MercuryBuiltin_16, Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_3[2]), (MR_Integer) 6, (MR_Integer) 0, ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_24, ModuleInfo_12, Context_9, Goal_10);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word * PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Type_8;
    MR_Word TVarSet_9;
    MR_Word TypeBody_10;
    MR_Word Context_11;
    MR_Word TypeTable_26;
    MR_Word TypeDefn_27;
    MR_Word TypeParams_28;
    MR_Word KindMap_29;
    MR_Word TypeStatus_30;
    MR_Word TypeArgs_31;
    MR_Word Var_32;
    MR_Word SpecialPredMaps_47;
    MR_Word PredInfo0_48;
    MR_Word PredInfo1_49;
    MR_Word ErrorProcs_50;
    MR_Word PredInfo_51;
    MR_Word STATE_VARIABLE_ModuleInfo_30_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleInfo_35_58;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &TypeTable_26);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_26, TypeCtor_5, &TypeDefn_27);
    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_27, &TVarSet_9);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_27, &TypeParams_28);
    hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_27, &KindMap_29);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_27, &TypeBody_10);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_27, &TypeStatus_30);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_27, &Context_11);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (TypeBody_10));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (TypeStatus_30));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_29, TypeParams_28, &TypeArgs_31);
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TypeArgs_31, &Type_8);
    hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, TVarSet_9, Type_8, TypeCtor_5, Context_11, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]))), STATE_VARIABLE_ModuleInfo_0_13, &STATE_VARIABLE_ModuleInfo_30_53);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_30_53, &SpecialPredMaps_47);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_47, (MR_Integer) 2, TypeCtor_5, PredId_6);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_30_53, *PredId_6, &PredInfo0_48);
    check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(PredInfo0_48, &PredInfo1_49);
    check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(STATE_VARIABLE_ModuleInfo_30_53, &ErrorProcs_50, PredInfo1_49, &PredInfo_51);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (ErrorProcs_50));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    hlds__hlds_module__module_info_set_pred_info_4_p_0(*PredId_6, PredInfo_51, STATE_VARIABLE_ModuleInfo_30_53, &STATE_VARIABLE_ModuleInfo_35_58);
    check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*PredId_6, STATE_VARIABLE_ModuleInfo_35_58, STATE_VARIABLE_ModuleInfo_14);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_38;

    conv0_LambdaHeadVar__2_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__120__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_38));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word * PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet_12;
    MR_Word Context_18;
    MR_Word TypeBody_30;
    MR_Word Type_31;
    MR_Word TypeStatus_32;
    MR_Word Item_33;

    succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_5);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Integer TupleArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1)));
      MR_Word TVarSet0_10;
      MR_Word TupleArgTVars_11;
      MR_Word TupleArgTypes_13;
      MR_Word MakeUnamedField_16;
      MR_Word CtorArgs_19;
      MR_Word Ctor_21;
      MR_Word ConsId_22;
      MR_Word ConsTagValues_23;
      MR_Word Var_36;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0)));

      mercury__varset__init_1_p_0(TypeCtorInfo_55_55, &TVarSet0_10);
      mercury__varset__new_vars_4_p_0(TypeCtorInfo_55_55, TupleArity_9, &TupleArgTVars_11, TVarSet0_10, &TVarSet_12);
      Var_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
      parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_36, TupleArgTVars_11, &TupleArgTypes_13);
      {
        ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ConsId_22, 1) = ((MR_Box) (TupleArity_9));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (ConsId_22));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, Var_42, &ConsTagValues_23);
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TupleArgTypes_13, &Type_31);
      mercury__term__context_init_1_p_0(&Context_18);
      {
        MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), MakeUnamedField_16, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1));
        MR_hl_field(MR_mktag(0), MakeUnamedField_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), MakeUnamedField_16, 3) = ((MR_Box) (Context_18));
      }
      CtorArgs_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, MakeUnamedField_16, TupleArgTypes_13);
      {
        Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Ctor_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Ctor_21, 3) = ((MR_Box) (CtorArgs_19));
        MR_hl_field(MR_mktag(0), Ctor_21, 4) = ((MR_Box) (TupleArity_9));
        MR_hl_field(MR_mktag(0), Ctor_21, 5) = ((MR_Box) (Context_18));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Ctor_21));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeBody_30, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), TypeBody_30, 1) = ((MR_Box) (ConsTagValues_23));
        MR_hl_field(MR_mktag(1), TypeBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), TypeBody_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        MR_hl_field(MR_mktag(1), TypeBody_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), TypeBody_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), TypeBody_30, 6) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(1), TypeBody_30, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word TypeTable_68;
      MR_Word TypeDefn_69;
      MR_Word TypeParams_70;
      MR_Word KindMap_71;
      MR_Word TypeStatus_72;
      MR_Word TypeArgs_73;
      MR_Word Var_74;

      hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeTable_68);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_68, TypeCtor_5, &TypeDefn_69);
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_69, &TVarSet_12);
      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_69, &TypeParams_70);
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_69, &KindMap_71);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_69, &TypeBody_30);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_69, &TypeStatus_72);
      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_69, &Context_18);
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_34));
        MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (TypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (TypeBody_30));
        MR_hl_field(MR_mktag(0), Var_74, 6) = ((MR_Box) (TypeStatus_72));
      }
      mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
      parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_71, TypeParams_70, &TypeArgs_73);
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_5, TypeArgs_73, &Type_31);
    }
    succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(STATE_VARIABLE_ModuleInfo_0_34, TypeCtor_5, TypeBody_30);
    if (succeeded)
    {
      TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      Item_33 = (MR_Integer) 1;
    }
    else
    {
      TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1])));
      Item_33 = (MR_Integer) 0;
    }
    check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, Item_33, TVarSet_12, Type_31, TypeCtor_5, TypeBody_30, Context_18, TypeStatus_32, PredId_6, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
  MR_Word SpecialId_12,
  MR_Word Item_13,
  MR_Word TVarSet_14,
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word TypeBody_17,
  MR_Word Context_18,
  MR_Word TypeStatus_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo1_24;
    MR_Word ErrorProcs_25;
    MR_Word PredInfo_26;
    MR_Word STATE_VARIABLE_ModuleInfo_30_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;

    switch (Item_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word SpecialPredMaps_22;

          hlds__make_hlds__add_special_pred_for_real_9_p_0(SpecialId_12, TVarSet_14, Type_15, TypeCtor_16, TypeBody_17, Context_18, TypeStatus_19, STATE_VARIABLE_ModuleInfo_0_27, &STATE_VARIABLE_ModuleInfo_30_30);
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_30_30, &SpecialPredMaps_22);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_22, SpecialId_12, TypeCtor_16, PredId_20);
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_30_30, *PredId_20, &PredInfo1_24);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word SpecialPredMaps_38;
          MR_Word PredInfo0_39;

          hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(SpecialId_12, TVarSet_14, Type_15, TypeCtor_16, Context_18, TypeStatus_19, STATE_VARIABLE_ModuleInfo_0_27, &STATE_VARIABLE_ModuleInfo_30_30);
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_30_30, &SpecialPredMaps_38);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_38, SpecialId_12, TypeCtor_16, PredId_20);
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_30_30, *PredId_20, &PredInfo0_39);
          check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(PredInfo0_39, &PredInfo1_24);
        }
        break;
    }
    check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(STATE_VARIABLE_ModuleInfo_30_30, &ErrorProcs_25, PredInfo1_24, &PredInfo_26);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ErrorProcs_25));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    hlds__hlds_module__module_info_set_pred_info_4_p_0(*PredId_20, PredInfo_26, STATE_VARIABLE_ModuleInfo_30_30, &STATE_VARIABLE_ModuleInfo_35_35);
    check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*PredId_20, STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_28);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____linear_or_quad_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____typed_var_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____typed_var_pair_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____typed_var_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____typed_var_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____unify_pred_item_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____unify_pred_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____unify_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__unify_proc__init(void)
{
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
}

void mercury__check_hlds__unify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unify_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unify_proc.
