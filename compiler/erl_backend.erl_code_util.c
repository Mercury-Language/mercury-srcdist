/*
** Automatically generated from `erl_code_util.m'
** by the Mercury compiler,
** version rotd-2019-08-02
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


// :- module erl_backend.erl_code_util.
// :- implementation.

/*
INIT mercury__erl_backend__erl_code_util__init
ENDINIT
*/

#include "erl_backend.erl_code_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "erl_backend.elds.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
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



struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s {
  MR_bool erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_19;
  jmp_buf erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_20;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__Var_23;
  MR_Box erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_Var_23;
};


static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0[8];

static const MR_ConstString erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0[8];

static const MR_DuFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0;

static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1];

static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1];

static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1];

static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1];

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0;

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1;

static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2];

static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2];

static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2];

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
  MR_Word Case_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
  MR_Word Subn_4,
  MR_Word Case0_5,
  MR_Word * Case_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
  MR_Word OldVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14);

static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word InstMap_8,
  MR_Word InstmapDelta_9,
  MR_Word Var_10);

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
  MR_Integer _Num_5,
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9);

static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9);

static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
  MR_Word Term_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__erl_code_util__sum_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__sum_1_f_0(
  MR_Word Xs_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
  MR_Word Cases_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
  MR_Word Term_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
  MR_Word Terms_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
  MR_Word tscc_proc_1_input_1_Expr_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_23);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
  MR_Word tscc_proc_2_input_1_Clause_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_23);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
  MR_Word Catch_4,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
  MR_Word Cases_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Set_0_25,
  MR_Word * STATE_VARIABLE_Set_26);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
  MR_Word Subn_4,
  MR_Word Catch0_5,
  MR_Word * Catch_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
  MR_Word Subn_4,
  MR_Word Cases0_5,
  MR_Word * Cases_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
  MR_Word Subn_4,
  MR_Word Term0_5,
  MR_Word * Term_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0(
  MR_Word Subn_4,
  MR_Word Terms0_5,
  MR_Word * Terms_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[22][3];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_3[1][7];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_4[8][6];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_5[2][8];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_6[4][5];




static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[22][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0])),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_3[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_create_renaming_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[5])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[5])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[6])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[3])),
    ((MR_Box) (erl_backend__erl_code_util__erl_cases_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_cases_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__sum_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_expr_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_expr_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[3])),
    ((MR_Box) (erl_backend__erl_code_util__erl_expr_size_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_case_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_case_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_4[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0[8] = {
  (MR_String) "egi_module_info",
  (MR_String) "egi_pred_id",
  (MR_String) "egi_proc_id",
  (MR_String) "egi_varset",
  (MR_String) "egi_var_types",
  (MR_String) "egi_input_vars",
  (MR_String) "egi_output_vars",
  (MR_String) "egi_env_var_names"
};

static const MR_DuFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0 = {
  (MR_String) "erl_gen_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0,
  erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "erl_gen_info",
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0 },
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0
};

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0 = {
  (MR_String) "opt_dummy_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1 = {
  (MR_String) "no_opt_dummy_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1
};

static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0
};

static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "opt_dummy_args",
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0 },
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0
};

void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
erl_backend__erl_code_util____Unify____erl_gen_info_0_0(
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
      MR_Word TypeInfo_24_24;
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
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

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeCtorInfo_25_25 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_4;

    conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
  MR_Word Case_3)
{
  {
    MR_Integer Size_4;
    MR_Word Pattern_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 0))));
    MR_Word Expr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 1))));
    MR_Integer Var_7;
    MR_Integer Var_9;
    MR_Integer Var_10;

    switch (MR_tag((MR_Word) Pattern_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Var_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pattern_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            Var_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 14:
            {
              MR_Word Exprs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pattern_5, (MR_Integer) 1))));
              MR_Integer Var_33;
              MR_Word Var_35;
              MR_Box conv2_Var_33;

              Var_35 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[20]), Exprs_31);
              conv2_Var_33 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[21]), Var_35, ((MR_Box) ((MR_Integer) 0)));
              Var_33 = ((MR_Integer) (conv2_Var_33));
              Var_9 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_33);
            }
            break;
        }
        break;
    }
    Var_7 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_9);
    Var_10 = erl_backend__erl_code_util__erl_expr_size_1_f_0(Expr_6);
    Size_4 = (MR_Integer) ((MR_Unsigned) Var_7 + (MR_Unsigned) Var_10);
    return Size_4;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
  {
    MR_Word Pattern_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 0))));
    MR_Word Expr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Set_10_10;

    erl_backend__erl_code_util__erl_vars_in_term_3_p_0(Pattern_6, STATE_VARIABLE_Set_0_8, &STATE_VARIABLE_Set_10_10);
    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr_7, STATE_VARIABLE_Set_10_10, STATE_VARIABLE_Set_9);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
  MR_Word Subn_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  {
    MR_Word Pattern0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0))));
    MR_Word Expr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1))));
    MR_Word Pattern_9;
    MR_Word Expr_10;

    erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(Subn_4, Pattern0_7, &Pattern_9);
    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, Expr0_8, &Expr_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pattern_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Expr_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
  MR_Word OldVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14)
{
  {
    MR_bool succeeded;
    MR_Word NewVar_10;
    MR_String Name_9;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_11, OldVar_6, &Name_9);
    if (succeeded)
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_9, &NewVar_10, STATE_VARIABLE_VarSet_0_11, STATE_VARIABLE_VarSet_12);
    }
    else
    {
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewVar_10, STATE_VARIABLE_VarSet_0_11, STATE_VARIABLE_VarSet_12);
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), ((MR_Box) (OldVar_6)), ((MR_Box) (NewVar_10)), STATE_VARIABLE_Subst_0_13, STATE_VARIABLE_Subst_14);
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word InstMap_8,
  MR_Word InstmapDelta_9,
  MR_Word Var_10)
{
  {
    MR_bool succeeded;
    MR_Word Type_11;
    MR_Word Var_12;

    succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(ModuleInfo_6, InstMap_8, InstmapDelta_9, Var_10);
    if (succeeded)
    {
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_10, &Type_11);
      Var_12 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, Type_11);
      succeeded = (Var_12 == (MR_Integer) 1);
    }
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
  MR_Integer _Num_5,
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9)
{
  erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(NewVar_6, STATE_VARIABLE_VarSet_0_8, STATE_VARIABLE_VarSet_9);
}

static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9)
{
  {
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "_", NewVar_6, STATE_VARIABLE_VarSet_0_8, STATE_VARIABLE_VarSet_9);
  }
}

MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0(void)
{
  {
    return (MR_Integer) 4;
  }
}

void MR_CALL 
erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(
  MR_Word Expr0_3,
  MR_Word * Expr_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Expr0_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word Expr1_5;
    MR_Word TypeCtorInfo_18_21;
    MR_Word OuterCond_8;
    MR_Word OuterCases_9;
    MR_Word InnerCond_10;
    MR_Word InnerCases_11;
    MR_Word InnerPreamble_12;
    MR_Word NewCases_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    if (succeeded)
    {
      OuterCond_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_3, (MR_Integer) 1))));
      OuterCases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_3, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) OuterCond_8)) == (MR_Integer) 1))
      {
        MR_Word OuterCondExprs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OuterCond_8, (MR_Integer) 0))));
        MR_Word InnerCaseExpr_14;
        MR_Box conv0_InnerCaseExpr_14;

        succeeded = mercury__list__split_last_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), OuterCondExprs_13, &InnerPreamble_12, &conv0_InnerCaseExpr_14);
        if (succeeded)
        {
          InnerCaseExpr_14 = ((MR_Word) (conv0_InnerCaseExpr_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) InnerCaseExpr_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InnerCaseExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            InnerCond_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnerCaseExpr_14, (MR_Integer) 1))));
            InnerCases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnerCaseExpr_14, (MR_Integer) 2))));
          }
        }
      }
      else
      if (((((MR_tag((MR_Word) OuterCond_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OuterCond_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        InnerCond_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OuterCond_8, (MR_Integer) 1))));
        InnerCases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OuterCond_8, (MR_Integer) 2))));
        InnerPreamble_12 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(OuterCases_9, InnerCases_11, &NewCases_15);
        if (succeeded)
        {
          TypeCtorInfo_18_21 = (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0);
          Var_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (InnerCond_10));
            MR_hl_field(MR_mktag(3), Var_18, 2) = ((MR_Box) (NewCases_15));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
          }
          Var_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_21, InnerPreamble_12, Var_17);
          {
            Expr1_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Expr1_5, 0) = ((MR_Box) (Var_16));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *Expr_4 = Expr1_5;
    else
      *Expr_4 = Expr0_3;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word OC_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OCs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word IC_6;
      MR_Word ICs_7;
      MR_Word NC_8;
      MR_Word NCs_9;
      MR_Word OuterPat_10;
      MR_Word OuterExpr_11;
      MR_Word InnerPat_12;
      MR_Word InnerTerm_13;
      MR_Word Var_14;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        IC_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ICs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        OuterPat_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OC_4, (MR_Integer) 0))));
        OuterExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OC_4, (MR_Integer) 1))));
        InnerPat_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IC_6, (MR_Integer) 0))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IC_6, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
        if (succeeded)
        {
          InnerTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0))));
          succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0(InnerTerm_13);
          if (succeeded)
          {
            succeeded = erl_backend__elds____Unify____elds_term_0_0(InnerTerm_13, OuterPat_10);
            if (!(succeeded))
            {
              succeeded = (OuterPat_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (OCs_5 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              {
                NC_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NC_8, 0) = ((MR_Box) (InnerPat_12));
                MR_hl_field(MR_mktag(0), NC_8, 1) = ((MR_Box) (OuterExpr_11));
              }
              succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(OCs_5, ICs_7, &NCs_9);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NC_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NCs_9));
                }
                succeeded = MR_TRUE;
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
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__Var_23 = ((MR_Word) ((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_Var_23));
    erl_backend__erl_code_util__non_variable_term_1_p_0_2(env_ptr);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__Var_23)) == (MR_Integer) 2);
    if ((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
    {
      (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__Var_23, (MR_Integer) 0))));
      (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_20);
      (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
      if ((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
        erl_backend__erl_code_util__non_variable_term_1_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
  void * env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), &(env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_Var_23, (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_19, erl_backend__erl_code_util__non_variable_term_1_p_0_3, env_ptr);
        }
        (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
  MR_Word Term_2)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s env;

    switch (MR_tag((MR_Word) Term_2)) {
      default:
        (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Term_2, (MR_Integer) 0))))) {
          default:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 5:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 6:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 8:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 10:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 11:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 12:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 14:
            {
              (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_2, (MR_Integer) 1))));
              erl_backend__erl_code_util__non_variable_term_1_p_0_4(&env);
              (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
            }
            break;
        }
        break;
    }
    return (env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv2_Size_4;

    conv2_Size_4 = erl_backend__erl_code_util__erl_case_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_Size_4;

    conv1_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_4;

    conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Size_4));
    return wrapper_arg_2;
  }
}

MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0(
  MR_Word Expr_3)
{
  while (MR_TRUE)
  {
    MR_Integer Size_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Expr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Terms_11;
          MR_Word Var_47 = (MR_Word) ((MR_Word) (Expr_3));
          MR_Integer Var_48;
          MR_Integer Var_50;
          MR_Integer Var_51;
          MR_Word ExprA_64;

          Terms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
          ExprA_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
          Var_50 = erl_backend__erl_code_util__erl_terms_size_1_f_0(Terms_11);
          Var_48 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_50);
          Var_51 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_64);
          Size_4 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) Var_51);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Exprs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_3, (MR_Integer) 0))));
          MR_Word Var_73;

          Var_73 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[17]), Exprs_5);
          Size_4 = erl_backend__erl_code_util__sum_1_f_0(Var_73);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_3, (MR_Integer) 0))));

          Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(Term_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ExprA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
              MR_Word ExprB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
              MR_Integer Var_56;
              MR_Integer Var_57;

              Var_56 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_7);
              Var_57 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprB_8);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) Var_57);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ExprA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
              MR_Word next_value_of_Expr_3 = ExprA_58;

              // direct tailcall eliminated
              ;
              Expr_3 = next_value_of_Expr_3;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_54;
              MR_Integer Var_55;
              MR_Word ExprA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
              MR_Word ExprB_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 3))));

              Var_54 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_60);
              Var_55 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprB_61);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) Var_55);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CallTarget_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
              MR_Integer Var_52;
              MR_Integer Var_53;
              MR_Word Exprs_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
              MR_Word Var_83;

              switch (MR_tag((MR_Word) CallTarget_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_52 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Expr_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallTarget_10, (MR_Integer) 0))));

                    Var_52 = erl_backend__erl_code_util__erl_expr_size_1_f_0(Expr_81);
                  }
                  break;
                case (MR_Integer) 2:
                  Var_52 = (MR_Integer) 1;
                  break;
              }
              Var_83 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[18]), Exprs_63);
              Var_53 = erl_backend__erl_code_util__sum_1_f_0(Var_83);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) Var_53);
            }
            break;
          case (MR_Integer) 4:
            Size_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
              MR_Integer Var_43;
              MR_Integer Var_45;
              MR_Integer Var_46;
              MR_Word ExprA_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
              MR_Integer Var_91;
              MR_Word Var_92;

              Var_45 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_65);
              Var_43 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_45);
              Var_92 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[19]), Cases_12);
              Var_91 = erl_backend__erl_code_util__sum_1_f_0(Var_92);
              Var_46 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_91);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_43 + (MR_Unsigned) Var_46);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word MaybeCatch_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 3))));
              MR_Word MaybeAfter_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 4))));
              MR_Integer CatchSize_18;
              MR_Integer AfterSize_20;
              MR_Integer Var_37;
              MR_Integer Var_38;
              MR_Integer Var_39;
              MR_Integer Var_41;
              MR_Integer Var_42;
              MR_Word ExprA_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
              MR_Word Cases_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));

              if ((MaybeCatch_13 == (MR_Word) ((MR_Unsigned) 0U)))
                CatchSize_18 = (MR_Integer) 0;
              else
              {
                MR_Word TermA_15;
                MR_Word TermB_16;
                MR_Word CatchExpr_17;
                MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_13, (MR_Integer) 0))));
                MR_Integer Var_33;
                MR_Integer Var_34;
                MR_Integer Var_35;
                MR_Integer Var_36;

                TermA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
                TermB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
                CatchExpr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 2))));
                Var_34 = erl_backend__erl_code_util__erl_term_size_1_f_0(TermA_15);
                Var_35 = erl_backend__erl_code_util__erl_term_size_1_f_0(TermB_16);
                Var_33 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) Var_35);
                Var_36 = erl_backend__erl_code_util__erl_expr_size_1_f_0(CatchExpr_17);
                CatchSize_18 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) Var_36);
              }
              if ((MaybeAfter_14 == (MR_Word) ((MR_Unsigned) 0U)))
                AfterSize_20 = (MR_Integer) 0;
              else
              {
                MR_Word AfterExpr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfter_14, (MR_Integer) 0))));

                AfterSize_20 = erl_backend__erl_code_util__erl_expr_size_1_f_0(AfterExpr_19);
              }
              Var_41 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_66);
              Var_39 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_41);
              Var_42 = erl_backend__erl_code_util__erl_cases_size_1_f_0(Cases_67);
              Var_38 = (MR_Integer) ((MR_Unsigned) Var_39 + (MR_Unsigned) Var_42);
              Var_37 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) CatchSize_18);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_37 + (MR_Unsigned) AfterSize_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer Var_31;
              MR_Word ExprA_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));

              Var_31 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_68);
              Size_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_31);
            }
            break;
          case (MR_Integer) 8:
            Size_4 = (MR_Integer) 10000;
            break;
          case (MR_Integer) 9:
            {
              MR_Integer Var_26;
              MR_Integer Var_28;
              MR_Integer Var_29;
              MR_Word ExprA_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
              MR_Word ExprB_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));

              Var_28 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprA_69);
              Var_26 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_28);
              Var_29 = erl_backend__erl_code_util__erl_expr_size_1_f_0(ExprB_70);
              Size_4 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) Var_29);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer Var_25;
              MR_Word Cases_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));

              Var_25 = erl_backend__erl_code_util__erl_cases_size_1_f_0(Cases_71);
              Size_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_25);
            }
            break;
        }
        break;
    }
    return Size_4;
    break;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__sum_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__sum_1_f_0(
  MR_Word Xs_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[16]), Xs_3, ((MR_Box) ((MR_Integer) 0)));
    HeadVar__2_2 = ((MR_Integer) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_4;

    conv0_Size_4 = erl_backend__erl_code_util__erl_case_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
  MR_Word Cases_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5;
    MR_Word Var_6;
    MR_Box conv2_Var_5;

    Var_6 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[14]), Cases_3);
    conv2_Var_5 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[15]), Var_6, ((MR_Box) ((MR_Integer) 0)));
    Var_5 = ((MR_Integer) (conv2_Var_5));
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_5);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_4;

    conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
  MR_Word Term_3)
{
  {
    MR_Integer Size_4;

    switch (MR_tag((MR_Word) Term_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Size_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Size_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Term_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            Size_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 14:
            {
              MR_Word Exprs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_3, (MR_Integer) 1))));
              MR_Integer Var_25;
              MR_Word Var_27;
              MR_Box conv2_Var_25;

              Var_27 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[12]), Exprs_23);
              conv2_Var_25 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[13]), Var_27, ((MR_Box) ((MR_Integer) 0)));
              Var_25 = ((MR_Integer) (conv2_Var_25));
              Size_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_25);
            }
            break;
        }
        break;
    }
    return Size_4;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Size_4;

    conv0_Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Size_4));
    return wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
  MR_Word Terms_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Word Var_4;
    MR_Box conv2_HeadVar__2_2;

    Var_4 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[10]), Terms_3);
    conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[11]), Var_4, ((MR_Box) ((MR_Integer) 0)));
    HeadVar__2_2 = ((MR_Integer) (conv2_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_expr_vars_2_p_0(
  MR_Word Expr_3,
  MR_Word * Set_4)
{
  {
    MR_Word Var_5;

    Var_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr_3, Var_5, Set_4);
  }
}

MR_Word MR_CALL 
erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word DummyVarReplacement_8,
  MR_Word Var_9)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;
    MR_Word Type_10;
    MR_Word Var_11;

    succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_7, Var_9, &Type_10);
    if (succeeded)
    {
      Var_11 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, Type_10);
      succeeded = (Var_11 == (MR_Integer) 0);
    }
    if (succeeded)
      {
        HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__5_5, 0) = ((MR_Box) (DummyVarReplacement_8));
      }
    else
      HeadVar__5_5 = erl_backend__elds__expr_from_var_1_f_0(Var_9);
    return HeadVar__5_5;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(
  MR_Word Info_7,
  MR_Word VarsToBind_8,
  MR_Word Goal_9,
  MR_Word InstMap_10,
  MR_Word Statement0_11,
  MR_Word * Statement_12)
{
  {
    MR_bool succeeded;
    MR_Word Bound_13;
    MR_Word NotBound_14;

    erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(Info_7, InstMap_10, Goal_9, &Bound_13);
    NotBound_14 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsToBind_8, Bound_13);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NotBound_14);
    if (succeeded)
      *Statement_12 = Statement0_11;
    else
    {
      MR_Word NotBoundList_15;
      MR_Word Assignments_16;
      MR_Word Var_18;

      NotBoundList_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NotBound_14);
      Assignments_16 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[9]), NotBoundList_15);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Assignments_16));
      }
      *Statement_12 = erl_backend__elds__join_exprs_2_f_0(Var_18, Statement0_11);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(
  MR_Word Info_5,
  MR_Word InstMap_6,
  MR_Word Goal_7,
  MR_Word * BoundNonLocals_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
    MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
    MR_Word NonLocals_13;
    MR_Word InstmapDelta_14;
    MR_Word Var_15;

    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
    InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_12);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (VarTypes_10));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (InstMap_6));
      MR_hl_field(MR_mktag(0), Var_15, 6) = ((MR_Box) (InstmapDelta_14));
    }
    *BoundNonLocals_8 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_15, NonLocals_13);
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(
  MR_Word InstMap0_7,
  MR_Word Goal_8,
  MR_Word MaybeExpr0_9,
  MR_Word * MaybeExpr_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  if ((MaybeExpr0_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeExpr_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word Expr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExpr0_9, (MR_Integer) 0))));
    MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word InstMap_14;
    MR_Word BoundVars_15;
    MR_Word Expr_16;

    hlds__goal_util__update_instmap_3_p_0(Goal_8, InstMap0_7, &InstMap_14);
    hlds__instmap__instmap_bound_vars_3_p_0(InstMap_14, ModuleInfo_13, &BoundVars_15);
    erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(BoundVars_15, Expr0_12, &Expr_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeExpr_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Expr_16));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(
  MR_Word ExceptVars_6,
  MR_Word Expr0_7,
  MR_Word * Expr_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Vars0_10;
    MR_Word Vars_11;
    MR_Word Subn_12;
    MR_Word Var_15;
    MR_Word Var_20;

    Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr0_7, Var_20, &Vars0_10);
    Vars_11 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_10, ExceptVars_6);
    Var_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_11);
    erl_backend__erl_code_util__erl_create_renaming_4_p_0(Var_15, &Subn_12, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_12, Expr0_7, Expr_8);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Set_9;

    erl_backend__erl_code_util__erl_vars_in_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Set_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Set_23;

    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Set_23);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_23;

    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Set_26;

    erl_backend__erl_code_util__erl_vars_in_term_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Set_26);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Set_26));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
  MR_Word tscc_proc_1_input_1_Expr_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_23)
{
  {
    MR_Word tscc_proc_2_input_1_Clause_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8;
    MR_Word tscc_output_1_STATE_VARIABLE_Set_23;

    // The code for TSCC PROC 1: pred erl_backend.erl_code_util.erl_vars_in_expr/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.erl_code_util.erl_vars_in_expr/3-0
    ;
    // proc 2 in TSCC: pred erl_backend.erl_code_util.erl_vars_in_clause/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Expr_4 = tscc_proc_1_input_1_Expr_4;
      MR_Word STATE_VARIABLE_Set_0_22 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
      MR_Word STATE_VARIABLE_Set_23;

      switch (MR_tag((MR_Word) Expr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Clause_13 = (MR_Word) ((MR_Word) (Expr_4));
            MR_Word next_value_of_tscc_proc_2_input_1_Clause_4 = Clause_13;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8 = STATE_VARIABLE_Set_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Clause_4 = next_value_of_tscc_proc_2_input_1_Clause_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Exprs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_4, (MR_Integer) 0))));
            MR_Box conv1_STATE_VARIABLE_Set_23;

            mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[5]), Exprs_6, ((MR_Box) (STATE_VARIABLE_Set_0_22)), &conv1_STATE_VARIABLE_Set_23);
            STATE_VARIABLE_Set_23 = ((MR_Word) (conv1_STATE_VARIABLE_Set_23));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_4, (MR_Integer) 0))));

            erl_backend__erl_code_util__erl_vars_in_term_3_p_0(Term_7, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_23);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ExprA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_40_40;
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_8, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_40_40);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_9;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_40_40;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ExprA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = ExprA_44;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Set_37_37;
                MR_Word ExprA_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word ExprB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_46, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_37_37);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_47;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_37_37;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word CallTarget_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_35_35;
                MR_Box conv3_STATE_VARIABLE_Set_23;

                switch (MR_tag((MR_Word) CallTarget_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_35_35 = STATE_VARIABLE_Set_0_22;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Expr_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallTarget_11, (MR_Integer) 0))));

                      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr_73, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_35_35);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_35_35 = STATE_VARIABLE_Set_0_22;
                    break;
                }
                mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[6]), ExprsB_12, ((MR_Box) (STATE_VARIABLE_Set_35_35)), &conv3_STATE_VARIABLE_Set_23);
                STATE_VARIABLE_Set_23 = ((MR_Word) (conv3_STATE_VARIABLE_Set_23));
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_0_22;
              break;
            case (MR_Integer) 5:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_32_32;
                MR_Word ExprA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Box conv5_STATE_VARIABLE_Set_23;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_49, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_32_32);
                mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[7]), Cases_14, ((MR_Box) (STATE_VARIABLE_Set_32_32)), &conv5_STATE_VARIABLE_Set_23);
                STATE_VARIABLE_Set_23 = ((MR_Word) (conv5_STATE_VARIABLE_Set_23));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word MaybeCatch_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 3))));
                MR_Word MaybeAfter_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Set_28_28;
                MR_Word STATE_VARIABLE_Set_29_29;
                MR_Word STATE_VARIABLE_Set_30_30;
                MR_Word ExprA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word Cases_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_50, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_28_28);
                erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(Cases_51, STATE_VARIABLE_Set_28_28, &STATE_VARIABLE_Set_29_29);
                if ((MaybeCatch_15 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Set_30_30 = STATE_VARIABLE_Set_29_29;
                else
                {
                  MR_Word Catch_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_15, (MR_Integer) 0))));

                  erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(Catch_17, STATE_VARIABLE_Set_29_29, &STATE_VARIABLE_Set_30_30);
                }
                if ((MaybeAfter_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_30_30;
                else
                {
                  MR_Word After_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfter_16, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = After_18;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_30_30;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                  tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ExprA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = ExprA_52;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_0_22;
              break;
            case (MR_Integer) 9:
              {
                MR_Word STATE_VARIABLE_Set_25_25;
                MR_Word ExprA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_53, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_25_25);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_54;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_25_25;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Cases_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));

                erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(Cases_55, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Clause_4 = tscc_proc_2_input_1_Clause_4;
      MR_Word STATE_VARIABLE_Set_0_8 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8;
      MR_Word STATE_VARIABLE_Set_9;
      MR_Word Pattern_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 0))));
      MR_Word Expr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Set_10_10;
      MR_Box conv7_STATE_VARIABLE_Set_10_10;
      MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

      mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[8]), Pattern_6, ((MR_Box) (STATE_VARIABLE_Set_0_8)), &conv7_STATE_VARIABLE_Set_10_10);
      STATE_VARIABLE_Set_10_10 = ((MR_Word) (conv7_STATE_VARIABLE_Set_10_10));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_Expr_4 = Expr_7;
      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_10_10;
      tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
      goto top_of_proc_1;
      tscc_output_1_STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_9;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Set_23 = tscc_output_1_STATE_VARIABLE_Set_23;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
  MR_Word tscc_proc_2_input_1_Clause_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_23)
{
  {
    MR_Word tscc_proc_1_input_1_Expr_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_Set_23;

    // The code for TSCC PROC 2: pred erl_backend.erl_code_util.erl_vars_in_clause/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.erl_code_util.erl_vars_in_expr/3-0
    ;
    // proc 2 in TSCC: pred erl_backend.erl_code_util.erl_vars_in_clause/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Expr_4 = tscc_proc_1_input_1_Expr_4;
      MR_Word STATE_VARIABLE_Set_0_22 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
      MR_Word STATE_VARIABLE_Set_23;

      switch (MR_tag((MR_Word) Expr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Clause_13 = (MR_Word) ((MR_Word) (Expr_4));
            MR_Word next_value_of_tscc_proc_2_input_1_Clause_4 = Clause_13;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8 = STATE_VARIABLE_Set_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Clause_4 = next_value_of_tscc_proc_2_input_1_Clause_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Exprs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_4, (MR_Integer) 0))));
            MR_Box conv1_STATE_VARIABLE_Set_23;

            mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[5]), Exprs_6, ((MR_Box) (STATE_VARIABLE_Set_0_22)), &conv1_STATE_VARIABLE_Set_23);
            STATE_VARIABLE_Set_23 = ((MR_Word) (conv1_STATE_VARIABLE_Set_23));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_4, (MR_Integer) 0))));

            erl_backend__erl_code_util__erl_vars_in_term_3_p_0(Term_7, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_23);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ExprA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_40_40;
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_8, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_40_40);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_9;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_40_40;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ExprA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = ExprA_44;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_Set_37_37;
                MR_Word ExprA_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word ExprB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_46, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_37_37);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_47;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_37_37;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word CallTarget_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_35_35;
                MR_Box conv3_STATE_VARIABLE_Set_23;

                switch (MR_tag((MR_Word) CallTarget_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_35_35 = STATE_VARIABLE_Set_0_22;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Expr_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallTarget_11, (MR_Integer) 0))));

                      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr_73, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_35_35);
                    }
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_Set_35_35 = STATE_VARIABLE_Set_0_22;
                    break;
                }
                mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[6]), ExprsB_12, ((MR_Box) (STATE_VARIABLE_Set_35_35)), &conv3_STATE_VARIABLE_Set_23);
                STATE_VARIABLE_Set_23 = ((MR_Word) (conv3_STATE_VARIABLE_Set_23));
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_0_22;
              break;
            case (MR_Integer) 5:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_Set_32_32;
                MR_Word ExprA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Box conv5_STATE_VARIABLE_Set_23;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_49, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_32_32);
                mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[7]), Cases_14, ((MR_Box) (STATE_VARIABLE_Set_32_32)), &conv5_STATE_VARIABLE_Set_23);
                STATE_VARIABLE_Set_23 = ((MR_Word) (conv5_STATE_VARIABLE_Set_23));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word MaybeCatch_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 3))));
                MR_Word MaybeAfter_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Set_28_28;
                MR_Word STATE_VARIABLE_Set_29_29;
                MR_Word STATE_VARIABLE_Set_30_30;
                MR_Word ExprA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word Cases_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_50, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_28_28);
                erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(Cases_51, STATE_VARIABLE_Set_28_28, &STATE_VARIABLE_Set_29_29);
                if ((MaybeCatch_15 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Set_30_30 = STATE_VARIABLE_Set_29_29;
                else
                {
                  MR_Word Catch_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_15, (MR_Integer) 0))));

                  erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(Catch_17, STATE_VARIABLE_Set_29_29, &STATE_VARIABLE_Set_30_30);
                }
                if ((MaybeAfter_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_30_30;
                else
                {
                  MR_Word After_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfter_16, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = After_18;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_30_30;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                  tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ExprA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4 = ExprA_52;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_0_22;
              break;
            case (MR_Integer) 9:
              {
                MR_Word STATE_VARIABLE_Set_25_25;
                MR_Word ExprA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));
                MR_Word ExprB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

                erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(ExprA_53, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_25_25);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Expr_4 = ExprB_54;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_25_25;
                tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
                tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Cases_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_4, (MR_Integer) 1))));

                erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(Cases_55, STATE_VARIABLE_Set_0_22, &STATE_VARIABLE_Set_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Clause_4 = tscc_proc_2_input_1_Clause_4;
      MR_Word STATE_VARIABLE_Set_0_8 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_8;
      MR_Word STATE_VARIABLE_Set_9;
      MR_Word Pattern_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 0))));
      MR_Word Expr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Set_10_10;
      MR_Box conv7_STATE_VARIABLE_Set_10_10;
      MR_Word next_value_of_tscc_proc_1_input_1_Expr_4;
      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;

      mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[8]), Pattern_6, ((MR_Box) (STATE_VARIABLE_Set_0_8)), &conv7_STATE_VARIABLE_Set_10_10);
      STATE_VARIABLE_Set_10_10 = ((MR_Word) (conv7_STATE_VARIABLE_Set_10_10));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_Expr_4 = Expr_7;
      next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = STATE_VARIABLE_Set_10_10;
      tscc_proc_1_input_1_Expr_4 = next_value_of_tscc_proc_1_input_1_Expr_4;
      tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_22;
      goto top_of_proc_1;
      tscc_output_1_STATE_VARIABLE_Set_23 = STATE_VARIABLE_Set_9;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Set_23 = tscc_output_1_STATE_VARIABLE_Set_23;
    return;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
  MR_Word Catch_4,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10)
{
  {
    MR_Word PatternA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_4, (MR_Integer) 0))));
    MR_Word PatternB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_4, (MR_Integer) 1))));
    MR_Word Expr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_4, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Set_11_11;
    MR_Word STATE_VARIABLE_Set_12_12;

    erl_backend__erl_code_util__erl_vars_in_term_3_p_0(PatternA_6, STATE_VARIABLE_Set_0_9, &STATE_VARIABLE_Set_11_11);
    erl_backend__erl_code_util__erl_vars_in_term_3_p_0(PatternB_7, STATE_VARIABLE_Set_11_11, &STATE_VARIABLE_Set_12_12);
    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(Expr_8, STATE_VARIABLE_Set_12_12, STATE_VARIABLE_Set_10);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_9;

    erl_backend__erl_code_util__erl_vars_in_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
  MR_Word Cases_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_Set_7;

    mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[4]), Cases_4, ((MR_Box) (STATE_VARIABLE_Set_0_6)), &conv1_STATE_VARIABLE_Set_7);
    *STATE_VARIABLE_Set_7 = ((MR_Word) (conv1_STATE_VARIABLE_Set_7));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_23;

    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Set_0_25,
  MR_Word * STATE_VARIABLE_Set_26)
{
  switch (MR_tag((MR_Word) Term_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Term_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 10:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 11:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 12:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 13:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
        case (MR_Integer) 14:
          {
            MR_Word Exprs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_4, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_Set_26;

            mercury__list__foldl_4_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[2]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[3]), Exprs_23, ((MR_Box) (STATE_VARIABLE_Set_0_25)), &conv1_STATE_VARIABLE_Set_26);
            *STATE_VARIABLE_Set_26 = ((MR_Word) (conv1_STATE_VARIABLE_Set_26));
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_4, (MR_Integer) 1))));

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24, STATE_VARIABLE_Set_0_25, STATE_VARIABLE_Set_26);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_Set_26 = STATE_VARIABLE_Set_0_25;
          break;
      }
      break;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
  MR_Word Subn_4,
  MR_Word Catch0_5,
  MR_Word * Catch_6)
{
  {
    MR_Word PatternA0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch0_5, (MR_Integer) 0))));
    MR_Word PatternB0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch0_5, (MR_Integer) 1))));
    MR_Word Expr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch0_5, (MR_Integer) 2))));
    MR_Word PatternA_10;
    MR_Word PatternB_11;
    MR_Word Expr_12;

    erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(Subn_4, PatternA0_7, &PatternA_10);
    erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(Subn_4, PatternB0_8, &PatternB_11);
    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, Expr0_9, &Expr_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Catch_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PatternA_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PatternB_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Expr_12));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Case_6;

    erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Case_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Case_6;

    erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Case_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Expr_6;

    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Expr_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Expr_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_6;

    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Expr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Expr_6));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(
  MR_Word Subn_4,
  MR_Word Expr0_5,
  MR_Word * Expr_6)
{
  switch (MR_tag((MR_Word) Expr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Clause0_20 = (MR_Word) ((MR_Word) (Expr0_5));
        MR_Word Clause_21;
        MR_Word Pattern0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 0))));
        MR_Word Expr0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 1))));
        MR_Word Pattern_89;
        MR_Word Expr_90;

        erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0(Subn_4, Pattern0_87, &Pattern_89);
        erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, Expr0_88, &Expr_90);
        {
          Clause_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clause_21, 0) = ((MR_Box) (Pattern_89));
          MR_hl_field(MR_mktag(0), Clause_21, 1) = ((MR_Box) (Expr_90));
        }
        *Expr_6 = (MR_Word) ((MR_Word) (Clause_21));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Exprs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr0_5, (MR_Integer) 0))));
        MR_Word Exprs_8;
        MR_Word Var_59;

        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Subn_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_59, Exprs0_7, &Exprs_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Expr_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Exprs_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr0_5, (MR_Integer) 0))));
        MR_Word Term_10;

        erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(Subn_4, Term0_9, &Term_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Expr_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Term_10));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExprA0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprB0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word ExprA_13;
            MR_Word ExprB_14;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_11, &ExprA_13);
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprB0_12, &ExprB_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ExprA_13));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ExprB_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Op_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word ExprA0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word ExprA_36;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_35, &ExprA_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Op_15));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ExprA_36));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExprA0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word ExprB0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 3))));
            MR_Word ExprA_39;
            MR_Word ExprB_40;
            MR_Word Op_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))) & (MR_Integer) 31);

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_37, &ExprA_39);
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprB0_38, &ExprB_40);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Op_41));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ExprA_39));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ExprB_40));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CallTarget0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprsB0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word CallTarget_18;
            MR_Word ExprsB_19;
            MR_Word Var_73;

            switch (MR_tag((MR_Word) CallTarget0_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                CallTarget_18 = CallTarget0_16;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Expr0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallTarget0_16, (MR_Integer) 0))));
                  MR_Word Expr_69;

                  erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, Expr0_68, &Expr_69);
                  {
                    CallTarget_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallTarget_18, 0) = ((MR_Box) (Expr_69));
                  }
                }
                break;
            }
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_2));
              MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Subn_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_73, ExprsB0_17, &ExprsB_19);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CallTarget_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ExprsB_19));
            }
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 8:
          *Expr_6 = Expr0_5;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word Cases_23;
            MR_Word ExprA0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprA_43;
            MR_Word Var_80;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_42, &ExprA_43);
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_3));
              MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Subn_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Var_80, Cases0_22, &Cases_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ExprA_43));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cases_23));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word MaybeCatch0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 3))));
            MR_Word MaybeAfter0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 4))));
            MR_Word MaybeCatch_28;
            MR_Word MaybeAfter_31;
            MR_Word ExprA0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprA_45;
            MR_Word Cases0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word Cases_47;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_44, &ExprA_45);
            erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(Subn_4, Cases0_46, &Cases_47);
            if ((MaybeCatch0_24 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeCatch_28 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Catch0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch0_24, (MR_Integer) 0))));
              MR_Word Catch_27;

              erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(Subn_4, Catch0_26, &Catch_27);
              {
                MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCatch_28, 0) = ((MR_Box) (Catch_27));
              }
            }
            if ((MaybeAfter0_25 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeAfter_31 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word After0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfter0_25, (MR_Integer) 0))));
              MR_Word After_30;

              erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, After0_29, &After_30);
              {
                MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeAfter_31, 0) = ((MR_Box) (After_30));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ExprA_45));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cases_47));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybeCatch_28));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MaybeAfter_31));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExprA0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprA_49;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_48, &ExprA_49);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ExprA_49));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ExprA0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word ExprB0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 2))));
            MR_Word ExprA_52;
            MR_Word ExprB_53;

            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprA0_50, &ExprA_52);
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(Subn_4, ExprB0_51, &ExprB_53);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ExprA_52));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ExprB_53));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Cases0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr0_5, (MR_Integer) 1))));
            MR_Word Cases_55;
            MR_Word Var_94;

            {
              Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0_4));
              MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (Subn_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Var_94, Cases0_54, &Cases_55);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Expr_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Cases_55));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Case_6;

    erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Case_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
  MR_Word Subn_4,
  MR_Word Cases0_5,
  MR_Word * Cases_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subn_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Var_7, Cases0_5, Cases_6);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Expr_6;

    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Expr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Expr_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
  MR_Word Subn_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Term0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Term_6 = Term0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Term_6 = Term0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Term0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 16:
            *Term_6 = Term0_5;
            break;
          case (MR_Integer) 14:
            {
              MR_Word Exprs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term0_5, (MR_Integer) 1))));
              MR_Word Exprs_25;
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Subn_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Var_33, Exprs0_24, &Exprs_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Exprs_25));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term0_5, (MR_Integer) 1))));
              MR_Word Var_27;
              MR_Word Var1_28;
              MR_Box conv1_Var1_28;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), Subn_4, ((MR_Box) (Var0_26)), &conv1_Var1_28);
              if (succeeded)
              {
                Var1_28 = ((MR_Word) (conv1_Var1_28));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                Var_27 = Var1_28;
              else
                Var_27 = Var0_26;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_27));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_6;

    erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Term_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Term_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0(
  MR_Word Subn_4,
  MR_Word Terms0_5,
  MR_Word * Terms_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_terms_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Subn_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Var_7, Terms0_5, Terms_6);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_VarSet_12;
    MR_Word conv0_STATE_VARIABLE_Subst_14;

    erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarSet_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Subst_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Subst_14));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0(
  MR_Word Vars_5,
  MR_Word * Subst_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    MR_Word VarSet_9;
    MR_Word Var_13;
    MR_Box conv3_VarSet_9;
    MR_Box conv2_Subst_6;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    Var_13 = mercury__map__init_0_f_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]));
    mercury__list__foldl2_6_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[1]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[2]), Vars_5, ((MR_Box) (VarSet0_8)), &conv3_VarSet_9, ((MR_Box) (Var_13)), &conv2_Subst_6);
    VarSet_9 = ((MR_Word) (conv3_VarSet_9));
    *Subst_6 = ((MR_Word) (conv2_Subst_6));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ModuleInfo_8,
  MR_Word OptDummyArgs_9,
  MR_Word VarNames_10,
  MR_Word ArgTypes_11,
  MR_Word Modes_12,
  MR_Word * Inputs_13,
  MR_Word * Outputs_14)
{
  {
    MR_Word TopFunctorModes_15;

    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_8, Modes_12, ArgTypes_11, &TopFunctorModes_15);
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_for_T_16, ModuleInfo_8, OptDummyArgs_9, VarNames_10, ArgTypes_11, TopFunctorModes_15, Inputs_13, Outputs_14);
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7))));
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(
  MR_String Name_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word EnvVarNames0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
    MR_Word EnvVarNames_7;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_4)), EnvVarNames0_6, &EnvVarNames_7);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (EnvVarNames_7));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_variable_type_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  {
    MR_Word VarTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))));

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, Type_6);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    erl_backend__erl_code_util__erl_variable_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0(
  MR_Word Info_4,
  MR_Word Vars_5,
  MR_Word * Types_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_variable_types_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_7, Vars_5, Types_6);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_NewVar_6;
    MR_Word conv0_STATE_VARIABLE_VarSet_9;

    erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_NewVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarSet_9);
    *wrapper_arg_2 = ((MR_Box) (conv1_NewVar_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarSet_9));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(
  MR_Integer Num_5,
  MR_Word * NewVars_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    MR_Word VarSet_9;
    MR_Word Var_13;
    MR_Box conv2_VarSet_9;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    Var_13 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Num_5);
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_1[1]), (MR_Word) (&erl_backend__erl_code_util_scalar_common_2[1]), Var_13, NewVars_6, ((MR_Box) (VarSet0_8)), &conv2_VarSet_9);
    VarSet_9 = ((MR_Word) (conv2_VarSet_9));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(
  MR_Integer Num_5,
  MR_Word * NewVars_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    MR_Word VarSet_9;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Num_5, NewVars_6, VarSet0_8, &VarSet_9);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0(
  MR_String Name_5,
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    MR_Word VarSet_9;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_5, NewVar_6, VarSet0_8, &VarSet_9);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))));
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
}

MR_Word MR_CALL 
erl_backend__erl_code_util__erl_gen_info_init_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_Word Info_8;
    MR_Word PredInfo_9;
    MR_Word ProcInfo_10;
    MR_Word HeadVars_11;
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word HeadModes_14;
    MR_Word HeadTypes_15;
    MR_Word InputVars_16;
    MR_Word OutputVars_17;
    MR_Word EnvVars_18;
    MR_Word TopFunctorModes_29;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &PredInfo_9, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_13);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &HeadModes_14);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &HeadTypes_15);
    check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_5, HeadModes_14, HeadTypes_15, &TopFunctorModes_29);
    erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0((MR_Word) (&erl_backend__erl_code_util_scalar_common_1[0]), ModuleInfo_5, (MR_Integer) 0, HeadVars_11, HeadTypes_15, TopFunctorModes_29, &InputVars_16, &OutputVars_17);
    EnvVars_18 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    {
      Info_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Info_8, 1) = ((MR_Box) (PredId_6));
      MR_hl_field(MR_mktag(0), Info_8, 2) = ((MR_Box) (ProcId_7));
      MR_hl_field(MR_mktag(0), Info_8, 3) = ((MR_Box) (VarSet_12));
      MR_hl_field(MR_mktag(0), Info_8, 4) = ((MR_Box) (VarTypes_13));
      MR_hl_field(MR_mktag(0), Info_8, 5) = ((MR_Box) (InputVars_16));
      MR_hl_field(MR_mktag(0), Info_8, 6) = ((MR_Box) (OutputVars_17));
      MR_hl_field(MR_mktag(0), Info_8, 7) = ((MR_Box) (EnvVars_18));
    }
    return Info_8;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word ModuleInfo_8,
  MR_Word OptDummyArgs_9,
  MR_Word VarNames_10,
  MR_Word ArgTypes_11,
  MR_Word TopFunctorModes_12,
  MR_Word * Inputs_13,
  MR_Word * Outputs_14)
{
  {
    MR_bool succeeded = (VarNames_10 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (ArgTypes_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (TopFunctorModes_12 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Inputs_13 = (MR_Word) ((MR_Unsigned) 0U);
      *Outputs_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box VarName_15;
      MR_Word VarNames1_16;
      MR_Word ArgType_17;
      MR_Word ArgTypes1_18;
      MR_Word TopFunctorMode_19;
      MR_Word TopFunctorModes1_20;

      succeeded = (VarNames_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VarName_15 = (MR_hl_field(MR_mktag(1), VarNames_10, (MR_Integer) 0));
        VarNames1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarNames_10, (MR_Integer) 1))));
        succeeded = (ArgTypes_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_11, (MR_Integer) 0))));
          ArgTypes1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_11, (MR_Integer) 1))));
          succeeded = (TopFunctorModes_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TopFunctorMode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopFunctorModes_12, (MR_Integer) 0))));
            TopFunctorModes1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopFunctorModes_12, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Inputs1_21;
        MR_Word Outputs1_22;

        erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(TypeInfo_for_T_26, ModuleInfo_8, OptDummyArgs_9, VarNames1_16, ArgTypes1_18, TopFunctorModes1_20, &Inputs1_21, &Outputs1_22);
        succeeded = (OptDummyArgs_9 == (MR_Integer) 0);
        if (succeeded)
        {
          {
            MR_Word Var_23;

            Var_23 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_8, ArgType_17);
            succeeded = (Var_23 == (MR_Integer) 0);
          }
          if (!(succeeded))
            succeeded = (TopFunctorMode_19 == (MR_Integer) 2);
        }
        if (succeeded)
        {
          *Inputs_13 = Inputs1_21;
          *Outputs_14 = Outputs1_22;
        }
        else
          switch (TopFunctorMode_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inputs_13 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = VarName_15;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inputs1_21));
                }
                *Outputs_14 = Outputs1_22;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                *Inputs_13 = Inputs1_21;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Outputs_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = VarName_15;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Outputs1_22));
                }
              }
              break;
          }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.erl_code_util.erl_gen_arg_list_arg_modes\'/7", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__erl_code_util____Unify____erl_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__erl_code_util____Compare____erl_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__erl_backend__erl_code_util__init(void)
{
}

void mercury__erl_backend__erl_code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0);
	MR_register_type_ctor_info(&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0);
}

void mercury__erl_backend__erl_code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_code_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.erl_code_util.
