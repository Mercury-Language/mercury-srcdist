/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 130 "lambda.m"
struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s {
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21;
#line 431 "lambda.m"
  MR_bool transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 431 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38;
#line 493 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
#line 493 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101;
#line 505 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188;
#line 505 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_189_189;
#line 514 "lambda.m"
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 514 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92;
#line 514 "lambda.m"
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92;
#line 559 "lambda.m"
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1;
#line 559 "lambda.m"
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102;
#line 558 "lambda.m"
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102;
#line 130 "lambda.m"
};


#line 180 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 183 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 186 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 198 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 201 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 204 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10];

#line 207 "transform_hlds.lambda.c"
static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10];

#line 210 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0;

#line 213 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1];

#line 216 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1];

#line 219 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1];

#line 222 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1];

#line 225 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 228 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1];

#line 231 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0;

#line 234 "transform_hlds.lambda.c"
static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1;

#line 237 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1];

#line 240 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1];

#line 243 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2];

#line 246 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2];

#line 249 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2];

#line 252 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
#line 255 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 257 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2);

#line 260 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
#line 263 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 265 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 267 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3);

#line 270 "transform_hlds.lambda.c"
static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
#line 273 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 275 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2);

#line 278 "transform_hlds.lambda.c"
static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
#line 281 "transform_hlds.lambda.c"
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
#line 283 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 285 "transform_hlds.lambda.c"
  MR_Box transform_hlds__lambda__wrapper_arg_3);

#line 618 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_3,
#line 618 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_4);

#line 443 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
#line 443 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 443 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 441 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
#line 441 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 441 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 441 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 558 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
#line 558 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg);

#line 950 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
#line 950 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 950 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 950 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 934 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
#line 934 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 934 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 934 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 926 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
#line 926 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 926 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 926 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

#line 893 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
#line 893 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 893 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 892 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
#line 892 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 892 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1);

#line 787 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
#line 787 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_4,
#line 787 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119,
#line 787 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_120);

#line 770 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
#line 770 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 770 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
#line 770 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
#line 770 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4);

#line 748 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVars_9,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_10,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);

#line 715 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_6,
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__Type_7,
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_8,
#line 715 "lambda.m"
  MR_Integer transform_hlds__lambda__X_9,
#line 715 "lambda.m"
  MR_Integer * transform_hlds__lambda__X_5);

#line 703 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__uni_modes_to_modes_2_p_0(
#line 703 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 703 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2);

#line 691 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
#line 691 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 691 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 691 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

#line 686 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
#line 686 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaVars_3,
#line 686 "lambda.m"
  MR_Word transform_hlds__lambda__ClassConstraint_4);

#line 401 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__LHS_9,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__RHS0_10,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_11,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_12,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Context_13,
#line 401 "lambda.m"
  MR_Word * transform_hlds__lambda__GoalExpr_14,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
#line 401 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33);

#line 391 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
#line 391 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 391 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 391 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 391 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

#line 383 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
#line 383 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 383 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 383 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 383 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

#line 309 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
#line 309 "lambda.m"
  MR_Word transform_hlds__lambda__Goal0_5,
#line 309 "lambda.m"
  MR_Word * transform_hlds__lambda__Goal_6,
#line 309 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
#line 309 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69);

#line 249 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);

#line 230 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
#line 230 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_5,
#line 230 "lambda.m"
  MR_Integer transform_hlds__lambda__ProcId_6,
#line 230 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
#line 230 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);

#line 228 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 228 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3);

#line 221 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 221 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[7][3];

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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__constraint_contains_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
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
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 779 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 787 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 795 "transform_hlds.lambda.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 803 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 811 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 819 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 828 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 836 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 844 "transform_hlds.lambda.c"
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

#line 858 "transform_hlds.lambda.c"
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

#line 872 "transform_hlds.lambda.c"
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

#line 887 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

#line 892 "transform_hlds.lambda.c"
static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0
  }
};

#line 901 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

#line 906 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1] = {
  (MR_Integer) 0
};

#line 911 "transform_hlds.lambda.c"
const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0
};

#line 928 "transform_hlds.lambda.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 936 "transform_hlds.lambda.c"
static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 941 "transform_hlds.lambda.c"
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

#line 956 "transform_hlds.lambda.c"
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

#line 971 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1
};

#line 976 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

#line 981 "transform_hlds.lambda.c"
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

#line 995 "transform_hlds.lambda.c"
static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

#line 1001 "transform_hlds.lambda.c"
static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1007 "transform_hlds.lambda.c"
const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "reg_wrapper_proc",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
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

#line 618 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 618 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_3,
#line 618 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_4)
#line 618 "lambda.m"
{
#line 618 "lambda.m"
  {
#line 618 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 618 "lambda.m"
    MR_Integer transform_hlds__lambda__conv3_X_5;

#line 618 "lambda.m"
    {
#line 618 "lambda.m"
      transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Integer) transform_hlds__lambda__wrapper_arg_3), &transform_hlds__lambda__conv3_X_5);
    }
#line 618 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_4 = ((MR_Box) (transform_hlds__lambda__conv3_X_5));
#line 618 "lambda.m"
  }
#line 618 "lambda.m"
}

#line 443 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
#line 443 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 443 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 443 "lambda.m"
{
#line 443 "lambda.m"
  {
#line 443 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 443 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;

#line 443 "lambda.m"
    {
#line 443 "lambda.m"
      transform_hlds__lambda__succeeded = transform_hlds__lambda__constraint_contains_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 443 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 443 "lambda.m"
  }
#line 443 "lambda.m"
}

#line 441 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
#line 441 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 441 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 441 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
#line 441 "lambda.m"
{
#line 441 "lambda.m"
  {
#line 441 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 441 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

#line 441 "lambda.m"
    {
#line 441 "lambda.m"
      parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    }
#line 441 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
#line 441 "lambda.m"
  }
#line 441 "lambda.m"
}

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 514 "lambda.m"
{
#line 514 "lambda.m"
  {
#line 514 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 514 "lambda.m"
    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 514 "lambda.m"
  }
#line 514 "lambda.m"
}

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 514 "lambda.m"
{
#line 514 "lambda.m"
  {
#line 514 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 514 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92);
#line 514 "lambda.m"
    {
#line 514 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(transform_hlds__lambda__env_ptr);
    }
#line 514 "lambda.m"
  }
#line 514 "lambda.m"
}

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 514 "lambda.m"
{
#line 514 "lambda.m"
  {
#line 514 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 515 "lambda.m"
    {
#line 515 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__member_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188, ((MR_Box) ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92)), (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21);
    }
#line 515 "lambda.m"
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 515 "lambda.m"
      {
#line 515 "lambda.m"
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(transform_hlds__lambda__env_ptr);
      }
#line 514 "lambda.m"
  }
#line 514 "lambda.m"
}

#line 514 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
#line 514 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 514 "lambda.m"
{
#line 514 "lambda.m"
  {
#line 514 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 514 "lambda.m"
    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 514 "lambda.m"
      {
#line 514 "lambda.m"
        {
#line 514 "lambda.m"
          mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5, transform_hlds__lambda__env_ptr);
        }
#line 514 "lambda.m"
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 514 "lambda.m"
      }
#line 514 "lambda.m"
    else
#line 514 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 514 "lambda.m"
  }
#line 514 "lambda.m"
}

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 559 "lambda.m"
{
#line 559 "lambda.m"
  {
#line 559 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 559 "lambda.m"
    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
#line 559 "lambda.m"
  }
#line 559 "lambda.m"
}

#line 558 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
#line 558 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 558 "lambda.m"
{
#line 558 "lambda.m"
  {
#line 558 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 558 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102);
#line 558 "lambda.m"
    {
#line 558 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(transform_hlds__lambda__env_ptr);
    }
#line 558 "lambda.m"
  }
#line 558 "lambda.m"
}

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 559 "lambda.m"
{
#line 559 "lambda.m"
  {
#line 559 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 560 "lambda.m"
    {
#line 560 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102);
    }
#line 559 "lambda.m"
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 559 "lambda.m"
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 559 "lambda.m"
      {
#line 559 "lambda.m"
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(transform_hlds__lambda__env_ptr);
      }
#line 559 "lambda.m"
  }
#line 559 "lambda.m"
}

#line 559 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
#line 559 "lambda.m"
  void * transform_hlds__lambda__env_ptr_arg)
#line 559 "lambda.m"
{
#line 559 "lambda.m"
  {
#line 559 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

#line 559 "lambda.m"
    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
#line 559 "lambda.m"
      {
#line 558 "lambda.m"
        {
#line 558 "lambda.m"
          mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_189_189, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9, transform_hlds__lambda__env_ptr);
        }
#line 559 "lambda.m"
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 559 "lambda.m"
      }
#line 559 "lambda.m"
    else
#line 559 "lambda.m"
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 559 "lambda.m"
  }
#line 559 "lambda.m"
}

#line 130 "lambda.m"
void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Purity_16,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__PredOrFunc_18,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Vars_21,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Modes_22,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Detism_23,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaGoal_25,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_26,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__Functor_27,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__Unification_28,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
#line 130 "lambda.m"
{
#line 130 "lambda.m"
  {
#line 130 "lambda.m"
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s transform_hlds__lambda__env;

#line 130 "lambda.m"
    (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21 = transform_hlds__lambda__Vars_21;
#line 431 "lambda.m"
    {
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__TypeCtorInfo_180_180;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__TypeCtorInfo_185_185;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__VarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 0)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__VarTypes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 1)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__TVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 2)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__InstVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 3)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__RttiVarMaps_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 4)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__HasParallelConj_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 5)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__OrigPredInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 6)));
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals0_39;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__AllConstraints_41;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaVarTypeList_42;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaTypeVarsList_43;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaTypeVars_44;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__UnivConstraints_45;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__Constraints_46;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ExistQVars_47;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalInfo_49;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalNonLocals_50;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaNonLocals_51;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ExtraTypeInfos_52;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__Var_53;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__UniModes0_56;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__OrigVars_60;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__NonLocals1_76;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__NewTypeInfos_77;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__NonLocals_78;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals_79;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ArgVars1_80;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ArgVars_103;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__PredId_104;
#line 431 "lambda.m"
      MR_Integer transform_hlds__lambda__ProcId_105;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__UniModes_106;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ModuleInfo_108;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ShroudedPredProcId_143;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__ConsId_144;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__V_147_147;
#line 431 "lambda.m"
      MR_Word transform_hlds__lambda__V_173_173;
#line 432 "lambda.m"
      MR_Word transform_hlds__lambda___HaveExpandedLambdas_40;
#line 450 "lambda.m"
      MR_Word transform_hlds__lambda__V_48_48;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__PredId0_83;
#line 493 "lambda.m"
      MR_Integer transform_hlds__lambda__ProcId0_84;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__Call_PredInfo_89;
#line 493 "lambda.m"
      MR_Word transform_hlds__lambda__Call_ProcInfo_90;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__LambdaGoalExpr_81;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__CallVars_85;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__Call_CodeModel_93;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__CodeModel_94;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__Globals_95;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__Target_96;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__HighLevelCode_97;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__Call_ArgModes_99;
#line 505 "lambda.m"
      MR_Integer transform_hlds__lambda__NumInitialVars_100;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__V_156_156;
#line 505 "lambda.m"
      MR_Word transform_hlds__lambda__V_82_82;
#line 506 "lambda.m"
      MR_Word transform_hlds__lambda__V_86_86;
#line 506 "lambda.m"
      MR_Word transform_hlds__lambda__V_87_87;
#line 506 "lambda.m"
      MR_Word transform_hlds__lambda__V_88_88;

#line 432 "lambda.m"
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 7)));
#line 432 "lambda.m"
      transform_hlds__lambda__MustRecomputeNonLocals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 8)));
#line 432 "lambda.m"
      transform_hlds__lambda___HaveExpandedLambdas_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 9)));
#line 439 "lambda.m"
      {
#line 439 "lambda.m"
        hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__AllConstraints_41);
      }
#line 440 "lambda.m"
      {
#line 440 "lambda.m"
        hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__LambdaVarTypeList_42);
      }
#line 1609 "transform_hlds.lambda.c"
      transform_hlds__lambda__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 441 "lambda.m"
      {
#line 441 "lambda.m"
        mercury__list__map_3_p_0(transform_hlds__lambda__TypeCtorInfo_180_180, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[6], transform_hlds__lambda__LambdaVarTypeList_42, &transform_hlds__lambda__LambdaTypeVarsList_43);
      }
#line 442 "lambda.m"
      {
#line 442 "lambda.m"
        mercury__list__condense_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[0], transform_hlds__lambda__LambdaTypeVarsList_43, &transform_hlds__lambda__LambdaTypeVars_44);
      }
#line 443 "lambda.m"
      {
#line 443 "lambda.m"
        transform_hlds__lambda__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_147_147, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2]));
#line 443 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_147_147, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2));
#line 443 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_147_147, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_147_147, 3) = ((MR_Box) (transform_hlds__lambda__LambdaTypeVars_44));
#line 443 "lambda.m"
      }
#line 443 "lambda.m"
      {
#line 443 "lambda.m"
        mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, transform_hlds__lambda__V_147_147, transform_hlds__lambda__AllConstraints_41, &transform_hlds__lambda__UnivConstraints_45);
      }
#line 445 "lambda.m"
      {
#line 445 "lambda.m"
        transform_hlds__lambda__Constraints_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 0) = ((MR_Box) (transform_hlds__lambda__UnivConstraints_45));
#line 445 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "lambda.m"
      }
#line 449 "lambda.m"
      transform_hlds__lambda__ExistQVars_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "lambda.m"
      transform_hlds__lambda__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
#line 450 "lambda.m"
      transform_hlds__lambda__LambdaGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
#line 451 "lambda.m"
      {
#line 451 "lambda.m"
        transform_hlds__lambda__LambdaGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
      }
#line 1661 "transform_hlds.lambda.c"
      transform_hlds__lambda__TypeCtorInfo_185_185 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 452 "lambda.m"
      {
#line 452 "lambda.m"
        parse_tree__set_of_var__insert_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__LambdaNonLocals_51);
      }
#line 453 "lambda.m"
      {
#line 453 "lambda.m"
        hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(transform_hlds__lambda__RttiVarMaps_35, transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__LambdaNonLocals_51, &transform_hlds__lambda__ExtraTypeInfos_52);
      }
#line 467 "lambda.m"
#line 467 "lambda.m"
      switch (MR_tag((MR_Word) transform_hlds__lambda__Unification0_26)) {
#line 467 "lambda.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 467 "lambda.m"
        case (MR_Integer) 0:
#line 457 "lambda.m"
          {
#line 457 "lambda.m"
            MR_Word transform_hlds__lambda__V_54_54;
#line 457 "lambda.m"
            MR_Word transform_hlds__lambda__V_57_57;
#line 457 "lambda.m"
            MR_Word transform_hlds__lambda__V_58_58;
#line 457 "lambda.m"
            MR_Word transform_hlds__lambda__V_59_59;

#line 457 "lambda.m"
            transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 0)));
#line 457 "lambda.m"
            transform_hlds__lambda__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 1)));
#line 457 "lambda.m"
            transform_hlds__lambda__OrigVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 2)));
#line 457 "lambda.m"
            transform_hlds__lambda__UniModes0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 3)));
#line 457 "lambda.m"
            transform_hlds__lambda__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 4)));
#line 457 "lambda.m"
            transform_hlds__lambda__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 5)));
#line 457 "lambda.m"
            transform_hlds__lambda__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 6)));
#line 457 "lambda.m"
          }
#line 467 "lambda.m"
          break;
#line 467 "lambda.m"
        case (MR_Integer) 1:
#line 467 "lambda.m"
        case (MR_Integer) 2:
#line 472 "lambda.m"
          {
#line 473 "lambda.m"
            {
#line 473 "lambda.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
#line 473 "lambda.m"
              return;
            }
#line 472 "lambda.m"
          }
#line 467 "lambda.m"
          break;
#line 467 "lambda.m"
        case (MR_Integer) 3:
#line 472 "lambda.m"
          {
#line 473 "lambda.m"
            {
#line 473 "lambda.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
#line 473 "lambda.m"
              return;
            }
#line 472 "lambda.m"
          }
#line 467 "lambda.m"
          break;
#line 467 "lambda.m"
      }
#line 476 "lambda.m"
      {
#line 476 "lambda.m"
        parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__NonLocals1_76);
      }
#line 480 "lambda.m"
      {
#line 480 "lambda.m"
        parse_tree__set_of_var__difference_3_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, transform_hlds__lambda__ExtraTypeInfos_52, transform_hlds__lambda__NonLocals1_76, &transform_hlds__lambda__NewTypeInfos_77);
      }
#line 481 "lambda.m"
      {
#line 481 "lambda.m"
        parse_tree__set_of_var__union_3_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, transform_hlds__lambda__NonLocals1_76, transform_hlds__lambda__NewTypeInfos_77, &transform_hlds__lambda__NonLocals_78);
      }
#line 483 "lambda.m"
      {
#line 483 "lambda.m"
        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, transform_hlds__lambda__NewTypeInfos_77);
      }
#line 483 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 484 "lambda.m"
        transform_hlds__lambda__MustRecomputeNonLocals_79 = transform_hlds__lambda__MustRecomputeNonLocals0_39;
#line 483 "lambda.m"
      else
#line 488 "lambda.m"
        transform_hlds__lambda__MustRecomputeNonLocals_79 = (MR_Integer) 1;
#line 491 "lambda.m"
      {
#line 491 "lambda.m"
        parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__lambda__TypeCtorInfo_185_185, transform_hlds__lambda__NonLocals_78, &transform_hlds__lambda__ArgVars1_80);
      }
#line 505 "lambda.m"
      transform_hlds__lambda__LambdaGoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
#line 505 "lambda.m"
      transform_hlds__lambda__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
#line 506 "lambda.m"
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__LambdaGoalExpr_81)) == (MR_mktag((MR_Integer) 2)));
#line 506 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 506 "lambda.m"
        {
#line 506 "lambda.m"
          transform_hlds__lambda__PredId0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 0)));
#line 506 "lambda.m"
          transform_hlds__lambda__ProcId0_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 1)));
#line 506 "lambda.m"
          transform_hlds__lambda__CallVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 2)));
#line 506 "lambda.m"
          transform_hlds__lambda__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 3)));
#line 506 "lambda.m"
          transform_hlds__lambda__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 4)));
#line 506 "lambda.m"
          transform_hlds__lambda__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 5)));
#line 507 "lambda.m"
          {
#line 507 "lambda.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, transform_hlds__lambda__PredId0_83, transform_hlds__lambda__ProcId0_84, &transform_hlds__lambda__Call_PredInfo_89, &transform_hlds__lambda__Call_ProcInfo_90);
          }
#line 1803 "transform_hlds.lambda.c"
          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 509 "lambda.m"
          {
#line 509 "lambda.m"
            (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__remove_suffix_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188, transform_hlds__lambda__CallVars_85, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91);
          }
#line 505 "lambda.m"
          if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 505 "lambda.m"
            {
#line 514 "lambda.m"
              {
#line 514 "lambda.m"
                transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(&transform_hlds__lambda__env);
              }
#line 513 "lambda.m"
              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 505 "lambda.m"
              if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 505 "lambda.m"
                {
#line 524 "lambda.m"
                  {
#line 524 "lambda.m"
                    transform_hlds__lambda__Call_CodeModel_93 = hlds__code_model__proc_info_interface_code_model_1_f_0(transform_hlds__lambda__Call_ProcInfo_90);
                  }
#line 525 "lambda.m"
                  {
#line 525 "lambda.m"
                    hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__lambda__Detism_23, &transform_hlds__lambda__CodeModel_94);
                  }
#line 526 "lambda.m"
                  {
#line 526 "lambda.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__Globals_95);
                  }
#line 527 "lambda.m"
                  {
#line 527 "lambda.m"
                    libs__globals__get_target_2_p_0(transform_hlds__lambda__Globals_95, &transform_hlds__lambda__Target_96);
                  }
#line 528 "lambda.m"
                  transform_hlds__lambda__V_156_156 = (MR_Integer) 252;
#line 528 "lambda.m"
                  {
#line 528 "lambda.m"
                    libs__globals__lookup_bool_option_3_p_0(transform_hlds__lambda__Globals_95, transform_hlds__lambda__V_156_156, &transform_hlds__lambda__HighLevelCode_97);
                  }
#line 548 "lambda.m"
#line 548 "lambda.m"
                  switch (transform_hlds__lambda__Target_96) {
#line 548 "lambda.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 548 "lambda.m"
                    case (MR_Integer) 0:
#line 548 "lambda.m"
                    case (MR_Integer) 1:
#line 548 "lambda.m"
                    case (MR_Integer) 2:
#line 542 "lambda.m"
#line 542 "lambda.m"
                      switch (transform_hlds__lambda__HighLevelCode_97) {
#line 542 "lambda.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 542 "lambda.m"
                        case (MR_Integer) 0:
#line 538 "lambda.m"
                          {
#line 537 "lambda.m"
                            (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 538 "lambda.m"
                            if (!((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 539 "lambda.m"
                              {
#line 539 "lambda.m"
                                (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == (MR_Integer) 2);
#line 539 "lambda.m"
                                if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 540 "lambda.m"
                                  (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__Call_CodeModel_93 == (MR_Integer) 0);
#line 539 "lambda.m"
                              }
#line 538 "lambda.m"
                          }
#line 542 "lambda.m"
                          break;
#line 542 "lambda.m"
                        case (MR_Integer) 1:
#line 543 "lambda.m"
                          {
#line 543 "lambda.m"
                            MR_Word transform_hlds__lambda__Call_PredOrFunc_98;

#line 544 "lambda.m"
                            {
#line 544 "lambda.m"
                              transform_hlds__lambda__Call_PredOrFunc_98 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lambda__Call_PredInfo_89);
                            }
#line 545 "lambda.m"
                            (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__PredOrFunc_18 == transform_hlds__lambda__Call_PredOrFunc_98);
#line 543 "lambda.m"
                            if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 546 "lambda.m"
                              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 543 "lambda.m"
                          }
#line 542 "lambda.m"
                          break;
#line 542 "lambda.m"
                      }
#line 548 "lambda.m"
                      break;
#line 548 "lambda.m"
                    case (MR_Integer) 3:
#line 550 "lambda.m"
                      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
#line 548 "lambda.m"
                      break;
#line 548 "lambda.m"
                  }
#line 505 "lambda.m"
                  if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 505 "lambda.m"
                    {
#line 554 "lambda.m"
                      {
#line 554 "lambda.m"
                        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_ArgModes_99);
                      }
#line 555 "lambda.m"
                      {
#line 555 "lambda.m"
                        mercury__list__length_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_188_188, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, &transform_hlds__lambda__NumInitialVars_100);
                      }
#line 1938 "transform_hlds.lambda.c"
                      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_189_189 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 556 "lambda.m"
                      {
#line 556 "lambda.m"
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__take_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_189_189, transform_hlds__lambda__NumInitialVars_100, transform_hlds__lambda__Call_ArgModes_99, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101);
                      }
#line 505 "lambda.m"
                      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 505 "lambda.m"
                        {
#line 559 "lambda.m"
                          {
#line 559 "lambda.m"
                            transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(&transform_hlds__lambda__env);
                          }
#line 559 "lambda.m"
                          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 505 "lambda.m"
                        }
#line 505 "lambda.m"
                    }
#line 505 "lambda.m"
                }
#line 505 "lambda.m"
            }
#line 506 "lambda.m"
        }
#line 493 "lambda.m"
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 563 "lambda.m"
        {
#line 563 "lambda.m"
          MR_Word transform_hlds__lambda__Call_NewProcInfo_107;

#line 563 "lambda.m"
          transform_hlds__lambda__ArgVars_103 = (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
#line 564 "lambda.m"
          transform_hlds__lambda__PredId_104 = transform_hlds__lambda__PredId0_83;
#line 565 "lambda.m"
          transform_hlds__lambda__ProcId_105 = transform_hlds__lambda__ProcId0_84;
#line 566 "lambda.m"
          {
#line 566 "lambda.m"
            check_hlds__mode_util__modes_to_uni_modes_4_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, &transform_hlds__lambda__UniModes_106);
          }
#line 569 "lambda.m"
          {
#line 569 "lambda.m"
            hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_NewProcInfo_107);
          }
#line 571 "lambda.m"
          {
#line 571 "lambda.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__lambda__PredId_104, transform_hlds__lambda__ProcId_105, transform_hlds__lambda__Call_PredInfo_89, transform_hlds__lambda__Call_NewProcInfo_107, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo_108);
          }
#line 563 "lambda.m"
        }
#line 493 "lambda.m"
      else
#line 578 "lambda.m"
        {
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__TypeInfo_190_190;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__TypeCtorInfo_191_191;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__TypeCtorInfo_196_196;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__AllArgVars_109;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ModuleName_110;
#line 578 "lambda.m"
          MR_String transform_hlds__lambda__OrigPredName_111;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__OrigContext_112;
#line 578 "lambda.m"
          MR_String transform_hlds__lambda__OrigFile_113;
#line 578 "lambda.m"
          MR_Integer transform_hlds__lambda__OrigLine_114;
#line 578 "lambda.m"
          MR_Integer transform_hlds__lambda__LambdaCount_115;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ModuleInfo1_116;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__PredName_117;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaContext_118;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__OrigArgModes_119;
#line 578 "lambda.m"
          MR_Integer transform_hlds__lambda__NumArgVars_120;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__In_121;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__InModes_122;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModesMap_123;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__OrigArgModesMap_124;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModesMap1_125;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ArgModes1_126;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__AllArgModes_127;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ArgTypes_128;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__PurityMarkers_130;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaMarkers0_131;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaMarkers_132;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__VarNameRemap_133;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaVarSet_134;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaVarTypes_135;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaRttiVarMaps_136;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__ProcInfo_137;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__Assertions_139;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__PredInfo_140;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__PredicateTable0_141;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__PredicateTable_142;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__V_161_161;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_165_165;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_168_168;
#line 578 "lambda.m"
          MR_Word transform_hlds__lambda__V_170_170;
#line 618 "lambda.m"
          MR_Integer transform_hlds__lambda__V_129_129;
#line 618 "lambda.m"
          MR_Box transform_hlds__lambda__conv4_V_129_129;

#line 578 "lambda.m"
          {
#line 578 "lambda.m"
            transform_hlds__lambda__ArgVars_103 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(transform_hlds__lambda__ArgVars1_80, transform_hlds__lambda__VarTypes_32);
          }
#line 2090 "transform_hlds.lambda.c"
          transform_hlds__lambda__TypeInfo_190_190 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 579 "lambda.m"
          {
#line 579 "lambda.m"
            mercury__list__append_3_p_1(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__ArgVars_103, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__AllArgVars_109);
          }
#line 581 "lambda.m"
          {
#line 581 "lambda.m"
            hlds__hlds_module__module_info_get_name_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleName_110);
          }
#line 582 "lambda.m"
          {
#line 582 "lambda.m"
            transform_hlds__lambda__OrigPredName_111 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__lambda__OrigPredInfo_37);
          }
#line 583 "lambda.m"
          {
#line 583 "lambda.m"
            transform_hlds__lambda__OrigContext_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
          }
#line 584 "lambda.m"
          {
#line 584 "lambda.m"
            mercury__term__context_file_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigFile_113);
          }
#line 585 "lambda.m"
          {
#line 585 "lambda.m"
            mercury__term__context_line_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigLine_114);
          }
#line 586 "lambda.m"
          {
#line 586 "lambda.m"
            hlds__hlds_module__module_info_next_lambda_count_4_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__LambdaCount_115, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo1_116);
          }
#line 588 "lambda.m"
          {
#line 588 "lambda.m"
            parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__lambda__ModuleName_110, (MR_String) "IntroducedFrom", transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__OrigPredName_111, transform_hlds__lambda__OrigLine_114, transform_hlds__lambda__LambdaCount_115, &transform_hlds__lambda__PredName_117);
          }
#line 590 "lambda.m"
          {
#line 590 "lambda.m"
            transform_hlds__lambda__LambdaContext_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
          }
#line 596 "lambda.m"
          {
#line 596 "lambda.m"
            transform_hlds__lambda__uni_modes_to_modes_2_p_0(transform_hlds__lambda__UniModes0_56, &transform_hlds__lambda__OrigArgModes_119);
          }
#line 604 "lambda.m"
          {
#line 604 "lambda.m"
            mercury__list__length_2_p_0(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__ArgVars_103, &transform_hlds__lambda__NumArgVars_120);
          }
#line 605 "lambda.m"
          {
#line 605 "lambda.m"
            parse_tree__prog_mode__in_mode_1_p_0(&transform_hlds__lambda__In_121);
          }
#line 2152 "transform_hlds.lambda.c"
          transform_hlds__lambda__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 606 "lambda.m"
          {
#line 606 "lambda.m"
            mercury__list__duplicate_3_p_0(transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__NumArgVars_120, ((MR_Box) (transform_hlds__lambda__In_121)), &transform_hlds__lambda__InModes_122);
          }
#line 607 "lambda.m"
          {
#line 607 "lambda.m"
            mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__InModes_122, &transform_hlds__lambda__ArgModesMap_123);
          }
#line 609 "lambda.m"
          {
#line 609 "lambda.m"
            mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__OrigVars_60, transform_hlds__lambda__OrigArgModes_119, &transform_hlds__lambda__OrigArgModesMap_124);
          }
#line 610 "lambda.m"
          {
#line 610 "lambda.m"
            mercury__map__overlay_3_p_0(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__ArgModesMap_123, transform_hlds__lambda__OrigArgModesMap_124, &transform_hlds__lambda__ArgModesMap1_125);
          }
#line 611 "lambda.m"
          {
#line 611 "lambda.m"
            mercury__map__apply_to_list_3_p_0(transform_hlds__lambda__TypeInfo_190_190, transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__ArgModesMap1_125, &transform_hlds__lambda__ArgModes1_126);
          }
#line 614 "lambda.m"
          {
#line 614 "lambda.m"
            check_hlds__mode_util__modes_to_uni_modes_4_p_0(transform_hlds__lambda__ModuleInfo1_116, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__ArgModes1_126, &transform_hlds__lambda__UniModes_106);
          }
#line 616 "lambda.m"
          {
#line 616 "lambda.m"
            mercury__list__append_3_p_1(transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__Modes_22, &transform_hlds__lambda__AllArgModes_127);
          }
#line 617 "lambda.m"
          {
#line 617 "lambda.m"
            hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__AllArgVars_109, &transform_hlds__lambda__ArgTypes_128);
          }
#line 618 "lambda.m"
          {
#line 618 "lambda.m"
            transform_hlds__lambda__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 618 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_161_161, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
#line 618 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_161_161, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11));
#line 618 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_161_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 618 "lambda.m"
            MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_161_161, 3) = ((MR_Box) (transform_hlds__lambda__ModuleInfo1_116));
#line 618 "lambda.m"
          }
#line 2208 "transform_hlds.lambda.c"
          transform_hlds__lambda__TypeCtorInfo_196_196 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 618 "lambda.m"
          {
#line 618 "lambda.m"
            mercury__list__foldl_corresponding_5_p_0(transform_hlds__lambda__TypeCtorInfo_180_180, transform_hlds__lambda__TypeCtorInfo_191_191, transform_hlds__lambda__TypeCtorInfo_196_196, transform_hlds__lambda__V_161_161, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__AllArgModes_127, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv4_V_129_129);
          }
#line 618 "lambda.m"
          transform_hlds__lambda__V_129_129 = ((MR_Integer) transform_hlds__lambda__conv4_V_129_129);
#line 621 "lambda.m"
          {
#line 621 "lambda.m"
            hlds__hlds_pred__purity_to_markers_2_p_0(transform_hlds__lambda__Purity_16, &transform_hlds__lambda__PurityMarkers_130);
          }
#line 622 "lambda.m"
          {
#line 622 "lambda.m"
            hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__lambda__LambdaMarkers0_131);
          }
#line 623 "lambda.m"
          {
#line 623 "lambda.m"
            hlds__hlds_pred__add_markers_3_p_0(transform_hlds__lambda__PurityMarkers_130, transform_hlds__lambda__LambdaMarkers0_131, &transform_hlds__lambda__LambdaMarkers_132);
          }
#line 627 "lambda.m"
          {
#line 627 "lambda.m"
            mercury__map__init_1_p_0(transform_hlds__lambda__TypeInfo_190_190, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &transform_hlds__lambda__VarNameRemap_133);
          }
#line 628 "lambda.m"
          {
#line 628 "lambda.m"
            transform_hlds__lambda__restrict_var_maps_8_p_0(transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__VarSet_31, &transform_hlds__lambda__LambdaVarSet_134, transform_hlds__lambda__VarTypes_32, &transform_hlds__lambda__LambdaVarTypes_135, transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__LambdaRttiVarMaps_136);
          }
#line 635 "lambda.m"
          {
#line 635 "lambda.m"
            hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__lambda__LambdaContext_118, transform_hlds__lambda__LambdaVarSet_134, transform_hlds__lambda__LambdaVarTypes_135, transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__InstVarSet_34, transform_hlds__lambda__AllArgModes_127, (MR_Integer) 0, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__LambdaRttiVarMaps_136, (MR_Integer) 0, transform_hlds__lambda__HasParallelConj_36, transform_hlds__lambda__VarNameRemap_133, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_165_165);
          }
#line 641 "lambda.m"
          {
#line 641 "lambda.m"
            hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_165_165, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166);
          }
#line 650 "lambda.m"
#line 650 "lambda.m"
          switch (transform_hlds__lambda__MustRecomputeNonLocals0_39) {
#line 650 "lambda.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 650 "lambda.m"
            case (MR_Integer) 0:
#line 651 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_ProcInfo_168_168 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166;
#line 650 "lambda.m"
              break;
#line 650 "lambda.m"
            case (MR_Integer) 1:
#line 647 "lambda.m"
              {
#line 648 "lambda.m"
                {
#line 648 "lambda.m"
                  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_168_168);
                }
#line 647 "lambda.m"
              }
#line 650 "lambda.m"
              break;
#line 650 "lambda.m"
          }
#line 656 "lambda.m"
          if ((transform_hlds__lambda__RegWrapperProc_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "lambda.m"
            transform_hlds__lambda__ProcInfo_137 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_168_168;
#line 656 "lambda.m"
          else
#line 654 "lambda.m"
            {
#line 654 "lambda.m"
              MR_Word transform_hlds__lambda__RegR_HeadVars_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RegWrapperProc_20, (MR_Integer) 0)));

#line 655 "lambda.m"
              {
#line 655 "lambda.m"
                hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(transform_hlds__lambda__RegR_HeadVars_138, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_168_168, &transform_hlds__lambda__ProcInfo_137);
              }
#line 654 "lambda.m"
            }
#line 661 "lambda.m"
          {
#line 661 "lambda.m"
            mercury__set__init_1_p_0(transform_hlds__lambda__TypeCtorInfo_196_196, &transform_hlds__lambda__Assertions_139);
          }
#line 663 "lambda.m"
          {
#line 663 "lambda.m"
            transform_hlds__lambda__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 663 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 663 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_170_170, 1) = ((MR_Box) (transform_hlds__lambda__OrigFile_113));
#line 663 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_170_170, 2) = ((MR_Box) (transform_hlds__lambda__OrigLine_114));
#line 663 "lambda.m"
            MR_hl_field(MR_mktag(3), transform_hlds__lambda__V_170_170, 3) = ((MR_Box) (transform_hlds__lambda__LambdaCount_115));
#line 663 "lambda.m"
          }
#line 662 "lambda.m"
          {
#line 662 "lambda.m"
            hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__lambda__ModuleName_110, transform_hlds__lambda__PredName_117, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__LambdaContext_118, transform_hlds__lambda__V_170_170, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), transform_hlds__lambda__LambdaMarkers_132, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__TVarSet_33, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__Constraints_46, transform_hlds__lambda__Assertions_139, transform_hlds__lambda__VarNameRemap_133, transform_hlds__lambda__ProcInfo_137, &transform_hlds__lambda__ProcId_105, &transform_hlds__lambda__PredInfo_140);
          }
#line 669 "lambda.m"
          {
#line 669 "lambda.m"
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__PredicateTable0_141);
          }
#line 670 "lambda.m"
          {
#line 670 "lambda.m"
            hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lambda__PredInfo_140, &transform_hlds__lambda__PredId_104, transform_hlds__lambda__PredicateTable0_141, &transform_hlds__lambda__PredicateTable_142);
          }
#line 672 "lambda.m"
          {
#line 672 "lambda.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lambda__PredicateTable_142, transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__ModuleInfo_108);
          }
#line 578 "lambda.m"
        }
#line 675 "lambda.m"
      {
#line 675 "lambda.m"
        transform_hlds__lambda__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_173_173, 0) = ((MR_Box) (transform_hlds__lambda__PredId_104));
#line 675 "lambda.m"
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_173_173, 1) = ((MR_Box) (transform_hlds__lambda__ProcId_105));
#line 675 "lambda.m"
      }
#line 675 "lambda.m"
      {
#line 675 "lambda.m"
        transform_hlds__lambda__ShroudedPredProcId_143 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__lambda__V_173_173);
      }
#line 676 "lambda.m"
      {
#line 676 "lambda.m"
        transform_hlds__lambda__ConsId_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 676 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 676 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_144, 1) = ((MR_Box) (transform_hlds__lambda__ShroudedPredProcId_143));
#line 676 "lambda.m"
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_144, 2) = NULL;
#line 676 "lambda.m"
      }
#line 677 "lambda.m"
      {
#line 677 "lambda.m"
        MR_Word base;
#line 677 "lambda.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "lambda.m"
        *transform_hlds__lambda__Functor_27 = base;
#line 677 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__ConsId_144));
#line 677 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 677 "lambda.m"
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
#line 677 "lambda.m"
      }
#line 679 "lambda.m"
      {
#line 679 "lambda.m"
        MR_Word base;
#line 679 "lambda.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 679 "lambda.m"
        *transform_hlds__lambda__Unification_28 = base;
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_53));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__ConsId_144));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__UniModes_106));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 679 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "lambda.m"
      }
#line 682 "lambda.m"
      {
#line 682 "lambda.m"
        MR_Word base;
#line 682 "lambda.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 682 "lambda.m"
        *transform_hlds__lambda__LambdaInfo_30 = base;
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_31));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_32));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TVarSet_33));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_34));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_35));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_36));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__OrigPredInfo_37));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_108));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__MustRecomputeNonLocals_79));
#line 682 "lambda.m"
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 1));
#line 682 "lambda.m"
      }
#line 431 "lambda.m"
    }
#line 130 "lambda.m"
  }
#line 130 "lambda.m"
}

#line 103 "lambda.m"
void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(
#line 103 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
#line 103 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2,
#line 103 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__3_3)
#line 103 "lambda.m"
{
#line 103 "lambda.m"
  {
#line 103 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 103 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
#line 103 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_9 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

#line 103 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_8 == transform_hlds__lambda__CastY_9);
#line 103 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 2465 "transform_hlds.lambda.c"
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "lambda.m"
    else
#line 103 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "lambda.m"
      if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "lambda.m"
        *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "lambda.m"
      else
#line 2477 "transform_hlds.lambda.c"
        *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 2;
#line 103 "lambda.m"
    else
#line 103 "lambda.m"
      {
#line 103 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));

#line 103 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2488 "transform_hlds.lambda.c"
          *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 1;
#line 103 "lambda.m"
        else
#line 103 "lambda.m"
          {
#line 103 "lambda.m"
            MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));

#line 103 "lambda.m"
            {
#line 103 "lambda.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[6], transform_hlds__lambda__HeadVar__1_1, ((MR_Box) (transform_hlds__lambda__V_11_11)), ((MR_Box) (transform_hlds__lambda__V_5_5)));
            }
#line 103 "lambda.m"
          }
#line 103 "lambda.m"
      }
#line 103 "lambda.m"
  }
#line 103 "lambda.m"
}

#line 103 "lambda.m"
MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
#line 103 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 103 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2)
#line 103 "lambda.m"
{
#line 103 "lambda.m"
  {
#line 103 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 103 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_7 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 103 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 103 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_7 == transform_hlds__lambda__CastY_8);
#line 103 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 103 "lambda.m"
      transform_hlds__lambda__succeeded = MR_TRUE;
#line 103 "lambda.m"
    else
#line 103 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "lambda.m"
      {
#line 103 "lambda.m"
        MR_Integer transform_hlds__lambda__CastX_5 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 103 "lambda.m"
        MR_Integer transform_hlds__lambda__CastY_6 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 103 "lambda.m"
        transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastY_6 == transform_hlds__lambda__CastX_5);
#line 103 "lambda.m"
      }
#line 103 "lambda.m"
    else
#line 103 "lambda.m"
      {
#line 103 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_9_9;
#line 103 "lambda.m"
        MR_Word transform_hlds__lambda__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 103 "lambda.m"
        MR_Word transform_hlds__lambda__V_4_4;

#line 103 "lambda.m"
        transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 103 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 103 "lambda.m"
          {
#line 103 "lambda.m"
            transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 2569 "transform_hlds.lambda.c"
            transform_hlds__lambda__TypeInfo_9_9 = (MR_Word) &transform_hlds__lambda_scalar_common_1[6];
#line 2571 "transform_hlds.lambda.c"
            {
#line 2573 "transform_hlds.lambda.c"
              transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_9_9, ((MR_Box) (transform_hlds__lambda__V_3_3)), ((MR_Box) (transform_hlds__lambda__V_4_4)));
            }
#line 103 "lambda.m"
          }
#line 103 "lambda.m"
      }
#line 103 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 103 "lambda.m"
  }
#line 103 "lambda.m"
}

#line 170 "lambda.m"
void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
#line 170 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
#line 170 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2,
#line 170 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__3_3)
#line 170 "lambda.m"
{
#line 170 "lambda.m"
  {
#line 170 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 170 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_33 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
#line 170 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_34 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

#line 170 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_33 == transform_hlds__lambda__CastY_34);
#line 170 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 2611 "transform_hlds.lambda.c"
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "lambda.m"
    else
#line 170 "lambda.m"
      {
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 3)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 4)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 5)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 6)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 7)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 8)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 9)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_24_24;

#line 170 "lambda.m"
        {
#line 170 "lambda.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], &transform_hlds__lambda__V_24_24, ((MR_Box) (transform_hlds__lambda__V_4_4)), ((MR_Box) (transform_hlds__lambda__V_14_14)));
        }
#line 2665 "transform_hlds.lambda.c"
        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_24_24 == (MR_Integer) 0);
#line 170 "lambda.m"
        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_24_24;
#line 170 "lambda.m"
        else
#line 170 "lambda.m"
          {
#line 170 "lambda.m"
            MR_Word transform_hlds__lambda__V_25_25;

#line 170 "lambda.m"
            {
#line 170 "lambda.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[1], &transform_hlds__lambda__V_25_25, ((MR_Box) (transform_hlds__lambda__V_5_5)), ((MR_Box) (transform_hlds__lambda__V_15_15)));
            }
#line 2685 "transform_hlds.lambda.c"
            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_25_25 == (MR_Integer) 0);
#line 170 "lambda.m"
            transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
            if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
              *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_25_25;
#line 170 "lambda.m"
            else
#line 170 "lambda.m"
              {
#line 170 "lambda.m"
                MR_Word transform_hlds__lambda__V_26_26;

#line 170 "lambda.m"
                {
#line 170 "lambda.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[4], &transform_hlds__lambda__V_26_26, ((MR_Box) (transform_hlds__lambda__V_6_6)), ((MR_Box) (transform_hlds__lambda__V_16_16)));
                }
#line 2705 "transform_hlds.lambda.c"
                transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_26_26 == (MR_Integer) 0);
#line 170 "lambda.m"
                transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                  *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_26_26;
#line 170 "lambda.m"
                else
#line 170 "lambda.m"
                  {
#line 170 "lambda.m"
                    MR_Word transform_hlds__lambda__V_27_27;

#line 170 "lambda.m"
                    {
#line 170 "lambda.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[5], &transform_hlds__lambda__V_27_27, ((MR_Box) (transform_hlds__lambda__V_7_7)), ((MR_Box) (transform_hlds__lambda__V_17_17)));
                    }
#line 2725 "transform_hlds.lambda.c"
                    transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_27_27 == (MR_Integer) 0);
#line 170 "lambda.m"
                    transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                      *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_27_27;
#line 170 "lambda.m"
                    else
#line 170 "lambda.m"
                      {
#line 170 "lambda.m"
                        MR_Word transform_hlds__lambda__V_28_28;

#line 170 "lambda.m"
                        {
#line 170 "lambda.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__lambda__V_28_28, transform_hlds__lambda__V_8_8, transform_hlds__lambda__V_18_18);
                        }
#line 2745 "transform_hlds.lambda.c"
                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_28_28 == (MR_Integer) 0);
#line 170 "lambda.m"
                        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                        if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_28_28;
#line 170 "lambda.m"
                        else
#line 170 "lambda.m"
                          {
#line 170 "lambda.m"
                            MR_Word transform_hlds__lambda__V_29_29;
#line 170 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_45_45 = (MR_Integer) transform_hlds__lambda__V_9_9;
#line 170 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_46_46 = (MR_Integer) transform_hlds__lambda__V_19_19;

#line 170 "lambda.m"
                            {
#line 170 "lambda.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__V_29_29, transform_hlds__lambda__V_45_45, transform_hlds__lambda__V_46_46);
                            }
#line 2769 "transform_hlds.lambda.c"
                            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_29_29 == (MR_Integer) 0);
#line 170 "lambda.m"
                            transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                            if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                              *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_29_29;
#line 170 "lambda.m"
                            else
#line 170 "lambda.m"
                              {
#line 170 "lambda.m"
                                MR_Word transform_hlds__lambda__V_30_30;

#line 170 "lambda.m"
                                {
#line 170 "lambda.m"
                                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lambda__V_30_30, transform_hlds__lambda__V_10_10, transform_hlds__lambda__V_20_20);
                                }
#line 2789 "transform_hlds.lambda.c"
                                transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_30_30 == (MR_Integer) 0);
#line 170 "lambda.m"
                                transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                                if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                                  *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_30_30;
#line 170 "lambda.m"
                                else
#line 170 "lambda.m"
                                  {
#line 170 "lambda.m"
                                    MR_Word transform_hlds__lambda__V_31_31;

#line 170 "lambda.m"
                                    {
#line 170 "lambda.m"
                                      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lambda__V_31_31, transform_hlds__lambda__V_11_11, transform_hlds__lambda__V_21_21);
                                    }
#line 2809 "transform_hlds.lambda.c"
                                    transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_31_31 == (MR_Integer) 0);
#line 170 "lambda.m"
                                    transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                                    if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                                      *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_31_31;
#line 170 "lambda.m"
                                    else
#line 170 "lambda.m"
                                      {
#line 170 "lambda.m"
                                        MR_Word transform_hlds__lambda__V_32_32;
#line 170 "lambda.m"
                                        MR_Integer transform_hlds__lambda__V_47_47 = (MR_Integer) transform_hlds__lambda__V_12_12;
#line 170 "lambda.m"
                                        MR_Integer transform_hlds__lambda__V_48_48 = (MR_Integer) transform_hlds__lambda__V_22_22;

#line 170 "lambda.m"
                                        {
#line 170 "lambda.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__V_32_32, transform_hlds__lambda__V_47_47, transform_hlds__lambda__V_48_48);
                                        }
#line 2833 "transform_hlds.lambda.c"
                                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_32_32 == (MR_Integer) 0);
#line 170 "lambda.m"
                                        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
#line 170 "lambda.m"
                                        if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                                          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__V_32_32;
#line 170 "lambda.m"
                                        else
#line 170 "lambda.m"
                                          {
#line 170 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_49_49 = (MR_Integer) transform_hlds__lambda__V_13_13;
#line 170 "lambda.m"
                                            MR_Integer transform_hlds__lambda__V_50_50 = (MR_Integer) transform_hlds__lambda__V_23_23;

#line 170 "lambda.m"
                                            {
#line 170 "lambda.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lambda__HeadVar__1_1, transform_hlds__lambda__V_49_49, transform_hlds__lambda__V_50_50);
                                            }
#line 170 "lambda.m"
                                          }
#line 170 "lambda.m"
                                      }
#line 170 "lambda.m"
                                  }
#line 170 "lambda.m"
                              }
#line 170 "lambda.m"
                          }
#line 170 "lambda.m"
                      }
#line 170 "lambda.m"
                  }
#line 170 "lambda.m"
              }
#line 170 "lambda.m"
          }
#line 170 "lambda.m"
      }
#line 170 "lambda.m"
  }
#line 170 "lambda.m"
}

#line 170 "lambda.m"
MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
#line 170 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 170 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__2_2)
#line 170 "lambda.m"
{
#line 170 "lambda.m"
  {
#line 170 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 170 "lambda.m"
    MR_Integer transform_hlds__lambda__CastX_23 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
#line 170 "lambda.m"
    MR_Integer transform_hlds__lambda__CastY_24 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

#line 170 "lambda.m"
    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_23 == transform_hlds__lambda__CastY_24);
#line 170 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
      transform_hlds__lambda__succeeded = MR_TRUE;
#line 170 "lambda.m"
    else
#line 170 "lambda.m"
      {
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_26_26;
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_27_27;
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__TypeInfo_28_28;
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 4)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 5)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 6)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 7)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 8)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 9)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
#line 170 "lambda.m"
        MR_Word transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));

#line 2955 "transform_hlds.lambda.c"
        {
#line 2957 "transform_hlds.lambda.c"
          transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], ((MR_Box) (transform_hlds__lambda__V_3_3)), ((MR_Box) (transform_hlds__lambda__V_13_13)));
        }
#line 170 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
          {
#line 2964 "transform_hlds.lambda.c"
            transform_hlds__lambda__TypeInfo_26_26 = (MR_Word) &transform_hlds__lambda_scalar_common_2[1];
#line 2966 "transform_hlds.lambda.c"
            {
#line 2968 "transform_hlds.lambda.c"
              transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_26_26, ((MR_Box) (transform_hlds__lambda__V_4_4)), ((MR_Box) (transform_hlds__lambda__V_14_14)));
            }
#line 170 "lambda.m"
            if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
              {
#line 2975 "transform_hlds.lambda.c"
                transform_hlds__lambda__TypeInfo_27_27 = (MR_Word) &transform_hlds__lambda_scalar_common_1[4];
#line 2977 "transform_hlds.lambda.c"
                {
#line 2979 "transform_hlds.lambda.c"
                  transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_27_27, ((MR_Box) (transform_hlds__lambda__V_5_5)), ((MR_Box) (transform_hlds__lambda__V_15_15)));
                }
#line 170 "lambda.m"
                if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                  {
#line 2986 "transform_hlds.lambda.c"
                    transform_hlds__lambda__TypeInfo_28_28 = (MR_Word) &transform_hlds__lambda_scalar_common_1[5];
#line 2988 "transform_hlds.lambda.c"
                    {
#line 2990 "transform_hlds.lambda.c"
                      transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_28_28, ((MR_Box) (transform_hlds__lambda__V_6_6)), ((MR_Box) (transform_hlds__lambda__V_16_16)));
                    }
#line 170 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                      {
#line 2997 "transform_hlds.lambda.c"
                        {
#line 2999 "transform_hlds.lambda.c"
                          transform_hlds__lambda__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__lambda__V_7_7, transform_hlds__lambda__V_17_17);
                        }
#line 170 "lambda.m"
                        if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                          {
#line 3006 "transform_hlds.lambda.c"
                            transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_8_8 == transform_hlds__lambda__V_18_18);
#line 170 "lambda.m"
                            if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                              {
#line 3012 "transform_hlds.lambda.c"
                                {
#line 3014 "transform_hlds.lambda.c"
                                  transform_hlds__lambda__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lambda__V_9_9, transform_hlds__lambda__V_19_19);
                                }
#line 170 "lambda.m"
                                if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                                  {
#line 3021 "transform_hlds.lambda.c"
                                    {
#line 3023 "transform_hlds.lambda.c"
                                      transform_hlds__lambda__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lambda__V_10_10, transform_hlds__lambda__V_20_20);
                                    }
#line 170 "lambda.m"
                                    if (transform_hlds__lambda__succeeded)
#line 170 "lambda.m"
                                      {
#line 3030 "transform_hlds.lambda.c"
                                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_11_11 == transform_hlds__lambda__V_21_21);
#line 170 "lambda.m"
                                        if (transform_hlds__lambda__succeeded)
#line 3034 "transform_hlds.lambda.c"
                                          transform_hlds__lambda__succeeded = (transform_hlds__lambda__V_12_12 == transform_hlds__lambda__V_22_22);
#line 170 "lambda.m"
                                      }
#line 170 "lambda.m"
                                  }
#line 170 "lambda.m"
                              }
#line 170 "lambda.m"
                          }
#line 170 "lambda.m"
                      }
#line 170 "lambda.m"
                  }
#line 170 "lambda.m"
              }
#line 170 "lambda.m"
          }
#line 170 "lambda.m"
      }
#line 170 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 170 "lambda.m"
  }
#line 170 "lambda.m"
}

#line 950 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
#line 950 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 950 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 950 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 950 "lambda.m"
{
#line 953 "lambda.m"
  while (MR_TRUE)
#line 953 "lambda.m"
    {
#line 953 "lambda.m"
      /* tailcall optimized into a loop */
#line 953 "lambda.m"
      {
#line 953 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 953 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 953 "lambda.m"
        else
#line 954 "lambda.m"
          {
#line 954 "lambda.m"
            MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 954 "lambda.m"
            MR_Word transform_hlds__lambda__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 954 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;
#line 954 "lambda.m"
            MR_Integer transform_hlds__lambda__V_18_18;
#line 948 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;

#line 948 "lambda.m"
            {
#line 948 "lambda.m"
              transform_hlds__lambda__V_18_18 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_7);
            }
#line 948 "lambda.m"
            {
#line 948 "lambda.m"
              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_18_18, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12);
            }
#line 948 "lambda.m"
            transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12 = (MR_ArrayPtr) transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;
#line 956 "lambda.m"
            /* direct tailcall eliminated */
#line 956 "lambda.m"
            {
#line 956 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Vars_8;
#line 956 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 956 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 956 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 956 "lambda.m"
            }
#line 956 "lambda.m"
            continue;
#line 954 "lambda.m"
          }
#line 953 "lambda.m"
      }
#line 953 "lambda.m"
      break;
#line 953 "lambda.m"
    }
#line 950 "lambda.m"
}

#line 934 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
#line 934 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 934 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 934 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 934 "lambda.m"
{
#line 937 "lambda.m"
  while (MR_TRUE)
#line 937 "lambda.m"
    {
#line 937 "lambda.m"
      /* tailcall optimized into a loop */
#line 937 "lambda.m"
      {
#line 937 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 937 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 937 "lambda.m"
        else
#line 938 "lambda.m"
          {
#line 938 "lambda.m"
            MR_Word transform_hlds__lambda__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 938 "lambda.m"
            MR_Word transform_hlds__lambda__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 938 "lambda.m"
            MR_Word transform_hlds__lambda__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 2)));
#line 938 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;
#line 939 "lambda.m"
            MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 0)));
#line 939 "lambda.m"
            MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 1)));

#line 940 "lambda.m"
            {
#line 940 "lambda.m"
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_12, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15);
            }
#line 941 "lambda.m"
            /* direct tailcall eliminated */
#line 941 "lambda.m"
            {
#line 941 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Cases_8;
#line 941 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;

#line 941 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 941 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 941 "lambda.m"
            }
#line 941 "lambda.m"
            continue;
#line 938 "lambda.m"
          }
#line 937 "lambda.m"
      }
#line 937 "lambda.m"
      break;
#line 937 "lambda.m"
    }
#line 934 "lambda.m"
}

#line 926 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
#line 926 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 926 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
#line 926 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
#line 926 "lambda.m"
{
#line 929 "lambda.m"
  while (MR_TRUE)
#line 929 "lambda.m"
    {
#line 929 "lambda.m"
      /* tailcall optimized into a loop */
#line 929 "lambda.m"
      {
#line 929 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 929 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
#line 929 "lambda.m"
        else
#line 930 "lambda.m"
          {
#line 930 "lambda.m"
            MR_Word transform_hlds__lambda__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 930 "lambda.m"
            MR_Word transform_hlds__lambda__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "lambda.m"
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 931 "lambda.m"
            {
#line 931 "lambda.m"
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_7, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12);
            }
#line 932 "lambda.m"
            /* direct tailcall eliminated */
#line 932 "lambda.m"
            {
#line 932 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__Goals_8;
#line 932 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

#line 932 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_2;
#line 932 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 932 "lambda.m"
            }
#line 932 "lambda.m"
            continue;
#line 930 "lambda.m"
          }
#line 929 "lambda.m"
      }
#line 929 "lambda.m"
      break;
#line 929 "lambda.m"
    }
#line 926 "lambda.m"
}

#line 893 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
#line 893 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 893 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 893 "lambda.m"
{
#line 893 "lambda.m"
  {
#line 893 "lambda.m"
    MR_Box transform_hlds__lambda__wrapper_arg_2;
#line 893 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 893 "lambda.m"
    MR_Word transform_hlds__lambda__conv1_HeadVar__2_2;

#line 893 "lambda.m"
    {
#line 893 "lambda.m"
      transform_hlds__lambda__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 893 "lambda.m"
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv1_HeadVar__2_2));
#line 893 "lambda.m"
    return transform_hlds__lambda__wrapper_arg_2;
#line 893 "lambda.m"
  }
#line 893 "lambda.m"
}

#line 892 "lambda.m"
static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
#line 892 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 892 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1)
#line 892 "lambda.m"
{
#line 892 "lambda.m"
  {
#line 892 "lambda.m"
    MR_Box transform_hlds__lambda__wrapper_arg_2;
#line 892 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 892 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

#line 892 "lambda.m"
    {
#line 892 "lambda.m"
      transform_hlds__lambda__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    }
#line 892 "lambda.m"
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
#line 892 "lambda.m"
    return transform_hlds__lambda__wrapper_arg_2;
#line 892 "lambda.m"
  }
#line 892 "lambda.m"
}

#line 787 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
#line 787 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_4,
#line 787 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119,
#line 787 "lambda.m"
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_120)
#line 787 "lambda.m"
{
#line 790 "lambda.m"
  while (MR_TRUE)
#line 790 "lambda.m"
    {
#line 790 "lambda.m"
      /* tailcall optimized into a loop */
#line 790 "lambda.m"
      {
#line 790 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;
#line 790 "lambda.m"
        MR_Word transform_hlds__lambda__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 0)));
#line 791 "lambda.m"
        MR_Word transform_hlds__lambda___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 1)));

#line 824 "lambda.m"
#line 824 "lambda.m"
        switch (MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) {
#line 824 "lambda.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 824 "lambda.m"
          case (MR_Integer) 0:
#line 882 "lambda.m"
            {
#line 882 "lambda.m"
              MR_Word transform_hlds__lambda__SubGoal_172 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr_6), (MR_Integer) 0);

#line 883 "lambda.m"
              /* direct tailcall eliminated */
#line 883 "lambda.m"
              {
#line 883 "lambda.m"
                MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_172;

#line 883 "lambda.m"
                transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 883 "lambda.m"
              }
#line 883 "lambda.m"
              continue;
#line 882 "lambda.m"
            }
#line 824 "lambda.m"
            break;
#line 824 "lambda.m"
          case (MR_Integer) 1:
#line 793 "lambda.m"
            {
#line 793 "lambda.m"
              MR_Word transform_hlds__lambda__LHSVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
#line 793 "lambda.m"
              MR_Word transform_hlds__lambda__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 793 "lambda.m"
              MR_Word transform_hlds__lambda__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 793 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 793 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
#line 793 "lambda.m"
              MR_Integer transform_hlds__lambda__V_279_279;
#line 793 "lambda.m"
              MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 793 "lambda.m"
              MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 948 "lambda.m"
              MR_ArrayPtr transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_156_156;

#line 948 "lambda.m"
              {
#line 948 "lambda.m"
                transform_hlds__lambda__V_279_279 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LHSVar_8);
              }
#line 948 "lambda.m"
              {
#line 948 "lambda.m"
                mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_279_279, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_156_156);
              }
#line 948 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = (MR_ArrayPtr) transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_156_156;
#line 802 "lambda.m"
#line 802 "lambda.m"
              switch (MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) {
#line 802 "lambda.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 802 "lambda.m"
                case (MR_Integer) 0:
#line 796 "lambda.m"
                  {
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 4)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 0)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 1)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 2)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 3)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 5)));
#line 796 "lambda.m"
                    MR_Word transform_hlds__lambda__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 6)));
#line 797 "lambda.m"
                    MR_Word transform_hlds__lambda__ReuseVar_20;
#line 797 "lambda.m"
                    MR_Word transform_hlds__lambda__V_157_157;
#line 797 "lambda.m"
                    MR_Word transform_hlds__lambda__V_21_21;
#line 797 "lambda.m"
                    MR_Word transform_hlds__lambda__V_22_22;

#line 797 "lambda.m"
                    transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
#line 797 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 797 "lambda.m"
                      {
#line 797 "lambda.m"
                        transform_hlds__lambda__V_157_157 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__CellToReuse_17), (MR_Integer) 1);
#line 797 "lambda.m"
                        transform_hlds__lambda__ReuseVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 0)));
#line 797 "lambda.m"
                        transform_hlds__lambda__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 1)));
#line 797 "lambda.m"
                        transform_hlds__lambda__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_157_157, (MR_Integer) 2)));
#line 797 "lambda.m"
                        transform_hlds__lambda__succeeded = MR_TRUE;
#line 797 "lambda.m"
                      }
#line 797 "lambda.m"
                    if (transform_hlds__lambda__succeeded)
#line 947 "lambda.m"
                      {
#line 947 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_288_288;
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_158_158;

#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_288_288 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__ReuseVar_20);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_288_288, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156, &transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_158_158);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = (MR_ArrayPtr) transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_158_158;
#line 947 "lambda.m"
                      }
#line 797 "lambda.m"
                    else
#line 797 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 796 "lambda.m"
                  }
#line 802 "lambda.m"
                  break;
#line 802 "lambda.m"
                case (MR_Integer) 1:
#line 803 "lambda.m"
                  transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 802 "lambda.m"
                  break;
#line 802 "lambda.m"
                case (MR_Integer) 2:
#line 805 "lambda.m"
                  transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 802 "lambda.m"
                  break;
#line 802 "lambda.m"
                case (MR_Integer) 3:
#line 802 "lambda.m"
#line 802 "lambda.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Unif_11, (MR_Integer) 0)))) {
#line 802 "lambda.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 802 "lambda.m"
                    case (MR_Integer) 0:
#line 807 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 802 "lambda.m"
                      break;
#line 802 "lambda.m"
                    case (MR_Integer) 1:
#line 809 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
#line 802 "lambda.m"
                      break;
#line 802 "lambda.m"
                  }
#line 802 "lambda.m"
                  break;
#line 802 "lambda.m"
              }
#line 814 "lambda.m"
#line 814 "lambda.m"
              switch (MR_tag((MR_Word) transform_hlds__lambda__RHS_9)) {
#line 814 "lambda.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 814 "lambda.m"
                case (MR_Integer) 0:
#line 812 "lambda.m"
                  {
#line 812 "lambda.m"
                    MR_Word transform_hlds__lambda__RHSVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
#line 812 "lambda.m"
                    MR_Integer transform_hlds__lambda__V_297_297;
#line 948 "lambda.m"
                    MR_ArrayPtr transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_120;

#line 948 "lambda.m"
                    {
#line 948 "lambda.m"
                      transform_hlds__lambda__V_297_297 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__RHSVar_36);
                    }
#line 948 "lambda.m"
                    {
#line 948 "lambda.m"
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_297_297, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, &transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_120);
                    }
#line 948 "lambda.m"
                    *transform_hlds__lambda__STATE_VARIABLE_VarUses_120 = (MR_ArrayPtr) transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_120;
#line 812 "lambda.m"
                  }
#line 814 "lambda.m"
                  break;
#line 814 "lambda.m"
                case (MR_Integer) 1:
#line 815 "lambda.m"
                  {
#line 815 "lambda.m"
                    MR_Word transform_hlds__lambda__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
#line 815 "lambda.m"
                    MR_Word transform_hlds__lambda__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
#line 815 "lambda.m"
                    MR_Word transform_hlds__lambda__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 1)));

#line 816 "lambda.m"
                    {
#line 816 "lambda.m"
                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_39, transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                    }
#line 815 "lambda.m"
                  }
#line 814 "lambda.m"
                  break;
#line 814 "lambda.m"
                case (MR_Integer) 2:
#line 819 "lambda.m"
                  {
#line 819 "lambda.m"
                    MR_Word transform_hlds__lambda__NonLocals_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
#line 819 "lambda.m"
                    MR_Word transform_hlds__lambda__LambdaVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 3)));
#line 819 "lambda.m"
                    MR_Word transform_hlds__lambda__LambdaGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 6)));
#line 819 "lambda.m"
                    MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159;
#line 819 "lambda.m"
                    MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160;
#line 818 "lambda.m"
                    MR_Word transform_hlds__lambda__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 818 "lambda.m"
                    MR_Word transform_hlds__lambda__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 818 "lambda.m"
                    MR_Word transform_hlds__lambda__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 818 "lambda.m"
                    MR_Word transform_hlds__lambda__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 4)));
#line 818 "lambda.m"
                    MR_Word transform_hlds__lambda__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 5)));

#line 820 "lambda.m"
                    {
#line 820 "lambda.m"
                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__NonLocals_44, transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, &transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159);
                    }
#line 821 "lambda.m"
                    {
#line 821 "lambda.m"
                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__LambdaVars_45, transform_hlds__lambda__STATE_VARIABLE_VarUses_159_159, &transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160);
                    }
#line 822 "lambda.m"
                    /* direct tailcall eliminated */
#line 822 "lambda.m"
                    {
#line 822 "lambda.m"
                      MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__LambdaGoal_48;
#line 822 "lambda.m"
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160;

#line 822 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 822 "lambda.m"
                      transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 822 "lambda.m"
                    }
#line 822 "lambda.m"
                    continue;
#line 819 "lambda.m"
                  }
#line 814 "lambda.m"
                  break;
#line 814 "lambda.m"
              }
#line 793 "lambda.m"
            }
#line 824 "lambda.m"
            break;
#line 824 "lambda.m"
          case (MR_Integer) 2:
#line 839 "lambda.m"
            {
#line 839 "lambda.m"
              MR_Word transform_hlds__lambda__ArgVars_166 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 839 "lambda.m"
              MR_Word transform_hlds__lambda__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
#line 839 "lambda.m"
              MR_Integer transform_hlds__lambda__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 839 "lambda.m"
              MR_Word transform_hlds__lambda__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 839 "lambda.m"
              MR_Word transform_hlds__lambda__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 839 "lambda.m"
              MR_Word transform_hlds__lambda__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

#line 840 "lambda.m"
              {
#line 840 "lambda.m"
                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_166, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
              }
#line 839 "lambda.m"
            }
#line 824 "lambda.m"
            break;
#line 824 "lambda.m"
          case (MR_Integer) 3:
#line 824 "lambda.m"
#line 824 "lambda.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) {
#line 824 "lambda.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 824 "lambda.m"
              case (MR_Integer) 0:
#line 825 "lambda.m"
                {
#line 825 "lambda.m"
                  MR_Word transform_hlds__lambda__GenericCall_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 825 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154;
#line 825 "lambda.m"
                  MR_Word transform_hlds__lambda__ArgVars_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 825 "lambda.m"
                  MR_Word transform_hlds__lambda__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 825 "lambda.m"
                  MR_Word transform_hlds__lambda__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 825 "lambda.m"
                  MR_Word transform_hlds__lambda__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

#line 829 "lambda.m"
#line 829 "lambda.m"
                  switch (MR_tag((MR_Word) transform_hlds__lambda__GenericCall_49)) {
#line 829 "lambda.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 829 "lambda.m"
                    case (MR_Integer) 0:
#line 827 "lambda.m"
                      {
#line 827 "lambda.m"
                        MR_Word transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
#line 827 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_198_198;
#line 827 "lambda.m"
                        MR_Word transform_hlds__lambda__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
#line 827 "lambda.m"
                        MR_Word transform_hlds__lambda__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
#line 827 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_154_154;

#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_198_198 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_53);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_198_198, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_154_154);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_154_154;
#line 827 "lambda.m"
                      }
#line 829 "lambda.m"
                      break;
#line 829 "lambda.m"
                    case (MR_Integer) 1:
#line 830 "lambda.m"
                      {
#line 830 "lambda.m"
                        MR_Word transform_hlds__lambda__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
#line 830 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_189_189;
#line 830 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
#line 830 "lambda.m"
                        MR_Word transform_hlds__lambda__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
#line 830 "lambda.m"
                        MR_Word transform_hlds__lambda__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_154_154;

#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_189_189 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_164);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_189_189, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_154_154);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = (MR_ArrayPtr) transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_154_154;
#line 830 "lambda.m"
                      }
#line 829 "lambda.m"
                      break;
#line 829 "lambda.m"
                    case (MR_Integer) 2:
#line 833 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 829 "lambda.m"
                      break;
#line 829 "lambda.m"
                    case (MR_Integer) 3:
#line 835 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 829 "lambda.m"
                      break;
#line 829 "lambda.m"
                  }
#line 837 "lambda.m"
                  {
#line 837 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_165, transform_hlds__lambda__STATE_VARIABLE_VarUses_154_154, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                  }
#line 825 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 1:
#line 891 "lambda.m"
                {
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__TypeCtorInfo_178_178 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__TypeInfo_179_179 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__Args_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__ExtraArgs_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__ExtraVars_101;
#line 891 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133;
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__ArgVars_174;
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 891 "lambda.m"
                  MR_Integer transform_hlds__lambda__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 6)));
#line 891 "lambda.m"
                  MR_Word transform_hlds__lambda__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 7)));

#line 892 "lambda.m"
                  {
#line 892 "lambda.m"
                    transform_hlds__lambda__ArgVars_174 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_178_178, transform_hlds__lambda__TypeInfo_179_179, (MR_Word) &transform_hlds__lambda_scalar_common_2[4], transform_hlds__lambda__Args_97);
                  }
#line 893 "lambda.m"
                  {
#line 893 "lambda.m"
                    transform_hlds__lambda__ExtraVars_101 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_178_178, transform_hlds__lambda__TypeInfo_179_179, (MR_Word) &transform_hlds__lambda_scalar_common_2[5], transform_hlds__lambda__ExtraArgs_98);
                  }
#line 894 "lambda.m"
                  {
#line 894 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_174, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133);
                  }
#line 895 "lambda.m"
                  {
#line 895 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ExtraVars_101, transform_hlds__lambda__STATE_VARIABLE_VarUses_133_133, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                  }
#line 891 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 2:
#line 844 "lambda.m"
                {
#line 844 "lambda.m"
                  MR_Word transform_hlds__lambda__Goals_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 842 "lambda.m"
                  MR_Word transform_hlds__lambda__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 845 "lambda.m"
                  {
#line 845 "lambda.m"
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_68, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                  }
#line 844 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 3:
#line 844 "lambda.m"
                {
#line 844 "lambda.m"
                  MR_Word transform_hlds__lambda__Goals_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 845 "lambda.m"
                  {
#line 845 "lambda.m"
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_184, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                  }
#line 844 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 4:
#line 847 "lambda.m"
                {
#line 847 "lambda.m"
                  MR_Word transform_hlds__lambda__Cases_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 847 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149;
#line 847 "lambda.m"
                  MR_Word transform_hlds__lambda__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 847 "lambda.m"
                  MR_Integer transform_hlds__lambda__V_270_270;
#line 847 "lambda.m"
                  MR_Word transform_hlds__lambda___Det_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 948 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_149_149;

#line 948 "lambda.m"
                  {
#line 948 "lambda.m"
                    transform_hlds__lambda__V_270_270 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_167);
                  }
#line 948 "lambda.m"
                  {
#line 948 "lambda.m"
                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_270_270, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_149_149);
                  }
#line 948 "lambda.m"
                  transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = (MR_ArrayPtr) transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_149_149;
#line 849 "lambda.m"
                  {
#line 849 "lambda.m"
                    transform_hlds__lambda__find_used_vars_in_cases_3_p_0(transform_hlds__lambda__Cases_70, transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                  }
#line 847 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 5:
#line 851 "lambda.m"
                {
#line 851 "lambda.m"
                  MR_Word transform_hlds__lambda__Reason_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
#line 851 "lambda.m"
                  MR_Word transform_hlds__lambda__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 851 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147;

#line 855 "lambda.m"
#line 855 "lambda.m"
                  switch (MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) {
#line 855 "lambda.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 855 "lambda.m"
                    case (MR_Integer) 0:
#line 853 "lambda.m"
                      {
#line 853 "lambda.m"
                        MR_Word transform_hlds__lambda__Vars_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));

#line 854 "lambda.m"
                        {
#line 854 "lambda.m"
                          transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_73, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147);
                        }
#line 853 "lambda.m"
                      }
#line 855 "lambda.m"
                      break;
#line 855 "lambda.m"
                    case (MR_Integer) 1:
#line 856 "lambda.m"
                      {
#line 856 "lambda.m"
                        MR_Word transform_hlds__lambda__Vars_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));
#line 856 "lambda.m"
                        MR_Word transform_hlds__lambda__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));

#line 857 "lambda.m"
                        {
#line 857 "lambda.m"
                          transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_168, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147);
                        }
#line 856 "lambda.m"
                      }
#line 855 "lambda.m"
                      break;
#line 855 "lambda.m"
                    case (MR_Integer) 2:
#line 866 "lambda.m"
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 855 "lambda.m"
                      break;
#line 855 "lambda.m"
                    case (MR_Integer) 3:
#line 855 "lambda.m"
#line 855 "lambda.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) {
#line 855 "lambda.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 855 "lambda.m"
                        case (MR_Integer) 0:
#line 855 "lambda.m"
                        case (MR_Integer) 1:
#line 855 "lambda.m"
                        case (MR_Integer) 2:
#line 876 "lambda.m"
                          {
#line 878 "lambda.m"
                            {
#line 878 "lambda.m"
                              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
#line 878 "lambda.m"
                              return;
                            }
#line 876 "lambda.m"
                          }
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                        case (MR_Integer) 3:
#line 868 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                        case (MR_Integer) 4:
#line 867 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                        case (MR_Integer) 5:
#line 859 "lambda.m"
                          {
#line 859 "lambda.m"
                            MR_Word transform_hlds__lambda__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
#line 859 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_207_207;
#line 859 "lambda.m"
                            MR_Word transform_hlds__lambda__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
#line 948 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_147_147;

#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              transform_hlds__lambda__V_207_207 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_169);
                            }
#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_207_207, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_147_147);
                            }
#line 948 "lambda.m"
                            transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_147_147;
#line 859 "lambda.m"
                          }
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                        case (MR_Integer) 6:
#line 869 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119;
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                        case (MR_Integer) 7:
#line 862 "lambda.m"
                          {
#line 862 "lambda.m"
                            MR_Word transform_hlds__lambda__LCVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
#line 862 "lambda.m"
                            MR_Word transform_hlds__lambda__LCSVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
#line 862 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143;
#line 862 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_216_216;
#line 862 "lambda.m"
                            MR_Integer transform_hlds__lambda__V_225_225;
#line 862 "lambda.m"
                            MR_Word transform_hlds__lambda__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 3)));
#line 948 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_143_143;
#line 948 "lambda.m"
                            MR_ArrayPtr transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_147_147;

#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              transform_hlds__lambda__V_216_216 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCVar_76);
                            }
#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_216_216, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_143_143);
                            }
#line 948 "lambda.m"
                            transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143 = (MR_ArrayPtr) transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_143_143;
#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              transform_hlds__lambda__V_225_225 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCSVar_77);
                            }
#line 948 "lambda.m"
                            {
#line 948 "lambda.m"
                              mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_225_225, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_143_143, &transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_147_147);
                            }
#line 948 "lambda.m"
                            transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147 = (MR_ArrayPtr) transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_147_147;
#line 862 "lambda.m"
                          }
#line 855 "lambda.m"
                          break;
#line 855 "lambda.m"
                      }
#line 855 "lambda.m"
                      break;
#line 855 "lambda.m"
                  }
#line 880 "lambda.m"
                  /* direct tailcall eliminated */
#line 880 "lambda.m"
                  {
#line 880 "lambda.m"
                    MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_72;
#line 880 "lambda.m"
                    MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_147_147;

#line 880 "lambda.m"
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 880 "lambda.m"
                    transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 880 "lambda.m"
                  }
#line 880 "lambda.m"
                  continue;
#line 851 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 6:
#line 885 "lambda.m"
                {
#line 885 "lambda.m"
                  MR_Word transform_hlds__lambda__Cond_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
#line 885 "lambda.m"
                  MR_Word transform_hlds__lambda__Then_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
#line 885 "lambda.m"
                  MR_Word transform_hlds__lambda__Else_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
#line 885 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135;
#line 885 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136;
#line 885 "lambda.m"
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137;
#line 885 "lambda.m"
                  MR_Word transform_hlds__lambda__Vars_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 886 "lambda.m"
                  {
#line 886 "lambda.m"
                    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_173, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135);
                  }
#line 887 "lambda.m"
                  {
#line 887 "lambda.m"
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Cond_91, transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135, &transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136);
                  }
#line 888 "lambda.m"
                  {
#line 888 "lambda.m"
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Then_92, transform_hlds__lambda__STATE_VARIABLE_VarUses_136_136, &transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137);
                  }
#line 889 "lambda.m"
                  /* direct tailcall eliminated */
#line 889 "lambda.m"
                  {
#line 889 "lambda.m"
                    MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__Else_93;
#line 889 "lambda.m"
                    MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137;

#line 889 "lambda.m"
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 889 "lambda.m"
                    transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 889 "lambda.m"
                  }
#line 889 "lambda.m"
                  continue;
#line 885 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
              case (MR_Integer) 7:
#line 897 "lambda.m"
                {
#line 897 "lambda.m"
                  MR_Word transform_hlds__lambda__Shorthand_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

#line 915 "lambda.m"
#line 915 "lambda.m"
                  switch (MR_tag((MR_Word) transform_hlds__lambda__Shorthand_102)) {
#line 915 "lambda.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 915 "lambda.m"
                    case (MR_Integer) 0:
#line 920 "lambda.m"
                      {
#line 920 "lambda.m"
                        MR_Word transform_hlds__lambda__LeftGoal_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 920 "lambda.m"
                        MR_Word transform_hlds__lambda__RightGoal_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));
#line 920 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121;

#line 921 "lambda.m"
                        {
#line 921 "lambda.m"
                          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__LeftGoal_117, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121);
                        }
#line 922 "lambda.m"
                        /* direct tailcall eliminated */
#line 922 "lambda.m"
                        {
#line 922 "lambda.m"
                          MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__RightGoal_118;
#line 922 "lambda.m"
                          MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_121_121;

#line 922 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0__tmp_copy_119;
#line 922 "lambda.m"
                          transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 922 "lambda.m"
                        }
#line 922 "lambda.m"
                        continue;
#line 920 "lambda.m"
                      }
#line 915 "lambda.m"
                      break;
#line 915 "lambda.m"
                    case (MR_Integer) 1:
#line 900 "lambda.m"
                      {
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__Outer_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__Inner_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 2)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__MaybeOutputVars_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 3)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__MainGoal_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 4)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__OrElseGoals_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 5)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__OuterDI_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_104, (MR_Integer) 0)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__OuterUO_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_104, (MR_Integer) 1)));
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__InnerDI_112;
#line 900 "lambda.m"
                        MR_Word transform_hlds__lambda__InnerUO_113;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128;
#line 900 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129;
#line 900 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_234_234;
#line 900 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_243_243;
#line 900 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_252_252;
#line 900 "lambda.m"
                        MR_Integer transform_hlds__lambda__V_261_261;
#line 899 "lambda.m"
                        MR_Word transform_hlds__lambda__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 899 "lambda.m"
                        MR_Word transform_hlds__lambda__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_102, (MR_Integer) 6)));
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_124_124;
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_125_125;
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_126_126;
#line 948 "lambda.m"
                        MR_ArrayPtr transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_127_127;

#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_234_234 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterDI_110);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_234_234, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_119, &transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_124_124);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124 = (MR_ArrayPtr) transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_124_124;
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_243_243 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterUO_111);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_243_243, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_124_124, &transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_125_125);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125 = (MR_ArrayPtr) transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_125_125;
#line 904 "lambda.m"
                        transform_hlds__lambda__InnerDI_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_105, (MR_Integer) 0)));
#line 904 "lambda.m"
                        transform_hlds__lambda__InnerUO_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_105, (MR_Integer) 1)));
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_252_252 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerDI_112);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_252_252, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_125_125, &transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_126_126);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126 = (MR_ArrayPtr) transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_126_126;
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          transform_hlds__lambda__V_261_261 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerUO_113);
                        }
#line 948 "lambda.m"
                        {
#line 948 "lambda.m"
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_261_261, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126, &transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_127_127);
                        }
#line 948 "lambda.m"
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127 = (MR_ArrayPtr) transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_127_127;
#line 909 "lambda.m"
                        if ((transform_hlds__lambda__MaybeOutputVars_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "lambda.m"
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128 = transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127;
#line 909 "lambda.m"
                        else
#line 910 "lambda.m"
                          {
#line 910 "lambda.m"
                            MR_Word transform_hlds__lambda__OutputVars_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__MaybeOutputVars_106, (MR_Integer) 0)));

#line 911 "lambda.m"
                            {
#line 911 "lambda.m"
                              transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__OutputVars_114, transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127, &transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128);
                            }
#line 910 "lambda.m"
                          }
#line 913 "lambda.m"
                        {
#line 913 "lambda.m"
                          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__MainGoal_107, transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128, &transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129);
                        }
#line 914 "lambda.m"
                        {
#line 914 "lambda.m"
                          transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__OrElseGoals_108, transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129, transform_hlds__lambda__STATE_VARIABLE_VarUses_120);
                        }
#line 900 "lambda.m"
                      }
#line 915 "lambda.m"
                      break;
#line 915 "lambda.m"
                    case (MR_Integer) 2:
#line 916 "lambda.m"
                      {
#line 916 "lambda.m"
                        MR_Word transform_hlds__lambda__SubGoal_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 2)));
#line 916 "lambda.m"
                        MR_Word transform_hlds__lambda__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 0)));
#line 916 "lambda.m"
                        MR_Word transform_hlds__lambda__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_102, (MR_Integer) 1)));

#line 918 "lambda.m"
                        /* direct tailcall eliminated */
#line 918 "lambda.m"
                        {
#line 918 "lambda.m"
                          MR_Word transform_hlds__lambda__Goal__tmp_copy_4 = transform_hlds__lambda__SubGoal_175;

#line 918 "lambda.m"
                          transform_hlds__lambda__Goal_4 = transform_hlds__lambda__Goal__tmp_copy_4;
#line 918 "lambda.m"
                        }
#line 918 "lambda.m"
                        continue;
#line 916 "lambda.m"
                      }
#line 915 "lambda.m"
                      break;
#line 915 "lambda.m"
                  }
#line 897 "lambda.m"
                }
#line 824 "lambda.m"
                break;
#line 824 "lambda.m"
            }
#line 824 "lambda.m"
            break;
#line 824 "lambda.m"
        }
#line 790 "lambda.m"
      }
#line 790 "lambda.m"
      break;
#line 790 "lambda.m"
    }
#line 787 "lambda.m"
}

#line 770 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
#line 770 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 770 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
#line 770 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
#line 770 "lambda.m"
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4)
#line 770 "lambda.m"
{
#line 774 "lambda.m"
  while (MR_TRUE)
#line 774 "lambda.m"
    {
#line 774 "lambda.m"
      /* tailcall optimized into a loop */
#line 774 "lambda.m"
      {
#line 774 "lambda.m"
        MR_bool transform_hlds__lambda__succeeded;

#line 774 "lambda.m"
        if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
#line 774 "lambda.m"
        else
#line 775 "lambda.m"
          {
#line 775 "lambda.m"
            MR_Word transform_hlds__lambda__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 775 "lambda.m"
            MR_Word transform_hlds__lambda__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 775 "lambda.m"
            MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 0)));
#line 775 "lambda.m"
            MR_Integer transform_hlds__lambda__VarNum_15;
#line 775 "lambda.m"
            MR_Word transform_hlds__lambda__Used_16;
#line 775 "lambda.m"
            MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;
#line 776 "lambda.m"
            MR_Word transform_hlds__lambda___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 1)));
#line 778 "lambda.m"
            MR_Box transform_hlds__lambda__conv0_Used_16;

#line 777 "lambda.m"
            {
#line 777 "lambda.m"
              transform_hlds__lambda__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_13);
            }
#line 778 "lambda.m"
            {
#line 778 "lambda.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) transform_hlds__lambda__HeadVar__4_4, transform_hlds__lambda__VarNum_15, &transform_hlds__lambda__conv0_Used_16);
            }
#line 778 "lambda.m"
            transform_hlds__lambda__Used_16 = ((MR_Word) transform_hlds__lambda__conv0_Used_16);
#line 782 "lambda.m"
#line 782 "lambda.m"
            switch (transform_hlds__lambda__Used_16) {
#line 782 "lambda.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 782 "lambda.m"
              case (MR_Integer) 0:
#line 783 "lambda.m"
                transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
#line 782 "lambda.m"
                break;
#line 782 "lambda.m"
              case (MR_Integer) 1:
#line 781 "lambda.m"
                {
#line 781 "lambda.m"
                  transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "lambda.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (transform_hlds__lambda__VarType_9));
#line 781 "lambda.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2));
#line 781 "lambda.m"
                }
#line 782 "lambda.m"
                break;
#line 782 "lambda.m"
            }
#line 785 "lambda.m"
            /* direct tailcall eliminated */
#line 785 "lambda.m"
            {
#line 785 "lambda.m"
              MR_Word transform_hlds__lambda__HeadVar__1__tmp_copy_1 = transform_hlds__lambda__VarTypes_10;
#line 785 "lambda.m"
              MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0__tmp_copy_2 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;

#line 785 "lambda.m"
              transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0__tmp_copy_2;
#line 785 "lambda.m"
              transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__HeadVar__1__tmp_copy_1;
#line 785 "lambda.m"
            }
#line 785 "lambda.m"
            continue;
#line 775 "lambda.m"
          }
#line 774 "lambda.m"
      }
#line 774 "lambda.m"
      break;
#line 774 "lambda.m"
    }
#line 770 "lambda.m"
}

#line 748 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVars_9,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__Goal_10,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
#line 748 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
#line 748 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27)
#line 748 "lambda.m"
{
#line 752 "lambda.m"
  {
#line 752 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 752 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 752 "lambda.m"
    MR_Word transform_hlds__lambda__MaxVar_14;
#line 752 "lambda.m"
    MR_Integer transform_hlds__lambda__MaxVarNum_15;
#line 752 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses0_16;
#line 752 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses1_17;
#line 752 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__VarUses_18;
#line 752 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypesList0_19;
#line 752 "lambda.m"
    MR_Word transform_hlds__lambda__RevVarTypesList_20;
#line 752 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypesList_21;
#line 752 "lambda.m"
    MR_Integer transform_hlds__lambda__V_28_28;
#line 759 "lambda.m"
    MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_16;

#line 753 "lambda.m"
    {
#line 753 "lambda.m"
      transform_hlds__lambda__MaxVar_14 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22);
    }
#line 754 "lambda.m"
    {
#line 754 "lambda.m"
      transform_hlds__lambda__MaxVarNum_15 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__MaxVar_14);
    }
#line 759 "lambda.m"
    transform_hlds__lambda__V_28_28 = (transform_hlds__lambda__MaxVarNum_15 + (MR_Integer) 1);
#line 759 "lambda.m"
    {
#line 759 "lambda.m"
      mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_28_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_16);
    }
#line 759 "lambda.m"
    transform_hlds__lambda__VarUses0_16 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_16;
#line 760 "lambda.m"
    {
#line 760 "lambda.m"
      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_9, transform_hlds__lambda__VarUses0_16, &transform_hlds__lambda__VarUses1_17);
    }
#line 761 "lambda.m"
    {
#line 761 "lambda.m"
      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_10, transform_hlds__lambda__VarUses1_17, &transform_hlds__lambda__VarUses_18);
    }
#line 763 "lambda.m"
    {
#line 763 "lambda.m"
      hlds__vartypes__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24, &transform_hlds__lambda__VarTypesList0_19);
    }
#line 764 "lambda.m"
    {
#line 764 "lambda.m"
      transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_20, transform_hlds__lambda__VarUses_18);
    }
#line 765 "lambda.m"
    {
#line 765 "lambda.m"
      mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_20, &transform_hlds__lambda__VarTypesList_21);
    }
#line 766 "lambda.m"
    {
#line 766 "lambda.m"
      hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_21, transform_hlds__lambda__STATE_VARIABLE_VarTypes_25);
    }
#line 768 "lambda.m"
    {
#line 768 "lambda.m"
      hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_18, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);
    }
#line 752 "lambda.m"
    *transform_hlds__lambda__STATE_VARIABLE_VarSet_23 = transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22;
#line 752 "lambda.m"
  }
#line 748 "lambda.m"
}

#line 715 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_6,
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__Type_7,
#line 715 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_8,
#line 715 "lambda.m"
  MR_Integer transform_hlds__lambda__X_9,
#line 715 "lambda.m"
  MR_Integer * transform_hlds__lambda__X_5)
#line 715 "lambda.m"
{
#line 718 "lambda.m"
  {
#line 718 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 718 "lambda.m"
    MR_Word transform_hlds__lambda__Inst_10;
#line 720 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13;
#line 720 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 720 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 718 "lambda.m"
    *transform_hlds__lambda__X_5 = transform_hlds__lambda__X_9;
#line 719 "lambda.m"
    {
#line 719 "lambda.m"
      transform_hlds__lambda__Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(transform_hlds__lambda__ModuleInfo_6, transform_hlds__lambda__Mode_8);
    }
#line 720 "lambda.m"
    transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 720 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 720 "lambda.m"
      {
#line 720 "lambda.m"
        transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 1)));
#line 720 "lambda.m"
        transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 2)));
#line 720 "lambda.m"
        transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 720 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 720 "lambda.m"
          transform_hlds__lambda__V_12_12 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__V_13_13), (MR_Integer) 1);
#line 720 "lambda.m"
      }
#line 720 "lambda.m"
    if (transform_hlds__lambda__succeeded)
#line 721 "lambda.m"
      {
#line 721 "lambda.m"
        {
#line 721 "lambda.m"
          transform_hlds__lambda__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__lambda__Type_7);
        }
#line 721 "lambda.m"
        if (transform_hlds__lambda__succeeded)
#line 722 "lambda.m"
          {
#line 722 "lambda.m"
          }
#line 721 "lambda.m"
        else
#line 724 "lambda.m"
          {
#line 724 "lambda.m"
            {
#line 724 "lambda.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
#line 724 "lambda.m"
              return;
            }
#line 724 "lambda.m"
          }
#line 721 "lambda.m"
      }
#line 720 "lambda.m"
    else
#line 728 "lambda.m"
      {
#line 728 "lambda.m"
      }
#line 718 "lambda.m"
  }
#line 715 "lambda.m"
}

#line 703 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__uni_modes_to_modes_2_p_0(
#line 703 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 703 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 703 "lambda.m"
{
#line 705 "lambda.m"
  {
#line 705 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 705 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "lambda.m"
      *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "lambda.m"
    else
#line 706 "lambda.m"
      {
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__UniMode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__UniModes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__Mode_5;
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__Modes_6;
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__Initial1_8;
#line 706 "lambda.m"
        MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UniMode_3, (MR_Integer) 0)));
#line 707 "lambda.m"
        MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UniMode_3, (MR_Integer) 1)));
#line 707 "lambda.m"
        MR_Word transform_hlds__lambda___Initial0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_11_11, (MR_Integer) 0)));

#line 707 "lambda.m"
        transform_hlds__lambda__Initial1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_11_11, (MR_Integer) 1)));
#line 708 "lambda.m"
        {
#line 708 "lambda.m"
          transform_hlds__lambda__Mode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 0) = ((MR_Box) (transform_hlds__lambda__Initial1_8));
#line 708 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 1) = ((MR_Box) (transform_hlds__lambda__Initial1_8));
#line 708 "lambda.m"
        }
#line 709 "lambda.m"
        {
#line 709 "lambda.m"
          transform_hlds__lambda__uni_modes_to_modes_2_p_0(transform_hlds__lambda__UniModes_4, &transform_hlds__lambda__Modes_6);
        }
#line 706 "lambda.m"
        {
#line 706 "lambda.m"
          MR_Word base;
#line 706 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 706 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Mode_5));
#line 706 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Modes_6));
#line 706 "lambda.m"
        }
#line 706 "lambda.m"
      }
#line 705 "lambda.m"
  }
#line 703 "lambda.m"
}

#line 691 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
#line 691 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 691 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 691 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
#line 691 "lambda.m"
{
#line 691 "lambda.m"
  {
#line 691 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 691 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

#line 691 "lambda.m"
    {
#line 691 "lambda.m"
      parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    }
#line 691 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
#line 691 "lambda.m"
  }
#line 691 "lambda.m"
}

#line 686 "lambda.m"
static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
#line 686 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaVars_3,
#line 686 "lambda.m"
  MR_Word transform_hlds__lambda__ClassConstraint_4)
#line 686 "lambda.m"
{
#line 689 "lambda.m"
  {
#line 689 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__TypeInfo_16_16;
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 1)));
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVarsList_7;
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVars_8;
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__LambdaVarsSet_9;
#line 689 "lambda.m"
    MR_Word transform_hlds__lambda__ConstraintVarsSet_10;
#line 690 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 0)));

#line 691 "lambda.m"
    {
#line 691 "lambda.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[3], transform_hlds__lambda__ConstraintTypes_6, &transform_hlds__lambda__ConstraintVarsList_7);
    }
#line 4899 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeInfo_16_16 = (MR_Word) &transform_hlds__lambda_scalar_common_1[0];
#line 692 "lambda.m"
    {
#line 692 "lambda.m"
      mercury__list__condense_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsList_7, &transform_hlds__lambda__ConstraintVars_8);
    }
#line 695 "lambda.m"
    {
#line 695 "lambda.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__LambdaVars_3, &transform_hlds__lambda__LambdaVarsSet_9);
    }
#line 696 "lambda.m"
    {
#line 696 "lambda.m"
      mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVars_8, &transform_hlds__lambda__ConstraintVarsSet_10);
    }
#line 697 "lambda.m"
    {
#line 697 "lambda.m"
      transform_hlds__lambda__succeeded = mercury__set__subset_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsSet_10, transform_hlds__lambda__LambdaVarsSet_9);
    }
#line 689 "lambda.m"
    return transform_hlds__lambda__succeeded;
#line 689 "lambda.m"
  }
#line 686 "lambda.m"
}

#line 401 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__LHS_9,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__RHS0_10,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Mode_11,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_12,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__Context_13,
#line 401 "lambda.m"
  MR_Word * transform_hlds__lambda__GoalExpr_14,
#line 401 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
#line 401 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33)
#line 401 "lambda.m"
{
#line 409 "lambda.m"
  {
#line 409 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 409 "lambda.m"
#line 409 "lambda.m"
    switch (MR_tag((MR_Word) transform_hlds__lambda__RHS0_10)) {
#line 409 "lambda.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 409 "lambda.m"
      case (MR_Integer) 0:
#line 409 "lambda.m"
      case (MR_Integer) 1:
#line 422 "lambda.m"
        {
#line 424 "lambda.m"
          {
#line 424 "lambda.m"
            MR_Word base;
#line 424 "lambda.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 424 "lambda.m"
            *transform_hlds__lambda__GoalExpr_14 = base;
#line 424 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
#line 424 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__RHS0_10));
#line 424 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
#line 424 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification0_12));
#line 424 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
#line 424 "lambda.m"
          }
#line 422 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_Info_33 = transform_hlds__lambda__STATE_VARIABLE_Info_0_32;
#line 422 "lambda.m"
        }
#line 409 "lambda.m"
        break;
#line 409 "lambda.m"
      case (MR_Integer) 2:
#line 409 "lambda.m"
        {
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 3)));
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 4)));
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 5)));
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaGoal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 6)));
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__LambdaGoal_25;
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Y_26;
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__Unification_27;
#line 409 "lambda.m"
          MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_34_34;
#line 408 "lambda.m"
          MR_Word transform_hlds__lambda__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 408 "lambda.m"
          MR_Word transform_hlds__lambda__NonLocalVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 2)));

#line 412 "lambda.m"
          {
#line 412 "lambda.m"
            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__LambdaGoal0_24, &transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__STATE_VARIABLE_Info_0_32, &transform_hlds__lambda__STATE_VARIABLE_Info_34_34);
          }
#line 415 "lambda.m"
          {
#line 415 "lambda.m"
            transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Det_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_12, &transform_hlds__lambda__Y_26, &transform_hlds__lambda__Unification_27, transform_hlds__lambda__STATE_VARIABLE_Info_34_34, transform_hlds__lambda__STATE_VARIABLE_Info_33);
          }
#line 418 "lambda.m"
          {
#line 418 "lambda.m"
            MR_Word base;
#line 418 "lambda.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 418 "lambda.m"
            *transform_hlds__lambda__GoalExpr_14 = base;
#line 418 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
#line 418 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Y_26));
#line 418 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
#line 418 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification_27));
#line 418 "lambda.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
#line 418 "lambda.m"
          }
#line 409 "lambda.m"
        }
#line 409 "lambda.m"
        break;
#line 409 "lambda.m"
    }
#line 409 "lambda.m"
  }
#line 401 "lambda.m"
}

#line 391 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
#line 391 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 391 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 391 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 391 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
#line 391 "lambda.m"
{
#line 394 "lambda.m"
  {
#line 394 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 394 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "lambda.m"
      {
#line 394 "lambda.m"
        *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
#line 394 "lambda.m"
      }
#line 394 "lambda.m"
    else
#line 395 "lambda.m"
      {
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Case_10;
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Cases_11;
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 0)));
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 1)));
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 2)));
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__Goal_16;
#line 395 "lambda.m"
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_19_19;

#line 397 "lambda.m"
        {
#line 397 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_15, &transform_hlds__lambda__Goal_16, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_19_19);
        }
#line 398 "lambda.m"
        {
#line 398 "lambda.m"
          transform_hlds__lambda__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 398 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 0) = ((MR_Box) (transform_hlds__lambda__MainConsId_13));
#line 398 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 1) = ((MR_Box) (transform_hlds__lambda__OtherConsIds_14));
#line 398 "lambda.m"
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 2) = ((MR_Box) (transform_hlds__lambda__Goal_16));
#line 398 "lambda.m"
        }
#line 399 "lambda.m"
        {
#line 399 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_9, &transform_hlds__lambda__Cases_11, transform_hlds__lambda__STATE_VARIABLE_Info_19_19, transform_hlds__lambda__STATE_VARIABLE_Info_4);
        }
#line 395 "lambda.m"
        {
#line 395 "lambda.m"
          MR_Word base;
#line 395 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 395 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Case_10));
#line 395 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Cases_11));
#line 395 "lambda.m"
        }
#line 395 "lambda.m"
      }
#line 394 "lambda.m"
  }
#line 391 "lambda.m"
}

#line 383 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
#line 383 "lambda.m"
  MR_Word transform_hlds__lambda__HeadVar__1_1,
#line 383 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
#line 383 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
#line 383 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
#line 383 "lambda.m"
{
#line 386 "lambda.m"
  {
#line 386 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 386 "lambda.m"
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "lambda.m"
      {
#line 386 "lambda.m"
        *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "lambda.m"
        *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
#line 386 "lambda.m"
      }
#line 386 "lambda.m"
    else
#line 387 "lambda.m"
      {
#line 387 "lambda.m"
        MR_Word transform_hlds__lambda__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
#line 387 "lambda.m"
        MR_Word transform_hlds__lambda__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
#line 387 "lambda.m"
        MR_Word transform_hlds__lambda__Goal_10;
#line 387 "lambda.m"
        MR_Word transform_hlds__lambda__Goals_11;
#line 387 "lambda.m"
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_15_15;

#line 388 "lambda.m"
        {
#line 388 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_8, &transform_hlds__lambda__Goal_10, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_15_15);
        }
#line 389 "lambda.m"
        {
#line 389 "lambda.m"
          transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_9, &transform_hlds__lambda__Goals_11, transform_hlds__lambda__STATE_VARIABLE_Info_15_15, transform_hlds__lambda__STATE_VARIABLE_Info_4);
        }
#line 387 "lambda.m"
        {
#line 387 "lambda.m"
          MR_Word base;
#line 387 "lambda.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "lambda.m"
          *transform_hlds__lambda__HeadVar__2_2 = base;
#line 387 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Goal_10));
#line 387 "lambda.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Goals_11));
#line 387 "lambda.m"
        }
#line 387 "lambda.m"
      }
#line 386 "lambda.m"
  }
#line 383 "lambda.m"
}

#line 309 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
#line 309 "lambda.m"
  MR_Word transform_hlds__lambda__Goal0_5,
#line 309 "lambda.m"
  MR_Word * transform_hlds__lambda__Goal_6,
#line 309 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
#line 309 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69)
#line 309 "lambda.m"
{
#line 312 "lambda.m"
  {
#line 312 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 312 "lambda.m"
    MR_Word transform_hlds__lambda__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 0)));
#line 312 "lambda.m"
    MR_Word transform_hlds__lambda__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 1)));
#line 312 "lambda.m"
    MR_Word transform_hlds__lambda__GoalExpr_15;

#line 318 "lambda.m"
#line 318 "lambda.m"
    switch (MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) {
#line 318 "lambda.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "lambda.m"
      case (MR_Integer) 0:
#line 331 "lambda.m"
        {
#line 331 "lambda.m"
          MR_Word transform_hlds__lambda__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr0_8), (MR_Integer) 0);
#line 331 "lambda.m"
          MR_Word transform_hlds__lambda__SubGoal_24;

#line 332 "lambda.m"
          {
#line 332 "lambda.m"
            transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_23, &transform_hlds__lambda__SubGoal_24, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
          }
#line 333 "lambda.m"
          transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__lambda__SubGoal_24);
#line 331 "lambda.m"
        }
#line 318 "lambda.m"
        break;
#line 318 "lambda.m"
      case (MR_Integer) 1:
#line 315 "lambda.m"
        {
#line 315 "lambda.m"
          MR_Word transform_hlds__lambda__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)));
#line 315 "lambda.m"
          MR_Word transform_hlds__lambda__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 315 "lambda.m"
          MR_Word transform_hlds__lambda__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 315 "lambda.m"
          MR_Word transform_hlds__lambda__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 315 "lambda.m"
          MR_Word transform_hlds__lambda__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));

#line 316 "lambda.m"
          {
#line 316 "lambda.m"
            transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(transform_hlds__lambda__LHS_10, transform_hlds__lambda__RHS_11, transform_hlds__lambda__Mode_12, transform_hlds__lambda__Unification_13, transform_hlds__lambda__Context_14, &transform_hlds__lambda__GoalExpr_15, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
          }
#line 315 "lambda.m"
        }
#line 318 "lambda.m"
        break;
#line 318 "lambda.m"
      case (MR_Integer) 2:
#line 359 "lambda.m"
        {
#line 360 "lambda.m"
          transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
#line 359 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
#line 359 "lambda.m"
        }
#line 318 "lambda.m"
        break;
#line 318 "lambda.m"
      case (MR_Integer) 3:
#line 318 "lambda.m"
#line 318 "lambda.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) {
#line 318 "lambda.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 318 "lambda.m"
          case (MR_Integer) 0:
#line 318 "lambda.m"
          case (MR_Integer) 1:
#line 359 "lambda.m"
            {
#line 360 "lambda.m"
              transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
#line 359 "lambda.m"
              *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
#line 359 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 2:
#line 319 "lambda.m"
            {
#line 319 "lambda.m"
              MR_Word transform_hlds__lambda__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 319 "lambda.m"
              MR_Word transform_hlds__lambda__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 319 "lambda.m"
              MR_Word transform_hlds__lambda__Goals_18;

#line 320 "lambda.m"
              {
#line 320 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_17, &transform_hlds__lambda__Goals_18, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              }
#line 321 "lambda.m"
              {
#line 321 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 321 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ConjType_16));
#line 321 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Goals_18));
#line 321 "lambda.m"
              }
#line 319 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 3:
#line 323 "lambda.m"
            {
#line 323 "lambda.m"
              MR_Word transform_hlds__lambda__Goals0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 323 "lambda.m"
              MR_Word transform_hlds__lambda__Goals_86;

#line 324 "lambda.m"
              {
#line 324 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_85, &transform_hlds__lambda__Goals_86, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              }
#line 325 "lambda.m"
              {
#line 325 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 325 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Goals_86));
#line 325 "lambda.m"
              }
#line 323 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 4:
#line 327 "lambda.m"
            {
#line 327 "lambda.m"
              MR_Word transform_hlds__lambda__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 327 "lambda.m"
              MR_Word transform_hlds__lambda__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 327 "lambda.m"
              MR_Word transform_hlds__lambda__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 327 "lambda.m"
              MR_Word transform_hlds__lambda__Cases_22;

#line 328 "lambda.m"
              {
#line 328 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_21, &transform_hlds__lambda__Cases_22, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              }
#line 329 "lambda.m"
              {
#line 329 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 329 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 329 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Var_19));
#line 329 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__CanFail_20));
#line 329 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Cases_22));
#line 329 "lambda.m"
              }
#line 327 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 5:
#line 335 "lambda.m"
            {
#line 335 "lambda.m"
              MR_Word transform_hlds__lambda__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 335 "lambda.m"
              MR_Word transform_hlds__lambda__SubGoal0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 337 "lambda.m"
              MR_Word transform_hlds__lambda__FGT_27;
#line 337 "lambda.m"
              MR_Word transform_hlds__lambda__V_26_26;

#line 337 "lambda.m"
              transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 337 "lambda.m"
              if (transform_hlds__lambda__succeeded)
#line 337 "lambda.m"
                {
#line 337 "lambda.m"
                  transform_hlds__lambda__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 1)));
#line 337 "lambda.m"
                  transform_hlds__lambda__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 2)));
#line 339 "lambda.m"
#line 339 "lambda.m"
                  switch (transform_hlds__lambda__FGT_27) {
#line 339 "lambda.m"
                    default:
#line 339 "lambda.m"
                      transform_hlds__lambda__succeeded = MR_FALSE;
#line 339 "lambda.m"
                      break;
#line 339 "lambda.m"
                    case (MR_Integer) 1:
#line 338 "lambda.m"
                      transform_hlds__lambda__succeeded = MR_TRUE;
#line 339 "lambda.m"
                      break;
#line 339 "lambda.m"
                    case (MR_Integer) 2:
#line 339 "lambda.m"
                      transform_hlds__lambda__succeeded = MR_TRUE;
#line 339 "lambda.m"
                      break;
#line 339 "lambda.m"
                  }
#line 337 "lambda.m"
                }
#line 336 "lambda.m"
              if (transform_hlds__lambda__succeeded)
#line 344 "lambda.m"
                {
#line 344 "lambda.m"
                  transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
#line 344 "lambda.m"
                  *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
#line 344 "lambda.m"
                }
#line 336 "lambda.m"
              else
#line 346 "lambda.m"
                {
#line 346 "lambda.m"
                  MR_Word transform_hlds__lambda__SubGoal_87;

#line 346 "lambda.m"
                  {
#line 346 "lambda.m"
                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_89, &transform_hlds__lambda__SubGoal_87, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                  }
#line 347 "lambda.m"
                  {
#line 347 "lambda.m"
                    transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "lambda.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 347 "lambda.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Reason_25));
#line 347 "lambda.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_87));
#line 347 "lambda.m"
                  }
#line 346 "lambda.m"
                }
#line 335 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 6:
#line 350 "lambda.m"
            {
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Cond_32;
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Then_33;
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__Else_34;
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_76_76;
#line 350 "lambda.m"
              MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_77_77;

#line 351 "lambda.m"
              {
#line 351 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Cond0_29, &transform_hlds__lambda__Cond_32, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_76_76);
              }
#line 352 "lambda.m"
              {
#line 352 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Then0_30, &transform_hlds__lambda__Then_33, transform_hlds__lambda__STATE_VARIABLE_Info_76_76, &transform_hlds__lambda__STATE_VARIABLE_Info_77_77);
              }
#line 353 "lambda.m"
              {
#line 353 "lambda.m"
                transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Else0_31, &transform_hlds__lambda__Else_34, transform_hlds__lambda__STATE_VARIABLE_Info_77_77, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              }
#line 354 "lambda.m"
              {
#line 354 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 354 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 354 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Vars_28));
#line 354 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Cond_32));
#line 354 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Then_33));
#line 354 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__lambda__Else_34));
#line 354 "lambda.m"
              }
#line 350 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
          case (MR_Integer) 7:
#line 362 "lambda.m"
            {
#line 362 "lambda.m"
              MR_Word transform_hlds__lambda__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
#line 362 "lambda.m"
              MR_Word transform_hlds__lambda__ShortHand_63;

#line 370 "lambda.m"
#line 370 "lambda.m"
              switch (MR_tag((MR_Word) transform_hlds__lambda__ShortHand0_53)) {
#line 370 "lambda.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 370 "lambda.m"
                case (MR_Integer) 0:
#line 375 "lambda.m"
                  {
#line 377 "lambda.m"
                    {
#line 377 "lambda.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", (MR_String) "bi_implication");
#line 377 "lambda.m"
                      return;
                    }
#line 375 "lambda.m"
                  }
#line 370 "lambda.m"
                  break;
#line 370 "lambda.m"
                case (MR_Integer) 1:
#line 365 "lambda.m"
                  {
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 3)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__MainGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 4)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__OrElseGoals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 5)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 6)));
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__MainGoal_61;
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__OrElseGoals_62;
#line 365 "lambda.m"
                    MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_74_74;

#line 366 "lambda.m"
                    {
#line 366 "lambda.m"
                      transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__MainGoal0_58, &transform_hlds__lambda__MainGoal_61, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_74_74);
                    }
#line 367 "lambda.m"
                    {
#line 367 "lambda.m"
                      transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__OrElseGoals0_59, &transform_hlds__lambda__OrElseGoals_62, transform_hlds__lambda__STATE_VARIABLE_Info_74_74, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                    }
#line 368 "lambda.m"
                    {
#line 368 "lambda.m"
                      transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__GoalType_54));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__Outer_55));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__Inner_56));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 3) = ((MR_Box) (transform_hlds__lambda__MaybeOutputVars_57));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 4) = ((MR_Box) (transform_hlds__lambda__MainGoal_61));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 5) = ((MR_Box) (transform_hlds__lambda__OrElseGoals_62));
#line 368 "lambda.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 6) = ((MR_Box) (transform_hlds__lambda__OrElseInners_60));
#line 368 "lambda.m"
                    }
#line 365 "lambda.m"
                  }
#line 370 "lambda.m"
                  break;
#line 370 "lambda.m"
                case (MR_Integer) 2:
#line 371 "lambda.m"
                  {
#line 371 "lambda.m"
                    MR_Word transform_hlds__lambda__MaybeIO_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
#line 371 "lambda.m"
                    MR_Word transform_hlds__lambda__ResultVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
#line 371 "lambda.m"
                    MR_Word transform_hlds__lambda__SubGoal0_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
#line 371 "lambda.m"
                    MR_Word transform_hlds__lambda__SubGoal_92;

#line 372 "lambda.m"
                    {
#line 372 "lambda.m"
                      transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_91, &transform_hlds__lambda__SubGoal_92, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                    }
#line 373 "lambda.m"
                    {
#line 373 "lambda.m"
                      transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "lambda.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__MaybeIO_64));
#line 373 "lambda.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__ResultVar_65));
#line 373 "lambda.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_92));
#line 373 "lambda.m"
                    }
#line 371 "lambda.m"
                  }
#line 370 "lambda.m"
                  break;
#line 370 "lambda.m"
              }
#line 379 "lambda.m"
              {
#line 379 "lambda.m"
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 379 "lambda.m"
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ShortHand_63));
#line 379 "lambda.m"
              }
#line 362 "lambda.m"
            }
#line 318 "lambda.m"
            break;
#line 318 "lambda.m"
        }
#line 318 "lambda.m"
        break;
#line 318 "lambda.m"
    }
#line 381 "lambda.m"
    {
#line 381 "lambda.m"
      MR_Word base;
#line 381 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "lambda.m"
      *transform_hlds__lambda__Goal_6 = base;
#line 381 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__GoalExpr_15));
#line 381 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__GoalInfo_9));
#line 381 "lambda.m"
    }
#line 312 "lambda.m"
  }
#line 309 "lambda.m"
}

#line 249 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
#line 249 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
#line 249 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47)
#line 249 "lambda.m"
{
#line 252 "lambda.m"
  {
#line 252 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__TypeVarSet0_10;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__HeadVars_11;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet0_12;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes0_13;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__Goal0_14;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps0_15;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__InstVarSet0_16;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__HasParallelConj_17;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__Info0_20;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__Goal1_21;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__Info1_22;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet1_23;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes1_24;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__TypeVarSet_25;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps1_27;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__MustRecomputeNonLocals_30;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__HaveExpandedLambdas_31;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet2_34;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes2_35;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps2_36;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__Goal_38;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarSet_39;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__VarTypes_40;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__RttiVarMaps_41;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53;
#line 252 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54;
#line 270 "lambda.m"
    MR_Word transform_hlds__lambda___InstVarSet_26;
#line 270 "lambda.m"
    MR_Word transform_hlds__lambda__V_28_28;
#line 270 "lambda.m"
    MR_Word transform_hlds__lambda___PredInfo_29;

#line 254 "lambda.m"
    {
#line 254 "lambda.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__lambda__TypeVarSet0_10);
    }
#line 255 "lambda.m"
    {
#line 255 "lambda.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HeadVars_11);
    }
#line 256 "lambda.m"
    {
#line 256 "lambda.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarSet0_12);
    }
#line 257 "lambda.m"
    {
#line 257 "lambda.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarTypes0_13);
    }
#line 258 "lambda.m"
    {
#line 258 "lambda.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__Goal0_14);
    }
#line 259 "lambda.m"
    {
#line 259 "lambda.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__RttiVarMaps0_15);
    }
#line 260 "lambda.m"
    {
#line 260 "lambda.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__InstVarSet0_16);
    }
#line 261 "lambda.m"
    {
#line 261 "lambda.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HasParallelConj_17);
    }
#line 266 "lambda.m"
    {
#line 266 "lambda.m"
      transform_hlds__lambda__Info0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 0) = ((MR_Box) (transform_hlds__lambda__VarSet0_12));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes0_13));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet0_10));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet0_16));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps0_15));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_17));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 6) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 7) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 8) = ((MR_Box) ((MR_Integer) 0));
#line 266 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 9) = ((MR_Box) ((MR_Integer) 0));
#line 266 "lambda.m"
    }
#line 269 "lambda.m"
    {
#line 269 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_14, &transform_hlds__lambda__Goal1_21, transform_hlds__lambda__Info0_20, &transform_hlds__lambda__Info1_22);
    }
#line 270 "lambda.m"
    transform_hlds__lambda__VarSet1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 0)));
#line 270 "lambda.m"
    transform_hlds__lambda__VarTypes1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 1)));
#line 270 "lambda.m"
    transform_hlds__lambda__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 2)));
#line 270 "lambda.m"
    transform_hlds__lambda___InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 3)));
#line 270 "lambda.m"
    transform_hlds__lambda__RttiVarMaps1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 4)));
#line 270 "lambda.m"
    transform_hlds__lambda__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 5)));
#line 270 "lambda.m"
    transform_hlds__lambda___PredInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 6)));
#line 270 "lambda.m"
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 7)));
#line 270 "lambda.m"
    transform_hlds__lambda__MustRecomputeNonLocals_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 8)));
#line 270 "lambda.m"
    transform_hlds__lambda__HaveExpandedLambdas_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 9)));
#line 284 "lambda.m"
#line 284 "lambda.m"
    switch (transform_hlds__lambda__MustRecomputeNonLocals_30) {
#line 284 "lambda.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "lambda.m"
      case (MR_Integer) 0:
#line 285 "lambda.m"
        {
#line 286 "lambda.m"
          transform_hlds__lambda__Goal_38 = transform_hlds__lambda__Goal1_21;
#line 287 "lambda.m"
          transform_hlds__lambda__VarSet2_34 = transform_hlds__lambda__VarSet1_23;
#line 288 "lambda.m"
          transform_hlds__lambda__VarTypes2_35 = transform_hlds__lambda__VarTypes1_24;
#line 289 "lambda.m"
          transform_hlds__lambda__RttiVarMaps2_36 = transform_hlds__lambda__RttiVarMaps1_27;
#line 285 "lambda.m"
          *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47 = transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
#line 285 "lambda.m"
        }
#line 284 "lambda.m"
        break;
#line 284 "lambda.m"
      case (MR_Integer) 1:
#line 276 "lambda.m"
        {
#line 276 "lambda.m"
          MR_Word transform_hlds__lambda__Goal2_33;
#line 276 "lambda.m"
          MR_Word transform_hlds__lambda__InstMap0_37;
#line 277 "lambda.m"
          MR_Word transform_hlds__lambda___Warnings_32;

#line 277 "lambda.m"
          {
#line 277 "lambda.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__lambda__HeadVars_11, &transform_hlds__lambda___Warnings_32, transform_hlds__lambda__Goal1_21, &transform_hlds__lambda__Goal2_33, transform_hlds__lambda__VarSet1_23, &transform_hlds__lambda__VarSet2_34, transform_hlds__lambda__VarTypes1_24, &transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__RttiVarMaps1_27, &transform_hlds__lambda__RttiVarMaps2_36);
          }
#line 281 "lambda.m"
          {
#line 281 "lambda.m"
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, &transform_hlds__lambda__InstMap0_37);
          }
#line 282 "lambda.m"
          {
#line 282 "lambda.m"
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__lambda__Goal2_33, &transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__InstVarSet0_16, transform_hlds__lambda__InstMap0_37, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);
          }
#line 276 "lambda.m"
        }
#line 284 "lambda.m"
        break;
#line 284 "lambda.m"
    }
#line 295 "lambda.m"
#line 295 "lambda.m"
    switch (transform_hlds__lambda__HaveExpandedLambdas_31) {
#line 295 "lambda.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 295 "lambda.m"
      case (MR_Integer) 0:
#line 296 "lambda.m"
        {
#line 297 "lambda.m"
          transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
#line 298 "lambda.m"
          transform_hlds__lambda__VarTypes_40 = transform_hlds__lambda__VarTypes2_35;
#line 299 "lambda.m"
          transform_hlds__lambda__RttiVarMaps_41 = transform_hlds__lambda__RttiVarMaps2_36;
#line 296 "lambda.m"
        }
#line 295 "lambda.m"
        break;
#line 295 "lambda.m"
      case (MR_Integer) 1:
#line 752 "lambda.m"
        {
#line 752 "lambda.m"
          MR_Word transform_hlds__lambda__TypeCtorInfo_34_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 752 "lambda.m"
          MR_Word transform_hlds__lambda__MaxVar_68;
#line 752 "lambda.m"
          MR_Integer transform_hlds__lambda__MaxVarNum_69;
#line 752 "lambda.m"
          MR_ArrayPtr transform_hlds__lambda__VarUses0_70;
#line 752 "lambda.m"
          MR_ArrayPtr transform_hlds__lambda__VarUses1_71;
#line 752 "lambda.m"
          MR_ArrayPtr transform_hlds__lambda__VarUses_72;
#line 752 "lambda.m"
          MR_Word transform_hlds__lambda__VarTypesList0_73;
#line 752 "lambda.m"
          MR_Word transform_hlds__lambda__RevVarTypesList_74;
#line 752 "lambda.m"
          MR_Word transform_hlds__lambda__VarTypesList_75;
#line 752 "lambda.m"
          MR_Integer transform_hlds__lambda__V_76_76;
#line 759 "lambda.m"
          MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_70;

#line 753 "lambda.m"
          {
#line 753 "lambda.m"
            transform_hlds__lambda__MaxVar_68 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__VarSet2_34);
          }
#line 754 "lambda.m"
          {
#line 754 "lambda.m"
            transform_hlds__lambda__MaxVarNum_69 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__MaxVar_68);
          }
#line 759 "lambda.m"
          transform_hlds__lambda__V_76_76 = (transform_hlds__lambda__MaxVarNum_69 + (MR_Integer) 1);
#line 759 "lambda.m"
          {
#line 759 "lambda.m"
            mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__V_76_76, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_70);
          }
#line 759 "lambda.m"
          transform_hlds__lambda__VarUses0_70 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_70;
#line 760 "lambda.m"
          {
#line 760 "lambda.m"
            transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_11, transform_hlds__lambda__VarUses0_70, &transform_hlds__lambda__VarUses1_71);
          }
#line 761 "lambda.m"
          {
#line 761 "lambda.m"
            transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarUses1_71, &transform_hlds__lambda__VarUses_72);
          }
#line 763 "lambda.m"
          {
#line 763 "lambda.m"
            hlds__vartypes__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__VarTypes2_35, &transform_hlds__lambda__VarTypesList0_73);
          }
#line 764 "lambda.m"
          {
#line 764 "lambda.m"
            transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_74, transform_hlds__lambda__VarUses_72);
          }
#line 765 "lambda.m"
          {
#line 765 "lambda.m"
            mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_74, &transform_hlds__lambda__VarTypesList_75);
          }
#line 766 "lambda.m"
          {
#line 766 "lambda.m"
            hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_75, &transform_hlds__lambda__VarTypes_40);
          }
#line 768 "lambda.m"
          {
#line 768 "lambda.m"
            hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_72, transform_hlds__lambda__RttiVarMaps2_36, &transform_hlds__lambda__RttiVarMaps_41);
          }
#line 752 "lambda.m"
          transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
#line 752 "lambda.m"
        }
#line 295 "lambda.m"
        break;
#line 295 "lambda.m"
    }
#line 303 "lambda.m"
    {
#line 303 "lambda.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 304 "lambda.m"
    {
#line 304 "lambda.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lambda__VarSet_39, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 305 "lambda.m"
    {
#line 305 "lambda.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lambda__VarTypes_40, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54);
    }
#line 306 "lambda.m"
    {
#line 306 "lambda.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__lambda__RttiVarMaps_41, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43);
    }
#line 307 "lambda.m"
    {
#line 307 "lambda.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__lambda__TypeVarSet_25, transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, transform_hlds__lambda__STATE_VARIABLE_PredInfo_45);
    }
#line 252 "lambda.m"
  }
#line 249 "lambda.m"
}

#line 230 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
#line 230 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_5,
#line 230 "lambda.m"
  MR_Integer transform_hlds__lambda__ProcId_6,
#line 230 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
#line 230 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20)
#line 230 "lambda.m"
{
#line 233 "lambda.m"
  {
#line 233 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_23_23;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_24_24;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__TypeCtorInfo_26_26;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable0_8;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo0_9;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable0_10;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__ProcInfo0_11;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__ProcInfo_12;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo1_13;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable1_14;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__ProcTable_15;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo_16;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable1_17;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__PredTable_18;
#line 233 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21;
#line 235 "lambda.m"
    MR_Box transform_hlds__lambda__conv0_PredInfo0_9;
#line 237 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_ProcInfo0_11;

#line 234 "lambda.m"
    {
#line 234 "lambda.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__PredTable0_8);
    }
#line 6165 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6167 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 235 "lambda.m"
    {
#line 235 "lambda.m"
      mercury__map__lookup_3_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, transform_hlds__lambda__PredTable0_8, ((MR_Box) (transform_hlds__lambda__PredId_5)), &transform_hlds__lambda__conv0_PredInfo0_9);
    }
#line 235 "lambda.m"
    transform_hlds__lambda__PredInfo0_9 = ((MR_Word) transform_hlds__lambda__conv0_PredInfo0_9);
#line 236 "lambda.m"
    {
#line 236 "lambda.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__ProcTable0_10);
    }
#line 6181 "transform_hlds.lambda.c"
    transform_hlds__lambda__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 237 "lambda.m"
    {
#line 237 "lambda.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__lambda__TypeCtorInfo_26_26, transform_hlds__lambda__ProcTable0_10, transform_hlds__lambda__ProcId_6, &transform_hlds__lambda__conv1_ProcInfo0_11);
    }
#line 237 "lambda.m"
    transform_hlds__lambda__ProcInfo0_11 = ((MR_Word) transform_hlds__lambda__conv1_ProcInfo0_11);
#line 239 "lambda.m"
    {
#line 239 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(transform_hlds__lambda__ProcInfo0_11, &transform_hlds__lambda__ProcInfo_12, transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__PredInfo1_13, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21);
    }
#line 242 "lambda.m"
    {
#line 242 "lambda.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__ProcTable1_14);
    }
#line 243 "lambda.m"
    {
#line 243 "lambda.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__lambda__TypeCtorInfo_26_26, transform_hlds__lambda__ProcId_6, ((MR_Box) (transform_hlds__lambda__ProcInfo_12)), transform_hlds__lambda__ProcTable1_14, &transform_hlds__lambda__ProcTable_15);
    }
#line 244 "lambda.m"
    {
#line 244 "lambda.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lambda__ProcTable_15, transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__PredInfo_16);
    }
#line 245 "lambda.m"
    {
#line 245 "lambda.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__lambda__PredTable1_17);
    }
#line 246 "lambda.m"
    {
#line 246 "lambda.m"
      mercury__map__det_update_4_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__lambda__PredId_5)), ((MR_Box) (transform_hlds__lambda__PredInfo_16)), transform_hlds__lambda__PredTable1_17, &transform_hlds__lambda__PredTable_18);
    }
#line 247 "lambda.m"
    {
#line 247 "lambda.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lambda__PredTable_18, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);
    }
#line 233 "lambda.m"
  }
#line 230 "lambda.m"
}

#line 130 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambda_15_p_0(
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Purity_16,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda___Groundness_17,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__PredOrFunc_18,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Vars_21,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Modes_22,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Detism_23,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__OrigNonLocals0_24,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaGoal_25,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__Unification0_26,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__Functor_27,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__Unification_28,
#line 130 "lambda.m"
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
#line 130 "lambda.m"
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
#line 130 "lambda.m"
{
#line 431 "lambda.m"
  {
#line 431 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 431 "lambda.m"
    {
#line 431 "lambda.m"
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__RegWrapperProc_20, transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_26, transform_hlds__lambda__Functor_27, transform_hlds__lambda__Unification_28, transform_hlds__lambda__LambdaInfo0_29, transform_hlds__lambda__LambdaInfo_30);
    }
#line 431 "lambda.m"
  }
#line 130 "lambda.m"
}

#line 127 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
#line 127 "lambda.m"
  MR_Word transform_hlds__lambda__Recompute_4,
#line 127 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 127 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 127 "lambda.m"
{
#line 212 "lambda.m"
  {
#line 212 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 212 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));

#line 212 "lambda.m"
    {
#line 212 "lambda.m"
      MR_Word base;
#line 212 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 212 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Recompute_4));
#line 212 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 212 "lambda.m"
    }
#line 212 "lambda.m"
  }
#line 127 "lambda.m"
}

#line 125 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
#line 125 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_4,
#line 125 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 125 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 125 "lambda.m"
{
#line 210 "lambda.m"
  {
#line 210 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 210 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

#line 210 "lambda.m"
    {
#line 210 "lambda.m"
      MR_Word base;
#line 210 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 210 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_4));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 210 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 210 "lambda.m"
    }
#line 210 "lambda.m"
  }
#line 125 "lambda.m"
}

#line 123 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__VarTypes_4,
#line 123 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 123 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 123 "lambda.m"
{
#line 208 "lambda.m"
  {
#line 208 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 208 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

#line 208 "lambda.m"
    {
#line 208 "lambda.m"
      MR_Word base;
#line 208 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 208 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__V_9_9));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_4));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 208 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 208 "lambda.m"
    }
#line 208 "lambda.m"
  }
#line 123 "lambda.m"
}

#line 121 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_set_varset_3_p_0(
#line 121 "lambda.m"
  MR_Word transform_hlds__lambda__VarSet_4,
#line 121 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
#line 121 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
#line 121 "lambda.m"
{
#line 206 "lambda.m"
  {
#line 206 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 206 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 206 "lambda.m"
    {
#line 206 "lambda.m"
      MR_Word base;
#line 206 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 206 "lambda.m"
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_4));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__V_10_10));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__V_11_11));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__V_12_12));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__V_13_13));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__V_14_14));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__V_15_15));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__V_16_16));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__V_17_17));
#line 206 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__V_18_18));
#line 206 "lambda.m"
    }
#line 206 "lambda.m"
  }
#line 121 "lambda.m"
}

#line 119 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
#line 119 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 119 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 119 "lambda.m"
{
#line 203 "lambda.m"
  {
#line 203 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 203 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 203 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 203 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 203 "lambda.m"
  }
#line 119 "lambda.m"
}

#line 118 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
#line 118 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 118 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 118 "lambda.m"
{
#line 202 "lambda.m"
  {
#line 202 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 202 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 202 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 202 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 202 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 202 "lambda.m"
  }
#line 118 "lambda.m"
}

#line 117 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
#line 117 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 117 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 117 "lambda.m"
{
#line 201 "lambda.m"
  {
#line 201 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 201 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 201 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 201 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 201 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 201 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 201 "lambda.m"
  }
#line 117 "lambda.m"
}

#line 116 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
#line 116 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 116 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 116 "lambda.m"
{
#line 200 "lambda.m"
  {
#line 200 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 200 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 200 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 200 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 200 "lambda.m"
  }
#line 116 "lambda.m"
}

#line 114 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
#line 114 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 114 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 114 "lambda.m"
{
#line 199 "lambda.m"
  {
#line 199 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 199 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 199 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 199 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 199 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 199 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 199 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 199 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 199 "lambda.m"
  }
#line 114 "lambda.m"
}

#line 113 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
#line 113 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 113 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 113 "lambda.m"
{
#line 198 "lambda.m"
  {
#line 198 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 198 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 198 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 198 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 198 "lambda.m"
  }
#line 113 "lambda.m"
}

#line 112 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(
#line 112 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 112 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 112 "lambda.m"
{
#line 197 "lambda.m"
  {
#line 197 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 197 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 197 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 197 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 197 "lambda.m"
  }
#line 112 "lambda.m"
}

#line 111 "lambda.m"
void MR_CALL 
transform_hlds__lambda__lambda_info_get_varset_2_p_0(
#line 111 "lambda.m"
  MR_Word transform_hlds__lambda__Info_3,
#line 111 "lambda.m"
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
#line 111 "lambda.m"
{
#line 196 "lambda.m"
  {
#line 196 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_4_4;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_5_5;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_6_6;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_7_7;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_8_8;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_9_9;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_11_11;
#line 196 "lambda.m"
    MR_Word transform_hlds__lambda__V_12_12;

#line 196 "lambda.m"
    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
#line 196 "lambda.m"
    transform_hlds__lambda__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
#line 196 "lambda.m"
  }
#line 111 "lambda.m"
}

#line 107 "lambda.m"
void MR_CALL 
transform_hlds__lambda__init_lambda_info_9_p_0(
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__VarSet_10,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__VarTypes_11,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__TypeVarSet_12,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__InstVarSet_13,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__RttiVarMaps_14,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__HasParallelConj_15,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__PredInfo_16,
#line 107 "lambda.m"
  MR_Word transform_hlds__lambda__ModuleInfo_17,
#line 107 "lambda.m"
  MR_Word * transform_hlds__lambda__Info_18)
#line 107 "lambda.m"
{
#line 189 "lambda.m"
  {
#line 189 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;

#line 192 "lambda.m"
    {
#line 192 "lambda.m"
      MR_Word base;
#line 192 "lambda.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 192 "lambda.m"
      *transform_hlds__lambda__Info_18 = base;
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_10));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_11));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet_12));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_13));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_14));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_15));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__PredInfo_16));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_17));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 192 "lambda.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
#line 192 "lambda.m"
    }
#line 189 "lambda.m"
  }
#line 107 "lambda.m"
}

#line 228 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 228 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 228 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
#line 228 "lambda.m"
{
#line 228 "lambda.m"
  {
#line 228 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 228 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 228 "lambda.m"
    {
#line 228 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 228 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 228 "lambda.m"
  }
#line 228 "lambda.m"
}

#line 94 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
#line 94 "lambda.m"
  MR_Word transform_hlds__lambda__PredId_4,
#line 94 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8,
#line 94 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9)
#line 94 "lambda.m"
{
#line 225 "lambda.m"
  {
#line 225 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 225 "lambda.m"
    MR_Word transform_hlds__lambda__PredInfo_6;
#line 225 "lambda.m"
    MR_Word transform_hlds__lambda__ProcIds_7;
#line 225 "lambda.m"
    MR_Word transform_hlds__lambda__V_10_10;
#line 228 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 226 "lambda.m"
    {
#line 226 "lambda.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__lambda__PredId_4, &transform_hlds__lambda__PredInfo_6);
    }
#line 227 "lambda.m"
    {
#line 227 "lambda.m"
      transform_hlds__lambda__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__lambda__PredInfo_6);
    }
#line 228 "lambda.m"
    {
#line 228 "lambda.m"
      transform_hlds__lambda__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_4[0]));
#line 228 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
#line 228 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 228 "lambda.m"
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__V_10_10, 3) = ((MR_Box) (transform_hlds__lambda__PredId_4));
#line 228 "lambda.m"
    }
#line 228 "lambda.m"
    {
#line 228 "lambda.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__lambda__V_10_10, transform_hlds__lambda__ProcIds_7, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 228 "lambda.m"
    *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 225 "lambda.m"
  }
#line 94 "lambda.m"
}

#line 221 "lambda.m"
static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__closure_arg,
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_1,
#line 221 "lambda.m"
  MR_Box transform_hlds__lambda__wrapper_arg_2,
#line 221 "lambda.m"
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
#line 221 "lambda.m"
{
#line 221 "lambda.m"
  {
#line 221 "lambda.m"
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
#line 221 "lambda.m"
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 221 "lambda.m"
    {
#line 221 "lambda.m"
      transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 221 "lambda.m"
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 221 "lambda.m"
  }
#line 221 "lambda.m"
}

#line 92 "lambda.m"
void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
#line 92 "lambda.m"
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5,
#line 92 "lambda.m"
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6)
#line 92 "lambda.m"
{
#line 219 "lambda.m"
  {
#line 219 "lambda.m"
    MR_bool transform_hlds__lambda__succeeded;
#line 219 "lambda.m"
    MR_Word transform_hlds__lambda__PredIds_4;
#line 219 "lambda.m"
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8;
#line 221 "lambda.m"
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8;

#line 220 "lambda.m"
    {
#line 220 "lambda.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__lambda__PredIds_4);
    }
#line 221 "lambda.m"
    {
#line 221 "lambda.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lambda_scalar_common_2[2], transform_hlds__lambda__PredIds_4, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8);
    }
#line 221 "lambda.m"
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8);
#line 223 "lambda.m"
    {
#line 223 "lambda.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6);
    }
#line 219 "lambda.m"
  }
#line 92 "lambda.m"
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
