/*
** Automatically generated from `erl_code_util.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 506 "erl_code_util.m"
struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s {
#line 509 "erl_code_util.m"
  MR_bool erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
#line 516 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10;
#line 517 "erl_code_util.m"
  jmp_buf erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0;
#line 517 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11;
#line 517 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12;
#line 518 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12;
#line 506 "erl_code_util.m"
};


#line 155 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 167 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 179 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 185 "erl_backend.erl_code_util.c"
static const MR_PseudoTypeInfo erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0[8];

#line 188 "erl_backend.erl_code_util.c"
static const MR_ConstString erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0[8];

#line 191 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0;

#line 194 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1];

#line 197 "erl_backend.erl_code_util.c"
static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1];

#line 200 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1];

#line 203 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1];

#line 206 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0;

#line 209 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1;

#line 212 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2];

#line 215 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2];

#line 218 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2];

#line 221 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
#line 224 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 226 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 229 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
#line 232 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 234 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 236 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

#line 239 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
#line 242 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 244 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 247 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
#line 250 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 252 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 254 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

#line 301 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 301 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

#line 978 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
#line 978 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_3);

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 976 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
#line 976 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 976 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 974 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
#line 974 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_3);

#line 968 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
#line 968 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1);

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 879 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 947 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
#line 947 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_3);

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 945 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
#line 945 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 945 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 943 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
#line 943 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Terms_3);

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 879 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 877 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
#line 877 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs_3);

#line 866 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
#line 866 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch_4,
#line 866 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 866 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

#line 858 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
#line 858 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_4,
#line 858 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 858 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

#line 856 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 856 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 852 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
#line 852 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_4,
#line 852 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
#line 852 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7);

#line 806 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 806 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 844 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
#line 844 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause_4,
#line 844 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 844 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

#line 831 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
#line 831 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target_4,
#line 831 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 831 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 808 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
#line 808 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_4,
#line 808 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
#line 808 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17);

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 738 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
#line 738 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_4,
#line 738 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
#line 738 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23);

#line 709 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
#line 709 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 709 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch0_5,
#line 709 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Catch_6);

#line 700 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
#line 700 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 700 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case0_5,
#line 700 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Case_6);

#line 698 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
#line 698 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 698 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 698 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 694 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
#line 694 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 694 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases0_5,
#line 694 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Cases_6);

#line 642 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
#line 642 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 642 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 642 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 685 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
#line 685 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 685 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause0_5,
#line 685 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Clause_6);

#line 670 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
#line 670 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 670 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target0_5,
#line 670 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Target_6);

#line 558 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 558 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 644 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
#line 644 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 644 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term0_5,
#line 644 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Term_6);

#line 558 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 558 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 554 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
#line 554 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 554 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs0_5,
#line 554 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Exprs_6);

#line 543 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OldVar_6,
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
#line 543 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
#line 543 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 506 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
#line 506 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_2);

#line 485 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
#line 485 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 485 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 485 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3);

#line 407 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_8,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_10);

#line 301 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
#line 301 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util___Num_5,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 301 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

#line 540 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 540 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
#line 540 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5);

#line 424 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
#line 424 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 424 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 403 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
#line 403 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 403 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 308 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
#line 308 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 308 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 308 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 297 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 297 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
#line 297 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_4);


static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_1[5][2];

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[17][3];

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

static /* final */ const MR_Box erl_backend__erl_code_util_scalar_common_2[17][3] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[0])),
    ((MR_Box) (erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_create_renaming_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[4])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[5])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[6])),
    ((MR_Box) (erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_exprs_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_exprs_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[2])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_terms_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[1])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[7])),
    ((MR_Box) (erl_backend__erl_code_util__erl_term_size_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&erl_backend__erl_code_util_scalar_common_6[3])),
    ((MR_Box) (erl_backend__erl_code_util__erl_cases_size_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
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
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1065 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1073 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1081 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1089 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1098 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1107 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1115 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1123 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1132 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1140 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1148 "erl_backend.erl_code_util.c"
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

#line 1160 "erl_backend.erl_code_util.c"
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

#line 1172 "erl_backend.erl_code_util.c"
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
  NULL
};

#line 1187 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

#line 1192 "erl_backend.erl_code_util.c"
static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0
  }
};

#line 1201 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

#line 1206 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1] = {
  (MR_Integer) 0
};

#line 1211 "erl_backend.erl_code_util.c"
const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "erl_gen_info",
  {
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0
  },
  {
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0
};

#line 1232 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0 = {
  (MR_String) "opt_dummy_args",
  (MR_Integer) 0
};

#line 1238 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1 = {
  (MR_String) "no_opt_dummy_args",
  (MR_Integer) 1
};

#line 1244 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1
};

#line 1250 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0
};

#line 1256 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1262 "erl_backend.erl_code_util.c"
const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001)),
  ((MR_Box) (erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001)),
  (MR_String) "erl_backend.erl_code_util",
  (MR_String) "opt_dummy_args",
  {
    erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0
  },
  {
    erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0
};

#line 1283 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
#line 1286 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 1288 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 1290 "erl_backend.erl_code_util.c"
{
#line 1292 "erl_backend.erl_code_util.c"
  {
#line 1294 "erl_backend.erl_code_util.c"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 1297 "erl_backend.erl_code_util.c"
    {
#line 1299 "erl_backend.erl_code_util.c"
      erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util____Unify____erl_gen_info_0_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 1302 "erl_backend.erl_code_util.c"
    return erl_backend__erl_code_util__succeeded;
#line 1304 "erl_backend.erl_code_util.c"
  }
#line 1306 "erl_backend.erl_code_util.c"
}

#line 1309 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
#line 1312 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 1314 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 1316 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3)
#line 1318 "erl_backend.erl_code_util.c"
{
#line 1320 "erl_backend.erl_code_util.c"
  {
#line 1322 "erl_backend.erl_code_util.c"
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__1_1;

#line 1325 "erl_backend.erl_code_util.c"
    {
#line 1327 "erl_backend.erl_code_util.c"
      erl_backend__erl_code_util____Compare____erl_gen_info_0_0(&erl_backend__erl_code_util__conv0_HeadVar__1_1, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3));
    }
#line 1330 "erl_backend.erl_code_util.c"
    *erl_backend__erl_code_util__wrapper_arg_1 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__1_1));
#line 1332 "erl_backend.erl_code_util.c"
  }
#line 1334 "erl_backend.erl_code_util.c"
}

#line 1337 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
#line 1340 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 1342 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 1344 "erl_backend.erl_code_util.c"
{
#line 1346 "erl_backend.erl_code_util.c"
  {
#line 1348 "erl_backend.erl_code_util.c"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 1351 "erl_backend.erl_code_util.c"
    {
#line 1353 "erl_backend.erl_code_util.c"
      erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 1356 "erl_backend.erl_code_util.c"
    return erl_backend__erl_code_util__succeeded;
#line 1358 "erl_backend.erl_code_util.c"
  }
#line 1360 "erl_backend.erl_code_util.c"
}

#line 1363 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
#line 1366 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 1368 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 1370 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3)
#line 1372 "erl_backend.erl_code_util.c"
{
#line 1374 "erl_backend.erl_code_util.c"
  {
#line 1376 "erl_backend.erl_code_util.c"
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__1_1;

#line 1379 "erl_backend.erl_code_util.c"
    {
#line 1381 "erl_backend.erl_code_util.c"
      erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(&erl_backend__erl_code_util__conv0_HeadVar__1_1, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3));
    }
#line 1384 "erl_backend.erl_code_util.c"
    *erl_backend__erl_code_util__wrapper_arg_1 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__1_1));
#line 1386 "erl_backend.erl_code_util.c"
  }
#line 1388 "erl_backend.erl_code_util.c"
}

#line 301 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 301 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
#line 301 "erl_code_util.m"
{
#line 304 "erl_code_util.m"
  {
#line 304 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 305 "erl_code_util.m"
    {
#line 305 "erl_code_util.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "_", erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
#line 305 "erl_code_util.m"
      return;
    }
#line 304 "erl_code_util.m"
  }
#line 301 "erl_code_util.m"
}

#line 95 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(
#line 95 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
#line 95 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 95 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
#line 95 "erl_code_util.m"
{
#line 95 "erl_code_util.m"
  {
#line 95 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 95 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar1_4 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
#line 95 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar2_5 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

#line 95 "erl_code_util.m"
    {
#line 95 "erl_code_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__erl_code_util__HeadVar__1_1, erl_backend__erl_code_util__Cast_HeadVar1_4, erl_backend__erl_code_util__Cast_HeadVar2_5);
#line 95 "erl_code_util.m"
      return;
    }
#line 95 "erl_code_util.m"
  }
#line 95 "erl_code_util.m"
}

#line 95 "erl_code_util.m"
MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(
#line 95 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_1,
#line 95 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
#line 95 "erl_code_util.m"
{
#line 1460 "erl_backend.erl_code_util.c"
  {
#line 1462 "erl_backend.erl_code_util.c"
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_1 == erl_backend__erl_code_util__HeadVar__2_2);

#line 1465 "erl_backend.erl_code_util.c"
    return erl_backend__erl_code_util__succeeded;
#line 1467 "erl_backend.erl_code_util.c"
  }
#line 95 "erl_code_util.m"
}

#line 231 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0(
#line 231 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
#line 231 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 231 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
#line 231 "erl_code_util.m"
{
#line 231 "erl_code_util.m"
  {
#line 231 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 231 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastX_27 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
#line 231 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastY_28 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

#line 231 "erl_code_util.m"
    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_27 == erl_backend__erl_code_util__CastY_28);
#line 231 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 1496 "erl_backend.erl_code_util.c"
      *erl_backend__erl_code_util__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "erl_code_util.m"
    else
#line 231 "erl_code_util.m"
      {
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 0)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 1)));
#line 231 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 2)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 3)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 4)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 5)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 6)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 7)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_20_20;

#line 231 "erl_code_util.m"
        {
#line 231 "erl_code_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&erl_backend__erl_code_util__V_20_20, erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
        }
#line 1542 "erl_backend.erl_code_util.c"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_20_20 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_20_20;
#line 231 "erl_code_util.m"
        else
#line 231 "erl_code_util.m"
          {
#line 231 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__V_21_21;

#line 231 "erl_code_util.m"
            {
#line 231 "erl_code_util.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&erl_backend__erl_code_util__V_21_21, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__V_13_13);
            }
#line 1562 "erl_backend.erl_code_util.c"
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_21_21 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_21_21;
#line 231 "erl_code_util.m"
            else
#line 231 "erl_code_util.m"
              {
#line 231 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__V_22_22;

#line 231 "erl_code_util.m"
                {
#line 231 "erl_code_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__erl_code_util__V_22_22, erl_backend__erl_code_util__V_6_6, erl_backend__erl_code_util__V_14_14);
                }
#line 1582 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_22_22 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_22_22;
#line 231 "erl_code_util.m"
                else
#line 231 "erl_code_util.m"
                  {
#line 231 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__V_23_23;

#line 231 "erl_code_util.m"
                    {
#line 231 "erl_code_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], &erl_backend__erl_code_util__V_23_23, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                    }
#line 1602 "erl_backend.erl_code_util.c"
                    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
                    erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                      *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_23_23;
#line 231 "erl_code_util.m"
                    else
#line 231 "erl_code_util.m"
                      {
#line 231 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__V_24_24;

#line 231 "erl_code_util.m"
                        {
#line 231 "erl_code_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &erl_backend__erl_code_util__V_24_24, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                        }
#line 1622 "erl_backend.erl_code_util.c"
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_24_24 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
                        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_24_24;
#line 231 "erl_code_util.m"
                        else
#line 231 "erl_code_util.m"
                          {
#line 231 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__V_25_25;

#line 231 "erl_code_util.m"
                            {
#line 231 "erl_code_util.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_25_25, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                            }
#line 1642 "erl_backend.erl_code_util.c"
                            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_25_25 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
                            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
                            if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_25_25;
#line 231 "erl_code_util.m"
                            else
#line 231 "erl_code_util.m"
                              {
#line 231 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__V_26_26;

#line 231 "erl_code_util.m"
                                {
#line 231 "erl_code_util.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_26_26, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                }
#line 1662 "erl_backend.erl_code_util.c"
                                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_26_26 == (MR_Integer) 0);
#line 231 "erl_code_util.m"
                                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 231 "erl_code_util.m"
                                if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_26_26;
#line 231 "erl_code_util.m"
                                else
#line 231 "erl_code_util.m"
                                  {
#line 231 "erl_code_util.m"
                                    {
#line 231 "erl_code_util.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[4], erl_backend__erl_code_util__HeadVar__1_1, ((MR_Box) (erl_backend__erl_code_util__V_11_11)), ((MR_Box) (erl_backend__erl_code_util__V_19_19)));
#line 231 "erl_code_util.m"
                                      return;
                                    }
#line 231 "erl_code_util.m"
                                  }
#line 231 "erl_code_util.m"
                              }
#line 231 "erl_code_util.m"
                          }
#line 231 "erl_code_util.m"
                      }
#line 231 "erl_code_util.m"
                  }
#line 231 "erl_code_util.m"
              }
#line 231 "erl_code_util.m"
          }
#line 231 "erl_code_util.m"
      }
#line 231 "erl_code_util.m"
  }
#line 231 "erl_code_util.m"
}

#line 231 "erl_code_util.m"
MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0(
#line 231 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 231 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
#line 231 "erl_code_util.m"
{
#line 231 "erl_code_util.m"
  {
#line 231 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 231 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastX_19 = (MR_Integer) erl_backend__erl_code_util__HeadVar__1_1;
#line 231 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastY_20 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;

#line 231 "erl_code_util.m"
    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_19 == erl_backend__erl_code_util__CastY_20);
#line 231 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 231 "erl_code_util.m"
    else
#line 231 "erl_code_util.m"
      {
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_24_24;
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeCtorInfo_25_25;
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_26_26;
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_27_27;
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_28_28;
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 5)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 6)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 7)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
#line 231 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));

#line 1773 "erl_backend.erl_code_util.c"
        {
#line 1775 "erl_backend.erl_code_util.c"
          erl_backend__erl_code_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(erl_backend__erl_code_util__V_3_3, erl_backend__erl_code_util__V_11_11);
        }
#line 231 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
          {
#line 1782 "erl_backend.erl_code_util.c"
            {
#line 1784 "erl_backend.erl_code_util.c"
              erl_backend__erl_code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
            }
#line 231 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
              {
#line 1791 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_5_5 == erl_backend__erl_code_util__V_13_13);
#line 231 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                  {
#line 1797 "erl_backend.erl_code_util.c"
                    erl_backend__erl_code_util__TypeInfo_24_24 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1];
#line 1799 "erl_backend.erl_code_util.c"
                    {
#line 1801 "erl_backend.erl_code_util.c"
                      erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_24_24, ((MR_Box) (erl_backend__erl_code_util__V_6_6)), ((MR_Box) (erl_backend__erl_code_util__V_14_14)));
                    }
#line 231 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                      {
#line 1808 "erl_backend.erl_code_util.c"
                        erl_backend__erl_code_util__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1810 "erl_backend.erl_code_util.c"
                        {
#line 1812 "erl_backend.erl_code_util.c"
                          erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeCtorInfo_25_25, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                        }
#line 231 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                          {
#line 1819 "erl_backend.erl_code_util.c"
                            erl_backend__erl_code_util__TypeInfo_26_26 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
#line 1821 "erl_backend.erl_code_util.c"
                            {
#line 1823 "erl_backend.erl_code_util.c"
                              erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_26_26, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                            }
#line 231 "erl_code_util.m"
                            if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                              {
#line 1830 "erl_backend.erl_code_util.c"
                                erl_backend__erl_code_util__TypeInfo_27_27 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
#line 1832 "erl_backend.erl_code_util.c"
                                {
#line 1834 "erl_backend.erl_code_util.c"
                                  erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_27_27, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                                }
#line 231 "erl_code_util.m"
                                if (erl_backend__erl_code_util__succeeded)
#line 231 "erl_code_util.m"
                                  {
#line 1841 "erl_backend.erl_code_util.c"
                                    erl_backend__erl_code_util__TypeInfo_28_28 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[4];
#line 1843 "erl_backend.erl_code_util.c"
                                    {
#line 1845 "erl_backend.erl_code_util.c"
                                      return erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_28_28, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                    }
#line 231 "erl_code_util.m"
                                  }
#line 231 "erl_code_util.m"
                              }
#line 231 "erl_code_util.m"
                          }
#line 231 "erl_code_util.m"
                      }
#line 231 "erl_code_util.m"
                  }
#line 231 "erl_code_util.m"
              }
#line 231 "erl_code_util.m"
          }
#line 231 "erl_code_util.m"
      }
#line 231 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 231 "erl_code_util.m"
  }
#line 231 "erl_code_util.m"
}

#line 978 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
#line 978 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_3)
#line 978 "erl_code_util.m"
{
#line 980 "erl_code_util.m"
  {
#line 980 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 980 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Size_4;
#line 980 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 0)));
#line 980 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 1)));
#line 980 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_7_7;
#line 980 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_9_9;
#line 980 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_10_10;

#line 982 "erl_code_util.m"
    {
#line 982 "erl_code_util.m"
      erl_backend__erl_code_util__V_9_9 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Pattern_5);
    }
#line 982 "erl_code_util.m"
    erl_backend__erl_code_util__V_7_7 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_9_9);
#line 982 "erl_code_util.m"
    {
#line 982 "erl_code_util.m"
      erl_backend__erl_code_util__V_10_10 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_6);
    }
#line 982 "erl_code_util.m"
    erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_7_7 + erl_backend__erl_code_util__V_10_10);
#line 980 "erl_code_util.m"
    return erl_backend__erl_code_util__Size_4;
#line 980 "erl_code_util.m"
  }
#line 978 "erl_code_util.m"
}

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 986 "erl_code_util.m"
{
#line 986 "erl_code_util.m"
  {
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 986 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 986 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
  }
#line 986 "erl_code_util.m"
}

#line 976 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
#line 976 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 976 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 976 "erl_code_util.m"
{
#line 976 "erl_code_util.m"
  {
#line 976 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 976 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 976 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 976 "erl_code_util.m"
    {
#line 976 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_case_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 976 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 976 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 976 "erl_code_util.m"
  }
#line 976 "erl_code_util.m"
}

#line 974 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
#line 974 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_3)
#line 974 "erl_code_util.m"
{
#line 976 "erl_code_util.m"
  {
#line 976 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 976 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 976 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_15;
#line 976 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_5_5;
#line 976 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_6_6;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_V_5_5;

#line 976 "erl_code_util.m"
    {
#line 976 "erl_code_util.m"
      erl_backend__erl_code_util__V_6_6 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[15], erl_backend__erl_code_util__Cases_3);
    }
#line 2009 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_V_5_5 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_15, erl_backend__erl_code_util__TypeCtorInfo_6_15, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[16], erl_backend__erl_code_util__V_6_6, ((MR_Box) ((MR_Integer) 0)));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_5_5);
#line 976 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_5_5);
#line 976 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 976 "erl_code_util.m"
  }
#line 974 "erl_code_util.m"
}

#line 968 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
#line 968 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1)
#line 968 "erl_code_util.m"
{
#line 970 "erl_code_util.m"
  {
#line 970 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 970 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;

#line 970 "erl_code_util.m"
    if (((MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 971 "erl_code_util.m"
      erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 970 "erl_code_util.m"
    else
#line 970 "erl_code_util.m"
      if (((MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 972 "erl_code_util.m"
        {
#line 972 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 972 "erl_code_util.m"
          {
#line 972 "erl_code_util.m"
            return erl_backend__erl_code_util__HeadVar__2_2 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_5);
          }
#line 972 "erl_code_util.m"
        }
#line 970 "erl_code_util.m"
      else
#line 970 "erl_code_util.m"
        erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 970 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 970 "erl_code_util.m"
  }
#line 968 "erl_code_util.m"
}

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 986 "erl_code_util.m"
{
#line 986 "erl_code_util.m"
  {
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 986 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 986 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
  }
#line 986 "erl_code_util.m"
}

#line 879 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 879 "erl_code_util.m"
{
#line 879 "erl_code_util.m"
  {
#line 879 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 879 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 879 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 879 "erl_code_util.m"
    {
#line 879 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 879 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 879 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 879 "erl_code_util.m"
  }
#line 879 "erl_code_util.m"
}

#line 947 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
#line 947 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_3)
#line 947 "erl_code_util.m"
{
#line 961 "erl_code_util.m"
  {
#line 961 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 961 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Size_4;

#line 961 "erl_code_util.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 964 "erl_code_util.m"
      {
#line 964 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_27;
#line 964 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 1)));
#line 964 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_16_16;
#line 964 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18;
#line 986 "erl_code_util.m"
        MR_Box erl_backend__erl_code_util__conv2_V_16_16;

#line 879 "erl_code_util.m"
        {
#line 879 "erl_code_util.m"
          erl_backend__erl_code_util__V_18_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[13], erl_backend__erl_code_util__Exprs_14);
        }
#line 2172 "erl_backend.erl_code_util.c"
        erl_backend__erl_code_util__TypeCtorInfo_6_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 986 "erl_code_util.m"
        {
#line 986 "erl_code_util.m"
          erl_backend__erl_code_util__conv2_V_16_16 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_27, erl_backend__erl_code_util__TypeCtorInfo_6_27, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[14], erl_backend__erl_code_util__V_18_18, ((MR_Box) ((MR_Integer) 0)));
        }
#line 986 "erl_code_util.m"
        erl_backend__erl_code_util__V_16_16 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_16_16);
#line 965 "erl_code_util.m"
        erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_16_16);
#line 964 "erl_code_util.m"
      }
#line 961 "erl_code_util.m"
    else
#line 962 "erl_code_util.m"
      erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 961 "erl_code_util.m"
    return erl_backend__erl_code_util__Size_4;
#line 961 "erl_code_util.m"
  }
#line 947 "erl_code_util.m"
}

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 986 "erl_code_util.m"
{
#line 986 "erl_code_util.m"
  {
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 986 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 986 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
  }
#line 986 "erl_code_util.m"
}

#line 945 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
#line 945 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 945 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 945 "erl_code_util.m"
{
#line 945 "erl_code_util.m"
  {
#line 945 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 945 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 945 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 945 "erl_code_util.m"
    {
#line 945 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 945 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 945 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 945 "erl_code_util.m"
  }
#line 945 "erl_code_util.m"
}

#line 943 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
#line 943 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Terms_3)
#line 943 "erl_code_util.m"
{
#line 945 "erl_code_util.m"
  {
#line 945 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 945 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 945 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
#line 945 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

#line 945 "erl_code_util.m"
    {
#line 945 "erl_code_util.m"
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[11], erl_backend__erl_code_util__Terms_3);
    }
#line 2287 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[12], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
#line 945 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 945 "erl_code_util.m"
  }
#line 943 "erl_code_util.m"
}

#line 986 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 986 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 986 "erl_code_util.m"
{
#line 986 "erl_code_util.m"
  {
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 986 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 986 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 986 "erl_code_util.m"
  }
#line 986 "erl_code_util.m"
}

#line 879 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 879 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 879 "erl_code_util.m"
{
#line 879 "erl_code_util.m"
  {
#line 879 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 879 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 879 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 879 "erl_code_util.m"
    {
#line 879 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 879 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 879 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 879 "erl_code_util.m"
  }
#line 879 "erl_code_util.m"
}

#line 877 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
#line 877 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs_3)
#line 877 "erl_code_util.m"
{
#line 879 "erl_code_util.m"
  {
#line 879 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 879 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 879 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
#line 879 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 986 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

#line 879 "erl_code_util.m"
    {
#line 879 "erl_code_util.m"
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[9], erl_backend__erl_code_util__Exprs_3);
    }
#line 2394 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 986 "erl_code_util.m"
    {
#line 986 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[10], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
#line 986 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
#line 879 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 879 "erl_code_util.m"
  }
#line 877 "erl_code_util.m"
}

#line 866 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
#line 866 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch_4,
#line 866 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 866 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
#line 866 "erl_code_util.m"
{
#line 869 "erl_code_util.m"
  {
#line 869 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 869 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 0)));
#line 869 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 1)));
#line 869 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 2)));
#line 869 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11;
#line 869 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12;

#line 871 "erl_code_util.m"
    {
#line 871 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternA_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, &erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11);
    }
#line 872 "erl_code_util.m"
    {
#line 872 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternB_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11, &erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12);
    }
#line 873 "erl_code_util.m"
    {
#line 873 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
#line 873 "erl_code_util.m"
      return;
    }
#line 869 "erl_code_util.m"
  }
#line 866 "erl_code_util.m"
}

#line 858 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
#line 858 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_4,
#line 858 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 858 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
#line 858 "erl_code_util.m"
{
#line 861 "erl_code_util.m"
  {
#line 861 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 861 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 0)));
#line 861 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 1)));
#line 861 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;

#line 863 "erl_code_util.m"
    {
#line 863 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Pattern_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8, &erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10);
    }
#line 864 "erl_code_util.m"
    {
#line 864 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
#line 864 "erl_code_util.m"
      return;
    }
#line 861 "erl_code_util.m"
  }
#line 858 "erl_code_util.m"
}

#line 856 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 856 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 856 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 856 "erl_code_util.m"
{
#line 856 "erl_code_util.m"
  {
#line 856 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 856 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9;

#line 856 "erl_code_util.m"
    {
#line 856 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_case_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9);
    }
#line 856 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9));
#line 856 "erl_code_util.m"
  }
#line 856 "erl_code_util.m"
}

#line 852 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
#line 852 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_4,
#line 852 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
#line 852 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7)
#line 852 "erl_code_util.m"
{
#line 855 "erl_code_util.m"
  {
#line 855 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 856 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7;

#line 856 "erl_code_util.m"
    {
#line 856 "erl_code_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[8], erl_backend__erl_code_util__Cases_4, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
    }
#line 856 "erl_code_util.m"
    *erl_backend__erl_code_util__STATE_VARIABLE_Set_7 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
#line 855 "erl_code_util.m"
  }
#line 852 "erl_code_util.m"
}

#line 806 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 806 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 806 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 806 "erl_code_util.m"
{
#line 806 "erl_code_util.m"
  {
#line 806 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 806 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17;

#line 806 "erl_code_util.m"
    {
#line 806 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17);
    }
#line 806 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17));
#line 806 "erl_code_util.m"
  }
#line 806 "erl_code_util.m"
}

#line 844 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
#line 844 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause_4,
#line 844 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 844 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
#line 844 "erl_code_util.m"
{
#line 847 "erl_code_util.m"
  {
#line 847 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 847 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 0)));
#line 847 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 1)));
#line 847 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;
#line 806 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10;

#line 806 "erl_code_util.m"
    {
#line 806 "erl_code_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[7], erl_backend__erl_code_util__Pattern_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
    }
#line 806 "erl_code_util.m"
    erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
#line 850 "erl_code_util.m"
    {
#line 850 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
#line 850 "erl_code_util.m"
      return;
    }
#line 847 "erl_code_util.m"
  }
#line 844 "erl_code_util.m"
}

#line 831 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
#line 831 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target_4,
#line 831 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 831 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
#line 831 "erl_code_util.m"
{
#line 836 "erl_code_util.m"
  {
#line 836 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 836 "erl_code_util.m"
    if (((MR_tag((MR_Word) erl_backend__erl_code_util__Target_4)) == (MR_mktag((MR_Integer) 2))))
#line 837 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
#line 836 "erl_code_util.m"
    else
#line 836 "erl_code_util.m"
      if (((MR_tag((MR_Word) erl_backend__erl_code_util__Target_4)) == (MR_mktag((MR_Integer) 1))))
#line 840 "erl_code_util.m"
        {
#line 840 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target_4, (MR_Integer) 0)));

#line 841 "erl_code_util.m"
          {
#line 841 "erl_code_util.m"
            erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
#line 841 "erl_code_util.m"
            return;
          }
#line 840 "erl_code_util.m"
        }
#line 836 "erl_code_util.m"
      else
#line 836 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
#line 836 "erl_code_util.m"
  }
#line 831 "erl_code_util.m"
}

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 736 "erl_code_util.m"
{
#line 736 "erl_code_util.m"
  {
#line 736 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 736 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

#line 736 "erl_code_util.m"
    {
#line 736 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
#line 736 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
#line 736 "erl_code_util.m"
  }
#line 736 "erl_code_util.m"
}

#line 808 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
#line 808 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_4,
#line 808 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
#line 808 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17)
#line 808 "erl_code_util.m"
{
#line 813 "erl_code_util.m"
  {
#line 813 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 813 "erl_code_util.m"
    if ((erl_backend__erl_code_util__Term_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
    else
#line 813 "erl_code_util.m"
      if (((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 1))))
#line 817 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
      else
#line 813 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 2))))
#line 813 "erl_code_util.m"
          *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
        else
#line 813 "erl_code_util.m"
          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 819 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
          else
#line 813 "erl_code_util.m"
            if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 818 "erl_code_util.m"
              *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
            else
#line 813 "erl_code_util.m"
              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 815 "erl_code_util.m"
                *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
              else
#line 813 "erl_code_util.m"
                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 821 "erl_code_util.m"
                  *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
                else
#line 813 "erl_code_util.m"
                  if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 814 "erl_code_util.m"
                    *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
                  else
#line 813 "erl_code_util.m"
                    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 816 "erl_code_util.m"
                      *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 813 "erl_code_util.m"
                    else
#line 813 "erl_code_util.m"
                      if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 824 "erl_code_util.m"
                        {
#line 824 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));
#line 736 "erl_code_util.m"
                          MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17;

#line 736 "erl_code_util.m"
                          {
#line 736 "erl_code_util.m"
                            mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[6], erl_backend__erl_code_util__Exprs_14, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
                          }
#line 736 "erl_code_util.m"
                          *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
#line 824 "erl_code_util.m"
                        }
#line 813 "erl_code_util.m"
                      else
#line 827 "erl_code_util.m"
                        {
#line 827 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));

#line 828 "erl_code_util.m"
                          {
#line 828 "erl_code_util.m"
                            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Var_15, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16, erl_backend__erl_code_util__STATE_VARIABLE_Set_17);
#line 828 "erl_code_util.m"
                            return;
                          }
#line 827 "erl_code_util.m"
                        }
#line 813 "erl_code_util.m"
  }
#line 808 "erl_code_util.m"
}

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 736 "erl_code_util.m"
{
#line 736 "erl_code_util.m"
  {
#line 736 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 736 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23;

#line 736 "erl_code_util.m"
    {
#line 736 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23);
    }
#line 736 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23));
#line 736 "erl_code_util.m"
  }
#line 736 "erl_code_util.m"
}

#line 736 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 736 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 736 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 736 "erl_code_util.m"
{
#line 736 "erl_code_util.m"
  {
#line 736 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 736 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

#line 736 "erl_code_util.m"
    {
#line 736 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
#line 736 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
#line 736 "erl_code_util.m"
  }
#line 736 "erl_code_util.m"
}

#line 738 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
#line 738 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_4,
#line 738 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
#line 738 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23)
#line 738 "erl_code_util.m"
{
#line 743 "erl_code_util.m"
  while (MR_TRUE)
#line 743 "erl_code_util.m"
    {
#line 743 "erl_code_util.m"
      /* tailcall optimized into a loop */
#line 743 "erl_code_util.m"
      {
#line 743 "erl_code_util.m"
        MR_bool erl_backend__erl_code_util__succeeded;

#line 743 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 1))))
#line 743 "erl_code_util.m"
          {
#line 743 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Exprs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));
#line 736 "erl_code_util.m"
            MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23;

#line 736 "erl_code_util.m"
            {
#line 736 "erl_code_util.m"
              mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[4], erl_backend__erl_code_util__Exprs_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
            }
#line 736 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
#line 743 "erl_code_util.m"
          }
#line 743 "erl_code_util.m"
        else
#line 743 "erl_code_util.m"
          if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 0))))
#line 764 "erl_code_util.m"
            {
#line 764 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Clause_13 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_4), (MR_Integer) 0);

#line 765 "erl_code_util.m"
              {
#line 765 "erl_code_util.m"
                erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(erl_backend__erl_code_util__Clause_13, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 765 "erl_code_util.m"
                return;
              }
#line 764 "erl_code_util.m"
            }
#line 743 "erl_code_util.m"
          else
#line 743 "erl_code_util.m"
            if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 2))))
#line 746 "erl_code_util.m"
              {
#line 746 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));

#line 747 "erl_code_util.m"
                {
#line 747 "erl_code_util.m"
                  erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Term_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 747 "erl_code_util.m"
                  return;
                }
#line 746 "erl_code_util.m"
              }
#line 743 "erl_code_util.m"
            else
#line 743 "erl_code_util.m"
              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 756 "erl_code_util.m"
                {
#line 756 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;
#line 756 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 756 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
#line 756 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 757 "erl_code_util.m"
                  {
#line 757 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_46, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37);
                  }
#line 758 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 758 "erl_code_util.m"
                  {
#line 758 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_47;
#line 758 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;

#line 758 "erl_code_util.m"
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 758 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 758 "erl_code_util.m"
                  }
#line 758 "erl_code_util.m"
                  continue;
#line 756 "erl_code_util.m"
                }
#line 743 "erl_code_util.m"
              else
#line 743 "erl_code_util.m"
                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 760 "erl_code_util.m"
                  {
#line 760 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__CallTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 760 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__ExprsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 760 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35;
#line 736 "erl_code_util.m"
                    MR_Box erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23;

#line 761 "erl_code_util.m"
                    {
#line 761 "erl_code_util.m"
                      erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(erl_backend__erl_code_util__CallTarget_11, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35);
                    }
#line 736 "erl_code_util.m"
                    {
#line 736 "erl_code_util.m"
                      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[5], erl_backend__erl_code_util__ExprsB_12, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35)), &erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
                    }
#line 736 "erl_code_util.m"
                    *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
#line 760 "erl_code_util.m"
                  }
#line 743 "erl_code_util.m"
                else
#line 743 "erl_code_util.m"
                  if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 767 "erl_code_util.m"
                    {
#line 767 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 767 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32;
#line 767 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__ExprA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 768 "erl_code_util.m"
                      {
#line 768 "erl_code_util.m"
                        erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_49, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32);
                      }
#line 769 "erl_code_util.m"
                      {
#line 769 "erl_code_util.m"
                        erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_14, erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 769 "erl_code_util.m"
                        return;
                      }
#line 767 "erl_code_util.m"
                    }
#line 743 "erl_code_util.m"
                  else
#line 743 "erl_code_util.m"
                    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 749 "erl_code_util.m"
                      {
#line 749 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 749 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprB_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 749 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

#line 750 "erl_code_util.m"
                        {
#line 750 "erl_code_util.m"
                          erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40);
                        }
#line 751 "erl_code_util.m"
                        /* direct tailcall eliminated */
#line 751 "erl_code_util.m"
                        {
#line 751 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_9;
#line 751 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

#line 751 "erl_code_util.m"
                          erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 751 "erl_code_util.m"
                          erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 751 "erl_code_util.m"
                        }
#line 751 "erl_code_util.m"
                        continue;
#line 749 "erl_code_util.m"
                      }
#line 743 "erl_code_util.m"
                    else
#line 743 "erl_code_util.m"
                      if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 798 "erl_code_util.m"
                        *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
#line 743 "erl_code_util.m"
                      else
#line 743 "erl_code_util.m"
                        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 794 "erl_code_util.m"
                          {
#line 794 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__Cases_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 795 "erl_code_util.m"
                            {
#line 795 "erl_code_util.m"
                              erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_55, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 795 "erl_code_util.m"
                              return;
                            }
#line 794 "erl_code_util.m"
                          }
#line 743 "erl_code_util.m"
                        else
#line 743 "erl_code_util.m"
                          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 797 "erl_code_util.m"
                            *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
#line 743 "erl_code_util.m"
                          else
#line 743 "erl_code_util.m"
                            if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 790 "erl_code_util.m"
                              {
#line 790 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;
#line 790 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__ExprA_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 790 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__ExprB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

#line 791 "erl_code_util.m"
                                {
#line 791 "erl_code_util.m"
                                  erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_53, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25);
                                }
#line 792 "erl_code_util.m"
                                /* direct tailcall eliminated */
#line 792 "erl_code_util.m"
                                {
#line 792 "erl_code_util.m"
                                  MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_54;
#line 792 "erl_code_util.m"
                                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;

#line 792 "erl_code_util.m"
                                  erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 792 "erl_code_util.m"
                                  erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 792 "erl_code_util.m"
                                }
#line 792 "erl_code_util.m"
                                continue;
#line 790 "erl_code_util.m"
                              }
#line 743 "erl_code_util.m"
                            else
#line 743 "erl_code_util.m"
                              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 787 "erl_code_util.m"
                                {
#line 787 "erl_code_util.m"
                                  MR_Word erl_backend__erl_code_util__ExprA_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 788 "erl_code_util.m"
                                  /* direct tailcall eliminated */
#line 788 "erl_code_util.m"
                                  {
#line 788 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_52;

#line 788 "erl_code_util.m"
                                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 788 "erl_code_util.m"
                                  }
#line 788 "erl_code_util.m"
                                  continue;
#line 787 "erl_code_util.m"
                                }
#line 743 "erl_code_util.m"
                              else
#line 743 "erl_code_util.m"
                                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 771 "erl_code_util.m"
                                  {
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__MaybeCatch_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__MaybeAfter_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 4)));
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28;
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__ExprA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 771 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__Cases_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

#line 772 "erl_code_util.m"
                                    {
#line 772 "erl_code_util.m"
                                      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_50, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28);
                                    }
#line 773 "erl_code_util.m"
                                    {
#line 773 "erl_code_util.m"
                                      erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_51, erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28, &erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29);
                                    }
#line 777 "erl_code_util.m"
                                    if ((erl_backend__erl_code_util__MaybeCatch_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "erl_code_util.m"
                                      erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30 = erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
#line 777 "erl_code_util.m"
                                    else
#line 775 "erl_code_util.m"
                                      {
#line 775 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__Catch_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_15, (MR_Integer) 0)));

#line 776 "erl_code_util.m"
                                        {
#line 776 "erl_code_util.m"
                                          erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(erl_backend__erl_code_util__Catch_17, erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29, &erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30);
                                        }
#line 775 "erl_code_util.m"
                                      }
#line 783 "erl_code_util.m"
                                    if ((erl_backend__erl_code_util__MaybeAfter_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "erl_code_util.m"
                                      *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
#line 783 "erl_code_util.m"
                                    else
#line 781 "erl_code_util.m"
                                      {
#line 781 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__After_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_16, (MR_Integer) 0)));

#line 782 "erl_code_util.m"
                                        /* direct tailcall eliminated */
#line 782 "erl_code_util.m"
                                        {
#line 782 "erl_code_util.m"
                                          MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__After_18;
#line 782 "erl_code_util.m"
                                          MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;

#line 782 "erl_code_util.m"
                                          erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 782 "erl_code_util.m"
                                          erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 782 "erl_code_util.m"
                                        }
#line 782 "erl_code_util.m"
                                        continue;
#line 781 "erl_code_util.m"
                                      }
#line 771 "erl_code_util.m"
                                  }
#line 743 "erl_code_util.m"
                                else
#line 753 "erl_code_util.m"
                                  {
#line 753 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__ExprA_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 753 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util___Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 754 "erl_code_util.m"
                                    /* direct tailcall eliminated */
#line 754 "erl_code_util.m"
                                    {
#line 754 "erl_code_util.m"
                                      MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_44;

#line 754 "erl_code_util.m"
                                      erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 754 "erl_code_util.m"
                                    }
#line 754 "erl_code_util.m"
                                    continue;
#line 753 "erl_code_util.m"
                                  }
#line 743 "erl_code_util.m"
      }
#line 743 "erl_code_util.m"
      break;
#line 743 "erl_code_util.m"
    }
#line 738 "erl_code_util.m"
}

#line 709 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
#line 709 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 709 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch0_5,
#line 709 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Catch_6)
#line 709 "erl_code_util.m"
{
#line 712 "erl_code_util.m"
  {
#line 712 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 0)));
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 1)));
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 2)));
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA_10;
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB_11;
#line 712 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_12;

#line 714 "erl_code_util.m"
    {
#line 714 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternA0_7, &erl_backend__erl_code_util__PatternA_10);
    }
#line 715 "erl_code_util.m"
    {
#line 715 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternB0_8, &erl_backend__erl_code_util__PatternB_11);
    }
#line 716 "erl_code_util.m"
    {
#line 716 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_12);
    }
#line 717 "erl_code_util.m"
    {
#line 717 "erl_code_util.m"
      MR_Word base;
#line 717 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 717 "erl_code_util.m"
      *erl_backend__erl_code_util__Catch_6 = base;
#line 717 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__PatternA_10));
#line 717 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__PatternB_11));
#line 717 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Expr_12));
#line 717 "erl_code_util.m"
    }
#line 712 "erl_code_util.m"
  }
#line 709 "erl_code_util.m"
}

#line 700 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
#line 700 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 700 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case0_5,
#line 700 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Case_6)
#line 700 "erl_code_util.m"
{
#line 703 "erl_code_util.m"
  {
#line 703 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 703 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 0)));
#line 703 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 1)));
#line 703 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_9;
#line 703 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_10;

#line 705 "erl_code_util.m"
    {
#line 705 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
#line 706 "erl_code_util.m"
    {
#line 706 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
#line 707 "erl_code_util.m"
    {
#line 707 "erl_code_util.m"
      MR_Word base;
#line 707 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "erl_code_util.m"
      *erl_backend__erl_code_util__Case_6 = base;
#line 707 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
#line 707 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 707 "erl_code_util.m"
    }
#line 703 "erl_code_util.m"
  }
#line 700 "erl_code_util.m"
}

#line 698 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
#line 698 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 698 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 698 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 698 "erl_code_util.m"
{
#line 698 "erl_code_util.m"
  {
#line 698 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 698 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Case_6;

#line 698 "erl_code_util.m"
    {
#line 698 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Case_6);
    }
#line 698 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Case_6));
#line 698 "erl_code_util.m"
  }
#line 698 "erl_code_util.m"
}

#line 694 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
#line 694 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 694 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases0_5,
#line 694 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Cases_6)
#line 694 "erl_code_util.m"
{
#line 697 "erl_code_util.m"
  {
#line 697 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 697 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
#line 697 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 698 "erl_code_util.m"
    {
#line 698 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 698 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
#line 698 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1));
#line 698 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 698 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 698 "erl_code_util.m"
    }
#line 3480 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
#line 698 "erl_code_util.m"
    {
#line 698 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Cases0_5, erl_backend__erl_code_util__Cases_6);
#line 698 "erl_code_util.m"
      return;
    }
#line 697 "erl_code_util.m"
  }
#line 694 "erl_code_util.m"
}

#line 642 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
#line 642 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 642 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 642 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 642 "erl_code_util.m"
{
#line 642 "erl_code_util.m"
  {
#line 642 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 642 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Term_6;

#line 642 "erl_code_util.m"
    {
#line 642 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Term_6);
    }
#line 642 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Term_6));
#line 642 "erl_code_util.m"
  }
#line 642 "erl_code_util.m"
}

#line 685 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
#line 685 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 685 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause0_5,
#line 685 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Clause_6)
#line 685 "erl_code_util.m"
{
#line 688 "erl_code_util.m"
  {
#line 688 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_17;
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 0)));
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 1)));
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_9;
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_10;
#line 688 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14;

#line 642 "erl_code_util.m"
    {
#line 642 "erl_code_util.m"
      erl_backend__erl_code_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 642 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
#line 642 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1));
#line 642 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 642 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 642 "erl_code_util.m"
    }
#line 3566 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_17 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0;
#line 642 "erl_code_util.m"
    {
#line 642 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__V_14_14, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
#line 691 "erl_code_util.m"
    {
#line 691 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
#line 692 "erl_code_util.m"
    {
#line 692 "erl_code_util.m"
      MR_Word base;
#line 692 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "erl_code_util.m"
      *erl_backend__erl_code_util__Clause_6 = base;
#line 692 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
#line 692 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 692 "erl_code_util.m"
    }
#line 688 "erl_code_util.m"
  }
#line 685 "erl_code_util.m"
}

#line 670 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
#line 670 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 670 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target0_5,
#line 670 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Target_6)
#line 670 "erl_code_util.m"
{
#line 677 "erl_code_util.m"
  {
#line 677 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 677 "erl_code_util.m"
    if (((MR_tag((MR_Word) erl_backend__erl_code_util__Target0_5)) == (MR_mktag((MR_Integer) 1))))
#line 680 "erl_code_util.m"
      {
#line 680 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target0_5, (MR_Integer) 0)));
#line 680 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr_10;

#line 681 "erl_code_util.m"
        {
#line 681 "erl_code_util.m"
          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_10);
        }
#line 682 "erl_code_util.m"
        {
#line 682 "erl_code_util.m"
          MR_Word base;
#line 682 "erl_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "erl_code_util.m"
          *erl_backend__erl_code_util__Target_6 = base;
#line 682 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 682 "erl_code_util.m"
        }
#line 680 "erl_code_util.m"
      }
#line 677 "erl_code_util.m"
    else
#line 678 "erl_code_util.m"
      *erl_backend__erl_code_util__Target_6 = erl_backend__erl_code_util__Target0_5;
#line 677 "erl_code_util.m"
  }
#line 670 "erl_code_util.m"
}

#line 558 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 558 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 558 "erl_code_util.m"
{
#line 558 "erl_code_util.m"
  {
#line 558 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 558 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

#line 558 "erl_code_util.m"
    {
#line 558 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
#line 558 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
#line 558 "erl_code_util.m"
  }
#line 558 "erl_code_util.m"
}

#line 644 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
#line 644 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 644 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term0_5,
#line 644 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Term_6)
#line 644 "erl_code_util.m"
{
#line 658 "erl_code_util.m"
  {
#line 658 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 658 "erl_code_util.m"
    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 661 "erl_code_util.m"
      {
#line 661 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_27;
#line 661 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Exprs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
#line 661 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Exprs_16;
#line 661 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_24_24;

#line 558 "erl_code_util.m"
        {
#line 558 "erl_code_util.m"
          erl_backend__erl_code_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 558 "erl_code_util.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
#line 558 "erl_code_util.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1));
#line 558 "erl_code_util.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 558 "erl_code_util.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 558 "erl_code_util.m"
        }
#line 3723 "erl_backend.erl_code_util.c"
        erl_backend__erl_code_util__TypeCtorInfo_10_27 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 558 "erl_code_util.m"
        {
#line 558 "erl_code_util.m"
          mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__V_24_24, erl_backend__erl_code_util__Exprs0_15, &erl_backend__erl_code_util__Exprs_16);
        }
#line 663 "erl_code_util.m"
        {
#line 663 "erl_code_util.m"
          MR_Word base;
#line 663 "erl_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "erl_code_util.m"
          *erl_backend__erl_code_util__Term_6 = base;
#line 663 "erl_code_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 663 "erl_code_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Exprs_16));
#line 663 "erl_code_util.m"
        }
#line 661 "erl_code_util.m"
      }
#line 658 "erl_code_util.m"
    else
#line 658 "erl_code_util.m"
      if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 665 "erl_code_util.m"
        {
#line 665 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
#line 665 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Var_18;
#line 666 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Var1_19;
#line 666 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 666 "erl_code_util.m"
          MR_Box erl_backend__erl_code_util__conv1_Var1_19;

#line 666 "erl_code_util.m"
          {
#line 666 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = mercury__map__search_3_p_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__Subn_4, ((MR_Box) (erl_backend__erl_code_util__Var0_17)), &erl_backend__erl_code_util__conv1_Var1_19);
          }
#line 666 "erl_code_util.m"
          if (erl_backend__erl_code_util__succeeded)
#line 666 "erl_code_util.m"
            {
#line 666 "erl_code_util.m"
              erl_backend__erl_code_util__Var1_19 = ((MR_Word) erl_backend__erl_code_util__conv1_Var1_19);
#line 666 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 666 "erl_code_util.m"
            }
#line 666 "erl_code_util.m"
          if (erl_backend__erl_code_util__succeeded)
#line 666 "erl_code_util.m"
            erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var1_19;
#line 666 "erl_code_util.m"
          else
#line 666 "erl_code_util.m"
            erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var0_17;
#line 667 "erl_code_util.m"
          {
#line 667 "erl_code_util.m"
            MR_Word base;
#line 667 "erl_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "erl_code_util.m"
            *erl_backend__erl_code_util__Term_6 = base;
#line 667 "erl_code_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 667 "erl_code_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Var_18));
#line 667 "erl_code_util.m"
          }
#line 665 "erl_code_util.m"
        }
#line 658 "erl_code_util.m"
      else
#line 659 "erl_code_util.m"
        *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
#line 658 "erl_code_util.m"
  }
#line 644 "erl_code_util.m"
}

#line 558 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 558 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 558 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 558 "erl_code_util.m"
{
#line 558 "erl_code_util.m"
  {
#line 558 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 558 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

#line 558 "erl_code_util.m"
    {
#line 558 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
#line 558 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
#line 558 "erl_code_util.m"
  }
#line 558 "erl_code_util.m"
}

#line 554 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
#line 554 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 554 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs0_5,
#line 554 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Exprs_6)
#line 554 "erl_code_util.m"
{
#line 557 "erl_code_util.m"
  {
#line 557 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 557 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
#line 557 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 558 "erl_code_util.m"
    {
#line 558 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 558 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
#line 558 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1));
#line 558 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 558 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 558 "erl_code_util.m"
    }
#line 3875 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 558 "erl_code_util.m"
    {
#line 558 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Exprs0_5, erl_backend__erl_code_util__Exprs_6);
#line 558 "erl_code_util.m"
      return;
    }
#line 557 "erl_code_util.m"
  }
#line 554 "erl_code_util.m"
}

#line 543 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OldVar_6,
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
#line 543 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
#line 543 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
#line 543 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14)
#line 543 "erl_code_util.m"
{
#line 546 "erl_code_util.m"
  {
#line 546 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 546 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeInfo_21_21;
#line 546 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NewVar_10;
#line 549 "erl_code_util.m"
    MR_String erl_backend__erl_code_util__Name_9;

#line 547 "erl_code_util.m"
    {
#line 547 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__OldVar_6, &erl_backend__erl_code_util__Name_9);
    }
#line 549 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 548 "erl_code_util.m"
      {
#line 548 "erl_code_util.m"
        {
#line 548 "erl_code_util.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_9, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
#line 548 "erl_code_util.m"
      }
#line 549 "erl_code_util.m"
    else
#line 550 "erl_code_util.m"
      {
#line 550 "erl_code_util.m"
        {
#line 550 "erl_code_util.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
#line 550 "erl_code_util.m"
      }
#line 3942 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeInfo_21_21 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 552 "erl_code_util.m"
    {
#line 552 "erl_code_util.m"
      mercury__map__det_insert_4_p_0(erl_backend__erl_code_util__TypeInfo_21_21, erl_backend__erl_code_util__TypeInfo_21_21, ((MR_Box) (erl_backend__erl_code_util__OldVar_6)), ((MR_Box) (erl_backend__erl_code_util__NewVar_10)), erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);
#line 552 "erl_code_util.m"
      return;
    }
#line 546 "erl_code_util.m"
  }
#line 543 "erl_code_util.m"
}

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 517 "erl_code_util.m"
{
#line 517 "erl_code_util.m"
  {
#line 517 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 517 "erl_code_util.m"
    MR_builtin_longjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0, 1);
#line 517 "erl_code_util.m"
  }
#line 517 "erl_code_util.m"
}

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 518 "erl_code_util.m"
{
#line 518 "erl_code_util.m"
  {
#line 518 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 518 "erl_code_util.m"
    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12 = ((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12);
#line 518 "erl_code_util.m"
    {
#line 518 "erl_code_util.m"
      erl_backend__erl_code_util__non_variable_term_1_p_0_2(erl_backend__erl_code_util__env_ptr);
#line 518 "erl_code_util.m"
      return;
    }
#line 518 "erl_code_util.m"
  }
#line 518 "erl_code_util.m"
}

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 517 "erl_code_util.m"
{
#line 517 "erl_code_util.m"
  {
#line 517 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 518 "erl_code_util.m"
    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 518 "erl_code_util.m"
    if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
#line 518 "erl_code_util.m"
      {
#line 518 "erl_code_util.m"
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12, (MR_Integer) 0)));
#line 517 "erl_code_util.m"
        {
#line 520 "erl_code_util.m"
          {
#line 520 "erl_code_util.m"
            (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11);
          }
#line 519 "erl_code_util.m"
          (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
#line 519 "erl_code_util.m"
          if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
#line 519 "erl_code_util.m"
            {
#line 519 "erl_code_util.m"
              erl_backend__erl_code_util__non_variable_term_1_p_0_1(erl_backend__erl_code_util__env_ptr);
#line 519 "erl_code_util.m"
              return;
            }
#line 517 "erl_code_util.m"
        }
#line 518 "erl_code_util.m"
      }
#line 517 "erl_code_util.m"
  }
#line 517 "erl_code_util.m"
}

#line 517 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
#line 517 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 517 "erl_code_util.m"
{
#line 517 "erl_code_util.m"
  {
#line 517 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 517 "erl_code_util.m"
    if (MR_builtin_setjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0) == 0)
#line 517 "erl_code_util.m"
      {
#line 517 "erl_code_util.m"
        {
#line 518 "erl_code_util.m"
          {
#line 518 "erl_code_util.m"
            mercury__list__member_2_p_1((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, &(erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12, (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10, erl_backend__erl_code_util__non_variable_term_1_p_0_3, erl_backend__erl_code_util__env_ptr);
          }
#line 517 "erl_code_util.m"
        }
#line 517 "erl_code_util.m"
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
#line 517 "erl_code_util.m"
      }
#line 517 "erl_code_util.m"
    else
#line 517 "erl_code_util.m"
      (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 517 "erl_code_util.m"
  }
#line 517 "erl_code_util.m"
}

#line 506 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
#line 506 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_2)
#line 506 "erl_code_util.m"
{
#line 506 "erl_code_util.m"
  {
#line 506 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s erl_backend__erl_code_util__env;

#line 509 "erl_code_util.m"
    if (((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 1))))
#line 509 "erl_code_util.m"
      (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
    else
#line 509 "erl_code_util.m"
      if (((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 2))))
#line 510 "erl_code_util.m"
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
      else
#line 509 "erl_code_util.m"
        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 515 "erl_code_util.m"
          (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
        else
#line 509 "erl_code_util.m"
          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 514 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
          else
#line 509 "erl_code_util.m"
            if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 512 "erl_code_util.m"
              (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
            else
#line 509 "erl_code_util.m"
              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 511 "erl_code_util.m"
                (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
              else
#line 509 "erl_code_util.m"
                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 513 "erl_code_util.m"
                  (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 509 "erl_code_util.m"
                else
#line 509 "erl_code_util.m"
                  if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 516 "erl_code_util.m"
                    {
#line 516 "erl_code_util.m"
                      (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 1)));
#line 517 "erl_code_util.m"
                      {
#line 517 "erl_code_util.m"
                        erl_backend__erl_code_util__non_variable_term_1_p_0_4(&erl_backend__erl_code_util__env);
                      }
#line 517 "erl_code_util.m"
                      (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
#line 516 "erl_code_util.m"
                    }
#line 509 "erl_code_util.m"
                  else
#line 509 "erl_code_util.m"
                    (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
#line 509 "erl_code_util.m"
    return (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
#line 506 "erl_code_util.m"
  }
#line 506 "erl_code_util.m"
}

#line 485 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
#line 485 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 485 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 485 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3)
#line 485 "erl_code_util.m"
{
#line 488 "erl_code_util.m"
  {
#line 488 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 488 "erl_code_util.m"
    if ((erl_backend__erl_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "erl_code_util.m"
      {
#line 488 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 488 "erl_code_util.m"
          {
#line 488 "erl_code_util.m"
            *erl_backend__erl_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 488 "erl_code_util.m"
          }
#line 488 "erl_code_util.m"
      }
#line 488 "erl_code_util.m"
    else
#line 489 "erl_code_util.m"
      {
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OC_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OCs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__IC_6;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ICs_7;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NC_8;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NCs_9;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OuterPat_10;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OuterExpr_11;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InnerPat_12;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InnerTerm_13;
#line 489 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_14_14;

#line 489 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 489 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 489 "erl_code_util.m"
          {
#line 489 "erl_code_util.m"
            erl_backend__erl_code_util__IC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 489 "erl_code_util.m"
            erl_backend__erl_code_util__ICs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 490 "erl_code_util.m"
            erl_backend__erl_code_util__OuterPat_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 0)));
#line 490 "erl_code_util.m"
            erl_backend__erl_code_util__OuterExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 1)));
#line 491 "erl_code_util.m"
            erl_backend__erl_code_util__InnerPat_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 0)));
#line 491 "erl_code_util.m"
            erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 1)));
#line 491 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 491 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 491 "erl_code_util.m"
              {
#line 491 "erl_code_util.m"
                erl_backend__erl_code_util__InnerTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__V_14_14, (MR_Integer) 0)));
#line 492 "erl_code_util.m"
                {
#line 492 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0(erl_backend__erl_code_util__InnerTerm_13);
                }
#line 489 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 489 "erl_code_util.m"
                  {
#line 496 "erl_code_util.m"
                    {
#line 496 "erl_code_util.m"
                      erl_backend__erl_code_util__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_util__InnerTerm_13, erl_backend__erl_code_util__OuterPat_10);
                    }
#line 497 "erl_code_util.m"
                    if (!(erl_backend__erl_code_util__succeeded))
#line 500 "erl_code_util.m"
                      {
#line 500 "erl_code_util.m"
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OuterPat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 501 "erl_code_util.m"
                          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OCs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "erl_code_util.m"
                      }
#line 489 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 489 "erl_code_util.m"
                      {
#line 503 "erl_code_util.m"
                        {
#line 503 "erl_code_util.m"
                          erl_backend__erl_code_util__NC_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "erl_code_util.m"
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 0) = ((MR_Box) (erl_backend__erl_code_util__InnerPat_12));
#line 503 "erl_code_util.m"
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 1) = ((MR_Box) (erl_backend__erl_code_util__OuterExpr_11));
#line 503 "erl_code_util.m"
                        }
#line 504 "erl_code_util.m"
                        {
#line 504 "erl_code_util.m"
                          erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OCs_5, erl_backend__erl_code_util__ICs_7, &erl_backend__erl_code_util__NCs_9);
                        }
#line 489 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 489 "erl_code_util.m"
                          {
#line 489 "erl_code_util.m"
                            {
#line 489 "erl_code_util.m"
                              MR_Word base;
#line 489 "erl_code_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "erl_code_util.m"
                              *erl_backend__erl_code_util__HeadVar__3_3 = base;
#line 489 "erl_code_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__NC_8));
#line 489 "erl_code_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__NCs_9));
#line 489 "erl_code_util.m"
                            }
#line 489 "erl_code_util.m"
                            erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 489 "erl_code_util.m"
                          }
#line 489 "erl_code_util.m"
                      }
#line 489 "erl_code_util.m"
                  }
#line 491 "erl_code_util.m"
              }
#line 489 "erl_code_util.m"
          }
#line 489 "erl_code_util.m"
      }
#line 488 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 488 "erl_code_util.m"
  }
#line 485 "erl_code_util.m"
}

#line 407 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_8,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
#line 407 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_10)
#line 407 "erl_code_util.m"
{
#line 410 "erl_code_util.m"
  {
#line 410 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 410 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Type_11;
#line 410 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12;

#line 411 "erl_code_util.m"
    {
#line 411 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__InstMap_8, erl_backend__erl_code_util__InstmapDelta_9, erl_backend__erl_code_util__Var_10);
    }
#line 410 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 410 "erl_code_util.m"
      {
#line 412 "erl_code_util.m"
        {
#line 412 "erl_code_util.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_10, &erl_backend__erl_code_util__Type_11);
        }
#line 413 "erl_code_util.m"
        {
#line 413 "erl_code_util.m"
          erl_backend__erl_code_util__V_12_12 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_11);
        }
#line 413 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_12_12 == (MR_Integer) 1);
#line 410 "erl_code_util.m"
      }
#line 410 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 410 "erl_code_util.m"
  }
#line 407 "erl_code_util.m"
}

#line 301 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
#line 301 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util___Num_5,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 301 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 301 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
#line 301 "erl_code_util.m"
{
#line 304 "erl_code_util.m"
  {
#line 304 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 304 "erl_code_util.m"
    {
#line 304 "erl_code_util.m"
      erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
#line 304 "erl_code_util.m"
      return;
    }
#line 304 "erl_code_util.m"
  }
#line 301 "erl_code_util.m"
}

#line 206 "erl_code_util.m"
MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0(void)
#line 206 "erl_code_util.m"
{
#line 1006 "erl_code_util.m"
  {
#line 1006 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 1006 "erl_code_util.m"
    return (MR_Integer) 4;
#line 1006 "erl_code_util.m"
  }
#line 206 "erl_code_util.m"
}

#line 202 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(
#line 202 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_3,
#line 202 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_4)
#line 202 "erl_code_util.m"
{
#line 464 "erl_code_util.m"
  {
#line 464 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 464 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr1_5;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_18_21;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OuterCond_8;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OuterCases_9;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerCond_10;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerCases_11;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerPreamble_12;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NewCases_15;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_17_17;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18;
#line 471 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19;

#line 472 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 472 "erl_code_util.m"
      {
#line 472 "erl_code_util.m"
        erl_backend__erl_code_util__OuterCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 1)));
#line 472 "erl_code_util.m"
        erl_backend__erl_code_util__OuterCases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 2)));
#line 476 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 1))))
#line 477 "erl_code_util.m"
          {
#line 477 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__OuterCondExprs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)));
#line 477 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__InnerCaseExpr_14;
#line 478 "erl_code_util.m"
            MR_Box erl_backend__erl_code_util__conv0_InnerCaseExpr_14;

#line 478 "erl_code_util.m"
            {
#line 478 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = mercury__list__split_last_3_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_code_util__OuterCondExprs_13, &erl_backend__erl_code_util__InnerPreamble_12, &erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
            }
#line 478 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 478 "erl_code_util.m"
              {
#line 478 "erl_code_util.m"
                erl_backend__erl_code_util__InnerCaseExpr_14 = ((MR_Word) erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
#line 478 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 478 "erl_code_util.m"
              }
#line 477 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 477 "erl_code_util.m"
              {
#line 479 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__InnerCaseExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 479 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 479 "erl_code_util.m"
                  {
#line 479 "erl_code_util.m"
                    erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 1)));
#line 479 "erl_code_util.m"
                    erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 2)));
#line 479 "erl_code_util.m"
                  }
#line 477 "erl_code_util.m"
              }
#line 477 "erl_code_util.m"
          }
#line 476 "erl_code_util.m"
        else
#line 476 "erl_code_util.m"
          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 474 "erl_code_util.m"
            {
#line 474 "erl_code_util.m"
              erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 1)));
#line 474 "erl_code_util.m"
              erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 2)));
#line 475 "erl_code_util.m"
              erl_backend__erl_code_util__InnerPreamble_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 474 "erl_code_util.m"
            }
#line 476 "erl_code_util.m"
          else
#line 476 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = MR_FALSE;
#line 471 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 471 "erl_code_util.m"
          {
#line 481 "erl_code_util.m"
            {
#line 481 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OuterCases_9, erl_backend__erl_code_util__InnerCases_11, &erl_backend__erl_code_util__NewCases_15);
            }
#line 471 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 471 "erl_code_util.m"
              {
#line 4563 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__TypeCtorInfo_18_21 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 483 "erl_code_util.m"
                erl_backend__erl_code_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "erl_code_util.m"
                {
#line 483 "erl_code_util.m"
                  erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 483 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 483 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 1) = ((MR_Box) (erl_backend__erl_code_util__InnerCond_10));
#line 483 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 2) = ((MR_Box) (erl_backend__erl_code_util__NewCases_15));
#line 483 "erl_code_util.m"
                }
#line 482 "erl_code_util.m"
                {
#line 482 "erl_code_util.m"
                  erl_backend__erl_code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
#line 482 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
#line 482 "erl_code_util.m"
                }
#line 482 "erl_code_util.m"
                {
#line 482 "erl_code_util.m"
                  erl_backend__erl_code_util__V_16_16 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_18_21, erl_backend__erl_code_util__InnerPreamble_12, erl_backend__erl_code_util__V_17_17);
                }
#line 482 "erl_code_util.m"
                {
#line 482 "erl_code_util.m"
                  erl_backend__erl_code_util__Expr1_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr1_5, 0) = ((MR_Box) (erl_backend__erl_code_util__V_16_16));
#line 482 "erl_code_util.m"
                }
#line 482 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 471 "erl_code_util.m"
              }
#line 471 "erl_code_util.m"
          }
#line 472 "erl_code_util.m"
      }
#line 464 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 463 "erl_code_util.m"
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr1_5;
#line 464 "erl_code_util.m"
    else
#line 465 "erl_code_util.m"
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr0_3;
#line 464 "erl_code_util.m"
  }
#line 202 "erl_code_util.m"
}

#line 195 "erl_code_util.m"
MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0(
#line 195 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_3)
#line 195 "erl_code_util.m"
{
#line 883 "erl_code_util.m"
  while (MR_TRUE)
#line 883 "erl_code_util.m"
    {
#line 883 "erl_code_util.m"
      /* tailcall optimized into a loop */
#line 883 "erl_code_util.m"
      {
#line 883 "erl_code_util.m"
        MR_bool erl_backend__erl_code_util__succeeded;
#line 883 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__Size_4;

#line 883 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 1))))
#line 883 "erl_code_util.m"
          {
#line 883 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Exprs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

#line 884 "erl_code_util.m"
            {
#line 884 "erl_code_util.m"
              return erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_5);
            }
#line 883 "erl_code_util.m"
          }
#line 883 "erl_code_util.m"
        else
#line 883 "erl_code_util.m"
          if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 0))))
#line 901 "erl_code_util.m"
            {
#line 901 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Terms_11;
#line 901 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__V_47_47 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_3), (MR_Integer) 0);
#line 901 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_48_48;
#line 901 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_50_50;
#line 901 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_51_51;
#line 901 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_64;

#line 901 "erl_code_util.m"
              erl_backend__erl_code_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 0)));
#line 901 "erl_code_util.m"
              erl_backend__erl_code_util__ExprA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 1)));
#line 902 "erl_code_util.m"
              {
#line 902 "erl_code_util.m"
                erl_backend__erl_code_util__V_50_50 = erl_backend__erl_code_util__erl_terms_size_1_f_0(erl_backend__erl_code_util__Terms_11);
              }
#line 902 "erl_code_util.m"
              erl_backend__erl_code_util__V_48_48 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_50_50);
#line 902 "erl_code_util.m"
              {
#line 902 "erl_code_util.m"
                erl_backend__erl_code_util__V_51_51 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_64);
              }
#line 902 "erl_code_util.m"
              erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_48_48 + erl_backend__erl_code_util__V_51_51);
#line 901 "erl_code_util.m"
            }
#line 883 "erl_code_util.m"
          else
#line 883 "erl_code_util.m"
            if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 2))))
#line 886 "erl_code_util.m"
              {
#line 886 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

#line 887 "erl_code_util.m"
                {
#line 887 "erl_code_util.m"
                  return erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Term_6);
                }
#line 886 "erl_code_util.m"
              }
#line 883 "erl_code_util.m"
            else
#line 883 "erl_code_util.m"
              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 895 "erl_code_util.m"
                {
#line 895 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_54_54;
#line 895 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_55_55;
#line 895 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 895 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
#line 895 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 896 "erl_code_util.m"
                  {
#line 896 "erl_code_util.m"
                    erl_backend__erl_code_util__V_54_54 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_60);
                  }
#line 896 "erl_code_util.m"
                  {
#line 896 "erl_code_util.m"
                    erl_backend__erl_code_util__V_55_55 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_61);
                  }
#line 896 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_54_54 + erl_backend__erl_code_util__V_55_55);
#line 895 "erl_code_util.m"
                }
#line 883 "erl_code_util.m"
              else
#line 883 "erl_code_util.m"
                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 898 "erl_code_util.m"
                  {
#line 898 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__CallTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 898 "erl_code_util.m"
                    MR_Integer erl_backend__erl_code_util__V_52_52;
#line 898 "erl_code_util.m"
                    MR_Integer erl_backend__erl_code_util__V_53_53;
#line 898 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Exprs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 899 "erl_code_util.m"
                    {
#line 899 "erl_code_util.m"
                      erl_backend__erl_code_util__V_52_52 = erl_backend__erl_code_util__erl_call_target_size_1_f_0(erl_backend__erl_code_util__CallTarget_10);
                    }
#line 899 "erl_code_util.m"
                    {
#line 899 "erl_code_util.m"
                      erl_backend__erl_code_util__V_53_53 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_63);
                    }
#line 899 "erl_code_util.m"
                    erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_52_52 + erl_backend__erl_code_util__V_53_53);
#line 898 "erl_code_util.m"
                  }
#line 883 "erl_code_util.m"
                else
#line 883 "erl_code_util.m"
                  if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 904 "erl_code_util.m"
                    {
#line 904 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 904 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_43_43;
#line 904 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_45_45;
#line 904 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_46_46;
#line 904 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__ExprA_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 905 "erl_code_util.m"
                      {
#line 905 "erl_code_util.m"
                        erl_backend__erl_code_util__V_45_45 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_65);
                      }
#line 905 "erl_code_util.m"
                      erl_backend__erl_code_util__V_43_43 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_45_45);
#line 905 "erl_code_util.m"
                      {
#line 905 "erl_code_util.m"
                        erl_backend__erl_code_util__V_46_46 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_12);
                      }
#line 905 "erl_code_util.m"
                      erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_43_43 + erl_backend__erl_code_util__V_46_46);
#line 904 "erl_code_util.m"
                    }
#line 883 "erl_code_util.m"
                  else
#line 883 "erl_code_util.m"
                    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 889 "erl_code_util.m"
                      {
#line 889 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 889 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprB_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 889 "erl_code_util.m"
                        MR_Integer erl_backend__erl_code_util__V_56_56;
#line 889 "erl_code_util.m"
                        MR_Integer erl_backend__erl_code_util__V_57_57;

#line 890 "erl_code_util.m"
                        {
#line 890 "erl_code_util.m"
                          erl_backend__erl_code_util__V_56_56 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_7);
                        }
#line 890 "erl_code_util.m"
                        {
#line 890 "erl_code_util.m"
                          erl_backend__erl_code_util__V_57_57 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_8);
                        }
#line 890 "erl_code_util.m"
                        erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_56_56 + erl_backend__erl_code_util__V_57_57);
#line 889 "erl_code_util.m"
                      }
#line 883 "erl_code_util.m"
                    else
#line 883 "erl_code_util.m"
                      if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 940 "erl_code_util.m"
                        erl_backend__erl_code_util__Size_4 = (MR_Integer) 10000;
#line 883 "erl_code_util.m"
                      else
#line 883 "erl_code_util.m"
                        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 932 "erl_code_util.m"
                          {
#line 932 "erl_code_util.m"
                            MR_Integer erl_backend__erl_code_util__V_25_25;
#line 932 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__Cases_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 933 "erl_code_util.m"
                            {
#line 933 "erl_code_util.m"
                              erl_backend__erl_code_util__V_25_25 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_71);
                            }
#line 933 "erl_code_util.m"
                            erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_25_25);
#line 932 "erl_code_util.m"
                          }
#line 883 "erl_code_util.m"
                        else
#line 883 "erl_code_util.m"
                          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 936 "erl_code_util.m"
                            erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 883 "erl_code_util.m"
                          else
#line 883 "erl_code_util.m"
                            if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 929 "erl_code_util.m"
                              {
#line 929 "erl_code_util.m"
                                MR_Integer erl_backend__erl_code_util__V_26_26;
#line 929 "erl_code_util.m"
                                MR_Integer erl_backend__erl_code_util__V_28_28;
#line 929 "erl_code_util.m"
                                MR_Integer erl_backend__erl_code_util__V_29_29;
#line 929 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__ExprA_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 929 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__ExprB_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 930 "erl_code_util.m"
                                {
#line 930 "erl_code_util.m"
                                  erl_backend__erl_code_util__V_28_28 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_69);
                                }
#line 930 "erl_code_util.m"
                                erl_backend__erl_code_util__V_26_26 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_28_28);
#line 930 "erl_code_util.m"
                                {
#line 930 "erl_code_util.m"
                                  erl_backend__erl_code_util__V_29_29 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_70);
                                }
#line 930 "erl_code_util.m"
                                erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_26_26 + erl_backend__erl_code_util__V_29_29);
#line 929 "erl_code_util.m"
                              }
#line 883 "erl_code_util.m"
                            else
#line 883 "erl_code_util.m"
                              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 926 "erl_code_util.m"
                                {
#line 926 "erl_code_util.m"
                                  MR_Integer erl_backend__erl_code_util__V_31_31;
#line 926 "erl_code_util.m"
                                  MR_Word erl_backend__erl_code_util__ExprA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 927 "erl_code_util.m"
                                  {
#line 927 "erl_code_util.m"
                                    erl_backend__erl_code_util__V_31_31 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_68);
                                  }
#line 927 "erl_code_util.m"
                                  erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_31_31);
#line 926 "erl_code_util.m"
                                }
#line 883 "erl_code_util.m"
                              else
#line 883 "erl_code_util.m"
                                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 907 "erl_code_util.m"
                                  {
#line 907 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__MaybeCatch_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
#line 907 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__MaybeAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 4)));
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__CatchSize_18;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__AfterSize_20;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__V_37_37;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__V_38_38;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__V_39_39;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__V_41_41;
#line 907 "erl_code_util.m"
                                    MR_Integer erl_backend__erl_code_util__V_42_42;
#line 907 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__ExprA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 907 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__Cases_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 912 "erl_code_util.m"
                                    if ((erl_backend__erl_code_util__MaybeCatch_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "erl_code_util.m"
                                      erl_backend__erl_code_util__CatchSize_18 = (MR_Integer) 0;
#line 912 "erl_code_util.m"
                                    else
#line 909 "erl_code_util.m"
                                      {
#line 909 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__TermA_15;
#line 909 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__TermB_16;
#line 909 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__CatchExpr_17;
#line 909 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_13, (MR_Integer) 0)));
#line 909 "erl_code_util.m"
                                        MR_Integer erl_backend__erl_code_util__V_33_33;
#line 909 "erl_code_util.m"
                                        MR_Integer erl_backend__erl_code_util__V_34_34;
#line 909 "erl_code_util.m"
                                        MR_Integer erl_backend__erl_code_util__V_35_35;
#line 909 "erl_code_util.m"
                                        MR_Integer erl_backend__erl_code_util__V_36_36;

#line 909 "erl_code_util.m"
                                        erl_backend__erl_code_util__TermA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 0)));
#line 909 "erl_code_util.m"
                                        erl_backend__erl_code_util__TermB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 1)));
#line 909 "erl_code_util.m"
                                        erl_backend__erl_code_util__CatchExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 2)));
#line 910 "erl_code_util.m"
                                        {
#line 910 "erl_code_util.m"
                                          erl_backend__erl_code_util__V_34_34 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermA_15);
                                        }
#line 910 "erl_code_util.m"
                                        {
#line 910 "erl_code_util.m"
                                          erl_backend__erl_code_util__V_35_35 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermB_16);
                                        }
#line 910 "erl_code_util.m"
                                        erl_backend__erl_code_util__V_33_33 = (erl_backend__erl_code_util__V_34_34 + erl_backend__erl_code_util__V_35_35);
#line 910 "erl_code_util.m"
                                        {
#line 910 "erl_code_util.m"
                                          erl_backend__erl_code_util__V_36_36 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__CatchExpr_17);
                                        }
#line 910 "erl_code_util.m"
                                        erl_backend__erl_code_util__CatchSize_18 = (erl_backend__erl_code_util__V_33_33 + erl_backend__erl_code_util__V_36_36);
#line 909 "erl_code_util.m"
                                      }
#line 919 "erl_code_util.m"
                                    if ((erl_backend__erl_code_util__MaybeAfter_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "erl_code_util.m"
                                      erl_backend__erl_code_util__AfterSize_20 = (MR_Integer) 0;
#line 919 "erl_code_util.m"
                                    else
#line 917 "erl_code_util.m"
                                      {
#line 917 "erl_code_util.m"
                                        MR_Word erl_backend__erl_code_util__AfterExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_14, (MR_Integer) 0)));

#line 918 "erl_code_util.m"
                                        {
#line 918 "erl_code_util.m"
                                          erl_backend__erl_code_util__AfterSize_20 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__AfterExpr_19);
                                        }
#line 917 "erl_code_util.m"
                                      }
#line 923 "erl_code_util.m"
                                    {
#line 923 "erl_code_util.m"
                                      erl_backend__erl_code_util__V_41_41 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_66);
                                    }
#line 923 "erl_code_util.m"
                                    erl_backend__erl_code_util__V_39_39 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_41_41);
#line 923 "erl_code_util.m"
                                    {
#line 923 "erl_code_util.m"
                                      erl_backend__erl_code_util__V_42_42 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_67);
                                    }
#line 923 "erl_code_util.m"
                                    erl_backend__erl_code_util__V_38_38 = (erl_backend__erl_code_util__V_39_39 + erl_backend__erl_code_util__V_42_42);
#line 924 "erl_code_util.m"
                                    erl_backend__erl_code_util__V_37_37 = (erl_backend__erl_code_util__V_38_38 + erl_backend__erl_code_util__CatchSize_18);
#line 923 "erl_code_util.m"
                                    erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_37_37 + erl_backend__erl_code_util__AfterSize_20);
#line 907 "erl_code_util.m"
                                  }
#line 883 "erl_code_util.m"
                                else
#line 892 "erl_code_util.m"
                                  {
#line 892 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util__ExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 892 "erl_code_util.m"
                                    MR_Word erl_backend__erl_code_util___Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 893 "erl_code_util.m"
                                    /* direct tailcall eliminated */
#line 893 "erl_code_util.m"
                                    {
#line 893 "erl_code_util.m"
                                      MR_Word erl_backend__erl_code_util__Expr__tmp_copy_3 = erl_backend__erl_code_util__ExprA_58;

#line 893 "erl_code_util.m"
                                      erl_backend__erl_code_util__Expr_3 = erl_backend__erl_code_util__Expr__tmp_copy_3;
#line 893 "erl_code_util.m"
                                    }
#line 893 "erl_code_util.m"
                                    continue;
#line 892 "erl_code_util.m"
                                  }
#line 883 "erl_code_util.m"
        return erl_backend__erl_code_util__Size_4;
#line 883 "erl_code_util.m"
      }
#line 883 "erl_code_util.m"
      break;
#line 883 "erl_code_util.m"
    }
#line 195 "erl_code_util.m"
}

#line 189 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_expr_vars_2_p_0(
#line 189 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_3,
#line 189 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Set_4)
#line 189 "erl_code_util.m"
{
#line 729 "erl_code_util.m"
  {
#line 729 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 729 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5;

#line 730 "erl_code_util.m"
    {
#line 730 "erl_code_util.m"
      erl_backend__erl_code_util__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 730 "erl_code_util.m"
    {
#line 730 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_3, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__Set_4);
#line 730 "erl_code_util.m"
      return;
    }
#line 729 "erl_code_util.m"
  }
#line 189 "erl_code_util.m"
}

#line 182 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(
#line 182 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ExceptVars_6,
#line 182 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_7,
#line 182 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_8,
#line 182 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13,
#line 182 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_14)
#line 182 "erl_code_util.m"
{
#line 721 "erl_code_util.m"
  {
#line 721 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_17_17;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Vars0_10;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Vars_11;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Subn_12;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15;
#line 721 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20;

#line 730 "erl_code_util.m"
    {
#line 730 "erl_code_util.m"
      erl_backend__erl_code_util__V_20_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 730 "erl_code_util.m"
    {
#line 730 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__V_20_20, &erl_backend__erl_code_util__Vars0_10);
    }
#line 5148 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 723 "erl_code_util.m"
    {
#line 723 "erl_code_util.m"
      erl_backend__erl_code_util__Vars_11 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars0_10, erl_backend__erl_code_util__ExceptVars_6);
    }
#line 724 "erl_code_util.m"
    {
#line 724 "erl_code_util.m"
      erl_backend__erl_code_util__V_15_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars_11);
    }
#line 724 "erl_code_util.m"
    {
#line 724 "erl_code_util.m"
      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_util__V_15_15, &erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Info_14);
    }
#line 725 "erl_code_util.m"
    {
#line 725 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__Expr_8);
#line 725 "erl_code_util.m"
      return;
    }
#line 721 "erl_code_util.m"
  }
#line 182 "erl_code_util.m"
}

#line 174 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(
#line 174 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 174 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_5,
#line 174 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_6)
#line 174 "erl_code_util.m"
{
#line 562 "erl_code_util.m"
  {
#line 562 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 562 "erl_code_util.m"
    if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 1))))
#line 562 "erl_code_util.m"
      {
#line 562 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Exprs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
#line 562 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Exprs_8;

#line 563 "erl_code_util.m"
        {
#line 563 "erl_code_util.m"
          erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Exprs0_7, &erl_backend__erl_code_util__Exprs_8);
        }
#line 564 "erl_code_util.m"
        {
#line 564 "erl_code_util.m"
          MR_Word base;
#line 564 "erl_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "erl_code_util.m"
          *erl_backend__erl_code_util__Expr_6 = base;
#line 564 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Exprs_8));
#line 564 "erl_code_util.m"
        }
#line 562 "erl_code_util.m"
      }
#line 562 "erl_code_util.m"
    else
#line 562 "erl_code_util.m"
      if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 0))))
#line 589 "erl_code_util.m"
        {
#line 589 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Clause0_20 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr0_5), (MR_Integer) 0);
#line 589 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Clause_21;

#line 590 "erl_code_util.m"
          {
#line 590 "erl_code_util.m"
            erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Clause0_20, &erl_backend__erl_code_util__Clause_21);
          }
#line 591 "erl_code_util.m"
          *erl_backend__erl_code_util__Expr_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_util__Clause_21);
#line 589 "erl_code_util.m"
        }
#line 562 "erl_code_util.m"
      else
#line 562 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 2))))
#line 566 "erl_code_util.m"
          {
#line 566 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
#line 566 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Term_10;

#line 567 "erl_code_util.m"
            {
#line 567 "erl_code_util.m"
              erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Term0_9, &erl_backend__erl_code_util__Term_10);
            }
#line 568 "erl_code_util.m"
            {
#line 568 "erl_code_util.m"
              MR_Word base;
#line 568 "erl_code_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "erl_code_util.m"
              *erl_backend__erl_code_util__Expr_6 = base;
#line 568 "erl_code_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Term_10));
#line 568 "erl_code_util.m"
            }
#line 566 "erl_code_util.m"
          }
#line 562 "erl_code_util.m"
        else
#line 562 "erl_code_util.m"
          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 579 "erl_code_util.m"
            {
#line 579 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 579 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
#line 579 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_39;
#line 579 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB_40;
#line 579 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));

#line 580 "erl_code_util.m"
              {
#line 580 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_37, &erl_backend__erl_code_util__ExprA_39);
              }
#line 581 "erl_code_util.m"
              {
#line 581 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_38, &erl_backend__erl_code_util__ExprB_40);
              }
#line 582 "erl_code_util.m"
              {
#line 582 "erl_code_util.m"
                MR_Word base;
#line 582 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 582 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 582 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 582 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_41));
#line 582 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_39));
#line 582 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__ExprB_40));
#line 582 "erl_code_util.m"
              }
#line 579 "erl_code_util.m"
            }
#line 562 "erl_code_util.m"
          else
#line 562 "erl_code_util.m"
            if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 584 "erl_code_util.m"
              {
#line 584 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__CallTarget0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 584 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__ExprsB0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 584 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__CallTarget_18;
#line 584 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__ExprsB_19;

#line 585 "erl_code_util.m"
                {
#line 585 "erl_code_util.m"
                  erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__CallTarget0_16, &erl_backend__erl_code_util__CallTarget_18);
                }
#line 586 "erl_code_util.m"
                {
#line 586 "erl_code_util.m"
                  erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprsB0_17, &erl_backend__erl_code_util__ExprsB_19);
                }
#line 587 "erl_code_util.m"
                {
#line 587 "erl_code_util.m"
                  MR_Word base;
#line 587 "erl_code_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 587 "erl_code_util.m"
                  *erl_backend__erl_code_util__Expr_6 = base;
#line 587 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__CallTarget_18));
#line 587 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprsB_19));
#line 587 "erl_code_util.m"
                }
#line 584 "erl_code_util.m"
              }
#line 562 "erl_code_util.m"
            else
#line 562 "erl_code_util.m"
              if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 593 "erl_code_util.m"
                {
#line 593 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 593 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_23;
#line 593 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 593 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_43;

#line 594 "erl_code_util.m"
                  {
#line 594 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_42, &erl_backend__erl_code_util__ExprA_43);
                  }
#line 595 "erl_code_util.m"
                  {
#line 595 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_22, &erl_backend__erl_code_util__Cases_23);
                  }
#line 596 "erl_code_util.m"
                  {
#line 596 "erl_code_util.m"
                    MR_Word base;
#line 596 "erl_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 596 "erl_code_util.m"
                    *erl_backend__erl_code_util__Expr_6 = base;
#line 596 "erl_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 596 "erl_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_43));
#line 596 "erl_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_23));
#line 596 "erl_code_util.m"
                  }
#line 593 "erl_code_util.m"
                }
#line 562 "erl_code_util.m"
              else
#line 562 "erl_code_util.m"
                if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 570 "erl_code_util.m"
                  {
#line 570 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__ExprA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 570 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__ExprB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 570 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__ExprA_13;
#line 570 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__ExprB_14;

#line 571 "erl_code_util.m"
                    {
#line 571 "erl_code_util.m"
                      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_11, &erl_backend__erl_code_util__ExprA_13);
                    }
#line 572 "erl_code_util.m"
                    {
#line 572 "erl_code_util.m"
                      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_12, &erl_backend__erl_code_util__ExprB_14);
                    }
#line 573 "erl_code_util.m"
                    {
#line 573 "erl_code_util.m"
                      MR_Word base;
#line 573 "erl_code_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 573 "erl_code_util.m"
                      *erl_backend__erl_code_util__Expr_6 = base;
#line 573 "erl_code_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 573 "erl_code_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_13));
#line 573 "erl_code_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_14));
#line 573 "erl_code_util.m"
                    }
#line 570 "erl_code_util.m"
                  }
#line 562 "erl_code_util.m"
                else
#line 562 "erl_code_util.m"
                  if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 628 "erl_code_util.m"
                    {
#line 628 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 628 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__Cases_55;

#line 629 "erl_code_util.m"
                      {
#line 629 "erl_code_util.m"
                        erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_54, &erl_backend__erl_code_util__Cases_55);
                      }
#line 630 "erl_code_util.m"
                      {
#line 630 "erl_code_util.m"
                        MR_Word base;
#line 630 "erl_code_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "erl_code_util.m"
                        *erl_backend__erl_code_util__Expr_6 = base;
#line 630 "erl_code_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 630 "erl_code_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Cases_55));
#line 630 "erl_code_util.m"
                      }
#line 628 "erl_code_util.m"
                    }
#line 562 "erl_code_util.m"
                  else
#line 562 "erl_code_util.m"
                    if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 623 "erl_code_util.m"
                      {
#line 623 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprA0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 623 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprB0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 623 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprA_52;
#line 623 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__ExprB_53;

#line 624 "erl_code_util.m"
                        {
#line 624 "erl_code_util.m"
                          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_50, &erl_backend__erl_code_util__ExprA_52);
                        }
#line 625 "erl_code_util.m"
                        {
#line 625 "erl_code_util.m"
                          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_51, &erl_backend__erl_code_util__ExprB_53);
                        }
#line 626 "erl_code_util.m"
                        {
#line 626 "erl_code_util.m"
                          MR_Word base;
#line 626 "erl_code_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 626 "erl_code_util.m"
                          *erl_backend__erl_code_util__Expr_6 = base;
#line 626 "erl_code_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 626 "erl_code_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_52));
#line 626 "erl_code_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_53));
#line 626 "erl_code_util.m"
                        }
#line 623 "erl_code_util.m"
                      }
#line 562 "erl_code_util.m"
                    else
#line 562 "erl_code_util.m"
                      if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 619 "erl_code_util.m"
                        {
#line 619 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__ExprA0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 619 "erl_code_util.m"
                          MR_Word erl_backend__erl_code_util__ExprA_49;

#line 620 "erl_code_util.m"
                          {
#line 620 "erl_code_util.m"
                            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_48, &erl_backend__erl_code_util__ExprA_49);
                          }
#line 621 "erl_code_util.m"
                          {
#line 621 "erl_code_util.m"
                            MR_Word base;
#line 621 "erl_code_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "erl_code_util.m"
                            *erl_backend__erl_code_util__Expr_6 = base;
#line 621 "erl_code_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 621 "erl_code_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_49));
#line 621 "erl_code_util.m"
                          }
#line 619 "erl_code_util.m"
                        }
#line 562 "erl_code_util.m"
                      else
#line 562 "erl_code_util.m"
                        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 598 "erl_code_util.m"
                          {
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__MaybeCatch0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__MaybeAfter0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 4)));
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__MaybeCatch_28;
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__MaybeAfter_31;
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__ExprA0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__ExprA_45;
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__Cases0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 598 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__Cases_47;

#line 599 "erl_code_util.m"
                            {
#line 599 "erl_code_util.m"
                              erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_44, &erl_backend__erl_code_util__ExprA_45);
                            }
#line 600 "erl_code_util.m"
                            {
#line 600 "erl_code_util.m"
                              erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_46, &erl_backend__erl_code_util__Cases_47);
                            }
#line 605 "erl_code_util.m"
                            if ((erl_backend__erl_code_util__MaybeCatch0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "erl_code_util.m"
                              erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "erl_code_util.m"
                            else
#line 602 "erl_code_util.m"
                              {
#line 602 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__Catch0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch0_24, (MR_Integer) 0)));
#line 602 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__Catch_27;

#line 603 "erl_code_util.m"
                                {
#line 603 "erl_code_util.m"
                                  erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Catch0_26, &erl_backend__erl_code_util__Catch_27);
                                }
#line 604 "erl_code_util.m"
                                {
#line 604 "erl_code_util.m"
                                  erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 604 "erl_code_util.m"
                                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_28, 0) = ((MR_Box) (erl_backend__erl_code_util__Catch_27));
#line 604 "erl_code_util.m"
                                }
#line 602 "erl_code_util.m"
                              }
#line 613 "erl_code_util.m"
                            if ((erl_backend__erl_code_util__MaybeAfter0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "erl_code_util.m"
                              erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "erl_code_util.m"
                            else
#line 610 "erl_code_util.m"
                              {
#line 610 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__After0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter0_25, (MR_Integer) 0)));
#line 610 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__After_30;

#line 611 "erl_code_util.m"
                                {
#line 611 "erl_code_util.m"
                                  erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__After0_29, &erl_backend__erl_code_util__After_30);
                                }
#line 612 "erl_code_util.m"
                                {
#line 612 "erl_code_util.m"
                                  erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "erl_code_util.m"
                                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_31, 0) = ((MR_Box) (erl_backend__erl_code_util__After_30));
#line 612 "erl_code_util.m"
                                }
#line 610 "erl_code_util.m"
                              }
#line 617 "erl_code_util.m"
                            {
#line 617 "erl_code_util.m"
                              MR_Word base;
#line 617 "erl_code_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 617 "erl_code_util.m"
                              *erl_backend__erl_code_util__Expr_6 = base;
#line 617 "erl_code_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 617 "erl_code_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_45));
#line 617 "erl_code_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_47));
#line 617 "erl_code_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__MaybeCatch_28));
#line 617 "erl_code_util.m"
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (erl_backend__erl_code_util__MaybeAfter_31));
#line 617 "erl_code_util.m"
                            }
#line 598 "erl_code_util.m"
                          }
#line 562 "erl_code_util.m"
                        else
#line 562 "erl_code_util.m"
                          if (((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 575 "erl_code_util.m"
                            {
#line 575 "erl_code_util.m"
                              MR_Word erl_backend__erl_code_util__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 575 "erl_code_util.m"
                              MR_Word erl_backend__erl_code_util__ExprA0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 575 "erl_code_util.m"
                              MR_Word erl_backend__erl_code_util__ExprA_36;

#line 576 "erl_code_util.m"
                              {
#line 576 "erl_code_util.m"
                                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_35, &erl_backend__erl_code_util__ExprA_36);
                              }
#line 577 "erl_code_util.m"
                              {
#line 577 "erl_code_util.m"
                                MR_Word base;
#line 577 "erl_code_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 577 "erl_code_util.m"
                                *erl_backend__erl_code_util__Expr_6 = base;
#line 577 "erl_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 577 "erl_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_15));
#line 577 "erl_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_36));
#line 577 "erl_code_util.m"
                              }
#line 575 "erl_code_util.m"
                            }
#line 562 "erl_code_util.m"
                          else
#line 635 "erl_code_util.m"
                            *erl_backend__erl_code_util__Expr_6 = erl_backend__erl_code_util__Expr0_5;
#line 562 "erl_code_util.m"
  }
#line 174 "erl_code_util.m"
}

#line 540 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 540 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
#line 540 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
#line 540 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5)
#line 540 "erl_code_util.m"
{
#line 540 "erl_code_util.m"
  {
#line 540 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 540 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12;
#line 540 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14;

#line 540 "erl_code_util.m"
    {
#line 540 "erl_code_util.m"
      erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_4), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14);
    }
#line 540 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12));
#line 540 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_5 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14));
#line 540 "erl_code_util.m"
  }
#line 540 "erl_code_util.m"
}

#line 165 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0(
#line 165 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Vars_5,
#line 165 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Subst_6,
#line 165 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 165 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 165 "erl_code_util.m"
{
#line 538 "erl_code_util.m"
  {
#line 538 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 538 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 538 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 538 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 538 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 540 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv3_VarSet_9;
#line 540 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_Subst_6;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_36_36;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_37_37;
#line 283 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_38_38;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_40_40;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_41_41;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_42_42;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_43_43;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_39_39;

#line 540 "erl_code_util.m"
    {
#line 540 "erl_code_util.m"
      erl_backend__erl_code_util__V_13_13 = mercury__map__init_0_f_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20);
    }
#line 540 "erl_code_util.m"
    {
#line 540 "erl_code_util.m"
      mercury__list__foldl2_6_p_0(erl_backend__erl_code_util__TypeInfo_20_20, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[3], erl_backend__erl_code_util__Vars_5, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv3_VarSet_9, ((MR_Box) (erl_backend__erl_code_util__V_13_13)), &erl_backend__erl_code_util__conv2_Subst_6);
    }
#line 540 "erl_code_util.m"
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv3_VarSet_9);
#line 540 "erl_code_util.m"
    *erl_backend__erl_code_util__Subst_6 = ((MR_Word) erl_backend__erl_code_util__conv2_Subst_6);
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    {
#line 283 "erl_code_util.m"
      MR_Word base;
#line 283 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 283 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
#line 283 "erl_code_util.m"
    }
#line 538 "erl_code_util.m"
  }
#line 165 "erl_code_util.m"
}

#line 158 "erl_code_util.m"
MR_Word MR_CALL 
erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(
#line 158 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 158 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 158 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__DummyVarReplacement_8,
#line 158 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_9)
#line 158 "erl_code_util.m"
{
#line 526 "erl_code_util.m"
  {
#line 526 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 526 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadVar__5_5;
#line 528 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Type_10;
#line 528 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11;

#line 528 "erl_code_util.m"
    {
#line 528 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = parse_tree__prog_data__search_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_9, &erl_backend__erl_code_util__Type_10);
    }
#line 528 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 528 "erl_code_util.m"
      {
#line 529 "erl_code_util.m"
        {
#line 529 "erl_code_util.m"
          erl_backend__erl_code_util__V_11_11 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_10);
        }
#line 529 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_11_11 == (MR_Integer) 0);
#line 528 "erl_code_util.m"
      }
#line 526 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 526 "erl_code_util.m"
      {
#line 526 "erl_code_util.m"
        erl_backend__erl_code_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "erl_code_util.m"
        MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__HeadVar__5_5, 0) = ((MR_Box) (erl_backend__erl_code_util__DummyVarReplacement_8));
#line 526 "erl_code_util.m"
      }
#line 526 "erl_code_util.m"
    else
#line 526 "erl_code_util.m"
      {
#line 526 "erl_code_util.m"
        return erl_backend__erl_code_util__HeadVar__5_5 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_util__Var_9);
      }
#line 526 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__5_5;
#line 526 "erl_code_util.m"
  }
#line 158 "erl_code_util.m"
}

#line 424 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
#line 424 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 424 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 424 "erl_code_util.m"
{
#line 424 "erl_code_util.m"
  {
#line 424 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 424 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 424 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__2_2;

#line 424 "erl_code_util.m"
    {
#line 424 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 424 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__2_2));
#line 424 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 424 "erl_code_util.m"
  }
#line 424 "erl_code_util.m"
}

#line 150 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(
#line 150 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_7,
#line 150 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarsToBind_8,
#line 150 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_9,
#line 150 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_10,
#line 150 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Statement0_11,
#line 150 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Statement_12)
#line 150 "erl_code_util.m"
{
#line 416 "erl_code_util.m"
  {
#line 416 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 416 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_19_19;
#line 416 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Bound_13;
#line 416 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NotBound_14;

#line 417 "erl_code_util.m"
    {
#line 417 "erl_code_util.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_util__Info_7, erl_backend__erl_code_util__InstMap_10, erl_backend__erl_code_util__Goal_9, &erl_backend__erl_code_util__Bound_13);
    }
#line 6002 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 418 "erl_code_util.m"
    {
#line 418 "erl_code_util.m"
      erl_backend__erl_code_util__NotBound_14 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__VarsToBind_8, erl_backend__erl_code_util__Bound_13);
    }
#line 419 "erl_code_util.m"
    {
#line 419 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
    }
#line 421 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 420 "erl_code_util.m"
      *erl_backend__erl_code_util__Statement_12 = erl_backend__erl_code_util__Statement0_11;
#line 421 "erl_code_util.m"
    else
#line 423 "erl_code_util.m"
      {
#line 423 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NotBoundList_15;
#line 423 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Assignments_16;
#line 423 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18;

#line 423 "erl_code_util.m"
        {
#line 423 "erl_code_util.m"
          erl_backend__erl_code_util__NotBoundList_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
        }
#line 424 "erl_code_util.m"
        {
#line 424 "erl_code_util.m"
          erl_backend__erl_code_util__Assignments_16 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[2], erl_backend__erl_code_util__NotBoundList_15);
        }
#line 425 "erl_code_util.m"
        {
#line 425 "erl_code_util.m"
          erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (erl_backend__erl_code_util__Assignments_16));
#line 425 "erl_code_util.m"
        }
#line 425 "erl_code_util.m"
        {
#line 425 "erl_code_util.m"
          *erl_backend__erl_code_util__Statement_12 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_util__V_18_18, erl_backend__erl_code_util__Statement0_11);
        }
#line 423 "erl_code_util.m"
      }
#line 416 "erl_code_util.m"
  }
#line 150 "erl_code_util.m"
}

#line 403 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
#line 403 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 403 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 403 "erl_code_util.m"
{
#line 403 "erl_code_util.m"
  {
#line 403 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 403 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;

#line 403 "erl_code_util.m"
    {
#line 403 "erl_code_util.m"
      return erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 403 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 403 "erl_code_util.m"
  }
#line 403 "erl_code_util.m"
}

#line 135 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(
#line 135 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_5,
#line 135 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_6,
#line 135 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_7,
#line 135 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__BoundNonLocals_8)
#line 135 "erl_code_util.m"
{
#line 397 "erl_code_util.m"
  {
#line 397 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 0)));
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 4)));
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 1)));
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NonLocals_13;
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InstmapDelta_14;
#line 397 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 1)));
#line 273 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 2)));
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 3)));
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 5)));
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 6)));
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 7)));
#line 400 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 0)));

#line 401 "erl_code_util.m"
    {
#line 401 "erl_code_util.m"
      erl_backend__erl_code_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
#line 402 "erl_code_util.m"
    {
#line 402 "erl_code_util.m"
      erl_backend__erl_code_util__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
#line 403 "erl_code_util.m"
    {
#line 403 "erl_code_util.m"
      erl_backend__erl_code_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[0]));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 3) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_9));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_10));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 5) = ((MR_Box) (erl_backend__erl_code_util__InstMap_6));
#line 403 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 6) = ((MR_Box) (erl_backend__erl_code_util__InstmapDelta_14));
#line 403 "erl_code_util.m"
    }
#line 403 "erl_code_util.m"
    {
#line 403 "erl_code_util.m"
      *erl_backend__erl_code_util__BoundNonLocals_8 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__V_15_15, erl_backend__erl_code_util__NonLocals_13);
    }
#line 397 "erl_code_util.m"
  }
#line 135 "erl_code_util.m"
}

#line 128 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(
#line 128 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap0_7,
#line 128 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_8,
#line 128 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__MaybeExpr0_9,
#line 128 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__MaybeExpr_10,
#line 128 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17,
#line 128 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_18)
#line 128 "erl_code_util.m"
{
#line 384 "erl_code_util.m"
  {
#line 384 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 384 "erl_code_util.m"
    if ((erl_backend__erl_code_util__MaybeExpr0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "erl_code_util.m"
      {
#line 392 "erl_code_util.m"
        *erl_backend__erl_code_util__MaybeExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Info_18 = erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17;
#line 391 "erl_code_util.m"
      }
#line 384 "erl_code_util.m"
    else
#line 384 "erl_code_util.m"
      {
#line 384 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeExpr0_9, (MR_Integer) 0)));
#line 384 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 384 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InstMap_14;
#line 384 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__BoundVars_15;
#line 384 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr_16;
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 273 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 273 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

#line 386 "erl_code_util.m"
        {
#line 386 "erl_code_util.m"
          hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_util__Goal_8, erl_backend__erl_code_util__InstMap0_7, &erl_backend__erl_code_util__InstMap_14);
        }
#line 387 "erl_code_util.m"
        {
#line 387 "erl_code_util.m"
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_util__InstMap_14, erl_backend__erl_code_util__ModuleInfo_13, &erl_backend__erl_code_util__BoundVars_15);
        }
#line 388 "erl_code_util.m"
        {
#line 388 "erl_code_util.m"
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_util__BoundVars_15, erl_backend__erl_code_util__Expr0_12, &erl_backend__erl_code_util__Expr_16, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, erl_backend__erl_code_util__STATE_VARIABLE_Info_18);
        }
#line 389 "erl_code_util.m"
        {
#line 389 "erl_code_util.m"
          MR_Word base;
#line 389 "erl_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "erl_code_util.m"
          *erl_backend__erl_code_util__MaybeExpr_10 = base;
#line 389 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_16));
#line 389 "erl_code_util.m"
        }
#line 384 "erl_code_util.m"
      }
#line 384 "erl_code_util.m"
  }
#line 128 "erl_code_util.m"
}

#line 113 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_27,
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarNames_10,
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
#line 113 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgModes_12,
#line 113 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Inputs_13,
#line 113 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Outputs_14)
#line 113 "erl_code_util.m"
{
#line 344 "erl_code_util.m"
  {
#line 344 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__VarNames_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 338 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 338 "erl_code_util.m"
      {
#line 339 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 340 "erl_code_util.m"
          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgModes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "erl_code_util.m"
      }
#line 344 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 342 "erl_code_util.m"
      {
#line 342 "erl_code_util.m"
        *erl_backend__erl_code_util__Inputs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "erl_code_util.m"
        *erl_backend__erl_code_util__Outputs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "erl_code_util.m"
      }
#line 344 "erl_code_util.m"
    else
#line 376 "erl_code_util.m"
      {
#line 376 "erl_code_util.m"
        MR_Box erl_backend__erl_code_util__VarName_15;
#line 376 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__VarNames1_16;
#line 376 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgType_17;
#line 376 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgTypes1_18;
#line 376 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgMode_19;
#line 376 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgModes1_20;

#line 345 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__VarNames_10)) == (MR_mktag((MR_Integer) 1)));
#line 345 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 345 "erl_code_util.m"
          {
#line 345 "erl_code_util.m"
            erl_backend__erl_code_util__VarName_15 = (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 0));
#line 345 "erl_code_util.m"
            erl_backend__erl_code_util__VarNames1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 1)));
#line 346 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__ArgTypes_11)) == (MR_mktag((MR_Integer) 1)));
#line 346 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 346 "erl_code_util.m"
              {
#line 346 "erl_code_util.m"
                erl_backend__erl_code_util__ArgType_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 0)));
#line 346 "erl_code_util.m"
                erl_backend__erl_code_util__ArgTypes1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 1)));
#line 347 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__ArgModes_12)) == (MR_mktag((MR_Integer) 1)));
#line 347 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 347 "erl_code_util.m"
                  {
#line 347 "erl_code_util.m"
                    erl_backend__erl_code_util__ArgMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgModes_12, (MR_Integer) 0)));
#line 347 "erl_code_util.m"
                    erl_backend__erl_code_util__ArgModes1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgModes_12, (MR_Integer) 1)));
#line 347 "erl_code_util.m"
                  }
#line 346 "erl_code_util.m"
              }
#line 345 "erl_code_util.m"
          }
#line 376 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 350 "erl_code_util.m"
          {
#line 350 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Inputs1_21;
#line 350 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Outputs1_22;

#line 349 "erl_code_util.m"
            {
#line 349 "erl_code_util.m"
              erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_27, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames1_16, erl_backend__erl_code_util__ArgTypes1_18, erl_backend__erl_code_util__ArgModes1_20, &erl_backend__erl_code_util__Inputs1_21, &erl_backend__erl_code_util__Outputs1_22);
            }
#line 352 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OptDummyArgs_9 == (MR_Integer) 0);
#line 352 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 352 "erl_code_util.m"
              {
#line 355 "erl_code_util.m"
                {
#line 355 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__V_23_23;

#line 355 "erl_code_util.m"
                  {
#line 355 "erl_code_util.m"
                    erl_backend__erl_code_util__V_23_23 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__ArgType_17);
                  }
#line 355 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
#line 355 "erl_code_util.m"
                }
#line 356 "erl_code_util.m"
                if (!(erl_backend__erl_code_util__succeeded))
#line 356 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgMode_19 == (MR_Integer) 2);
#line 352 "erl_code_util.m"
              }
#line 361 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 359 "erl_code_util.m"
              {
#line 359 "erl_code_util.m"
                *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
#line 360 "erl_code_util.m"
                *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
#line 359 "erl_code_util.m"
              }
#line 361 "erl_code_util.m"
            else
#line 367 "erl_code_util.m"
              if ((erl_backend__erl_code_util__ArgMode_19 == (MR_Integer) 0))
#line 363 "erl_code_util.m"
                {
#line 365 "erl_code_util.m"
                  {
#line 365 "erl_code_util.m"
                    MR_Word base;
#line 365 "erl_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "erl_code_util.m"
                    *erl_backend__erl_code_util__Inputs_13 = base;
#line 365 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
#line 365 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Inputs1_21));
#line 365 "erl_code_util.m"
                  }
#line 366 "erl_code_util.m"
                  *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
#line 363 "erl_code_util.m"
                }
#line 367 "erl_code_util.m"
              else
#line 370 "erl_code_util.m"
                {
#line 372 "erl_code_util.m"
                  *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
#line 373 "erl_code_util.m"
                  {
#line 373 "erl_code_util.m"
                    MR_Word base;
#line 373 "erl_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "erl_code_util.m"
                    *erl_backend__erl_code_util__Outputs_14 = base;
#line 373 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
#line 373 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Outputs1_22));
#line 373 "erl_code_util.m"
                  }
#line 370 "erl_code_util.m"
                }
#line 350 "erl_code_util.m"
          }
#line 376 "erl_code_util.m"
        else
#line 377 "erl_code_util.m"
          {
#line 377 "erl_code_util.m"
            {
#line 377 "erl_code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_util", (MR_String) "predicate \140erl_backend.erl_code_util.erl_gen_arg_list_arg_modes\'/7", (MR_String) "length mismatch");
#line 377 "erl_code_util.m"
              return;
            }
#line 377 "erl_code_util.m"
          }
#line 376 "erl_code_util.m"
      }
#line 344 "erl_code_util.m"
  }
#line 113 "erl_code_util.m"
}

#line 107 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_16,
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarNames_10,
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
#line 107 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Modes_12,
#line 107 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Inputs_13,
#line 107 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Outputs_14)
#line 107 "erl_code_util.m"
{
#line 330 "erl_code_util.m"
  {
#line 330 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 330 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ArgModes_15;

#line 331 "erl_code_util.m"
    {
#line 331 "erl_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__Modes_12, erl_backend__erl_code_util__ArgTypes_11, &erl_backend__erl_code_util__ArgModes_15);
    }
#line 332 "erl_code_util.m"
    {
#line 332 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_16, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames_10, erl_backend__erl_code_util__ArgTypes_11, erl_backend__erl_code_util__ArgModes_15, erl_backend__erl_code_util__Inputs_13, erl_backend__erl_code_util__Outputs_14);
#line 332 "erl_code_util.m"
      return;
    }
#line 330 "erl_code_util.m"
  }
#line 107 "erl_code_util.m"
}

#line 88 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(
#line 88 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 88 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 88 "erl_code_util.m"
{
#line 319 "erl_code_util.m"
  {
#line 319 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 319 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 319 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));

#line 319 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 319 "erl_code_util.m"
  }
#line 88 "erl_code_util.m"
}

#line 83 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(
#line 83 "erl_code_util.m"
  MR_String erl_backend__erl_code_util__Name_4,
#line 83 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8,
#line 83 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_9)
#line 83 "erl_code_util.m"
{
#line 314 "erl_code_util.m"
  {
#line 314 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 314 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 314 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVarNames_7;
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 315 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19;
#line 317 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_20_20;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_22_22;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_23_23;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24;
#line 317 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25;

#line 316 "erl_code_util.m"
    {
#line 316 "erl_code_util.m"
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (erl_backend__erl_code_util__Name_4)), erl_backend__erl_code_util__EnvVarNames0_6, &erl_backend__erl_code_util__EnvVarNames_7);
    }
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 317 "erl_code_util.m"
    erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 317 "erl_code_util.m"
    {
#line 317 "erl_code_util.m"
      MR_Word base;
#line 317 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 317 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_9 = base;
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_20_20));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__V_21_21));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_22_22));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_23_23));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_24_24));
#line 317 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVarNames_7));
#line 317 "erl_code_util.m"
    }
#line 314 "erl_code_util.m"
  }
#line 83 "erl_code_util.m"
}

#line 77 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_variable_type_3_p_0(
#line 77 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_4,
#line 77 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_5,
#line 77 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Type_6)
#line 77 "erl_code_util.m"
{
#line 310 "erl_code_util.m"
  {
#line 310 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 310 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 3)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 7)));

#line 312 "erl_code_util.m"
    {
#line 312 "erl_code_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_5, erl_backend__erl_code_util__Type_6);
#line 312 "erl_code_util.m"
      return;
    }
#line 310 "erl_code_util.m"
  }
#line 77 "erl_code_util.m"
}

#line 308 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
#line 308 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 308 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 308 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 308 "erl_code_util.m"
{
#line 308 "erl_code_util.m"
  {
#line 308 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 308 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Type_6;

#line 308 "erl_code_util.m"
    {
#line 308 "erl_code_util.m"
      erl_backend__erl_code_util__erl_variable_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Type_6);
    }
#line 308 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Type_6));
#line 308 "erl_code_util.m"
  }
#line 308 "erl_code_util.m"
}

#line 72 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0(
#line 72 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_4,
#line 72 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Vars_5,
#line 72 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Types_6)
#line 72 "erl_code_util.m"
{
#line 307 "erl_code_util.m"
  {
#line 307 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 307 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 308 "erl_code_util.m"
    {
#line 308 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[0]));
#line 308 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_variable_types_3_p_0_1));
#line 308 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 308 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Info_4));
#line 308 "erl_code_util.m"
    }
#line 308 "erl_code_util.m"
    {
#line 308 "erl_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Vars_5, erl_backend__erl_code_util__Types_6);
#line 308 "erl_code_util.m"
      return;
    }
#line 307 "erl_code_util.m"
  }
#line 72 "erl_code_util.m"
}

#line 297 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 297 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
#line 297 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
#line 297 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_4)
#line 297 "erl_code_util.m"
{
#line 297 "erl_code_util.m"
  {
#line 297 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 297 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv1_NewVar_6;
#line 297 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9;

#line 297 "erl_code_util.m"
    {
#line 297 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv1_NewVar_6, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9);
    }
#line 297 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv1_NewVar_6));
#line 297 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9));
#line 297 "erl_code_util.m"
  }
#line 297 "erl_code_util.m"
}

#line 67 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(
#line 67 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__Num_5,
#line 67 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVars_6,
#line 67 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 67 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 67 "erl_code_util.m"
{
#line 295 "erl_code_util.m"
  {
#line 295 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 295 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 295 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 295 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 297 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_VarSet_9;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_36_36;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_37_37;
#line 283 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_38_38;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_40_40;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_41_41;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_42_42;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_43_43;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_39_39;

#line 297 "erl_code_util.m"
    {
#line 297 "erl_code_util.m"
      erl_backend__erl_code_util__V_13_13 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, erl_backend__erl_code_util__Num_5);
    }
#line 297 "erl_code_util.m"
    {
#line 297 "erl_code_util.m"
      mercury__list__map_foldl_5_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[1], erl_backend__erl_code_util__V_13_13, erl_backend__erl_code_util__NewVars_6, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv2_VarSet_9);
    }
#line 297 "erl_code_util.m"
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv2_VarSet_9);
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    {
#line 283 "erl_code_util.m"
      MR_Word base;
#line 283 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 283 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
#line 283 "erl_code_util.m"
    }
#line 295 "erl_code_util.m"
  }
#line 67 "erl_code_util.m"
}

#line 61 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(
#line 61 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__Num_5,
#line 61 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVars_6,
#line 61 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 61 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 61 "erl_code_util.m"
{
#line 290 "erl_code_util.m"
  {
#line 290 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 290 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 290 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28;
#line 283 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_29_29;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_31_31;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_32_32;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_33_33;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_34_34;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30;

#line 292 "erl_code_util.m"
    {
#line 292 "erl_code_util.m"
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Num_5, erl_backend__erl_code_util__NewVars_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    {
#line 283 "erl_code_util.m"
      MR_Word base;
#line 283 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 283 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
#line 283 "erl_code_util.m"
    }
#line 290 "erl_code_util.m"
  }
#line 61 "erl_code_util.m"
}

#line 56 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0(
#line 56 "erl_code_util.m"
  MR_String erl_backend__erl_code_util__Name_5,
#line 56 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 56 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 56 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 56 "erl_code_util.m"
{
#line 285 "erl_code_util.m"
  {
#line 285 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 285 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 285 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28;
#line 283 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_29_29;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_31_31;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_32_32;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_33_33;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_34_34;
#line 283 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30;

#line 287 "erl_code_util.m"
    {
#line 287 "erl_code_util.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_5, erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 283 "erl_code_util.m"
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 283 "erl_code_util.m"
    {
#line 283 "erl_code_util.m"
      MR_Word base;
#line 283 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 283 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
#line 283 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
#line 283 "erl_code_util.m"
    }
#line 285 "erl_code_util.m"
  }
#line 56 "erl_code_util.m"
}

#line 52 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(
#line 52 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 52 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 52 "erl_code_util.m"
{
#line 277 "erl_code_util.m"
  {
#line 277 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 277 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 277 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 277 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 277 "erl_code_util.m"
  }
#line 52 "erl_code_util.m"
}

#line 51 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(
#line 51 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 51 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 51 "erl_code_util.m"
{
#line 276 "erl_code_util.m"
  {
#line 276 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 276 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 276 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 276 "erl_code_util.m"
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 276 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 276 "erl_code_util.m"
  }
#line 51 "erl_code_util.m"
}

#line 50 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(
#line 50 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 50 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 50 "erl_code_util.m"
{
#line 275 "erl_code_util.m"
  {
#line 275 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 275 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 275 "erl_code_util.m"
  }
#line 50 "erl_code_util.m"
}

#line 49 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(
#line 49 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 49 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 49 "erl_code_util.m"
{
#line 274 "erl_code_util.m"
  {
#line 274 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 274 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 274 "erl_code_util.m"
  }
#line 49 "erl_code_util.m"
}

#line 47 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(
#line 47 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 47 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 47 "erl_code_util.m"
{
#line 273 "erl_code_util.m"
  {
#line 273 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 273 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_5_5;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_6_6;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 273 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 273 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 273 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 273 "erl_code_util.m"
  }
#line 47 "erl_code_util.m"
}

#line 45 "erl_code_util.m"
MR_Word MR_CALL 
erl_backend__erl_code_util__erl_gen_info_init_3_f_0(
#line 45 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_5,
#line 45 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__PredId_6,
#line 45 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__ProcId_7)
#line 45 "erl_code_util.m"
{
#line 252 "erl_code_util.m"
  {
#line 252 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Info_8;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PredInfo_9;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ProcInfo_10;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadVars_11;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_12;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_13;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadModes_14;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadTypes_15;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InputVars_16;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OutputVars_17;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVars_18;
#line 252 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ArgModes_29;

#line 253 "erl_code_util.m"
    {
#line 253 "erl_code_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__PredId_6, erl_backend__erl_code_util__ProcId_7, &erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__ProcInfo_10);
    }
#line 254 "erl_code_util.m"
    {
#line 254 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadVars_11);
    }
#line 255 "erl_code_util.m"
    {
#line 255 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarSet_12);
    }
#line 256 "erl_code_util.m"
    {
#line 256 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarTypes_13);
    }
#line 257 "erl_code_util.m"
    {
#line 257 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadModes_14);
    }
#line 258 "erl_code_util.m"
    {
#line 258 "erl_code_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__HeadTypes_15);
    }
#line 331 "erl_code_util.m"
    {
#line 331 "erl_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__HeadModes_14, erl_backend__erl_code_util__HeadTypes_15, &erl_backend__erl_code_util__ArgModes_29);
    }
#line 332 "erl_code_util.m"
    {
#line 332 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], erl_backend__erl_code_util__ModuleInfo_5, (MR_Integer) 0, erl_backend__erl_code_util__HeadVars_11, erl_backend__erl_code_util__HeadTypes_15, erl_backend__erl_code_util__ArgModes_29, &erl_backend__erl_code_util__InputVars_16, &erl_backend__erl_code_util__OutputVars_17);
    }
#line 261 "erl_code_util.m"
    {
#line 261 "erl_code_util.m"
      erl_backend__erl_code_util__EnvVars_18 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 262 "erl_code_util.m"
    {
#line 262 "erl_code_util.m"
      erl_backend__erl_code_util__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 0) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_5));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 1) = ((MR_Box) (erl_backend__erl_code_util__PredId_6));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 2) = ((MR_Box) (erl_backend__erl_code_util__ProcId_7));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_12));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_13));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 5) = ((MR_Box) (erl_backend__erl_code_util__InputVars_16));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 6) = ((MR_Box) (erl_backend__erl_code_util__OutputVars_17));
#line 262 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVars_18));
#line 262 "erl_code_util.m"
    }
#line 252 "erl_code_util.m"
    return erl_backend__erl_code_util__Info_8;
#line 252 "erl_code_util.m"
  }
#line 45 "erl_code_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.erl_code_util. */
