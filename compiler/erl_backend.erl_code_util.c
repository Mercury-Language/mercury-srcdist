/*
** Automatically generated from `erl_code_util.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 507 "erl_code_util.m"
struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s {
#line 510 "erl_code_util.m"
  MR_bool erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
#line 517 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10;
#line 518 "erl_code_util.m"
  jmp_buf erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0;
#line 518 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11;
#line 518 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12;
#line 519 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12;
#line 507 "erl_code_util.m"
};


#line 163 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 175 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 187 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 193 "erl_backend.erl_code_util.c"
static const MR_PseudoTypeInfo erl_backend__erl_code_util__erl_backend__erl_code_util__field_types_erl_gen_info_0_0[8];

#line 196 "erl_backend.erl_code_util.c"
static const MR_ConstString erl_backend__erl_code_util__erl_backend__erl_code_util__field_names_erl_gen_info_0_0[8];

#line 199 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0;

#line 202 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1];

#line 205 "erl_backend.erl_code_util.c"
static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1];

#line 208 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1];

#line 211 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1];

#line 214 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0;

#line 217 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1;

#line 220 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2];

#line 223 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2];

#line 226 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2];

#line 229 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0_10001(
#line 232 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 234 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 237 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0_10001(
#line 240 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 242 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 244 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

#line 247 "erl_backend.erl_code_util.c"
static MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0_10001(
#line 250 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 252 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 255 "erl_backend.erl_code_util.c"
static void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0_10001(
#line 258 "erl_backend.erl_code_util.c"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_1,
#line 260 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 262 "erl_backend.erl_code_util.c"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3);

#line 302 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 302 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

#line 979 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
#line 979 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_3);

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 977 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
#line 977 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 977 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 975 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
#line 975 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_3);

#line 969 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
#line 969 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1);

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 880 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 948 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
#line 948 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_3);

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 946 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
#line 946 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 946 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 944 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
#line 944 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Terms_3);

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2);

#line 880 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 878 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
#line 878 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs_3);

#line 867 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
#line 867 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch_4,
#line 867 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 867 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

#line 859 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
#line 859 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_4,
#line 859 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 859 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

#line 857 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 857 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 853 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
#line 853 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_4,
#line 853 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
#line 853 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7);

#line 807 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 807 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 845 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
#line 845 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause_4,
#line 845 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 845 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9);

#line 832 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
#line 832 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target_4,
#line 832 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 832 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10);

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 809 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
#line 809 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_4,
#line 809 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
#line 809 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17);

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3);

#line 739 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
#line 739 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_4,
#line 739 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
#line 739 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23);

#line 710 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
#line 710 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 710 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch0_5,
#line 710 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Catch_6);

#line 701 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
#line 701 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 701 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case0_5,
#line 701 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Case_6);

#line 699 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
#line 699 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 699 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 699 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 695 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
#line 695 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 695 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases0_5,
#line 695 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Cases_6);

#line 643 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
#line 643 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 643 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 643 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 686 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
#line 686 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 686 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause0_5,
#line 686 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Clause_6);

#line 671 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
#line 671 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 671 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target0_5,
#line 671 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Target_6);

#line 559 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 559 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 645 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
#line 645 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 645 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term0_5,
#line 645 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Term_6);

#line 559 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 559 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 555 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
#line 555 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 555 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs0_5,
#line 555 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Exprs_6);

#line 544 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OldVar_6,
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
#line 544 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
#line 544 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 519 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
#line 519 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg);

#line 507 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
#line 507 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_2);

#line 486 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
#line 486 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 486 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 486 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3);

#line 408 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_8,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_10);

#line 302 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
#line 302 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util___Num_5,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 302 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);

#line 541 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 541 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
#line 541 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5);

#line 425 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
#line 425 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 425 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 405 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
#line 405 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 405 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1);

#line 309 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
#line 309 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 309 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 309 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2);

#line 298 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 298 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
#line 298 "erl_code_util.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1073 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1081 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1089 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1097 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1106 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 erl_backend__erl_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1115 "erl_backend.erl_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_util__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1123 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1131 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct2 erl_backend__erl_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1140 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__erl_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1148 "erl_backend.erl_code_util.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1156 "erl_backend.erl_code_util.c"
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

#line 1168 "erl_backend.erl_code_util.c"
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

#line 1180 "erl_backend.erl_code_util.c"
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

#line 1195 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

#line 1200 "erl_backend.erl_code_util.c"
static const MR_DuPtagLayout erl_backend__erl_code_util__erl_backend__erl_code_util__du_ptag_ordered_erl_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__erl_code_util__erl_backend__erl_code_util__du_stag_ordered_erl_gen_info_0_0
  }
};

#line 1209 "erl_backend.erl_code_util.c"
static const MR_DuFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__du_name_ordered_erl_gen_info_0[1] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__du_functor_desc_erl_gen_info_0_0
};

#line 1214 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_erl_gen_info_0[1] = {
  (MR_Integer) 0
};

#line 1219 "erl_backend.erl_code_util.c"
const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1236 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0 = {
  (MR_String) "opt_dummy_args",
  (MR_Integer) 0
};

#line 1242 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDesc erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1 = {
  (MR_String) "no_opt_dummy_args",
  (MR_Integer) 1
};

#line 1248 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_value_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1
};

#line 1254 "erl_backend.erl_code_util.c"
static const MR_EnumFunctorDescPtr erl_backend__erl_code_util__erl_backend__erl_code_util__enum_name_ordered_opt_dummy_args_0[2] = {
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_1,
  &erl_backend__erl_code_util__erl_backend__erl_code_util__enum_functor_desc_opt_dummy_args_0_0
};

#line 1260 "erl_backend.erl_code_util.c"
static const MR_Integer erl_backend__erl_code_util__erl_backend__erl_code_util__functor_number_map_opt_dummy_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1266 "erl_backend.erl_code_util.c"
const MR_TypeCtorInfo_Struct erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_opt_dummy_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 302 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 302 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
#line 302 "erl_code_util.m"
{
#line 305 "erl_code_util.m"
  {
#line 305 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 306 "erl_code_util.m"
    {
#line 306 "erl_code_util.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "_", erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
#line 306 "erl_code_util.m"
      return;
    }
#line 305 "erl_code_util.m"
  }
#line 302 "erl_code_util.m"
}

#line 96 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util____Compare____opt_dummy_args_0_0(
#line 96 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
#line 96 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 96 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
#line 96 "erl_code_util.m"
{
#line 96 "erl_code_util.m"
  {
#line 96 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 96 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar1_4 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
#line 96 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Cast_HeadVar2_5 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

#line 96 "erl_code_util.m"
    {
#line 96 "erl_code_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__erl_code_util__HeadVar__1_1, erl_backend__erl_code_util__Cast_HeadVar1_4, erl_backend__erl_code_util__Cast_HeadVar2_5);
#line 96 "erl_code_util.m"
      return;
    }
#line 96 "erl_code_util.m"
  }
#line 96 "erl_code_util.m"
}

#line 96 "erl_code_util.m"
MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____opt_dummy_args_0_0(
#line 96 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_1,
#line 96 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
#line 96 "erl_code_util.m"
{
#line 1460 "erl_backend.erl_code_util.c"
  {
#line 1462 "erl_backend.erl_code_util.c"
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_1 == erl_backend__erl_code_util__HeadVar__2_2);

#line 1465 "erl_backend.erl_code_util.c"
    return erl_backend__erl_code_util__succeeded;
#line 1467 "erl_backend.erl_code_util.c"
  }
#line 96 "erl_code_util.m"
}

#line 232 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util____Compare____erl_gen_info_0_0(
#line 232 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__1_1,
#line 232 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 232 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__3_3)
#line 232 "erl_code_util.m"
{
#line 232 "erl_code_util.m"
  {
#line 232 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 232 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastX_27 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;
#line 232 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastY_28 = (MR_Integer) erl_backend__erl_code_util__HeadVar__3_3;

#line 232 "erl_code_util.m"
    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_27 == erl_backend__erl_code_util__CastY_28);
#line 232 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 1496 "erl_backend.erl_code_util.c"
      *erl_backend__erl_code_util__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "erl_code_util.m"
    else
#line 232 "erl_code_util.m"
      {
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 0)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 1)));
#line 232 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 2)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 3)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 4)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 5)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 6)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__3_3, (MR_Integer) 7)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_20_20;

#line 232 "erl_code_util.m"
        {
#line 232 "erl_code_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&erl_backend__erl_code_util__V_20_20, erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
        }
#line 1542 "erl_backend.erl_code_util.c"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_20_20 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_20_20;
#line 232 "erl_code_util.m"
        else
#line 232 "erl_code_util.m"
          {
#line 232 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__V_21_21;

#line 232 "erl_code_util.m"
            {
#line 232 "erl_code_util.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&erl_backend__erl_code_util__V_21_21, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__V_13_13);
            }
#line 1562 "erl_backend.erl_code_util.c"
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_21_21 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_21_21;
#line 232 "erl_code_util.m"
            else
#line 232 "erl_code_util.m"
              {
#line 232 "erl_code_util.m"
                MR_Word erl_backend__erl_code_util__V_22_22;

#line 232 "erl_code_util.m"
                {
#line 232 "erl_code_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__erl_code_util__V_22_22, erl_backend__erl_code_util__V_6_6, erl_backend__erl_code_util__V_14_14);
                }
#line 1582 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_22_22 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_22_22;
#line 232 "erl_code_util.m"
                else
#line 232 "erl_code_util.m"
                  {
#line 232 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__V_23_23;

#line 232 "erl_code_util.m"
                    {
#line 232 "erl_code_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], &erl_backend__erl_code_util__V_23_23, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                    }
#line 1602 "erl_backend.erl_code_util.c"
                    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
                    erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                      *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_23_23;
#line 232 "erl_code_util.m"
                    else
#line 232 "erl_code_util.m"
                      {
#line 232 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__V_24_24;

#line 232 "erl_code_util.m"
                        {
#line 232 "erl_code_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_2[1], &erl_backend__erl_code_util__V_24_24, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                        }
#line 1622 "erl_backend.erl_code_util.c"
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_24_24 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
                        erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                          *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_24_24;
#line 232 "erl_code_util.m"
                        else
#line 232 "erl_code_util.m"
                          {
#line 232 "erl_code_util.m"
                            MR_Word erl_backend__erl_code_util__V_25_25;

#line 232 "erl_code_util.m"
                            {
#line 232 "erl_code_util.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_25_25, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                            }
#line 1642 "erl_backend.erl_code_util.c"
                            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_25_25 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
                            erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
                            if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                              *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_25_25;
#line 232 "erl_code_util.m"
                            else
#line 232 "erl_code_util.m"
                              {
#line 232 "erl_code_util.m"
                                MR_Word erl_backend__erl_code_util__V_26_26;

#line 232 "erl_code_util.m"
                                {
#line 232 "erl_code_util.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[3], &erl_backend__erl_code_util__V_26_26, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                }
#line 1662 "erl_backend.erl_code_util.c"
                                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_26_26 == (MR_Integer) 0);
#line 232 "erl_code_util.m"
                                erl_backend__erl_code_util__succeeded = !(erl_backend__erl_code_util__succeeded);
#line 232 "erl_code_util.m"
                                if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                                  *erl_backend__erl_code_util__HeadVar__1_1 = erl_backend__erl_code_util__V_26_26;
#line 232 "erl_code_util.m"
                                else
#line 232 "erl_code_util.m"
                                  {
#line 232 "erl_code_util.m"
                                    {
#line 232 "erl_code_util.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[4], erl_backend__erl_code_util__HeadVar__1_1, ((MR_Box) (erl_backend__erl_code_util__V_11_11)), ((MR_Box) (erl_backend__erl_code_util__V_19_19)));
#line 232 "erl_code_util.m"
                                      return;
                                    }
#line 232 "erl_code_util.m"
                                  }
#line 232 "erl_code_util.m"
                              }
#line 232 "erl_code_util.m"
                          }
#line 232 "erl_code_util.m"
                      }
#line 232 "erl_code_util.m"
                  }
#line 232 "erl_code_util.m"
              }
#line 232 "erl_code_util.m"
          }
#line 232 "erl_code_util.m"
      }
#line 232 "erl_code_util.m"
  }
#line 232 "erl_code_util.m"
}

#line 232 "erl_code_util.m"
MR_bool MR_CALL 
erl_backend__erl_code_util____Unify____erl_gen_info_0_0(
#line 232 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 232 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2)
#line 232 "erl_code_util.m"
{
#line 232 "erl_code_util.m"
  {
#line 232 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 232 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastX_19 = (MR_Integer) erl_backend__erl_code_util__HeadVar__1_1;
#line 232 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__CastY_20 = (MR_Integer) erl_backend__erl_code_util__HeadVar__2_2;

#line 232 "erl_code_util.m"
    erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__CastX_19 == erl_backend__erl_code_util__CastY_20);
#line 232 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 232 "erl_code_util.m"
    else
#line 232 "erl_code_util.m"
      {
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_23_23;
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_24_24;
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_25_25;
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_26_26;
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__TypeInfo_27_27;
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 5)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 6)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 7)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 232 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 2)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 3)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 4)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 5)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 6)));
#line 232 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 7)));

#line 1773 "erl_backend.erl_code_util.c"
        {
#line 1775 "erl_backend.erl_code_util.c"
          erl_backend__erl_code_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(erl_backend__erl_code_util__V_3_3, erl_backend__erl_code_util__V_11_11);
        }
#line 232 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
          {
#line 1782 "erl_backend.erl_code_util.c"
            {
#line 1784 "erl_backend.erl_code_util.c"
              erl_backend__erl_code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(erl_backend__erl_code_util__V_4_4, erl_backend__erl_code_util__V_12_12);
            }
#line 232 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
              {
#line 1791 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_5_5 == erl_backend__erl_code_util__V_13_13);
#line 232 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                  {
#line 1797 "erl_backend.erl_code_util.c"
                    erl_backend__erl_code_util__TypeInfo_23_23 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1];
#line 1799 "erl_backend.erl_code_util.c"
                    {
#line 1801 "erl_backend.erl_code_util.c"
                      erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_23_23, ((MR_Box) (erl_backend__erl_code_util__V_6_6)), ((MR_Box) (erl_backend__erl_code_util__V_14_14)));
                    }
#line 232 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                      {
#line 1808 "erl_backend.erl_code_util.c"
                        erl_backend__erl_code_util__TypeInfo_24_24 = (MR_Word) &erl_backend__erl_code_util_scalar_common_2[1];
#line 1810 "erl_backend.erl_code_util.c"
                        {
#line 1812 "erl_backend.erl_code_util.c"
                          erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_24_24, ((MR_Box) (erl_backend__erl_code_util__V_7_7)), ((MR_Box) (erl_backend__erl_code_util__V_15_15)));
                        }
#line 232 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                          {
#line 1819 "erl_backend.erl_code_util.c"
                            erl_backend__erl_code_util__TypeInfo_25_25 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
#line 1821 "erl_backend.erl_code_util.c"
                            {
#line 1823 "erl_backend.erl_code_util.c"
                              erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_25_25, ((MR_Box) (erl_backend__erl_code_util__V_8_8)), ((MR_Box) (erl_backend__erl_code_util__V_16_16)));
                            }
#line 232 "erl_code_util.m"
                            if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                              {
#line 1830 "erl_backend.erl_code_util.c"
                                erl_backend__erl_code_util__TypeInfo_26_26 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[3];
#line 1832 "erl_backend.erl_code_util.c"
                                {
#line 1834 "erl_backend.erl_code_util.c"
                                  erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_26_26, ((MR_Box) (erl_backend__erl_code_util__V_9_9)), ((MR_Box) (erl_backend__erl_code_util__V_17_17)));
                                }
#line 232 "erl_code_util.m"
                                if (erl_backend__erl_code_util__succeeded)
#line 232 "erl_code_util.m"
                                  {
#line 1841 "erl_backend.erl_code_util.c"
                                    erl_backend__erl_code_util__TypeInfo_27_27 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[4];
#line 1843 "erl_backend.erl_code_util.c"
                                    {
#line 1845 "erl_backend.erl_code_util.c"
                                      return erl_backend__erl_code_util__succeeded = mercury__builtin__unify_2_p_0(erl_backend__erl_code_util__TypeInfo_27_27, ((MR_Box) (erl_backend__erl_code_util__V_10_10)), ((MR_Box) (erl_backend__erl_code_util__V_18_18)));
                                    }
#line 232 "erl_code_util.m"
                                  }
#line 232 "erl_code_util.m"
                              }
#line 232 "erl_code_util.m"
                          }
#line 232 "erl_code_util.m"
                      }
#line 232 "erl_code_util.m"
                  }
#line 232 "erl_code_util.m"
              }
#line 232 "erl_code_util.m"
          }
#line 232 "erl_code_util.m"
      }
#line 232 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 232 "erl_code_util.m"
  }
#line 232 "erl_code_util.m"
}

#line 979 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_case_size_1_f_0(
#line 979 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_3)
#line 979 "erl_code_util.m"
{
#line 981 "erl_code_util.m"
  {
#line 981 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 981 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Size_4;
#line 981 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 0)));
#line 981 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_3, (MR_Integer) 1)));
#line 981 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_7_7;
#line 981 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_9_9;
#line 981 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_10_10;

#line 983 "erl_code_util.m"
    {
#line 983 "erl_code_util.m"
      erl_backend__erl_code_util__V_9_9 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Pattern_5);
    }
#line 983 "erl_code_util.m"
    erl_backend__erl_code_util__V_7_7 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_9_9);
#line 983 "erl_code_util.m"
    {
#line 983 "erl_code_util.m"
      erl_backend__erl_code_util__V_10_10 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_6);
    }
#line 983 "erl_code_util.m"
    erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_7_7 + erl_backend__erl_code_util__V_10_10);
#line 981 "erl_code_util.m"
    return erl_backend__erl_code_util__Size_4;
#line 981 "erl_code_util.m"
  }
#line 979 "erl_code_util.m"
}

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 987 "erl_code_util.m"
{
#line 987 "erl_code_util.m"
  {
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 987 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 987 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
  }
#line 987 "erl_code_util.m"
}

#line 977 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0_1(
#line 977 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 977 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 977 "erl_code_util.m"
{
#line 977 "erl_code_util.m"
  {
#line 977 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 977 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 977 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 977 "erl_code_util.m"
    {
#line 977 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_case_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 977 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 977 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 977 "erl_code_util.m"
  }
#line 977 "erl_code_util.m"
}

#line 975 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_cases_size_1_f_0(
#line 975 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_3)
#line 975 "erl_code_util.m"
{
#line 977 "erl_code_util.m"
  {
#line 977 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 977 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 977 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_15;
#line 977 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_5_5;
#line 977 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_6_6;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_V_5_5;

#line 977 "erl_code_util.m"
    {
#line 977 "erl_code_util.m"
      erl_backend__erl_code_util__V_6_6 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[16], erl_backend__erl_code_util__Cases_3);
    }
#line 2009 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_V_5_5 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_15, erl_backend__erl_code_util__TypeCtorInfo_6_15, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[17], erl_backend__erl_code_util__V_6_6, ((MR_Box) ((MR_Integer) 0)));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_5_5);
#line 977 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_5_5);
#line 977 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 977 "erl_code_util.m"
  }
#line 975 "erl_code_util.m"
}

#line 969 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_call_target_size_1_f_0(
#line 969 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1)
#line 969 "erl_code_util.m"
{
#line 971 "erl_code_util.m"
  {
#line 971 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 971 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;

#line 971 "erl_code_util.m"
#line 971 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__1_1)) {
#line 971 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 971 "erl_code_util.m"
      case (MR_Integer) 0:
#line 971 "erl_code_util.m"
        erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 971 "erl_code_util.m"
        break;
#line 971 "erl_code_util.m"
      case (MR_Integer) 1:
#line 973 "erl_code_util.m"
        {
#line 973 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 973 "erl_code_util.m"
          {
#line 973 "erl_code_util.m"
            return erl_backend__erl_code_util__HeadVar__2_2 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__Expr_5);
          }
#line 973 "erl_code_util.m"
        }
#line 971 "erl_code_util.m"
        break;
#line 971 "erl_code_util.m"
      case (MR_Integer) 2:
#line 972 "erl_code_util.m"
        erl_backend__erl_code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 971 "erl_code_util.m"
        break;
#line 971 "erl_code_util.m"
    }
#line 971 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 971 "erl_code_util.m"
  }
#line 969 "erl_code_util.m"
}

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 987 "erl_code_util.m"
{
#line 987 "erl_code_util.m"
  {
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 987 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 987 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
  }
#line 987 "erl_code_util.m"
}

#line 880 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0_1(
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 880 "erl_code_util.m"
{
#line 880 "erl_code_util.m"
  {
#line 880 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 880 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 880 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 880 "erl_code_util.m"
    {
#line 880 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 880 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 880 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 880 "erl_code_util.m"
  }
#line 880 "erl_code_util.m"
}

#line 948 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_term_size_1_f_0(
#line 948 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_3)
#line 948 "erl_code_util.m"
{
#line 962 "erl_code_util.m"
  {
#line 962 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 962 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__Size_4;

#line 962 "erl_code_util.m"
#line 962 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_3)) {
#line 962 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 962 "erl_code_util.m"
      case (MR_Integer) 0:
#line 963 "erl_code_util.m"
        erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 962 "erl_code_util.m"
        break;
#line 962 "erl_code_util.m"
      case (MR_Integer) 1:
#line 962 "erl_code_util.m"
      case (MR_Integer) 2:
#line 963 "erl_code_util.m"
        erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 962 "erl_code_util.m"
        break;
#line 962 "erl_code_util.m"
      case (MR_Integer) 3:
#line 962 "erl_code_util.m"
#line 962 "erl_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 0)))) {
#line 962 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 962 "erl_code_util.m"
          case (MR_Integer) 0:
#line 962 "erl_code_util.m"
          case (MR_Integer) 1:
#line 962 "erl_code_util.m"
          case (MR_Integer) 2:
#line 962 "erl_code_util.m"
          case (MR_Integer) 3:
#line 962 "erl_code_util.m"
          case (MR_Integer) 4:
#line 962 "erl_code_util.m"
          case (MR_Integer) 6:
#line 962 "erl_code_util.m"
          case (MR_Integer) 7:
#line 963 "erl_code_util.m"
            erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 962 "erl_code_util.m"
            break;
#line 962 "erl_code_util.m"
          case (MR_Integer) 5:
#line 965 "erl_code_util.m"
            {
#line 965 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_27;
#line 965 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_3, (MR_Integer) 1)));
#line 965 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_16_16;
#line 965 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__V_18_18;
#line 987 "erl_code_util.m"
              MR_Box erl_backend__erl_code_util__conv2_V_16_16;

#line 880 "erl_code_util.m"
              {
#line 880 "erl_code_util.m"
                erl_backend__erl_code_util__V_18_18 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[14], erl_backend__erl_code_util__Exprs_14);
              }
#line 2227 "erl_backend.erl_code_util.c"
              erl_backend__erl_code_util__TypeCtorInfo_6_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 987 "erl_code_util.m"
              {
#line 987 "erl_code_util.m"
                erl_backend__erl_code_util__conv2_V_16_16 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_27, erl_backend__erl_code_util__TypeCtorInfo_6_27, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[15], erl_backend__erl_code_util__V_18_18, ((MR_Box) ((MR_Integer) 0)));
              }
#line 987 "erl_code_util.m"
              erl_backend__erl_code_util__V_16_16 = ((MR_Integer) erl_backend__erl_code_util__conv2_V_16_16);
#line 966 "erl_code_util.m"
              erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_16_16);
#line 965 "erl_code_util.m"
            }
#line 962 "erl_code_util.m"
            break;
#line 962 "erl_code_util.m"
        }
#line 962 "erl_code_util.m"
        break;
#line 962 "erl_code_util.m"
    }
#line 962 "erl_code_util.m"
    return erl_backend__erl_code_util__Size_4;
#line 962 "erl_code_util.m"
  }
#line 948 "erl_code_util.m"
}

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 987 "erl_code_util.m"
{
#line 987 "erl_code_util.m"
  {
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 987 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 987 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
  }
#line 987 "erl_code_util.m"
}

#line 946 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0_1(
#line 946 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 946 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 946 "erl_code_util.m"
{
#line 946 "erl_code_util.m"
  {
#line 946 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 946 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 946 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 946 "erl_code_util.m"
    {
#line 946 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 946 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 946 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 946 "erl_code_util.m"
  }
#line 946 "erl_code_util.m"
}

#line 944 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_terms_size_1_f_0(
#line 944 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Terms_3)
#line 944 "erl_code_util.m"
{
#line 946 "erl_code_util.m"
  {
#line 946 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 946 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 946 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
#line 946 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

#line 946 "erl_code_util.m"
    {
#line 946 "erl_code_util.m"
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[12], erl_backend__erl_code_util__Terms_3);
    }
#line 2346 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[13], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
#line 946 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 946 "erl_code_util.m"
  }
#line 944 "erl_code_util.m"
}

#line 987 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_2(
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 987 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2)
#line 987 "erl_code_util.m"
{
#line 987 "erl_code_util.m"
  {
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 987 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv1_HeadVar__3_3;

#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv1_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Integer) erl_backend__erl_code_util__wrapper_arg_2));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_HeadVar__3_3));
#line 987 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_3;
#line 987 "erl_code_util.m"
  }
#line 987 "erl_code_util.m"
}

#line 880 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0_1(
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 880 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 880 "erl_code_util.m"
{
#line 880 "erl_code_util.m"
  {
#line 880 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 880 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 880 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__conv0_Size_4;

#line 880 "erl_code_util.m"
    {
#line 880 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_Size_4 = erl_backend__erl_code_util__erl_expr_size_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 880 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Size_4));
#line 880 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 880 "erl_code_util.m"
  }
#line 880 "erl_code_util.m"
}

#line 878 "erl_code_util.m"
static MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_exprs_size_1_f_0(
#line 878 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs_3)
#line 878 "erl_code_util.m"
{
#line 880 "erl_code_util.m"
  {
#line 880 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 880 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__HeadVar__2_2;
#line 880 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_6_13;
#line 880 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 987 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_HeadVar__2_2;

#line 880 "erl_code_util.m"
    {
#line 880 "erl_code_util.m"
      erl_backend__erl_code_util__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[10], erl_backend__erl_code_util__Exprs_3);
    }
#line 2453 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 987 "erl_code_util.m"
    {
#line 987 "erl_code_util.m"
      erl_backend__erl_code_util__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0(erl_backend__erl_code_util__TypeCtorInfo_6_13, erl_backend__erl_code_util__TypeCtorInfo_6_13, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[11], erl_backend__erl_code_util__V_4_4, ((MR_Box) ((MR_Integer) 0)));
    }
#line 987 "erl_code_util.m"
    erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Integer) erl_backend__erl_code_util__conv2_HeadVar__2_2);
#line 880 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__2_2;
#line 880 "erl_code_util.m"
  }
#line 878 "erl_code_util.m"
}

#line 867 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(
#line 867 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch_4,
#line 867 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 867 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
#line 867 "erl_code_util.m"
{
#line 870 "erl_code_util.m"
  {
#line 870 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 870 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 0)));
#line 870 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 1)));
#line 870 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch_4, (MR_Integer) 2)));
#line 870 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11;
#line 870 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12;

#line 872 "erl_code_util.m"
    {
#line 872 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternA_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, &erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11);
    }
#line 873 "erl_code_util.m"
    {
#line 873 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__PatternB_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_11_11, &erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12);
    }
#line 874 "erl_code_util.m"
    {
#line 874 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_12_12, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
#line 874 "erl_code_util.m"
      return;
    }
#line 870 "erl_code_util.m"
  }
#line 867 "erl_code_util.m"
}

#line 859 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_case_3_p_0(
#line 859 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case_4,
#line 859 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 859 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
#line 859 "erl_code_util.m"
{
#line 862 "erl_code_util.m"
  {
#line 862 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 862 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 0)));
#line 862 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case_4, (MR_Integer) 1)));
#line 862 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;

#line 864 "erl_code_util.m"
    {
#line 864 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Pattern_6, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8, &erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10);
    }
#line 865 "erl_code_util.m"
    {
#line 865 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
#line 865 "erl_code_util.m"
      return;
    }
#line 862 "erl_code_util.m"
  }
#line 859 "erl_code_util.m"
}

#line 857 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0_1(
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 857 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 857 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 857 "erl_code_util.m"
{
#line 857 "erl_code_util.m"
  {
#line 857 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 857 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9;

#line 857 "erl_code_util.m"
    {
#line 857 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_case_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9);
    }
#line 857 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_9));
#line 857 "erl_code_util.m"
  }
#line 857 "erl_code_util.m"
}

#line 853 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(
#line 853 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases_4,
#line 853 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6,
#line 853 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_7)
#line 853 "erl_code_util.m"
{
#line 856 "erl_code_util.m"
  {
#line 856 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 857 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7;

#line 857 "erl_code_util.m"
    {
#line 857 "erl_code_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[9], erl_backend__erl_code_util__Cases_4, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_6)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
    }
#line 857 "erl_code_util.m"
    *erl_backend__erl_code_util__STATE_VARIABLE_Set_7 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_7);
#line 856 "erl_code_util.m"
  }
#line 853 "erl_code_util.m"
}

#line 807 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0_1(
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 807 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 807 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 807 "erl_code_util.m"
{
#line 807 "erl_code_util.m"
  {
#line 807 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 807 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17;

#line 807 "erl_code_util.m"
    {
#line 807 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_term_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17);
    }
#line 807 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_17));
#line 807 "erl_code_util.m"
  }
#line 807 "erl_code_util.m"
}

#line 845 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(
#line 845 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause_4,
#line 845 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8,
#line 845 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_9)
#line 845 "erl_code_util.m"
{
#line 848 "erl_code_util.m"
  {
#line 848 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 848 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 0)));
#line 848 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause_4, (MR_Integer) 1)));
#line 848 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10;
#line 807 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10;

#line 807 "erl_code_util.m"
    {
#line 807 "erl_code_util.m"
      mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[8], erl_backend__erl_code_util__Pattern_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_8)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
    }
#line 807 "erl_code_util.m"
    erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_10_10);
#line 851 "erl_code_util.m"
    {
#line 851 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_10_10, erl_backend__erl_code_util__STATE_VARIABLE_Set_9);
#line 851 "erl_code_util.m"
      return;
    }
#line 848 "erl_code_util.m"
  }
#line 845 "erl_code_util.m"
}

#line 832 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(
#line 832 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target_4,
#line 832 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9,
#line 832 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_10)
#line 832 "erl_code_util.m"
{
#line 837 "erl_code_util.m"
  {
#line 837 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 837 "erl_code_util.m"
#line 837 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Target_4)) {
#line 837 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 837 "erl_code_util.m"
      case (MR_Integer) 0:
#line 837 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
#line 837 "erl_code_util.m"
        break;
#line 837 "erl_code_util.m"
      case (MR_Integer) 1:
#line 841 "erl_code_util.m"
        {
#line 841 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target_4, (MR_Integer) 0)));

#line 842 "erl_code_util.m"
          {
#line 842 "erl_code_util.m"
            erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9, erl_backend__erl_code_util__STATE_VARIABLE_Set_10);
#line 842 "erl_code_util.m"
            return;
          }
#line 841 "erl_code_util.m"
        }
#line 837 "erl_code_util.m"
        break;
#line 837 "erl_code_util.m"
      case (MR_Integer) 2:
#line 838 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_10 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_9;
#line 837 "erl_code_util.m"
        break;
#line 837 "erl_code_util.m"
    }
#line 837 "erl_code_util.m"
  }
#line 832 "erl_code_util.m"
}

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0_1(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 737 "erl_code_util.m"
{
#line 737 "erl_code_util.m"
  {
#line 737 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 737 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

#line 737 "erl_code_util.m"
    {
#line 737 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
#line 737 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
#line 737 "erl_code_util.m"
  }
#line 737 "erl_code_util.m"
}

#line 809 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_term_3_p_0(
#line 809 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_4,
#line 809 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16,
#line 809 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_17)
#line 809 "erl_code_util.m"
{
#line 814 "erl_code_util.m"
  {
#line 814 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 814 "erl_code_util.m"
#line 814 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_4)) {
#line 814 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "erl_code_util.m"
      case (MR_Integer) 0:
#line 821 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
        break;
#line 814 "erl_code_util.m"
      case (MR_Integer) 1:
#line 818 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
        break;
#line 814 "erl_code_util.m"
      case (MR_Integer) 2:
#line 814 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
        break;
#line 814 "erl_code_util.m"
      case (MR_Integer) 3:
#line 814 "erl_code_util.m"
#line 814 "erl_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 0)))) {
#line 814 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 814 "erl_code_util.m"
          case (MR_Integer) 0:
#line 815 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 1:
#line 816 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 2:
#line 817 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 3:
#line 819 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 4:
#line 820 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 5:
#line 825 "erl_code_util.m"
            {
#line 825 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));
#line 737 "erl_code_util.m"
              MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17;

#line 737 "erl_code_util.m"
              {
#line 737 "erl_code_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[7], erl_backend__erl_code_util__Exprs_14, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
              }
#line 737 "erl_code_util.m"
              *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_17);
#line 825 "erl_code_util.m"
            }
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 6:
#line 828 "erl_code_util.m"
            {
#line 828 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_4, (MR_Integer) 1)));

#line 829 "erl_code_util.m"
              {
#line 829 "erl_code_util.m"
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Var_15, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16, erl_backend__erl_code_util__STATE_VARIABLE_Set_17);
#line 829 "erl_code_util.m"
                return;
              }
#line 828 "erl_code_util.m"
            }
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
          case (MR_Integer) 7:
#line 822 "erl_code_util.m"
            *erl_backend__erl_code_util__STATE_VARIABLE_Set_17 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_16;
#line 814 "erl_code_util.m"
            break;
#line 814 "erl_code_util.m"
        }
#line 814 "erl_code_util.m"
        break;
#line 814 "erl_code_util.m"
    }
#line 814 "erl_code_util.m"
  }
#line 809 "erl_code_util.m"
}

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_2(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 737 "erl_code_util.m"
{
#line 737 "erl_code_util.m"
  {
#line 737 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 737 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23;

#line 737 "erl_code_util.m"
    {
#line 737 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23);
    }
#line 737 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv2_STATE_VARIABLE_Set_23));
#line 737 "erl_code_util.m"
  }
#line 737 "erl_code_util.m"
}

#line 737 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0_1(
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 737 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 737 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3)
#line 737 "erl_code_util.m"
{
#line 737 "erl_code_util.m"
  {
#line 737 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 737 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23;

#line 737 "erl_code_util.m"
    {
#line 737 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23);
    }
#line 737 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Set_23));
#line 737 "erl_code_util.m"
  }
#line 737 "erl_code_util.m"
}

#line 739 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(
#line 739 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_4,
#line 739 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22,
#line 739 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Set_23)
#line 739 "erl_code_util.m"
{
#line 744 "erl_code_util.m"
  while (MR_TRUE)
#line 744 "erl_code_util.m"
    {
#line 744 "erl_code_util.m"
      /* tailcall optimized into a loop */
#line 744 "erl_code_util.m"
      {
#line 744 "erl_code_util.m"
        MR_bool erl_backend__erl_code_util__succeeded;

#line 744 "erl_code_util.m"
#line 744 "erl_code_util.m"
        switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr_4)) {
#line 744 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 744 "erl_code_util.m"
          case (MR_Integer) 0:
#line 765 "erl_code_util.m"
            {
#line 765 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Clause_13 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_4), (MR_Integer) 0);

#line 766 "erl_code_util.m"
              {
#line 766 "erl_code_util.m"
                erl_backend__erl_code_util__erl_vars_in_clause_3_p_0(erl_backend__erl_code_util__Clause_13, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 766 "erl_code_util.m"
                return;
              }
#line 765 "erl_code_util.m"
            }
#line 744 "erl_code_util.m"
            break;
#line 744 "erl_code_util.m"
          case (MR_Integer) 1:
#line 744 "erl_code_util.m"
            {
#line 744 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));
#line 737 "erl_code_util.m"
              MR_Box erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23;

#line 737 "erl_code_util.m"
              {
#line 737 "erl_code_util.m"
                mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[5], erl_backend__erl_code_util__Exprs_6, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22)), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
              }
#line 737 "erl_code_util.m"
              *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv1_STATE_VARIABLE_Set_23);
#line 744 "erl_code_util.m"
            }
#line 744 "erl_code_util.m"
            break;
#line 744 "erl_code_util.m"
          case (MR_Integer) 2:
#line 747 "erl_code_util.m"
            {
#line 747 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)));

#line 748 "erl_code_util.m"
              {
#line 748 "erl_code_util.m"
                erl_backend__erl_code_util__erl_vars_in_term_3_p_0(erl_backend__erl_code_util__Term_7, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 748 "erl_code_util.m"
                return;
              }
#line 747 "erl_code_util.m"
            }
#line 744 "erl_code_util.m"
            break;
#line 744 "erl_code_util.m"
          case (MR_Integer) 3:
#line 744 "erl_code_util.m"
#line 744 "erl_code_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 0)))) {
#line 744 "erl_code_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 744 "erl_code_util.m"
              case (MR_Integer) 0:
#line 750 "erl_code_util.m"
                {
#line 750 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 750 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 750 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

#line 751 "erl_code_util.m"
                  {
#line 751 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_8, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40);
                  }
#line 752 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 752 "erl_code_util.m"
                  {
#line 752 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_9;
#line 752 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_40_40;

#line 752 "erl_code_util.m"
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 752 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 752 "erl_code_util.m"
                  }
#line 752 "erl_code_util.m"
                  continue;
#line 750 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 1:
#line 754 "erl_code_util.m"
                {
#line 754 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 754 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 755 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 755 "erl_code_util.m"
                  {
#line 755 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_44;

#line 755 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 755 "erl_code_util.m"
                  }
#line 755 "erl_code_util.m"
                  continue;
#line 754 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 2:
#line 757 "erl_code_util.m"
                {
#line 757 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;
#line 757 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 757 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
#line 757 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 758 "erl_code_util.m"
                  {
#line 758 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_46, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37);
                  }
#line 759 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 759 "erl_code_util.m"
                  {
#line 759 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_47;
#line 759 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_37_37;

#line 759 "erl_code_util.m"
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 759 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 759 "erl_code_util.m"
                  }
#line 759 "erl_code_util.m"
                  continue;
#line 757 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 3:
#line 761 "erl_code_util.m"
                {
#line 761 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__CallTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 761 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 761 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35;
#line 737 "erl_code_util.m"
                  MR_Box erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23;

#line 762 "erl_code_util.m"
                  {
#line 762 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_call_target_3_p_0(erl_backend__erl_code_util__CallTarget_11, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35);
                  }
#line 737 "erl_code_util.m"
                  {
#line 737 "erl_code_util.m"
                    mercury__list__foldl_4_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[2], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[6], erl_backend__erl_code_util__ExprsB_12, ((MR_Box) (erl_backend__erl_code_util__STATE_VARIABLE_Set_35_35)), &erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
                  }
#line 737 "erl_code_util.m"
                  *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = ((MR_Word) erl_backend__erl_code_util__conv3_STATE_VARIABLE_Set_23);
#line 761 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 4:
#line 798 "erl_code_util.m"
                *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 5:
#line 768 "erl_code_util.m"
                {
#line 768 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));
#line 768 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32;
#line 768 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 769 "erl_code_util.m"
                  {
#line 769 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_49, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32);
                  }
#line 770 "erl_code_util.m"
                  {
#line 770 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_14, erl_backend__erl_code_util__STATE_VARIABLE_Set_32_32, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 770 "erl_code_util.m"
                    return;
                  }
#line 768 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 6:
#line 772 "erl_code_util.m"
                {
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__MaybeCatch_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 3)));
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__MaybeAfter_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 4)));
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28;
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 772 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

#line 773 "erl_code_util.m"
                  {
#line 773 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_50, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28);
                  }
#line 774 "erl_code_util.m"
                  {
#line 774 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_51, erl_backend__erl_code_util__STATE_VARIABLE_Set_28_28, &erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29);
                  }
#line 778 "erl_code_util.m"
                  if ((erl_backend__erl_code_util__MaybeCatch_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "erl_code_util.m"
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30 = erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29;
#line 778 "erl_code_util.m"
                  else
#line 776 "erl_code_util.m"
                    {
#line 776 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__Catch_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_15, (MR_Integer) 0)));

#line 777 "erl_code_util.m"
                      {
#line 777 "erl_code_util.m"
                        erl_backend__erl_code_util__erl_vars_in_catch_3_p_0(erl_backend__erl_code_util__Catch_17, erl_backend__erl_code_util__STATE_VARIABLE_Set_29_29, &erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30);
                      }
#line 776 "erl_code_util.m"
                    }
#line 784 "erl_code_util.m"
                  if ((erl_backend__erl_code_util__MaybeAfter_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "erl_code_util.m"
                    *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;
#line 784 "erl_code_util.m"
                  else
#line 782 "erl_code_util.m"
                    {
#line 782 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__After_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_16, (MR_Integer) 0)));

#line 783 "erl_code_util.m"
                      /* direct tailcall eliminated */
#line 783 "erl_code_util.m"
                      {
#line 783 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__After_18;
#line 783 "erl_code_util.m"
                        MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_30_30;

#line 783 "erl_code_util.m"
                        erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 783 "erl_code_util.m"
                        erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 783 "erl_code_util.m"
                      }
#line 783 "erl_code_util.m"
                      continue;
#line 782 "erl_code_util.m"
                    }
#line 772 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 7:
#line 788 "erl_code_util.m"
                {
#line 788 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 789 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 789 "erl_code_util.m"
                  {
#line 789 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprA_52;

#line 789 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 789 "erl_code_util.m"
                  }
#line 789 "erl_code_util.m"
                  continue;
#line 788 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 8:
#line 799 "erl_code_util.m"
                *erl_backend__erl_code_util__STATE_VARIABLE_Set_23 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22;
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 9:
#line 791 "erl_code_util.m"
                {
#line 791 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;
#line 791 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));
#line 791 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 2)));

#line 792 "erl_code_util.m"
                  {
#line 792 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__ExprA_53, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, &erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25);
                  }
#line 793 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 793 "erl_code_util.m"
                  {
#line 793 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_4 = erl_backend__erl_code_util__ExprB_54;
#line 793 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_25_25;

#line 793 "erl_code_util.m"
                    erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22 = erl_backend__erl_code_util__STATE_VARIABLE_Set_0__tmp_copy_22;
#line 793 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr__tmp_copy_4;
#line 793 "erl_code_util.m"
                  }
#line 793 "erl_code_util.m"
                  continue;
#line 791 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
              case (MR_Integer) 10:
#line 795 "erl_code_util.m"
                {
#line 795 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_4, (MR_Integer) 1)));

#line 796 "erl_code_util.m"
                  {
#line 796 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_vars_in_cases_3_p_0(erl_backend__erl_code_util__Cases_55, erl_backend__erl_code_util__STATE_VARIABLE_Set_0_22, erl_backend__erl_code_util__STATE_VARIABLE_Set_23);
#line 796 "erl_code_util.m"
                    return;
                  }
#line 795 "erl_code_util.m"
                }
#line 744 "erl_code_util.m"
                break;
#line 744 "erl_code_util.m"
            }
#line 744 "erl_code_util.m"
            break;
#line 744 "erl_code_util.m"
        }
#line 744 "erl_code_util.m"
      }
#line 744 "erl_code_util.m"
      break;
#line 744 "erl_code_util.m"
    }
#line 739 "erl_code_util.m"
}

#line 710 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(
#line 710 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 710 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Catch0_5,
#line 710 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Catch_6)
#line 710 "erl_code_util.m"
{
#line 713 "erl_code_util.m"
  {
#line 713 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 0)));
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 1)));
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Catch0_5, (MR_Integer) 2)));
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternA_10;
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PatternB_11;
#line 713 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_12;

#line 715 "erl_code_util.m"
    {
#line 715 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternA0_7, &erl_backend__erl_code_util__PatternA_10);
    }
#line 716 "erl_code_util.m"
    {
#line 716 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__PatternB0_8, &erl_backend__erl_code_util__PatternB_11);
    }
#line 717 "erl_code_util.m"
    {
#line 717 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_12);
    }
#line 718 "erl_code_util.m"
    {
#line 718 "erl_code_util.m"
      MR_Word base;
#line 718 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 718 "erl_code_util.m"
      *erl_backend__erl_code_util__Catch_6 = base;
#line 718 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__PatternA_10));
#line 718 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__PatternB_11));
#line 718 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Expr_12));
#line 718 "erl_code_util.m"
    }
#line 713 "erl_code_util.m"
  }
#line 710 "erl_code_util.m"
}

#line 701 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(
#line 701 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 701 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Case0_5,
#line 701 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Case_6)
#line 701 "erl_code_util.m"
{
#line 704 "erl_code_util.m"
  {
#line 704 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 704 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 0)));
#line 704 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Case0_5, (MR_Integer) 1)));
#line 704 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_9;
#line 704 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_10;

#line 706 "erl_code_util.m"
    {
#line 706 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
#line 707 "erl_code_util.m"
    {
#line 707 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
#line 708 "erl_code_util.m"
    {
#line 708 "erl_code_util.m"
      MR_Word base;
#line 708 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "erl_code_util.m"
      *erl_backend__erl_code_util__Case_6 = base;
#line 708 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
#line 708 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 708 "erl_code_util.m"
    }
#line 704 "erl_code_util.m"
  }
#line 701 "erl_code_util.m"
}

#line 699 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1(
#line 699 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 699 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 699 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 699 "erl_code_util.m"
{
#line 699 "erl_code_util.m"
  {
#line 699 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 699 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Case_6;

#line 699 "erl_code_util.m"
    {
#line 699 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Case_6);
    }
#line 699 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Case_6));
#line 699 "erl_code_util.m"
  }
#line 699 "erl_code_util.m"
}

#line 695 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(
#line 695 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 695 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Cases0_5,
#line 695 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Cases_6)
#line 695 "erl_code_util.m"
{
#line 698 "erl_code_util.m"
  {
#line 698 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 698 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
#line 698 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 699 "erl_code_util.m"
    {
#line 699 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 699 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[3]));
#line 699 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0_1));
#line 699 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 699 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 699 "erl_code_util.m"
    }
#line 3594 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
#line 699 "erl_code_util.m"
    {
#line 699 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Cases0_5, erl_backend__erl_code_util__Cases_6);
#line 699 "erl_code_util.m"
      return;
    }
#line 698 "erl_code_util.m"
  }
#line 695 "erl_code_util.m"
}

#line 643 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1(
#line 643 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 643 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 643 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 643 "erl_code_util.m"
{
#line 643 "erl_code_util.m"
  {
#line 643 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 643 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Term_6;

#line 643 "erl_code_util.m"
    {
#line 643 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Term_6);
    }
#line 643 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Term_6));
#line 643 "erl_code_util.m"
  }
#line 643 "erl_code_util.m"
}

#line 686 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(
#line 686 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 686 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Clause0_5,
#line 686 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Clause_6)
#line 686 "erl_code_util.m"
{
#line 689 "erl_code_util.m"
  {
#line 689 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_17;
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 0)));
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Clause0_5, (MR_Integer) 1)));
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Pattern_9;
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr_10;
#line 689 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14;

#line 643 "erl_code_util.m"
    {
#line 643 "erl_code_util.m"
      erl_backend__erl_code_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 643 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[2]));
#line 643 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0_1));
#line 643 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 643 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_14_14, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 643 "erl_code_util.m"
    }
#line 3680 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_17 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0;
#line 643 "erl_code_util.m"
    {
#line 643 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__TypeCtorInfo_10_17, erl_backend__erl_code_util__V_14_14, erl_backend__erl_code_util__Pattern0_7, &erl_backend__erl_code_util__Pattern_9);
    }
#line 692 "erl_code_util.m"
    {
#line 692 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_8, &erl_backend__erl_code_util__Expr_10);
    }
#line 693 "erl_code_util.m"
    {
#line 693 "erl_code_util.m"
      MR_Word base;
#line 693 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "erl_code_util.m"
      *erl_backend__erl_code_util__Clause_6 = base;
#line 693 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Pattern_9));
#line 693 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 693 "erl_code_util.m"
    }
#line 689 "erl_code_util.m"
  }
#line 686 "erl_code_util.m"
}

#line 671 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(
#line 671 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 671 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Target0_5,
#line 671 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Target_6)
#line 671 "erl_code_util.m"
{
#line 678 "erl_code_util.m"
  {
#line 678 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 678 "erl_code_util.m"
#line 678 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Target0_5)) {
#line 678 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 678 "erl_code_util.m"
      case (MR_Integer) 0:
#line 678 "erl_code_util.m"
      case (MR_Integer) 2:
#line 679 "erl_code_util.m"
        *erl_backend__erl_code_util__Target_6 = erl_backend__erl_code_util__Target0_5;
#line 678 "erl_code_util.m"
        break;
#line 678 "erl_code_util.m"
      case (MR_Integer) 1:
#line 681 "erl_code_util.m"
        {
#line 681 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Target0_5, (MR_Integer) 0)));
#line 681 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Expr_10;

#line 682 "erl_code_util.m"
          {
#line 682 "erl_code_util.m"
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Expr0_9, &erl_backend__erl_code_util__Expr_10);
          }
#line 683 "erl_code_util.m"
          {
#line 683 "erl_code_util.m"
            MR_Word base;
#line 683 "erl_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 683 "erl_code_util.m"
            *erl_backend__erl_code_util__Target_6 = base;
#line 683 "erl_code_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_10));
#line 683 "erl_code_util.m"
          }
#line 681 "erl_code_util.m"
        }
#line 678 "erl_code_util.m"
        break;
#line 678 "erl_code_util.m"
    }
#line 678 "erl_code_util.m"
  }
#line 671 "erl_code_util.m"
}

#line 559 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1(
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 559 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 559 "erl_code_util.m"
{
#line 559 "erl_code_util.m"
  {
#line 559 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 559 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

#line 559 "erl_code_util.m"
    {
#line 559 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
#line 559 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
#line 559 "erl_code_util.m"
  }
#line 559 "erl_code_util.m"
}

#line 645 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(
#line 645 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 645 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term0_5,
#line 645 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Term_6)
#line 645 "erl_code_util.m"
{
#line 659 "erl_code_util.m"
  {
#line 659 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 659 "erl_code_util.m"
#line 659 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term0_5)) {
#line 659 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 659 "erl_code_util.m"
      case (MR_Integer) 0:
#line 660 "erl_code_util.m"
        *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
#line 659 "erl_code_util.m"
        break;
#line 659 "erl_code_util.m"
      case (MR_Integer) 1:
#line 659 "erl_code_util.m"
      case (MR_Integer) 2:
#line 660 "erl_code_util.m"
        *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
#line 659 "erl_code_util.m"
        break;
#line 659 "erl_code_util.m"
      case (MR_Integer) 3:
#line 659 "erl_code_util.m"
#line 659 "erl_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 0)))) {
#line 659 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 659 "erl_code_util.m"
          case (MR_Integer) 0:
#line 659 "erl_code_util.m"
          case (MR_Integer) 1:
#line 659 "erl_code_util.m"
          case (MR_Integer) 2:
#line 659 "erl_code_util.m"
          case (MR_Integer) 3:
#line 659 "erl_code_util.m"
          case (MR_Integer) 4:
#line 659 "erl_code_util.m"
          case (MR_Integer) 7:
#line 660 "erl_code_util.m"
            *erl_backend__erl_code_util__Term_6 = erl_backend__erl_code_util__Term0_5;
#line 659 "erl_code_util.m"
            break;
#line 659 "erl_code_util.m"
          case (MR_Integer) 5:
#line 662 "erl_code_util.m"
            {
#line 662 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_27;
#line 662 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
#line 662 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs_16;
#line 662 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__V_24_24;

#line 559 "erl_code_util.m"
              {
#line 559 "erl_code_util.m"
                erl_backend__erl_code_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 559 "erl_code_util.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
#line 559 "erl_code_util.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0_1));
#line 559 "erl_code_util.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 559 "erl_code_util.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_24_24, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 559 "erl_code_util.m"
              }
#line 3892 "erl_backend.erl_code_util.c"
              erl_backend__erl_code_util__TypeCtorInfo_10_27 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 559 "erl_code_util.m"
              {
#line 559 "erl_code_util.m"
                mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__TypeCtorInfo_10_27, erl_backend__erl_code_util__V_24_24, erl_backend__erl_code_util__Exprs0_15, &erl_backend__erl_code_util__Exprs_16);
              }
#line 664 "erl_code_util.m"
              {
#line 664 "erl_code_util.m"
                MR_Word base;
#line 664 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "erl_code_util.m"
                *erl_backend__erl_code_util__Term_6 = base;
#line 664 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 664 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Exprs_16));
#line 664 "erl_code_util.m"
              }
#line 662 "erl_code_util.m"
            }
#line 659 "erl_code_util.m"
            break;
#line 659 "erl_code_util.m"
          case (MR_Integer) 6:
#line 666 "erl_code_util.m"
            {
#line 666 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term0_5, (MR_Integer) 1)));
#line 666 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Var_18;
#line 667 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Var1_19;
#line 667 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 667 "erl_code_util.m"
              MR_Box erl_backend__erl_code_util__conv1_Var1_19;

#line 667 "erl_code_util.m"
              {
#line 667 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = mercury__map__search_3_p_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__Subn_4, ((MR_Box) (erl_backend__erl_code_util__Var0_17)), &erl_backend__erl_code_util__conv1_Var1_19);
              }
#line 667 "erl_code_util.m"
              if (erl_backend__erl_code_util__succeeded)
#line 667 "erl_code_util.m"
                {
#line 667 "erl_code_util.m"
                  erl_backend__erl_code_util__Var1_19 = ((MR_Word) erl_backend__erl_code_util__conv1_Var1_19);
#line 667 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 667 "erl_code_util.m"
                }
#line 667 "erl_code_util.m"
              if (erl_backend__erl_code_util__succeeded)
#line 667 "erl_code_util.m"
                erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var1_19;
#line 667 "erl_code_util.m"
              else
#line 667 "erl_code_util.m"
                erl_backend__erl_code_util__Var_18 = erl_backend__erl_code_util__Var0_17;
#line 668 "erl_code_util.m"
              {
#line 668 "erl_code_util.m"
                MR_Word base;
#line 668 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "erl_code_util.m"
                *erl_backend__erl_code_util__Term_6 = base;
#line 668 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 668 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Var_18));
#line 668 "erl_code_util.m"
              }
#line 666 "erl_code_util.m"
            }
#line 659 "erl_code_util.m"
            break;
#line 659 "erl_code_util.m"
        }
#line 659 "erl_code_util.m"
        break;
#line 659 "erl_code_util.m"
    }
#line 659 "erl_code_util.m"
  }
#line 645 "erl_code_util.m"
}

#line 559 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1(
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 559 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 559 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 559 "erl_code_util.m"
{
#line 559 "erl_code_util.m"
  {
#line 559 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 559 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Expr_6;

#line 559 "erl_code_util.m"
    {
#line 559 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Expr_6);
    }
#line 559 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Expr_6));
#line 559 "erl_code_util.m"
  }
#line 559 "erl_code_util.m"
}

#line 555 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(
#line 555 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 555 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Exprs0_5,
#line 555 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Exprs_6)
#line 555 "erl_code_util.m"
{
#line 558 "erl_code_util.m"
  {
#line 558 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 558 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_10_10;
#line 558 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 559 "erl_code_util.m"
    {
#line 559 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 559 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[1]));
#line 559 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0_1));
#line 559 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 559 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Subn_4));
#line 559 "erl_code_util.m"
    }
#line 4048 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_10_10 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 559 "erl_code_util.m"
    {
#line 559 "erl_code_util.m"
      mercury__list__map_3_p_0(erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__TypeCtorInfo_10_10, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Exprs0_5, erl_backend__erl_code_util__Exprs_6);
#line 559 "erl_code_util.m"
      return;
    }
#line 558 "erl_code_util.m"
  }
#line 555 "erl_code_util.m"
}

#line 544 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OldVar_6,
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11,
#line 544 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12,
#line 544 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13,
#line 544 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Subst_14)
#line 544 "erl_code_util.m"
{
#line 547 "erl_code_util.m"
  {
#line 547 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 547 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeInfo_21_21;
#line 547 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NewVar_10;
#line 550 "erl_code_util.m"
    MR_String erl_backend__erl_code_util__Name_9;

#line 548 "erl_code_util.m"
    {
#line 548 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__OldVar_6, &erl_backend__erl_code_util__Name_9);
    }
#line 550 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 549 "erl_code_util.m"
      {
#line 549 "erl_code_util.m"
        {
#line 549 "erl_code_util.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_9, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
#line 549 "erl_code_util.m"
      }
#line 550 "erl_code_util.m"
    else
#line 551 "erl_code_util.m"
      {
#line 551 "erl_code_util.m"
        {
#line 551 "erl_code_util.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &erl_backend__erl_code_util__NewVar_10, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_11, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_12);
        }
#line 551 "erl_code_util.m"
      }
#line 4115 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeInfo_21_21 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 553 "erl_code_util.m"
    {
#line 553 "erl_code_util.m"
      mercury__map__det_insert_4_p_0(erl_backend__erl_code_util__TypeInfo_21_21, erl_backend__erl_code_util__TypeInfo_21_21, ((MR_Box) (erl_backend__erl_code_util__OldVar_6)), ((MR_Box) (erl_backend__erl_code_util__NewVar_10)), erl_backend__erl_code_util__STATE_VARIABLE_Subst_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Subst_14);
#line 553 "erl_code_util.m"
      return;
    }
#line 547 "erl_code_util.m"
  }
#line 544 "erl_code_util.m"
}

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_1(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 518 "erl_code_util.m"
{
#line 518 "erl_code_util.m"
  {
#line 518 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 518 "erl_code_util.m"
    MR_builtin_longjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0, 1);
#line 518 "erl_code_util.m"
  }
#line 518 "erl_code_util.m"
}

#line 519 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_3(
#line 519 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 519 "erl_code_util.m"
{
#line 519 "erl_code_util.m"
  {
#line 519 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 519 "erl_code_util.m"
    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12 = ((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12);
#line 519 "erl_code_util.m"
    {
#line 519 "erl_code_util.m"
      erl_backend__erl_code_util__non_variable_term_1_p_0_2(erl_backend__erl_code_util__env_ptr);
#line 519 "erl_code_util.m"
      return;
    }
#line 519 "erl_code_util.m"
  }
#line 519 "erl_code_util.m"
}

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_2(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 518 "erl_code_util.m"
{
#line 518 "erl_code_util.m"
  {
#line 518 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 519 "erl_code_util.m"
    (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12)) == (MR_mktag((MR_Integer) 2)));
#line 519 "erl_code_util.m"
    if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
#line 519 "erl_code_util.m"
      {
#line 519 "erl_code_util.m"
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__V_12_12, (MR_Integer) 0)));
#line 518 "erl_code_util.m"
        {
#line 521 "erl_code_util.m"
          {
#line 521 "erl_code_util.m"
            (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerm_11);
          }
#line 520 "erl_code_util.m"
          (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
#line 520 "erl_code_util.m"
          if ((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded)
#line 520 "erl_code_util.m"
            {
#line 520 "erl_code_util.m"
              erl_backend__erl_code_util__non_variable_term_1_p_0_1(erl_backend__erl_code_util__env_ptr);
#line 520 "erl_code_util.m"
              return;
            }
#line 518 "erl_code_util.m"
        }
#line 519 "erl_code_util.m"
      }
#line 518 "erl_code_util.m"
  }
#line 518 "erl_code_util.m"
}

#line 518 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0_4(
#line 518 "erl_code_util.m"
  void * erl_backend__erl_code_util__env_ptr_arg)
#line 518 "erl_code_util.m"
{
#line 518 "erl_code_util.m"
  {
#line 518 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s * erl_backend__erl_code_util__env_ptr = (struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s *) erl_backend__erl_code_util__env_ptr_arg;

#line 518 "erl_code_util.m"
    if (MR_builtin_setjmp((erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__commit_0) == 0)
#line 518 "erl_code_util.m"
      {
#line 518 "erl_code_util.m"
        {
#line 519 "erl_code_util.m"
          {
#line 519 "erl_code_util.m"
            mercury__list__member_2_p_1((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, &(erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__conv0_V_12_12, (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10, erl_backend__erl_code_util__non_variable_term_1_p_0_3, erl_backend__erl_code_util__env_ptr);
          }
#line 518 "erl_code_util.m"
        }
#line 518 "erl_code_util.m"
        (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
#line 518 "erl_code_util.m"
      }
#line 518 "erl_code_util.m"
    else
#line 518 "erl_code_util.m"
      (erl_backend__erl_code_util__env_ptr)->erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 518 "erl_code_util.m"
  }
#line 518 "erl_code_util.m"
}

#line 507 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__non_variable_term_1_p_0(
#line 507 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Term_2)
#line 507 "erl_code_util.m"
{
#line 507 "erl_code_util.m"
  {
#line 507 "erl_code_util.m"
    struct erl_backend__erl_code_util__non_variable_term_1_p_0_env_0_s erl_backend__erl_code_util__env;

#line 510 "erl_code_util.m"
#line 510 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Term_2)) {
#line 510 "erl_code_util.m"
      default:
#line 510 "erl_code_util.m"
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
#line 510 "erl_code_util.m"
        break;
#line 510 "erl_code_util.m"
      case (MR_Integer) 1:
#line 510 "erl_code_util.m"
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
        break;
#line 510 "erl_code_util.m"
      case (MR_Integer) 2:
#line 511 "erl_code_util.m"
        (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
        break;
#line 510 "erl_code_util.m"
      case (MR_Integer) 3:
#line 510 "erl_code_util.m"
#line 510 "erl_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 0)))) {
#line 510 "erl_code_util.m"
          default:
#line 510 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_FALSE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 0:
#line 512 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 1:
#line 513 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 2:
#line 514 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 3:
#line 515 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 4:
#line 516 "erl_code_util.m"
            (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = MR_TRUE;
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
          case (MR_Integer) 5:
#line 517 "erl_code_util.m"
            {
#line 517 "erl_code_util.m"
              (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__SubTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Term_2, (MR_Integer) 1)));
#line 518 "erl_code_util.m"
              {
#line 518 "erl_code_util.m"
                erl_backend__erl_code_util__non_variable_term_1_p_0_4(&erl_backend__erl_code_util__env);
              }
#line 518 "erl_code_util.m"
              (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded = !((erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded);
#line 517 "erl_code_util.m"
            }
#line 510 "erl_code_util.m"
            break;
#line 510 "erl_code_util.m"
        }
#line 510 "erl_code_util.m"
        break;
#line 510 "erl_code_util.m"
    }
#line 510 "erl_code_util.m"
    return (erl_backend__erl_code_util__env).erl_backend__erl_code_util__non_variable_term_1_p_0_env_0__succeeded;
#line 507 "erl_code_util.m"
  }
#line 507 "erl_code_util.m"
}

#line 486 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(
#line 486 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__1_1,
#line 486 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__HeadVar__2_2,
#line 486 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__3_3)
#line 486 "erl_code_util.m"
{
#line 489 "erl_code_util.m"
  {
#line 489 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 489 "erl_code_util.m"
    if ((erl_backend__erl_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "erl_code_util.m"
      {
#line 489 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 489 "erl_code_util.m"
          {
#line 489 "erl_code_util.m"
            *erl_backend__erl_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 489 "erl_code_util.m"
          }
#line 489 "erl_code_util.m"
      }
#line 489 "erl_code_util.m"
    else
#line 490 "erl_code_util.m"
      {
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OC_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OCs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__IC_6;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ICs_7;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NC_8;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NCs_9;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OuterPat_10;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__OuterExpr_11;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InnerPat_12;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InnerTerm_13;
#line 490 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_14_14;

#line 490 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 490 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 490 "erl_code_util.m"
          {
#line 490 "erl_code_util.m"
            erl_backend__erl_code_util__IC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 490 "erl_code_util.m"
            erl_backend__erl_code_util__ICs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 491 "erl_code_util.m"
            erl_backend__erl_code_util__OuterPat_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 0)));
#line 491 "erl_code_util.m"
            erl_backend__erl_code_util__OuterExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__OC_4, (MR_Integer) 1)));
#line 492 "erl_code_util.m"
            erl_backend__erl_code_util__InnerPat_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 0)));
#line 492 "erl_code_util.m"
            erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__IC_6, (MR_Integer) 1)));
#line 492 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 492 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 492 "erl_code_util.m"
              {
#line 492 "erl_code_util.m"
                erl_backend__erl_code_util__InnerTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__V_14_14, (MR_Integer) 0)));
#line 493 "erl_code_util.m"
                {
#line 493 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__non_variable_term_1_p_0(erl_backend__erl_code_util__InnerTerm_13);
                }
#line 490 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 490 "erl_code_util.m"
                  {
#line 497 "erl_code_util.m"
                    {
#line 497 "erl_code_util.m"
                      erl_backend__erl_code_util__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_util__InnerTerm_13, erl_backend__erl_code_util__OuterPat_10);
                    }
#line 498 "erl_code_util.m"
                    if (!(erl_backend__erl_code_util__succeeded))
#line 501 "erl_code_util.m"
                      {
#line 501 "erl_code_util.m"
                        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OuterPat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 502 "erl_code_util.m"
                          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OCs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "erl_code_util.m"
                      }
#line 490 "erl_code_util.m"
                    if (erl_backend__erl_code_util__succeeded)
#line 490 "erl_code_util.m"
                      {
#line 504 "erl_code_util.m"
                        {
#line 504 "erl_code_util.m"
                          erl_backend__erl_code_util__NC_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "erl_code_util.m"
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 0) = ((MR_Box) (erl_backend__erl_code_util__InnerPat_12));
#line 504 "erl_code_util.m"
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__NC_8, 1) = ((MR_Box) (erl_backend__erl_code_util__OuterExpr_11));
#line 504 "erl_code_util.m"
                        }
#line 505 "erl_code_util.m"
                        {
#line 505 "erl_code_util.m"
                          erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OCs_5, erl_backend__erl_code_util__ICs_7, &erl_backend__erl_code_util__NCs_9);
                        }
#line 490 "erl_code_util.m"
                        if (erl_backend__erl_code_util__succeeded)
#line 490 "erl_code_util.m"
                          {
#line 490 "erl_code_util.m"
                            {
#line 490 "erl_code_util.m"
                              MR_Word base;
#line 490 "erl_code_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "erl_code_util.m"
                              *erl_backend__erl_code_util__HeadVar__3_3 = base;
#line 490 "erl_code_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__NC_8));
#line 490 "erl_code_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__NCs_9));
#line 490 "erl_code_util.m"
                            }
#line 490 "erl_code_util.m"
                            erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 490 "erl_code_util.m"
                          }
#line 490 "erl_code_util.m"
                      }
#line 490 "erl_code_util.m"
                  }
#line 492 "erl_code_util.m"
              }
#line 490 "erl_code_util.m"
          }
#line 490 "erl_code_util.m"
      }
#line 489 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 489 "erl_code_util.m"
  }
#line 486 "erl_code_util.m"
}

#line 408 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_8,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstmapDelta_9,
#line 408 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_10)
#line 408 "erl_code_util.m"
{
#line 411 "erl_code_util.m"
  {
#line 411 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 411 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Type_11;
#line 411 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12;

#line 412 "erl_code_util.m"
    {
#line 412 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__InstMap_8, erl_backend__erl_code_util__InstmapDelta_9, erl_backend__erl_code_util__Var_10);
    }
#line 411 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 411 "erl_code_util.m"
      {
#line 413 "erl_code_util.m"
        {
#line 413 "erl_code_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_10, &erl_backend__erl_code_util__Type_11);
        }
#line 414 "erl_code_util.m"
        {
#line 414 "erl_code_util.m"
          erl_backend__erl_code_util__V_12_12 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_11);
        }
#line 414 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_12_12 == (MR_Integer) 1);
#line 411 "erl_code_util.m"
      }
#line 411 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 411 "erl_code_util.m"
  }
#line 408 "erl_code_util.m"
}

#line 302 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(
#line 302 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util___Num_5,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 302 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8,
#line 302 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9)
#line 302 "erl_code_util.m"
{
#line 305 "erl_code_util.m"
  {
#line 305 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 305 "erl_code_util.m"
    {
#line 305 "erl_code_util.m"
      erl_backend__erl_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_110_102_111_95_110_101_119_95_97_110_111_110_121_109_111_117_115_95_118_97_114_95_95_91_49_93_95_48_4_p_0(erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_0_8, erl_backend__erl_code_util__STATE_VARIABLE_VarSet_9);
#line 305 "erl_code_util.m"
      return;
    }
#line 305 "erl_code_util.m"
  }
#line 302 "erl_code_util.m"
}

#line 207 "erl_code_util.m"
MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_base_typeclass_info_method_offset_0_f_0(void)
#line 207 "erl_code_util.m"
{
#line 1007 "erl_code_util.m"
  {
#line 1007 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 1007 "erl_code_util.m"
    return (MR_Integer) 4;
#line 1007 "erl_code_util.m"
  }
#line 207 "erl_code_util.m"
}

#line 203 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(
#line 203 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_3,
#line 203 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_4)
#line 203 "erl_code_util.m"
{
#line 465 "erl_code_util.m"
  {
#line 465 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 465 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Expr1_5;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_18_21;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OuterCond_8;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OuterCases_9;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerCond_10;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerCases_11;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InnerPreamble_12;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NewCases_15;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_17_17;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18;
#line 472 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19;

#line 473 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 473 "erl_code_util.m"
      {
#line 473 "erl_code_util.m"
        erl_backend__erl_code_util__OuterCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 1)));
#line 473 "erl_code_util.m"
        erl_backend__erl_code_util__OuterCases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_3, (MR_Integer) 2)));
#line 477 "erl_code_util.m"
        if (((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 1))))
#line 478 "erl_code_util.m"
          {
#line 478 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__OuterCondExprs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)));
#line 478 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__InnerCaseExpr_14;
#line 479 "erl_code_util.m"
            MR_Box erl_backend__erl_code_util__conv0_InnerCaseExpr_14;

#line 479 "erl_code_util.m"
            {
#line 479 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = mercury__list__split_last_3_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__erl_code_util__OuterCondExprs_13, &erl_backend__erl_code_util__InnerPreamble_12, &erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
            }
#line 479 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 479 "erl_code_util.m"
              {
#line 479 "erl_code_util.m"
                erl_backend__erl_code_util__InnerCaseExpr_14 = ((MR_Word) erl_backend__erl_code_util__conv0_InnerCaseExpr_14);
#line 479 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 479 "erl_code_util.m"
              }
#line 478 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 478 "erl_code_util.m"
              {
#line 480 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_util__InnerCaseExpr_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 480 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 480 "erl_code_util.m"
                  {
#line 480 "erl_code_util.m"
                    erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 1)));
#line 480 "erl_code_util.m"
                    erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__InnerCaseExpr_14, (MR_Integer) 2)));
#line 480 "erl_code_util.m"
                  }
#line 478 "erl_code_util.m"
              }
#line 478 "erl_code_util.m"
          }
#line 477 "erl_code_util.m"
        else
#line 477 "erl_code_util.m"
        if (((((MR_tag((MR_Word) erl_backend__erl_code_util__OuterCond_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 475 "erl_code_util.m"
          {
#line 475 "erl_code_util.m"
            erl_backend__erl_code_util__InnerCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 1)));
#line 475 "erl_code_util.m"
            erl_backend__erl_code_util__InnerCases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__OuterCond_8, (MR_Integer) 2)));
#line 476 "erl_code_util.m"
            erl_backend__erl_code_util__InnerPreamble_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 475 "erl_code_util.m"
          }
#line 477 "erl_code_util.m"
        else
#line 477 "erl_code_util.m"
          erl_backend__erl_code_util__succeeded = MR_FALSE;
#line 472 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 472 "erl_code_util.m"
          {
#line 482 "erl_code_util.m"
            {
#line 482 "erl_code_util.m"
              erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__match_inner_outer_cases_3_p_0(erl_backend__erl_code_util__OuterCases_9, erl_backend__erl_code_util__InnerCases_11, &erl_backend__erl_code_util__NewCases_15);
            }
#line 472 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 472 "erl_code_util.m"
              {
#line 4760 "erl_backend.erl_code_util.c"
                erl_backend__erl_code_util__TypeCtorInfo_18_21 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0;
#line 484 "erl_code_util.m"
                erl_backend__erl_code_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "erl_code_util.m"
                {
#line 484 "erl_code_util.m"
                  erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 484 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 1) = ((MR_Box) (erl_backend__erl_code_util__InnerCond_10));
#line 484 "erl_code_util.m"
                  MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__V_18_18, 2) = ((MR_Box) (erl_backend__erl_code_util__NewCases_15));
#line 484 "erl_code_util.m"
                }
#line 484 "erl_code_util.m"
                {
#line 484 "erl_code_util.m"
                  erl_backend__erl_code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
#line 484 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_17_17, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
#line 484 "erl_code_util.m"
                }
#line 483 "erl_code_util.m"
                {
#line 483 "erl_code_util.m"
                  erl_backend__erl_code_util__V_16_16 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_18_21, erl_backend__erl_code_util__InnerPreamble_12, erl_backend__erl_code_util__V_17_17);
                }
#line 483 "erl_code_util.m"
                {
#line 483 "erl_code_util.m"
                  erl_backend__erl_code_util__Expr1_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "erl_code_util.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr1_5, 0) = ((MR_Box) (erl_backend__erl_code_util__V_16_16));
#line 483 "erl_code_util.m"
                }
#line 483 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = MR_TRUE;
#line 472 "erl_code_util.m"
              }
#line 472 "erl_code_util.m"
          }
#line 473 "erl_code_util.m"
      }
#line 465 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 464 "erl_code_util.m"
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr1_5;
#line 465 "erl_code_util.m"
    else
#line 466 "erl_code_util.m"
      *erl_backend__erl_code_util__Expr_4 = erl_backend__erl_code_util__Expr0_3;
#line 465 "erl_code_util.m"
  }
#line 203 "erl_code_util.m"
}

#line 196 "erl_code_util.m"
MR_Integer MR_CALL 
erl_backend__erl_code_util__erl_expr_size_1_f_0(
#line 196 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_3)
#line 196 "erl_code_util.m"
{
#line 884 "erl_code_util.m"
  while (MR_TRUE)
#line 884 "erl_code_util.m"
    {
#line 884 "erl_code_util.m"
      /* tailcall optimized into a loop */
#line 884 "erl_code_util.m"
      {
#line 884 "erl_code_util.m"
        MR_bool erl_backend__erl_code_util__succeeded;
#line 884 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__Size_4;

#line 884 "erl_code_util.m"
#line 884 "erl_code_util.m"
        switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr_3)) {
#line 884 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 884 "erl_code_util.m"
          case (MR_Integer) 0:
#line 902 "erl_code_util.m"
            {
#line 902 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Terms_11;
#line 902 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__V_47_47 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr_3), (MR_Integer) 0);
#line 902 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_48_48;
#line 902 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_50_50;
#line 902 "erl_code_util.m"
              MR_Integer erl_backend__erl_code_util__V_51_51;
#line 902 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_64;

#line 902 "erl_code_util.m"
              erl_backend__erl_code_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 0)));
#line 902 "erl_code_util.m"
              erl_backend__erl_code_util__ExprA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_47_47, (MR_Integer) 1)));
#line 903 "erl_code_util.m"
              {
#line 903 "erl_code_util.m"
                erl_backend__erl_code_util__V_50_50 = erl_backend__erl_code_util__erl_terms_size_1_f_0(erl_backend__erl_code_util__Terms_11);
              }
#line 903 "erl_code_util.m"
              erl_backend__erl_code_util__V_48_48 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_50_50);
#line 903 "erl_code_util.m"
              {
#line 903 "erl_code_util.m"
                erl_backend__erl_code_util__V_51_51 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_64);
              }
#line 903 "erl_code_util.m"
              erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_48_48 + erl_backend__erl_code_util__V_51_51);
#line 902 "erl_code_util.m"
            }
#line 884 "erl_code_util.m"
            break;
#line 884 "erl_code_util.m"
          case (MR_Integer) 1:
#line 884 "erl_code_util.m"
            {
#line 884 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Exprs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

#line 885 "erl_code_util.m"
              {
#line 885 "erl_code_util.m"
                return erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_5);
              }
#line 884 "erl_code_util.m"
            }
#line 884 "erl_code_util.m"
            break;
#line 884 "erl_code_util.m"
          case (MR_Integer) 2:
#line 887 "erl_code_util.m"
            {
#line 887 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)));

#line 888 "erl_code_util.m"
              {
#line 888 "erl_code_util.m"
                return erl_backend__erl_code_util__Size_4 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__Term_6);
              }
#line 887 "erl_code_util.m"
            }
#line 884 "erl_code_util.m"
            break;
#line 884 "erl_code_util.m"
          case (MR_Integer) 3:
#line 884 "erl_code_util.m"
#line 884 "erl_code_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 0)))) {
#line 884 "erl_code_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 884 "erl_code_util.m"
              case (MR_Integer) 0:
#line 890 "erl_code_util.m"
                {
#line 890 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 890 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 890 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_56_56;
#line 890 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_57_57;

#line 891 "erl_code_util.m"
                  {
#line 891 "erl_code_util.m"
                    erl_backend__erl_code_util__V_56_56 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_7);
                  }
#line 891 "erl_code_util.m"
                  {
#line 891 "erl_code_util.m"
                    erl_backend__erl_code_util__V_57_57 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_8);
                  }
#line 891 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_56_56 + erl_backend__erl_code_util__V_57_57);
#line 890 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 1:
#line 893 "erl_code_util.m"
                {
#line 893 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 893 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 894 "erl_code_util.m"
                  /* direct tailcall eliminated */
#line 894 "erl_code_util.m"
                  {
#line 894 "erl_code_util.m"
                    MR_Word erl_backend__erl_code_util__Expr__tmp_copy_3 = erl_backend__erl_code_util__ExprA_58;

#line 894 "erl_code_util.m"
                    erl_backend__erl_code_util__Expr_3 = erl_backend__erl_code_util__Expr__tmp_copy_3;
#line 894 "erl_code_util.m"
                  }
#line 894 "erl_code_util.m"
                  continue;
#line 893 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 2:
#line 896 "erl_code_util.m"
                {
#line 896 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_54_54;
#line 896 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_55_55;
#line 896 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 896 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
#line 896 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util___Op_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 897 "erl_code_util.m"
                  {
#line 897 "erl_code_util.m"
                    erl_backend__erl_code_util__V_54_54 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_60);
                  }
#line 897 "erl_code_util.m"
                  {
#line 897 "erl_code_util.m"
                    erl_backend__erl_code_util__V_55_55 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_61);
                  }
#line 897 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_54_54 + erl_backend__erl_code_util__V_55_55);
#line 896 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 3:
#line 899 "erl_code_util.m"
                {
#line 899 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__CallTarget_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 899 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_52_52;
#line 899 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_53_53;
#line 899 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Exprs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 900 "erl_code_util.m"
                  {
#line 900 "erl_code_util.m"
                    erl_backend__erl_code_util__V_52_52 = erl_backend__erl_code_util__erl_call_target_size_1_f_0(erl_backend__erl_code_util__CallTarget_10);
                  }
#line 900 "erl_code_util.m"
                  {
#line 900 "erl_code_util.m"
                    erl_backend__erl_code_util__V_53_53 = erl_backend__erl_code_util__erl_exprs_size_1_f_0(erl_backend__erl_code_util__Exprs_63);
                  }
#line 900 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_52_52 + erl_backend__erl_code_util__V_53_53);
#line 899 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 4:
#line 937 "erl_code_util.m"
                erl_backend__erl_code_util__Size_4 = (MR_Integer) 1;
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 5:
#line 905 "erl_code_util.m"
                {
#line 905 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));
#line 905 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_43_43;
#line 905 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_45_45;
#line 905 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_46_46;
#line 905 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 906 "erl_code_util.m"
                  {
#line 906 "erl_code_util.m"
                    erl_backend__erl_code_util__V_45_45 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_65);
                  }
#line 906 "erl_code_util.m"
                  erl_backend__erl_code_util__V_43_43 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_45_45);
#line 906 "erl_code_util.m"
                  {
#line 906 "erl_code_util.m"
                    erl_backend__erl_code_util__V_46_46 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_12);
                  }
#line 906 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_43_43 + erl_backend__erl_code_util__V_46_46);
#line 905 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 6:
#line 908 "erl_code_util.m"
                {
#line 908 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__MaybeCatch_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 3)));
#line 908 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__MaybeAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 4)));
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__CatchSize_18;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__AfterSize_20;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_37_37;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_38_38;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_39_39;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_41_41;
#line 908 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_42_42;
#line 908 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 908 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 913 "erl_code_util.m"
                  if ((erl_backend__erl_code_util__MaybeCatch_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "erl_code_util.m"
                    erl_backend__erl_code_util__CatchSize_18 = (MR_Integer) 0;
#line 913 "erl_code_util.m"
                  else
#line 910 "erl_code_util.m"
                    {
#line 910 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__TermA_15;
#line 910 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__TermB_16;
#line 910 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__CatchExpr_17;
#line 910 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_13, (MR_Integer) 0)));
#line 910 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_33_33;
#line 910 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_34_34;
#line 910 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_35_35;
#line 910 "erl_code_util.m"
                      MR_Integer erl_backend__erl_code_util__V_36_36;

#line 910 "erl_code_util.m"
                      erl_backend__erl_code_util__TermA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 0)));
#line 910 "erl_code_util.m"
                      erl_backend__erl_code_util__TermB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 1)));
#line 910 "erl_code_util.m"
                      erl_backend__erl_code_util__CatchExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_32_32, (MR_Integer) 2)));
#line 911 "erl_code_util.m"
                      {
#line 911 "erl_code_util.m"
                        erl_backend__erl_code_util__V_34_34 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermA_15);
                      }
#line 911 "erl_code_util.m"
                      {
#line 911 "erl_code_util.m"
                        erl_backend__erl_code_util__V_35_35 = erl_backend__erl_code_util__erl_term_size_1_f_0(erl_backend__erl_code_util__TermB_16);
                      }
#line 911 "erl_code_util.m"
                      erl_backend__erl_code_util__V_33_33 = (erl_backend__erl_code_util__V_34_34 + erl_backend__erl_code_util__V_35_35);
#line 912 "erl_code_util.m"
                      {
#line 912 "erl_code_util.m"
                        erl_backend__erl_code_util__V_36_36 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__CatchExpr_17);
                      }
#line 911 "erl_code_util.m"
                      erl_backend__erl_code_util__CatchSize_18 = (erl_backend__erl_code_util__V_33_33 + erl_backend__erl_code_util__V_36_36);
#line 910 "erl_code_util.m"
                    }
#line 920 "erl_code_util.m"
                  if ((erl_backend__erl_code_util__MaybeAfter_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "erl_code_util.m"
                    erl_backend__erl_code_util__AfterSize_20 = (MR_Integer) 0;
#line 920 "erl_code_util.m"
                  else
#line 918 "erl_code_util.m"
                    {
#line 918 "erl_code_util.m"
                      MR_Word erl_backend__erl_code_util__AfterExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_14, (MR_Integer) 0)));

#line 919 "erl_code_util.m"
                      {
#line 919 "erl_code_util.m"
                        erl_backend__erl_code_util__AfterSize_20 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__AfterExpr_19);
                      }
#line 918 "erl_code_util.m"
                    }
#line 924 "erl_code_util.m"
                  {
#line 924 "erl_code_util.m"
                    erl_backend__erl_code_util__V_41_41 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_66);
                  }
#line 924 "erl_code_util.m"
                  erl_backend__erl_code_util__V_39_39 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_41_41);
#line 924 "erl_code_util.m"
                  {
#line 924 "erl_code_util.m"
                    erl_backend__erl_code_util__V_42_42 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_67);
                  }
#line 924 "erl_code_util.m"
                  erl_backend__erl_code_util__V_38_38 = (erl_backend__erl_code_util__V_39_39 + erl_backend__erl_code_util__V_42_42);
#line 924 "erl_code_util.m"
                  erl_backend__erl_code_util__V_37_37 = (erl_backend__erl_code_util__V_38_38 + erl_backend__erl_code_util__CatchSize_18);
#line 925 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_37_37 + erl_backend__erl_code_util__AfterSize_20);
#line 908 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 7:
#line 927 "erl_code_util.m"
                {
#line 927 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_31_31;
#line 927 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 928 "erl_code_util.m"
                  {
#line 928 "erl_code_util.m"
                    erl_backend__erl_code_util__V_31_31 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_68);
                  }
#line 928 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_31_31);
#line 927 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 8:
#line 941 "erl_code_util.m"
                erl_backend__erl_code_util__Size_4 = (MR_Integer) 10000;
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 9:
#line 930 "erl_code_util.m"
                {
#line 930 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_26_26;
#line 930 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_28_28;
#line 930 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_29_29;
#line 930 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprA_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));
#line 930 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__ExprB_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 2)));

#line 931 "erl_code_util.m"
                  {
#line 931 "erl_code_util.m"
                    erl_backend__erl_code_util__V_28_28 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprA_69);
                  }
#line 931 "erl_code_util.m"
                  erl_backend__erl_code_util__V_26_26 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_28_28);
#line 931 "erl_code_util.m"
                  {
#line 931 "erl_code_util.m"
                    erl_backend__erl_code_util__V_29_29 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_util__ExprB_70);
                  }
#line 931 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = (erl_backend__erl_code_util__V_26_26 + erl_backend__erl_code_util__V_29_29);
#line 930 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
              case (MR_Integer) 10:
#line 933 "erl_code_util.m"
                {
#line 933 "erl_code_util.m"
                  MR_Integer erl_backend__erl_code_util__V_25_25;
#line 933 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Cases_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr_3, (MR_Integer) 1)));

#line 934 "erl_code_util.m"
                  {
#line 934 "erl_code_util.m"
                    erl_backend__erl_code_util__V_25_25 = erl_backend__erl_code_util__erl_cases_size_1_f_0(erl_backend__erl_code_util__Cases_71);
                  }
#line 934 "erl_code_util.m"
                  erl_backend__erl_code_util__Size_4 = ((MR_Integer) 1 + erl_backend__erl_code_util__V_25_25);
#line 933 "erl_code_util.m"
                }
#line 884 "erl_code_util.m"
                break;
#line 884 "erl_code_util.m"
            }
#line 884 "erl_code_util.m"
            break;
#line 884 "erl_code_util.m"
        }
#line 884 "erl_code_util.m"
        return erl_backend__erl_code_util__Size_4;
#line 884 "erl_code_util.m"
      }
#line 884 "erl_code_util.m"
      break;
#line 884 "erl_code_util.m"
    }
#line 196 "erl_code_util.m"
}

#line 190 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_expr_vars_2_p_0(
#line 190 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr_3,
#line 190 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Set_4)
#line 190 "erl_code_util.m"
{
#line 730 "erl_code_util.m"
  {
#line 730 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 730 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5;

#line 731 "erl_code_util.m"
    {
#line 731 "erl_code_util.m"
      erl_backend__erl_code_util__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 731 "erl_code_util.m"
    {
#line 731 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr_3, erl_backend__erl_code_util__V_5_5, erl_backend__erl_code_util__Set_4);
#line 731 "erl_code_util.m"
      return;
    }
#line 730 "erl_code_util.m"
  }
#line 190 "erl_code_util.m"
}

#line 183 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(
#line 183 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ExceptVars_6,
#line 183 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_7,
#line 183 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_8,
#line 183 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13,
#line 183 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_14)
#line 183 "erl_code_util.m"
{
#line 722 "erl_code_util.m"
  {
#line 722 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_17_17;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Vars0_10;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Vars_11;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Subn_12;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15;
#line 722 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20;

#line 731 "erl_code_util.m"
    {
#line 731 "erl_code_util.m"
      erl_backend__erl_code_util__V_20_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 731 "erl_code_util.m"
    {
#line 731 "erl_code_util.m"
      erl_backend__erl_code_util__erl_vars_in_expr_3_p_0(erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__V_20_20, &erl_backend__erl_code_util__Vars0_10);
    }
#line 5367 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 724 "erl_code_util.m"
    {
#line 724 "erl_code_util.m"
      erl_backend__erl_code_util__Vars_11 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars0_10, erl_backend__erl_code_util__ExceptVars_6);
    }
#line 725 "erl_code_util.m"
    {
#line 725 "erl_code_util.m"
      erl_backend__erl_code_util__V_15_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_17_17, erl_backend__erl_code_util__Vars_11);
    }
#line 725 "erl_code_util.m"
    {
#line 725 "erl_code_util.m"
      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_util__V_15_15, &erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_13, erl_backend__erl_code_util__STATE_VARIABLE_Info_14);
    }
#line 726 "erl_code_util.m"
    {
#line 726 "erl_code_util.m"
      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_12, erl_backend__erl_code_util__Expr0_7, erl_backend__erl_code_util__Expr_8);
#line 726 "erl_code_util.m"
      return;
    }
#line 722 "erl_code_util.m"
  }
#line 183 "erl_code_util.m"
}

#line 175 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(
#line 175 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Subn_4,
#line 175 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Expr0_5,
#line 175 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Expr_6)
#line 175 "erl_code_util.m"
{
#line 563 "erl_code_util.m"
  {
#line 563 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 563 "erl_code_util.m"
#line 563 "erl_code_util.m"
    switch (MR_tag((MR_Word) erl_backend__erl_code_util__Expr0_5)) {
#line 563 "erl_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "erl_code_util.m"
      case (MR_Integer) 0:
#line 590 "erl_code_util.m"
        {
#line 590 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Clause0_20 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_util__Expr0_5), (MR_Integer) 0);
#line 590 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Clause_21;

#line 591 "erl_code_util.m"
          {
#line 591 "erl_code_util.m"
            erl_backend__erl_code_util__erl_rename_vars_in_clause_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Clause0_20, &erl_backend__erl_code_util__Clause_21);
          }
#line 592 "erl_code_util.m"
          *erl_backend__erl_code_util__Expr_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_util__Clause_21);
#line 590 "erl_code_util.m"
        }
#line 563 "erl_code_util.m"
        break;
#line 563 "erl_code_util.m"
      case (MR_Integer) 1:
#line 563 "erl_code_util.m"
        {
#line 563 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Exprs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
#line 563 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Exprs_8;

#line 564 "erl_code_util.m"
          {
#line 564 "erl_code_util.m"
            erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Exprs0_7, &erl_backend__erl_code_util__Exprs_8);
          }
#line 565 "erl_code_util.m"
          {
#line 565 "erl_code_util.m"
            MR_Word base;
#line 565 "erl_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "erl_code_util.m"
            *erl_backend__erl_code_util__Expr_6 = base;
#line 565 "erl_code_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Exprs_8));
#line 565 "erl_code_util.m"
          }
#line 563 "erl_code_util.m"
        }
#line 563 "erl_code_util.m"
        break;
#line 563 "erl_code_util.m"
      case (MR_Integer) 2:
#line 567 "erl_code_util.m"
        {
#line 567 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)));
#line 567 "erl_code_util.m"
          MR_Word erl_backend__erl_code_util__Term_10;

#line 568 "erl_code_util.m"
          {
#line 568 "erl_code_util.m"
            erl_backend__erl_code_util__erl_rename_vars_in_term_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Term0_9, &erl_backend__erl_code_util__Term_10);
          }
#line 569 "erl_code_util.m"
          {
#line 569 "erl_code_util.m"
            MR_Word base;
#line 569 "erl_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "erl_code_util.m"
            *erl_backend__erl_code_util__Expr_6 = base;
#line 569 "erl_code_util.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Term_10));
#line 569 "erl_code_util.m"
          }
#line 567 "erl_code_util.m"
        }
#line 563 "erl_code_util.m"
        break;
#line 563 "erl_code_util.m"
      case (MR_Integer) 3:
#line 563 "erl_code_util.m"
#line 563 "erl_code_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 0)))) {
#line 563 "erl_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 563 "erl_code_util.m"
          case (MR_Integer) 0:
#line 571 "erl_code_util.m"
            {
#line 571 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 571 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 571 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_13;
#line 571 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB_14;

#line 572 "erl_code_util.m"
              {
#line 572 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_11, &erl_backend__erl_code_util__ExprA_13);
              }
#line 573 "erl_code_util.m"
              {
#line 573 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_12, &erl_backend__erl_code_util__ExprB_14);
              }
#line 574 "erl_code_util.m"
              {
#line 574 "erl_code_util.m"
                MR_Word base;
#line 574 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 574 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 574 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 574 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_13));
#line 574 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_14));
#line 574 "erl_code_util.m"
              }
#line 571 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 1:
#line 576 "erl_code_util.m"
            {
#line 576 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Op_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 576 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 576 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_36;

#line 577 "erl_code_util.m"
              {
#line 577 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_35, &erl_backend__erl_code_util__ExprA_36);
              }
#line 578 "erl_code_util.m"
              {
#line 578 "erl_code_util.m"
                MR_Word base;
#line 578 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 578 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 578 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_15));
#line 578 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_36));
#line 578 "erl_code_util.m"
              }
#line 576 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 2:
#line 580 "erl_code_util.m"
            {
#line 580 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 580 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
#line 580 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_39;
#line 580 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB_40;
#line 580 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Op_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));

#line 581 "erl_code_util.m"
              {
#line 581 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_37, &erl_backend__erl_code_util__ExprA_39);
              }
#line 582 "erl_code_util.m"
              {
#line 582 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_38, &erl_backend__erl_code_util__ExprB_40);
              }
#line 583 "erl_code_util.m"
              {
#line 583 "erl_code_util.m"
                MR_Word base;
#line 583 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 583 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 583 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 583 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Op_41));
#line 583 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprA_39));
#line 583 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__ExprB_40));
#line 583 "erl_code_util.m"
              }
#line 580 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 3:
#line 585 "erl_code_util.m"
            {
#line 585 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__CallTarget0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 585 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprsB0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 585 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__CallTarget_18;
#line 585 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprsB_19;

#line 586 "erl_code_util.m"
              {
#line 586 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_call_target_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__CallTarget0_16, &erl_backend__erl_code_util__CallTarget_18);
              }
#line 587 "erl_code_util.m"
              {
#line 587 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_exprs_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprsB0_17, &erl_backend__erl_code_util__ExprsB_19);
              }
#line 588 "erl_code_util.m"
              {
#line 588 "erl_code_util.m"
                MR_Word base;
#line 588 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 588 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 588 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 588 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__CallTarget_18));
#line 588 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprsB_19));
#line 588 "erl_code_util.m"
              }
#line 585 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 4:
#line 563 "erl_code_util.m"
          case (MR_Integer) 8:
#line 636 "erl_code_util.m"
            *erl_backend__erl_code_util__Expr_6 = erl_backend__erl_code_util__Expr0_5;
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 5:
#line 594 "erl_code_util.m"
            {
#line 594 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 594 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases_23;
#line 594 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 594 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_43;

#line 595 "erl_code_util.m"
              {
#line 595 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_42, &erl_backend__erl_code_util__ExprA_43);
              }
#line 596 "erl_code_util.m"
              {
#line 596 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_22, &erl_backend__erl_code_util__Cases_23);
              }
#line 597 "erl_code_util.m"
              {
#line 597 "erl_code_util.m"
                MR_Word base;
#line 597 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 597 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 597 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 597 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_43));
#line 597 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_23));
#line 597 "erl_code_util.m"
              }
#line 594 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 6:
#line 599 "erl_code_util.m"
            {
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__MaybeCatch0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 3)));
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__MaybeAfter0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 4)));
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__MaybeCatch_28;
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__MaybeAfter_31;
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_45;
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 599 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases_47;

#line 600 "erl_code_util.m"
              {
#line 600 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_44, &erl_backend__erl_code_util__ExprA_45);
              }
#line 601 "erl_code_util.m"
              {
#line 601 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_46, &erl_backend__erl_code_util__Cases_47);
              }
#line 606 "erl_code_util.m"
              if ((erl_backend__erl_code_util__MaybeCatch0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "erl_code_util.m"
                erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "erl_code_util.m"
              else
#line 603 "erl_code_util.m"
                {
#line 603 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Catch0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch0_24, (MR_Integer) 0)));
#line 603 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__Catch_27;

#line 604 "erl_code_util.m"
                  {
#line 604 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_rename_vars_in_catch_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Catch0_26, &erl_backend__erl_code_util__Catch_27);
                  }
#line 605 "erl_code_util.m"
                  {
#line 605 "erl_code_util.m"
                    erl_backend__erl_code_util__MaybeCatch_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeCatch_28, 0) = ((MR_Box) (erl_backend__erl_code_util__Catch_27));
#line 605 "erl_code_util.m"
                  }
#line 603 "erl_code_util.m"
                }
#line 614 "erl_code_util.m"
              if ((erl_backend__erl_code_util__MaybeAfter0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "erl_code_util.m"
                erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "erl_code_util.m"
              else
#line 611 "erl_code_util.m"
                {
#line 611 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__After0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter0_25, (MR_Integer) 0)));
#line 611 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__After_30;

#line 612 "erl_code_util.m"
                  {
#line 612 "erl_code_util.m"
                    erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__After0_29, &erl_backend__erl_code_util__After_30);
                  }
#line 613 "erl_code_util.m"
                  {
#line 613 "erl_code_util.m"
                    erl_backend__erl_code_util__MaybeAfter_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "erl_code_util.m"
                    MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeAfter_31, 0) = ((MR_Box) (erl_backend__erl_code_util__After_30));
#line 613 "erl_code_util.m"
                  }
#line 611 "erl_code_util.m"
                }
#line 618 "erl_code_util.m"
              {
#line 618 "erl_code_util.m"
                MR_Word base;
#line 618 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 618 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 618 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 618 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_45));
#line 618 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__Cases_47));
#line 618 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_util__MaybeCatch_28));
#line 618 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (erl_backend__erl_code_util__MaybeAfter_31));
#line 618 "erl_code_util.m"
              }
#line 599 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 7:
#line 620 "erl_code_util.m"
            {
#line 620 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 620 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_49;

#line 621 "erl_code_util.m"
              {
#line 621 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_48, &erl_backend__erl_code_util__ExprA_49);
              }
#line 622 "erl_code_util.m"
              {
#line 622 "erl_code_util.m"
                MR_Word base;
#line 622 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 622 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 622 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_49));
#line 622 "erl_code_util.m"
              }
#line 620 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 9:
#line 624 "erl_code_util.m"
            {
#line 624 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 624 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 2)));
#line 624 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprA_52;
#line 624 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__ExprB_53;

#line 625 "erl_code_util.m"
              {
#line 625 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprA0_50, &erl_backend__erl_code_util__ExprA_52);
              }
#line 626 "erl_code_util.m"
              {
#line 626 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__ExprB0_51, &erl_backend__erl_code_util__ExprB_53);
              }
#line 627 "erl_code_util.m"
              {
#line 627 "erl_code_util.m"
                MR_Word base;
#line 627 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 627 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 627 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 627 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__ExprA_52));
#line 627 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_util__ExprB_53));
#line 627 "erl_code_util.m"
              }
#line 624 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
          case (MR_Integer) 10:
#line 629 "erl_code_util.m"
            {
#line 629 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_util__Expr0_5, (MR_Integer) 1)));
#line 629 "erl_code_util.m"
              MR_Word erl_backend__erl_code_util__Cases_55;

#line 630 "erl_code_util.m"
              {
#line 630 "erl_code_util.m"
                erl_backend__erl_code_util__erl_rename_vars_in_cases_3_p_0(erl_backend__erl_code_util__Subn_4, erl_backend__erl_code_util__Cases0_54, &erl_backend__erl_code_util__Cases_55);
              }
#line 631 "erl_code_util.m"
              {
#line 631 "erl_code_util.m"
                MR_Word base;
#line 631 "erl_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "erl_code_util.m"
                *erl_backend__erl_code_util__Expr_6 = base;
#line 631 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 631 "erl_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Cases_55));
#line 631 "erl_code_util.m"
              }
#line 629 "erl_code_util.m"
            }
#line 563 "erl_code_util.m"
            break;
#line 563 "erl_code_util.m"
        }
#line 563 "erl_code_util.m"
        break;
#line 563 "erl_code_util.m"
    }
#line 563 "erl_code_util.m"
  }
#line 175 "erl_code_util.m"
}

#line 541 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0_1(
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_2,
#line 541 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_3,
#line 541 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_4,
#line 541 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_5)
#line 541 "erl_code_util.m"
{
#line 541 "erl_code_util.m"
  {
#line 541 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 541 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12;
#line 541 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14;

#line 541 "erl_code_util.m"
    {
#line 541 "erl_code_util.m"
      erl_backend__erl_code_util__erl_create_renaming_2_5_p_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_2), &erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_4), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14);
    }
#line 541 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_util__conv1_STATE_VARIABLE_VarSet_12));
#line 541 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_5 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_Subst_14));
#line 541 "erl_code_util.m"
  }
#line 541 "erl_code_util.m"
}

#line 166 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_create_renaming_4_p_0(
#line 166 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Vars_5,
#line 166 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Subst_6,
#line 166 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 166 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 166 "erl_code_util.m"
{
#line 539 "erl_code_util.m"
  {
#line 539 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 539 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeInfo_20_20 = (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0];
#line 539 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 539 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 539 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 541 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv3_VarSet_9;
#line 541 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_Subst_6;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_36_36;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_37_37;
#line 284 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_38_38;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_40_40;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_41_41;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_42_42;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_43_43;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_39_39;

#line 541 "erl_code_util.m"
    {
#line 541 "erl_code_util.m"
      erl_backend__erl_code_util__V_13_13 = mercury__map__init_0_f_0(erl_backend__erl_code_util__TypeInfo_20_20, erl_backend__erl_code_util__TypeInfo_20_20);
    }
#line 541 "erl_code_util.m"
    {
#line 541 "erl_code_util.m"
      mercury__list__foldl2_6_p_0(erl_backend__erl_code_util__TypeInfo_20_20, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[4], erl_backend__erl_code_util__Vars_5, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv3_VarSet_9, ((MR_Box) (erl_backend__erl_code_util__V_13_13)), &erl_backend__erl_code_util__conv2_Subst_6);
    }
#line 541 "erl_code_util.m"
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv3_VarSet_9);
#line 541 "erl_code_util.m"
    *erl_backend__erl_code_util__Subst_6 = ((MR_Word) erl_backend__erl_code_util__conv2_Subst_6);
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    {
#line 284 "erl_code_util.m"
      MR_Word base;
#line 284 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 284 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
#line 284 "erl_code_util.m"
    }
#line 539 "erl_code_util.m"
  }
#line 166 "erl_code_util.m"
}

#line 159 "erl_code_util.m"
MR_Word MR_CALL 
erl_backend__erl_code_util__erl_var_or_dummy_replacement_4_f_0(
#line 159 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_6,
#line 159 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarTypes_7,
#line 159 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__DummyVarReplacement_8,
#line 159 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_9)
#line 159 "erl_code_util.m"
{
#line 527 "erl_code_util.m"
  {
#line 527 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 527 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadVar__5_5;
#line 529 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Type_10;
#line 529 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11;

#line 529 "erl_code_util.m"
    {
#line 529 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = hlds__vartypes__search_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_9, &erl_backend__erl_code_util__Type_10);
    }
#line 529 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 529 "erl_code_util.m"
      {
#line 530 "erl_code_util.m"
        {
#line 530 "erl_code_util.m"
          erl_backend__erl_code_util__V_11_11 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_6, erl_backend__erl_code_util__Type_10);
        }
#line 530 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_11_11 == (MR_Integer) 0);
#line 529 "erl_code_util.m"
      }
#line 527 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 532 "erl_code_util.m"
      {
#line 532 "erl_code_util.m"
        erl_backend__erl_code_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "erl_code_util.m"
        MR_hl_field(MR_mktag(2), erl_backend__erl_code_util__HeadVar__5_5, 0) = ((MR_Box) (erl_backend__erl_code_util__DummyVarReplacement_8));
#line 532 "erl_code_util.m"
      }
#line 527 "erl_code_util.m"
    else
#line 534 "erl_code_util.m"
      {
#line 534 "erl_code_util.m"
        return erl_backend__erl_code_util__HeadVar__5_5 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_util__Var_9);
      }
#line 527 "erl_code_util.m"
    return erl_backend__erl_code_util__HeadVar__5_5;
#line 527 "erl_code_util.m"
  }
#line 159 "erl_code_util.m"
}

#line 425 "erl_code_util.m"
static MR_Box MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0_1(
#line 425 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 425 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 425 "erl_code_util.m"
{
#line 425 "erl_code_util.m"
  {
#line 425 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__wrapper_arg_2;
#line 425 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 425 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_HeadVar__2_2;

#line 425 "erl_code_util.m"
    {
#line 425 "erl_code_util.m"
      erl_backend__erl_code_util__conv0_HeadVar__2_2 = erl_backend__elds__var_eq_false_1_f_0(((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 425 "erl_code_util.m"
    erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_HeadVar__2_2));
#line 425 "erl_code_util.m"
    return erl_backend__erl_code_util__wrapper_arg_2;
#line 425 "erl_code_util.m"
  }
#line 425 "erl_code_util.m"
}

#line 151 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(
#line 151 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_7,
#line 151 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarsToBind_8,
#line 151 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_9,
#line 151 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_10,
#line 151 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Statement0_11,
#line 151 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Statement_12)
#line 151 "erl_code_util.m"
{
#line 417 "erl_code_util.m"
  {
#line 417 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 417 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__TypeCtorInfo_19_19;
#line 417 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Bound_13;
#line 417 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NotBound_14;

#line 418 "erl_code_util.m"
    {
#line 418 "erl_code_util.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_util__Info_7, erl_backend__erl_code_util__InstMap_10, erl_backend__erl_code_util__Goal_9, &erl_backend__erl_code_util__Bound_13);
    }
#line 6245 "erl_backend.erl_code_util.c"
    erl_backend__erl_code_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 419 "erl_code_util.m"
    {
#line 419 "erl_code_util.m"
      erl_backend__erl_code_util__NotBound_14 = parse_tree__set_of_var__difference_2_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__VarsToBind_8, erl_backend__erl_code_util__Bound_13);
    }
#line 420 "erl_code_util.m"
    {
#line 420 "erl_code_util.m"
      erl_backend__erl_code_util__succeeded = parse_tree__set_of_var__is_empty_1_p_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
    }
#line 422 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 421 "erl_code_util.m"
      *erl_backend__erl_code_util__Statement_12 = erl_backend__erl_code_util__Statement0_11;
#line 422 "erl_code_util.m"
    else
#line 424 "erl_code_util.m"
      {
#line 424 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__NotBoundList_15;
#line 424 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Assignments_16;
#line 424 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_18_18;

#line 424 "erl_code_util.m"
        {
#line 424 "erl_code_util.m"
          erl_backend__erl_code_util__NotBoundList_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_util__TypeCtorInfo_19_19, erl_backend__erl_code_util__NotBound_14);
        }
#line 425 "erl_code_util.m"
        {
#line 425 "erl_code_util.m"
          erl_backend__erl_code_util__Assignments_16 = mercury__list__map_2_f_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_2[3], erl_backend__erl_code_util__NotBoundList_15);
        }
#line 426 "erl_code_util.m"
        {
#line 426 "erl_code_util.m"
          erl_backend__erl_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__V_18_18, 0) = ((MR_Box) (erl_backend__erl_code_util__Assignments_16));
#line 426 "erl_code_util.m"
        }
#line 426 "erl_code_util.m"
        {
#line 426 "erl_code_util.m"
          *erl_backend__erl_code_util__Statement_12 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_util__V_18_18, erl_backend__erl_code_util__Statement0_11);
        }
#line 424 "erl_code_util.m"
      }
#line 417 "erl_code_util.m"
  }
#line 151 "erl_code_util.m"
}

#line 405 "erl_code_util.m"
static MR_bool MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1(
#line 405 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 405 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1)
#line 405 "erl_code_util.m"
{
#line 405 "erl_code_util.m"
  {
#line 405 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 405 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;

#line 405 "erl_code_util.m"
    {
#line 405 "erl_code_util.m"
      return erl_backend__erl_code_util__succeeded = erl_backend__erl_code_util__is_bound_and_not_dummy_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1));
    }
#line 405 "erl_code_util.m"
    return erl_backend__erl_code_util__succeeded;
#line 405 "erl_code_util.m"
  }
#line 405 "erl_code_util.m"
}

#line 136 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(
#line 136 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_5,
#line 136 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap_6,
#line 136 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_7,
#line 136 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__BoundNonLocals_8)
#line 136 "erl_code_util.m"
{
#line 398 "erl_code_util.m"
  {
#line 398 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 0)));
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 4)));
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 1)));
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__NonLocals_13;
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InstmapDelta_14;
#line 398 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 3)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_5, (MR_Integer) 7)));
#line 401 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Goal_7, (MR_Integer) 0)));

#line 402 "erl_code_util.m"
    {
#line 402 "erl_code_util.m"
      erl_backend__erl_code_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
#line 403 "erl_code_util.m"
    {
#line 403 "erl_code_util.m"
      erl_backend__erl_code_util__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(erl_backend__erl_code_util__GoalInfo_12);
    }
#line 405 "erl_code_util.m"
    {
#line 405 "erl_code_util.m"
      erl_backend__erl_code_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_5[0]));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0_1));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 3) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_9));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_10));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 5) = ((MR_Box) (erl_backend__erl_code_util__InstMap_6));
#line 405 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_15_15, 6) = ((MR_Box) (erl_backend__erl_code_util__InstmapDelta_14));
#line 405 "erl_code_util.m"
    }
#line 404 "erl_code_util.m"
    {
#line 404 "erl_code_util.m"
      *erl_backend__erl_code_util__BoundNonLocals_8 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__V_15_15, erl_backend__erl_code_util__NonLocals_13);
    }
#line 398 "erl_code_util.m"
  }
#line 136 "erl_code_util.m"
}

#line 129 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(
#line 129 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__InstMap0_7,
#line 129 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Goal_8,
#line 129 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__MaybeExpr0_9,
#line 129 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__MaybeExpr_10,
#line 129 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17,
#line 129 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_18)
#line 129 "erl_code_util.m"
{
#line 385 "erl_code_util.m"
  {
#line 385 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;

#line 385 "erl_code_util.m"
    if ((erl_backend__erl_code_util__MaybeExpr0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "erl_code_util.m"
      {
#line 393 "erl_code_util.m"
        *erl_backend__erl_code_util__MaybeExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "erl_code_util.m"
        *erl_backend__erl_code_util__STATE_VARIABLE_Info_18 = erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17;
#line 392 "erl_code_util.m"
      }
#line 385 "erl_code_util.m"
    else
#line 385 "erl_code_util.m"
      {
#line 385 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__MaybeExpr0_9, (MR_Integer) 0)));
#line 385 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 385 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__InstMap_14;
#line 385 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__BoundVars_15;
#line 385 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__Expr_16;
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
        MR_Integer erl_backend__erl_code_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 274 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

#line 387 "erl_code_util.m"
        {
#line 387 "erl_code_util.m"
          hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_util__Goal_8, erl_backend__erl_code_util__InstMap0_7, &erl_backend__erl_code_util__InstMap_14);
        }
#line 388 "erl_code_util.m"
        {
#line 388 "erl_code_util.m"
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_util__InstMap_14, erl_backend__erl_code_util__ModuleInfo_13, &erl_backend__erl_code_util__BoundVars_15);
        }
#line 389 "erl_code_util.m"
        {
#line 389 "erl_code_util.m"
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_util__BoundVars_15, erl_backend__erl_code_util__Expr0_12, &erl_backend__erl_code_util__Expr_16, erl_backend__erl_code_util__STATE_VARIABLE_Info_0_17, erl_backend__erl_code_util__STATE_VARIABLE_Info_18);
        }
#line 390 "erl_code_util.m"
        {
#line 390 "erl_code_util.m"
          MR_Word base;
#line 390 "erl_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "erl_code_util.m"
          *erl_backend__erl_code_util__MaybeExpr_10 = base;
#line 390 "erl_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_util__Expr_16));
#line 390 "erl_code_util.m"
        }
#line 385 "erl_code_util.m"
      }
#line 385 "erl_code_util.m"
  }
#line 129 "erl_code_util.m"
}

#line 114 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_27,
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarNames_10,
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
#line 114 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgModes_12,
#line 114 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Inputs_13,
#line 114 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Outputs_14)
#line 114 "erl_code_util.m"
{
#line 345 "erl_code_util.m"
  {
#line 345 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__VarNames_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 339 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 339 "erl_code_util.m"
      {
#line 340 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 341 "erl_code_util.m"
          erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgModes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "erl_code_util.m"
      }
#line 345 "erl_code_util.m"
    if (erl_backend__erl_code_util__succeeded)
#line 343 "erl_code_util.m"
      {
#line 343 "erl_code_util.m"
        *erl_backend__erl_code_util__Inputs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "erl_code_util.m"
        *erl_backend__erl_code_util__Outputs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "erl_code_util.m"
      }
#line 345 "erl_code_util.m"
    else
#line 377 "erl_code_util.m"
      {
#line 377 "erl_code_util.m"
        MR_Box erl_backend__erl_code_util__VarName_15;
#line 377 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__VarNames1_16;
#line 377 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgType_17;
#line 377 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgTypes1_18;
#line 377 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgMode_19;
#line 377 "erl_code_util.m"
        MR_Word erl_backend__erl_code_util__ArgModes1_20;

#line 346 "erl_code_util.m"
        erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__VarNames_10)) == (MR_mktag((MR_Integer) 1)));
#line 346 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 346 "erl_code_util.m"
          {
#line 346 "erl_code_util.m"
            erl_backend__erl_code_util__VarName_15 = (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 0));
#line 346 "erl_code_util.m"
            erl_backend__erl_code_util__VarNames1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__VarNames_10, (MR_Integer) 1)));
#line 347 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__ArgTypes_11)) == (MR_mktag((MR_Integer) 1)));
#line 347 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 347 "erl_code_util.m"
              {
#line 347 "erl_code_util.m"
                erl_backend__erl_code_util__ArgType_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 0)));
#line 347 "erl_code_util.m"
                erl_backend__erl_code_util__ArgTypes1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgTypes_11, (MR_Integer) 1)));
#line 348 "erl_code_util.m"
                erl_backend__erl_code_util__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_util__ArgModes_12)) == (MR_mktag((MR_Integer) 1)));
#line 348 "erl_code_util.m"
                if (erl_backend__erl_code_util__succeeded)
#line 348 "erl_code_util.m"
                  {
#line 348 "erl_code_util.m"
                    erl_backend__erl_code_util__ArgMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgModes_12, (MR_Integer) 0)));
#line 348 "erl_code_util.m"
                    erl_backend__erl_code_util__ArgModes1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_util__ArgModes_12, (MR_Integer) 1)));
#line 348 "erl_code_util.m"
                  }
#line 347 "erl_code_util.m"
              }
#line 346 "erl_code_util.m"
          }
#line 377 "erl_code_util.m"
        if (erl_backend__erl_code_util__succeeded)
#line 351 "erl_code_util.m"
          {
#line 351 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Inputs1_21;
#line 351 "erl_code_util.m"
            MR_Word erl_backend__erl_code_util__Outputs1_22;

#line 350 "erl_code_util.m"
            {
#line 350 "erl_code_util.m"
              erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_27, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames1_16, erl_backend__erl_code_util__ArgTypes1_18, erl_backend__erl_code_util__ArgModes1_20, &erl_backend__erl_code_util__Inputs1_21, &erl_backend__erl_code_util__Outputs1_22);
            }
#line 353 "erl_code_util.m"
            erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__OptDummyArgs_9 == (MR_Integer) 0);
#line 353 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 353 "erl_code_util.m"
              {
#line 356 "erl_code_util.m"
                {
#line 356 "erl_code_util.m"
                  MR_Word erl_backend__erl_code_util__V_23_23;

#line 356 "erl_code_util.m"
                  {
#line 356 "erl_code_util.m"
                    erl_backend__erl_code_util__V_23_23 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__ArgType_17);
                  }
#line 356 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__V_23_23 == (MR_Integer) 0);
#line 356 "erl_code_util.m"
                }
#line 357 "erl_code_util.m"
                if (!(erl_backend__erl_code_util__succeeded))
#line 357 "erl_code_util.m"
                  erl_backend__erl_code_util__succeeded = (erl_backend__erl_code_util__ArgMode_19 == (MR_Integer) 2);
#line 353 "erl_code_util.m"
              }
#line 362 "erl_code_util.m"
            if (erl_backend__erl_code_util__succeeded)
#line 360 "erl_code_util.m"
              {
#line 360 "erl_code_util.m"
                *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
#line 361 "erl_code_util.m"
                *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
#line 360 "erl_code_util.m"
              }
#line 362 "erl_code_util.m"
            else
#line 368 "erl_code_util.m"
#line 368 "erl_code_util.m"
              switch (erl_backend__erl_code_util__ArgMode_19) {
#line 368 "erl_code_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 368 "erl_code_util.m"
                case (MR_Integer) 0:
#line 364 "erl_code_util.m"
                  {
#line 366 "erl_code_util.m"
                    {
#line 366 "erl_code_util.m"
                      MR_Word base;
#line 366 "erl_code_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "erl_code_util.m"
                      *erl_backend__erl_code_util__Inputs_13 = base;
#line 366 "erl_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
#line 366 "erl_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Inputs1_21));
#line 366 "erl_code_util.m"
                    }
#line 367 "erl_code_util.m"
                    *erl_backend__erl_code_util__Outputs_14 = erl_backend__erl_code_util__Outputs1_22;
#line 364 "erl_code_util.m"
                  }
#line 368 "erl_code_util.m"
                  break;
#line 368 "erl_code_util.m"
                case (MR_Integer) 1:
#line 368 "erl_code_util.m"
                case (MR_Integer) 2:
#line 371 "erl_code_util.m"
                  {
#line 373 "erl_code_util.m"
                    *erl_backend__erl_code_util__Inputs_13 = erl_backend__erl_code_util__Inputs1_21;
#line 374 "erl_code_util.m"
                    {
#line 374 "erl_code_util.m"
                      MR_Word base;
#line 374 "erl_code_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "erl_code_util.m"
                      *erl_backend__erl_code_util__Outputs_14 = base;
#line 374 "erl_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = erl_backend__erl_code_util__VarName_15;
#line 374 "erl_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_util__Outputs1_22));
#line 374 "erl_code_util.m"
                    }
#line 371 "erl_code_util.m"
                  }
#line 368 "erl_code_util.m"
                  break;
#line 368 "erl_code_util.m"
              }
#line 351 "erl_code_util.m"
          }
#line 377 "erl_code_util.m"
        else
#line 378 "erl_code_util.m"
          {
#line 378 "erl_code_util.m"
            {
#line 378 "erl_code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_util", (MR_String) "predicate \140erl_backend.erl_code_util.erl_gen_arg_list_arg_modes\'/7", (MR_String) "length mismatch");
#line 378 "erl_code_util.m"
              return;
            }
#line 378 "erl_code_util.m"
          }
#line 377 "erl_code_util.m"
      }
#line 345 "erl_code_util.m"
  }
#line 114 "erl_code_util.m"
}

#line 108 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__TypeInfo_for_T_16,
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_8,
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__OptDummyArgs_9,
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__VarNames_10,
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ArgTypes_11,
#line 108 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Modes_12,
#line 108 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Inputs_13,
#line 108 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Outputs_14)
#line 108 "erl_code_util.m"
{
#line 331 "erl_code_util.m"
  {
#line 331 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 331 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ArgModes_15;

#line 332 "erl_code_util.m"
    {
#line 332 "erl_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__Modes_12, erl_backend__erl_code_util__ArgTypes_11, &erl_backend__erl_code_util__ArgModes_15);
    }
#line 333 "erl_code_util.m"
    {
#line 333 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0(erl_backend__erl_code_util__TypeInfo_for_T_16, erl_backend__erl_code_util__ModuleInfo_8, erl_backend__erl_code_util__OptDummyArgs_9, erl_backend__erl_code_util__VarNames_10, erl_backend__erl_code_util__ArgTypes_11, erl_backend__erl_code_util__ArgModes_15, erl_backend__erl_code_util__Inputs_13, erl_backend__erl_code_util__Outputs_14);
#line 333 "erl_code_util.m"
      return;
    }
#line 331 "erl_code_util.m"
  }
#line 108 "erl_code_util.m"
}

#line 89 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(
#line 89 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 89 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 89 "erl_code_util.m"
{
#line 320 "erl_code_util.m"
  {
#line 320 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 320 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 320 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));

#line 320 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 320 "erl_code_util.m"
  }
#line 89 "erl_code_util.m"
}

#line 84 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_add_env_var_name_3_p_0(
#line 84 "erl_code_util.m"
  MR_String erl_backend__erl_code_util__Name_4,
#line 84 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8,
#line 84 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_9)
#line 84 "erl_code_util.m"
{
#line 315 "erl_code_util.m"
  {
#line 315 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVarNames0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 315 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVarNames_7;
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 316 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 316 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19;
#line 318 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_20_20;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_22_22;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_23_23;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24;
#line 318 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25;

#line 317 "erl_code_util.m"
    {
#line 317 "erl_code_util.m"
      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (erl_backend__erl_code_util__Name_4)), erl_backend__erl_code_util__EnvVarNames0_6, &erl_backend__erl_code_util__EnvVarNames_7);
    }
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 318 "erl_code_util.m"
    erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 318 "erl_code_util.m"
    {
#line 318 "erl_code_util.m"
      MR_Word base;
#line 318 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 318 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_9 = base;
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_18_18));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_19_19));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_20_20));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__V_21_21));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_22_22));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_23_23));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_24_24));
#line 318 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVarNames_7));
#line 318 "erl_code_util.m"
    }
#line 315 "erl_code_util.m"
  }
#line 84 "erl_code_util.m"
}

#line 78 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_variable_type_3_p_0(
#line 78 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_4,
#line 78 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Var_5,
#line 78 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Type_6)
#line 78 "erl_code_util.m"
{
#line 311 "erl_code_util.m"
  {
#line 311 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 311 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 4)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 0)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 1)));
#line 276 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 2)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 3)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 5)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 6)));
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_4, (MR_Integer) 7)));

#line 313 "erl_code_util.m"
    {
#line 313 "erl_code_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_util__VarTypes_7, erl_backend__erl_code_util__Var_5, erl_backend__erl_code_util__Type_6);
#line 313 "erl_code_util.m"
      return;
    }
#line 311 "erl_code_util.m"
  }
#line 78 "erl_code_util.m"
}

#line 309 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0_1(
#line 309 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 309 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 309 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2)
#line 309 "erl_code_util.m"
{
#line 309 "erl_code_util.m"
  {
#line 309 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 309 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_Type_6;

#line 309 "erl_code_util.m"
    {
#line 309 "erl_code_util.m"
      erl_backend__erl_code_util__erl_variable_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv0_Type_6);
    }
#line 309 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv0_Type_6));
#line 309 "erl_code_util.m"
  }
#line 309 "erl_code_util.m"
}

#line 73 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_variable_types_3_p_0(
#line 73 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_4,
#line 73 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Vars_5,
#line 73 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__Types_6)
#line 73 "erl_code_util.m"
{
#line 308 "erl_code_util.m"
  {
#line 308 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 308 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;

#line 309 "erl_code_util.m"
    {
#line 309 "erl_code_util.m"
      erl_backend__erl_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 0) = ((MR_Box) (&erl_backend__erl_code_util_scalar_common_4[0]));
#line 309 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 1) = ((MR_Box) (erl_backend__erl_code_util__erl_variable_types_3_p_0_1));
#line 309 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 309 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__V_7_7, 3) = ((MR_Box) (erl_backend__erl_code_util__Info_4));
#line 309 "erl_code_util.m"
    }
#line 309 "erl_code_util.m"
    {
#line 309 "erl_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_util__V_7_7, erl_backend__erl_code_util__Vars_5, erl_backend__erl_code_util__Types_6);
#line 309 "erl_code_util.m"
      return;
    }
#line 308 "erl_code_util.m"
  }
#line 73 "erl_code_util.m"
}

#line 298 "erl_code_util.m"
static void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0_1(
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__closure_arg,
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_1,
#line 298 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_2,
#line 298 "erl_code_util.m"
  MR_Box erl_backend__erl_code_util__wrapper_arg_3,
#line 298 "erl_code_util.m"
  MR_Box * erl_backend__erl_code_util__wrapper_arg_4)
#line 298 "erl_code_util.m"
{
#line 298 "erl_code_util.m"
  {
#line 298 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__closure = erl_backend__erl_code_util__closure_arg;
#line 298 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv1_NewVar_6;
#line 298 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9;

#line 298 "erl_code_util.m"
    {
#line 298 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_var_4_p_0(((MR_Integer) erl_backend__erl_code_util__wrapper_arg_1), &erl_backend__erl_code_util__conv1_NewVar_6, ((MR_Word) erl_backend__erl_code_util__wrapper_arg_3), &erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9);
    }
#line 298 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_util__conv1_NewVar_6));
#line 298 "erl_code_util.m"
    *erl_backend__erl_code_util__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_util__conv0_STATE_VARIABLE_VarSet_9));
#line 298 "erl_code_util.m"
  }
#line 298 "erl_code_util.m"
}

#line 68 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(
#line 68 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__Num_5,
#line 68 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVars_6,
#line 68 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 68 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 68 "erl_code_util.m"
{
#line 296 "erl_code_util.m"
  {
#line 296 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 296 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 296 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 296 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_13_13;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 298 "erl_code_util.m"
    MR_Box erl_backend__erl_code_util__conv2_VarSet_9;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_36_36;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_37_37;
#line 284 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_38_38;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_40_40;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_41_41;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_42_42;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_43_43;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_39_39;

#line 298 "erl_code_util.m"
    {
#line 298 "erl_code_util.m"
      erl_backend__erl_code_util__V_13_13 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, erl_backend__erl_code_util__Num_5);
    }
#line 298 "erl_code_util.m"
    {
#line 298 "erl_code_util.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], (MR_Word) &erl_backend__erl_code_util_scalar_common_1[1], (MR_Word) &erl_backend__erl_code_util_scalar_common_2[2], erl_backend__erl_code_util__V_13_13, erl_backend__erl_code_util__NewVars_6, ((MR_Box) (erl_backend__erl_code_util__VarSet0_8)), &erl_backend__erl_code_util__conv2_VarSet_9);
    }
#line 298 "erl_code_util.m"
    erl_backend__erl_code_util__VarSet_9 = ((MR_Word) erl_backend__erl_code_util__conv2_VarSet_9);
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    {
#line 284 "erl_code_util.m"
      MR_Word base;
#line 284 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 284 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_36_36));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_37_37));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_38_38));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_40_40));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_41_41));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_42_42));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_43_43));
#line 284 "erl_code_util.m"
    }
#line 296 "erl_code_util.m"
  }
#line 68 "erl_code_util.m"
}

#line 62 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_vars_4_p_0(
#line 62 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__Num_5,
#line 62 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVars_6,
#line 62 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 62 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 62 "erl_code_util.m"
{
#line 291 "erl_code_util.m"
  {
#line 291 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 291 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 291 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28;
#line 284 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_29_29;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_31_31;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_32_32;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_33_33;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_34_34;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30;

#line 293 "erl_code_util.m"
    {
#line 293 "erl_code_util.m"
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Num_5, erl_backend__erl_code_util__NewVars_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    {
#line 284 "erl_code_util.m"
      MR_Word base;
#line 284 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 284 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
#line 284 "erl_code_util.m"
    }
#line 291 "erl_code_util.m"
  }
#line 62 "erl_code_util.m"
}

#line 57 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0(
#line 57 "erl_code_util.m"
  MR_String erl_backend__erl_code_util__Name_5,
#line 57 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__NewVar_6,
#line 57 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10,
#line 57 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__STATE_VARIABLE_Info_11)
#line 57 "erl_code_util.m"
{
#line 286 "erl_code_util.m"
  {
#line 286 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 286 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 286 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_9;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 275 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_27_27;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_28_28;
#line 284 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_29_29;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_31_31;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_32_32;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_33_33;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_34_34;
#line 284 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_30_30;

#line 288 "erl_code_util.m"
    {
#line 288 "erl_code_util.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_util__Name_5, erl_backend__erl_code_util__NewVar_6, erl_backend__erl_code_util__VarSet0_8, &erl_backend__erl_code_util__VarSet_9);
    }
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 284 "erl_code_util.m"
    erl_backend__erl_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 284 "erl_code_util.m"
    {
#line 284 "erl_code_util.m"
      MR_Word base;
#line 284 "erl_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 284 "erl_code_util.m"
      *erl_backend__erl_code_util__STATE_VARIABLE_Info_11 = base;
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_util__V_27_27));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_util__V_28_28));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_util__V_29_29));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_9));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_util__V_31_31));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_util__V_32_32));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (erl_backend__erl_code_util__V_33_33));
#line 284 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_util__V_34_34));
#line 284 "erl_code_util.m"
    }
#line 286 "erl_code_util.m"
  }
#line 57 "erl_code_util.m"
}

#line 53 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(
#line 53 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 53 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 53 "erl_code_util.m"
{
#line 278 "erl_code_util.m"
  {
#line 278 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 278 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 278 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 278 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 278 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 278 "erl_code_util.m"
  }
#line 53 "erl_code_util.m"
}

#line 52 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(
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
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 277 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 277 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
#line 277 "erl_code_util.m"
    erl_backend__erl_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 6)));
#line 277 "erl_code_util.m"
    erl_backend__erl_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 7)));
#line 277 "erl_code_util.m"
  }
#line 52 "erl_code_util.m"
}

#line 51 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_var_types_2_p_0(
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
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 276 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 276 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
#line 276 "erl_code_util.m"
    erl_backend__erl_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 5)));
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
erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(
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
    MR_Word erl_backend__erl_code_util__V_7_7;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 275 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 275 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
#line 275 "erl_code_util.m"
    erl_backend__erl_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 4)));
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

#line 48 "erl_code_util.m"
void MR_CALL 
erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(
#line 48 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__Info_3,
#line 48 "erl_code_util.m"
  MR_Word * erl_backend__erl_code_util__HeadVar__2_2)
#line 48 "erl_code_util.m"
{
#line 274 "erl_code_util.m"
  {
#line 274 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_4_4;
#line 274 "erl_code_util.m"
    MR_Integer erl_backend__erl_code_util__V_5_5;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_6_6;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_7_7;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_8_8;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_9_9;
#line 274 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__V_10_10;

#line 274 "erl_code_util.m"
    *erl_backend__erl_code_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 0)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 1)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 2)));
#line 274 "erl_code_util.m"
    erl_backend__erl_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_3, (MR_Integer) 3)));
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
#line 48 "erl_code_util.m"
}

#line 46 "erl_code_util.m"
MR_Word MR_CALL 
erl_backend__erl_code_util__erl_gen_info_init_3_f_0(
#line 46 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__ModuleInfo_5,
#line 46 "erl_code_util.m"
  MR_Word erl_backend__erl_code_util__PredId_6,
#line 46 "erl_code_util.m"
  MR_Integer erl_backend__erl_code_util__ProcId_7)
#line 46 "erl_code_util.m"
{
#line 253 "erl_code_util.m"
  {
#line 253 "erl_code_util.m"
    MR_bool erl_backend__erl_code_util__succeeded;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__Info_8;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__PredInfo_9;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ProcInfo_10;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadVars_11;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarSet_12;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__VarTypes_13;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadModes_14;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__HeadTypes_15;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__InputVars_16;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__OutputVars_17;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__EnvVars_18;
#line 253 "erl_code_util.m"
    MR_Word erl_backend__erl_code_util__ArgModes_29;

#line 254 "erl_code_util.m"
    {
#line 254 "erl_code_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__PredId_6, erl_backend__erl_code_util__ProcId_7, &erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__ProcInfo_10);
    }
#line 255 "erl_code_util.m"
    {
#line 255 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadVars_11);
    }
#line 256 "erl_code_util.m"
    {
#line 256 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarSet_12);
    }
#line 257 "erl_code_util.m"
    {
#line 257 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__VarTypes_13);
    }
#line 258 "erl_code_util.m"
    {
#line 258 "erl_code_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_util__ProcInfo_10, &erl_backend__erl_code_util__HeadModes_14);
    }
#line 259 "erl_code_util.m"
    {
#line 259 "erl_code_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_util__PredInfo_9, &erl_backend__erl_code_util__HeadTypes_15);
    }
#line 332 "erl_code_util.m"
    {
#line 332 "erl_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(erl_backend__erl_code_util__ModuleInfo_5, erl_backend__erl_code_util__HeadModes_14, erl_backend__erl_code_util__HeadTypes_15, &erl_backend__erl_code_util__ArgModes_29);
    }
#line 333 "erl_code_util.m"
    {
#line 333 "erl_code_util.m"
      erl_backend__erl_code_util__erl_gen_arg_list_arg_modes_7_p_0((MR_Word) &erl_backend__erl_code_util_scalar_common_1[0], erl_backend__erl_code_util__ModuleInfo_5, (MR_Integer) 0, erl_backend__erl_code_util__HeadVars_11, erl_backend__erl_code_util__HeadTypes_15, erl_backend__erl_code_util__ArgModes_29, &erl_backend__erl_code_util__InputVars_16, &erl_backend__erl_code_util__OutputVars_17);
    }
#line 262 "erl_code_util.m"
    {
#line 262 "erl_code_util.m"
      erl_backend__erl_code_util__EnvVars_18 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 263 "erl_code_util.m"
    {
#line 263 "erl_code_util.m"
      erl_backend__erl_code_util__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 0) = ((MR_Box) (erl_backend__erl_code_util__ModuleInfo_5));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 1) = ((MR_Box) (erl_backend__erl_code_util__PredId_6));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 2) = ((MR_Box) (erl_backend__erl_code_util__ProcId_7));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 3) = ((MR_Box) (erl_backend__erl_code_util__VarSet_12));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 4) = ((MR_Box) (erl_backend__erl_code_util__VarTypes_13));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 5) = ((MR_Box) (erl_backend__erl_code_util__InputVars_16));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 6) = ((MR_Box) (erl_backend__erl_code_util__OutputVars_17));
#line 263 "erl_code_util.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_util__Info_8, 7) = ((MR_Box) (erl_backend__erl_code_util__EnvVars_18));
#line 263 "erl_code_util.m"
    }
#line 253 "erl_code_util.m"
    return erl_backend__erl_code_util__Info_8;
#line 253 "erl_code_util.m"
  }
#line 46 "erl_code_util.m"
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
