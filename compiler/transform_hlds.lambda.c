/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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


/* :- module transform_hlds.lambda. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#include "transform_hlds.lambda.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.quantification.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 123 "lambda.m"
struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s {
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21;
#line 418 "lambda.m"
  MR_bool transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 418 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38;
#line 561 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
#line 561 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101;
#line 492 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185;
#line 492 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_186_186;
#line 501 "lambda.m"
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 501 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92;
#line 501 "lambda.m"
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92;
#line 547 "lambda.m"
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1;
#line 547 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102;
#line 546 "lambda.m"
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102;
#line 123 "lambda.m"
};


#line 171 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 174 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 177 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 189 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 192 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 195 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10];

#line 198 "transform_hlds.lambda.c"
static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10];

#line 201 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0;

#line 204 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1];

#line 207 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1];

#line 210 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1];

#line 213 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1];

#line 216 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1];

#line 222 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0;

#line 225 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1;

#line 228 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1];

#line 231 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1];

#line 234 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2];

#line 237 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2];

#line 240 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2];

#line 243 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
#line 246 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 248 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2);

#line 251 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
#line 254 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 256 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 258 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3);

#line 261 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
#line 264 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 266 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2);

#line 269 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
#line 272 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 274 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 276 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3);

#line 606 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_3,
#line 606 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_4);

#line 430 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
#line 430 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 430 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 428 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
#line 428 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 428 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 428 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 546 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
#line 546 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 935 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
#line 935 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 935 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 935 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 919 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
#line 919 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 919 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 919 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 911 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
#line 911 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 911 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 911 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 878 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
#line 878 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 878 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 877 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
#line 877 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 877 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 772 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
#line 772 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_4,
#line 772 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119,
#line 772 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_120);

#line 755 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
#line 755 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 755 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
#line 755 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
#line 755 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4);

#line 733 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVars_9,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_10,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);

#line 700 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_6,
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__Type_7,
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_8,
#line 700 "lambda.m"
  MR_Integer transform_hlds__lambda__X_9,
#line 700 "lambda.m"
  MR_Integer * transform_hlds__lambda__X_5);

#line 688 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__uni_modes_to_modes_2_p_0(
#line 688 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 688 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2);

#line 676 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
#line 676 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 676 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 676 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

#line 671 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
#line 671 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaVars_3,
#line 671 "lambda.m"
  MR_Word transform_hlds__lambda__ClassConstraint_4);

#line 390 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__LHS_9,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__RHS0_10,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_11,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_12,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Context_13,
#line 390 "lambda.m"
  MR_Word * transform_hlds__lambda__GoalExpr_14,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
#line 390 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33);

#line 380 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
#line 380 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 380 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 380 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 380 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

#line 372 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
#line 372 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 372 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 372 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 372 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

#line 298 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
#line 298 "lambda.m"
  MR_Word transform_hlds__lambda__Goal0_5,
#line 298 "lambda.m"
  MR_Word * transform_hlds__lambda__Goal_6,
#line 298 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
#line 298 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69);

#line 238 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);

#line 219 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
#line 219 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_5,
#line 219 "lambda.m"
  MR_Integer transform_hlds__lambda__ProcId_6,
#line 219 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
#line 219 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);

#line 217 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 217 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3);

#line 210 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 210 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8];




static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__constraint_contains_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 771 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 779 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 787 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 795 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 803 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 811 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 820 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 828 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 836 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10] = {
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 850 "transform_hlds.lambda.c"
static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10] = {
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_tvarset",
  (MR_String) "li_inst_varset",
  (MR_String) "li_rtti_varmaps",
  (MR_String) "li_has_parallel_conj",
  (MR_String) "li_pred_info",
  (MR_String) "li_module_info",
  (MR_String) "li_recompute_nonlocals",
  (MR_String) "li_have_expanded_lambda"
};

#line 864 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
  (MR_String) "lambda_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0,
  NULL,
  NULL
};

#line 879 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

#line 884 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0
  }
};

#line 893 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

#line 898 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1] = {
  (MR_Integer) 0
};

#line 903 "transform_hlds.lambda.c"
const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  {
    transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0
  },
  {
    transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0
};

#line 924 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 932 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__lambda__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 937 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 = {
  (MR_String) "reg_wrapper_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0,
  NULL,
  NULL,
  NULL
};

#line 952 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 = {
  (MR_String) "not_reg_wrapper_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 967 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1
};

#line 972 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

#line 977 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1
  }
};

#line 991 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

#line 997 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1003 "transform_hlds.lambda.c"
const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "reg_wrapper_proc",
  {
    transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0
  },
  {
    transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0
};

#line 1024 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
#line 1027 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 1029 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2)
#line 1031 "transform_hlds.lambda.c"
{
#line 1033 "transform_hlds.lambda.c"
  {
#line 1035 "transform_hlds.lambda.c"
    MR_bool transform_hlds__lambda__succeeded;

#line 1038 "transform_hlds.lambda.c"
    {
#line 1040 "transform_hlds.lambda.c"
      transform_hlds__lambda__succeeded = transform_hlds__lambda____Unify____lambda_info_0_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2));
    }
#line 1043 "transform_hlds.lambda.c"
    return transform_hlds__lambda__succeeded;
#line 1045 "transform_hlds.lambda.c"
  }
#line 1047 "transform_hlds.lambda.c"
}

#line 1050 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
#line 1053 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 1055 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 1057 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3)
#line 1059 "transform_hlds.lambda.c"
{
#line 1061 "transform_hlds.lambda.c"
  {
#line 1063 "transform_hlds.lambda.c"
    MR_Word transform_hlds__lambda__conv0_HeadVar__1_1;

#line 1066 "transform_hlds.lambda.c"
    {
#line 1068 "transform_hlds.lambda.c"
      transform_hlds__lambda____Compare____lambda_info_0_0(&transform_hlds__lambda__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Word) transform_hlds__lambda__wrapper_arg_3));
    }
#line 1071 "transform_hlds.lambda.c"
    *transform_hlds__lambda__wrapper_arg_1 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__1_1));
#line 1073 "transform_hlds.lambda.c"
  }
#line 1075 "transform_hlds.lambda.c"
}

#line 1078 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
#line 1081 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 1083 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2)
#line 1085 "transform_hlds.lambda.c"
{
#line 1087 "transform_hlds.lambda.c"
  {
#line 1089 "transform_hlds.lambda.c"
    MR_bool transform_hlds__lambda__succeeded;

#line 1092 "transform_hlds.lambda.c"
    {
#line 1094 "transform_hlds.lambda.c"
      transform_hlds__lambda__succeeded = transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2));
    }
#line 1097 "transform_hlds.lambda.c"
    return transform_hlds__lambda__succeeded;
#line 1099 "transform_hlds.lambda.c"
  }
#line 1101 "transform_hlds.lambda.c"
}

#line 1104 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
#line 1107 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 1109 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 1111 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3)
#line 1113 "transform_hlds.lambda.c"
{
#line 1115 "transform_hlds.lambda.c"
  {
#line 1117 "transform_hlds.lambda.c"
    MR_Word transform_hlds__lambda__conv0_HeadVar__1_1;

#line 1120 "transform_hlds.lambda.c"
    {
#line 1122 "transform_hlds.lambda.c"
      transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(&transform_hlds__lambda__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Word) transform_hlds__lambda__wrapper_arg_3));
    }
#line 1125 "transform_hlds.lambda.c"
    *transform_hlds__lambda__wrapper_arg_1 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__1_1));
#line 1127 "transform_hlds.lambda.c"
  }
#line 1129 "transform_hlds.lambda.c"
}

#line 606 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 606 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_3,
#line 606 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_4)
#line 606 "lambda.m"
{
#line 606 "lambda.m"
  {
#line 606 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 606 "lambda.m"
    MR_Integer transform_hlds__lambda__conv3_X_5;

#line 606 "lambda.m"
    {
#line 606 "lambda.m"
      transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Integer) transform_hlds__lambda__wrapper_arg_3), &transform_hlds__lambda__conv3_X_5);
    }
#line 606 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_4 = ((MR_Box) (transform_hlds__lambda__conv3_X_5));
#line 606 "lambda.m"
  }
#line 606 "lambda.m"
}

#line 430 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
#line 430 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 430 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 430 "lambda.m"
{
#line 430 "lambda.m"
  {
#line 430 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 430 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;

#line 430 "lambda.m"
    {
#line 430 "lambda.m"
      return transform_hlds__lambda__succeeded = transform_hlds__lambda__constraint_contains_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 430 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 430 "lambda.m"
  }
#line 430 "lambda.m"
}

#line 428 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
#line 428 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 428 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 428 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
#line 428 "lambda.m"
{
#line 428 "lambda.m"
  {
#line 428 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 428 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

#line 428 "lambda.m"
    {
#line 428 "lambda.m"
      parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    }
#line 428 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
#line 428 "lambda.m"
  }
#line 428 "lambda.m"
}

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 501 "lambda.m"
{
#line 501 "lambda.m"
  {
#line 501 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 501 "lambda.m"
    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 501 "lambda.m"
  }
#line 501 "lambda.m"
}

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 501 "lambda.m"
{
#line 501 "lambda.m"
  {
#line 501 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 501 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92);
#line 501 "lambda.m"
    {
#line 501 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(transform_hlds__lambda__env_ptr);
#line 501 "lambda.m"
      return;
    }
#line 501 "lambda.m"
  }
#line 501 "lambda.m"
}

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 501 "lambda.m"
{
#line 501 "lambda.m"
  {
#line 501 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 502 "lambda.m"
    {
#line 502 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__member_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185, ((MR_Box) ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92)), (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21);
    }
#line 502 "lambda.m"
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 502 "lambda.m"
      {
#line 502 "lambda.m"
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(transform_hlds__lambda__env_ptr);
#line 502 "lambda.m"
        return;
      }
#line 501 "lambda.m"
  }
#line 501 "lambda.m"
}

#line 501 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
#line 501 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 501 "lambda.m"
{
#line 501 "lambda.m"
  {
#line 501 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 501 "lambda.m"
    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 501 "lambda.m"
      {
#line 501 "lambda.m"
        {
#line 501 "lambda.m"
          mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5, transform_hlds__lambda__env_ptr);
        }
#line 501 "lambda.m"
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 501 "lambda.m"
      }
#line 501 "lambda.m"
    else
#line 501 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 501 "lambda.m"
  }
#line 501 "lambda.m"
}

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 547 "lambda.m"
{
#line 547 "lambda.m"
  {
#line 547 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 547 "lambda.m"
    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
#line 547 "lambda.m"
  }
#line 547 "lambda.m"
}

#line 546 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
#line 546 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 546 "lambda.m"
{
#line 546 "lambda.m"
  {
#line 546 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 546 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102);
#line 546 "lambda.m"
    {
#line 546 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(transform_hlds__lambda__env_ptr);
#line 546 "lambda.m"
      return;
    }
#line 546 "lambda.m"
  }
#line 546 "lambda.m"
}

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 547 "lambda.m"
{
#line 547 "lambda.m"
  {
#line 547 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 548 "lambda.m"
    {
#line 548 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102);
    }
#line 547 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 547 "lambda.m"
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 547 "lambda.m"
      {
#line 547 "lambda.m"
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(transform_hlds__lambda__env_ptr);
#line 547 "lambda.m"
        return;
      }
#line 547 "lambda.m"
  }
#line 547 "lambda.m"
}

#line 547 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
#line 547 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 547 "lambda.m"
{
#line 547 "lambda.m"
  {
#line 547 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 547 "lambda.m"
    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
#line 547 "lambda.m"
      {
#line 546 "lambda.m"
        {
#line 546 "lambda.m"
          mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_186_186, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9, transform_hlds__lambda__env_ptr);
        }
#line 547 "lambda.m"
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 547 "lambda.m"
      }
#line 547 "lambda.m"
    else
#line 547 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 547 "lambda.m"
  }
#line 547 "lambda.m"
}

#line 123 "lambda.m"
void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Purity_16,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__PredOrFunc_18,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Vars_21,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Modes_22,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Detism_23,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaGoal_25,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_26,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__Functor_27,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__Unification_28,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
#line 123 "lambda.m"
{
#line 123 "lambda.m"
  {
#line 123 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s transform_hlds__lambda__env;

#line 123 "lambda.m"
    (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21 = transform_hlds__lambda__Vars_21;
#line 418 "lambda.m"
    {
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__TypeCtorInfo_177_177;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__TypeCtorInfo_182_182;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__VarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 0)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__VarTypes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 1)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__TVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 2)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__InstVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 3)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__RttiVarMaps_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 4)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__HasParallelConj_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 5)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__OrigPredInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 6)));
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals0_39;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__AllConstraints_41;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaVarTypeList_42;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaTypeVarsList_43;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaTypeVars_44;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__UnivConstraints_45;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__Constraints_46;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ExistQVars_47;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalInfo_49;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalNonLocals_50;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaNonLocals_51;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ExtraTypeInfos_52;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__Var_53;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__UniModes0_56;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__OrigVars_60;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__NonLocals1_76;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__NewTypeInfos_77;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__NonLocals_78;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals_79;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ArgVars1_80;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ArgVars_103;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__PredId_104;
#line 418 "lambda.m"
      MR_Integer transform_hlds__lambda__ProcId_105;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__UniModes_106;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ModuleInfo_108;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ShroudedPredProcId_141;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__ConsId_142;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__V_145_145;
#line 418 "lambda.m"
      MR_Word transform_hlds__lambda__V_170_170;
#line 419 "lambda.m"
      MR_Word transform_hlds__lambda___HaveExpandedLambdas_40;
#line 437 "lambda.m"
      MR_Word transform_hlds__lambda__V_48_48;
#line 561 "lambda.m"
      MR_Word transform_hlds__lambda__PredId0_83;
#line 561 "lambda.m"
      MR_Integer transform_hlds__lambda__ProcId0_84;
#line 561 "lambda.m"
      MR_Word transform_hlds__lambda__Call_PredInfo_89;
#line 561 "lambda.m"
      MR_Word transform_hlds__lambda__Call_ProcInfo_90;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalExpr_81;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__CallVars_85;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__Call_CodeModel_93;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__CodeModel_94;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__Globals_95;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__Target_96;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__HighLevelCode_97;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__Call_ArgModes_99;
#line 492 "lambda.m"
      MR_Integer transform_hlds__lambda__NumInitialVars_100;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__V_154_154;
#line 492 "lambda.m"
      MR_Word transform_hlds__lambda__V_82_82;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__V_86_86;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__V_87_87;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__V_88_88;

#line 419 "lambda.m"
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 7)));
#line 419 "lambda.m"
      transform_hlds__lambda__MustRecomputeNonLocals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 8)));
#line 419 "lambda.m"
      transform_hlds__lambda___HaveExpandedLambdas_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 9)));
#line 426 "lambda.m"
      {
#line 426 "lambda.m"
        hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__AllConstraints_41);
      }
#line 427 "lambda.m"
      {
#line 427 "lambda.m"
        parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__LambdaVarTypeList_42);
      }
#line 1617 "transform_hlds.lambda.c"
      transform_hlds__lambda__TypeCtorInfo_177_177 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 428 "lambda.m"
      {
#line 428 "lambda.m"
        mercury__list__map_3_p_0(transform_hlds__lambda__TypeCtorInfo_177_177, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[5], transform_hlds__lambda__LambdaVarTypeList_42, &transform_hlds__lambda__LambdaTypeVarsList_43);
      }
#line 429 "lambda.m"
      {
#line 429 "lambda.m"
        mercury__list__condense_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[0], transform_hlds__lambda__LambdaTypeVarsList_43, &transform_hlds__lambda__LambdaTypeVars_44);
      }
#line 430 "lambda.m"
      {
#line 430 "lambda.m"
        transform_hlds__lambda__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 430 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_145_145, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2]));
#line 430 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_145_145, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2));
#line 430 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 430 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_145_145, 3) = ((MR_Box) (transform_hlds__lambda__LambdaTypeVars_44));
#line 430 "lambda.m"
      }
#line 430 "lambda.m"
      {
#line 430 "lambda.m"
        mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, transform_hlds__lambda__V_145_145, transform_hlds__lambda__AllConstraints_41, &transform_hlds__lambda__UnivConstraints_45);
      }
#line 432 "lambda.m"
      {
#line 432 "lambda.m"
        transform_hlds__lambda__Constraints_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 0) = ((MR_Box) (transform_hlds__lambda__UnivConstraints_45));
#line 432 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "lambda.m"
      }
#line 436 "lambda.m"
      transform_hlds__lambda__ExistQVars_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "lambda.m"
      transform_hlds__lambda__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
#line 437 "lambda.m"
      transform_hlds__lambda__LambdaGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
#line 438 "lambda.m"
      {
#line 438 "lambda.m"
        transform_hlds__lambda__LambdaGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
      }
#line 1669 "transform_hlds.lambda.c"
      transform_hlds__lambda__TypeCtorInfo_182_182 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 439 "lambda.m"
      {
#line 439 "lambda.m"
        parse_tree__set_of_var__insert_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__LambdaNonLocals_51);
      }
#line 440 "lambda.m"
      {
#line 440 "lambda.m"
        hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(transform_hlds__lambda__RttiVarMaps_35, transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__LambdaNonLocals_51, &transform_hlds__lambda__ExtraTypeInfos_52);
      }
#line 454 "lambda.m"
      if (((MR_tag((MR_Word) transform_hlds__lambda__Unification0_26)) == (MR_mktag((MR_Integer) 0))))
#line 444 "lambda.m"
        {
#line 444 "lambda.m"
          MR_Word transform_hlds__lambda__V_54_54;
#line 444 "lambda.m"
          MR_Word transform_hlds__lambda__V_57_57;
#line 444 "lambda.m"
          MR_Word transform_hlds__lambda__V_58_58;
#line 444 "lambda.m"
          MR_Word transform_hlds__lambda__V_59_59;

#line 444 "lambda.m"
          transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 0)));
#line 444 "lambda.m"
          transform_hlds__lambda__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 1)));
#line 444 "lambda.m"
          transform_hlds__lambda__OrigVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 2)));
#line 444 "lambda.m"
          transform_hlds__lambda__UniModes0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 3)));
#line 444 "lambda.m"
          transform_hlds__lambda__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 4)));
#line 444 "lambda.m"
          transform_hlds__lambda__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 5)));
#line 444 "lambda.m"
          transform_hlds__lambda__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 6)));
#line 444 "lambda.m"
        }
#line 454 "lambda.m"
      else
#line 459 "lambda.m"
        {
#line 460 "lambda.m"
          {
#line 460 "lambda.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
#line 460 "lambda.m"
            return;
          }
#line 459 "lambda.m"
        }
#line 463 "lambda.m"
      {
#line 463 "lambda.m"
        parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__NonLocals1_76);
      }
#line 467 "lambda.m"
      {
#line 467 "lambda.m"
        parse_tree__set_of_var__difference_3_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, transform_hlds__lambda__ExtraTypeInfos_52, transform_hlds__lambda__NonLocals1_76, &transform_hlds__lambda__NewTypeInfos_77);
      }
#line 468 "lambda.m"
      {
#line 468 "lambda.m"
        parse_tree__set_of_var__union_3_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, transform_hlds__lambda__NonLocals1_76, transform_hlds__lambda__NewTypeInfos_77, &transform_hlds__lambda__NonLocals_78);
      }
#line 470 "lambda.m"
      {
#line 470 "lambda.m"
        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, transform_hlds__lambda__NewTypeInfos_77);
      }
#line 472 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 471 "lambda.m"
        transform_hlds__lambda__MustRecomputeNonLocals_79 = transform_hlds__lambda__MustRecomputeNonLocals0_39;
#line 472 "lambda.m"
      else
#line 475 "lambda.m"
        transform_hlds__lambda__MustRecomputeNonLocals_79 = (MR_Integer) 1;
#line 478 "lambda.m"
      {
#line 478 "lambda.m"
        parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__lambda__TypeCtorInfo_182_182, transform_hlds__lambda__NonLocals_78, &transform_hlds__lambda__ArgVars1_80);
      }
#line 492 "lambda.m"
      transform_hlds__lambda__LambdaGoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
#line 492 "lambda.m"
      transform_hlds__lambda__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
#line 493 "lambda.m"
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__LambdaGoalExpr_81)) == (MR_mktag((MR_Integer) 2)));
#line 493 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 493 "lambda.m"
        {
#line 493 "lambda.m"
          transform_hlds__lambda__PredId0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 0)));
#line 493 "lambda.m"
          transform_hlds__lambda__ProcId0_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 1)));
#line 493 "lambda.m"
          transform_hlds__lambda__CallVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 2)));
#line 493 "lambda.m"
          transform_hlds__lambda__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 3)));
#line 493 "lambda.m"
          transform_hlds__lambda__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 4)));
#line 493 "lambda.m"
          transform_hlds__lambda__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 5)));
#line 494 "lambda.m"
          {
#line 494 "lambda.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, transform_hlds__lambda__PredId0_83, transform_hlds__lambda__ProcId0_84, &transform_hlds__lambda__Call_PredInfo_89, &transform_hlds__lambda__Call_ProcInfo_90);
          }
#line 1783 "transform_hlds.lambda.c"
          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 496 "lambda.m"
          {
#line 496 "lambda.m"
            (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__remove_suffix_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185, transform_hlds__lambda__CallVars_85, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91);
          }
#line 492 "lambda.m"
          if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 492 "lambda.m"
            {
#line 501 "lambda.m"
              {
#line 501 "lambda.m"
                transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(&transform_hlds__lambda__env);
              }
#line 500 "lambda.m"
              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 492 "lambda.m"
              if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 492 "lambda.m"
                {
#line 511 "lambda.m"
                  {
#line 511 "lambda.m"
                    transform_hlds__lambda__Call_CodeModel_93 = hlds__code_model__proc_info_interface_code_model_1_f_0(transform_hlds__lambda__Call_ProcInfo_90);
                  }
#line 512 "lambda.m"
                  {
#line 512 "lambda.m"
                    hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__lambda__Detism_23, &transform_hlds__lambda__CodeModel_94);
                  }
#line 513 "lambda.m"
                  {
#line 513 "lambda.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__Globals_95);
                  }
#line 514 "lambda.m"
                  {
#line 514 "lambda.m"
                    libs__globals__get_target_2_p_0(transform_hlds__lambda__Globals_95, &transform_hlds__lambda__Target_96);
                  }
#line 515 "lambda.m"
                  transform_hlds__lambda__V_154_154 = (MR_Integer) 251;
#line 515 "lambda.m"
                  {
#line 515 "lambda.m"
                    libs__globals__lookup_bool_option_3_p_0(transform_hlds__lambda__Globals_95, transform_hlds__lambda__V_154_154, &transform_hlds__lambda__HighLevelCode_97);
                  }
#line 536 "lambda.m"
                  if ((transform_hlds__lambda__Target_96 == (MR_Integer) 4))
#line 538 "lambda.m"
                    (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 536 "lambda.m"
                  else
#line 530 "lambda.m"
                    if ((transform_hlds__lambda__HighLevelCode_97 == (MR_Integer) 0))
#line 526 "lambda.m"
                      {
#line 525 "lambda.m"
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 526 "lambda.m"
                        if (!((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 527 "lambda.m"
                          {
#line 527 "lambda.m"
                            (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == (MR_Integer) 2);
#line 527 "lambda.m"
                            if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 528 "lambda.m"
                              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__Call_CodeModel_93 == (MR_Integer) 0);
#line 527 "lambda.m"
                          }
#line 526 "lambda.m"
                      }
#line 530 "lambda.m"
                    else
#line 531 "lambda.m"
                      {
#line 531 "lambda.m"
                        MR_Word transform_hlds__lambda__Call_PredOrFunc_98;

#line 532 "lambda.m"
                        {
#line 532 "lambda.m"
                          transform_hlds__lambda__Call_PredOrFunc_98 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lambda__Call_PredInfo_89);
                        }
#line 533 "lambda.m"
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__PredOrFunc_18 == transform_hlds__lambda__Call_PredOrFunc_98);
#line 531 "lambda.m"
                        if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 534 "lambda.m"
                          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 531 "lambda.m"
                      }
#line 492 "lambda.m"
                  if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 492 "lambda.m"
                    {
#line 542 "lambda.m"
                      {
#line 542 "lambda.m"
                        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_ArgModes_99);
                      }
#line 543 "lambda.m"
                      {
#line 543 "lambda.m"
                        mercury__list__length_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_185_185, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, &transform_hlds__lambda__NumInitialVars_100);
                      }
#line 1892 "transform_hlds.lambda.c"
                      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 544 "lambda.m"
                      {
#line 544 "lambda.m"
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__take_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_186_186, transform_hlds__lambda__NumInitialVars_100, transform_hlds__lambda__Call_ArgModes_99, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101);
                      }
#line 492 "lambda.m"
                      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 492 "lambda.m"
                        {
#line 547 "lambda.m"
                          {
#line 547 "lambda.m"
                            transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(&transform_hlds__lambda__env);
                          }
#line 547 "lambda.m"
                          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 492 "lambda.m"
                        }
#line 492 "lambda.m"
                    }
#line 492 "lambda.m"
                }
#line 492 "lambda.m"
            }
#line 493 "lambda.m"
        }
#line 561 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 551 "lambda.m"
        {
#line 551 "lambda.m"
          MR_Word transform_hlds__lambda__Call_NewProcInfo_107;

#line 551 "lambda.m"
          transform_hlds__lambda__ArgVars_103 = (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
#line 552 "lambda.m"
          transform_hlds__lambda__PredId_104 = transform_hlds__lambda__PredId0_83;
#line 553 "lambda.m"
          transform_hlds__lambda__ProcId_105 = transform_hlds__lambda__ProcId0_84;
#line 554 "lambda.m"
          {
#line 554 "lambda.m"
            check_hlds__mode_util__modes_to_uni_modes_4_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, &transform_hlds__lambda__UniModes_106);
          }
#line 557 "lambda.m"
          {
#line 557 "lambda.m"
            hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_NewProcInfo_107);
          }
#line 559 "lambda.m"
          {
#line 559 "lambda.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__lambda__PredId_104, transform_hlds__lambda__ProcId_105, transform_hlds__lambda__Call_PredInfo_89, transform_hlds__lambda__Call_NewProcInfo_107, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo_108);
          }
#line 551 "lambda.m"
        }
#line 561 "lambda.m"
      else
#line 566 "lambda.m"
        {
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__TypeInfo_187_187;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__TypeCtorInfo_188_188;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__AllArgVars_109;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ModuleName_110;
#line 566 "lambda.m"
          MR_String transform_hlds__lambda__OrigPredName_111;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__OrigContext_112;
#line 566 "lambda.m"
          MR_String transform_hlds__lambda__OrigFile_113;
#line 566 "lambda.m"
          MR_Integer transform_hlds__lambda__OrigLine_114;
#line 566 "lambda.m"
          MR_Integer transform_hlds__lambda__LambdaCount_115;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ModuleInfo1_116;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__PredName_117;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaContext_118;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__OrigArgModes_119;
#line 566 "lambda.m"
          MR_Integer transform_hlds__lambda__NumArgVars_120;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__In_121;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__InModes_122;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModesMap_123;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__OrigArgModesMap_124;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModesMap1_125;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModes1_126;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__AllArgModes_127;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ArgTypes_128;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaMarkers_130;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__VarNameRemap_131;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaVarSet_132;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaVarTypes_133;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaRttiVarMaps_134;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__ProcInfo_135;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__Assertions_137;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__PredInfo_138;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__PredicateTable0_139;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__PredicateTable_140;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__V_159_159;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_163_163;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_164_164;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166;
#line 566 "lambda.m"
          MR_Word transform_hlds__lambda__V_168_168;
#line 606 "lambda.m"
          MR_Integer transform_hlds__lambda__V_129_129;
#line 606 "lambda.m"
          MR_Box transform_hlds__lambda__conv4_V_129_129;

#line 566 "lambda.m"
          {
#line 566 "lambda.m"
            transform_hlds__lambda__ArgVars_103 = parse_tree__prog_type__put_typeinfo_vars_first_2_f_0(transform_hlds__lambda__ArgVars1_80, transform_hlds__lambda__VarTypes_32);
          }
#line 2038 "transform_hlds.lambda.c"
          transform_hlds__lambda__TypeInfo_187_187 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 567 "lambda.m"
          {
#line 567 "lambda.m"
            mercury__list__append_3_p_1(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__ArgVars_103, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__AllArgVars_109);
          }
#line 569 "lambda.m"
          {
#line 569 "lambda.m"
            hlds__hlds_module__module_info_get_name_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleName_110);
          }
#line 570 "lambda.m"
          {
#line 570 "lambda.m"
            transform_hlds__lambda__OrigPredName_111 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__lambda__OrigPredInfo_37);
          }
#line 571 "lambda.m"
          {
#line 571 "lambda.m"
            transform_hlds__lambda__OrigContext_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
          }
#line 572 "lambda.m"
          {
#line 572 "lambda.m"
            mercury__term__context_file_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigFile_113);
          }
#line 573 "lambda.m"
          {
#line 573 "lambda.m"
            mercury__term__context_line_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigLine_114);
          }
#line 574 "lambda.m"
          {
#line 574 "lambda.m"
            hlds__hlds_module__module_info_next_lambda_count_4_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__LambdaCount_115, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo1_116);
          }
#line 576 "lambda.m"
          {
#line 576 "lambda.m"
            parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__lambda__ModuleName_110, (MR_String) "IntroducedFrom", transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__OrigPredName_111, transform_hlds__lambda__OrigLine_114, transform_hlds__lambda__LambdaCount_115, &transform_hlds__lambda__PredName_117);
          }
#line 578 "lambda.m"
          {
#line 578 "lambda.m"
            transform_hlds__lambda__LambdaContext_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
          }
#line 584 "lambda.m"
          {
#line 584 "lambda.m"
            transform_hlds__lambda__uni_modes_to_modes_2_p_0(transform_hlds__lambda__UniModes0_56, &transform_hlds__lambda__OrigArgModes_119);
          }
#line 592 "lambda.m"
          {
#line 592 "lambda.m"
            mercury__list__length_2_p_0(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__ArgVars_103, &transform_hlds__lambda__NumArgVars_120);
          }
#line 593 "lambda.m"
          {
#line 593 "lambda.m"
            parse_tree__prog_mode__in_mode_1_p_0(&transform_hlds__lambda__In_121);
          }
#line 2100 "transform_hlds.lambda.c"
          transform_hlds__lambda__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 594 "lambda.m"
          {
#line 594 "lambda.m"
            mercury__list__duplicate_3_p_0(transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__NumArgVars_120, ((MR_Box) (transform_hlds__lambda__In_121)), &transform_hlds__lambda__InModes_122);
          }
#line 595 "lambda.m"
          {
#line 595 "lambda.m"
            mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__InModes_122, &transform_hlds__lambda__ArgModesMap_123);
          }
#line 597 "lambda.m"
          {
#line 597 "lambda.m"
            mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__OrigVars_60, transform_hlds__lambda__OrigArgModes_119, &transform_hlds__lambda__OrigArgModesMap_124);
          }
#line 598 "lambda.m"
          {
#line 598 "lambda.m"
            mercury__map__overlay_3_p_0(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__ArgModesMap_123, transform_hlds__lambda__OrigArgModesMap_124, &transform_hlds__lambda__ArgModesMap1_125);
          }
#line 599 "lambda.m"
          {
#line 599 "lambda.m"
            mercury__map__apply_to_list_3_p_0(transform_hlds__lambda__TypeInfo_187_187, transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__ArgModesMap1_125, &transform_hlds__lambda__ArgModes1_126);
          }
#line 602 "lambda.m"
          {
#line 602 "lambda.m"
            check_hlds__mode_util__modes_to_uni_modes_4_p_0(transform_hlds__lambda__ModuleInfo1_116, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__ArgModes1_126, &transform_hlds__lambda__UniModes_106);
          }
#line 604 "lambda.m"
          {
#line 604 "lambda.m"
            mercury__list__append_3_p_1(transform_hlds__lambda__TypeCtorInfo_188_188, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__Modes_22, &transform_hlds__lambda__AllArgModes_127);
          }
#line 605 "lambda.m"
          {
#line 605 "lambda.m"
            parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__AllArgVars_109, &transform_hlds__lambda__ArgTypes_128);
          }
#line 606 "lambda.m"
          {
#line 606 "lambda.m"
            transform_hlds__lambda__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 606 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_159_159, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
#line 606 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_159_159, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11));
#line 606 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_159_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 606 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_159_159, 3) = ((MR_Box) (transform_hlds__lambda__ModuleInfo1_116));
#line 606 "lambda.m"
          }
#line 606 "lambda.m"
          {
#line 606 "lambda.m"
            mercury__list__foldl_corresponding_5_p_0(transform_hlds__lambda__TypeCtorInfo_177_177, transform_hlds__lambda__TypeCtorInfo_188_188, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__lambda__V_159_159, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__AllArgModes_127, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv4_V_129_129);
          }
#line 606 "lambda.m"
          transform_hlds__lambda__V_129_129 = ((MR_Integer) transform_hlds__lambda__conv4_V_129_129);
#line 609 "lambda.m"
          {
#line 609 "lambda.m"
            hlds__hlds_pred__purity_to_markers_2_p_0(transform_hlds__lambda__Purity_16, &transform_hlds__lambda__LambdaMarkers_130);
          }
#line 613 "lambda.m"
          {
#line 613 "lambda.m"
            mercury__map__init_1_p_0(transform_hlds__lambda__TypeInfo_187_187, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &transform_hlds__lambda__VarNameRemap_131);
          }
#line 614 "lambda.m"
          {
#line 614 "lambda.m"
            transform_hlds__lambda__restrict_var_maps_8_p_0(transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__VarSet_31, &transform_hlds__lambda__LambdaVarSet_132, transform_hlds__lambda__VarTypes_32, &transform_hlds__lambda__LambdaVarTypes_133, transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__LambdaRttiVarMaps_134);
          }
#line 621 "lambda.m"
          {
#line 621 "lambda.m"
            hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__lambda__LambdaContext_118, transform_hlds__lambda__LambdaVarSet_132, transform_hlds__lambda__LambdaVarTypes_133, transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__InstVarSet_34, transform_hlds__lambda__AllArgModes_127, (MR_Integer) 0, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__LambdaRttiVarMaps_134, (MR_Integer) 0, transform_hlds__lambda__HasParallelConj_36, transform_hlds__lambda__VarNameRemap_131, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_163_163);
          }
#line 627 "lambda.m"
          {
#line 627 "lambda.m"
            hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_163_163, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_164_164);
          }
#line 636 "lambda.m"
          if ((transform_hlds__lambda__MustRecomputeNonLocals0_39 == (MR_Integer) 0))
#line 637 "lambda.m"
            transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_164_164;
#line 636 "lambda.m"
          else
#line 633 "lambda.m"
            {
#line 634 "lambda.m"
              {
#line 634 "lambda.m"
                hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_164_164, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166);
              }
#line 633 "lambda.m"
            }
#line 642 "lambda.m"
          if ((transform_hlds__lambda__RegWrapperProc_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "lambda.m"
            transform_hlds__lambda__ProcInfo_135 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166;
#line 642 "lambda.m"
          else
#line 640 "lambda.m"
            {
#line 640 "lambda.m"
              MR_Word transform_hlds__lambda__RegR_HeadVars_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RegWrapperProc_20, (MR_Integer) 0)));

#line 641 "lambda.m"
              {
#line 641 "lambda.m"
                hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(transform_hlds__lambda__RegR_HeadVars_136, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166, &transform_hlds__lambda__ProcInfo_135);
              }
#line 640 "lambda.m"
            }
#line 647 "lambda.m"
          {
#line 647 "lambda.m"
            mercury__set__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_assert_id_0, &transform_hlds__lambda__Assertions_137);
          }
#line 649 "lambda.m"
          {
#line 649 "lambda.m"
            transform_hlds__lambda__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 649 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 649 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_168_168, 1) = ((MR_Box) (transform_hlds__lambda__OrigFile_113));
#line 649 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_168_168, 2) = ((MR_Box) (transform_hlds__lambda__OrigLine_114));
#line 649 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_168_168, 3) = ((MR_Box) (transform_hlds__lambda__LambdaCount_115));
#line 649 "lambda.m"
          }
#line 648 "lambda.m"
          {
#line 648 "lambda.m"
            hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__lambda__ModuleName_110, transform_hlds__lambda__PredName_117, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__LambdaContext_118, transform_hlds__lambda__V_168_168, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__lambda__LambdaMarkers_130, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__TVarSet_33, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__Constraints_46, transform_hlds__lambda__Assertions_137, transform_hlds__lambda__VarNameRemap_131, transform_hlds__lambda__ProcInfo_135, &transform_hlds__lambda__ProcId_105, &transform_hlds__lambda__PredInfo_138);
          }
#line 654 "lambda.m"
          {
#line 654 "lambda.m"
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__PredicateTable0_139);
          }
#line 655 "lambda.m"
          {
#line 655 "lambda.m"
            hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lambda__PredInfo_138, &transform_hlds__lambda__PredId_104, transform_hlds__lambda__PredicateTable0_139, &transform_hlds__lambda__PredicateTable_140);
          }
#line 657 "lambda.m"
          {
#line 657 "lambda.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lambda__PredicateTable_140, transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__ModuleInfo_108);
          }
#line 566 "lambda.m"
        }
#line 660 "lambda.m"
      {
#line 660 "lambda.m"
        transform_hlds__lambda__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_170_170, 0) = ((MR_Box) (transform_hlds__lambda__PredId_104));
#line 660 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_170_170, 1) = ((MR_Box) (transform_hlds__lambda__ProcId_105));
#line 660 "lambda.m"
      }
#line 660 "lambda.m"
      {
#line 660 "lambda.m"
        transform_hlds__lambda__ShroudedPredProcId_141 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__lambda__V_170_170);
      }
#line 661 "lambda.m"
      {
#line 661 "lambda.m"
        transform_hlds__lambda__ConsId_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 661 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 661 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_142, 1) = ((MR_Box) (transform_hlds__lambda__ShroudedPredProcId_141));
#line 661 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_142, 2) = NULL;
#line 661 "lambda.m"
      }
#line 662 "lambda.m"
      {
#line 662 "lambda.m"
        MR_Word base;
#line 662 "lambda.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 662 "lambda.m"
        *transform_hlds__lambda__Functor_27 = base;
#line 662 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__ConsId_142));
#line 662 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 662 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
#line 662 "lambda.m"
      }
#line 664 "lambda.m"
      {
#line 664 "lambda.m"
        MR_Word base;
#line 664 "lambda.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 664 "lambda.m"
        *transform_hlds__lambda__Unification_28 = base;
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_53));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__ConsId_142));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__UniModes_106));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 664 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "lambda.m"
      }
#line 667 "lambda.m"
      {
#line 667 "lambda.m"
        MR_Word base;
#line 667 "lambda.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 667 "lambda.m"
        *transform_hlds__lambda__LambdaInfo_30 = base;
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_31));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_32));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TVarSet_33));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_34));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_35));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_36));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__OrigPredInfo_37));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_108));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__MustRecomputeNonLocals_79));
#line 667 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 1));
#line 667 "lambda.m"
      }
#line 418 "lambda.m"
    }
#line 123 "lambda.m"
  }
#line 123 "lambda.m"
}

#line 96 "lambda.m"
void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(
#line 96 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
#line 96 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2,
#line 96 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__3_3)
#line 96 "lambda.m"
{
#line 96 "lambda.m"
  {
#line 96 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 96 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
#line 96 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_9 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

#line 96 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_8 == transform_hlds__lambda__CastY_9);
#line 96 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 2390 "transform_hlds.lambda.c"
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "lambda.m"
    else
#line 96 "lambda.m"
      if ((transform_hlds__lambda__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "lambda.m"
          *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "lambda.m"
        else
#line 2402 "transform_hlds.lambda.c"
          *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 2;
#line 96 "lambda.m"
      else
#line 96 "lambda.m"
        {
#line 96 "lambda.m"
          MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));

#line 96 "lambda.m"
          if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2413 "transform_hlds.lambda.c"
            *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 1;
#line 96 "lambda.m"
          else
#line 96 "lambda.m"
            {
#line 96 "lambda.m"
              MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));

#line 96 "lambda.m"
              {
#line 96 "lambda.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[6], transform_hlds__lambda__HeadVar__1_1, ((MR_Box) (transform_hlds__lambda__V_11_11)), ((MR_Box) (transform_hlds__lambda__V_5_5)));
#line 96 "lambda.m"
                return;
              }
#line 96 "lambda.m"
            }
#line 96 "lambda.m"
        }
#line 96 "lambda.m"
  }
#line 96 "lambda.m"
}

#line 96 "lambda.m"
MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
#line 96 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 96 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2)
#line 96 "lambda.m"
{
#line 96 "lambda.m"
  {
#line 96 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 96 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_7 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 96 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 96 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_7 == transform_hlds__lambda__CastY_8);
#line 96 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 96 "lambda.m"
      transform_hlds__lambda__succeeded = MR_TRUE;
#line 96 "lambda.m"
    else
#line 96 "lambda.m"
      if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "lambda.m"
        {
#line 96 "lambda.m"
          MR_Integer transform_hlds__lambda__CastX_5 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 96 "lambda.m"
          MR_Integer transform_hlds__lambda__CastY_6 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 96 "lambda.m"
          transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastY_6 == transform_hlds__lambda__CastX_5);
#line 96 "lambda.m"
        }
#line 96 "lambda.m"
      else
#line 96 "lambda.m"
        {
#line 96 "lambda.m"
          MR_Word transform_hlds__lambda__TypeInfo_9_9;
#line 96 "lambda.m"
          MR_Word transform_hlds__lambda__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 96 "lambda.m"
          MR_Word transform_hlds__lambda__V_4_4;

#line 96 "lambda.m"
          transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 96 "lambda.m"
          if (transform_hlds__lambda__succeeded)
#line 96 "lambda.m"
            {
#line 96 "lambda.m"
              transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 2496 "transform_hlds.lambda.c"
              transform_hlds__lambda__TypeInfo_9_9 = (MR_Word) &transform_hlds__lambda_scalar_common_1[6];
#line 2498 "transform_hlds.lambda.c"
              {
#line 2500 "transform_hlds.lambda.c"
                return transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_9_9, ((MR_Box) (transform_hlds__lambda__V_3_3)), ((MR_Box) (transform_hlds__lambda__V_4_4)));
              }
#line 96 "lambda.m"
            }
#line 96 "lambda.m"
        }
#line 96 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 96 "lambda.m"
  }
#line 96 "lambda.m"
}

#line 161 "lambda.m"
void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
#line 161 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
#line 161 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2,
#line 161 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__3_3)
#line 161 "lambda.m"
{
#line 161 "lambda.m"
  {
#line 161 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 161 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_33 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
#line 161 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_34 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

#line 161 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_33 == transform_hlds__lambda__CastY_34);
#line 161 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 2538 "transform_hlds.lambda.c"
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "lambda.m"
    else
#line 161 "lambda.m"
      {
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 2)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 3)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 4)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 5)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 6)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 7)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 8)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 9)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_24_24;

#line 161 "lambda.m"
        {
#line 161 "lambda.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], &transform_hlds__lambda__V_24_24, ((MR_Box) (transform_hlds__lambda__V_4_4)), ((MR_Box) (transform_hlds__lambda__V_14_14)));
        }
#line 2592 "transform_hlds.lambda.c"
        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_24_24 == (MR_Integer) 0);
#line 161 "lambda.m"
        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_24_24;
#line 161 "lambda.m"
        else
#line 161 "lambda.m"
          {
#line 161 "lambda.m"
            MR_Word transform_hlds__lambda__V_25_25;

#line 161 "lambda.m"
            {
#line 161 "lambda.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__lambda__V_25_25, ((MR_Box) (transform_hlds__lambda__V_5_5)), ((MR_Box) (transform_hlds__lambda__V_15_15)));
            }
#line 2612 "transform_hlds.lambda.c"
            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_25_25 == (MR_Integer) 0);
#line 161 "lambda.m"
            transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
            if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
              *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_25_25;
#line 161 "lambda.m"
            else
#line 161 "lambda.m"
              {
#line 161 "lambda.m"
                MR_Word transform_hlds__lambda__V_26_26;

#line 161 "lambda.m"
                {
#line 161 "lambda.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[4], &transform_hlds__lambda__V_26_26, ((MR_Box) (transform_hlds__lambda__V_6_6)), ((MR_Box) (transform_hlds__lambda__V_16_16)));
                }
#line 2632 "transform_hlds.lambda.c"
                transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_26_26 == (MR_Integer) 0);
#line 161 "lambda.m"
                transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                  *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_26_26;
#line 161 "lambda.m"
                else
#line 161 "lambda.m"
                  {
#line 161 "lambda.m"
                    MR_Word transform_hlds__lambda__V_27_27;

#line 161 "lambda.m"
                    {
#line 161 "lambda.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[5], &transform_hlds__lambda__V_27_27, ((MR_Box) (transform_hlds__lambda__V_7_7)), ((MR_Box) (transform_hlds__lambda__V_17_17)));
                    }
#line 2652 "transform_hlds.lambda.c"
                    transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_27_27 == (MR_Integer) 0);
#line 161 "lambda.m"
                    transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                      *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_27_27;
#line 161 "lambda.m"
                    else
#line 161 "lambda.m"
                      {
#line 161 "lambda.m"
                        MR_Word transform_hlds__lambda__V_28_28;

#line 161 "lambda.m"
                        {
#line 161 "lambda.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__lambda__V_28_28, transform_hlds__lambda__V_8_8, transform_hlds__lambda__V_18_18);
                        }
#line 2672 "transform_hlds.lambda.c"
                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_28_28 == (MR_Integer) 0);
#line 161 "lambda.m"
                        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                        if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_28_28;
#line 161 "lambda.m"
                        else
#line 161 "lambda.m"
                          {
#line 161 "lambda.m"
                            MR_Word transform_hlds__lambda__V_29_29;
#line 161 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_45_45 = (MR_Integer) transform_hlds__lambda__V_9_9;
#line 161 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_46_46 = (MR_Integer) transform_hlds__lambda__V_19_19;

#line 161 "lambda.m"
                            {
#line 161 "lambda.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__V_29_29, transform_hlds__lambda__V_45_45, transform_hlds__lambda__V_46_46);
                            }
#line 2696 "transform_hlds.lambda.c"
                            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_29_29 == (MR_Integer) 0);
#line 161 "lambda.m"
                            transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                            if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                              *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_29_29;
#line 161 "lambda.m"
                            else
#line 161 "lambda.m"
                              {
#line 161 "lambda.m"
                                MR_Word transform_hlds__lambda__V_30_30;

#line 161 "lambda.m"
                                {
#line 161 "lambda.m"
                                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lambda__V_30_30, transform_hlds__lambda__V_10_10, transform_hlds__lambda__V_20_20);
                                }
#line 2716 "transform_hlds.lambda.c"
                                transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_30_30 == (MR_Integer) 0);
#line 161 "lambda.m"
                                transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                                if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                                  *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_30_30;
#line 161 "lambda.m"
                                else
#line 161 "lambda.m"
                                  {
#line 161 "lambda.m"
                                    MR_Word transform_hlds__lambda__V_31_31;

#line 161 "lambda.m"
                                    {
#line 161 "lambda.m"
                                      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lambda__V_31_31, transform_hlds__lambda__V_11_11, transform_hlds__lambda__V_21_21);
                                    }
#line 2736 "transform_hlds.lambda.c"
                                    transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_31_31 == (MR_Integer) 0);
#line 161 "lambda.m"
                                    transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                                    if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                                      *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_31_31;
#line 161 "lambda.m"
                                    else
#line 161 "lambda.m"
                                      {
#line 161 "lambda.m"
                                        MR_Word transform_hlds__lambda__V_32_32;
#line 161 "lambda.m"
                                        MR_Integer transform_hlds__lambda__V_47_47 = (MR_Integer) transform_hlds__lambda__V_12_12;
#line 161 "lambda.m"
                                        MR_Integer transform_hlds__lambda__V_48_48 = (MR_Integer) transform_hlds__lambda__V_22_22;

#line 161 "lambda.m"
                                        {
#line 161 "lambda.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__V_32_32, transform_hlds__lambda__V_47_47, transform_hlds__lambda__V_48_48);
                                        }
#line 2760 "transform_hlds.lambda.c"
                                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_32_32 == (MR_Integer) 0);
#line 161 "lambda.m"
                                        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 161 "lambda.m"
                                        if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                                          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_32_32;
#line 161 "lambda.m"
                                        else
#line 161 "lambda.m"
                                          {
#line 161 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_49_49 = (MR_Integer) transform_hlds__lambda__V_13_13;
#line 161 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_50_50 = (MR_Integer) transform_hlds__lambda__V_23_23;

#line 161 "lambda.m"
                                            {
#line 161 "lambda.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lambda__HeadVar__1_1, transform_hlds__lambda__V_49_49, transform_hlds__lambda__V_50_50);
#line 161 "lambda.m"
                                              return;
                                            }
#line 161 "lambda.m"
                                          }
#line 161 "lambda.m"
                                      }
#line 161 "lambda.m"
                                  }
#line 161 "lambda.m"
                              }
#line 161 "lambda.m"
                          }
#line 161 "lambda.m"
                      }
#line 161 "lambda.m"
                  }
#line 161 "lambda.m"
              }
#line 161 "lambda.m"
          }
#line 161 "lambda.m"
      }
#line 161 "lambda.m"
  }
#line 161 "lambda.m"
}

#line 161 "lambda.m"
MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
#line 161 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 161 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2)
#line 161 "lambda.m"
{
#line 161 "lambda.m"
  {
#line 161 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 161 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_23 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 161 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_24 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 161 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_23 == transform_hlds__lambda__CastY_24);
#line 161 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
      transform_hlds__lambda__succeeded = MR_TRUE;
#line 161 "lambda.m"
    else
#line 161 "lambda.m"
      {
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__TypeCtorInfo_26_26;
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_27_27;
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_28_28;
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 3)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 4)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 5)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 6)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 7)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 8)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 9)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
#line 161 "lambda.m"
        MR_Word transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));

#line 2884 "transform_hlds.lambda.c"
        {
#line 2886 "transform_hlds.lambda.c"
          transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], ((MR_Box) (transform_hlds__lambda__V_3_3)), ((MR_Box) (transform_hlds__lambda__V_13_13)));
        }
#line 161 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
          {
#line 2893 "transform_hlds.lambda.c"
            transform_hlds__lambda__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2895 "transform_hlds.lambda.c"
            {
#line 2897 "transform_hlds.lambda.c"
              transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__lambda__V_4_4)), ((MR_Box) (transform_hlds__lambda__V_14_14)));
            }
#line 161 "lambda.m"
            if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
              {
#line 2904 "transform_hlds.lambda.c"
                transform_hlds__lambda__TypeInfo_27_27 = (MR_Word) &transform_hlds__lambda_scalar_common_1[4];
#line 2906 "transform_hlds.lambda.c"
                {
#line 2908 "transform_hlds.lambda.c"
                  transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_27_27, ((MR_Box) (transform_hlds__lambda__V_5_5)), ((MR_Box) (transform_hlds__lambda__V_15_15)));
                }
#line 161 "lambda.m"
                if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                  {
#line 2915 "transform_hlds.lambda.c"
                    transform_hlds__lambda__TypeInfo_28_28 = (MR_Word) &transform_hlds__lambda_scalar_common_1[5];
#line 2917 "transform_hlds.lambda.c"
                    {
#line 2919 "transform_hlds.lambda.c"
                      transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_28_28, ((MR_Box) (transform_hlds__lambda__V_6_6)), ((MR_Box) (transform_hlds__lambda__V_16_16)));
                    }
#line 161 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                      {
#line 2926 "transform_hlds.lambda.c"
                        {
#line 2928 "transform_hlds.lambda.c"
                          transform_hlds__lambda__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__lambda__V_7_7, transform_hlds__lambda__V_17_17);
                        }
#line 161 "lambda.m"
                        if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                          {
#line 2935 "transform_hlds.lambda.c"
                            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_8_8 == transform_hlds__lambda__V_18_18);
#line 161 "lambda.m"
                            if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                              {
#line 2941 "transform_hlds.lambda.c"
                                {
#line 2943 "transform_hlds.lambda.c"
                                  transform_hlds__lambda__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lambda__V_9_9, transform_hlds__lambda__V_19_19);
                                }
#line 161 "lambda.m"
                                if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                                  {
#line 2950 "transform_hlds.lambda.c"
                                    {
#line 2952 "transform_hlds.lambda.c"
                                      transform_hlds__lambda__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lambda__V_10_10, transform_hlds__lambda__V_20_20);
                                    }
#line 161 "lambda.m"
                                    if (transform_hlds__lambda__succeeded)
#line 161 "lambda.m"
                                      {
#line 2959 "transform_hlds.lambda.c"
                                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_11_11 == transform_hlds__lambda__V_21_21);
#line 161 "lambda.m"
                                        if (transform_hlds__lambda__succeeded)
#line 2963 "transform_hlds.lambda.c"
                                          transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_12_12 == transform_hlds__lambda__V_22_22);
#line 161 "lambda.m"
                                      }
#line 161 "lambda.m"
                                  }
#line 161 "lambda.m"
                              }
#line 161 "lambda.m"
                          }
#line 161 "lambda.m"
                      }
#line 161 "lambda.m"
                  }
#line 161 "lambda.m"
              }
#line 161 "lambda.m"
          }
#line 161 "lambda.m"
      }
#line 161 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 161 "lambda.m"
  }
#line 161 "lambda.m"
}

#line 935 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
#line 935 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 935 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 935 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 935 "lambda.m"
{
#line 938 "lambda.m"
  while (MR_TRUE)
#line 938 "lambda.m"
    {
#line 938 "lambda.m"
      /* tailcall optimized into a loop */
#line 938 "lambda.m"
      {
#line 938 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 938 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 938 "lambda.m"
        else
#line 939 "lambda.m"
          {
#line 939 "lambda.m"
            MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 939 "lambda.m"
            MR_Word transform_hlds__lambda__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;
#line 939 "lambda.m"
            MR_Integer transform_hlds__lambda__V_18_18;
#line 933 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;

#line 933 "lambda.m"
            {
#line 933 "lambda.m"
              transform_hlds__lambda__V_18_18 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_7);
            }
#line 933 "lambda.m"
            {
#line 933 "lambda.m"
              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_18_18, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12);
            }
#line 933 "lambda.m"
            transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12 = (MR_ArrayPtr) transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;
#line 941 "lambda.m"
            /* direct tailcall eliminated */
#line 941 "lambda.m"
            {
#line 941 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Vars_8;
#line 941 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 941 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 941 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 941 "lambda.m"
            }
#line 941 "lambda.m"
            continue;
#line 939 "lambda.m"
          }
#line 938 "lambda.m"
      }
#line 938 "lambda.m"
      break;
#line 938 "lambda.m"
    }
#line 935 "lambda.m"
}

#line 919 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
#line 919 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 919 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 919 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 919 "lambda.m"
{
#line 922 "lambda.m"
  while (MR_TRUE)
#line 922 "lambda.m"
    {
#line 922 "lambda.m"
      /* tailcall optimized into a loop */
#line 922 "lambda.m"
      {
#line 922 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 922 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 922 "lambda.m"
        else
#line 923 "lambda.m"
          {
#line 923 "lambda.m"
            MR_Word transform_hlds__lambda__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 923 "lambda.m"
            MR_Word transform_hlds__lambda__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 923 "lambda.m"
            MR_Word transform_hlds__lambda__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 2)));
#line 923 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;
#line 924 "lambda.m"
            MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 0)));
#line 924 "lambda.m"
            MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 1)));

#line 925 "lambda.m"
            {
#line 925 "lambda.m"
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_12, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15);
            }
#line 926 "lambda.m"
            /* direct tailcall eliminated */
#line 926 "lambda.m"
            {
#line 926 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Cases_8;
#line 926 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;

#line 926 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 926 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 926 "lambda.m"
            }
#line 926 "lambda.m"
            continue;
#line 923 "lambda.m"
          }
#line 922 "lambda.m"
      }
#line 922 "lambda.m"
      break;
#line 922 "lambda.m"
    }
#line 919 "lambda.m"
}

#line 911 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
#line 911 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 911 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 911 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 911 "lambda.m"
{
#line 914 "lambda.m"
  while (MR_TRUE)
#line 914 "lambda.m"
    {
#line 914 "lambda.m"
      /* tailcall optimized into a loop */
#line 914 "lambda.m"
      {
#line 914 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 914 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 914 "lambda.m"
        else
#line 915 "lambda.m"
          {
#line 915 "lambda.m"
            MR_Word transform_hlds__lambda__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 915 "lambda.m"
            MR_Word transform_hlds__lambda__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 915 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 916 "lambda.m"
            {
#line 916 "lambda.m"
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_7, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12);
            }
#line 917 "lambda.m"
            /* direct tailcall eliminated */
#line 917 "lambda.m"
            {
#line 917 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Goals_8;
#line 917 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 917 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 917 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 917 "lambda.m"
            }
#line 917 "lambda.m"
            continue;
#line 915 "lambda.m"
          }
#line 914 "lambda.m"
      }
#line 914 "lambda.m"
      break;
#line 914 "lambda.m"
    }
#line 911 "lambda.m"
}

#line 878 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
#line 878 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 878 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 878 "lambda.m"
{
#line 878 "lambda.m"
  {
#line 878 "lambda.m"
    MR_Box transform_hlds__lambda__wrapper_arg_2;
#line 878 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 878 "lambda.m"
    MR_Word transform_hlds__lambda__conv4_HeadVar__2_2;

#line 878 "lambda.m"
    {
#line 878 "lambda.m"
      transform_hlds__lambda__conv4_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 878 "lambda.m"
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv4_HeadVar__2_2));
#line 878 "lambda.m"
    return transform_hlds__lambda__wrapper_arg_2;
#line 878 "lambda.m"
  }
#line 878 "lambda.m"
}

#line 877 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
#line 877 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 877 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 877 "lambda.m"
{
#line 877 "lambda.m"
  {
#line 877 "lambda.m"
    MR_Box transform_hlds__lambda__wrapper_arg_2;
#line 877 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 877 "lambda.m"
    MR_Word transform_hlds__lambda__conv3_HeadVar__2_2;

#line 877 "lambda.m"
    {
#line 877 "lambda.m"
      transform_hlds__lambda__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 877 "lambda.m"
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv3_HeadVar__2_2));
#line 877 "lambda.m"
    return transform_hlds__lambda__wrapper_arg_2;
#line 877 "lambda.m"
  }
#line 877 "lambda.m"
}

#line 772 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
#line 772 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_4,
#line 772 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119,
#line 772 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_120)
#line 772 "lambda.m"
{
#line 775 "lambda.m"
  while (MR_TRUE)
#line 775 "lambda.m"
    {
#line 775 "lambda.m"
      /* tailcall optimized into a loop */
#line 775 "lambda.m"
      {
#line 775 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;
#line 775 "lambda.m"
        MR_Word transform_hlds__lambda__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 0)));
#line 776 "lambda.m"
        MR_Word transform_hlds__lambda___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 1)));

#line 809 "lambda.m"
        if (((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 867 "lambda.m"
          {
#line 867 "lambda.m"
            MR_Word transform_hlds__lambda__SubGoal_172 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr_6), (MR_Integer) 0);

#line 868 "lambda.m"
            /* direct tailcall eliminated */
#line 868 "lambda.m"
            {
#line 868 "lambda.m"
              MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_172;

#line 868 "lambda.m"
              transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 868 "lambda.m"
            }
#line 868 "lambda.m"
            continue;
#line 867 "lambda.m"
          }
#line 809 "lambda.m"
        else
#line 809 "lambda.m"
          if (((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 824 "lambda.m"
            {
#line 824 "lambda.m"
              MR_Word transform_hlds__lambda__ArgVars_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 824 "lambda.m"
              MR_Word transform_hlds__lambda__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
#line 824 "lambda.m"
              MR_Integer transform_hlds__lambda__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 824 "lambda.m"
              MR_Word transform_hlds__lambda__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 824 "lambda.m"
              MR_Word transform_hlds__lambda__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 824 "lambda.m"
              MR_Word transform_hlds__lambda__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

#line 825 "lambda.m"
              {
#line 825 "lambda.m"
                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_166, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 825 "lambda.m"
                return;
              }
#line 824 "lambda.m"
            }
#line 809 "lambda.m"
          else
#line 809 "lambda.m"
            if (((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 778 "lambda.m"
              {
#line 778 "lambda.m"
                MR_Word transform_hlds__lambda__LHSVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
#line 778 "lambda.m"
                MR_Word transform_hlds__lambda__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 778 "lambda.m"
                MR_Word transform_hlds__lambda__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 778 "lambda.m"
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 778 "lambda.m"
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
#line 778 "lambda.m"
                MR_Integer transform_hlds__lambda__V_279_279;
#line 778 "lambda.m"
                MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 778 "lambda.m"
                MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 933 "lambda.m"
                MR_ArrayPtr transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_156_156;

#line 933 "lambda.m"
                {
#line 933 "lambda.m"
                  transform_hlds__lambda__V_279_279 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LHSVar_8);
                }
#line 933 "lambda.m"
                {
#line 933 "lambda.m"
                  mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_279_279, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_156_156);
                }
#line 933 "lambda.m"
                transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = (MR_ArrayPtr) transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_156_156;
#line 787 "lambda.m"
                if (((MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) == (MR_mktag((MR_Integer) 2))))
#line 790 "lambda.m"
                  transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 787 "lambda.m"
                else
#line 787 "lambda.m"
                  if (((MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) == (MR_mktag((MR_Integer) 0))))
#line 781 "lambda.m"
                    {
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 4)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 0)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 1)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 2)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 3)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 5)));
#line 781 "lambda.m"
                      MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 6)));
#line 784 "lambda.m"
                      MR_Word transform_hlds__lambda__ReuseVar_20;
#line 782 "lambda.m"
                      MR_Word transform_hlds__lambda__V_157_157;
#line 782 "lambda.m"
                      MR_Word transform_hlds__lambda__V_21_21;
#line 782 "lambda.m"
                      MR_Word transform_hlds__lambda__V_22_22;

#line 782 "lambda.m"
                      transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
#line 782 "lambda.m"
                      if (transform_hlds__lambda__succeeded)
#line 782 "lambda.m"
                        {
#line 782 "lambda.m"
                          transform_hlds__lambda__V_157_157 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__CellToReuse_17), (MR_Integer) 1);
#line 782 "lambda.m"
                          transform_hlds__lambda__ReuseVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 0)));
#line 782 "lambda.m"
                          transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 1)));
#line 782 "lambda.m"
                          transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 2)));
#line 782 "lambda.m"
                          transform_hlds__lambda__succeeded = MR_TRUE;
#line 782 "lambda.m"
                        }
#line 784 "lambda.m"
                      if (transform_hlds__lambda__succeeded)
#line 932 "lambda.m"
                        {
#line 932 "lambda.m"
                          MR_Integer transform_hlds__lambda__V_288_288;
#line 933 "lambda.m"
                          MR_ArrayPtr transform_hlds__lambda__conv1_STATE_VARIABLE_VarUses_158_158;

#line 933 "lambda.m"
                          {
#line 933 "lambda.m"
                            transform_hlds__lambda__V_288_288 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__ReuseVar_20);
                          }
#line 933 "lambda.m"
                          {
#line 933 "lambda.m"
                            mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_288_288, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156, &transform_hlds__lambda__conv1_STATE_VARIABLE_VarUses_158_158);
                          }
#line 933 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = (MR_ArrayPtr) transform_hlds__lambda__conv1_STATE_VARIABLE_VarUses_158_158;
#line 932 "lambda.m"
                        }
#line 784 "lambda.m"
                      else
#line 783 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 781 "lambda.m"
                    }
#line 787 "lambda.m"
                  else
#line 787 "lambda.m"
                    if (((MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) == (MR_mktag((MR_Integer) 1))))
#line 788 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 787 "lambda.m"
                    else
#line 787 "lambda.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Unif_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 794 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 787 "lambda.m"
                      else
#line 792 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 799 "lambda.m"
                if (((MR_tag((MR_Word) transform_hlds__lambda__RHS_9)) == (MR_mktag((MR_Integer) 1))))
#line 800 "lambda.m"
                  {
#line 800 "lambda.m"
                    MR_Word transform_hlds__lambda__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
#line 800 "lambda.m"
                    MR_Word transform_hlds__lambda__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
#line 800 "lambda.m"
                    MR_Word transform_hlds__lambda__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 1)));

#line 801 "lambda.m"
                    {
#line 801 "lambda.m"
                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_39, transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 801 "lambda.m"
                      return;
                    }
#line 800 "lambda.m"
                  }
#line 799 "lambda.m"
                else
#line 799 "lambda.m"
                  if (((MR_tag((MR_Word) transform_hlds__lambda__RHS_9)) == (MR_mktag((MR_Integer) 2))))
#line 804 "lambda.m"
                    {
#line 804 "lambda.m"
                      MR_Word transform_hlds__lambda__NonLocals_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
#line 804 "lambda.m"
                      MR_Word transform_hlds__lambda__LambdaVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 3)));
#line 804 "lambda.m"
                      MR_Word transform_hlds__lambda__LambdaGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 6)));
#line 804 "lambda.m"
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159;
#line 804 "lambda.m"
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160;
#line 803 "lambda.m"
                      MR_Word transform_hlds__lambda__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 803 "lambda.m"
                      MR_Word transform_hlds__lambda__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 803 "lambda.m"
                      MR_Word transform_hlds__lambda__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 803 "lambda.m"
                      MR_Word transform_hlds__lambda__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 4)));
#line 803 "lambda.m"
                      MR_Word transform_hlds__lambda__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 5)));

#line 805 "lambda.m"
                      {
#line 805 "lambda.m"
                        transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__NonLocals_44, transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, &transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159);
                      }
#line 806 "lambda.m"
                      {
#line 806 "lambda.m"
                        transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__LambdaVars_45, transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159, &transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160);
                      }
#line 807 "lambda.m"
                      /* direct tailcall eliminated */
#line 807 "lambda.m"
                      {
#line 807 "lambda.m"
                        MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__LambdaGoal_48;
#line 807 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160;

#line 807 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 807 "lambda.m"
                        transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 807 "lambda.m"
                      }
#line 807 "lambda.m"
                      continue;
#line 804 "lambda.m"
                    }
#line 799 "lambda.m"
                  else
#line 797 "lambda.m"
                    {
#line 797 "lambda.m"
                      MR_Word transform_hlds__lambda__RHSVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
#line 797 "lambda.m"
                      MR_Integer transform_hlds__lambda__V_297_297;
#line 933 "lambda.m"
                      MR_ArrayPtr transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_120;

#line 933 "lambda.m"
                      {
#line 933 "lambda.m"
                        transform_hlds__lambda__V_297_297 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__RHSVar_36);
                      }
#line 933 "lambda.m"
                      {
#line 933 "lambda.m"
                        mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_297_297, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, &transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_120);
                      }
#line 933 "lambda.m"
                      *transform_hlds__lambda__STATE_VARIABLE_VarUses_120 = (MR_ArrayPtr) transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_120;
#line 797 "lambda.m"
                    }
#line 778 "lambda.m"
              }
#line 809 "lambda.m"
            else
#line 809 "lambda.m"
              if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 876 "lambda.m"
                {
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__TypeCtorInfo_178_178 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__TypeInfo_179_179 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__Args_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__ExtraArgs_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__ExtraVars_101;
#line 876 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133;
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__ArgVars_174;
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 876 "lambda.m"
                  MR_Integer transform_hlds__lambda__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 6)));
#line 876 "lambda.m"
                  MR_Word transform_hlds__lambda__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 7)));

#line 877 "lambda.m"
                  {
#line 877 "lambda.m"
                    transform_hlds__lambda__ArgVars_174 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_178_178, transform_hlds__lambda__TypeInfo_179_179, (MR_Word) &transform_hlds__lambda_scalar_common_2[3], transform_hlds__lambda__Args_97);
                  }
#line 878 "lambda.m"
                  {
#line 878 "lambda.m"
                    transform_hlds__lambda__ExtraVars_101 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_178_178, transform_hlds__lambda__TypeInfo_179_179, (MR_Word) &transform_hlds__lambda_scalar_common_2[4], transform_hlds__lambda__ExtraArgs_98);
                  }
#line 879 "lambda.m"
                  {
#line 879 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_174, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133);
                  }
#line 880 "lambda.m"
                  {
#line 880 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ExtraVars_101, transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 880 "lambda.m"
                    return;
                  }
#line 876 "lambda.m"
                }
#line 809 "lambda.m"
              else
#line 809 "lambda.m"
                if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 829 "lambda.m"
                  {
#line 829 "lambda.m"
                    MR_Word transform_hlds__lambda__Goals_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 827 "lambda.m"
                    MR_Word transform_hlds__lambda__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 830 "lambda.m"
                    {
#line 830 "lambda.m"
                      transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_68, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 830 "lambda.m"
                      return;
                    }
#line 829 "lambda.m"
                  }
#line 809 "lambda.m"
                else
#line 809 "lambda.m"
                  if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 829 "lambda.m"
                    {
#line 829 "lambda.m"
                      MR_Word transform_hlds__lambda__Goals_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 830 "lambda.m"
                      {
#line 830 "lambda.m"
                        transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_184, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 830 "lambda.m"
                        return;
                      }
#line 829 "lambda.m"
                    }
#line 809 "lambda.m"
                  else
#line 809 "lambda.m"
                    if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 810 "lambda.m"
                      {
#line 810 "lambda.m"
                        MR_Word transform_hlds__lambda__GenericCall_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 810 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154;
#line 810 "lambda.m"
                        MR_Word transform_hlds__lambda__ArgVars_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 810 "lambda.m"
                        MR_Word transform_hlds__lambda__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 810 "lambda.m"
                        MR_Word transform_hlds__lambda__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 810 "lambda.m"
                        MR_Word transform_hlds__lambda__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

#line 814 "lambda.m"
                        if (((MR_tag((MR_Word) transform_hlds__lambda__GenericCall_49)) == (MR_mktag((MR_Integer) 3))))
#line 820 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 814 "lambda.m"
                        else
#line 814 "lambda.m"
                          if (((MR_tag((MR_Word) transform_hlds__lambda__GenericCall_49)) == (MR_mktag((MR_Integer) 1))))
#line 815 "lambda.m"
                            {
#line 815 "lambda.m"
                              MR_Word transform_hlds__lambda__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
#line 815 "lambda.m"
                              MR_Integer transform_hlds__lambda__V_189_189;
#line 815 "lambda.m"
                              MR_Integer transform_hlds__lambda__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
#line 815 "lambda.m"
                              MR_Word transform_hlds__lambda__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
#line 815 "lambda.m"
                              MR_Word transform_hlds__lambda__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
#line 933 "lambda.m"
                              MR_ArrayPtr transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_154_154;

#line 933 "lambda.m"
                              {
#line 933 "lambda.m"
                                transform_hlds__lambda__V_189_189 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_164);
                              }
#line 933 "lambda.m"
                              {
#line 933 "lambda.m"
                                mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_189_189, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_154_154);
                              }
#line 933 "lambda.m"
                              transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_154_154;
#line 815 "lambda.m"
                            }
#line 814 "lambda.m"
                          else
#line 814 "lambda.m"
                            if (((MR_tag((MR_Word) transform_hlds__lambda__GenericCall_49)) == (MR_mktag((MR_Integer) 2))))
#line 818 "lambda.m"
                              transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 814 "lambda.m"
                            else
#line 812 "lambda.m"
                              {
#line 812 "lambda.m"
                                MR_Word transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
#line 812 "lambda.m"
                                MR_Integer transform_hlds__lambda__V_198_198;
#line 812 "lambda.m"
                                MR_Word transform_hlds__lambda__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
#line 812 "lambda.m"
                                MR_Word transform_hlds__lambda__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
#line 812 "lambda.m"
                                MR_Integer transform_hlds__lambda__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
#line 933 "lambda.m"
                                MR_ArrayPtr transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_154_154;

#line 933 "lambda.m"
                                {
#line 933 "lambda.m"
                                  transform_hlds__lambda__V_198_198 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_53);
                                }
#line 933 "lambda.m"
                                {
#line 933 "lambda.m"
                                  mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_198_198, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_154_154);
                                }
#line 933 "lambda.m"
                                transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_154_154;
#line 812 "lambda.m"
                              }
#line 822 "lambda.m"
                        {
#line 822 "lambda.m"
                          transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_165, transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 822 "lambda.m"
                          return;
                        }
#line 810 "lambda.m"
                      }
#line 809 "lambda.m"
                    else
#line 809 "lambda.m"
                      if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 870 "lambda.m"
                        {
#line 870 "lambda.m"
                          MR_Word transform_hlds__lambda__Cond_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 870 "lambda.m"
                          MR_Word transform_hlds__lambda__Then_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 870 "lambda.m"
                          MR_Word transform_hlds__lambda__Else_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 870 "lambda.m"
                          MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135;
#line 870 "lambda.m"
                          MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136;
#line 870 "lambda.m"
                          MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137;
#line 870 "lambda.m"
                          MR_Word transform_hlds__lambda__Vars_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 871 "lambda.m"
                          {
#line 871 "lambda.m"
                            transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_173, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135);
                          }
#line 872 "lambda.m"
                          {
#line 872 "lambda.m"
                            transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Cond_91, transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135, &transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136);
                          }
#line 873 "lambda.m"
                          {
#line 873 "lambda.m"
                            transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Then_92, transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136, &transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137);
                          }
#line 874 "lambda.m"
                          /* direct tailcall eliminated */
#line 874 "lambda.m"
                          {
#line 874 "lambda.m"
                            MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__Else_93;
#line 874 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137;

#line 874 "lambda.m"
                            transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 874 "lambda.m"
                            transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 874 "lambda.m"
                          }
#line 874 "lambda.m"
                          continue;
#line 870 "lambda.m"
                        }
#line 809 "lambda.m"
                      else
#line 809 "lambda.m"
                        if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 836 "lambda.m"
                          {
#line 836 "lambda.m"
                            MR_Word transform_hlds__lambda__Reason_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 836 "lambda.m"
                            MR_Word transform_hlds__lambda__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 836 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147;

#line 840 "lambda.m"
                            if (((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 0))))
#line 838 "lambda.m"
                              {
#line 838 "lambda.m"
                                MR_Word transform_hlds__lambda__Vars_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));

#line 839 "lambda.m"
                                {
#line 839 "lambda.m"
                                  transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_73, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147);
                                }
#line 838 "lambda.m"
                              }
#line 840 "lambda.m"
                            else
#line 840 "lambda.m"
                              if (((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 2))))
#line 851 "lambda.m"
                                transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 840 "lambda.m"
                              else
#line 840 "lambda.m"
                                if (((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 1))))
#line 841 "lambda.m"
                                  {
#line 841 "lambda.m"
                                    MR_Word transform_hlds__lambda__Vars_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));
#line 841 "lambda.m"
                                    MR_Word transform_hlds__lambda__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));

#line 842 "lambda.m"
                                    {
#line 842 "lambda.m"
                                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_168, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147);
                                    }
#line 841 "lambda.m"
                                  }
#line 840 "lambda.m"
                                else
#line 840 "lambda.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 852 "lambda.m"
                                    transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 840 "lambda.m"
                                  else
#line 840 "lambda.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 853 "lambda.m"
                                      transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 840 "lambda.m"
                                    else
#line 840 "lambda.m"
                                      if (((((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 844 "lambda.m"
                                        {
#line 844 "lambda.m"
                                          MR_Word transform_hlds__lambda__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
#line 844 "lambda.m"
                                          MR_Integer transform_hlds__lambda__V_207_207;
#line 844 "lambda.m"
                                          MR_Word transform_hlds__lambda__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
#line 933 "lambda.m"
                                          MR_ArrayPtr transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_147_147;

#line 933 "lambda.m"
                                          {
#line 933 "lambda.m"
                                            transform_hlds__lambda__V_207_207 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_169);
                                          }
#line 933 "lambda.m"
                                          {
#line 933 "lambda.m"
                                            mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_207_207, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_147_147);
                                          }
#line 933 "lambda.m"
                                          transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_147_147;
#line 844 "lambda.m"
                                        }
#line 840 "lambda.m"
                                      else
#line 840 "lambda.m"
                                        if (((((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 847 "lambda.m"
                                          {
#line 847 "lambda.m"
                                            MR_Word transform_hlds__lambda__LCVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
#line 847 "lambda.m"
                                            MR_Word transform_hlds__lambda__LCSVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
#line 847 "lambda.m"
                                            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143;
#line 847 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_216_216;
#line 847 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_225_225;
#line 847 "lambda.m"
                                            MR_Word transform_hlds__lambda__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 3)));
#line 933 "lambda.m"
                                            MR_ArrayPtr transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_143_143;
#line 933 "lambda.m"
                                            MR_ArrayPtr transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_147_147;

#line 933 "lambda.m"
                                            {
#line 933 "lambda.m"
                                              transform_hlds__lambda__V_216_216 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCVar_76);
                                            }
#line 933 "lambda.m"
                                            {
#line 933 "lambda.m"
                                              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_216_216, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_143_143);
                                            }
#line 933 "lambda.m"
                                            transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143 = (MR_ArrayPtr) transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_143_143;
#line 933 "lambda.m"
                                            {
#line 933 "lambda.m"
                                              transform_hlds__lambda__V_225_225 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCSVar_77);
                                            }
#line 933 "lambda.m"
                                            {
#line 933 "lambda.m"
                                              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_225_225, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143, &transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_147_147);
                                            }
#line 933 "lambda.m"
                                            transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_147_147;
#line 847 "lambda.m"
                                          }
#line 840 "lambda.m"
                                        else
#line 840 "lambda.m"
                                          if (((((MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 854 "lambda.m"
                                            transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 840 "lambda.m"
                                          else
#line 861 "lambda.m"
                                            {
#line 863 "lambda.m"
                                              {
#line 863 "lambda.m"
                                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
#line 863 "lambda.m"
                                                return;
                                              }
#line 861 "lambda.m"
                                            }
#line 865 "lambda.m"
                            /* direct tailcall eliminated */
#line 865 "lambda.m"
                            {
#line 865 "lambda.m"
                              MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_72;
#line 865 "lambda.m"
                              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147;

#line 865 "lambda.m"
                              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 865 "lambda.m"
                              transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 865 "lambda.m"
                            }
#line 865 "lambda.m"
                            continue;
#line 836 "lambda.m"
                          }
#line 809 "lambda.m"
                        else
#line 809 "lambda.m"
                          if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 882 "lambda.m"
                            {
#line 882 "lambda.m"
                              MR_Word transform_hlds__lambda__Shorthand_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 900 "lambda.m"
                              if (((MR_tag((MR_Word) transform_hlds__lambda__Shorthand_102)) == (MR_mktag((MR_Integer) 1))))
#line 885 "lambda.m"
                                {
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__Outer_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__Inner_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 2)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__MaybeOutputVars_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 3)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__MainGoal_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 4)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__OrElseGoals_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 5)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__OuterDI_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_104, (MR_Integer) 0)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__OuterUO_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_104, (MR_Integer) 1)));
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__InnerDI_112;
#line 885 "lambda.m"
                                  MR_Word transform_hlds__lambda__InnerUO_113;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128;
#line 885 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129;
#line 885 "lambda.m"
                                  MR_Integer transform_hlds__lambda__V_234_234;
#line 885 "lambda.m"
                                  MR_Integer transform_hlds__lambda__V_243_243;
#line 885 "lambda.m"
                                  MR_Integer transform_hlds__lambda__V_252_252;
#line 885 "lambda.m"
                                  MR_Integer transform_hlds__lambda__V_261_261;
#line 884 "lambda.m"
                                  MR_Word transform_hlds__lambda__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 884 "lambda.m"
                                  MR_Word transform_hlds__lambda__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 6)));
#line 933 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_124_124;
#line 933 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_125_125;
#line 933 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_126_126;
#line 933 "lambda.m"
                                  MR_ArrayPtr transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_127_127;

#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    transform_hlds__lambda__V_234_234 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterDI_110);
                                  }
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_234_234, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_124_124);
                                  }
#line 933 "lambda.m"
                                  transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124 = (MR_ArrayPtr) transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_124_124;
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    transform_hlds__lambda__V_243_243 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterUO_111);
                                  }
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_243_243, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124, &transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_125_125);
                                  }
#line 933 "lambda.m"
                                  transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125 = (MR_ArrayPtr) transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_125_125;
#line 889 "lambda.m"
                                  transform_hlds__lambda__InnerDI_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_105, (MR_Integer) 0)));
#line 889 "lambda.m"
                                  transform_hlds__lambda__InnerUO_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_105, (MR_Integer) 1)));
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    transform_hlds__lambda__V_252_252 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerDI_112);
                                  }
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_252_252, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125, &transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_126_126);
                                  }
#line 933 "lambda.m"
                                  transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126 = (MR_ArrayPtr) transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_126_126;
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    transform_hlds__lambda__V_261_261 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerUO_113);
                                  }
#line 933 "lambda.m"
                                  {
#line 933 "lambda.m"
                                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_261_261, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126, &transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_127_127);
                                  }
#line 933 "lambda.m"
                                  transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127 = (MR_ArrayPtr) transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_127_127;
#line 894 "lambda.m"
                                  if ((transform_hlds__lambda__MaybeOutputVars_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 893 "lambda.m"
                                    transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128 = transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127;
#line 894 "lambda.m"
                                  else
#line 895 "lambda.m"
                                    {
#line 895 "lambda.m"
                                      MR_Word transform_hlds__lambda__OutputVars_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__MaybeOutputVars_106, (MR_Integer) 0)));

#line 896 "lambda.m"
                                      {
#line 896 "lambda.m"
                                        transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__OutputVars_114, transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127, &transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128);
                                      }
#line 895 "lambda.m"
                                    }
#line 898 "lambda.m"
                                  {
#line 898 "lambda.m"
                                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__MainGoal_107, transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128, &transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129);
                                  }
#line 899 "lambda.m"
                                  {
#line 899 "lambda.m"
                                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__OrElseGoals_108, transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 899 "lambda.m"
                                    return;
                                  }
#line 885 "lambda.m"
                                }
#line 900 "lambda.m"
                              else
#line 900 "lambda.m"
                                if (((MR_tag((MR_Word) transform_hlds__lambda__Shorthand_102)) == (MR_mktag((MR_Integer) 0))))
#line 905 "lambda.m"
                                  {
#line 905 "lambda.m"
                                    MR_Word transform_hlds__lambda__LeftGoal_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 905 "lambda.m"
                                    MR_Word transform_hlds__lambda__RightGoal_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));
#line 905 "lambda.m"
                                    MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121;

#line 906 "lambda.m"
                                    {
#line 906 "lambda.m"
                                      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__LeftGoal_117, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121);
                                    }
#line 907 "lambda.m"
                                    /* direct tailcall eliminated */
#line 907 "lambda.m"
                                    {
#line 907 "lambda.m"
                                      MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__RightGoal_118;
#line 907 "lambda.m"
                                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121;

#line 907 "lambda.m"
                                      transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 907 "lambda.m"
                                      transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 907 "lambda.m"
                                    }
#line 907 "lambda.m"
                                    continue;
#line 905 "lambda.m"
                                  }
#line 900 "lambda.m"
                                else
#line 901 "lambda.m"
                                  {
#line 901 "lambda.m"
                                    MR_Word transform_hlds__lambda__SubGoal_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 2)));
#line 901 "lambda.m"
                                    MR_Word transform_hlds__lambda__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 901 "lambda.m"
                                    MR_Word transform_hlds__lambda__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));

#line 903 "lambda.m"
                                    /* direct tailcall eliminated */
#line 903 "lambda.m"
                                    {
#line 903 "lambda.m"
                                      MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_175;

#line 903 "lambda.m"
                                      transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 903 "lambda.m"
                                    }
#line 903 "lambda.m"
                                    continue;
#line 901 "lambda.m"
                                  }
#line 882 "lambda.m"
                            }
#line 809 "lambda.m"
                          else
#line 832 "lambda.m"
                            {
#line 832 "lambda.m"
                              MR_Word transform_hlds__lambda__Cases_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 832 "lambda.m"
                              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149;
#line 832 "lambda.m"
                              MR_Word transform_hlds__lambda__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 832 "lambda.m"
                              MR_Integer transform_hlds__lambda__V_270_270;
#line 832 "lambda.m"
                              MR_Word transform_hlds__lambda___Det_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 933 "lambda.m"
                              MR_ArrayPtr transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_149_149;

#line 933 "lambda.m"
                              {
#line 933 "lambda.m"
                                transform_hlds__lambda__V_270_270 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_167);
                              }
#line 933 "lambda.m"
                              {
#line 933 "lambda.m"
                                mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_270_270, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_149_149);
                              }
#line 933 "lambda.m"
                              transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = (MR_ArrayPtr) transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_149_149;
#line 834 "lambda.m"
                              {
#line 834 "lambda.m"
                                transform_hlds__lambda__find_used_vars_in_cases_3_p_0(transform_hlds__lambda__Cases_70, transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
#line 834 "lambda.m"
                                return;
                              }
#line 832 "lambda.m"
                            }
#line 775 "lambda.m"
      }
#line 775 "lambda.m"
      break;
#line 775 "lambda.m"
    }
#line 772 "lambda.m"
}

#line 755 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
#line 755 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 755 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
#line 755 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
#line 755 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4)
#line 755 "lambda.m"
{
#line 759 "lambda.m"
  while (MR_TRUE)
#line 759 "lambda.m"
    {
#line 759 "lambda.m"
      /* tailcall optimized into a loop */
#line 759 "lambda.m"
      {
#line 759 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 759 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
#line 759 "lambda.m"
        else
#line 760 "lambda.m"
          {
#line 760 "lambda.m"
            MR_Word transform_hlds__lambda__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "lambda.m"
            MR_Word transform_hlds__lambda__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "lambda.m"
            MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 0)));
#line 760 "lambda.m"
            MR_Integer transform_hlds__lambda__VarNum_15;
#line 760 "lambda.m"
            MR_Word transform_hlds__lambda__Used_16;
#line 760 "lambda.m"
            MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;
#line 761 "lambda.m"
            MR_Word transform_hlds__lambda___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 1)));
#line 763 "lambda.m"
            MR_Box transform_hlds__lambda__conv0_Used_16;

#line 762 "lambda.m"
            {
#line 762 "lambda.m"
              transform_hlds__lambda__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_13);
            }
#line 763 "lambda.m"
            {
#line 763 "lambda.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) transform_hlds__lambda__HeadVar__4_4, transform_hlds__lambda__VarNum_15, &transform_hlds__lambda__conv0_Used_16);
            }
#line 763 "lambda.m"
            transform_hlds__lambda__Used_16 = ((MR_Word) transform_hlds__lambda__conv0_Used_16);
#line 767 "lambda.m"
            if ((transform_hlds__lambda__Used_16 == (MR_Integer) 0))
#line 768 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
#line 767 "lambda.m"
            else
#line 766 "lambda.m"
              {
#line 766 "lambda.m"
                transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "lambda.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (transform_hlds__lambda__VarType_9));
#line 766 "lambda.m"
                MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2));
#line 766 "lambda.m"
              }
#line 770 "lambda.m"
            /* direct tailcall eliminated */
#line 770 "lambda.m"
            {
#line 770 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__VarTypes_10;
#line 770 "lambda.m"
              MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;

#line 770 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0__tmp_copy_2;
#line 770 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 770 "lambda.m"
            }
#line 770 "lambda.m"
            continue;
#line 760 "lambda.m"
          }
#line 759 "lambda.m"
      }
#line 759 "lambda.m"
      break;
#line 759 "lambda.m"
    }
#line 755 "lambda.m"
}

#line 733 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVars_9,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_10,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
#line 733 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
#line 733 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27)
#line 733 "lambda.m"
{
#line 737 "lambda.m"
  {
#line 737 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 737 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 737 "lambda.m"
    MR_Word transform_hlds__lambda__MaxVar_14;
#line 737 "lambda.m"
    MR_Integer transform_hlds__lambda__MaxVarNum_15;
#line 737 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses0_16;
#line 737 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses1_17;
#line 737 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses_18;
#line 737 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypesList0_19;
#line 737 "lambda.m"
    MR_Word transform_hlds__lambda__RevVarTypesList_20;
#line 737 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypesList_21;
#line 737 "lambda.m"
    MR_Integer transform_hlds__lambda__V_28_28;
#line 744 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_16;

#line 738 "lambda.m"
    {
#line 738 "lambda.m"
      transform_hlds__lambda__MaxVar_14 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22);
    }
#line 739 "lambda.m"
    {
#line 739 "lambda.m"
      transform_hlds__lambda__MaxVarNum_15 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__MaxVar_14);
    }
#line 744 "lambda.m"
    transform_hlds__lambda__V_28_28 = (transform_hlds__lambda__MaxVarNum_15 + (MR_Integer) 1);
#line 744 "lambda.m"
    {
#line 744 "lambda.m"
      mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_28_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_16);
    }
#line 744 "lambda.m"
    transform_hlds__lambda__VarUses0_16 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_16;
#line 745 "lambda.m"
    {
#line 745 "lambda.m"
      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_9, transform_hlds__lambda__VarUses0_16, &transform_hlds__lambda__VarUses1_17);
    }
#line 746 "lambda.m"
    {
#line 746 "lambda.m"
      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_10, transform_hlds__lambda__VarUses1_17, &transform_hlds__lambda__VarUses_18);
    }
#line 748 "lambda.m"
    {
#line 748 "lambda.m"
      parse_tree__prog_data__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24, &transform_hlds__lambda__VarTypesList0_19);
    }
#line 749 "lambda.m"
    {
#line 749 "lambda.m"
      transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_20, transform_hlds__lambda__VarUses_18);
    }
#line 750 "lambda.m"
    {
#line 750 "lambda.m"
      mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_20, &transform_hlds__lambda__VarTypesList_21);
    }
#line 751 "lambda.m"
    {
#line 751 "lambda.m"
      parse_tree__prog_data__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_21, transform_hlds__lambda__STATE_VARIABLE_VarTypes_25);
    }
#line 753 "lambda.m"
    {
#line 753 "lambda.m"
      hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_18, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);
    }
#line 753 "lambda.m"
    *transform_hlds__lambda__STATE_VARIABLE_VarSet_23 = transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22;
#line 737 "lambda.m"
  }
#line 733 "lambda.m"
}

#line 700 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_6,
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__Type_7,
#line 700 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_8,
#line 700 "lambda.m"
  MR_Integer transform_hlds__lambda__X_9,
#line 700 "lambda.m"
  MR_Integer * transform_hlds__lambda__X_5)
#line 700 "lambda.m"
{
#line 703 "lambda.m"
  {
#line 703 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 703 "lambda.m"
    MR_Word transform_hlds__lambda__Inst_10;
#line 705 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13;
#line 705 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 705 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 703 "lambda.m"
    *transform_hlds__lambda__X_5 = transform_hlds__lambda__X_9;
#line 704 "lambda.m"
    {
#line 704 "lambda.m"
      transform_hlds__lambda__Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(transform_hlds__lambda__ModuleInfo_6, transform_hlds__lambda__Mode_8);
    }
#line 705 "lambda.m"
    transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 705 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 705 "lambda.m"
      {
#line 705 "lambda.m"
        transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 1)));
#line 705 "lambda.m"
        transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 2)));
#line 705 "lambda.m"
        transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 705 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 705 "lambda.m"
          transform_hlds__lambda__V_12_12 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__V_13_13), (MR_Integer) 1);
#line 705 "lambda.m"
      }
#line 712 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 708 "lambda.m"
      {
#line 706 "lambda.m"
        {
#line 706 "lambda.m"
          transform_hlds__lambda__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__lambda__Type_7);
        }
#line 708 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 707 "lambda.m"
          {
#line 707 "lambda.m"
          }
#line 708 "lambda.m"
        else
#line 709 "lambda.m"
          {
#line 709 "lambda.m"
            {
#line 709 "lambda.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
#line 709 "lambda.m"
              return;
            }
#line 709 "lambda.m"
          }
#line 708 "lambda.m"
      }
#line 712 "lambda.m"
    else
#line 713 "lambda.m"
      {
#line 713 "lambda.m"
      }
#line 703 "lambda.m"
  }
#line 700 "lambda.m"
}

#line 688 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__uni_modes_to_modes_2_p_0(
#line 688 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 688 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 688 "lambda.m"
{
#line 690 "lambda.m"
  {
#line 690 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 690 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "lambda.m"
      *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 690 "lambda.m"
    else
#line 691 "lambda.m"
      {
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__UniMode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__UniModes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__Mode_5;
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__Modes_6;
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__Initial1_8;
#line 691 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UniMode_3, (MR_Integer) 0)));
#line 692 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UniMode_3, (MR_Integer) 1)));
#line 692 "lambda.m"
        MR_Word transform_hlds__lambda___Initial0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_11_11, (MR_Integer) 0)));

#line 692 "lambda.m"
        transform_hlds__lambda__Initial1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_11_11, (MR_Integer) 1)));
#line 693 "lambda.m"
        {
#line 693 "lambda.m"
          transform_hlds__lambda__Mode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 0) = ((MR_Box) (transform_hlds__lambda__Initial1_8));
#line 693 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 1) = ((MR_Box) (transform_hlds__lambda__Initial1_8));
#line 693 "lambda.m"
        }
#line 694 "lambda.m"
        {
#line 694 "lambda.m"
          transform_hlds__lambda__uni_modes_to_modes_2_p_0(transform_hlds__lambda__UniModes_4, &transform_hlds__lambda__Modes_6);
        }
#line 691 "lambda.m"
        {
#line 691 "lambda.m"
          MR_Word base;
#line 691 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 691 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Mode_5));
#line 691 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Modes_6));
#line 691 "lambda.m"
        }
#line 691 "lambda.m"
      }
#line 690 "lambda.m"
  }
#line 688 "lambda.m"
}

#line 676 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
#line 676 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 676 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 676 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
#line 676 "lambda.m"
{
#line 676 "lambda.m"
  {
#line 676 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 676 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

#line 676 "lambda.m"
    {
#line 676 "lambda.m"
      parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    }
#line 676 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
#line 676 "lambda.m"
  }
#line 676 "lambda.m"
}

#line 671 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
#line 671 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaVars_3,
#line 671 "lambda.m"
  MR_Word transform_hlds__lambda__ClassConstraint_4)
#line 671 "lambda.m"
{
#line 674 "lambda.m"
  {
#line 674 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__TypeInfo_16_16;
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 1)));
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVarsList_7;
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVars_8;
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__LambdaVarsSet_9;
#line 674 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVarsSet_10;
#line 675 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 0)));

#line 676 "lambda.m"
    {
#line 676 "lambda.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[2], transform_hlds__lambda__ConstraintTypes_6, &transform_hlds__lambda__ConstraintVarsList_7);
    }
#line 4730 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeInfo_16_16 = (MR_Word) &transform_hlds__lambda_scalar_common_1[0];
#line 677 "lambda.m"
    {
#line 677 "lambda.m"
      mercury__list__condense_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsList_7, &transform_hlds__lambda__ConstraintVars_8);
    }
#line 680 "lambda.m"
    {
#line 680 "lambda.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__LambdaVars_3, &transform_hlds__lambda__LambdaVarsSet_9);
    }
#line 681 "lambda.m"
    {
#line 681 "lambda.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVars_8, &transform_hlds__lambda__ConstraintVarsSet_10);
    }
#line 682 "lambda.m"
    {
#line 682 "lambda.m"
      return transform_hlds__lambda__succeeded = mercury__set__subset_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsSet_10, transform_hlds__lambda__LambdaVarsSet_9);
    }
#line 674 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 674 "lambda.m"
  }
#line 671 "lambda.m"
}

#line 390 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__LHS_9,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__RHS0_10,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_11,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_12,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__Context_13,
#line 390 "lambda.m"
  MR_Word * transform_hlds__lambda__GoalExpr_14,
#line 390 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
#line 390 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33)
#line 390 "lambda.m"
{
#line 398 "lambda.m"
  {
#line 398 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 398 "lambda.m"
    if (((MR_tag((MR_Word) transform_hlds__lambda__RHS0_10)) == (MR_mktag((MR_Integer) 2))))
#line 398 "lambda.m"
      {
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 3)));
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 4)));
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 5)));
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__LambdaGoal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 6)));
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__LambdaGoal_25;
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Y_26;
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__Unification_27;
#line 398 "lambda.m"
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_34_34;
#line 397 "lambda.m"
        MR_Word transform_hlds__lambda__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 397 "lambda.m"
        MR_Word transform_hlds__lambda__NonLocalVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 2)));

#line 401 "lambda.m"
        {
#line 401 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__LambdaGoal0_24, &transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__STATE_VARIABLE_Info_0_32, &transform_hlds__lambda__STATE_VARIABLE_Info_34_34);
        }
#line 404 "lambda.m"
        {
#line 404 "lambda.m"
          transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Det_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_12, &transform_hlds__lambda__Y_26, &transform_hlds__lambda__Unification_27, transform_hlds__lambda__STATE_VARIABLE_Info_34_34, transform_hlds__lambda__STATE_VARIABLE_Info_33);
        }
#line 407 "lambda.m"
        {
#line 407 "lambda.m"
          MR_Word base;
#line 407 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 407 "lambda.m"
          *transform_hlds__lambda__GoalExpr_14 = base;
#line 407 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
#line 407 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Y_26));
#line 407 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
#line 407 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification_27));
#line 407 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
#line 407 "lambda.m"
        }
#line 398 "lambda.m"
      }
#line 398 "lambda.m"
    else
#line 411 "lambda.m"
      {
#line 413 "lambda.m"
        {
#line 413 "lambda.m"
          MR_Word base;
#line 413 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 413 "lambda.m"
          *transform_hlds__lambda__GoalExpr_14 = base;
#line 413 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
#line 413 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__RHS0_10));
#line 413 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
#line 413 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification0_12));
#line 413 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
#line 413 "lambda.m"
        }
#line 413 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_Info_33 = transform_hlds__lambda__STATE_VARIABLE_Info_0_32;
#line 411 "lambda.m"
      }
#line 398 "lambda.m"
  }
#line 390 "lambda.m"
}

#line 380 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
#line 380 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 380 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 380 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 380 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
#line 380 "lambda.m"
{
#line 383 "lambda.m"
  {
#line 383 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 383 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "lambda.m"
      {
#line 383 "lambda.m"
        *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
#line 383 "lambda.m"
      }
#line 383 "lambda.m"
    else
#line 384 "lambda.m"
      {
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Case_10;
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Cases_11;
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 0)));
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 1)));
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 2)));
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__Goal_16;
#line 384 "lambda.m"
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_19_19;

#line 386 "lambda.m"
        {
#line 386 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_15, &transform_hlds__lambda__Goal_16, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_19_19);
        }
#line 387 "lambda.m"
        {
#line 387 "lambda.m"
          transform_hlds__lambda__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 387 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 0) = ((MR_Box) (transform_hlds__lambda__MainConsId_13));
#line 387 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 1) = ((MR_Box) (transform_hlds__lambda__OtherConsIds_14));
#line 387 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 2) = ((MR_Box) (transform_hlds__lambda__Goal_16));
#line 387 "lambda.m"
        }
#line 388 "lambda.m"
        {
#line 388 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_9, &transform_hlds__lambda__Cases_11, transform_hlds__lambda__STATE_VARIABLE_Info_19_19, transform_hlds__lambda__STATE_VARIABLE_Info_4);
        }
#line 384 "lambda.m"
        {
#line 384 "lambda.m"
          MR_Word base;
#line 384 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 384 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Case_10));
#line 384 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Cases_11));
#line 384 "lambda.m"
        }
#line 384 "lambda.m"
      }
#line 383 "lambda.m"
  }
#line 380 "lambda.m"
}

#line 372 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
#line 372 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 372 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 372 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 372 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
#line 372 "lambda.m"
{
#line 375 "lambda.m"
  {
#line 375 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 375 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "lambda.m"
      {
#line 375 "lambda.m"
        *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
#line 375 "lambda.m"
      }
#line 375 "lambda.m"
    else
#line 376 "lambda.m"
      {
#line 376 "lambda.m"
        MR_Word transform_hlds__lambda__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "lambda.m"
        MR_Word transform_hlds__lambda__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "lambda.m"
        MR_Word transform_hlds__lambda__Goal_10;
#line 376 "lambda.m"
        MR_Word transform_hlds__lambda__Goals_11;
#line 376 "lambda.m"
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_15_15;

#line 377 "lambda.m"
        {
#line 377 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_8, &transform_hlds__lambda__Goal_10, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_15_15);
        }
#line 378 "lambda.m"
        {
#line 378 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_9, &transform_hlds__lambda__Goals_11, transform_hlds__lambda__STATE_VARIABLE_Info_15_15, transform_hlds__lambda__STATE_VARIABLE_Info_4);
        }
#line 376 "lambda.m"
        {
#line 376 "lambda.m"
          MR_Word base;
#line 376 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 376 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Goal_10));
#line 376 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Goals_11));
#line 376 "lambda.m"
        }
#line 376 "lambda.m"
      }
#line 375 "lambda.m"
  }
#line 372 "lambda.m"
}

#line 298 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
#line 298 "lambda.m"
  MR_Word transform_hlds__lambda__Goal0_5,
#line 298 "lambda.m"
  MR_Word * transform_hlds__lambda__Goal_6,
#line 298 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
#line 298 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69)
#line 298 "lambda.m"
{
#line 301 "lambda.m"
  {
#line 301 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 301 "lambda.m"
    MR_Word transform_hlds__lambda__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 0)));
#line 301 "lambda.m"
    MR_Word transform_hlds__lambda__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 1)));
#line 301 "lambda.m"
    MR_Word transform_hlds__lambda__GoalExpr_15;

#line 307 "lambda.m"
    if (((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 320 "lambda.m"
      {
#line 320 "lambda.m"
        MR_Word transform_hlds__lambda__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr0_8), (MR_Integer) 0);
#line 320 "lambda.m"
        MR_Word transform_hlds__lambda__SubGoal_24;

#line 321 "lambda.m"
        {
#line 321 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_23, &transform_hlds__lambda__SubGoal_24, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
        }
#line 322 "lambda.m"
        transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__lambda__SubGoal_24);
#line 320 "lambda.m"
      }
#line 307 "lambda.m"
    else
#line 307 "lambda.m"
      if (((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 304 "lambda.m"
        {
#line 304 "lambda.m"
          MR_Word transform_hlds__lambda__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)));
#line 304 "lambda.m"
          MR_Word transform_hlds__lambda__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 304 "lambda.m"
          MR_Word transform_hlds__lambda__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 304 "lambda.m"
          MR_Word transform_hlds__lambda__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 304 "lambda.m"
          MR_Word transform_hlds__lambda__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));

#line 305 "lambda.m"
          {
#line 305 "lambda.m"
            transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(transform_hlds__lambda__LHS_10, transform_hlds__lambda__RHS_11, transform_hlds__lambda__Mode_12, transform_hlds__lambda__Unification_13, transform_hlds__lambda__Context_14, &transform_hlds__lambda__GoalExpr_15, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
          }
#line 304 "lambda.m"
        }
#line 307 "lambda.m"
      else
#line 307 "lambda.m"
        if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 308 "lambda.m"
          {
#line 308 "lambda.m"
            MR_Word transform_hlds__lambda__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 308 "lambda.m"
            MR_Word transform_hlds__lambda__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 308 "lambda.m"
            MR_Word transform_hlds__lambda__Goals_18;

#line 309 "lambda.m"
            {
#line 309 "lambda.m"
              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_17, &transform_hlds__lambda__Goals_18, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
            }
#line 310 "lambda.m"
            {
#line 310 "lambda.m"
              transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "lambda.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "lambda.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ConjType_16));
#line 310 "lambda.m"
              MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Goals_18));
#line 310 "lambda.m"
            }
#line 308 "lambda.m"
          }
#line 307 "lambda.m"
        else
#line 307 "lambda.m"
          if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 312 "lambda.m"
            {
#line 312 "lambda.m"
              MR_Word transform_hlds__lambda__Goals0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 312 "lambda.m"
              MR_Word transform_hlds__lambda__Goals_86;

#line 313 "lambda.m"
              {
#line 313 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_85, &transform_hlds__lambda__Goals_86, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              }
#line 314 "lambda.m"
              {
#line 314 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 314 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Goals_86));
#line 314 "lambda.m"
              }
#line 312 "lambda.m"
            }
#line 307 "lambda.m"
          else
#line 307 "lambda.m"
            if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 339 "lambda.m"
              {
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Cond_32;
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Then_33;
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__Else_34;
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_76_76;
#line 339 "lambda.m"
                MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_77_77;

#line 340 "lambda.m"
                {
#line 340 "lambda.m"
                  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Cond0_29, &transform_hlds__lambda__Cond_32, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_76_76);
                }
#line 341 "lambda.m"
                {
#line 341 "lambda.m"
                  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Then0_30, &transform_hlds__lambda__Then_33, transform_hlds__lambda__STATE_VARIABLE_Info_76_76, &transform_hlds__lambda__STATE_VARIABLE_Info_77_77);
                }
#line 342 "lambda.m"
                {
#line 342 "lambda.m"
                  transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Else0_31, &transform_hlds__lambda__Else_34, transform_hlds__lambda__STATE_VARIABLE_Info_77_77, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                }
#line 343 "lambda.m"
                {
#line 343 "lambda.m"
                  transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 343 "lambda.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 343 "lambda.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Vars_28));
#line 343 "lambda.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Cond_32));
#line 343 "lambda.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Then_33));
#line 343 "lambda.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__lambda__Else_34));
#line 343 "lambda.m"
                }
#line 339 "lambda.m"
              }
#line 307 "lambda.m"
            else
#line 307 "lambda.m"
              if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 324 "lambda.m"
                {
#line 324 "lambda.m"
                  MR_Word transform_hlds__lambda__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 324 "lambda.m"
                  MR_Word transform_hlds__lambda__SubGoal0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 326 "lambda.m"
                  MR_Word transform_hlds__lambda__FGT_27;
#line 326 "lambda.m"
                  MR_Word transform_hlds__lambda__V_26_26;

#line 326 "lambda.m"
                  transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 326 "lambda.m"
                  if (transform_hlds__lambda__succeeded)
#line 326 "lambda.m"
                    {
#line 326 "lambda.m"
                      transform_hlds__lambda__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 1)));
#line 326 "lambda.m"
                      transform_hlds__lambda__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 2)));
#line 328 "lambda.m"
                      if ((transform_hlds__lambda__FGT_27 == (MR_Integer) 1))
#line 327 "lambda.m"
                        transform_hlds__lambda__succeeded = MR_TRUE;
#line 328 "lambda.m"
                      else
#line 328 "lambda.m"
                        if ((transform_hlds__lambda__FGT_27 == (MR_Integer) 2))
#line 328 "lambda.m"
                          transform_hlds__lambda__succeeded = MR_TRUE;
#line 328 "lambda.m"
                        else
#line 328 "lambda.m"
                          transform_hlds__lambda__succeeded = MR_FALSE;
#line 326 "lambda.m"
                    }
#line 334 "lambda.m"
                  if (transform_hlds__lambda__succeeded)
#line 333 "lambda.m"
                    {
#line 333 "lambda.m"
                      transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
#line 333 "lambda.m"
                      *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
#line 333 "lambda.m"
                    }
#line 334 "lambda.m"
                  else
#line 335 "lambda.m"
                    {
#line 335 "lambda.m"
                      MR_Word transform_hlds__lambda__SubGoal_87;

#line 335 "lambda.m"
                      {
#line 335 "lambda.m"
                        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_89, &transform_hlds__lambda__SubGoal_87, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                      }
#line 336 "lambda.m"
                      {
#line 336 "lambda.m"
                        transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 336 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 336 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Reason_25));
#line 336 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_87));
#line 336 "lambda.m"
                      }
#line 335 "lambda.m"
                    }
#line 324 "lambda.m"
                }
#line 307 "lambda.m"
              else
#line 307 "lambda.m"
                if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 351 "lambda.m"
                  {
#line 351 "lambda.m"
                    MR_Word transform_hlds__lambda__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 351 "lambda.m"
                    MR_Word transform_hlds__lambda__ShortHand_63;

#line 359 "lambda.m"
                    if (((MR_tag((MR_Word) transform_hlds__lambda__ShortHand0_53)) == (MR_mktag((MR_Integer) 1))))
#line 354 "lambda.m"
                      {
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 3)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__MainGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 4)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__OrElseGoals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 5)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 6)));
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__MainGoal_61;
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__OrElseGoals_62;
#line 354 "lambda.m"
                        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_74_74;

#line 355 "lambda.m"
                        {
#line 355 "lambda.m"
                          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__MainGoal0_58, &transform_hlds__lambda__MainGoal_61, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_74_74);
                        }
#line 356 "lambda.m"
                        {
#line 356 "lambda.m"
                          transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__OrElseGoals0_59, &transform_hlds__lambda__OrElseGoals_62, transform_hlds__lambda__STATE_VARIABLE_Info_74_74, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                        }
#line 357 "lambda.m"
                        {
#line 357 "lambda.m"
                          transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__GoalType_54));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__Outer_55));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__Inner_56));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 3) = ((MR_Box) (transform_hlds__lambda__MaybeOutputVars_57));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 4) = ((MR_Box) (transform_hlds__lambda__MainGoal_61));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 5) = ((MR_Box) (transform_hlds__lambda__OrElseGoals_62));
#line 357 "lambda.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 6) = ((MR_Box) (transform_hlds__lambda__OrElseInners_60));
#line 357 "lambda.m"
                        }
#line 354 "lambda.m"
                      }
#line 359 "lambda.m"
                    else
#line 359 "lambda.m"
                      if (((MR_tag((MR_Word) transform_hlds__lambda__ShortHand0_53)) == (MR_mktag((MR_Integer) 0))))
#line 364 "lambda.m"
                        {
#line 366 "lambda.m"
                          {
#line 366 "lambda.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", (MR_String) "bi_implication");
#line 366 "lambda.m"
                            return;
                          }
#line 364 "lambda.m"
                        }
#line 359 "lambda.m"
                      else
#line 360 "lambda.m"
                        {
#line 360 "lambda.m"
                          MR_Word transform_hlds__lambda__MaybeIO_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
#line 360 "lambda.m"
                          MR_Word transform_hlds__lambda__ResultVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
#line 360 "lambda.m"
                          MR_Word transform_hlds__lambda__SubGoal0_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
#line 360 "lambda.m"
                          MR_Word transform_hlds__lambda__SubGoal_92;

#line 361 "lambda.m"
                          {
#line 361 "lambda.m"
                            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_91, &transform_hlds__lambda__SubGoal_92, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                          }
#line 362 "lambda.m"
                          {
#line 362 "lambda.m"
                            transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 362 "lambda.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__MaybeIO_64));
#line 362 "lambda.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__ResultVar_65));
#line 362 "lambda.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_92));
#line 362 "lambda.m"
                          }
#line 360 "lambda.m"
                        }
#line 368 "lambda.m"
                    {
#line 368 "lambda.m"
                      transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ShortHand_63));
#line 368 "lambda.m"
                    }
#line 351 "lambda.m"
                  }
#line 307 "lambda.m"
                else
#line 307 "lambda.m"
                  if (((((MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 316 "lambda.m"
                    {
#line 316 "lambda.m"
                      MR_Word transform_hlds__lambda__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 316 "lambda.m"
                      MR_Word transform_hlds__lambda__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 316 "lambda.m"
                      MR_Word transform_hlds__lambda__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 316 "lambda.m"
                      MR_Word transform_hlds__lambda__Cases_22;

#line 317 "lambda.m"
                      {
#line 317 "lambda.m"
                        transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_21, &transform_hlds__lambda__Cases_22, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                      }
#line 318 "lambda.m"
                      {
#line 318 "lambda.m"
                        transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 318 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 318 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Var_19));
#line 318 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__CanFail_20));
#line 318 "lambda.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Cases_22));
#line 318 "lambda.m"
                      }
#line 316 "lambda.m"
                    }
#line 307 "lambda.m"
                  else
#line 348 "lambda.m"
                    {
#line 349 "lambda.m"
                      transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
#line 349 "lambda.m"
                      *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
#line 348 "lambda.m"
                    }
#line 370 "lambda.m"
    {
#line 370 "lambda.m"
      MR_Word base;
#line 370 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "lambda.m"
      *transform_hlds__lambda__Goal_6 = base;
#line 370 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__GoalExpr_15));
#line 370 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__GoalInfo_9));
#line 370 "lambda.m"
    }
#line 301 "lambda.m"
  }
#line 298 "lambda.m"
}

#line 238 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
#line 238 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
#line 238 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47)
#line 238 "lambda.m"
{
#line 241 "lambda.m"
  {
#line 241 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__TypeVarSet0_10;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__HeadVars_11;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet0_12;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes0_13;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__Goal0_14;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps0_15;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__InstVarSet0_16;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__HasParallelConj_17;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__Info0_20;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__Goal1_21;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__Info1_22;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet1_23;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes1_24;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__TypeVarSet_25;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps1_27;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__MustRecomputeNonLocals_30;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__HaveExpandedLambdas_31;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet2_34;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes2_35;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps2_36;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__Goal_38;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet_39;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes_40;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps_41;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53;
#line 241 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54;
#line 259 "lambda.m"
    MR_Word transform_hlds__lambda___InstVarSet_26;
#line 259 "lambda.m"
    MR_Word transform_hlds__lambda__V_28_28;
#line 259 "lambda.m"
    MR_Word transform_hlds__lambda___PredInfo_29;

#line 243 "lambda.m"
    {
#line 243 "lambda.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__lambda__TypeVarSet0_10);
    }
#line 244 "lambda.m"
    {
#line 244 "lambda.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HeadVars_11);
    }
#line 245 "lambda.m"
    {
#line 245 "lambda.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarSet0_12);
    }
#line 246 "lambda.m"
    {
#line 246 "lambda.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarTypes0_13);
    }
#line 247 "lambda.m"
    {
#line 247 "lambda.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__Goal0_14);
    }
#line 248 "lambda.m"
    {
#line 248 "lambda.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__RttiVarMaps0_15);
    }
#line 249 "lambda.m"
    {
#line 249 "lambda.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__InstVarSet0_16);
    }
#line 250 "lambda.m"
    {
#line 250 "lambda.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HasParallelConj_17);
    }
#line 255 "lambda.m"
    {
#line 255 "lambda.m"
      transform_hlds__lambda__Info0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 0) = ((MR_Box) (transform_hlds__lambda__VarSet0_12));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes0_13));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet0_10));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet0_16));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps0_15));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_17));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 6) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 7) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 8) = ((MR_Box) ((MR_Integer) 0));
#line 255 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 9) = ((MR_Box) ((MR_Integer) 0));
#line 255 "lambda.m"
    }
#line 258 "lambda.m"
    {
#line 258 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_14, &transform_hlds__lambda__Goal1_21, transform_hlds__lambda__Info0_20, &transform_hlds__lambda__Info1_22);
    }
#line 259 "lambda.m"
    transform_hlds__lambda__VarSet1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 0)));
#line 259 "lambda.m"
    transform_hlds__lambda__VarTypes1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 1)));
#line 259 "lambda.m"
    transform_hlds__lambda__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 2)));
#line 259 "lambda.m"
    transform_hlds__lambda___InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 3)));
#line 259 "lambda.m"
    transform_hlds__lambda__RttiVarMaps1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 4)));
#line 259 "lambda.m"
    transform_hlds__lambda__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 5)));
#line 259 "lambda.m"
    transform_hlds__lambda___PredInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 6)));
#line 259 "lambda.m"
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 7)));
#line 259 "lambda.m"
    transform_hlds__lambda__MustRecomputeNonLocals_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 8)));
#line 259 "lambda.m"
    transform_hlds__lambda__HaveExpandedLambdas_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 9)));
#line 273 "lambda.m"
    if ((transform_hlds__lambda__MustRecomputeNonLocals_30 == (MR_Integer) 0))
#line 274 "lambda.m"
      {
#line 275 "lambda.m"
        transform_hlds__lambda__Goal_38 = transform_hlds__lambda__Goal1_21;
#line 276 "lambda.m"
        transform_hlds__lambda__VarSet2_34 = transform_hlds__lambda__VarSet1_23;
#line 277 "lambda.m"
        transform_hlds__lambda__VarTypes2_35 = transform_hlds__lambda__VarTypes1_24;
#line 278 "lambda.m"
        transform_hlds__lambda__RttiVarMaps2_36 = transform_hlds__lambda__RttiVarMaps1_27;
#line 278 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47 = transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
#line 274 "lambda.m"
      }
#line 273 "lambda.m"
    else
#line 265 "lambda.m"
      {
#line 265 "lambda.m"
        MR_Word transform_hlds__lambda__Goal2_33;
#line 265 "lambda.m"
        MR_Word transform_hlds__lambda__InstMap0_37;
#line 266 "lambda.m"
        MR_Word transform_hlds__lambda___Warnings_32;

#line 266 "lambda.m"
        {
#line 266 "lambda.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__lambda__HeadVars_11, &transform_hlds__lambda___Warnings_32, transform_hlds__lambda__Goal1_21, &transform_hlds__lambda__Goal2_33, transform_hlds__lambda__VarSet1_23, &transform_hlds__lambda__VarSet2_34, transform_hlds__lambda__VarTypes1_24, &transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__RttiVarMaps1_27, &transform_hlds__lambda__RttiVarMaps2_36);
        }
#line 270 "lambda.m"
        {
#line 270 "lambda.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, &transform_hlds__lambda__InstMap0_37);
        }
#line 271 "lambda.m"
        {
#line 271 "lambda.m"
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__lambda__Goal2_33, &transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__InstVarSet0_16, transform_hlds__lambda__InstMap0_37, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);
        }
#line 265 "lambda.m"
      }
#line 284 "lambda.m"
    if ((transform_hlds__lambda__HaveExpandedLambdas_31 == (MR_Integer) 0))
#line 285 "lambda.m"
      {
#line 286 "lambda.m"
        transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
#line 287 "lambda.m"
        transform_hlds__lambda__VarTypes_40 = transform_hlds__lambda__VarTypes2_35;
#line 288 "lambda.m"
        transform_hlds__lambda__RttiVarMaps_41 = transform_hlds__lambda__RttiVarMaps2_36;
#line 285 "lambda.m"
      }
#line 284 "lambda.m"
    else
#line 737 "lambda.m"
      {
#line 737 "lambda.m"
        MR_Word transform_hlds__lambda__TypeCtorInfo_34_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 737 "lambda.m"
        MR_Word transform_hlds__lambda__MaxVar_68;
#line 737 "lambda.m"
        MR_Integer transform_hlds__lambda__MaxVarNum_69;
#line 737 "lambda.m"
        MR_ArrayPtr transform_hlds__lambda__VarUses0_70;
#line 737 "lambda.m"
        MR_ArrayPtr transform_hlds__lambda__VarUses1_71;
#line 737 "lambda.m"
        MR_ArrayPtr transform_hlds__lambda__VarUses_72;
#line 737 "lambda.m"
        MR_Word transform_hlds__lambda__VarTypesList0_73;
#line 737 "lambda.m"
        MR_Word transform_hlds__lambda__RevVarTypesList_74;
#line 737 "lambda.m"
        MR_Word transform_hlds__lambda__VarTypesList_75;
#line 737 "lambda.m"
        MR_Integer transform_hlds__lambda__V_76_76;
#line 744 "lambda.m"
        MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_70;

#line 738 "lambda.m"
        {
#line 738 "lambda.m"
          transform_hlds__lambda__MaxVar_68 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__VarSet2_34);
        }
#line 739 "lambda.m"
        {
#line 739 "lambda.m"
          transform_hlds__lambda__MaxVarNum_69 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__MaxVar_68);
        }
#line 744 "lambda.m"
        transform_hlds__lambda__V_76_76 = (transform_hlds__lambda__MaxVarNum_69 + (MR_Integer) 1);
#line 744 "lambda.m"
        {
#line 744 "lambda.m"
          mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_76_76, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_70);
        }
#line 744 "lambda.m"
        transform_hlds__lambda__VarUses0_70 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_70;
#line 745 "lambda.m"
        {
#line 745 "lambda.m"
          transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_11, transform_hlds__lambda__VarUses0_70, &transform_hlds__lambda__VarUses1_71);
        }
#line 746 "lambda.m"
        {
#line 746 "lambda.m"
          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarUses1_71, &transform_hlds__lambda__VarUses_72);
        }
#line 748 "lambda.m"
        {
#line 748 "lambda.m"
          parse_tree__prog_data__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__VarTypes2_35, &transform_hlds__lambda__VarTypesList0_73);
        }
#line 749 "lambda.m"
        {
#line 749 "lambda.m"
          transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_74, transform_hlds__lambda__VarUses_72);
        }
#line 750 "lambda.m"
        {
#line 750 "lambda.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_74, &transform_hlds__lambda__VarTypesList_75);
        }
#line 751 "lambda.m"
        {
#line 751 "lambda.m"
          parse_tree__prog_data__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_75, &transform_hlds__lambda__VarTypes_40);
        }
#line 753 "lambda.m"
        {
#line 753 "lambda.m"
          hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_72, transform_hlds__lambda__RttiVarMaps2_36, &transform_hlds__lambda__RttiVarMaps_41);
        }
#line 753 "lambda.m"
        transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
#line 737 "lambda.m"
      }
#line 292 "lambda.m"
    {
#line 292 "lambda.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 293 "lambda.m"
    {
#line 293 "lambda.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lambda__VarSet_39, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 294 "lambda.m"
    {
#line 294 "lambda.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lambda__VarTypes_40, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54);
    }
#line 295 "lambda.m"
    {
#line 295 "lambda.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__lambda__RttiVarMaps_41, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43);
    }
#line 296 "lambda.m"
    {
#line 296 "lambda.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__lambda__TypeVarSet_25, transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, transform_hlds__lambda__STATE_VARIABLE_PredInfo_45);
#line 296 "lambda.m"
      return;
    }
#line 241 "lambda.m"
  }
#line 238 "lambda.m"
}

#line 219 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
#line 219 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_5,
#line 219 "lambda.m"
  MR_Integer transform_hlds__lambda__ProcId_6,
#line 219 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
#line 219 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20)
#line 219 "lambda.m"
{
#line 222 "lambda.m"
  {
#line 222 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_23_23;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_24_24;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_25_25;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_26_26;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable0_8;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo0_9;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable0_10;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__ProcInfo0_11;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__ProcInfo_12;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo1_13;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable1_14;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable_15;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo_16;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable1_17;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable_18;
#line 222 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21;
#line 224 "lambda.m"
    MR_Box transform_hlds__lambda__conv0_PredInfo0_9;
#line 226 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_ProcInfo0_11;

#line 223 "lambda.m"
    {
#line 223 "lambda.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__PredTable0_8);
    }
#line 5909 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 5911 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 224 "lambda.m"
    {
#line 224 "lambda.m"
      mercury__map__lookup_3_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, transform_hlds__lambda__PredTable0_8, ((MR_Box) (transform_hlds__lambda__PredId_5)), &transform_hlds__lambda__conv0_PredInfo0_9);
    }
#line 224 "lambda.m"
    transform_hlds__lambda__PredInfo0_9 = ((MR_Word) transform_hlds__lambda__conv0_PredInfo0_9);
#line 225 "lambda.m"
    {
#line 225 "lambda.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__ProcTable0_10);
    }
#line 5925 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 5927 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 226 "lambda.m"
    {
#line 226 "lambda.m"
      mercury__map__lookup_3_p_0(transform_hlds__lambda__TypeCtorInfo_25_25, transform_hlds__lambda__TypeCtorInfo_26_26, transform_hlds__lambda__ProcTable0_10, ((MR_Box) (transform_hlds__lambda__ProcId_6)), &transform_hlds__lambda__conv1_ProcInfo0_11);
    }
#line 226 "lambda.m"
    transform_hlds__lambda__ProcInfo0_11 = ((MR_Word) transform_hlds__lambda__conv1_ProcInfo0_11);
#line 228 "lambda.m"
    {
#line 228 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(transform_hlds__lambda__ProcInfo0_11, &transform_hlds__lambda__ProcInfo_12, transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__PredInfo1_13, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21);
    }
#line 231 "lambda.m"
    {
#line 231 "lambda.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__ProcTable1_14);
    }
#line 232 "lambda.m"
    {
#line 232 "lambda.m"
      mercury__map__det_update_4_p_0(transform_hlds__lambda__TypeCtorInfo_25_25, transform_hlds__lambda__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__lambda__ProcId_6)), ((MR_Box) (transform_hlds__lambda__ProcInfo_12)), transform_hlds__lambda__ProcTable1_14, &transform_hlds__lambda__ProcTable_15);
    }
#line 233 "lambda.m"
    {
#line 233 "lambda.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__lambda__ProcTable_15, transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__PredInfo_16);
    }
#line 234 "lambda.m"
    {
#line 234 "lambda.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__lambda__PredTable1_17);
    }
#line 235 "lambda.m"
    {
#line 235 "lambda.m"
      mercury__map__det_update_4_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__lambda__PredId_5)), ((MR_Box) (transform_hlds__lambda__PredInfo_16)), transform_hlds__lambda__PredTable1_17, &transform_hlds__lambda__PredTable_18);
    }
#line 236 "lambda.m"
    {
#line 236 "lambda.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lambda__PredTable_18, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);
#line 236 "lambda.m"
      return;
    }
#line 222 "lambda.m"
  }
#line 219 "lambda.m"
}

#line 123 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambda_15_p_0(
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Purity_16,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda___Groundness_17,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__PredOrFunc_18,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Vars_21,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Modes_22,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Detism_23,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__OrigNonLocals0_24,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaGoal_25,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_26,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__Functor_27,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__Unification_28,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
#line 123 "lambda.m"
{
#line 418 "lambda.m"
  {
#line 418 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 418 "lambda.m"
    {
#line 418 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__RegWrapperProc_20, transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_26, transform_hlds__lambda__Functor_27, transform_hlds__lambda__Unification_28, transform_hlds__lambda__LambdaInfo0_29, transform_hlds__lambda__LambdaInfo_30);
#line 418 "lambda.m"
      return;
    }
#line 418 "lambda.m"
  }
#line 123 "lambda.m"
}

#line 120 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
#line 120 "lambda.m"
  MR_Word transform_hlds__lambda__Recompute_4,
#line 120 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 120 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 120 "lambda.m"
{
#line 201 "lambda.m"
  {
#line 201 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));

#line 201 "lambda.m"
    {
#line 201 "lambda.m"
      MR_Word base;
#line 201 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 201 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Recompute_4));
#line 201 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 201 "lambda.m"
    }
#line 201 "lambda.m"
  }
#line 120 "lambda.m"
}

#line 118 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
#line 118 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_4,
#line 118 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 118 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 118 "lambda.m"
{
#line 199 "lambda.m"
  {
#line 199 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

#line 199 "lambda.m"
    {
#line 199 "lambda.m"
      MR_Word base;
#line 199 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 199 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_4));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 199 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 199 "lambda.m"
    }
#line 199 "lambda.m"
  }
#line 118 "lambda.m"
}

#line 116 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(
#line 116 "lambda.m"
  MR_Word transform_hlds__lambda__VarTypes_4,
#line 116 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 116 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 116 "lambda.m"
{
#line 197 "lambda.m"
  {
#line 197 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

#line 197 "lambda.m"
    {
#line 197 "lambda.m"
      MR_Word base;
#line 197 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 197 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_4));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 197 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 197 "lambda.m"
    }
#line 197 "lambda.m"
  }
#line 116 "lambda.m"
}

#line 114 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_varset_3_p_0(
#line 114 "lambda.m"
  MR_Word transform_hlds__lambda__VarSet_4,
#line 114 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 114 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 114 "lambda.m"
{
#line 195 "lambda.m"
  {
#line 195 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 195 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 195 "lambda.m"
    {
#line 195 "lambda.m"
      MR_Word base;
#line 195 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 195 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_4));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 195 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 195 "lambda.m"
    }
#line 195 "lambda.m"
  }
#line 114 "lambda.m"
}

#line 112 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
#line 112 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 112 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 112 "lambda.m"
{
#line 192 "lambda.m"
  {
#line 192 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 192 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 192 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 192 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 192 "lambda.m"
  }
#line 112 "lambda.m"
}

#line 111 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
#line 111 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 111 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 111 "lambda.m"
{
#line 191 "lambda.m"
  {
#line 191 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 191 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 191 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 191 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 191 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 191 "lambda.m"
  }
#line 111 "lambda.m"
}

#line 110 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
#line 110 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 110 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 110 "lambda.m"
{
#line 190 "lambda.m"
  {
#line 190 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 190 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 190 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 190 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 190 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 190 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 190 "lambda.m"
  }
#line 110 "lambda.m"
}

#line 109 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
#line 109 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 109 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 109 "lambda.m"
{
#line 189 "lambda.m"
  {
#line 189 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 189 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 189 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 189 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 189 "lambda.m"
  }
#line 109 "lambda.m"
}

#line 107 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 107 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 107 "lambda.m"
{
#line 188 "lambda.m"
  {
#line 188 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 188 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 188 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 188 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 188 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 188 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 188 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 188 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 188 "lambda.m"
  }
#line 107 "lambda.m"
}

#line 106 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
#line 106 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 106 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 106 "lambda.m"
{
#line 187 "lambda.m"
  {
#line 187 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 187 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 187 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 187 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 187 "lambda.m"
  }
#line 106 "lambda.m"
}

#line 105 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(
#line 105 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 105 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 105 "lambda.m"
{
#line 186 "lambda.m"
  {
#line 186 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 186 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 186 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 186 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 186 "lambda.m"
  }
#line 105 "lambda.m"
}

#line 104 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_varset_2_p_0(
#line 104 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 104 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 104 "lambda.m"
{
#line 185 "lambda.m"
  {
#line 185 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 185 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 185 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 185 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 185 "lambda.m"
  }
#line 104 "lambda.m"
}

#line 100 "lambda.m"
void MR_CALL 
transform_hlds__lambda__init_lambda_info_9_p_0(
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__VarSet_10,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__VarTypes_11,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__TypeVarSet_12,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__InstVarSet_13,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__RttiVarMaps_14,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__HasParallelConj_15,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__PredInfo_16,
#line 100 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_17,
#line 100 "lambda.m"
  MR_Word * transform_hlds__lambda__Info_18)
#line 100 "lambda.m"
{
#line 178 "lambda.m"
  {
#line 178 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 181 "lambda.m"
    {
#line 181 "lambda.m"
      MR_Word base;
#line 181 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 181 "lambda.m"
      *transform_hlds__lambda__Info_18 = base;
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_10));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_11));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet_12));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_13));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_14));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_15));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__PredInfo_16));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_17));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 181 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
#line 181 "lambda.m"
    }
#line 178 "lambda.m"
  }
#line 100 "lambda.m"
}

#line 217 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 217 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 217 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
#line 217 "lambda.m"
{
#line 217 "lambda.m"
  {
#line 217 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 217 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 217 "lambda.m"
    {
#line 217 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 217 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 217 "lambda.m"
  }
#line 217 "lambda.m"
}

#line 87 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
#line 87 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_4,
#line 87 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8,
#line 87 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9)
#line 87 "lambda.m"
{
#line 214 "lambda.m"
  {
#line 214 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 214 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo_6;
#line 214 "lambda.m"
    MR_Word transform_hlds__lambda__ProcIds_7;
#line 214 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 217 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 215 "lambda.m"
    {
#line 215 "lambda.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__lambda__PredId_4, &transform_hlds__lambda__PredInfo_6);
    }
#line 216 "lambda.m"
    {
#line 216 "lambda.m"
      transform_hlds__lambda__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__lambda__PredInfo_6);
    }
#line 217 "lambda.m"
    {
#line 217 "lambda.m"
      transform_hlds__lambda__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 217 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_4[0]));
#line 217 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
#line 217 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 217 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 3) = ((MR_Box) (transform_hlds__lambda__PredId_4));
#line 217 "lambda.m"
    }
#line 217 "lambda.m"
    {
#line 217 "lambda.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__lambda__V_10_10, transform_hlds__lambda__ProcIds_7, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 217 "lambda.m"
    *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 214 "lambda.m"
  }
#line 87 "lambda.m"
}

#line 210 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 210 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 210 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
#line 210 "lambda.m"
{
#line 210 "lambda.m"
  {
#line 210 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 210 "lambda.m"
    {
#line 210 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 210 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 210 "lambda.m"
  }
#line 210 "lambda.m"
}

#line 85 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
#line 85 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5,
#line 85 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6)
#line 85 "lambda.m"
{
#line 208 "lambda.m"
  {
#line 208 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__PredIds_4;
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_7_7;
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9_9;
#line 210 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9_9;

#line 209 "lambda.m"
    {
#line 209 "lambda.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__lambda__PredIds_4, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_7_7);
    }
#line 210 "lambda.m"
    {
#line 210 "lambda.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lambda_scalar_common_2[1], transform_hlds__lambda__PredIds_4, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_7_7)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 210 "lambda.m"
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9_9 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9_9);
#line 212 "lambda.m"
    {
#line 212 "lambda.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9_9, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6);
#line 212 "lambda.m"
      return;
    }
#line 208 "lambda.m"
  }
#line 85 "lambda.m"
}

void mercury__transform_hlds__lambda__init(void)
{
}

void mercury__transform_hlds__lambda__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0);
	MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0);
}

void mercury__transform_hlds__lambda__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.lambda. */
