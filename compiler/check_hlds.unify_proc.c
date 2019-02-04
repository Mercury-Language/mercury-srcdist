/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2018-08-18
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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

struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVars_1;
  MR_bool check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Type_22;
  jmp_buf check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__TypeInfo_72_72;
  MR_Word check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVar_69;
  MR_Word check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Var_71;
  MR_Box check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__conv0_ExistQTVar_69;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0[8];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_typed_var_pair_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_typed_var_pair_0[1];

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
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__1754__1_1_f_0(
  MR_Word LambdaHeadVar__1_20);

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

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Ctor_13,
  MR_Word * Goal_14,
  MR_Integer STATE_VARIABLE_N_0_32,
  MR_Integer * STATE_VARIABLE_N_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Res_6);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word CanCompareAsInt_12,
  MR_Word Ctor_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

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
check_hlds__unify_proc__info_extract_4_p_0(
  MR_Word UPI_5,
  MR_Word * ModuleInfo_6,
  MR_Word * VarSet_7,
  MR_Word * VarTypes_8);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Ctors_9,
  MR_Word X_10,
  MR_Word Index_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word Ctors0_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_linear_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word Ctors_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static void MR_CALL 
check_hlds__unify_proc__info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_UPI_0_6,
  MR_Word * STATE_VARIABLE_UPI_7);

static void MR_CALL 
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word UPI_3,
  MR_Word * X_4);

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cases_0_7,
  MR_Word * STATE_VARIABLE_Cases_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cases_0_8,
  MR_Word * STATE_VARIABLE_Cases_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word Ctor_11,
  MR_Word R_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word LinearOrQuad_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

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
check_hlds__unify_proc__generate_return_equal_3_p_0(
  MR_Word ResultVar_4,
  MR_Word Context_5,
  MR_Word * Goal_6);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word R_3,
  MR_Word Context_4,
  MR_Word * Goal_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word Ctor1_12,
  MR_Word Ctor2_13,
  MR_String CompareOp_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word MaybeExistConstraints_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(
  MR_Word Context_9,
  MR_Word EqvType_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(
  MR_Word Context_9,
  MR_Word NonCanonical_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Ctors_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(
  MR_Word Context_8,
  MR_Word EqvType_9,
  MR_Word X_10,
  MR_Word Y_11,
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
check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String PredName_7,
  MR_Word ArgVars_8,
  MR_Word Context_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(
  MR_Word NonCanonical_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

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
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word Type_6,
  MR_String Name_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UPI_0_14,
  MR_Word * STATE_VARIABLE_UPI_15);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
  MR_Word HeadVars_7,
  MR_Word Goal0_8,
  MR_Word Context_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001(
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
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[1][11];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[6][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12];


/* sealed */ struct check_hlds__unify_proc__vector_common_type_3_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20];



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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_case_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_unify_case_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};


static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20] = {
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_uint" },
  /* row 2 */   {     (MR_String) "builtin_unify_int8" },
  /* row 3 */   {     (MR_String) "builtin_unify_uint8" },
  /* row 4 */   {     (MR_String) "builtin_unify_int16" },
  /* row 5 */   {     (MR_String) "builtin_unify_uint16" },
  /* row 6 */   {     (MR_String) "builtin_unify_int32" },
  /* row 7 */   {     (MR_String) "builtin_unify_uint32" },
  /* row 8 */   {     (MR_String) "builtin_unify_int64" },
  /* row 9 */   {     (MR_String) "builtin_unify_uint64" },
  /* row 10 */   {     (MR_String) "builtin_compare_int" },
  /* row 11 */   {     (MR_String) "builtin_compare_uint" },
  /* row 12 */   {     (MR_String) "builtin_compare_int8" },
  /* row 13 */   {     (MR_String) "builtin_compare_uint8" },
  /* row 14 */   {     (MR_String) "builtin_compare_int16" },
  /* row 15 */   {     (MR_String) "builtin_compare_uint16" },
  /* row 16 */   {     (MR_String) "builtin_compare_int32" },
  /* row 17 */   {     (MR_String) "builtin_compare_uint32" },
  /* row 18 */   {     (MR_String) "builtin_compare_int64" },
  /* row 19 */   {     (MR_String) "builtin_compare_uint64" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0[8] = {
  (MR_String) "spdi_spec_pred_id",
  (MR_String) "spdi_pred_id",
  (MR_String) "spdi_tvarset",
  (MR_String) "spdi_type",
  (MR_String) "spdi_type_ctor",
  (MR_String) "spdi_type_body",
  (MR_String) "spdi_orig_status",
  (MR_String) "spdi_context"
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0 = {
  (MR_String) "spec_pred_defn_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "spec_pred_defn_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_typed_var_pair_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_typed_var_pair_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_typed_var_pair_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_typed_var_pair_0_0,
    INT8_C(-1)
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0,
    INT8_C(-1)
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
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__1754__1_1_f_0(
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_Word LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));

    return LambdaHeadVar__2_21;
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
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      hlds__hlds_module____Compare____module_info_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[3]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
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
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeCtorInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_15_15 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
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
check_hlds__unify_proc____Compare____typed_var_pair_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      parse_tree__prog_data____Compare____mer_type_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word Var_20;
      MR_Integer Var_37 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_38 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, Var_37, Var_38);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        hlds__hlds_pred____Compare____pred_id_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[2]), &Var_22, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            parse_tree__prog_data____Compare____mer_type_0_0(&Var_23, ArgX4_10, ArgY4_11);
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              parse_tree__prog_data____Compare____type_ctor_0_0(&Var_24, ArgX5_12, ArgY5_13);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                hlds__hlds_data____Compare____hlds_type_body_0_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  hlds__status____Compare____type_status_0_0(&Var_26, ArgX7_16, ArgY7_17);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
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
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = hlds__hlds_data____Unify____hlds_type_body_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = hlds__status____Unify____type_status_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                    succeeded = mercury__term____Unify____context_0_0(ArgX8_17, ArgY8_18);
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
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
    MR_Word VarY_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    return VarY_5;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__project_var_x_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word VarX_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return VarX_4;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word Ctor_13,
  MR_Word * Goal_14,
  MR_Integer STATE_VARIABLE_N_0_32,
  MR_Integer * STATE_VARIABLE_N_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
    MR_Word FunctorName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
    MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
    MR_Integer FunctorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
    MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 4))));
    MR_Word FunctorConsId_24;
    MR_Word ArgVars_25;
    MR_Word Context_26;
    MR_Word UnifyX_Goal_27;
    MR_Word UnifyIndex_Goal_28;
    MR_Word GoalList_29;
    MR_Word GoalInfo0_30;
    MR_Word GoalInfo_31;
    MR_Word Var_37;
    MR_Word Var_43;

    {
      FunctorConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId_24, 1) = ((MR_Box) (FunctorName_19));
      MR_hl_field(MR_mktag(3), FunctorConsId_24, 2) = ((MR_Box) (FunctorArity_21));
      MR_hl_field(MR_mktag(3), FunctorConsId_24, 3) = ((MR_Box) (TypeCtor_23));
    }
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgTypes_20, MaybeExistConstraints_18, &ArgVars_25, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
    Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 7))));
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FunctorConsId_24));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_37, 2) = ((MR_Box) (ArgVars_25));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, Var_37, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_27);
    hlds__make_goal__make_int_const_construction_4_p_0(Context_26, Index_12, STATE_VARIABLE_N_0_32, &UnifyIndex_Goal_28);
    *STATE_VARIABLE_N_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_32 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (UnifyIndex_Goal_28));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_29, 0) = ((MR_Box) (UnifyX_Goal_27));
      MR_hl_field(MR_mktag(1), GoalList_29, 1) = ((MR_Box) (Var_43));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_30);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_26, GoalInfo0_30, &GoalInfo_31);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_29, GoalInfo_31, Goal_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Res_6)
{
  {
    MR_Integer ArityA_7;
    MR_Integer ArityB_8;
    MR_Word ArityRes_9;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3))));
    MR_Word Var_13;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_12, &ArityA_7);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_13, &ArityB_8);
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
          MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2))));
          MR_Word Var_15;

          NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_14);
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2))));
          NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_15);
          mercury__private_builtin__builtin_compare_string_3_p_0(Res_6, NameA_10, NameB_11);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_VarY_5;

    conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_VarY_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_VarX_4;

    conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_VarX_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word CanCompareAsInt_12,
  MR_Word Ctor_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
    MR_Word FunctorName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
    MR_Word ArgTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
    MR_Integer FunctorArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
    MR_Word TypeCtor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 4))));
    MR_Word FunctorConsId_24;
    MR_Word Context_25;
    MR_Word GoalList_35;
    MR_Word GoalInfo_47;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_22, (MR_Integer) 0))));
    MR_String Var_51;

    succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
      succeeded = (strcmp(Var_51, (MR_String) "{}") == 0);
    }
    if (succeeded)
      {
        FunctorConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 1) = ((MR_Box) (FunctorArity_20));
      }
    else
      {
        FunctorConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 1) = ((MR_Box) (FunctorName_18));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 2) = ((MR_Box) (FunctorArity_20));
        MR_hl_field(MR_mktag(3), FunctorConsId_24, 3) = ((MR_Box) (TypeCtor_22));
      }
    Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
    succeeded = (ArgTypes_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (CanCompareAsInt_12 == (MR_Integer) 1);
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
      MR_Word Var_56;
      MR_Word STATE_VARIABLE_Info_58_58;
      MR_Word Var_59;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      {
        RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_26, 0) = ((MR_Box) (FunctorConsId_24));
        MR_hl_field(MR_mktag(1), RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_10, RHS_26, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_27);
      Var_56 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_56, (MR_String) "CastX", &CastX_28, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_58_58);
      Var_59 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_59, (MR_String) "CastY", &CastY_29, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_49);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_28, Context_25, &CastXGoal0_30);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_29, Context_25, &CastYGoal0_31);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_30, &CastXGoal_32);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_31, &CastYGoal_33);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (CastX_28));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastY_29, Var_66, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyY_Goal_34);
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (UnifyY_Goal_34));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CastYGoal_33));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (CastXGoal_32));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_35, 0) = ((MR_Box) (UnifyX_Goal_27));
        MR_hl_field(MR_mktag(1), GoalList_35, 1) = ((MR_Box) (Var_69));
      }
    }
    else
    {
      MR_Word ExistQTVars_36;
      MR_Word TypedVarPairs_41;
      MR_Word VarsX_42;
      MR_Word VarsY_43;
      MR_Word RHSX_44;
      MR_Word RHSY_45;
      MR_Word UnifyArgs_Goals_46;
      MR_Word STATE_VARIABLE_Info_73_73;
      MR_Word Var_83;
      MR_Word UnifyX_Goal_84;
      MR_Word UnifyY_Goal_85;

      if ((MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U)))
        ExistQTVars_36 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ExistConstraints_37 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_17), (MR_Integer) 1));

        ExistQTVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_37, (MR_Integer) 0))));
      }
      check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(ExistQTVars_36, ArgTypes_19, &TypedVarPairs_41, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_73_73);
      VarsX_42 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[4]), TypedVarPairs_41);
      VarsY_43 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[5]), TypedVarPairs_41);
      {
        RHSX_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_44, 0) = ((MR_Box) (FunctorConsId_24));
        MR_hl_field(MR_mktag(1), RHSX_44, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_44, 2) = ((MR_Box) (VarsX_42));
      }
      {
        RHSY_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_45, 0) = ((MR_Box) (FunctorConsId_24));
        MR_hl_field(MR_mktag(1), RHSY_45, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_45, 2) = ((MR_Box) (VarsY_43));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_10, RHSX_44, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_84);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_11, RHSY_45, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyY_Goal_85);
      check_hlds__unify_proc__unify_var_lists_5_p_0(ExistQTVars_36, TypedVarPairs_41, &UnifyArgs_Goals_46, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_49);
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (UnifyY_Goal_85));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (UnifyArgs_Goals_46));
      }
      {
        GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_35, 0) = ((MR_Box) (UnifyX_Goal_84));
        MR_hl_field(MR_mktag(1), GoalList_35, 1) = ((MR_Box) (Var_83));
      }
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_25, &GoalInfo_47);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_35, GoalInfo_47, Goal_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVar_34 = ((MR_Word) ((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34));
    check_hlds__unify_proc__unify_var_lists_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__TypeInfo_37_37 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]);
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
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) (env_ptr_arg);

    parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16, &(env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Var_36, check_hlds__unify_proc__unify_var_lists_5_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__unify_var_lists_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &(env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__conv0_ExistQTVar_34, (env_ptr)->check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__unify_var_lists_5_p_0_3, env_ptr);
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word TypedVarPair_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypedVarPairs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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

      (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 0))));
      X_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 1))));
      Y_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_11, (MR_Integer) 2))));
      mercury__term__context_init_1_p_0(&Context_19);
      ModuleInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
      Var_24 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_20, (env).check_hlds__unify_proc__unify_var_lists_5_p_0_env_0__Type_16);
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
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_17, Var_30, Context_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_13);
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

void MR_CALL 
check_hlds__unify_proc__generate_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word * ClauseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29)
{
  {
    MR_bool succeeded;
    MR_Word SpecialPredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 3))));
    MR_Word ArgTypes_10;
    MR_Word Args_14;
    MR_Word Clause_17;
    MR_Word VarSet_20;
    MR_Word Types_21;
    MR_Word TVarNameMap_22;
    MR_Word ArgVec_23;
    MR_Word ClausesRep_24;
    MR_Word RttiVarMaps_25;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word VarSet_81;
    MR_Word VarTypes_82;
    MR_Word RttiVarMaps_83;
    MR_Word _Modes_11;
    MR_Word _Det_12;

    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_8, Type_9, &ArgTypes_10, &_Modes_11, &_Det_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_81);
    hlds__vartypes__init_vartypes_1_p_0(&VarTypes_82);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_83);
    {
      STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (VarSet_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (VarTypes_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (RttiVarMaps_83));
    }
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(ArgTypes_10, (MR_String) "HeadVar__", (MR_Integer) 1, &Args_14, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_33_33);
    switch (SpecialPredId_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Res_19;
          MR_Word X_58;
          MR_Word Y_59;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;

          succeeded = ((MR_tag((MR_Word) Args_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            Res_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
            if (succeeded)
            {
              X_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 1);
              if (succeeded)
              {
                Y_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_compare_proc_body_7_p_0(SpecDefnInfo_5, Res_19, X_58, Y_59, &Clause_17, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_47_47);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad compare args");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Index_18;
          MR_Word X_56;
          MR_Word Var_40;
          MR_Word Var_41;

          succeeded = ((MR_tag((MR_Word) Args_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            X_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
            if (succeeded)
            {
              Index_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
              succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_index_proc_body_6_p_0(SpecDefnInfo_5, X_56, Index_18, &Clause_17, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_47_47);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad index args");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word X_15;
          MR_Word Y_16;
          MR_Word Var_45;
          MR_Word Var_46;

          succeeded = ((MR_tag((MR_Word) Args_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            X_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 0))));
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_14, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
            if (succeeded)
            {
              Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_unify_proc_body_6_p_0(SpecDefnInfo_5, X_15, Y_16, &Clause_17, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_47_47);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad unify args");
              return;
            }
          }
        }
        break;
    }
    check_hlds__unify_proc__info_extract_4_p_0(STATE_VARIABLE_Info_47_47, STATE_VARIABLE_ModuleInfo_29, &VarSet_20, &Types_21);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &TVarNameMap_22);
    ArgVec_23 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Integer) 0, Args_14);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Clause_17));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_52, &ClausesRep_24);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_25);
    Var_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ClauseInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Types_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Types_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ArgVec_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_extract_4_p_0(
  MR_Word UPI_5,
  MR_Word * ModuleInfo_6,
  MR_Word * VarSet_7,
  MR_Word * VarTypes_8)
{
  {
    *ModuleInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 0))));
    *VarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 1))));
    *VarTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 2))));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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

    mercury__string__int_to_string_2_p_0(Num_3, &NumStr_32);
    mercury__string__append_3_p_2(BaseName_2, NumStr_32, &Name_33);
    VarSet0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    VarTypes0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_33, &Var_16, VarSet0_41, &VarSet_43);
    hlds__vartypes__add_var_type_4_p_0(Var_16, Type_12, VarTypes0_42, &VarTypes_44);
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (VarSet_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (VarTypes_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_56));
    }
    Var_22 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) (MR_Integer) 1);
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
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_Word TypeBody_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeBody_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for a foreign type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 0))));
          MR_Word MaybeRepn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 2))));
          MR_Word Repn_21;
          MR_Word DuTypeKind_22;

          if ((MaybeRepn_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "MaybeRepn = no");
              return;
            }
          }
          else
            Repn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_19, (MR_Integer) 0))));
          DuTypeKind_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_21, (MR_Integer) 3))));
          switch (MR_tag((MR_Word) DuTypeKind_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for enum type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for dummy type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(SpecDefnInfo_7, Ctors_17, X_8, Index_9, Clause_10, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for foreign enum type");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for notag type");
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for eqv type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for a solver type");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for abstract type");
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
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1(
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
    MR_Word conv2_Goal_14;
    MR_Integer conv1_STATE_VARIABLE_N_33;
    MR_Word conv0_STATE_VARIABLE_Info_35;

    check_hlds__unify_proc__generate_index_du_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_14, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_N_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_35);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_14));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_N_33));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_35));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Ctors_9,
  MR_Word X_10,
  MR_Word Index_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word Disjuncts_14;
    MR_Word Context_16;
    MR_Word GoalInfo_17;
    MR_Word Goal_18;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Box conv4_Var_15;
    MR_Box conv3_STATE_VARIABLE_Info_23_23;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (SpecDefnInfo_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (Index_11));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_21, Ctors_9, &Disjuncts_14, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_15, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv3_STATE_VARIABLE_Info_23_23);
    STATE_VARIABLE_Info_23_23 = ((MR_Word) (conv3_STATE_VARIABLE_Info_23_23));
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_16, &GoalInfo_17);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Disjuncts_14));
    }
    {
      Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_18, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Goal_18, 1) = ((MR_Box) (GoalInfo_17));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Index_11));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_25, Goal_18, Context_16, Clause_12, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 4))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    MR_Word IsDummy_16;

    IsDummy_16 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_14);
    switch (IsDummy_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_36, (MR_Integer) 0))));
          MR_Word TypeBody_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 5))));
          MR_Word UserEqComp_19;

          succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_17, TypeBody_18, &UserEqComp_19);
          if (succeeded)
            check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(Context_15, UserEqComp_19, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          else
            switch (MR_tag((MR_Word) TypeBody_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_47;

                  Var_47 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_15, Var_47, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ctors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_18, (MR_Integer) 0))));
                  MR_Word MaybeRepn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_18, (MR_Integer) 2))));
                  MR_Word Repn_29;
                  MR_Word DuTypeKind_30;

                  if ((MaybeRepn_27 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeRepn = no");
                      return;
                    }
                  }
                  else
                    Repn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_27, (MR_Integer) 0))));
                  DuTypeKind_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_29, (MR_Integer) 3))));
                  switch (MR_tag((MR_Word) DuTypeKind_30)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(DuTypeKind_30)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                          break;
                        case (MR_Integer) 1:
                          check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                          break;
                        case (MR_Integer) 2:
                          check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, Ctors_25, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_30, (MR_Integer) 1))));
                        MR_Word ArgIsDummy_35;

                        ArgIsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, ArgType_33);
                        switch (ArgIsDummy_35) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                            break;
                          case (MR_Integer) 1:
                            check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, Ctors_25, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word EqvType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_18, (MR_Integer) 0))));
                  MR_Word EqvIsDummy_22;

                  EqvIsDummy_22 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_17, EqvType_21);
                  switch (EqvIsDummy_22) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_15, EqvType_21, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_18, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(Context_15, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                    break;
                  case (MR_Integer) 1:
                    {
                      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_17);
                      if (succeeded)
                        check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(SpecDefnInfo_8, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
                      else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "trying to create compare proc for abstract type");
                          return;
                        }
                      }
                    }
                    break;
                }
                break;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_6;

    check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Res_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Res_6));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word Ctors0_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
    MR_Word Globals_17;
    MR_Word LexicalOrder_18;
    MR_Word Ctors_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 289, &LexicalOrder_18);
    switch (LexicalOrder_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Ctors_19 = Ctors0_10;
        break;
      case (MR_Integer) 1:
        {
          mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[3]), Ctors0_10, &Ctors_19);
        }
        break;
    }
    if ((Ctors_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_du\'/8", (MR_String) "compare for type with no functors");
        return;
      }
    }
    else
    {
      MR_Integer CompareSpec_22;
      MR_Integer NumCtors_23;
      MR_Word Goal0_24;
      MR_Word Context_25;
      MR_Word Goal_26;
      MR_Word HeadVars_27;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word Var_37;
      MR_Word Var_38;

      libs__globals__lookup_int_option_3_p_0(Globals_17, (MR_Integer) 329, &CompareSpec_22);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_19, &NumCtors_23);
      succeeded = (NumCtors_23 <= CompareSpec_22);
      if (succeeded)
      {
        MR_Word Cases_69;
        MR_Word Context_70;
        MR_Word GoalInfo_71;
        MR_Word STATE_VARIABLE_Cases_36_107;
        MR_Word STATE_VARIABLE_Info_37_108;
        MR_Word RightCtor_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_19, (MR_Integer) 0))));
        MR_Word RightCtors_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_19, (MR_Integer) 1))));
        MR_Word Case_133;
        MR_String Cmp1_134;
        MR_Word STATE_VARIABLE_Info_41_140;
        MR_Word Var_142;

        succeeded = parse_tree__prog_data____Unify____constructor_0_0(RightCtor_125, RightCtor_125);
        if (succeeded)
        {
          check_hlds__unify_proc__generate_compare_case_9_p_0(SpecDefnInfo_9, RightCtor_125, Res_11, X_12, Y_13, (MR_Integer) 1, &Case_133, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_41_140);
          Cmp1_134 = (MR_String) "<";
        }
        else
        {
          check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(SpecDefnInfo_9, RightCtor_125, RightCtor_125, (MR_String) ">", Res_11, X_12, Y_13, &Case_133, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_41_140);
          Cmp1_134 = (MR_String) ">";
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Case_133));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_11_p_0(SpecDefnInfo_9, RightCtor_125, RightCtors_126, Cmp1_134, Res_11, X_12, Y_13, Var_142, &STATE_VARIABLE_Cases_36_107, STATE_VARIABLE_Info_41_140, &STATE_VARIABLE_Info_37_108);
        check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_10_p_0(SpecDefnInfo_9, RightCtors_126, Ctors_19, Res_11, X_12, Y_13, STATE_VARIABLE_Cases_36_107, &Cases_69, STATE_VARIABLE_Info_37_108, &STATE_VARIABLE_Info_33_33);
        Context_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
        hlds__hlds_goal__goal_info_init_2_p_0(Context_70, &GoalInfo_71);
        hlds__hlds_goal__disj_list_to_goal_3_p_0(Cases_69, GoalInfo_71, &Goal0_24);
      }
      else
        check_hlds__unify_proc__generate_compare_proc_body_du_linear_8_p_0(SpecDefnInfo_9, Ctors_19, Res_11, X_12, Y_13, &Goal0_24, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_33_33);
      Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Res_11));
      }
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_25, X_12, Y_13, Var_35, Goal0_24, &Goal_26, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_36_36);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Y_13));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (X_12));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        HeadVars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVars_27, 0) = ((MR_Box) (Res_11));
        MR_hl_field(MR_mktag(1), HeadVars_27, 1) = ((MR_Box) (Var_37));
      }
      check_hlds__unify_proc__quantify_clause_body_6_p_0(HeadVars_27, Goal_26, Context_25, Clause_14, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_29);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_linear_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word Ctors_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    MR_Word IntType_16;
    MR_Word X_Index_17;
    MR_Word Y_Index_18;
    MR_Word R_19;
    MR_Word Context_20;
    MR_Word GoalInfo_21;
    MR_Word TVarSet_24;
    MR_Word Type_25;
    MR_Word TypeCtor_26;
    MR_Word TypeBody_27;
    MR_Word TypeStatus0_28;
    MR_Word ModuleInfo0_29;
    MR_Word ModuleInfo_30;
    MR_Word X_InstmapDelta_31;
    MR_Word Call_X_Index_32;
    MR_Word Y_InstmapDelta_33;
    MR_Word Call_Y_Index_34;
    MR_Word Call_Less_Than_35;
    MR_Word Call_Greater_Than_36;
    MR_Word Return_Less_Than_37;
    MR_Word Return_Greater_Than_38;
    MR_Word Return_R_39;
    MR_Word Cases_40;
    MR_Word CasesGoal_41;
    MR_Word Abort_42;
    MR_Word HandleEqualGoal_43;
    MR_Word HandleGreaterEqualGoal_44;
    MR_Word HandleLessGreaterEqualGoal_45;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_Info_63_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_Info_68_68;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_Info_83_83;
    MR_Word Var_84;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    IntType_16 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_16, &X_Index_17, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_48_48);
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_16, &Y_Index_18, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
    Var_50 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(Var_50, &R_19, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
    TVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 2))));
    Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 3))));
    TypeCtor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 4))));
    TypeBody_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 5))));
    TypeStatus0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 6))));
    Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_20, &GoalInfo_21);
    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_51_51, &ModuleInfo0_29);
    hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 1, TVarSet_24, Type_25, TypeCtor_26, TypeBody_27, TypeStatus0_28, Context_20, ModuleInfo0_29, &ModuleInfo_30);
    check_hlds__unify_proc__info_set_module_info_3_p_0(ModuleInfo_30, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    X_InstmapDelta_31 = hlds__instmap__instmap_delta_bind_var_1_f_0(X_Index_17);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (X_Index_17));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_26, (MR_Integer) 1, Var_55, X_InstmapDelta_31, (MR_Integer) 0, Context_20, &Call_X_Index_32, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_57_57);
    Y_InstmapDelta_33 = hlds__instmap__instmap_delta_bind_var_1_f_0(Y_Index_18);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Y_Index_18));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
    }
    check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_26, (MR_Integer) 1, Var_61, Y_InstmapDelta_33, (MR_Integer) 0, Context_20, &Call_Y_Index_34, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_63_63);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (X_Index_17));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_64));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", Var_67, Context_20, &Call_Less_Than_35, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_68_68);
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", Var_67, Context_20, &Call_Greater_Than_36, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_73_73);
    Var_76 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    hlds__make_goal__make_const_construction_4_p_0(Context_20, Res_11, Var_76, &Return_Less_Than_37);
    Var_78 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    hlds__make_goal__make_const_construction_4_p_0(Context_20, Res_11, Var_78, &Return_Greater_Than_38);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (R_19));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Res_11, Var_80, Context_20, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Return_R_39);
    check_hlds__unify_proc__generate_compare_du_linear_cases_8_p_0(SpecDefnInfo_9, Ctors_10, R_19, X_12, Y_13, &Cases_40, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_83_83);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Cases_40));
    }
    {
      CasesGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CasesGoal_41, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), CasesGoal_41, 1) = ((MR_Box) (GoalInfo_21));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) ((MR_Unsigned) 0U), Context_20, &Abort_42, STATE_VARIABLE_Info_83_83, STATE_VARIABLE_Info_47);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (CasesGoal_41));
      MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (Return_R_39));
      MR_hl_field(MR_mktag(3), Var_88, 4) = ((MR_Box) (Abort_42));
    }
    {
      HandleEqualGoal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleEqualGoal_43, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), HandleEqualGoal_43, 1) = ((MR_Box) (GoalInfo_21));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_90, 2) = ((MR_Box) (Call_Greater_Than_36));
      MR_hl_field(MR_mktag(3), Var_90, 3) = ((MR_Box) (Return_Greater_Than_38));
      MR_hl_field(MR_mktag(3), Var_90, 4) = ((MR_Box) (HandleEqualGoal_43));
    }
    {
      HandleGreaterEqualGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_44, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_44, 1) = ((MR_Box) (GoalInfo_21));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Call_Less_Than_35));
      MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (Return_Less_Than_37));
      MR_hl_field(MR_mktag(3), Var_92, 4) = ((MR_Box) (HandleGreaterEqualGoal_44));
    }
    {
      HandleLessGreaterEqualGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_45, 0) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_45, 1) = ((MR_Box) (GoalInfo_21));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (HandleLessGreaterEqualGoal_45));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Call_Y_Index_34));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Call_X_Index_32));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (Var_96));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_21));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_UPI_0_6,
  MR_Word * STATE_VARIABLE_UPI_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 3))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word UPI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_3, (MR_Integer) 0))));
}

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_9_p_0(
  MR_Word TypeCtor_10,
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
    MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
    MR_Word PredName_19;
    MR_Word PredId_20;
    MR_Integer ProcId_21;
    MR_Word GoalExpr_22;
    MR_Word NonLocals_23;
    MR_Word GoalInfo0_24;
    MR_Word GoalInfo_25;

    hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, TypeCtor_10, SpecialPredId_11, &PredName_19, &PredId_20, &ProcId_21);
    {
      GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 0) = ((MR_Box) (PredId_20));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 1) = ((MR_Box) (ProcId_21));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 2) = ((MR_Box) (ArgVars_12));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 5) = ((MR_Box) (PredName_19));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, &NonLocals_23);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_13, Detism_14, (MR_Integer) 0, &GoalInfo0_24);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_24, &GoalInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
    }
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Ctor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Ctors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_22;
    MR_Word Cases_23;
    MR_Word STATE_VARIABLE_Info_28_28;

    check_hlds__unify_proc__generate_compare_case_9_p_0(HeadVar__1_1, Ctor_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, (MR_Integer) 0, &Case_22, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_28_28);
    check_hlds__unify_proc__generate_compare_du_linear_cases_8_p_0(HeadVar__1_1, Ctors_18, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &Cases_23, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_23));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cases_0_7,
  MR_Word * STATE_VARIABLE_Cases_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Cases_8 = STATE_VARIABLE_Cases_0_7;
    }
    else
    {
      MR_Word LeftCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LeftCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Cases_36_36;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

      check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_11_p_0(HeadVar__1_1, LeftCtor_23, HeadVar__3_3, (MR_String) ">", HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_Cases_0_7, &STATE_VARIABLE_Cases_36_36, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_37_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LeftCtors_24;
      next_value_of_STATE_VARIABLE_Cases_0_7 = STATE_VARIABLE_Cases_36_36;
      next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cases_0_7 = next_value_of_STATE_VARIABLE_Cases_0_7;
      STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
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
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Cases_9 = STATE_VARIABLE_Cases_0_8;
    }
    else
    {
      MR_Word RightCtor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RightCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Case_34;
      MR_String Cmp1_35;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word Var_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_String next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

      succeeded = parse_tree__prog_data____Unify____constructor_0_0(HeadVar__2_2, RightCtor_26);
      if (succeeded)
      {
        check_hlds__unify_proc__generate_compare_case_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, (MR_Integer) 1, &Case_34, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_41_41);
        Cmp1_35 = (MR_String) "<";
      }
      else
      {
        check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(HeadVar__1_1, HeadVar__2_2, RightCtor_26, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, &Case_34, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_41_41);
        Cmp1_35 = HeadVar__4_4;
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Case_34));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = RightCtors_27;
      next_value_of_HeadVar__4_4 = Cmp1_35;
      next_value_of_STATE_VARIABLE_Cases_0_8 = Var_43;
      next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_41_41;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Cases_0_8 = next_value_of_STATE_VARIABLE_Cases_0_8;
      STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_VarY_5;

    conv1_VarY_5 = check_hlds__unify_proc__project_var_y_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_VarY_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_VarX_4;

    conv0_VarX_4 = check_hlds__unify_proc__project_var_x_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_VarX_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word Ctor_11,
  MR_Word R_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word LinearOrQuad_15,
  MR_Word * Case_16,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_Word MaybeExistConstraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 1))));
    MR_Word FunctorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 2))));
    MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 3))));
    MR_Integer FunctorArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 4))));
    MR_Word TypeCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 4))));
    MR_Word FunctorConsId_25;
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 7))));
    MR_Word GoalList_30;
    MR_Word GoalInfo0_45;
    MR_Word GoalInfo_46;

    {
      FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorName_20));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_22));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_24));
    }
    if ((ArgTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word RHS_27;
      MR_Word UnifyX_Goal_28;
      MR_Word EqualGoal_29;

      {
        RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_27, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_13, RHS_27, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_28);
      check_hlds__unify_proc__generate_return_equal_3_p_0(R_12, Context_26, &EqualGoal_29);
      switch (LinearOrQuad_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_71;

            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (EqualGoal_29));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_28));
              MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_71));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnifyY_Goal_31;
            MR_Word Var_68;
            MR_Word Var_69;

            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_14, RHS_27, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyY_Goal_31);
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (EqualGoal_29));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (UnifyY_Goal_31));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
            }
            {
              GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_28));
              MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_68));
            }
          }
          break;
      }
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
    }
    else
    {
      MR_Word ExistQTVars_34;
      MR_Word TypedVarPairs_39;
      MR_Word VarsX_40;
      MR_Word VarsY_41;
      MR_Word RHSX_42;
      MR_Word RHSY_43;
      MR_Word CompareArgs_Goal_44;
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word UnifyX_Goal_73;
      MR_Word UnifyY_Goal_74;

      if ((MaybeExistConstraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
        ExistQTVars_34 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ExistConstraints_35 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_19), (MR_Integer) 1));

        ExistQTVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_35, (MR_Integer) 0))));
      }
      check_hlds__unify_proc__make_fresh_arg_var_pairs_5_p_0(ExistQTVars_34, ArgTypes_21, &TypedVarPairs_39, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_49_49);
      VarsX_40 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[1]), TypedVarPairs_39);
      VarsY_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[2]), TypedVarPairs_39);
      {
        RHSX_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_42, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSX_42, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_42, 2) = ((MR_Box) (VarsX_40));
      }
      {
        RHSY_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_43, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSY_43, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_43, 2) = ((MR_Box) (VarsY_41));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_13, RHSX_42, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_73);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_14, RHSY_43, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyY_Goal_74);
      check_hlds__unify_proc__generate_compare_args_7_p_0(ExistQTVars_34, TypedVarPairs_39, R_12, Context_26, &CompareArgs_Goal_44, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_48);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CompareArgs_Goal_44));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (UnifyY_Goal_74));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (UnifyX_Goal_73));
        MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_59));
      }
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_45);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_26, GoalInfo0_45, &GoalInfo_46);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_30, GoalInfo_46, Case_16);
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

    if ((ExistQTVars_6 == (MR_Word) ((MR_Unsigned) 0U)))
      GiveFreshVarsTypes_10 = (MR_Integer) 1;
    else
      GiveFreshVarsTypes_10 = (MR_Integer) 0;
    VarSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1))));
    VarTypes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
    check_hlds__unify_proc__make_fresh_arg_var_pairs_8_p_0(GiveFreshVarsTypes_10, (MR_Integer) 1, CtorArgs_7, TypedVarPairs_8, VarSet0_13, &VarSet_15, VarTypes0_14, &VarTypes_16);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word CtorArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CtorArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypedVarPair_21;
    MR_Word TypedVarPairs_22;
    MR_Word STATE_VARIABLE_VarSet_29_29;
    MR_Word STATE_VARIABLE_VarTypes_30_30;
    MR_Integer Var_31;
    MR_Word ArgType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_19, (MR_Integer) 1))));
    MR_String ArgNumStr_46;
    MR_Word VarX_47;
    MR_Word VarY_48;
    MR_String Var_49;
    MR_Word STATE_VARIABLE_VarSet_24_50;
    MR_String Var_52;

    ArgNumStr_46 = mercury__string__int_to_string_1_f_0(HeadVar__2_2);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "ArgX", ArgNumStr_46);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_49, &VarX_47, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_24_50);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "ArgY", ArgNumStr_46);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52, &VarY_48, STATE_VARIABLE_VarSet_24_50, &STATE_VARIABLE_VarSet_29_29);
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
    Var_31 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
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
check_hlds__unify_proc__generate_return_equal_3_p_0(
  MR_Word ResultVar_4,
  MR_Word Context_5,
  MR_Word * Goal_6)
{
  {
    MR_Word Var_7;
    MR_Word SymName_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Builtin_15;
    MR_Word Var_16;

    Builtin_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Builtin_15));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_10, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), SymName_10, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (SymName_10));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_7, 3) = ((MR_Box) (Var_12));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, ResultVar_4, Var_7, Goal_6);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVar_69 = ((MR_Word) ((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__conv0_ExistQTVar_69));
    check_hlds__unify_proc__generate_compare_args_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__TypeInfo_72_72 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]);
    (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__TypeInfo_72_72, ((MR_Box) ((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVar_69)), ((MR_Box) ((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Var_71)));
    if ((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded)
      check_hlds__unify_proc__generate_compare_args_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s *) (env_ptr_arg);

    parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Type_22, &(env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Var_71, check_hlds__unify_proc__generate_compare_args_7_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &(env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__conv0_ExistQTVar_69, (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVars_1, check_hlds__unify_proc__generate_compare_args_7_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_args_7_p_0(
  MR_Word ExistQTVars_1,
  MR_Word HeadVar__2_2,
  MR_Word R_3,
  MR_Word Context_4,
  MR_Word * Goal_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    struct check_hlds__unify_proc__generate_compare_args_7_p_0_env_0_s env;

    (env).check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVars_1 = ExistQTVars_1;
    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_76;
        MR_Word SymName_79;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Builtin_84;
        MR_Word Var_85;

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
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (SymName_79));
          MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_76, 3) = ((MR_Box) (Var_81));
        }
        hlds__make_goal__make_const_construction_4_p_0(Context_4, R_3, Var_76, Goal_5);
        *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      }
      else
      {
        MR_Word TypedVarPair_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word TypedVarPairs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word X_23;
        MR_Word Y_24;
        MR_Word GoalInfo0_25;
        MR_Word GoalInfo_26;
        MR_String ComparePred_28;
        MR_Word ModuleInfo_29;
        MR_Word IsDummy_30;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;

        (env).check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Type_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 0))));
        X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 1))));
        Y_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedVarPair_16, (MR_Integer) 2))));
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_25);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_4, GoalInfo0_25, &GoalInfo_26);
        check_hlds__unify_proc__generate_compare_args_7_p_0_5(&env);
        if ((env).check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__succeeded)
          ComparePred_28 = (MR_String) "typed_compare";
        else
          ComparePred_28 = (MR_String) "compare";
        ModuleInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
        Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
        IsDummy_30 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_29, (env).check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__Type_22);
        switch (IsDummy_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__2_2 = TypedVarPairs_17;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
            if ((TypedVarPairs_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_63;
              MR_Word Var_65;
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Y_24));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              check_hlds__unify_proc__build_call_6_p_0(ComparePred_28, Var_63, Context_4, Goal_5, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
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
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              hlds__make_goal__make_const_construction_4_p_0(Context_4, R1_33, Var_49, &Check_Equal_35);
              Var_51 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Check_Equal_35)));
              {
                CheckNotEqual_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckNotEqual_36, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(0), CheckNotEqual_36, 1) = ((MR_Box) (GoalInfo_26));
              }
              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (R1_33));
              }
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(R_3, Var_52, Context_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Return_R1_37);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CheckNotEqual_36));
                MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              check_hlds__unify_proc__generate_compare_args_7_p_0((env).check_hlds__unify_proc__generate_compare_args_7_p_0_env_0__ExistQTVars_1, TypedVarPairs_17, R_3, Context_4, &ElseCase_39, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_7);
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_61, 2) = ((MR_Box) (Condition_38));
                MR_hl_field(MR_mktag(3), Var_61, 3) = ((MR_Box) (Return_R1_37));
                MR_hl_field(MR_mktag(3), Var_61, 4) = ((MR_Box) (ElseCase_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_5 = base;
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
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word Ctor1_12,
  MR_Word Ctor2_13,
  MR_String CompareOp_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_Word MaybeExistConstraints1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor1_12, (MR_Integer) 1))));
    MR_Word FunctorName1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor1_12, (MR_Integer) 2))));
    MR_Word ArgTypes1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor1_12, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor2_13, (MR_Integer) 1))));
    MR_Word FunctorName2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor2_13, (MR_Integer) 2))));
    MR_Word ArgTypes2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor2_13, (MR_Integer) 3))));
    MR_Integer FunctorArity1_32;
    MR_Integer FunctorArity2_33;
    MR_Word TypeCtor_34;
    MR_Word FunctorConsId1_35;
    MR_Word FunctorConsId2_36;
    MR_Word Vars1_37;
    MR_Word Vars2_38;
    MR_Word RHS1_39;
    MR_Word RHS2_40;
    MR_Word Context_41;
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
    MR_Word SymName_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Builtin_83;
    MR_Word Var_84;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), ArgTypes1_23, &FunctorArity1_32);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), ArgTypes2_29, &FunctorArity2_33);
    TypeCtor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 4))));
    {
      FunctorConsId1_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId1_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId1_35, 1) = ((MR_Box) (FunctorName1_22));
      MR_hl_field(MR_mktag(3), FunctorConsId1_35, 2) = ((MR_Box) (FunctorArity1_32));
      MR_hl_field(MR_mktag(3), FunctorConsId1_35, 3) = ((MR_Box) (TypeCtor_34));
    }
    {
      FunctorConsId2_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId2_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), FunctorConsId2_36, 1) = ((MR_Box) (FunctorName2_28));
      MR_hl_field(MR_mktag(3), FunctorConsId2_36, 2) = ((MR_Box) (FunctorArity2_33));
      MR_hl_field(MR_mktag(3), FunctorConsId2_36, 3) = ((MR_Box) (TypeCtor_34));
    }
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgTypes1_23, MaybeExistConstraints1_21, &Vars1_37, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_50_50);
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgTypes2_29, MaybeExistConstraints2_27, &Vars2_38, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_49);
    {
      RHS1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS1_39, 0) = ((MR_Box) (FunctorConsId1_35));
      MR_hl_field(MR_mktag(1), RHS1_39, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS1_39, 2) = ((MR_Box) (Vars1_37));
    }
    {
      RHS2_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS2_40, 0) = ((MR_Box) (FunctorConsId2_36));
      MR_hl_field(MR_mktag(1), RHS2_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS2_40, 2) = ((MR_Box) (Vars2_38));
    }
    Context_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 7))));
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHS1_39, Context_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyX_Goal_42);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHS2_40, Context_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyY_Goal_43);
    Builtin_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Builtin_83));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_81 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_78, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), SymName_78, 1) = ((MR_Box) (CompareOp_14));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (SymName_78));
      MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (Var_80));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_41, R_15, Var_58, &ReturnResult_44);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ReturnResult_44));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_41, GoalInfo0_46, &GoalInfo_47);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_45, GoalInfo_47, Case_18);
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_21;

    conv0_LambdaHeadVar__2_21 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__1754__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word MaybeExistConstraints_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  if ((MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTypes_10;

    ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_6[0]), CtorArgs_6);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_10, Vars_8, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
  else
  {
    MR_Word VarSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    MR_Integer NumVars_14;
    MR_Word VarSet_15;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), CtorArgs_6, &NumVars_14);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NumVars_14, Vars_8, VarSet0_13, &VarSet_15);
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Vars_11;
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word VarSet0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 1))));
    MR_Word VarTypes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 2))));
    MR_Word VarSet_24;
    MR_Word VarTypes_25;
    MR_Word Var_34;
    MR_Word Var_37;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_10, VarSet0_22, &VarSet_24);
    hlds__vartypes__add_var_type_4_p_0(Var_10, Type_8, VarTypes0_23, &VarTypes_25);
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 3))));
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

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
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

    IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_55);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_55, &Name_56);
    VarSet0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
    VarTypes0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_56, &CastX_15, VarSet0_64, &VarSet_66);
    hlds__vartypes__add_var_type_4_p_0(CastX_15, IntType_14, VarTypes0_65, &VarTypes_67);
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (VarSet_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (VarTypes_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (Var_79));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_16, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_30_30);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_15, Context_8, &CastXGoal_17);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_16, Context_8, &CastYGoal_18);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CastY_16));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CastX_15));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", Var_34, Context_8, &CompareGoal_19, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_35_35);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_20);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_20, &GoalInfo_21);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CompareGoal_19));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_43, Goal_22, Context_8, Clause_12, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
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
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_14, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), ArgVars_14, 1) = ((MR_Box) (Var_18));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", ArgVars_14, Context_8, &Goal_15, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_22_22);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_14, Goal_15, Context_8, Clause_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(
  MR_Word Context_9,
  MR_Word EqvType_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
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

    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_56);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_56, &Name_57);
    VarSet0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 1))));
    VarTypes0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_57, &CastX_16, VarSet0_65, &VarSet_67);
    hlds__vartypes__add_var_type_4_p_0(CastX_16, EqvType_10, VarTypes0_66, &VarTypes_68);
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (VarSet_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (VarTypes_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (Var_80));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_10, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_17, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_31_31);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_12, CastX_16, Context_9, &CastXGoal_18);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_13, CastY_17, Context_9, &CastYGoal_19);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CastY_17));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CastX_16));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Res_11));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", Var_35, Context_9, &CompareGoal_20, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_36_36);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_21);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_9, GoalInfo0_21, &GoalInfo_22);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CompareGoal_20));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Res_11));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_44, Goal_23, Context_9, Clause_14, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
    MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 4))));
    MR_Word CtorCat_16;
    MR_Word ArgVars_17;
    MR_String Name_18;
    MR_Word Context_22;
    MR_Word CompareGoal_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Info_54_54;

    CtorCat_16 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_14, TypeCtor_15);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      ArgVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_17, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), ArgVars_17, 1) = ((MR_Box) (Var_26));
    }
    switch (MR_tag((MR_Word) CtorCat_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_18 = (MR_String) "builtin_compare_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_16, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_70)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_70)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Name_18 = (MR_String) "builtin_compare_float";
                  break;
                case (MR_Integer) 1:
                  Name_18 = (MR_String) "builtin_compare_character";
                  break;
                case (MR_Integer) 2:
                  Name_18 = (MR_String) "builtin_compare_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));

                Name_18 = ((&check_hlds__unify_proc_vector_common_3[10 + Var_71]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    check_hlds__unify_proc__build_call_6_p_0(Name_18, ArgVars_17, Context_22, &CompareGoal_23, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_54_54);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_17, CompareGoal_23, Context_22, Clause_12, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(
  MR_Word Context_9,
  MR_Word NonCanonical_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_Word ArgVars_18;
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_40_40;

    switch (MR_tag((MR_Word) NonCanonical_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ComparePredName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_10, (MR_Integer) 1))));
          MR_Word PredId_45;
          MR_Integer ModeId_46;
          MR_Word Call_47;
          MR_Word GoalInfo_48;
          MR_Word Goal0_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_55;

          PredId_45 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (X_12));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
          }
          {
            ArgVars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_18, 0) = ((MR_Box) (Res_11));
            MR_hl_field(MR_mktag(1), ArgVars_18, 1) = ((MR_Box) (Var_50));
          }
          {
            Call_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_47, 0) = ((MR_Box) (PredId_45));
            MR_hl_field(MR_mktag(2), Call_47, 1) = ((MR_Box) (ModeId_46));
            MR_hl_field(MR_mktag(2), Call_47, 2) = ((MR_Box) (ArgVars_18));
            MR_hl_field(MR_mktag(2), Call_47, 3) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_47, 5) = ((MR_Box) (ComparePredName_44));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_48);
          {
            Goal0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_49, 0) = ((MR_Box) (Call_47));
            MR_hl_field(MR_mktag(0), Goal0_49, 1) = ((MR_Box) (GoalInfo_48));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Res_11));
          }
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_55, Goal0_49, &Goal_19, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_40_40);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_36;
          MR_Word Var_37;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (X_12));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            ArgVars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_18, 0) = ((MR_Box) (Res_11));
            MR_hl_field(MR_mktag(1), ArgVars_18, 1) = ((MR_Box) (Var_36));
          }
          check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", ArgVars_18, Context_9, &Goal_19, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_40_40);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ComparePredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_10, (MR_Integer) 0))));
          MR_Word PredId_22;
          MR_Integer ModeId_23;
          MR_Word Call_24;
          MR_Word GoalInfo_25;
          MR_Word Goal0_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_34;

          PredId_22 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_23 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (X_12));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
          }
          {
            ArgVars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_18, 0) = ((MR_Box) (Res_11));
            MR_hl_field(MR_mktag(1), ArgVars_18, 1) = ((MR_Box) (Var_29));
          }
          {
            Call_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_24, 0) = ((MR_Box) (PredId_22));
            MR_hl_field(MR_mktag(2), Call_24, 1) = ((MR_Box) (ModeId_23));
            MR_hl_field(MR_mktag(2), Call_24, 2) = ((MR_Box) (ArgVars_18));
            MR_hl_field(MR_mktag(2), Call_24, 3) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_24, 5) = ((MR_Box) (ComparePredName_21));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_25);
          {
            Goal0_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_26, 0) = ((MR_Box) (Call_24));
            MR_hl_field(MR_mktag(0), Goal0_26, 1) = ((MR_Box) (GoalInfo_25));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Res_11));
          }
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_34, Goal0_26, &Goal_19, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_40_40);
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_user\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
            return;
          }
        }
        break;
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_18, Goal_19, Context_9, Clause_14, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_28);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word Goal_14;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word SymName_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Builtin_33;
    MR_Word Var_34;

    Builtin_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Builtin_33));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_31 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_28, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), SymName_28, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SymName_28));
      MR_hl_field(MR_mktag(3), Var_25, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_25, 3) = ((MR_Box) (Var_30));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_8, Res_9, Var_25, &Goal_14);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_17, Goal_14, Context_8, Clause_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 4))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 7))));
    MR_Word IsDummy_14;

    IsDummy_14 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_12);
    switch (IsDummy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_85;
          MR_Word Var_86;
          MR_Word Var_88;

          Goal_85 = hlds__make_goal__true_goal_with_context_1_f_0(Context_13);
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Y_9));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (X_8));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
          }
          check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_86, Goal_85, Context_13, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
          MR_Word TypeBody_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 5))));
          MR_Word UserEqComp_17;

          succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_15, TypeBody_16, &UserEqComp_17);
          if (succeeded)
            check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(UserEqComp_17, X_8, Y_9, Context_13, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
          else
            switch (MR_tag((MR_Word) TypeBody_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_45;

                  Var_45 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_13, Var_45, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ctors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 0))));
                  MR_Word MaybeRepn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_16, (MR_Integer) 2))));
                  MR_Word Repn_27;
                  MR_Word DuTypeKind_28;

                  if ((MaybeRepn_25 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeRepn = no");
                      return;
                    }
                  }
                  else
                    Repn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_25, (MR_Integer) 0))));
                  DuTypeKind_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 3))));
                  switch (MR_tag((MR_Word) DuTypeKind_28)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(DuTypeKind_28)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                          break;
                        case (MR_Integer) 1:
                          check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                          break;
                        case (MR_Integer) 2:
                          check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, Ctors_23, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_28, (MR_Integer) 1))));
                        MR_Word ArgIsDummy_33;

                        ArgIsDummy_33 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, ArgType_31);
                        switch (ArgIsDummy_33) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                            break;
                          case (MR_Integer) 1:
                            check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, Ctors_23, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                            break;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word EqvType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_16, (MR_Integer) 0))));
                  MR_Word EqvIsDummy_20;

                  EqvIsDummy_20 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, EqvType_19);
                  switch (EqvIsDummy_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_13, EqvType_19, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_16, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(Context_13, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 1:
                    {
                      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_15);
                      if (succeeded)
                        check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(SpecDefnInfo_7, X_8, Y_9, Clause_10, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                      else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "trying to create unify proc for abstract type");
                          return;
                        }
                      }
                    }
                    break;
                }
                break;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_14;
    MR_Word conv0_STATE_VARIABLE_Info_49;

    check_hlds__unify_proc__generate_du_unify_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_49);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_49));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Ctors_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word CanCompareAsInt_14;
    MR_Word Disjuncts_15;
    MR_Word Context_16;
    MR_Word GoalInfo_17;
    MR_Word Goal0_18;
    MR_Word Goal_19;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word ModuleInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
    MR_Word Globals_48;
    MR_Box conv2_STATE_VARIABLE_Info_23_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_47, &Globals_48);
    libs__globals__lookup_bool_option_3_p_0(Globals_48, (MR_Integer) 286, &CanCompareAsInt_14);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (SpecDefnInfo_8));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (CanCompareAsInt_14));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_22, Ctors_9, &Disjuncts_15, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_23_23);
    STATE_VARIABLE_Info_23_23 = ((MR_Word) (conv2_STATE_VARIABLE_Info_23_23));
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_16, &GoalInfo_17);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Disjuncts_15));
    }
    {
      Goal0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal0_18, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Goal0_18, 1) = ((MR_Box) (GoalInfo_17));
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_16, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), Goal0_18, &Goal_19, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_26_26);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_27, Goal_19, Context_16, Clause_12, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Goal_12;
    MR_Word Var_17;
    MR_Word Var_19;

    hlds__make_goal__make_simple_test_5_p_0(X_8, Y_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_12);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_17, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_12, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), ArgVars_12, 1) = ((MR_Box) (Var_16));
    }
    check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", ArgVars_12, Context_7, &Goal_13, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_19_19);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_12, Goal_13, Context_7, Clause_10, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(
  MR_Word Context_8,
  MR_Word EqvType_9,
  MR_Word X_10,
  MR_Word Y_11,
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

    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_50);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_50, &Name_51);
    VarSet0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
    VarTypes0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_51, &CastX_14, VarSet0_59, &VarSet_61);
    hlds__vartypes__add_var_type_4_p_0(CastX_14, EqvType_9, VarTypes0_60, &VarTypes_62);
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (VarSet_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (VarTypes_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (Var_74));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_15, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_10, CastX_14, Context_8, &CastXGoal_16);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_11, CastY_15, Context_8, &CastYGoal_17);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (CastY_15));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_14, Var_32, Context_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_18);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_19);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_19, &GoalInfo_20);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (UnifyGoal_18));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_39, Goal_21, Context_8, Clause_12, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_23);
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

    mercury__string__int_to_string_2_p_0(Num_9, &NumStr_12);
    mercury__string__append_3_p_2(BaseName_8, NumStr_12, &Name_13);
    VarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1))));
    VarTypes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_13, Var_10, VarSet0_23, &VarSet_25);
    hlds__vartypes__add_var_type_4_p_0(*Var_10, Type_7, VarTypes0_24, &VarTypes_26);
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
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
check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 4))));
    MR_Word CtorCat_14;
    MR_Word ArgVars_15;
    MR_String Name_16;
    MR_Word Context_20;
    MR_Word UnifyGoal_21;
    MR_Word Var_24;
    MR_Word STATE_VARIABLE_Info_51_51;

    CtorCat_14 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_12, TypeCtor_13);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgVars_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_15, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), ArgVars_15, 1) = ((MR_Box) (Var_24));
    }
    switch (MR_tag((MR_Word) CtorCat_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_16 = (MR_String) "builtin_unify_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_14, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_67)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_67)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Name_16 = (MR_String) "builtin_unify_float";
                  break;
                case (MR_Integer) 1:
                  Name_16 = (MR_String) "builtin_unify_character";
                  break;
                case (MR_Integer) 2:
                  Name_16 = (MR_String) "builtin_unify_string";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));

                Name_16 = ((&check_hlds__unify_proc_vector_common_3[0 + Var_68]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
            return;
          }
        }
        break;
    }
    Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 7))));
    check_hlds__unify_proc__build_call_6_p_0(Name_16, ArgVars_15, Context_20, &UnifyGoal_21, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_51_51);
    check_hlds__unify_proc__quantify_clause_body_6_p_0(ArgVars_15, UnifyGoal_21, Context_20, Clause_10, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
  MR_String PredName_7,
  MR_Word ArgVars_8,
  MR_Word Context_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_12;
    MR_Word ModuleName_15;
    MR_Word ModuleInfo_16;
    MR_Word Var_24;
    MR_Integer Var_27;
    MR_Word Var_13;
    MR_String Var_14;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), ArgVars_8, &Arity_12);
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&Var_13, PredName_7, &Var_14, &Var_27);
    if (succeeded)
      succeeded = (Arity_12 == Var_27);
    if (succeeded)
      ModuleName_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    else
      ModuleName_15 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    Var_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleName_15, PredName_7, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[0])), (MR_Integer) 6, (MR_Integer) 0, ArgVars_8, (MR_Word) ((MR_Unsigned) 0U), Var_24, ModuleInfo_16, Context_9, Goal_10);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(
  MR_Word NonCanonical_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_Word Goal0_21;
    MR_Word Goal_26;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word Var_55;
    MR_Word Var_57;

    switch (MR_tag((MR_Word) NonCanonical_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnifyPredName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_8, (MR_Integer) 0))));
          MR_Word PredId_17;
          MR_Integer ModeId_18;
          MR_Word Call_19;
          MR_Word GoalInfo_20;
          MR_Word Var_46;
          MR_Word Var_47;

          PredId_17 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_18 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Y_10));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            Call_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_19, 0) = ((MR_Box) (PredId_17));
            MR_hl_field(MR_mktag(2), Call_19, 1) = ((MR_Box) (ModeId_18));
            MR_hl_field(MR_mktag(2), Call_19, 2) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(2), Call_19, 3) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_19, 5) = ((MR_Box) (UnifyPredName_15));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_20);
          {
            Goal0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Call_19));
            MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_20));
          }
          STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_27;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnifyPredName_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_8, (MR_Integer) 0))));
          MR_Word PredId_64;
          MR_Integer ModeId_65;
          MR_Word Call_66;
          MR_Word GoalInfo_67;
          MR_Word Var_68;
          MR_Word Var_69;

          PredId_64 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_65 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Y_10));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Call_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_66, 0) = ((MR_Box) (PredId_64));
            MR_hl_field(MR_mktag(2), Call_66, 1) = ((MR_Box) (ModeId_65));
            MR_hl_field(MR_mktag(2), Call_66, 2) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(2), Call_66, 3) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_66, 5) = ((MR_Box) (UnifyPredName_63));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_67);
          {
            Goal0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Call_66));
            MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_67));
          }
          STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_27;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_8, (MR_Integer) 0))));
          MR_Word ResultVar_23;
          MR_Word CallGoal_24;
          MR_Word UnifyGoal_25;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_37;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word PredId_59;
          MR_Integer ModeId_60;
          MR_Word Call_61;
          MR_Word GoalInfo_62;
          MR_Word Var_74;
          MR_Word SymName_78;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Builtin_83;
          MR_Word Var_84;

          Var_29 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
          check_hlds__unify_proc__info_new_var_4_p_0(Var_29, &ResultVar_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_30_30);
          PredId_59 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_60 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Y_10));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ResultVar_23));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
          }
          {
            Call_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_61, 0) = ((MR_Box) (PredId_59));
            MR_hl_field(MR_mktag(2), Call_61, 1) = ((MR_Box) (ModeId_60));
            MR_hl_field(MR_mktag(2), Call_61, 2) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(2), Call_61, 3) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_61, 5) = ((MR_Box) (ComparePredName_22));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_62);
          {
            CallGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallGoal_24, 0) = ((MR_Box) (Call_61));
            MR_hl_field(MR_mktag(0), CallGoal_24, 1) = ((MR_Box) (GoalInfo_62));
          }
          Builtin_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Builtin_83));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "comparison_result"));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_81 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            SymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SymName_78, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), SymName_78, 1) = ((MR_Box) ((MR_String) "="));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (SymName_78));
            MR_hl_field(MR_mktag(3), Var_74, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_74, 3) = ((MR_Box) (Var_80));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), Var_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_23, Var_37, Context_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_25);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (UnifyGoal_25));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (CallGoal_24));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (Var_43));
          }
          {
            Goal0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_62));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_user\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
            return;
          }
        }
        break;
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_11, X_9, Y_10, (MR_Word) ((MR_Unsigned) 0U), Goal0_21, &Goal_26, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_54_54);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_55, Goal_26, Context_11, Clause_12, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_28);
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
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 1))));
    MR_Word VarTypes0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 2))));
    MR_Word VarSet_10;
    MR_Word VarTypes_11;
    MR_Word Var_22;
    MR_Word Var_25;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, VarSet0_8, &VarSet_10);
    hlds__vartypes__add_var_type_4_p_0(*Var_6, Type_5, VarTypes0_9, &VarTypes_11);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 3))));
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
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_Word ShouldPretestEq_16;
    MR_Word ModuleInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 0))));
    MR_Word Globals_63;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_62, &Globals_63);
    libs__globals__lookup_bool_option_3_p_0(Globals_63, (MR_Integer) 330, &ShouldPretestEq_16);
    switch (ShouldPretestEq_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Goal_14 = Goal0_13;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
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
          MR_Word ContextGoalInfo_27;
          MR_Word CondGoal_28;
          MR_Word EqualGoal_29;
          MR_Word GoalInfo_30;
          MR_Word GoalExpr_35;
          MR_Word FeaturedGoalInfo_36;
          MR_Word STATE_VARIABLE_Info_40_40;
          MR_Word Var_47;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word ModuleInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 0))));
          MR_Word Globals_71;
          MR_Word CastPointers_72;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_70, &Globals_71);
          libs__globals__lookup_bool_option_3_p_0(Globals_71, (MR_Integer) 287, &CastPointers_72);
          switch (CastPointers_72) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
              break;
            case (MR_Integer) 1:
              CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              break;
          }
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_17, (MR_String) "CastX", &CastX_18, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_17, (MR_String) "CastY", &CastY_19, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_18, Context_9, &CastXGoal0_20);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_19, Context_9, &CastYGoal0_21);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_20, &CastXGoal_22);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_21, &CastYGoal_23);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (CastY_19));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_18, Var_47, Context_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal0_24);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, EqualityGoal0_24, &EqualityGoal_25);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (EqualityGoal_25));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (CastYGoal_23));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (CastXGoal_22));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
          }
          {
            CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), CondGoalExpr_26, 2) = ((MR_Box) (Var_52));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &ContextGoalInfo_27);
          {
            CondGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CondGoal_28, 0) = ((MR_Box) (CondGoalExpr_26));
            MR_hl_field(MR_mktag(0), CondGoal_28, 1) = ((MR_Box) (ContextGoalInfo_27));
          }
          if ((MaybeCompareRes_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            EqualGoal_29 = hlds__make_goal__true_goal_with_context_1_f_0(Context_9);
            GoalInfo_30 = ContextGoalInfo_27;
          }
          else
          {
            MR_Word Res_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompareRes_12, (MR_Integer) 0))));
            MR_Word EqualGoalInfo_33;
            MR_Word InstmapDelta_34;
            MR_Word Var_56;
            MR_Word SymName_78;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Builtin_83;
            MR_Word Var_84;

            Builtin_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Builtin_83));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_81 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              SymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SymName_78, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), SymName_78, 1) = ((MR_Box) ((MR_String) "="));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (SymName_78));
              MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_56, 3) = ((MR_Box) (Var_80));
            }
            hlds__make_goal__make_const_construction_4_p_0(Context_9, Res_31, Var_56, &EqualGoal_29);
            EqualGoalInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqualGoal_29, (MR_Integer) 1))));
            InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EqualGoalInfo_33);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstmapDelta_34, ContextGoalInfo_27, &GoalInfo_30);
          }
          {
            GoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 2) = ((MR_Box) (CondGoal_28));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 3) = ((MR_Box) (EqualGoal_29));
            MR_hl_field(MR_mktag(3), GoalExpr_35, 4) = ((MR_Box) (Goal0_13));
          }
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, GoalInfo_30, &FeaturedGoalInfo_36);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_35));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FeaturedGoalInfo_36));
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
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 1))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 2))));
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word Var_24;
    MR_Word Var_27;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_7, Var_8, VarSet0_10, &VarSet_12);
    hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_6, VarTypes0_11, &VarTypes_13);
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 3))));
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
check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Goal_12;
    MR_Word Var_15;
    MR_Word Var_17;

    Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_7);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
    }
    check_hlds__unify_proc__quantify_clause_body_6_p_0(Var_15, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
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
    MR_Word Varset0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
    MR_Word Types0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
    MR_Word RttiVarMaps0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
    MR_Word Goal_16;
    MR_Word Varset_17;
    MR_Word Types_18;
    MR_Word RttiVarMaps_19;
    MR_Word Var_49;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word _Warnings_15;

    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_7, &_Warnings_15, Goal0_8, &Goal_16, Varset0_12, &Varset_17, Types0_13, &Types_18, RttiVarMaps0_14, &RttiVarMaps_19);
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    check_hlds__unify_proc____Compare____linear_or_quad_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = check_hlds__unify_proc____Unify____typed_var_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    check_hlds__unify_proc____Compare____typed_var_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    check_hlds__unify_proc____Compare____unify_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_typed_var_pair_0);
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
