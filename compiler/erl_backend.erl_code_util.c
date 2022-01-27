/*
** Automatically generated from `erl_code_util.m'
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


/* :- module erl_backend.erl_code_util. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s {
  MR_bool erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10;
  jmp_buf erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11;
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12;
  MR_Box erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12;
};


static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * erl_backend__erl_code_util__NewVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Case_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Cases_3);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
  MR_Word erl_backend__erl_code_util__HeadVar__1_1);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Term_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Terms_3);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Exprs_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
  MR_Word erl_backend__erl_code_util__Catch_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
  MR_Word erl_backend__erl_code_util__Case_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__Cases_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
  MR_Word erl_backend__erl_code_util__Clause_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
  MR_Word erl_backend__erl_code_util__Target_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
  MR_Word erl_backend__erl_code_util__Term_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
  MR_Word erl_backend__erl_code_util__Expr_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Catch0_5,
  MR_Word * erl_backend__erl_code_util__Catch_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Case0_5,
  MR_Word * erl_backend__erl_code_util__Case_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Cases0_5,
  MR_Word * erl_backend__erl_code_util__Cases_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Clause0_5,
  MR_Word * erl_backend__erl_code_util__Clause_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Target0_5,
  MR_Word * erl_backend__erl_code_util__Target_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Term0_5,
  MR_Word * erl_backend__erl_code_util__Term_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Exprs0_5,
  MR_Word * erl_backend__erl_code_util__Exprs_6);

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
  MR_Word erl_backend__erl_code_util__OldVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
  void * erl_backend__erl_code_util__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
  void * erl_backend__erl_code_util__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
  void * erl_backend__erl_code_util__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
  void * erl_backend__erl_code_util__env_ptr_arg);

static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
  MR_Word erl_backend__erl_code_util__Term_2);

static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3);

static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
  MR_Word erl_backend__erl_code_util__VarTypes_7,
  MR_Word erl_backend__erl_code_util__InstMap_8,
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
  MR_Word erl_backend__erl_code_util__Var_10);

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
  MR_Integer erl_backend__erl_code_util___Num_5,
  MR_Word * erl_backend__erl_code_util__NewVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5);

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_4);


static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[18][3];

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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0]))
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

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0])),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_3[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_create_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[5])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[6])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_exprs_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_exprs_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[3])),
    ((MR_Box) (erl_backend__erl_code_util__erl_cases_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_cases_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0,
  erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "erl_gen_info",
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0 },
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0
};

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0 = {
  (MR_String) "opt_dummy_args",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1 = {
  (MR_String) "no_opt_dummy_args",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "opt_dummy_args",
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0 },
  {     erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0
};

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    {
      erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util____Unify____erl_gen_info_0_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2));
    }
    return erl_backend__erl_code_util__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__1_1;

    {
      erl_backend__erl_code_util____Compare____erl_gen_info_0_0(&erl_backend__erl_code_util__conv0_HeadVar__1_1, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3));
    }
    *erl_backend__erl_code_util__wrapper_arg_1 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    {
      erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2));
    }
    return erl_backend__erl_code_util__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__1_1;

    {
      erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(&erl_backend__erl_code_util__conv0_HeadVar__1_1, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3));
    }
    *erl_backend__erl_code_util__wrapper_arg_1 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word * erl_backend__erl_code_util__NewVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "_", erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar1_4 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar2_5 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__erl_code_util__HeadVar__1_1, erl_backend__erl_code_util__Cast_HeadVar1_4, erl_backend__erl_code_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(
  MR_Word erl_backend__erl_code_util__HeadVar__2_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_1 == erl_backend__erl_code_util__HeadVar__2_2);

    return erl_backend__erl_code_util__succeeded;
  }
}

void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0(
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__CastX_27 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
    MR_Integer erl_backend__erl_code_util__CastY_28 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_27 == erl_backend__erl_code_util__CastY_28);
    if (erl_backend__erl_code_util__succeeded)
      *erl_backend__erl_code_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer erl_backend__erl_code_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word erl_backend__erl_code_util__V_20_20;

        {
          hlds__hlds_module____Compare____module_info_0_0(&erl_backend__erl_code_util__V_20_20, erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
        }
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_20_20 == (MR_Integer) 0);
        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
        if (erl_backend__erl_code_util__succeeded)
          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_20_20;
        else
          {
            MR_Word erl_backend__erl_code_util__V_21_21;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&erl_backend__erl_code_util__V_21_21, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__V_13_13);
            }
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_21_21 == (MR_Integer) 0);
            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
            if (erl_backend__erl_code_util__succeeded)
              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_21_21;
            else
              {
                MR_Word erl_backend__erl_code_util__V_22_22;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__erl_code_util__V_22_22, erl_backend__erl_code_util__V_6_6, erl_backend__erl_code_util__V_14_14);
                }
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_22_22 == (MR_Integer) 0);
                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
                if (erl_backend__erl_code_util__succeeded)
                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_22_22;
                else
                  {
                    MR_Word erl_backend__erl_code_util__V_23_23;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], &erl_backend__erl_code_util__V_23_23, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                    }
                    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
                    erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
                    if (erl_backend__erl_code_util__succeeded)
                      *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_23_23;
                    else
                      {
                        MR_Word erl_backend__erl_code_util__V_24_24;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_2[1], &erl_backend__erl_code_util__V_24_24, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                        }
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_24_24 == (MR_Integer) 0);
                        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
                        if (erl_backend__erl_code_util__succeeded)
                          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_24_24;
                        else
                          {
                            MR_Word erl_backend__erl_code_util__V_25_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_25_25, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                            }
                            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_25_25 == (MR_Integer) 0);
                            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
                            if (erl_backend__erl_code_util__succeeded)
                              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_25_25;
                            else
                              {
                                MR_Word erl_backend__erl_code_util__V_26_26;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_26_26, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                }
                                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_26_26 == (MR_Integer) 0);
                                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
                                if (erl_backend__erl_code_util__succeeded)
                                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_26_26;
                                else
                                  {
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[4], erl_backend__erl_code_util__HeadVar__1_1, ((MR_Box) (erl_backend__erl_code_util__V_11_11)), ((MR_Box) (erl_backend__erl_code_util__V_19_19)));
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
erl_backend__erl_code_util____Unify____erl_gen_info_0_0(
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__CastX_19 = (MR_Integer) erl_backend__erl_code_util__HeadVar__1_1;
    MR_Integer erl_backend__erl_code_util__CastY_20 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;

    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_19 == erl_backend__erl_code_util__CastY_20);
    if (erl_backend__erl_code_util__succeeded)
      erl_backend__erl_code_util__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__erl_code_util__TypeInfo_23_23;
        MR_Word erl_backend__erl_code_util__TypeInfo_24_24;
        MR_Word erl_backend__erl_code_util__TypeInfo_25_25;
        MR_Word erl_backend__erl_code_util__TypeInfo_26_26;
        MR_Word erl_backend__erl_code_util__TypeInfo_27_27;
        MR_Word erl_backend__erl_code_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));

        {
          erl_backend__erl_code_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(erl_backend__erl_code_util__V_3_3, erl_backend__erl_code_util__V_11_11);
        }
        if (erl_backend__erl_code_util__succeeded)
          {
            {
              erl_backend__erl_code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
            }
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_5_5 == erl_backend__erl_code_util__V_13_13);
                if (erl_backend__erl_code_util__succeeded)
                  {
                    erl_backend__erl_code_util__TypeInfo_23_23 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1];
                    {
                      erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_23_23, ((MR_Box) (erl_backend__erl_code_util__V_6_6)), ((MR_Box) (erl_backend__erl_code_util__V_14_14)));
                    }
                    if (erl_backend__erl_code_util__succeeded)
                      {
                        erl_backend__erl_code_util__TypeInfo_24_24 = (MR_Word) &erl_backend__erl_code_util_scalar_common_2[1];
                        {
                          erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_24_24, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                        }
                        if (erl_backend__erl_code_util__succeeded)
                          {
                            erl_backend__erl_code_util__TypeInfo_25_25 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
                            {
                              erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_25_25, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                            }
                            if (erl_backend__erl_code_util__succeeded)
                              {
                                erl_backend__erl_code_util__TypeInfo_26_26 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
                                {
                                  erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_26_26, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                                }
                                if (erl_backend__erl_code_util__succeeded)
                                  {
                                    erl_backend__erl_code_util__TypeInfo_27_27 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[4];
                                    {
                                      erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_27_27, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return erl_backend__erl_code_util__succeeded;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Case_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__Size_4;
    MR_Word erl_backend__erl_code_util__Pattern_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_7_7;
    MR_Integer erl_backend__erl_code_util__V_9_9;
    MR_Integer erl_backend__erl_code_util__V_10_10;

    {
      erl_backend__erl_code_util__V_9_9 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Pattern_5);
    }
    erl_backend__erl_code_util__V_7_7 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_9_9);
    {
      erl_backend__erl_code_util__V_10_10 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_6);
    }
    erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_7_7 + erl_backend__erl_code_util__V_10_10);
    return erl_backend__erl_code_util__Size_4;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

    {
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
    return erl_backend__erl_code_util__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

    {
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_case_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
    return erl_backend__erl_code_util__wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Cases_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_15;
    MR_Integer erl_backend__erl_code_util__V_5_5;
    MR_Word erl_backend__erl_code_util__V_6_6;
    MR_Box erl_backend__erl_code_util__conv2_V_5_5;

    {
      erl_backend__erl_code_util__V_6_6 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[16], erl_backend__erl_code_util__Cases_3);
    }
    erl_backend__erl_code_util__TypeCtorInfo_6_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      erl_backend__erl_code_util__conv2_V_5_5 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_15, erl_backend__erl_code_util__TypeCtorInfo_6_15, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[17], erl_backend__erl_code_util__V_6_6, ((MR_Box) ((MR_Integer) 0)));
    }
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_5_5);
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_5_5);
    return erl_backend__erl_code_util__HeadVar__2_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
  MR_Word erl_backend__erl_code_util__HeadVar__1_1)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_util__Expr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));

          {
            erl_backend__erl_code_util__HeadVar__2_2 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_5);
          }
        }
        break;
      case (MR_Integer) 2:
        erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return erl_backend__erl_code_util__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

    {
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
    return erl_backend__erl_code_util__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

    {
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
    return erl_backend__erl_code_util__wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Term_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__Size_4;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            {
              MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_27;
              MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 1)));
              MR_Integer erl_backend__erl_code_util__V_16_16;
              MR_Word erl_backend__erl_code_util__V_18_18;
              MR_Box erl_backend__erl_code_util__conv2_V_16_16;

              {
                erl_backend__erl_code_util__V_18_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[14], erl_backend__erl_code_util__Exprs_14);
              }
              erl_backend__erl_code_util__TypeCtorInfo_6_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                erl_backend__erl_code_util__conv2_V_16_16 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_27, erl_backend__erl_code_util__TypeCtorInfo_6_27, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[15], erl_backend__erl_code_util__V_18_18, ((MR_Box) ((MR_Integer) 0)));
              }
              erl_backend__erl_code_util__V_16_16 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_16_16);
              erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_16_16);
            }
            break;
        }
        break;
    }
    return erl_backend__erl_code_util__Size_4;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

    {
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
    return erl_backend__erl_code_util__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

    {
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
    return erl_backend__erl_code_util__wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Terms_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
    MR_Word erl_backend__erl_code_util__V_4_4;
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

    {
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[12], erl_backend__erl_code_util__Terms_3);
    }
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[13], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
    return erl_backend__erl_code_util__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

    {
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
    return erl_backend__erl_code_util__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

    {
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
    return erl_backend__erl_code_util__wrapper_arg_2;
  }
}

static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Exprs_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
    MR_Word erl_backend__erl_code_util__V_4_4;
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

    {
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[10], erl_backend__erl_code_util__Exprs_3);
    }
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[11], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
    return erl_backend__erl_code_util__HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
  MR_Word erl_backend__erl_code_util__Catch_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__PatternA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__PatternB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11;
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12;

    {
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternA_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, &erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11);
    }
    {
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternB_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11, &erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12);
    }
    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
  MR_Word erl_backend__erl_code_util__Case_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;

    {
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Pattern_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8, &erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10);
    }
    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9;

    {
      erl_backend__erl_code_util__erl_vars_in_case_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__Cases_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7;

    {
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[9], erl_backend__erl_code_util__Cases_4, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
    }
    *erl_backend__erl_code_util__STATE_VARIABLE_Set_7 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17;

    {
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
  MR_Word erl_backend__erl_code_util__Clause_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10;

    {
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[8], erl_backend__erl_code_util__Pattern_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
    }
    erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
  MR_Word erl_backend__erl_code_util__Target_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Target_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target_4, (MR_Integer) 0)));

          {
            erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
          }
        }
        break;
      case (MR_Integer) 2:
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
  MR_Word erl_backend__erl_code_util__Term_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
        break;
      case (MR_Integer) 1:
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
        break;
      case (MR_Integer) 2:
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
          case (MR_Integer) 1:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
          case (MR_Integer) 2:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
          case (MR_Integer) 3:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
          case (MR_Integer) 4:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
          case (MR_Integer) 5:
            {
              MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));
              MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17;

              {
                mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[7], erl_backend__erl_code_util__Exprs_14, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
              }
              *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word erl_backend__erl_code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));

              {
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Var_15, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16, erl_backend__erl_code_util__STATE_VARIABLE_Set_17);
              }
            }
            break;
          case (MR_Integer) 7:
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23;

    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
  MR_Word erl_backend__erl_code_util__Expr_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_util__succeeded;

        switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_code_util__Clause_13 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_4), (MR_Integer) 0);

              {
                erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(erl_backend__erl_code_util__Clause_13, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_util__Exprs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));
              MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23;

              {
                mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[5], erl_backend__erl_code_util__Exprs_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
              }
              *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_util__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));

              {
                erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Term_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__erl_code_util__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__ExprB_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

                  {
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_9;
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__erl_code_util__ExprA_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util___Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_44;

                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;
                  MR_Word erl_backend__erl_code_util__ExprA_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util__ExprB_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_util___Op_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_46, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_47;
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;

                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word erl_backend__erl_code_util__CallTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__ExprsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35;
                  MR_Box erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23;

                  {
                    erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(erl_backend__erl_code_util__CallTarget_11, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35);
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[6], erl_backend__erl_code_util__ExprsB_12, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35)), &erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
                  }
                  *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
                }
                break;
              case (MR_Integer) 4:
                *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word erl_backend__erl_code_util__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32;
                  MR_Word erl_backend__erl_code_util__ExprA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_49, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32);
                  }
                  {
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_14, erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word erl_backend__erl_code_util__MaybeCatch_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_util__MaybeAfter_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 4)));
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28;
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
                  MR_Word erl_backend__erl_code_util__ExprA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__Cases_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

                  {
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_50, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28);
                  }
                  {
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_51, erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28, &erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29);
                  }
                  if ((erl_backend__erl_code_util__MaybeCatch_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30 = erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
                  else
                    {
                      MR_Word erl_backend__erl_code_util__Catch_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_15, (MR_Integer) 0)));

                      {
                        erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(erl_backend__erl_code_util__Catch_17, erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29, &erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30);
                      }
                    }
                  if ((erl_backend__erl_code_util__MaybeAfter_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
                  else
                    {
                      MR_Word erl_backend__erl_code_util__After_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_16, (MR_Integer) 0)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__After_18;
                        MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;

                        erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
                        erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word erl_backend__erl_code_util__ExprA_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_52;

                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
                break;
              case (MR_Integer) 9:
                {
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;
                  MR_Word erl_backend__erl_code_util__ExprA_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__ExprB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

                  {
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_53, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_54;
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;

                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word erl_backend__erl_code_util__Cases_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_55, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
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

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Catch0_5,
  MR_Word * erl_backend__erl_code_util__Catch_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__PatternA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__PatternB0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__PatternA_10;
    MR_Word erl_backend__erl_code_util__PatternB_11;
    MR_Word erl_backend__erl_code_util__Expr_12;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternA0_7, &erl_backend__erl_code_util__PatternA_10);
    }
    {
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternB0_8, &erl_backend__erl_code_util__PatternB_11);
    }
    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__Catch_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__PatternA_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__PatternB_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Expr_12));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Case0_5,
  MR_Word * erl_backend__erl_code_util__Case_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__Pattern_9;
    MR_Word erl_backend__erl_code_util__Expr_10;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_Case_6;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Case_6);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Case_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Cases0_5,
  MR_Word * erl_backend__erl_code_util__Cases_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
    MR_Word erl_backend__erl_code_util__V_7_7;

    {
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
    }
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
    {
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Cases0_5, erl_backend__erl_code_util__Cases_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_Term_6;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Term_6);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Term_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Clause0_5,
  MR_Word * erl_backend__erl_code_util__Clause_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_17;
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__Pattern_9;
    MR_Word erl_backend__erl_code_util__Expr_10;
    MR_Word erl_backend__erl_code_util__V_14_14;

    {
      erl_backend__erl_code_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
    }
    erl_backend__erl_code_util__TypeCtorInfo_10_17 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0;
    {
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__V_14_14, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__Clause_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Target0_5,
  MR_Word * erl_backend__erl_code_util__Target_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Target0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *erl_backend__erl_code_util__Target_6 = erl_backend__erl_code_util__Target0_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target0_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_code_util__Expr_10;

          {
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_code_util__Target_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Term0_5,
  MR_Word * erl_backend__erl_code_util__Term_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 7:
            *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
            break;
          case (MR_Integer) 5:
            {
              MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_27;
              MR_Word erl_backend__erl_code_util__Exprs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__Exprs_16;
              MR_Word erl_backend__erl_code_util__V_24_24;

              {
                erl_backend__erl_code_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
              }
              erl_backend__erl_code_util__TypeCtorInfo_10_27 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
              {
                mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__V_24_24, erl_backend__erl_code_util__Exprs0_15, &erl_backend__erl_code_util__Exprs_16);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Term_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Exprs_16));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word erl_backend__erl_code_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__Var_18;
              MR_Word erl_backend__erl_code_util__Var1_19;
              MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
              MR_Box erl_backend__erl_code_util__conv1_Var1_19;

              {
                erl_backend__erl_code_util__succeeded = mercury__map__search_3_p_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__Subn_4, ((MR_Box) (erl_backend__erl_code_util__Var0_17)), &erl_backend__erl_code_util__conv1_Var1_19);
              }
              if (erl_backend__erl_code_util__succeeded)
                {
                  erl_backend__erl_code_util__Var1_19 = ((MR_Word) erl_backend__erl_code_util__conv1_Var1_19);
                  erl_backend__erl_code_util__succeeded = MR_TRUE;
                }
              if (erl_backend__erl_code_util__succeeded)
                erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var1_19;
              else
                erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var0_17;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Term_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Var_18));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Exprs0_5,
  MR_Word * erl_backend__erl_code_util__Exprs_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
    MR_Word erl_backend__erl_code_util__V_7_7;

    {
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
    }
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
    {
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Exprs0_5, erl_backend__erl_code_util__Exprs_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
  MR_Word erl_backend__erl_code_util__OldVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeInfo_21_21;
    MR_Word erl_backend__erl_code_util__NewVar_10;
    MR_String erl_backend__erl_code_util__Name_9;

    {
      erl_backend__erl_code_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__OldVar_6, &erl_backend__erl_code_util__Name_9);
    }
    if (erl_backend__erl_code_util__succeeded)
      {
        {
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_9, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
      }
    else
      {
        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
      }
    erl_backend__erl_code_util__TypeInfo_21_21 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
    {
      mercury__map__det_insert_4_p_0(erl_backend__erl_code_util__TypeInfo_21_21, erl_backend__erl_code_util__TypeInfo_21_21, ((MR_Box) (erl_backend__erl_code_util__OldVar_6)), ((MR_Box) (erl_backend__erl_code_util__NewVar_10)), erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
  void * erl_backend__erl_code_util__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

    MR_builtin_longjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
  void * erl_backend__erl_code_util__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12 = ((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12);
    {
      erl_backend__erl_code_util__non_variable_term_1_p_0_2(erl_backend__erl_code_util__env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
  void * erl_backend__erl_code_util__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12)) == (MR_mktag((MR_Integer) 2)));
    if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
      {
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12, (MR_Integer) 0)));
        {
          {
            (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11);
          }
          (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
          if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
            {
              erl_backend__erl_code_util__non_variable_term_1_p_0_1(erl_backend__erl_code_util__env_ptr);
            }
        }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
  void * erl_backend__erl_code_util__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

    if (MR_builtin_setjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, &(erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12, (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10, erl_backend__erl_code_util__non_variable_term_1_p_0_3, erl_backend__erl_code_util__env_ptr);
          }
        }
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
  MR_Word erl_backend__erl_code_util__Term_2)
{
  {
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s erl_backend__erl_code_util__env;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) {
      default:
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) {
          default:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 5:
            {
              (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 1)));
              {
                erl_backend__erl_code_util__non_variable_term_1_p_0_4(&erl_backend__erl_code_util__env);
              }
              (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
            }
            break;
        }
        break;
    }
    return (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    if ((erl_backend__erl_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (erl_backend__erl_code_util__succeeded)
          {
            *erl_backend__erl_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            erl_backend__erl_code_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word erl_backend__erl_code_util__OC_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__OCs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__erl_code_util__IC_6;
        MR_Word erl_backend__erl_code_util__ICs_7;
        MR_Word erl_backend__erl_code_util__NC_8;
        MR_Word erl_backend__erl_code_util__NCs_9;
        MR_Word erl_backend__erl_code_util__OuterPat_10;
        MR_Word erl_backend__erl_code_util__OuterExpr_11;
        MR_Word erl_backend__erl_code_util__InnerPat_12;
        MR_Word erl_backend__erl_code_util__InnerTerm_13;
        MR_Word erl_backend__erl_code_util__V_14_14;

        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (erl_backend__erl_code_util__succeeded)
          {
            erl_backend__erl_code_util__IC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
            erl_backend__erl_code_util__ICs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
            erl_backend__erl_code_util__OuterPat_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 0)));
            erl_backend__erl_code_util__OuterExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 1)));
            erl_backend__erl_code_util__InnerPat_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 0)));
            erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 1)));
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__V_14_14)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__InnerTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__V_14_14, (MR_Integer) 0)));
                {
                  erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0(erl_backend__erl_code_util__InnerTerm_13);
                }
                if (erl_backend__erl_code_util__succeeded)
                  {
                    {
                      erl_backend__erl_code_util__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_util__InnerTerm_13, erl_backend__erl_code_util__OuterPat_10);
                    }
                    if (!(erl_backend__erl_code_util__succeeded))
                      {
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OuterPat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (erl_backend__erl_code_util__succeeded)
                          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OCs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    if (erl_backend__erl_code_util__succeeded)
                      {
                        {
                          erl_backend__erl_code_util__NC_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 0) = ((MR_Box) (erl_backend__erl_code_util__InnerPat_12));
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 1) = ((MR_Box) (erl_backend__erl_code_util__OuterExpr_11));
                        }
                        {
                          erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OCs_5, erl_backend__erl_code_util__ICs_7, &erl_backend__erl_code_util__NCs_9);
                        }
                        if (erl_backend__erl_code_util__succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *erl_backend__erl_code_util__HeadVar__3_3 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__NC_8));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__NCs_9));
                            }
                            erl_backend__erl_code_util__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    return erl_backend__erl_code_util__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
  MR_Word erl_backend__erl_code_util__VarTypes_7,
  MR_Word erl_backend__erl_code_util__InstMap_8,
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
  MR_Word erl_backend__erl_code_util__Var_10)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__Type_11;
    MR_Word erl_backend__erl_code_util__V_12_12;

    {
      erl_backend__erl_code_util__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__InstMap_8, erl_backend__erl_code_util__InstmapDelta_9, erl_backend__erl_code_util__Var_10);
    }
    if (erl_backend__erl_code_util__succeeded)
      {
        {
          hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_10, &erl_backend__erl_code_util__Type_11);
        }
        {
          erl_backend__erl_code_util__V_12_12 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_11);
        }
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_12_12 == (MR_Integer) 1);
      }
    return erl_backend__erl_code_util__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
  MR_Integer erl_backend__erl_code_util___Num_5,
  MR_Word * erl_backend__erl_code_util__NewVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    {
      erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
    }
  }
}

MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0(void)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    return (MR_Integer) 4;
  }
}

void MR_CALL 
erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(
  MR_Word erl_backend__erl_code_util__Expr0_3,
  MR_Word * erl_backend__erl_code_util__Expr_4)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__Expr1_5;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_18_21;
    MR_Word erl_backend__erl_code_util__OuterCond_8;
    MR_Word erl_backend__erl_code_util__OuterCases_9;
    MR_Word erl_backend__erl_code_util__InnerCond_10;
    MR_Word erl_backend__erl_code_util__InnerCases_11;
    MR_Word erl_backend__erl_code_util__InnerPreamble_12;
    MR_Word erl_backend__erl_code_util__NewCases_15;
    MR_Word erl_backend__erl_code_util__V_16_16;
    MR_Word erl_backend__erl_code_util__V_17_17;
    MR_Word erl_backend__erl_code_util__V_18_18;
    MR_Word erl_backend__erl_code_util__V_19_19;

    if (erl_backend__erl_code_util__succeeded)
      {
        erl_backend__erl_code_util__OuterCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 1)));
        erl_backend__erl_code_util__OuterCases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 2)));
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word erl_backend__erl_code_util__OuterCondExprs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)));
            MR_Word erl_backend__erl_code_util__InnerCaseExpr_14;
            MR_Box erl_backend__erl_code_util__conv0_InnerCaseExpr_14;

            {
              erl_backend__erl_code_util__succeeded = mercury__list__split_last_3_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_code_util__OuterCondExprs_13, &erl_backend__erl_code_util__InnerPreamble_12, &erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
            }
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__InnerCaseExpr_14 = ((MR_Word) erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
                erl_backend__erl_code_util__succeeded = MR_TRUE;
              }
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__InnerCaseExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (erl_backend__erl_code_util__succeeded)
                  {
                    erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 1)));
                    erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 2)));
                  }
              }
          }
        else
        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
          {
            erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 1)));
            erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 2)));
            erl_backend__erl_code_util__InnerPreamble_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            erl_backend__erl_code_util__succeeded = MR_TRUE;
          }
        else
          erl_backend__erl_code_util__succeeded = MR_FALSE;
        if (erl_backend__erl_code_util__succeeded)
          {
            {
              erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OuterCases_9, erl_backend__erl_code_util__InnerCases_11, &erl_backend__erl_code_util__NewCases_15);
            }
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__TypeCtorInfo_18_21 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
                erl_backend__erl_code_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 1) = ((MR_Box) (erl_backend__erl_code_util__InnerCond_10));
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 2) = ((MR_Box) (erl_backend__erl_code_util__NewCases_15));
                }
                {
                  erl_backend__erl_code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
                }
                {
                  erl_backend__erl_code_util__V_16_16 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_18_21, erl_backend__erl_code_util__InnerPreamble_12, erl_backend__erl_code_util__V_17_17);
                }
                {
                  erl_backend__erl_code_util__Expr1_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr1_5, 0) = ((MR_Box) (erl_backend__erl_code_util__V_16_16));
                }
                erl_backend__erl_code_util__succeeded = MR_TRUE;
              }
          }
      }
    if (erl_backend__erl_code_util__succeeded)
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr1_5;
    else
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr0_3;
  }
}

MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0(
  MR_Word erl_backend__erl_code_util__Expr_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_util__succeeded;
        MR_Integer erl_backend__erl_code_util__Size_4;

        switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_code_util__Terms_11;
              MR_Word erl_backend__erl_code_util__V_47_47 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_3), (MR_Integer) 0);
              MR_Integer erl_backend__erl_code_util__V_48_48;
              MR_Integer erl_backend__erl_code_util__V_50_50;
              MR_Integer erl_backend__erl_code_util__V_51_51;
              MR_Word erl_backend__erl_code_util__ExprA_64;

              erl_backend__erl_code_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 0)));
              erl_backend__erl_code_util__ExprA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 1)));
              {
                erl_backend__erl_code_util__V_50_50 = erl_backend__erl_code_util__erl_terms_size_1_f_0(erl_backend__erl_code_util__Terms_11);
              }
              erl_backend__erl_code_util__V_48_48 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_50_50);
              {
                erl_backend__erl_code_util__V_51_51 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_64);
              }
              erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_48_48 + erl_backend__erl_code_util__V_51_51);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_util__Exprs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

              {
                erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

              {
                erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Term_6);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__erl_code_util__ExprA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__ExprB_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
                  MR_Integer erl_backend__erl_code_util__V_56_56;
                  MR_Integer erl_backend__erl_code_util__V_57_57;

                  {
                    erl_backend__erl_code_util__V_56_56 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_7);
                  }
                  {
                    erl_backend__erl_code_util__V_57_57 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_8);
                  }
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_56_56 + erl_backend__erl_code_util__V_57_57);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__erl_code_util__ExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util___Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_3 = erl_backend__erl_code_util__ExprA_58;

                    erl_backend__erl_code_util__Expr_3 = erl_backend__erl_code_util__Expr__tmp_copy_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer erl_backend__erl_code_util__V_54_54;
                  MR_Integer erl_backend__erl_code_util__V_55_55;
                  MR_Word erl_backend__erl_code_util__ExprA_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_util__ExprB_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_util___Op_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__V_54_54 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_60);
                  }
                  {
                    erl_backend__erl_code_util__V_55_55 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_61);
                  }
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_54_54 + erl_backend__erl_code_util__V_55_55);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word erl_backend__erl_code_util__CallTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
                  MR_Integer erl_backend__erl_code_util__V_52_52;
                  MR_Integer erl_backend__erl_code_util__V_53_53;
                  MR_Word erl_backend__erl_code_util__Exprs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

                  {
                    erl_backend__erl_code_util__V_52_52 = erl_backend__erl_code_util__erl_call_target_size_1_f_0(erl_backend__erl_code_util__CallTarget_10);
                  }
                  {
                    erl_backend__erl_code_util__V_53_53 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_63);
                  }
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_52_52 + erl_backend__erl_code_util__V_53_53);
                }
                break;
              case (MR_Integer) 4:
                erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word erl_backend__erl_code_util__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
                  MR_Integer erl_backend__erl_code_util__V_43_43;
                  MR_Integer erl_backend__erl_code_util__V_45_45;
                  MR_Integer erl_backend__erl_code_util__V_46_46;
                  MR_Word erl_backend__erl_code_util__ExprA_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__V_45_45 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_65);
                  }
                  erl_backend__erl_code_util__V_43_43 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_45_45);
                  {
                    erl_backend__erl_code_util__V_46_46 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_12);
                  }
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_43_43 + erl_backend__erl_code_util__V_46_46);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word erl_backend__erl_code_util__MaybeCatch_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_util__MaybeAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 4)));
                  MR_Integer erl_backend__erl_code_util__CatchSize_18;
                  MR_Integer erl_backend__erl_code_util__AfterSize_20;
                  MR_Integer erl_backend__erl_code_util__V_37_37;
                  MR_Integer erl_backend__erl_code_util__V_38_38;
                  MR_Integer erl_backend__erl_code_util__V_39_39;
                  MR_Integer erl_backend__erl_code_util__V_41_41;
                  MR_Integer erl_backend__erl_code_util__V_42_42;
                  MR_Word erl_backend__erl_code_util__ExprA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__Cases_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

                  if ((erl_backend__erl_code_util__MaybeCatch_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    erl_backend__erl_code_util__CatchSize_18 = (MR_Integer) 0;
                  else
                    {
                      MR_Word erl_backend__erl_code_util__TermA_15;
                      MR_Word erl_backend__erl_code_util__TermB_16;
                      MR_Word erl_backend__erl_code_util__CatchExpr_17;
                      MR_Word erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_13, (MR_Integer) 0)));
                      MR_Integer erl_backend__erl_code_util__V_33_33;
                      MR_Integer erl_backend__erl_code_util__V_34_34;
                      MR_Integer erl_backend__erl_code_util__V_35_35;
                      MR_Integer erl_backend__erl_code_util__V_36_36;

                      erl_backend__erl_code_util__TermA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 0)));
                      erl_backend__erl_code_util__TermB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 1)));
                      erl_backend__erl_code_util__CatchExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 2)));
                      {
                        erl_backend__erl_code_util__V_34_34 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermA_15);
                      }
                      {
                        erl_backend__erl_code_util__V_35_35 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermB_16);
                      }
                      erl_backend__erl_code_util__V_33_33 = (erl_backend__erl_code_util__V_34_34 + erl_backend__erl_code_util__V_35_35);
                      {
                        erl_backend__erl_code_util__V_36_36 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__CatchExpr_17);
                      }
                      erl_backend__erl_code_util__CatchSize_18 = (erl_backend__erl_code_util__V_33_33 + erl_backend__erl_code_util__V_36_36);
                    }
                  if ((erl_backend__erl_code_util__MaybeAfter_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    erl_backend__erl_code_util__AfterSize_20 = (MR_Integer) 0;
                  else
                    {
                      MR_Word erl_backend__erl_code_util__AfterExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_14, (MR_Integer) 0)));

                      {
                        erl_backend__erl_code_util__AfterSize_20 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__AfterExpr_19);
                      }
                    }
                  {
                    erl_backend__erl_code_util__V_41_41 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_66);
                  }
                  erl_backend__erl_code_util__V_39_39 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_41_41);
                  {
                    erl_backend__erl_code_util__V_42_42 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_67);
                  }
                  erl_backend__erl_code_util__V_38_38 = (erl_backend__erl_code_util__V_39_39 + erl_backend__erl_code_util__V_42_42);
                  erl_backend__erl_code_util__V_37_37 = (erl_backend__erl_code_util__V_38_38 + erl_backend__erl_code_util__CatchSize_18);
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_37_37 + erl_backend__erl_code_util__AfterSize_20);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer erl_backend__erl_code_util__V_31_31;
                  MR_Word erl_backend__erl_code_util__ExprA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__V_31_31 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_68);
                  }
                  erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_31_31);
                }
                break;
              case (MR_Integer) 8:
                erl_backend__erl_code_util__Size_4 = (MR_Integer) 10000;
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer erl_backend__erl_code_util__V_26_26;
                  MR_Integer erl_backend__erl_code_util__V_28_28;
                  MR_Integer erl_backend__erl_code_util__V_29_29;
                  MR_Word erl_backend__erl_code_util__ExprA_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_util__ExprB_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

                  {
                    erl_backend__erl_code_util__V_28_28 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_69);
                  }
                  erl_backend__erl_code_util__V_26_26 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_28_28);
                  {
                    erl_backend__erl_code_util__V_29_29 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_70);
                  }
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_26_26 + erl_backend__erl_code_util__V_29_29);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Integer erl_backend__erl_code_util__V_25_25;
                  MR_Word erl_backend__erl_code_util__Cases_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_util__V_25_25 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_71);
                  }
                  erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_25_25);
                }
                break;
            }
            break;
        }
        return erl_backend__erl_code_util__Size_4;
      }
      break;
    }
}

void MR_CALL 
erl_backend__erl_code_util__erl_expr_vars_2_p_0(
  MR_Word erl_backend__erl_code_util__Expr_3,
  MR_Word * erl_backend__erl_code_util__Set_4)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_5_5;

    {
      erl_backend__erl_code_util__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_3, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__Set_4);
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(
  MR_Word erl_backend__erl_code_util__ExceptVars_6,
  MR_Word erl_backend__erl_code_util__Expr0_7,
  MR_Word * erl_backend__erl_code_util__Expr_8,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_14)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_17_17;
    MR_Word erl_backend__erl_code_util__Vars0_10;
    MR_Word erl_backend__erl_code_util__Vars_11;
    MR_Word erl_backend__erl_code_util__Subn_12;
    MR_Word erl_backend__erl_code_util__V_15_15;
    MR_Word erl_backend__erl_code_util__V_20_20;

    {
      erl_backend__erl_code_util__V_20_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__V_20_20, &erl_backend__erl_code_util__Vars0_10);
    }
    erl_backend__erl_code_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      erl_backend__erl_code_util__Vars_11 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars0_10, erl_backend__erl_code_util__ExceptVars_6);
    }
    {
      erl_backend__erl_code_util__V_15_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars_11);
    }
    {
      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_util__V_15_15, &erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Info_14);
    }
    {
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__Expr_8);
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(
  MR_Word erl_backend__erl_code_util__Subn_4,
  MR_Word erl_backend__erl_code_util__Expr0_5,
  MR_Word * erl_backend__erl_code_util__Expr_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_code_util__Clause0_20 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr0_5), (MR_Integer) 0);
          MR_Word erl_backend__erl_code_util__Clause_21;

          {
            erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Clause0_20, &erl_backend__erl_code_util__Clause_21);
          }
          *erl_backend__erl_code_util__Expr_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_util__Clause_21);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_util__Exprs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_code_util__Exprs_8;

          {
            erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Exprs0_7, &erl_backend__erl_code_util__Exprs_8);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_code_util__Expr_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Exprs_8));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_code_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
          MR_Word erl_backend__erl_code_util__Term_10;

          {
            erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Term0_9, &erl_backend__erl_code_util__Term_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__erl_code_util__Expr_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Term_10));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_code_util__ExprA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__ExprA_13;
              MR_Word erl_backend__erl_code_util__ExprB_14;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_11, &erl_backend__erl_code_util__ExprA_13);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_12, &erl_backend__erl_code_util__ExprB_14);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_util__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprA0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__ExprA_36;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_35, &erl_backend__erl_code_util__ExprA_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_36));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_util__ExprA0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__ExprB0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
              MR_Word erl_backend__erl_code_util__ExprA_39;
              MR_Word erl_backend__erl_code_util__ExprB_40;
              MR_Word erl_backend__erl_code_util__Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_37, &erl_backend__erl_code_util__ExprA_39);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_38, &erl_backend__erl_code_util__ExprB_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__ExprB_40));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word erl_backend__erl_code_util__CallTarget0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprsB0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__CallTarget_18;
              MR_Word erl_backend__erl_code_util__ExprsB_19;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__CallTarget0_16, &erl_backend__erl_code_util__CallTarget_18);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprsB0_17, &erl_backend__erl_code_util__ExprsB_19);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__CallTarget_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprsB_19));
              }
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 8:
            *erl_backend__erl_code_util__Expr_6 = erl_backend__erl_code_util__Expr0_5;
            break;
          case (MR_Integer) 5:
            {
              MR_Word erl_backend__erl_code_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__Cases_23;
              MR_Word erl_backend__erl_code_util__ExprA0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprA_43;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_42, &erl_backend__erl_code_util__ExprA_43);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_22, &erl_backend__erl_code_util__Cases_23);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_43));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_23));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word erl_backend__erl_code_util__MaybeCatch0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
              MR_Word erl_backend__erl_code_util__MaybeAfter0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 4)));
              MR_Word erl_backend__erl_code_util__MaybeCatch_28;
              MR_Word erl_backend__erl_code_util__MaybeAfter_31;
              MR_Word erl_backend__erl_code_util__ExprA0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprA_45;
              MR_Word erl_backend__erl_code_util__Cases0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__Cases_47;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_44, &erl_backend__erl_code_util__ExprA_45);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_46, &erl_backend__erl_code_util__Cases_47);
              }
              if ((erl_backend__erl_code_util__MaybeCatch0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word erl_backend__erl_code_util__Catch0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch0_24, (MR_Integer) 0)));
                  MR_Word erl_backend__erl_code_util__Catch_27;

                  {
                    erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Catch0_26, &erl_backend__erl_code_util__Catch_27);
                  }
                  {
                    erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_28, 0) = ((MR_Box) (erl_backend__erl_code_util__Catch_27));
                  }
                }
              if ((erl_backend__erl_code_util__MaybeAfter0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word erl_backend__erl_code_util__After0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter0_25, (MR_Integer) 0)));
                  MR_Word erl_backend__erl_code_util__After_30;

                  {
                    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__After0_29, &erl_backend__erl_code_util__After_30);
                  }
                  {
                    erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_31, 0) = ((MR_Box) (erl_backend__erl_code_util__After_30));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_45));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_47));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__MaybeCatch_28));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (erl_backend__erl_code_util__MaybeAfter_31));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word erl_backend__erl_code_util__ExprA0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprA_49;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_48, &erl_backend__erl_code_util__ExprA_49);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_49));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word erl_backend__erl_code_util__ExprA0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__ExprB0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_util__ExprA_52;
              MR_Word erl_backend__erl_code_util__ExprB_53;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_50, &erl_backend__erl_code_util__ExprA_52);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_51, &erl_backend__erl_code_util__ExprB_53);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_52));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_53));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word erl_backend__erl_code_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_util__Cases_55;

              {
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_54, &erl_backend__erl_code_util__Cases_55);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_util__Expr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Cases_55));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14;

    {
      erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_4), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14);
    }
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12));
    *erl_backend__erl_code_util__wrapper_arg_5 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0(
  MR_Word erl_backend__erl_code_util__Vars_5,
  MR_Word * erl_backend__erl_code_util__Subst_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__VarSet_9;
    MR_Word erl_backend__erl_code_util__V_13_13;
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Box erl_backend__erl_code_util__conv3_VarSet_9;
    MR_Box erl_backend__erl_code_util__conv2_Subst_6;
    MR_Word erl_backend__erl_code_util__V_36_36;
    MR_Word erl_backend__erl_code_util__V_37_37;
    MR_Integer erl_backend__erl_code_util__V_38_38;
    MR_Word erl_backend__erl_code_util__V_40_40;
    MR_Word erl_backend__erl_code_util__V_41_41;
    MR_Word erl_backend__erl_code_util__V_42_42;
    MR_Word erl_backend__erl_code_util__V_43_43;
    MR_Word erl_backend__erl_code_util__V_39_39;

    {
      erl_backend__erl_code_util__V_13_13 = mercury__map__init_0_f_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20);
    }
    {
      mercury__list__foldl2_6_p_0(erl_backend__erl_code_util__TypeInfo_20_20, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[4], erl_backend__erl_code_util__Vars_5, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv3_VarSet_9, ((MR_Box) (erl_backend__erl_code_util__V_13_13)), &erl_backend__erl_code_util__conv2_Subst_6);
    }
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv3_VarSet_9);
    *erl_backend__erl_code_util__Subst_6 = ((MR_Word) erl_backend__erl_code_util__conv2_Subst_6);
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
    }
  }
}

MR_Word MR_CALL 
erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
  MR_Word erl_backend__erl_code_util__VarTypes_7,
  MR_Word erl_backend__erl_code_util__DummyVarReplacement_8,
  MR_Word erl_backend__erl_code_util__Var_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__HeadVar__5_5;
    MR_Word erl_backend__erl_code_util__Type_10;
    MR_Word erl_backend__erl_code_util__V_11_11;

    {
      erl_backend__erl_code_util__succeeded = hlds__vartypes__search_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_9, &erl_backend__erl_code_util__Type_10);
    }
    if (erl_backend__erl_code_util__succeeded)
      {
        {
          erl_backend__erl_code_util__V_11_11 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_10);
        }
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_11_11 == (MR_Integer) 0);
      }
    if (erl_backend__erl_code_util__succeeded)
      {
        erl_backend__erl_code_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__HeadVar__5_5, 0) = ((MR_Box) (erl_backend__erl_code_util__DummyVarReplacement_8));
      }
    else
      {
        erl_backend__erl_code_util__HeadVar__5_5 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_util__Var_9);
      }
    return erl_backend__erl_code_util__HeadVar__5_5;
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__2_2;

    {
      erl_backend__erl_code_util__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__2_2));
    return erl_backend__erl_code_util__wrapper_arg_2;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(
  MR_Word erl_backend__erl_code_util__Info_7,
  MR_Word erl_backend__erl_code_util__VarsToBind_8,
  MR_Word erl_backend__erl_code_util__Goal_9,
  MR_Word erl_backend__erl_code_util__InstMap_10,
  MR_Word erl_backend__erl_code_util__Statement0_11,
  MR_Word * erl_backend__erl_code_util__Statement_12)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_19_19;
    MR_Word erl_backend__erl_code_util__Bound_13;
    MR_Word erl_backend__erl_code_util__NotBound_14;

    {
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_util__Info_7, erl_backend__erl_code_util__InstMap_10, erl_backend__erl_code_util__Goal_9, &erl_backend__erl_code_util__Bound_13);
    }
    erl_backend__erl_code_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      erl_backend__erl_code_util__NotBound_14 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__VarsToBind_8, erl_backend__erl_code_util__Bound_13);
    }
    {
      erl_backend__erl_code_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
    }
    if (erl_backend__erl_code_util__succeeded)
      *erl_backend__erl_code_util__Statement_12 = erl_backend__erl_code_util__Statement0_11;
    else
      {
        MR_Word erl_backend__erl_code_util__NotBoundList_15;
        MR_Word erl_backend__erl_code_util__Assignments_16;
        MR_Word erl_backend__erl_code_util__V_18_18;

        {
          erl_backend__erl_code_util__NotBoundList_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
        }
        {
          erl_backend__erl_code_util__Assignments_16 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[3], erl_backend__erl_code_util__NotBoundList_15);
        }
        {
          erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (erl_backend__erl_code_util__Assignments_16));
        }
        {
          *erl_backend__erl_code_util__Statement_12 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_util__V_18_18, erl_backend__erl_code_util__Statement0_11);
        }
      }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;

    {
      erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
    return erl_backend__erl_code_util__succeeded;
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(
  MR_Word erl_backend__erl_code_util__Info_5,
  MR_Word erl_backend__erl_code_util__InstMap_6,
  MR_Word erl_backend__erl_code_util__Goal_7,
  MR_Word * erl_backend__erl_code_util__BoundNonLocals_8)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_util__NonLocals_13;
    MR_Word erl_backend__erl_code_util__InstmapDelta_14;
    MR_Word erl_backend__erl_code_util__V_15_15;
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 7)));
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 0)));

    {
      erl_backend__erl_code_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
    {
      erl_backend__erl_code_util__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
    {
      erl_backend__erl_code_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 3) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_10));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 5) = ((MR_Box) (erl_backend__erl_code_util__InstMap_6));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 6) = ((MR_Box) (erl_backend__erl_code_util__InstmapDelta_14));
    }
    {
      *erl_backend__erl_code_util__BoundNonLocals_8 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__V_15_15, erl_backend__erl_code_util__NonLocals_13);
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(
  MR_Word erl_backend__erl_code_util__InstMap0_7,
  MR_Word erl_backend__erl_code_util__Goal_8,
  MR_Word erl_backend__erl_code_util__MaybeExpr0_9,
  MR_Word * erl_backend__erl_code_util__MaybeExpr_10,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_18)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;

    if ((erl_backend__erl_code_util__MaybeExpr0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *erl_backend__erl_code_util__MaybeExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *erl_backend__erl_code_util__STATE_VARIABLE_Info_18 = erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17;
      }
    else
      {
        MR_Word erl_backend__erl_code_util__Expr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeExpr0_9, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_util__InstMap_14;
        MR_Word erl_backend__erl_code_util__BoundVars_15;
        MR_Word erl_backend__erl_code_util__Expr_16;
        MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
        MR_Integer erl_backend__erl_code_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

        {
          hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_util__Goal_8, erl_backend__erl_code_util__InstMap0_7, &erl_backend__erl_code_util__InstMap_14);
        }
        {
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_util__InstMap_14, erl_backend__erl_code_util__ModuleInfo_13, &erl_backend__erl_code_util__BoundVars_15);
        }
        {
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_util__BoundVars_15, erl_backend__erl_code_util__Expr0_12, &erl_backend__erl_code_util__Expr_16, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, erl_backend__erl_code_util__STATE_VARIABLE_Info_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_code_util__MaybeExpr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_16));
        }
      }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_27,
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
  MR_Word erl_backend__erl_code_util__VarNames_10,
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
  MR_Word erl_backend__erl_code_util__TopFunctorModes_12,
  MR_Word * erl_backend__erl_code_util__Inputs_13,
  MR_Word * erl_backend__erl_code_util__Outputs_14)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__VarNames_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (erl_backend__erl_code_util__succeeded)
      {
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (erl_backend__erl_code_util__succeeded)
          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__TopFunctorModes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (erl_backend__erl_code_util__succeeded)
      {
        *erl_backend__erl_code_util__Inputs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *erl_backend__erl_code_util__Outputs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Box erl_backend__erl_code_util__VarName_15;
        MR_Word erl_backend__erl_code_util__VarNames1_16;
        MR_Word erl_backend__erl_code_util__ArgType_17;
        MR_Word erl_backend__erl_code_util__ArgTypes1_18;
        MR_Word erl_backend__erl_code_util__TopFunctorMode_19;
        MR_Word erl_backend__erl_code_util__TopFunctorModes1_20;

        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__VarNames_10)) == (MR_mktag((MR_Integer) 1)));
        if (erl_backend__erl_code_util__succeeded)
          {
            erl_backend__erl_code_util__VarName_15 = (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 0));
            erl_backend__erl_code_util__VarNames1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 1)));
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__ArgTypes_11)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__erl_code_util__succeeded)
              {
                erl_backend__erl_code_util__ArgType_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 0)));
                erl_backend__erl_code_util__ArgTypes1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 1)));
                erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__TopFunctorModes_12)) == (MR_mktag((MR_Integer) 1)));
                if (erl_backend__erl_code_util__succeeded)
                  {
                    erl_backend__erl_code_util__TopFunctorMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__TopFunctorModes_12, (MR_Integer) 0)));
                    erl_backend__erl_code_util__TopFunctorModes1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__TopFunctorModes_12, (MR_Integer) 1)));
                  }
              }
          }
        if (erl_backend__erl_code_util__succeeded)
          {
            MR_Word erl_backend__erl_code_util__Inputs1_21;
            MR_Word erl_backend__erl_code_util__Outputs1_22;

            {
              erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_27, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames1_16, erl_backend__erl_code_util__ArgTypes1_18, erl_backend__erl_code_util__TopFunctorModes1_20, &erl_backend__erl_code_util__Inputs1_21, &erl_backend__erl_code_util__Outputs1_22);
            }
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OptDummyArgs_9 == (MR_Integer) 0);
            if (erl_backend__erl_code_util__succeeded)
              {
                {
                  MR_Word erl_backend__erl_code_util__V_23_23;

                  {
                    erl_backend__erl_code_util__V_23_23 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__ArgType_17);
                  }
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
                }
                if (!(erl_backend__erl_code_util__succeeded))
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__TopFunctorMode_19 == (MR_Integer) 2);
              }
            if (erl_backend__erl_code_util__succeeded)
              {
                *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
                *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
              }
            else
              switch (erl_backend__erl_code_util__TopFunctorMode_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *erl_backend__erl_code_util__Inputs_13 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Inputs1_21));
                    }
                    *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *erl_backend__erl_code_util__Outputs_14 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Outputs1_22));
                    }
                  }
                  break;
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_util", (MR_String) "predicate \140erl_backend.erl_code_util.erl_gen_arg_list_arg_modes\'/7", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_16,
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
  MR_Word erl_backend__erl_code_util__VarNames_10,
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
  MR_Word erl_backend__erl_code_util__Modes_12,
  MR_Word * erl_backend__erl_code_util__Inputs_13,
  MR_Word * erl_backend__erl_code_util__Outputs_14)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__TopFunctorModes_15;

    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__Modes_12, erl_backend__erl_code_util__ArgTypes_11, &erl_backend__erl_code_util__TopFunctorModes_15);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_16, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames_10, erl_backend__erl_code_util__ArgTypes_11, erl_backend__erl_code_util__TopFunctorModes_15, erl_backend__erl_code_util__Inputs_13, erl_backend__erl_code_util__Outputs_14);
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(
  MR_String erl_backend__erl_code_util__Name_4,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_9)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word erl_backend__erl_code_util__EnvVarNames_7;
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_18_18;
    MR_Word erl_backend__erl_code_util__V_19_19;
    MR_Integer erl_backend__erl_code_util__V_20_20;
    MR_Word erl_backend__erl_code_util__V_21_21;
    MR_Word erl_backend__erl_code_util__V_22_22;
    MR_Word erl_backend__erl_code_util__V_23_23;
    MR_Word erl_backend__erl_code_util__V_24_24;
    MR_Word erl_backend__erl_code_util__V_25_25;

    {
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (erl_backend__erl_code_util__Name_4)), erl_backend__erl_code_util__EnvVarNames0_6, &erl_backend__erl_code_util__EnvVarNames_7);
    }
    erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_20_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__V_21_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_22_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_23_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_24_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVarNames_7));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_variable_type_3_p_0(
  MR_Word erl_backend__erl_code_util__Info_4,
  MR_Word erl_backend__erl_code_util__Var_5,
  MR_Word * erl_backend__erl_code_util__Type_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 7)));

    {
      hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_5, erl_backend__erl_code_util__Type_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv0_Type_6;

    {
      erl_backend__erl_code_util__erl_variable_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Type_6);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Type_6));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0(
  MR_Word erl_backend__erl_code_util__Info_4,
  MR_Word erl_backend__erl_code_util__Vars_5,
  MR_Word * erl_backend__erl_code_util__Types_6)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_7_7;

    {
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_variable_types_3_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Info_4));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Vars_5, erl_backend__erl_code_util__Types_6);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
  MR_Box erl_backend__erl_code_util__closure_arg,
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_util__wrapper_arg_4)
{
  {
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
    MR_Word erl_backend__erl_code_util__conv1_NewVar_6;
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9;

    {
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv1_NewVar_6, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9);
    }
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv1_NewVar_6));
    *erl_backend__erl_code_util__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(
  MR_Integer erl_backend__erl_code_util__Num_5,
  MR_Word * erl_backend__erl_code_util__NewVars_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__VarSet_9;
    MR_Word erl_backend__erl_code_util__V_13_13;
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Box erl_backend__erl_code_util__conv2_VarSet_9;
    MR_Word erl_backend__erl_code_util__V_36_36;
    MR_Word erl_backend__erl_code_util__V_37_37;
    MR_Integer erl_backend__erl_code_util__V_38_38;
    MR_Word erl_backend__erl_code_util__V_40_40;
    MR_Word erl_backend__erl_code_util__V_41_41;
    MR_Word erl_backend__erl_code_util__V_42_42;
    MR_Word erl_backend__erl_code_util__V_43_43;
    MR_Word erl_backend__erl_code_util__V_39_39;

    {
      erl_backend__erl_code_util__V_13_13 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, erl_backend__erl_code_util__Num_5);
    }
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[2], erl_backend__erl_code_util__V_13_13, erl_backend__erl_code_util__NewVars_6, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv2_VarSet_9);
    }
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv2_VarSet_9);
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(
  MR_Integer erl_backend__erl_code_util__Num_5,
  MR_Word * erl_backend__erl_code_util__NewVars_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__VarSet_9;
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word erl_backend__erl_code_util__V_27_27;
    MR_Word erl_backend__erl_code_util__V_28_28;
    MR_Integer erl_backend__erl_code_util__V_29_29;
    MR_Word erl_backend__erl_code_util__V_31_31;
    MR_Word erl_backend__erl_code_util__V_32_32;
    MR_Word erl_backend__erl_code_util__V_33_33;
    MR_Word erl_backend__erl_code_util__V_34_34;
    MR_Word erl_backend__erl_code_util__V_30_30;

    {
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Num_5, erl_backend__erl_code_util__NewVars_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0(
  MR_String erl_backend__erl_code_util__Name_5,
  MR_Word * erl_backend__erl_code_util__NewVar_6,
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__VarSet_9;
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word erl_backend__erl_code_util__V_27_27;
    MR_Word erl_backend__erl_code_util__V_28_28;
    MR_Integer erl_backend__erl_code_util__V_29_29;
    MR_Word erl_backend__erl_code_util__V_31_31;
    MR_Word erl_backend__erl_code_util__V_32_32;
    MR_Word erl_backend__erl_code_util__V_33_33;
    MR_Word erl_backend__erl_code_util__V_34_34;
    MR_Word erl_backend__erl_code_util__V_30_30;

    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_5, erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
    }
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    MR_Word erl_backend__erl_code_util__V_10_10;

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_util__V_9_9;
    MR_Word erl_backend__erl_code_util__V_10_10;

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_util__V_8_8;
    MR_Word erl_backend__erl_code_util__V_9_9;
    MR_Word erl_backend__erl_code_util__V_10_10;

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_util__V_7_7;
    MR_Word erl_backend__erl_code_util__V_8_8;
    MR_Word erl_backend__erl_code_util__V_9_9;
    MR_Word erl_backend__erl_code_util__V_10_10;

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(
  MR_Word erl_backend__erl_code_util__Info_3,
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__V_4_4;
    MR_Integer erl_backend__erl_code_util__V_5_5;
    MR_Word erl_backend__erl_code_util__V_6_6;
    MR_Word erl_backend__erl_code_util__V_7_7;
    MR_Word erl_backend__erl_code_util__V_8_8;
    MR_Word erl_backend__erl_code_util__V_9_9;
    MR_Word erl_backend__erl_code_util__V_10_10;

    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
    erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
    erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
    erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
  }
}

MR_Word MR_CALL 
erl_backend__erl_code_util__erl_gen_info_init_3_f_0(
  MR_Word erl_backend__erl_code_util__ModuleInfo_5,
  MR_Word erl_backend__erl_code_util__PredId_6,
  MR_Integer erl_backend__erl_code_util__ProcId_7)
{
  {
    MR_bool erl_backend__erl_code_util__succeeded;
    MR_Word erl_backend__erl_code_util__Info_8;
    MR_Word erl_backend__erl_code_util__PredInfo_9;
    MR_Word erl_backend__erl_code_util__ProcInfo_10;
    MR_Word erl_backend__erl_code_util__HeadVars_11;
    MR_Word erl_backend__erl_code_util__VarSet_12;
    MR_Word erl_backend__erl_code_util__VarTypes_13;
    MR_Word erl_backend__erl_code_util__HeadModes_14;
    MR_Word erl_backend__erl_code_util__HeadTypes_15;
    MR_Word erl_backend__erl_code_util__InputVars_16;
    MR_Word erl_backend__erl_code_util__OutputVars_17;
    MR_Word erl_backend__erl_code_util__EnvVars_18;
    MR_Word erl_backend__erl_code_util__TopFunctorModes_29;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__PredId_6, erl_backend__erl_code_util__ProcId_7, &erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadVars_11);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarSet_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarTypes_13);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadModes_14);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__HeadTypes_15);
    }
    {
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__HeadModes_14, erl_backend__erl_code_util__HeadTypes_15, &erl_backend__erl_code_util__TopFunctorModes_29);
    }
    {
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], erl_backend__erl_code_util__ModuleInfo_5, (MR_Integer) 0, erl_backend__erl_code_util__HeadVars_11, erl_backend__erl_code_util__HeadTypes_15, erl_backend__erl_code_util__TopFunctorModes_29, &erl_backend__erl_code_util__InputVars_16, &erl_backend__erl_code_util__OutputVars_17);
    }
    {
      erl_backend__erl_code_util__EnvVars_18 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      erl_backend__erl_code_util__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 0) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 1) = ((MR_Box) (erl_backend__erl_code_util__PredId_6));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 2) = ((MR_Box) (erl_backend__erl_code_util__ProcId_7));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_12));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_13));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 5) = ((MR_Box) (erl_backend__erl_code_util__InputVars_16));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 6) = ((MR_Box) (erl_backend__erl_code_util__OutputVars_17));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVars_18));
    }
    return erl_backend__erl_code_util__Info_8;
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

/* :- end_module erl_backend.erl_code_util. */
