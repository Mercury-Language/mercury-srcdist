/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module transform_hlds.const_prop. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__const_prop__init
ENDINIT
*/

#include "transform_hlds.const_prop.mih"


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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 142 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

#line 148 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

#line 151 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

#line 154 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

#line 157 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

#line 160 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

#line 163 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

#line 166 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1];

#line 169 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0;

#line 172 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1];

#line 175 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1;

#line 178 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1];

#line 181 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1];

#line 184 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2];

#line 187 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2];

#line 190 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2];

#line 193 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 196 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 198 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 201 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 204 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 206 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 208 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 211 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 214 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 216 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 219 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 222 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 224 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 226 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 506 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 506 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 506 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 506 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 506 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 461 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 461 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 461 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 461 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 461 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 294 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 294 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 294 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 294 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 294 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 281 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 281 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 281 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 281 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 281 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 281 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 281 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 261 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 261 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 261 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 261 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 261 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 261 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 261 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 84 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__84__1_3_f_0(
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_27);

#line 649 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 649 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 649 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 75 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 75 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 75 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 724 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 724 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 724 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);

#line 713 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 713 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 713 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);

#line 685 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 685 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 685 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 685 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6);

#line 653 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 653 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 653 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 653 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 653 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 653 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 538 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 538 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 538 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 538 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 538 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 538 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 207 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 207 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 207 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 207 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 207 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 138 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 138 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 138 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 138 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 138 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 138 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 138 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 138 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 92 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 92 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_10,
#line 92 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_11,
#line 92 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_12,
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_13,
#line 92 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 92 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);

#line 84 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 84 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 84 "const_prop.m"
  MR_Box transform_hlds__const_prop__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[1][7];




static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 547 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 555 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 564 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 572 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 579 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

#line 586 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0 = {
  (MR_String) "arg_hlds_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0,
  NULL,
  NULL
};

#line 601 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 606 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0
  }
};

#line 615 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 620 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = {
  (MR_Integer) 0
};

#line 625 "transform_hlds.const_prop.c"
const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_hlds_info",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0
};

#line 642 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 647 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0 = {
  (MR_String) "const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0,
  NULL,
  NULL,
  NULL
};

#line 662 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

#line 667 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1 = {
  (MR_String) "var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1,
  NULL,
  NULL,
  NULL
};

#line 682 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 687 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

#line 692 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1
  }
};

#line 706 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 712 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 718 "transform_hlds.const_prop.c"
const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_val_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_val_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_val",
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0 },
  {     transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0
};

#line 735 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 738 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 740 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 742 "transform_hlds.const_prop.c"
{
#line 744 "transform_hlds.const_prop.c"
  {
#line 746 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 749 "transform_hlds.const_prop.c"
    {
#line 751 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 754 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 756 "transform_hlds.const_prop.c"
  }
#line 758 "transform_hlds.const_prop.c"
}

#line 761 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 764 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 766 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 768 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 770 "transform_hlds.const_prop.c"
{
#line 772 "transform_hlds.const_prop.c"
  {
#line 774 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 777 "transform_hlds.const_prop.c"
    {
#line 779 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 782 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 784 "transform_hlds.const_prop.c"
  }
#line 786 "transform_hlds.const_prop.c"
}

#line 789 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 792 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 794 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 796 "transform_hlds.const_prop.c"
{
#line 798 "transform_hlds.const_prop.c"
  {
#line 800 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 803 "transform_hlds.const_prop.c"
    {
#line 805 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 808 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 810 "transform_hlds.const_prop.c"
  }
#line 812 "transform_hlds.const_prop.c"
}

#line 815 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 818 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 820 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 822 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 824 "transform_hlds.const_prop.c"
{
#line 826 "transform_hlds.const_prop.c"
  {
#line 828 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 831 "transform_hlds.const_prop.c"
    {
#line 833 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_val_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 836 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 838 "transform_hlds.const_prop.c"
  }
#line 840 "transform_hlds.const_prop.c"
}

#line 506 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 506 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 506 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 506 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 506 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 506 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 506 "const_prop.m"
{
#line 511 "const_prop.m"
  {
#line 511 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 511 "const_prop.m"
    MR_String transform_hlds__const_prop__OutputArgVal_16;
#line 511 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_19;
#line 511 "const_prop.m"
    MR_String transform_hlds__const_prop__YVal_22;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_29_29;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_30_30;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34;
#line 518 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_35_35;
#line 518 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_36_36;
#line 518 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 518 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 519 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 519 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 519 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 519 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;

#line 514 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "++") == 0))
#line 513 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 514 "const_prop.m"
    else
#line 514 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "append") == 0))
#line 514 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 514 "const_prop.m"
    else
#line 514 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 511 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
      {
#line 517 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 511 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
          {
#line 518 "const_prop.m"
            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 518 "const_prop.m"
            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 518 "const_prop.m"
            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 518 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 518 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 518 "const_prop.m"
              {
#line 518 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 1)));
#line 518 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 2)));
#line 518 "const_prop.m"
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 3)));
#line 518 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 518 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 518 "const_prop.m"
                  {
#line 518 "const_prop.m"
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 0)));
#line 518 "const_prop.m"
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 1)));
#line 518 "const_prop.m"
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 0)));
#line 518 "const_prop.m"
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 1)));
#line 518 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 518 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 518 "const_prop.m"
                      {
#line 518 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 1)));
#line 518 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                          {
#line 518 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                              {
#line 519 "const_prop.m"
                                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 519 "const_prop.m"
                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 519 "const_prop.m"
                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 519 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 519 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 519 "const_prop.m"
                                  {
#line 519 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 1)));
#line 519 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 2)));
#line 519 "const_prop.m"
                                    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 3)));
#line 519 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 519 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 519 "const_prop.m"
                                      {
#line 519 "const_prop.m"
                                        transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 0)));
#line 519 "const_prop.m"
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 1)));
#line 519 "const_prop.m"
                                        transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 0)));
#line 519 "const_prop.m"
                                        transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 1)));
#line 519 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 519 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 519 "const_prop.m"
                                          {
#line 519 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 519 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                                              {
#line 519 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                                                  {
#line 520 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 521 "const_prop.m"
                                                    {
#line 521 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                                                    }
#line 511 "const_prop.m"
                                                    {
#line 511 "const_prop.m"
                                                      MR_Word base;
#line 511 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 511 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 511 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 511 "const_prop.m"
                                                    }
#line 511 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 511 "const_prop.m"
                                                  }
#line 511 "const_prop.m"
                                              }
#line 519 "const_prop.m"
                                          }
#line 519 "const_prop.m"
                                      }
#line 519 "const_prop.m"
                                  }
#line 511 "const_prop.m"
                              }
#line 511 "const_prop.m"
                          }
#line 518 "const_prop.m"
                      }
#line 518 "const_prop.m"
                  }
#line 518 "const_prop.m"
              }
#line 511 "const_prop.m"
          }
#line 511 "const_prop.m"
      }
#line 511 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 511 "const_prop.m"
  }
#line 506 "const_prop.m"
}

#line 461 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 461 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 461 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 461 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 461 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 461 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 461 "const_prop.m"
{
#line 466 "const_prop.m"
  {
#line 466 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 466 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_16;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_127_127;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_130_130;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_133_133;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_136_136;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_139_139;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_140_140;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_141_141;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_142_142;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_143_143;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_144_144;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_145_145;
#line 466 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_146_146;
#line 466 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_147_147;
#line 466 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_148_148;
#line 484 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_128_128;
#line 484 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_129_129;
#line 485 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_131_131;
#line 485 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_132_132;
#line 484 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_134_134;
#line 484 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_135_135;
#line 485 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_137_137;
#line 485 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_138_138;

#line 466 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
      {
#line 484 "const_prop.m"
        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 484 "const_prop.m"
        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 484 "const_prop.m"
        transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 485 "const_prop.m"
        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 485 "const_prop.m"
        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 485 "const_prop.m"
        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 484 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 484 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 484 "const_prop.m"
          {
#line 484 "const_prop.m"
            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 484 "const_prop.m"
            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 484 "const_prop.m"
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 485 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 485 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 485 "const_prop.m"
              {
#line 485 "const_prop.m"
                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 485 "const_prop.m"
                transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 2)));
#line 485 "const_prop.m"
                transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 3)));
#line 484 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 484 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 484 "const_prop.m"
                  {
#line 484 "const_prop.m"
                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 484 "const_prop.m"
                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 485 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 1)));
#line 485 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 485 "const_prop.m"
                      {
#line 485 "const_prop.m"
                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)));
#line 485 "const_prop.m"
                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 484 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
                          {
#line 484 "const_prop.m"
                            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 484 "const_prop.m"
                            transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 485 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
                              {
#line 485 "const_prop.m"
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)));
#line 485 "const_prop.m"
                                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 484 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
                                  {
#line 484 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 484 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 484 "const_prop.m"
                                      {
#line 484 "const_prop.m"
                                        transform_hlds__const_prop__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 485 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_145_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
                                          {
#line 485 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 485 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 485 "const_prop.m"
                                              {
#line 485 "const_prop.m"
                                                transform_hlds__const_prop__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "*") == 0))
#line 482 "const_prop.m"
                                                  {
#line 486 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 487 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 * transform_hlds__const_prop__V_148_148);
#line 482 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 482 "const_prop.m"
                                                  }
#line 474 "const_prop.m"
                                                else
#line 474 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "+") == 0))
#line 468 "const_prop.m"
                                                  {
#line 472 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 473 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 + transform_hlds__const_prop__V_148_148);
#line 468 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 468 "const_prop.m"
                                                  }
#line 474 "const_prop.m"
                                                else
#line 474 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "-") == 0))
#line 475 "const_prop.m"
                                                  {
#line 479 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 480 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 - transform_hlds__const_prop__V_148_148);
#line 475 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 475 "const_prop.m"
                                                  }
#line 474 "const_prop.m"
                                                else
#line 474 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "/") == 0))
#line 489 "const_prop.m"
                                                  {
#line 493 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 494 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 494 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 489 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 489 "const_prop.m"
                                                      {
#line 495 "const_prop.m"
                                                        {
#line 495 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__V_147_147, transform_hlds__const_prop__V_148_148);
                                                        }
#line 495 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 489 "const_prop.m"
                                                      }
#line 489 "const_prop.m"
                                                  }
#line 474 "const_prop.m"
                                                else
#line 474 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient") == 0))
#line 497 "const_prop.m"
                                                  {
#line 501 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 502 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 502 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 497 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 497 "const_prop.m"
                                                      {
#line 503 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 / transform_hlds__const_prop__V_148_148);
#line 503 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 497 "const_prop.m"
                                                      }
#line 497 "const_prop.m"
                                                  }
#line 474 "const_prop.m"
                                                else
#line 474 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 466 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 466 "const_prop.m"
                                                  {
#line 466 "const_prop.m"
                                                    {
#line 466 "const_prop.m"
                                                      MR_Word base;
#line 466 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 466 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 466 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_16);
#line 466 "const_prop.m"
                                                    }
#line 466 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 466 "const_prop.m"
                                                  }
#line 485 "const_prop.m"
                                              }
#line 466 "const_prop.m"
                                          }
#line 484 "const_prop.m"
                                      }
#line 466 "const_prop.m"
                                  }
#line 466 "const_prop.m"
                              }
#line 466 "const_prop.m"
                          }
#line 485 "const_prop.m"
                      }
#line 484 "const_prop.m"
                  }
#line 485 "const_prop.m"
              }
#line 484 "const_prop.m"
          }
#line 466 "const_prop.m"
      }
#line 466 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 466 "const_prop.m"
  }
#line 461 "const_prop.m"
}

#line 294 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 294 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 294 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 294 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 294 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 294 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 294 "const_prop.m"
{
#line 299 "const_prop.m"
  {
#line 299 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 299 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_16;

#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "*") == 0))
#line 364 "const_prop.m"
      {
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_252_252;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_253_253;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_254_254;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_255_255;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_256_256;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_257_257;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_258_258;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_259_259;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_260_260;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_261_261;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_262_262;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_263_263;
#line 364 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_387;
#line 364 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_388;
#line 366 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_449_449;
#line 366 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_450_450;
#line 366 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_56_56;
#line 366 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 367 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_451_451;
#line 367 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_452_452;
#line 367 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_58_58;
#line 367 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_59_59;

#line 365 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 364 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
          {
#line 366 "const_prop.m"
            transform_hlds__const_prop__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 366 "const_prop.m"
            transform_hlds__const_prop__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 366 "const_prop.m"
            transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 366 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 366 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 366 "const_prop.m"
              {
#line 366 "const_prop.m"
                transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 366 "const_prop.m"
                transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 2)));
#line 366 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 3)));
#line 366 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_253_253)) == (MR_mktag((MR_Integer) 1)));
#line 366 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 366 "const_prop.m"
                  {
#line 366 "const_prop.m"
                    transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 366 "const_prop.m"
                    transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 366 "const_prop.m"
                    transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)));
#line 366 "const_prop.m"
                    transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 366 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_255_255)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_255_255, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 366 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 366 "const_prop.m"
                      {
#line 366 "const_prop.m"
                        transform_hlds__const_prop__XVal_387 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_255_255, (MR_Integer) 1)));
#line 366 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_256_256 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                          {
#line 366 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_257_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                              {
#line 367 "const_prop.m"
                                transform_hlds__const_prop__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 367 "const_prop.m"
                                transform_hlds__const_prop__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 367 "const_prop.m"
                                transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 367 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_258_258)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 367 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                  {
#line 367 "const_prop.m"
                                    transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 1)));
#line 367 "const_prop.m"
                                    transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 2)));
#line 367 "const_prop.m"
                                    transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 3)));
#line 367 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 367 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                      {
#line 367 "const_prop.m"
                                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_259_259, (MR_Integer) 0)));
#line 367 "const_prop.m"
                                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_259_259, (MR_Integer) 1)));
#line 367 "const_prop.m"
                                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)));
#line 367 "const_prop.m"
                                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 367 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_261_261)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_261_261, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 367 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                          {
#line 367 "const_prop.m"
                                            transform_hlds__const_prop__YVal_388 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_261_261, (MR_Integer) 1)));
#line 367 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                                              {
#line 367 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                                                  {
#line 368 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 369 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_387 * transform_hlds__const_prop__YVal_388);
#line 369 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 364 "const_prop.m"
                                                  }
#line 364 "const_prop.m"
                                              }
#line 367 "const_prop.m"
                                          }
#line 367 "const_prop.m"
                                      }
#line 367 "const_prop.m"
                                  }
#line 364 "const_prop.m"
                              }
#line 364 "const_prop.m"
                          }
#line 366 "const_prop.m"
                      }
#line 366 "const_prop.m"
                  }
#line 366 "const_prop.m"
              }
#line 364 "const_prop.m"
          }
#line 364 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "+") == 0))
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0))
#line 308 "const_prop.m"
        {
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_349_349;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_350_350;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_351_351;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_352_352;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_353_353;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_354_354;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_355_355;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_356_356;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_357_357;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_358_358;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_359_359;
#line 308 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_372;
#line 308 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_373;
#line 310 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 310 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 310 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_23_23;
#line 310 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_24_24;
#line 311 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_419_419;
#line 311 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_420_420;
#line 311 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_25_25;
#line 311 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_26_26;

#line 310 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_348_348)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 310 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 310 "const_prop.m"
            {
#line 310 "const_prop.m"
              transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 1)));
#line 310 "const_prop.m"
              transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 2)));
#line 310 "const_prop.m"
              transform_hlds__const_prop__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 3)));
#line 310 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_349_349)) == (MR_mktag((MR_Integer) 1)));
#line 310 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 310 "const_prop.m"
                {
#line 310 "const_prop.m"
                  transform_hlds__const_prop__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_349_349, (MR_Integer) 0)));
#line 310 "const_prop.m"
                  transform_hlds__const_prop__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_349_349, (MR_Integer) 1)));
#line 310 "const_prop.m"
                  transform_hlds__const_prop__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_350_350, (MR_Integer) 0)));
#line 310 "const_prop.m"
                  transform_hlds__const_prop__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_350_350, (MR_Integer) 1)));
#line 310 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_351_351)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_351_351, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 310 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 310 "const_prop.m"
                    {
#line 310 "const_prop.m"
                      transform_hlds__const_prop__XVal_372 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_351_351, (MR_Integer) 1)));
#line 310 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                        {
#line 310 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_353_353 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                            {
#line 311 "const_prop.m"
                              transform_hlds__const_prop__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 311 "const_prop.m"
                              transform_hlds__const_prop__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 311 "const_prop.m"
                              transform_hlds__const_prop__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 311 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_354_354)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 311 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 311 "const_prop.m"
                                {
#line 311 "const_prop.m"
                                  transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 1)));
#line 311 "const_prop.m"
                                  transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 2)));
#line 311 "const_prop.m"
                                  transform_hlds__const_prop__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 3)));
#line 311 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_355_355)) == (MR_mktag((MR_Integer) 1)));
#line 311 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 311 "const_prop.m"
                                    {
#line 311 "const_prop.m"
                                      transform_hlds__const_prop__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_355_355, (MR_Integer) 0)));
#line 311 "const_prop.m"
                                      transform_hlds__const_prop__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_355_355, (MR_Integer) 1)));
#line 311 "const_prop.m"
                                      transform_hlds__const_prop__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_356_356, (MR_Integer) 0)));
#line 311 "const_prop.m"
                                      transform_hlds__const_prop__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_356_356, (MR_Integer) 1)));
#line 311 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_357_357)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_357_357, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 311 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 311 "const_prop.m"
                                        {
#line 311 "const_prop.m"
                                          transform_hlds__const_prop__YVal_373 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_357_357, (MR_Integer) 1)));
#line 311 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_358_358 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                                            {
#line 311 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_359_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                                                {
#line 312 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 313 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_372 + transform_hlds__const_prop__YVal_373);
#line 313 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 308 "const_prop.m"
                                                }
#line 308 "const_prop.m"
                                            }
#line 311 "const_prop.m"
                                        }
#line 311 "const_prop.m"
                                    }
#line 311 "const_prop.m"
                                }
#line 308 "const_prop.m"
                            }
#line 308 "const_prop.m"
                        }
#line 310 "const_prop.m"
                    }
#line 310 "const_prop.m"
                }
#line 310 "const_prop.m"
            }
#line 308 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 1))
#line 315 "const_prop.m"
        {
#line 315 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_31;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_337_337;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_338_338;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_339_339;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_340_340;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_341_341;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_342_342;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_343_343;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_344_344;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_345_345;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_346_346;
#line 315 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_347_347;
#line 315 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_374;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_27_27;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_28_28;
#line 318 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_423_423;
#line 318 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_424_424;
#line 318 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_29_29;
#line 318 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_30_30;

#line 317 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_336_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 317 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
            {
#line 317 "const_prop.m"
              transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 1)));
#line 317 "const_prop.m"
              transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 2)));
#line 317 "const_prop.m"
              transform_hlds__const_prop__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 3)));
#line 317 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_337_337)) == (MR_mktag((MR_Integer) 1)));
#line 317 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
                {
#line 317 "const_prop.m"
                  transform_hlds__const_prop__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_337_337, (MR_Integer) 0)));
#line 317 "const_prop.m"
                  transform_hlds__const_prop__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_337_337, (MR_Integer) 1)));
#line 317 "const_prop.m"
                  transform_hlds__const_prop__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_338_338, (MR_Integer) 0)));
#line 317 "const_prop.m"
                  transform_hlds__const_prop__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_338_338, (MR_Integer) 1)));
#line 317 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_339_339)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_339_339, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 317 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
                    {
#line 317 "const_prop.m"
                      transform_hlds__const_prop__YVal_374 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_339_339, (MR_Integer) 1)));
#line 317 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_340_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                        {
#line 317 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                            {
#line 318 "const_prop.m"
                              transform_hlds__const_prop__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 318 "const_prop.m"
                              transform_hlds__const_prop__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 318 "const_prop.m"
                              transform_hlds__const_prop__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 318 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_342_342)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 318 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 318 "const_prop.m"
                                {
#line 318 "const_prop.m"
                                  transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 1)));
#line 318 "const_prop.m"
                                  transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 2)));
#line 318 "const_prop.m"
                                  transform_hlds__const_prop__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 3)));
#line 318 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_343_343)) == (MR_mktag((MR_Integer) 1)));
#line 318 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 318 "const_prop.m"
                                    {
#line 318 "const_prop.m"
                                      transform_hlds__const_prop__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_343_343, (MR_Integer) 0)));
#line 318 "const_prop.m"
                                      transform_hlds__const_prop__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_343_343, (MR_Integer) 1)));
#line 318 "const_prop.m"
                                      transform_hlds__const_prop__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_344_344, (MR_Integer) 0)));
#line 318 "const_prop.m"
                                      transform_hlds__const_prop__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_344_344, (MR_Integer) 1)));
#line 318 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_345_345)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_345_345, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 318 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 318 "const_prop.m"
                                        {
#line 318 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_345_345, (MR_Integer) 1)));
#line 318 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                            {
#line 318 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_347_347 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                                {
#line 319 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 320 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__ZVal_31 - transform_hlds__const_prop__YVal_374);
#line 320 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 315 "const_prop.m"
                                                }
#line 315 "const_prop.m"
                                            }
#line 318 "const_prop.m"
                                        }
#line 318 "const_prop.m"
                                    }
#line 318 "const_prop.m"
                                }
#line 315 "const_prop.m"
                            }
#line 315 "const_prop.m"
                        }
#line 317 "const_prop.m"
                    }
#line 317 "const_prop.m"
                }
#line 317 "const_prop.m"
            }
#line 315 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 2))
#line 322 "const_prop.m"
        {
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_325_325;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_326_326;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_327_327;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_328_328;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_329_329;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_330_330;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_331_331;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_332_332;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_333_333;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_334_334;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_335_335;
#line 322 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_375;
#line 322 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_376;
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_32_32;
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_33_33;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_427_427;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_428_428;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_34_34;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_35_35;

#line 324 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_324_324)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 324 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
            {
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 1)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 2)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 3)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_325_325)) == (MR_mktag((MR_Integer) 1)));
#line 324 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                {
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_325_325, (MR_Integer) 0)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_325_325, (MR_Integer) 1)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_326_326, (MR_Integer) 0)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_326_326, (MR_Integer) 1)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_327_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 324 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                    {
#line 324 "const_prop.m"
                      transform_hlds__const_prop__XVal_375 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 1)));
#line 324 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_328_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                        {
#line 324 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                            {
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_330_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 325 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                {
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 2)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 3)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_331_331)) == (MR_mktag((MR_Integer) 1)));
#line 325 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                    {
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_331_331, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_331_331, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_332_332, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_332_332, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_333_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 325 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                        {
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_376 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                            {
#line 325 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_335_335 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                {
#line 326 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 327 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__ZVal_376 - transform_hlds__const_prop__XVal_375);
#line 327 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 322 "const_prop.m"
                                                }
#line 322 "const_prop.m"
                                            }
#line 325 "const_prop.m"
                                        }
#line 325 "const_prop.m"
                                    }
#line 325 "const_prop.m"
                                }
#line 322 "const_prop.m"
                            }
#line 322 "const_prop.m"
                        }
#line 324 "const_prop.m"
                    }
#line 324 "const_prop.m"
                }
#line 324 "const_prop.m"
            }
#line 322 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "-") == 0))
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0))
#line 336 "const_prop.m"
        {
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_301_301;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_302_302;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_303_303;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_304_304;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_305_305;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_306_306;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_307_307;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_308_308;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_309_309;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_310_310;
#line 336 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_311_311;
#line 336 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_379;
#line 336 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_380;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_40_40;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_41_41;
#line 339 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_435_435;
#line 339 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_436_436;
#line 339 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_42_42;
#line 339 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_43_43;

#line 338 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_300_300)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 338 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
            {
#line 338 "const_prop.m"
              transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 1)));
#line 338 "const_prop.m"
              transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 2)));
#line 338 "const_prop.m"
              transform_hlds__const_prop__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 3)));
#line 338 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_301_301)) == (MR_mktag((MR_Integer) 1)));
#line 338 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                {
#line 338 "const_prop.m"
                  transform_hlds__const_prop__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_301_301, (MR_Integer) 0)));
#line 338 "const_prop.m"
                  transform_hlds__const_prop__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_301_301, (MR_Integer) 1)));
#line 338 "const_prop.m"
                  transform_hlds__const_prop__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_302_302, (MR_Integer) 0)));
#line 338 "const_prop.m"
                  transform_hlds__const_prop__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_302_302, (MR_Integer) 1)));
#line 338 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 338 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                    {
#line 338 "const_prop.m"
                      transform_hlds__const_prop__XVal_379 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_303_303, (MR_Integer) 1)));
#line 338 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_304_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                        {
#line 338 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_305_305 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                            {
#line 339 "const_prop.m"
                              transform_hlds__const_prop__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 339 "const_prop.m"
                              transform_hlds__const_prop__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 339 "const_prop.m"
                              transform_hlds__const_prop__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 339 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_306_306)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 339 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 339 "const_prop.m"
                                {
#line 339 "const_prop.m"
                                  transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 1)));
#line 339 "const_prop.m"
                                  transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 2)));
#line 339 "const_prop.m"
                                  transform_hlds__const_prop__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 3)));
#line 339 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_307_307)) == (MR_mktag((MR_Integer) 1)));
#line 339 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 339 "const_prop.m"
                                    {
#line 339 "const_prop.m"
                                      transform_hlds__const_prop__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_307_307, (MR_Integer) 0)));
#line 339 "const_prop.m"
                                      transform_hlds__const_prop__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_307_307, (MR_Integer) 1)));
#line 339 "const_prop.m"
                                      transform_hlds__const_prop__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_308_308, (MR_Integer) 0)));
#line 339 "const_prop.m"
                                      transform_hlds__const_prop__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_308_308, (MR_Integer) 1)));
#line 339 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_309_309)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_309_309, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 339 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 339 "const_prop.m"
                                        {
#line 339 "const_prop.m"
                                          transform_hlds__const_prop__YVal_380 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_309_309, (MR_Integer) 1)));
#line 339 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_310_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                                            {
#line 339 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_311_311 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                                                {
#line 340 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 341 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_379 - transform_hlds__const_prop__YVal_380);
#line 341 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 336 "const_prop.m"
                                                }
#line 336 "const_prop.m"
                                            }
#line 339 "const_prop.m"
                                        }
#line 339 "const_prop.m"
                                    }
#line 339 "const_prop.m"
                                }
#line 336 "const_prop.m"
                            }
#line 336 "const_prop.m"
                        }
#line 338 "const_prop.m"
                    }
#line 338 "const_prop.m"
                }
#line 338 "const_prop.m"
            }
#line 336 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 1))
#line 343 "const_prop.m"
        {
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_289_289;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_290_290;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_291_291;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_292_292;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_293_293;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_294_294;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_295_295;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_296_296;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_297_297;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_298_298;
#line 343 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_299_299;
#line 343 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_381;
#line 343 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_382;
#line 345 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 345 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 345 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_44_44;
#line 345 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_45_45;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_439_439;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_440_440;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_46_46;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_47_47;

#line 345 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_288_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 345 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 345 "const_prop.m"
            {
#line 345 "const_prop.m"
              transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 1)));
#line 345 "const_prop.m"
              transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 2)));
#line 345 "const_prop.m"
              transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 3)));
#line 345 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 1)));
#line 345 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 345 "const_prop.m"
                {
#line 345 "const_prop.m"
                  transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)));
#line 345 "const_prop.m"
                  transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 345 "const_prop.m"
                  transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_290_290, (MR_Integer) 0)));
#line 345 "const_prop.m"
                  transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_290_290, (MR_Integer) 1)));
#line 345 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 345 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 345 "const_prop.m"
                    {
#line 345 "const_prop.m"
                      transform_hlds__const_prop__YVal_381 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 345 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                        {
#line 345 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                            {
#line 346 "const_prop.m"
                              transform_hlds__const_prop__V_439_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 346 "const_prop.m"
                              transform_hlds__const_prop__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 346 "const_prop.m"
                              transform_hlds__const_prop__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 346 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_294_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 346 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                                {
#line 346 "const_prop.m"
                                  transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 1)));
#line 346 "const_prop.m"
                                  transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 2)));
#line 346 "const_prop.m"
                                  transform_hlds__const_prop__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 3)));
#line 346 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_295_295)) == (MR_mktag((MR_Integer) 1)));
#line 346 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                                    {
#line 346 "const_prop.m"
                                      transform_hlds__const_prop__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_295_295, (MR_Integer) 0)));
#line 346 "const_prop.m"
                                      transform_hlds__const_prop__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_295_295, (MR_Integer) 1)));
#line 346 "const_prop.m"
                                      transform_hlds__const_prop__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_296_296, (MR_Integer) 0)));
#line 346 "const_prop.m"
                                      transform_hlds__const_prop__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_296_296, (MR_Integer) 1)));
#line 346 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_297_297)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_297_297, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 346 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                                        {
#line 346 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_382 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_297_297, (MR_Integer) 1)));
#line 346 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_298_298 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                            {
#line 346 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_299_299 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 343 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                                {
#line 347 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 348 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__YVal_381 + transform_hlds__const_prop__ZVal_382);
#line 348 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 343 "const_prop.m"
                                                }
#line 343 "const_prop.m"
                                            }
#line 346 "const_prop.m"
                                        }
#line 346 "const_prop.m"
                                    }
#line 346 "const_prop.m"
                                }
#line 343 "const_prop.m"
                            }
#line 343 "const_prop.m"
                        }
#line 345 "const_prop.m"
                    }
#line 345 "const_prop.m"
                }
#line 345 "const_prop.m"
            }
#line 343 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 2))
#line 350 "const_prop.m"
        {
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_277_277;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_278_278;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_279_279;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_280_280;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_281_281;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_282_282;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_283_283;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_284_284;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_285_285;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_286_286;
#line 350 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_287_287;
#line 350 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_383;
#line 350 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_384;
#line 352 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 352 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_442_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 352 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_48_48;
#line 352 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_49_49;
#line 353 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_443_443;
#line 353 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_444_444;
#line 353 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_50_50;
#line 353 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_51_51;

#line 352 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_276_276)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 352 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
            {
#line 352 "const_prop.m"
              transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 1)));
#line 352 "const_prop.m"
              transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 2)));
#line 352 "const_prop.m"
              transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 3)));
#line 352 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_277_277)) == (MR_mktag((MR_Integer) 1)));
#line 352 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
                {
#line 352 "const_prop.m"
                  transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_277_277, (MR_Integer) 0)));
#line 352 "const_prop.m"
                  transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_277_277, (MR_Integer) 1)));
#line 352 "const_prop.m"
                  transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_278_278, (MR_Integer) 0)));
#line 352 "const_prop.m"
                  transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_278_278, (MR_Integer) 1)));
#line 352 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_279_279)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 352 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
                    {
#line 352 "const_prop.m"
                      transform_hlds__const_prop__XVal_383 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 352 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                        {
#line 352 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                            {
#line 353 "const_prop.m"
                              transform_hlds__const_prop__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 353 "const_prop.m"
                              transform_hlds__const_prop__V_444_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 353 "const_prop.m"
                              transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 353 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_282_282)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 353 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 353 "const_prop.m"
                                {
#line 353 "const_prop.m"
                                  transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 1)));
#line 353 "const_prop.m"
                                  transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 2)));
#line 353 "const_prop.m"
                                  transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 3)));
#line 353 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_283_283)) == (MR_mktag((MR_Integer) 1)));
#line 353 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 353 "const_prop.m"
                                    {
#line 353 "const_prop.m"
                                      transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 353 "const_prop.m"
                                      transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 353 "const_prop.m"
                                      transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_284_284, (MR_Integer) 0)));
#line 353 "const_prop.m"
                                      transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_284_284, (MR_Integer) 1)));
#line 353 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_285_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 353 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 353 "const_prop.m"
                                        {
#line 353 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_384 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 353 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                                            {
#line 353 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_287_287 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                                                {
#line 354 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 355 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_383 - transform_hlds__const_prop__ZVal_384);
#line 355 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 350 "const_prop.m"
                                                }
#line 350 "const_prop.m"
                                            }
#line 353 "const_prop.m"
                                        }
#line 353 "const_prop.m"
                                    }
#line 353 "const_prop.m"
                                }
#line 350 "const_prop.m"
                            }
#line 350 "const_prop.m"
                        }
#line 352 "const_prop.m"
                    }
#line 352 "const_prop.m"
                }
#line 352 "const_prop.m"
            }
#line 350 "const_prop.m"
        }
#line 307 "const_prop.m"
      else
#line 307 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "//") == 0))
#line 379 "const_prop.m"
      {
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_228_228;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_229_229;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_230_230;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_231_231;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_232_232;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_233_233;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_234_234;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_235_235;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_236_236;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_237_237;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_238_238;
#line 379 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_239_239;
#line 379 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_391;
#line 379 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_392;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_457_457;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_458_458;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_64_64;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_65_65;
#line 382 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_459_459;
#line 382 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_460_460;
#line 382 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_66_66;
#line 382 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;

#line 380 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 379 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
          {
#line 381 "const_prop.m"
            transform_hlds__const_prop__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 381 "const_prop.m"
            transform_hlds__const_prop__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 381 "const_prop.m"
            transform_hlds__const_prop__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 381 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_228_228)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 381 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
              {
#line 381 "const_prop.m"
                transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 1)));
#line 381 "const_prop.m"
                transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 2)));
#line 381 "const_prop.m"
                transform_hlds__const_prop__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 3)));
#line 381 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_229_229)) == (MR_mktag((MR_Integer) 1)));
#line 381 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
                  {
#line 381 "const_prop.m"
                    transform_hlds__const_prop__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_229_229, (MR_Integer) 0)));
#line 381 "const_prop.m"
                    transform_hlds__const_prop__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_229_229, (MR_Integer) 1)));
#line 381 "const_prop.m"
                    transform_hlds__const_prop__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_230_230, (MR_Integer) 0)));
#line 381 "const_prop.m"
                    transform_hlds__const_prop__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_230_230, (MR_Integer) 1)));
#line 381 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_231_231)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_231_231, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 381 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
                      {
#line 381 "const_prop.m"
                        transform_hlds__const_prop__XVal_391 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_231_231, (MR_Integer) 1)));
#line 381 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_232_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                          {
#line 381 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                              {
#line 382 "const_prop.m"
                                transform_hlds__const_prop__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 382 "const_prop.m"
                                transform_hlds__const_prop__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 382 "const_prop.m"
                                transform_hlds__const_prop__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 382 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_234_234)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 382 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 382 "const_prop.m"
                                  {
#line 382 "const_prop.m"
                                    transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 1)));
#line 382 "const_prop.m"
                                    transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 2)));
#line 382 "const_prop.m"
                                    transform_hlds__const_prop__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 3)));
#line 382 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_235_235)) == (MR_mktag((MR_Integer) 1)));
#line 382 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 382 "const_prop.m"
                                      {
#line 382 "const_prop.m"
                                        transform_hlds__const_prop__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_235_235, (MR_Integer) 0)));
#line 382 "const_prop.m"
                                        transform_hlds__const_prop__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_235_235, (MR_Integer) 1)));
#line 382 "const_prop.m"
                                        transform_hlds__const_prop__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_236_236, (MR_Integer) 0)));
#line 382 "const_prop.m"
                                        transform_hlds__const_prop__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_236_236, (MR_Integer) 1)));
#line 382 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_237_237)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_237_237, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 382 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 382 "const_prop.m"
                                          {
#line 382 "const_prop.m"
                                            transform_hlds__const_prop__YVal_392 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_237_237, (MR_Integer) 1)));
#line 382 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_238_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                              {
#line 382 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_239_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                                  {
#line 383 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_392 == (MR_Integer) 0);
#line 383 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 379 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                                      {
#line 384 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 385 "const_prop.m"
                                                        {
#line 385 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_47_47_2_f_0(transform_hlds__const_prop__XVal_391, transform_hlds__const_prop__YVal_392);
                                                        }
#line 385 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 379 "const_prop.m"
                                                      }
#line 379 "const_prop.m"
                                                  }
#line 379 "const_prop.m"
                                              }
#line 382 "const_prop.m"
                                          }
#line 382 "const_prop.m"
                                      }
#line 382 "const_prop.m"
                                  }
#line 379 "const_prop.m"
                              }
#line 379 "const_prop.m"
                          }
#line 381 "const_prop.m"
                      }
#line 381 "const_prop.m"
                  }
#line 381 "const_prop.m"
              }
#line 379 "const_prop.m"
          }
#line 379 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "/\\") == 0))
#line 439 "const_prop.m"
      {
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_132_132;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_133_133;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_134_134;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_135_135;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_136_136;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_137_137;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_138_138;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_139_139;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_140_140;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_141_141;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_142_142;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_143_143;
#line 439 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_407;
#line 439 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_408;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_489_489;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_490_490;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_96_96;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_97_97;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_491_491;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_492_492;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_98_98;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_99_99;

#line 440 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 439 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
          {
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_132_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 441 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
              {
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 1)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 2)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 3)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 441 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
                  {
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_134_134, (MR_Integer) 0)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_134_134, (MR_Integer) 1)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_135_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_135_135, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 441 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
                      {
#line 441 "const_prop.m"
                        transform_hlds__const_prop__XVal_407 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_135_135, (MR_Integer) 1)));
#line 441 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_136_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                          {
#line 441 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                              {
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_138_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 442 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                  {
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 2)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 3)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_139_139)) == (MR_mktag((MR_Integer) 1)));
#line 442 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                      {
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_139_139, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_139_139, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_141_141)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_141_141, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 442 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                          {
#line 442 "const_prop.m"
                                            transform_hlds__const_prop__YVal_408 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_141_141, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                              {
#line 442 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                                  {
#line 443 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 444 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_407 & transform_hlds__const_prop__YVal_408);
#line 444 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 439 "const_prop.m"
                                                  }
#line 439 "const_prop.m"
                                              }
#line 442 "const_prop.m"
                                          }
#line 442 "const_prop.m"
                                      }
#line 442 "const_prop.m"
                                  }
#line 439 "const_prop.m"
                              }
#line 439 "const_prop.m"
                          }
#line 441 "const_prop.m"
                      }
#line 441 "const_prop.m"
                  }
#line 441 "const_prop.m"
              }
#line 439 "const_prop.m"
          }
#line 439 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "<<") == 0))
#line 418 "const_prop.m"
      {
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_168_168;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_169_169;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_170_170;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_171_171;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_172_172;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_173_173;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_174_174;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_175_175;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_176_176;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_177_177;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_178_178;
#line 418 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_179_179;
#line 418 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_401;
#line 418 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_402;
#line 420 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_477_477;
#line 420 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_478_478;
#line 420 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_84_84;
#line 420 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_85_85;
#line 421 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_479_479;
#line 421 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_480_480;
#line 421 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_86_86;
#line 421 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_87_87;

#line 419 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 418 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
          {
#line 420 "const_prop.m"
            transform_hlds__const_prop__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 420 "const_prop.m"
            transform_hlds__const_prop__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 420 "const_prop.m"
            transform_hlds__const_prop__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 420 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_168_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 420 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 420 "const_prop.m"
              {
#line 420 "const_prop.m"
                transform_hlds__const_prop__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 1)));
#line 420 "const_prop.m"
                transform_hlds__const_prop__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 2)));
#line 420 "const_prop.m"
                transform_hlds__const_prop__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 3)));
#line 420 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_169_169)) == (MR_mktag((MR_Integer) 1)));
#line 420 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 420 "const_prop.m"
                  {
#line 420 "const_prop.m"
                    transform_hlds__const_prop__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_169_169, (MR_Integer) 0)));
#line 420 "const_prop.m"
                    transform_hlds__const_prop__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_169_169, (MR_Integer) 1)));
#line 420 "const_prop.m"
                    transform_hlds__const_prop__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_170_170, (MR_Integer) 0)));
#line 420 "const_prop.m"
                    transform_hlds__const_prop__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_170_170, (MR_Integer) 1)));
#line 420 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_171_171)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_171_171, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 420 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 420 "const_prop.m"
                      {
#line 420 "const_prop.m"
                        transform_hlds__const_prop__XVal_401 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_171_171, (MR_Integer) 1)));
#line 420 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_172_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                          {
#line 420 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                              {
#line 421 "const_prop.m"
                                transform_hlds__const_prop__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 421 "const_prop.m"
                                transform_hlds__const_prop__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 421 "const_prop.m"
                                transform_hlds__const_prop__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 421 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_174_174)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 421 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 421 "const_prop.m"
                                  {
#line 421 "const_prop.m"
                                    transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 1)));
#line 421 "const_prop.m"
                                    transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 2)));
#line 421 "const_prop.m"
                                    transform_hlds__const_prop__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 3)));
#line 421 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_175_175)) == (MR_mktag((MR_Integer) 1)));
#line 421 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 421 "const_prop.m"
                                      {
#line 421 "const_prop.m"
                                        transform_hlds__const_prop__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_175_175, (MR_Integer) 0)));
#line 421 "const_prop.m"
                                        transform_hlds__const_prop__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_175_175, (MR_Integer) 1)));
#line 421 "const_prop.m"
                                        transform_hlds__const_prop__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_176_176, (MR_Integer) 0)));
#line 421 "const_prop.m"
                                        transform_hlds__const_prop__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_176_176, (MR_Integer) 1)));
#line 421 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_177_177)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_177_177, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 421 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 421 "const_prop.m"
                                          {
#line 421 "const_prop.m"
                                            transform_hlds__const_prop__YVal_402 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_177_177, (MR_Integer) 1)));
#line 421 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                                              {
#line 421 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                                                  {
#line 422 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 423 "const_prop.m"
                                                    {
#line 423 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_60_60_2_f_0(transform_hlds__const_prop__XVal_401, transform_hlds__const_prop__YVal_402);
                                                    }
#line 423 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 418 "const_prop.m"
                                                  }
#line 418 "const_prop.m"
                                              }
#line 421 "const_prop.m"
                                          }
#line 421 "const_prop.m"
                                      }
#line 421 "const_prop.m"
                                  }
#line 418 "const_prop.m"
                              }
#line 418 "const_prop.m"
                          }
#line 420 "const_prop.m"
                      }
#line 420 "const_prop.m"
                  }
#line 420 "const_prop.m"
              }
#line 418 "const_prop.m"
          }
#line 418 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) ">>") == 0))
#line 432 "const_prop.m"
      {
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_144_144;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_145_145;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_146_146;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_147_147;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_148_148;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_149_149;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_150_150;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_151_151;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_152_152;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_153_153;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_154_154;
#line 432 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_155_155;
#line 432 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_405;
#line 432 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_406;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_485_485;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_486_486;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_92_92;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_93_93;
#line 435 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_487_487;
#line 435 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_488_488;
#line 435 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_94_94;
#line 435 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_95_95;

#line 433 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 432 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
          {
#line 434 "const_prop.m"
            transform_hlds__const_prop__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 434 "const_prop.m"
            transform_hlds__const_prop__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 434 "const_prop.m"
            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 434 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 434 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
              {
#line 434 "const_prop.m"
                transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 434 "const_prop.m"
                transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 2)));
#line 434 "const_prop.m"
                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 3)));
#line 434 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_145_145)) == (MR_mktag((MR_Integer) 1)));
#line 434 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                  {
#line 434 "const_prop.m"
                    transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_145_145, (MR_Integer) 0)));
#line 434 "const_prop.m"
                    transform_hlds__const_prop__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_145_145, (MR_Integer) 1)));
#line 434 "const_prop.m"
                    transform_hlds__const_prop__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)));
#line 434 "const_prop.m"
                    transform_hlds__const_prop__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 434 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_147_147)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_147_147, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 434 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                      {
#line 434 "const_prop.m"
                        transform_hlds__const_prop__XVal_405 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_147_147, (MR_Integer) 1)));
#line 434 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                          {
#line 434 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                              {
#line 435 "const_prop.m"
                                transform_hlds__const_prop__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 435 "const_prop.m"
                                transform_hlds__const_prop__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 435 "const_prop.m"
                                transform_hlds__const_prop__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 435 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_150_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 435 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 435 "const_prop.m"
                                  {
#line 435 "const_prop.m"
                                    transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 1)));
#line 435 "const_prop.m"
                                    transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 2)));
#line 435 "const_prop.m"
                                    transform_hlds__const_prop__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 3)));
#line 435 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_151_151)) == (MR_mktag((MR_Integer) 1)));
#line 435 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 435 "const_prop.m"
                                      {
#line 435 "const_prop.m"
                                        transform_hlds__const_prop__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_151_151, (MR_Integer) 0)));
#line 435 "const_prop.m"
                                        transform_hlds__const_prop__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_151_151, (MR_Integer) 1)));
#line 435 "const_prop.m"
                                        transform_hlds__const_prop__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_152_152, (MR_Integer) 0)));
#line 435 "const_prop.m"
                                        transform_hlds__const_prop__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_152_152, (MR_Integer) 1)));
#line 435 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_153_153)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_153_153, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 435 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 435 "const_prop.m"
                                          {
#line 435 "const_prop.m"
                                            transform_hlds__const_prop__YVal_406 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_153_153, (MR_Integer) 1)));
#line 435 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_154_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                                              {
#line 435 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                                                  {
#line 436 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 437 "const_prop.m"
                                                    {
#line 437 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_62_62_2_f_0(transform_hlds__const_prop__XVal_405, transform_hlds__const_prop__YVal_406);
                                                    }
#line 437 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 432 "const_prop.m"
                                                  }
#line 432 "const_prop.m"
                                              }
#line 435 "const_prop.m"
                                          }
#line 435 "const_prop.m"
                                      }
#line 435 "const_prop.m"
                                  }
#line 432 "const_prop.m"
                              }
#line 432 "const_prop.m"
                          }
#line 434 "const_prop.m"
                      }
#line 434 "const_prop.m"
                  }
#line 434 "const_prop.m"
              }
#line 432 "const_prop.m"
          }
#line 432 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "\\/") == 0))
#line 446 "const_prop.m"
      {
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_120_120;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_121_121;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_122_122;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_123_123;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_124_124;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_125_125;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_126_126;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_127_127;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_128_128;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_129_129;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_130_130;
#line 446 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_131_131;
#line 446 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_409;
#line 446 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_410;
#line 448 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_493_493;
#line 448 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_494_494;
#line 448 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_100_100;
#line 448 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_101_101;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_495_495;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_496_496;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_102_102;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_103_103;

#line 447 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 446 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
          {
#line 448 "const_prop.m"
            transform_hlds__const_prop__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 448 "const_prop.m"
            transform_hlds__const_prop__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 448 "const_prop.m"
            transform_hlds__const_prop__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 448 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_120_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 448 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 448 "const_prop.m"
              {
#line 448 "const_prop.m"
                transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 1)));
#line 448 "const_prop.m"
                transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 2)));
#line 448 "const_prop.m"
                transform_hlds__const_prop__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 3)));
#line 448 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_121_121)) == (MR_mktag((MR_Integer) 1)));
#line 448 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 448 "const_prop.m"
                  {
#line 448 "const_prop.m"
                    transform_hlds__const_prop__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_121_121, (MR_Integer) 0)));
#line 448 "const_prop.m"
                    transform_hlds__const_prop__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_121_121, (MR_Integer) 1)));
#line 448 "const_prop.m"
                    transform_hlds__const_prop__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_122_122, (MR_Integer) 0)));
#line 448 "const_prop.m"
                    transform_hlds__const_prop__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_122_122, (MR_Integer) 1)));
#line 448 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_123_123)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_123_123, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 448 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 448 "const_prop.m"
                      {
#line 448 "const_prop.m"
                        transform_hlds__const_prop__XVal_409 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_123_123, (MR_Integer) 1)));
#line 448 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_124_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                          {
#line 448 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                              {
#line 449 "const_prop.m"
                                transform_hlds__const_prop__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 449 "const_prop.m"
                                transform_hlds__const_prop__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 449 "const_prop.m"
                                transform_hlds__const_prop__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 449 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_126_126)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 449 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
                                  {
#line 449 "const_prop.m"
                                    transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 1)));
#line 449 "const_prop.m"
                                    transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 2)));
#line 449 "const_prop.m"
                                    transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 3)));
#line 449 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 1)));
#line 449 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
                                      {
#line 449 "const_prop.m"
                                        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)));
#line 449 "const_prop.m"
                                        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 449 "const_prop.m"
                                        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_128_128, (MR_Integer) 0)));
#line 449 "const_prop.m"
                                        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_128_128, (MR_Integer) 1)));
#line 449 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_129_129)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_129_129, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 449 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
                                          {
#line 449 "const_prop.m"
                                            transform_hlds__const_prop__YVal_410 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_129_129, (MR_Integer) 1)));
#line 449 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                              {
#line 449 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                                  {
#line 450 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 451 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_409 | transform_hlds__const_prop__YVal_410);
#line 451 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 446 "const_prop.m"
                                                  }
#line 446 "const_prop.m"
                                              }
#line 449 "const_prop.m"
                                          }
#line 449 "const_prop.m"
                                      }
#line 449 "const_prop.m"
                                  }
#line 446 "const_prop.m"
                              }
#line 446 "const_prop.m"
                          }
#line 448 "const_prop.m"
                      }
#line 448 "const_prop.m"
                  }
#line 448 "const_prop.m"
              }
#line 446 "const_prop.m"
          }
#line 446 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "mod") == 0))
#line 387 "const_prop.m"
      {
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_216_216;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_217_217;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_218_218;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_219_219;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_220_220;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_221_221;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_222_222;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_223_223;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_224_224;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_225_225;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_226_226;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_227_227;
#line 387 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_393;
#line 387 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_394;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_461_461;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_462_462;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_463_463;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_464_464;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_71_71;

#line 388 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 387 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
          {
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_216_216)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 389 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
              {
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 1)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 2)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 3)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_217_217)) == (MR_mktag((MR_Integer) 1)));
#line 389 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
                  {
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_217_217, (MR_Integer) 0)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_217_217, (MR_Integer) 1)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_218_218, (MR_Integer) 0)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_218_218, (MR_Integer) 1)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_219_219)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_219_219, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 389 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
                      {
#line 389 "const_prop.m"
                        transform_hlds__const_prop__XVal_393 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_219_219, (MR_Integer) 1)));
#line 389 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                          {
#line 389 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                              {
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_222_222)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 390 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                  {
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 2)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 3)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_223_223)) == (MR_mktag((MR_Integer) 1)));
#line 390 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                      {
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_223_223, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_223_223, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_224_224, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_224_224, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_225_225)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_225_225, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 390 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                          {
#line 390 "const_prop.m"
                                            transform_hlds__const_prop__YVal_394 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_225_225, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_226_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                              {
#line 390 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                                  {
#line 391 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_394 == (MR_Integer) 0);
#line 391 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 387 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                                      {
#line 392 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 393 "const_prop.m"
                                                        {
#line 393 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__int__mod_2_f_0(transform_hlds__const_prop__XVal_393, transform_hlds__const_prop__YVal_394);
                                                        }
#line 393 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 387 "const_prop.m"
                                                      }
#line 387 "const_prop.m"
                                                  }
#line 387 "const_prop.m"
                                              }
#line 390 "const_prop.m"
                                          }
#line 390 "const_prop.m"
                                      }
#line 390 "const_prop.m"
                                  }
#line 387 "const_prop.m"
                              }
#line 387 "const_prop.m"
                          }
#line 389 "const_prop.m"
                      }
#line 389 "const_prop.m"
                  }
#line 389 "const_prop.m"
              }
#line 387 "const_prop.m"
          }
#line 387 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "rem") == 0))
#line 395 "const_prop.m"
      {
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_204_204;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_205_205;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_206_206;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_207_207;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_208_208;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_209_209;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_210_210;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_211_211;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_212_212;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_213_213;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_214_214;
#line 395 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_215_215;
#line 395 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_395;
#line 395 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_396;
#line 397 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_465_465;
#line 397 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_466_466;
#line 397 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_72_72;
#line 397 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_73_73;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_467_467;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_468_468;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_74_74;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_75_75;

#line 396 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 395 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
          {
#line 397 "const_prop.m"
            transform_hlds__const_prop__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 397 "const_prop.m"
            transform_hlds__const_prop__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 397 "const_prop.m"
            transform_hlds__const_prop__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 397 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_204_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 397 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
              {
#line 397 "const_prop.m"
                transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 1)));
#line 397 "const_prop.m"
                transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 2)));
#line 397 "const_prop.m"
                transform_hlds__const_prop__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 3)));
#line 397 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_205_205)) == (MR_mktag((MR_Integer) 1)));
#line 397 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
                  {
#line 397 "const_prop.m"
                    transform_hlds__const_prop__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_205_205, (MR_Integer) 0)));
#line 397 "const_prop.m"
                    transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_205_205, (MR_Integer) 1)));
#line 397 "const_prop.m"
                    transform_hlds__const_prop__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_206_206, (MR_Integer) 0)));
#line 397 "const_prop.m"
                    transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_206_206, (MR_Integer) 1)));
#line 397 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_207_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 397 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
                      {
#line 397 "const_prop.m"
                        transform_hlds__const_prop__XVal_395 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 1)));
#line 397 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_208_208 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                          {
#line 397 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                              {
#line 398 "const_prop.m"
                                transform_hlds__const_prop__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 398 "const_prop.m"
                                transform_hlds__const_prop__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                transform_hlds__const_prop__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 398 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_210_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 398 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
                                  {
#line 398 "const_prop.m"
                                    transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                    transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 2)));
#line 398 "const_prop.m"
                                    transform_hlds__const_prop__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 3)));
#line 398 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_211_211)) == (MR_mktag((MR_Integer) 1)));
#line 398 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
                                      {
#line 398 "const_prop.m"
                                        transform_hlds__const_prop__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_211_211, (MR_Integer) 0)));
#line 398 "const_prop.m"
                                        transform_hlds__const_prop__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_211_211, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                        transform_hlds__const_prop__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_212_212, (MR_Integer) 0)));
#line 398 "const_prop.m"
                                        transform_hlds__const_prop__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_212_212, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_213_213)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_213_213, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 398 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
                                          {
#line 398 "const_prop.m"
                                            transform_hlds__const_prop__YVal_396 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_213_213, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_214_214 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                              {
#line 398 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_215_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                                  {
#line 399 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_396 == (MR_Integer) 0);
#line 399 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 395 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                                      {
#line 400 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 401 "const_prop.m"
                                                        {
#line 401 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__int__rem_2_f_0(transform_hlds__const_prop__XVal_395, transform_hlds__const_prop__YVal_396);
                                                        }
#line 401 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 395 "const_prop.m"
                                                      }
#line 395 "const_prop.m"
                                                  }
#line 395 "const_prop.m"
                                              }
#line 398 "const_prop.m"
                                          }
#line 398 "const_prop.m"
                                      }
#line 398 "const_prop.m"
                                  }
#line 395 "const_prop.m"
                              }
#line 395 "const_prop.m"
                          }
#line 397 "const_prop.m"
                      }
#line 397 "const_prop.m"
                  }
#line 397 "const_prop.m"
              }
#line 395 "const_prop.m"
          }
#line 395 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "xor") == 0))
#line 453 "const_prop.m"
      {
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_108_108;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_109_109;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_110_110;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_111_111;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_112_112;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_113_113;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_114_114;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_115_115;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_116_116;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_117_117;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_118_118;
#line 453 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_119_119;
#line 453 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_411;
#line 453 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_412;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_497_497;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_498_498;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_104_104;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_105_105;
#line 456 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_499_499;
#line 456 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_500_500;
#line 456 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_106_106;
#line 456 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_107_107;

#line 454 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 453 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
          {
#line 455 "const_prop.m"
            transform_hlds__const_prop__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 455 "const_prop.m"
            transform_hlds__const_prop__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 455 "const_prop.m"
            transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 455 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 455 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
              {
#line 455 "const_prop.m"
                transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 1)));
#line 455 "const_prop.m"
                transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 2)));
#line 455 "const_prop.m"
                transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 3)));
#line 455 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 455 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                  {
#line 455 "const_prop.m"
                    transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_109_109, (MR_Integer) 0)));
#line 455 "const_prop.m"
                    transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_109_109, (MR_Integer) 1)));
#line 455 "const_prop.m"
                    transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_110_110, (MR_Integer) 0)));
#line 455 "const_prop.m"
                    transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_110_110, (MR_Integer) 1)));
#line 455 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_111_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 455 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                      {
#line 455 "const_prop.m"
                        transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
#line 455 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                          {
#line 455 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                              {
#line 456 "const_prop.m"
                                transform_hlds__const_prop__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                transform_hlds__const_prop__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 456 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_114_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 456 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                  {
#line 456 "const_prop.m"
                                    transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                    transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 2)));
#line 456 "const_prop.m"
                                    transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 3)));
#line 456 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 456 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                      {
#line 456 "const_prop.m"
                                        transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                        transform_hlds__const_prop__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                        transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_116_116, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                        transform_hlds__const_prop__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_116_116, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_117_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 456 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                          {
#line 456 "const_prop.m"
                                            transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                              {
#line 456 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                                  {
#line 457 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 458 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_411 ^ transform_hlds__const_prop__YVal_412);
#line 458 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 453 "const_prop.m"
                                                  }
#line 453 "const_prop.m"
                                              }
#line 456 "const_prop.m"
                                          }
#line 456 "const_prop.m"
                                      }
#line 456 "const_prop.m"
                                  }
#line 453 "const_prop.m"
                              }
#line 453 "const_prop.m"
                          }
#line 455 "const_prop.m"
                      }
#line 455 "const_prop.m"
                  }
#line 455 "const_prop.m"
              }
#line 453 "const_prop.m"
          }
#line 453 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "plus") == 0))
#line 301 "const_prop.m"
      {
#line 301 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_19;
#line 301 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_22;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_360_360;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_361_361;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_362_362;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_363_363;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_364_364;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_365_365;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_366_366;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_367_367;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_368_368;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_369_369;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_370_370;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_371_371;
#line 303 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_413_413;
#line 303 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_414_414;
#line 303 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 303 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 304 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_415_415;
#line 304 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_416_416;
#line 304 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 304 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;

#line 302 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 301 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
          {
#line 303 "const_prop.m"
            transform_hlds__const_prop__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 303 "const_prop.m"
            transform_hlds__const_prop__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 303 "const_prop.m"
            transform_hlds__const_prop__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 303 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_360_360)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 303 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 303 "const_prop.m"
              {
#line 303 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 1)));
#line 303 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 2)));
#line 303 "const_prop.m"
                transform_hlds__const_prop__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 3)));
#line 303 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_361_361)) == (MR_mktag((MR_Integer) 1)));
#line 303 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 303 "const_prop.m"
                  {
#line 303 "const_prop.m"
                    transform_hlds__const_prop__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_361_361, (MR_Integer) 0)));
#line 303 "const_prop.m"
                    transform_hlds__const_prop__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_361_361, (MR_Integer) 1)));
#line 303 "const_prop.m"
                    transform_hlds__const_prop__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_362_362, (MR_Integer) 0)));
#line 303 "const_prop.m"
                    transform_hlds__const_prop__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_362_362, (MR_Integer) 1)));
#line 303 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_363_363)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_363_363, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 303 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 303 "const_prop.m"
                      {
#line 303 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_363_363, (MR_Integer) 1)));
#line 303 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                          {
#line 303 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_365_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                              {
#line 304 "const_prop.m"
                                transform_hlds__const_prop__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 304 "const_prop.m"
                                transform_hlds__const_prop__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 304 "const_prop.m"
                                transform_hlds__const_prop__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 304 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_366_366)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 304 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                  {
#line 304 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 1)));
#line 304 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 2)));
#line 304 "const_prop.m"
                                    transform_hlds__const_prop__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 3)));
#line 304 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_367_367)) == (MR_mktag((MR_Integer) 1)));
#line 304 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                      {
#line 304 "const_prop.m"
                                        transform_hlds__const_prop__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_367_367, (MR_Integer) 0)));
#line 304 "const_prop.m"
                                        transform_hlds__const_prop__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_367_367, (MR_Integer) 1)));
#line 304 "const_prop.m"
                                        transform_hlds__const_prop__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_368_368, (MR_Integer) 0)));
#line 304 "const_prop.m"
                                        transform_hlds__const_prop__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_368_368, (MR_Integer) 1)));
#line 304 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_369_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 304 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                          {
#line 304 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 1)));
#line 304 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_370_370 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                              {
#line 304 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                                  {
#line 305 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 306 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_19 + transform_hlds__const_prop__YVal_22);
#line 306 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 301 "const_prop.m"
                                                  }
#line 301 "const_prop.m"
                                              }
#line 304 "const_prop.m"
                                          }
#line 304 "const_prop.m"
                                      }
#line 304 "const_prop.m"
                                  }
#line 301 "const_prop.m"
                              }
#line 301 "const_prop.m"
                          }
#line 303 "const_prop.m"
                      }
#line 303 "const_prop.m"
                  }
#line 303 "const_prop.m"
              }
#line 301 "const_prop.m"
          }
#line 301 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "minus") == 0))
#line 329 "const_prop.m"
      {
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_312_312;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_313_313;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_314_314;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_315_315;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_316_316;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_317_317;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_318_318;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_319_319;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_320_320;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_321_321;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_322_322;
#line 329 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_323_323;
#line 329 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_377;
#line 329 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_378;
#line 331 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_429_429;
#line 331 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_430_430;
#line 331 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_36_36;
#line 331 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_37_37;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_431_431;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_432_432;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_38_38;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_39_39;

#line 330 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 329 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
          {
#line 331 "const_prop.m"
            transform_hlds__const_prop__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 331 "const_prop.m"
            transform_hlds__const_prop__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 331 "const_prop.m"
            transform_hlds__const_prop__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 331 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_312_312)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 331 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
              {
#line 331 "const_prop.m"
                transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 1)));
#line 331 "const_prop.m"
                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 2)));
#line 331 "const_prop.m"
                transform_hlds__const_prop__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 3)));
#line 331 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_313_313)) == (MR_mktag((MR_Integer) 1)));
#line 331 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                  {
#line 331 "const_prop.m"
                    transform_hlds__const_prop__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_313_313, (MR_Integer) 0)));
#line 331 "const_prop.m"
                    transform_hlds__const_prop__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_313_313, (MR_Integer) 1)));
#line 331 "const_prop.m"
                    transform_hlds__const_prop__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_314_314, (MR_Integer) 0)));
#line 331 "const_prop.m"
                    transform_hlds__const_prop__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_314_314, (MR_Integer) 1)));
#line 331 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_315_315)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_315_315, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 331 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                      {
#line 331 "const_prop.m"
                        transform_hlds__const_prop__XVal_377 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_315_315, (MR_Integer) 1)));
#line 331 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_316_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                          {
#line 331 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_317_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                              {
#line 332 "const_prop.m"
                                transform_hlds__const_prop__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 332 "const_prop.m"
                                transform_hlds__const_prop__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 332 "const_prop.m"
                                transform_hlds__const_prop__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 332 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_318_318)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 332 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
                                  {
#line 332 "const_prop.m"
                                    transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 1)));
#line 332 "const_prop.m"
                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 2)));
#line 332 "const_prop.m"
                                    transform_hlds__const_prop__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 3)));
#line 332 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_319_319)) == (MR_mktag((MR_Integer) 1)));
#line 332 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
                                      {
#line 332 "const_prop.m"
                                        transform_hlds__const_prop__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_319_319, (MR_Integer) 0)));
#line 332 "const_prop.m"
                                        transform_hlds__const_prop__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_319_319, (MR_Integer) 1)));
#line 332 "const_prop.m"
                                        transform_hlds__const_prop__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_320_320, (MR_Integer) 0)));
#line 332 "const_prop.m"
                                        transform_hlds__const_prop__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_320_320, (MR_Integer) 1)));
#line 332 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_321_321)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_321_321, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 332 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
                                          {
#line 332 "const_prop.m"
                                            transform_hlds__const_prop__YVal_378 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_321_321, (MR_Integer) 1)));
#line 332 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_322_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                                              {
#line 332 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_323_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                                                  {
#line 333 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 334 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_377 - transform_hlds__const_prop__YVal_378);
#line 334 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 329 "const_prop.m"
                                                  }
#line 329 "const_prop.m"
                                              }
#line 332 "const_prop.m"
                                          }
#line 332 "const_prop.m"
                                      }
#line 332 "const_prop.m"
                                  }
#line 329 "const_prop.m"
                              }
#line 329 "const_prop.m"
                          }
#line 331 "const_prop.m"
                      }
#line 331 "const_prop.m"
                  }
#line 331 "const_prop.m"
              }
#line 329 "const_prop.m"
          }
#line 329 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "times") == 0))
#line 357 "const_prop.m"
      {
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_264_264;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_265_265;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_266_266;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_267_267;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_268_268;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_269_269;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_270_270;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_271_271;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_272_272;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_273_273;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_274_274;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_275_275;
#line 357 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_385;
#line 357 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_386;
#line 359 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_445_445;
#line 359 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_446_446;
#line 359 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_52_52;
#line 359 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_53_53;
#line 360 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_447_447;
#line 360 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_448_448;
#line 360 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 360 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_55_55;

#line 358 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 357 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
          {
#line 359 "const_prop.m"
            transform_hlds__const_prop__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 359 "const_prop.m"
            transform_hlds__const_prop__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 359 "const_prop.m"
            transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 359 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_264_264)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 359 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 359 "const_prop.m"
              {
#line 359 "const_prop.m"
                transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 1)));
#line 359 "const_prop.m"
                transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 2)));
#line 359 "const_prop.m"
                transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 3)));
#line 359 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_265_265)) == (MR_mktag((MR_Integer) 1)));
#line 359 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 359 "const_prop.m"
                  {
#line 359 "const_prop.m"
                    transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_265_265, (MR_Integer) 0)));
#line 359 "const_prop.m"
                    transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_265_265, (MR_Integer) 1)));
#line 359 "const_prop.m"
                    transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 359 "const_prop.m"
                    transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 359 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_267_267)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_267_267, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 359 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 359 "const_prop.m"
                      {
#line 359 "const_prop.m"
                        transform_hlds__const_prop__XVal_385 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_267_267, (MR_Integer) 1)));
#line 359 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_268_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                          {
#line 359 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_269_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                              {
#line 360 "const_prop.m"
                                transform_hlds__const_prop__V_447_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 360 "const_prop.m"
                                transform_hlds__const_prop__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 360 "const_prop.m"
                                transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 360 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_270_270)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 360 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                                  {
#line 360 "const_prop.m"
                                    transform_hlds__const_prop__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 1)));
#line 360 "const_prop.m"
                                    transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 2)));
#line 360 "const_prop.m"
                                    transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 3)));
#line 360 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_271_271)) == (MR_mktag((MR_Integer) 1)));
#line 360 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                                      {
#line 360 "const_prop.m"
                                        transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_271_271, (MR_Integer) 0)));
#line 360 "const_prop.m"
                                        transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_271_271, (MR_Integer) 1)));
#line 360 "const_prop.m"
                                        transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 360 "const_prop.m"
                                        transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 360 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_273_273)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_273_273, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 360 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                                          {
#line 360 "const_prop.m"
                                            transform_hlds__const_prop__YVal_386 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_273_273, (MR_Integer) 1)));
#line 360 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_274_274 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                              {
#line 360 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_275_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                                  {
#line 361 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 362 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_385 * transform_hlds__const_prop__YVal_386);
#line 362 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 357 "const_prop.m"
                                                  }
#line 357 "const_prop.m"
                                              }
#line 360 "const_prop.m"
                                          }
#line 360 "const_prop.m"
                                      }
#line 360 "const_prop.m"
                                  }
#line 357 "const_prop.m"
                              }
#line 357 "const_prop.m"
                          }
#line 359 "const_prop.m"
                      }
#line 359 "const_prop.m"
                  }
#line 359 "const_prop.m"
              }
#line 357 "const_prop.m"
          }
#line 357 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_rem") == 0))
#line 403 "const_prop.m"
      {
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_192_192;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_193_193;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_194_194;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_195_195;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_196_196;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_197_197;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_198_198;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_199_199;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_200_200;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_201_201;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_202_202;
#line 403 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_203_203;
#line 403 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_397;
#line 403 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_398;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_469_469;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_470_470;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_76_76;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_77_77;
#line 406 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_471_471;
#line 406 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_472_472;
#line 406 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_78_78;
#line 406 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_79_79;

#line 404 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 403 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
          {
#line 405 "const_prop.m"
            transform_hlds__const_prop__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 405 "const_prop.m"
            transform_hlds__const_prop__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 405 "const_prop.m"
            transform_hlds__const_prop__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 405 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_192_192)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 405 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
              {
#line 405 "const_prop.m"
                transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 1)));
#line 405 "const_prop.m"
                transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 2)));
#line 405 "const_prop.m"
                transform_hlds__const_prop__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 3)));
#line 405 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_193_193)) == (MR_mktag((MR_Integer) 1)));
#line 405 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                  {
#line 405 "const_prop.m"
                    transform_hlds__const_prop__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_193_193, (MR_Integer) 0)));
#line 405 "const_prop.m"
                    transform_hlds__const_prop__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_193_193, (MR_Integer) 1)));
#line 405 "const_prop.m"
                    transform_hlds__const_prop__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_194_194, (MR_Integer) 0)));
#line 405 "const_prop.m"
                    transform_hlds__const_prop__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_194_194, (MR_Integer) 1)));
#line 405 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_195_195)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_195_195, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 405 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                      {
#line 405 "const_prop.m"
                        transform_hlds__const_prop__XVal_397 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_195_195, (MR_Integer) 1)));
#line 405 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_196_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                          {
#line 405 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                              {
#line 406 "const_prop.m"
                                transform_hlds__const_prop__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 406 "const_prop.m"
                                transform_hlds__const_prop__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 406 "const_prop.m"
                                transform_hlds__const_prop__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 406 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_198_198)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 406 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                                  {
#line 406 "const_prop.m"
                                    transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 1)));
#line 406 "const_prop.m"
                                    transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 2)));
#line 406 "const_prop.m"
                                    transform_hlds__const_prop__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 3)));
#line 406 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_199_199)) == (MR_mktag((MR_Integer) 1)));
#line 406 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                                      {
#line 406 "const_prop.m"
                                        transform_hlds__const_prop__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_199_199, (MR_Integer) 0)));
#line 406 "const_prop.m"
                                        transform_hlds__const_prop__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_199_199, (MR_Integer) 1)));
#line 406 "const_prop.m"
                                        transform_hlds__const_prop__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_200_200, (MR_Integer) 0)));
#line 406 "const_prop.m"
                                        transform_hlds__const_prop__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_200_200, (MR_Integer) 1)));
#line 406 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_201_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 406 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                                          {
#line 406 "const_prop.m"
                                            transform_hlds__const_prop__YVal_398 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 1)));
#line 406 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_202_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                              {
#line 406 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                                  {
#line 407 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_398 == (MR_Integer) 0);
#line 407 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 403 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                                      {
#line 408 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 409 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_397 % transform_hlds__const_prop__YVal_398);
#line 409 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 403 "const_prop.m"
                                                      }
#line 403 "const_prop.m"
                                                  }
#line 403 "const_prop.m"
                                              }
#line 406 "const_prop.m"
                                          }
#line 406 "const_prop.m"
                                      }
#line 406 "const_prop.m"
                                  }
#line 403 "const_prop.m"
                              }
#line 403 "const_prop.m"
                          }
#line 405 "const_prop.m"
                      }
#line 405 "const_prop.m"
                  }
#line 405 "const_prop.m"
              }
#line 403 "const_prop.m"
          }
#line 403 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient") == 0))
#line 371 "const_prop.m"
      {
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_240_240;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_241_241;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_242_242;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_243_243;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_244_244;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_245_245;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_246_246;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_247_247;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_248_248;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_249_249;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_250_250;
#line 371 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_251_251;
#line 371 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_389;
#line 371 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_390;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_453_453;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_454_454;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_60_60;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_61_61;
#line 374 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_455_455;
#line 374 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_456_456;
#line 374 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;
#line 374 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_63_63;

#line 372 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 371 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
          {
#line 373 "const_prop.m"
            transform_hlds__const_prop__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 373 "const_prop.m"
            transform_hlds__const_prop__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 373 "const_prop.m"
            transform_hlds__const_prop__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 373 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_240_240)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 373 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
              {
#line 373 "const_prop.m"
                transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 1)));
#line 373 "const_prop.m"
                transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 2)));
#line 373 "const_prop.m"
                transform_hlds__const_prop__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 3)));
#line 373 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_241_241)) == (MR_mktag((MR_Integer) 1)));
#line 373 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
                  {
#line 373 "const_prop.m"
                    transform_hlds__const_prop__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_241_241, (MR_Integer) 0)));
#line 373 "const_prop.m"
                    transform_hlds__const_prop__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_241_241, (MR_Integer) 1)));
#line 373 "const_prop.m"
                    transform_hlds__const_prop__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_242_242, (MR_Integer) 0)));
#line 373 "const_prop.m"
                    transform_hlds__const_prop__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_242_242, (MR_Integer) 1)));
#line 373 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_243_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 373 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
                      {
#line 373 "const_prop.m"
                        transform_hlds__const_prop__XVal_389 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 1)));
#line 373 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                          {
#line 373 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_245_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                              {
#line 374 "const_prop.m"
                                transform_hlds__const_prop__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 374 "const_prop.m"
                                transform_hlds__const_prop__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 374 "const_prop.m"
                                transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 374 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 374 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 374 "const_prop.m"
                                  {
#line 374 "const_prop.m"
                                    transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 374 "const_prop.m"
                                    transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 2)));
#line 374 "const_prop.m"
                                    transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 3)));
#line 374 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_247_247)) == (MR_mktag((MR_Integer) 1)));
#line 374 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 374 "const_prop.m"
                                      {
#line 374 "const_prop.m"
                                        transform_hlds__const_prop__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 374 "const_prop.m"
                                        transform_hlds__const_prop__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 374 "const_prop.m"
                                        transform_hlds__const_prop__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_248_248, (MR_Integer) 0)));
#line 374 "const_prop.m"
                                        transform_hlds__const_prop__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_248_248, (MR_Integer) 1)));
#line 374 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_249_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 374 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 374 "const_prop.m"
                                          {
#line 374 "const_prop.m"
                                            transform_hlds__const_prop__YVal_390 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 1)));
#line 374 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_250_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                                              {
#line 374 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                                                  {
#line 375 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_390 == (MR_Integer) 0);
#line 375 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 371 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                                                      {
#line 376 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 377 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_389 / transform_hlds__const_prop__YVal_390);
#line 377 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 371 "const_prop.m"
                                                      }
#line 371 "const_prop.m"
                                                  }
#line 371 "const_prop.m"
                                              }
#line 374 "const_prop.m"
                                          }
#line 374 "const_prop.m"
                                      }
#line 374 "const_prop.m"
                                  }
#line 371 "const_prop.m"
                              }
#line 371 "const_prop.m"
                          }
#line 373 "const_prop.m"
                      }
#line 373 "const_prop.m"
                  }
#line 373 "const_prop.m"
              }
#line 371 "const_prop.m"
          }
#line 371 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_left_shift") == 0))
#line 411 "const_prop.m"
      {
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_180_180;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_181_181;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_182_182;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_183_183;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_184_184;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_185_185;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_186_186;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_187_187;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_188_188;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_189_189;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_190_190;
#line 411 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_191_191;
#line 411 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_399;
#line 411 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_400;
#line 413 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_473_473;
#line 413 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_474_474;
#line 413 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_80_80;
#line 413 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_81_81;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_475_475;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_476_476;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_82_82;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_83_83;

#line 412 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 411 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
          {
#line 413 "const_prop.m"
            transform_hlds__const_prop__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 413 "const_prop.m"
            transform_hlds__const_prop__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 413 "const_prop.m"
            transform_hlds__const_prop__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 413 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_180_180)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 413 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 413 "const_prop.m"
              {
#line 413 "const_prop.m"
                transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 1)));
#line 413 "const_prop.m"
                transform_hlds__const_prop__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 2)));
#line 413 "const_prop.m"
                transform_hlds__const_prop__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 3)));
#line 413 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_181_181)) == (MR_mktag((MR_Integer) 1)));
#line 413 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 413 "const_prop.m"
                  {
#line 413 "const_prop.m"
                    transform_hlds__const_prop__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_181_181, (MR_Integer) 0)));
#line 413 "const_prop.m"
                    transform_hlds__const_prop__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_181_181, (MR_Integer) 1)));
#line 413 "const_prop.m"
                    transform_hlds__const_prop__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_182_182, (MR_Integer) 0)));
#line 413 "const_prop.m"
                    transform_hlds__const_prop__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_182_182, (MR_Integer) 1)));
#line 413 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_183_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_183_183, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 413 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 413 "const_prop.m"
                      {
#line 413 "const_prop.m"
                        transform_hlds__const_prop__XVal_399 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_183_183, (MR_Integer) 1)));
#line 413 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                          {
#line 413 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_185_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                              {
#line 414 "const_prop.m"
                                transform_hlds__const_prop__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 414 "const_prop.m"
                                transform_hlds__const_prop__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 414 "const_prop.m"
                                transform_hlds__const_prop__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 414 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_186_186)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 414 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                  {
#line 414 "const_prop.m"
                                    transform_hlds__const_prop__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 1)));
#line 414 "const_prop.m"
                                    transform_hlds__const_prop__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 2)));
#line 414 "const_prop.m"
                                    transform_hlds__const_prop__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 3)));
#line 414 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_187_187)) == (MR_mktag((MR_Integer) 1)));
#line 414 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                      {
#line 414 "const_prop.m"
                                        transform_hlds__const_prop__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_187_187, (MR_Integer) 0)));
#line 414 "const_prop.m"
                                        transform_hlds__const_prop__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_187_187, (MR_Integer) 1)));
#line 414 "const_prop.m"
                                        transform_hlds__const_prop__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_188_188, (MR_Integer) 0)));
#line 414 "const_prop.m"
                                        transform_hlds__const_prop__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_188_188, (MR_Integer) 1)));
#line 414 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_189_189)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_189_189, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 414 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                          {
#line 414 "const_prop.m"
                                            transform_hlds__const_prop__YVal_400 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_189_189, (MR_Integer) 1)));
#line 414 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                                              {
#line 414 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                                                  {
#line 415 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 416 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_399 << transform_hlds__const_prop__YVal_400);
#line 416 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 411 "const_prop.m"
                                                  }
#line 411 "const_prop.m"
                                              }
#line 414 "const_prop.m"
                                          }
#line 414 "const_prop.m"
                                      }
#line 414 "const_prop.m"
                                  }
#line 411 "const_prop.m"
                              }
#line 411 "const_prop.m"
                          }
#line 413 "const_prop.m"
                      }
#line 413 "const_prop.m"
                  }
#line 413 "const_prop.m"
              }
#line 411 "const_prop.m"
          }
#line 411 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_right_shift") == 0))
#line 425 "const_prop.m"
      {
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_156_156;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_157_157;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_158_158;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_159_159;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_160_160;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_161_161;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_162_162;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_163_163;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_164_164;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_165_165;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_166_166;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_167_167;
#line 425 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_403;
#line 425 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_404;
#line 427 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_481_481;
#line 427 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_482_482;
#line 427 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_88_88;
#line 427 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_89_89;
#line 428 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_483_483;
#line 428 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_484_484;
#line 428 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_90_90;
#line 428 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_91_91;

#line 426 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 425 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
          {
#line 427 "const_prop.m"
            transform_hlds__const_prop__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 427 "const_prop.m"
            transform_hlds__const_prop__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 427 "const_prop.m"
            transform_hlds__const_prop__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 427 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_156_156)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 427 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
              {
#line 427 "const_prop.m"
                transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 1)));
#line 427 "const_prop.m"
                transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 2)));
#line 427 "const_prop.m"
                transform_hlds__const_prop__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 3)));
#line 427 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_157_157)) == (MR_mktag((MR_Integer) 1)));
#line 427 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
                  {
#line 427 "const_prop.m"
                    transform_hlds__const_prop__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_157_157, (MR_Integer) 0)));
#line 427 "const_prop.m"
                    transform_hlds__const_prop__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_157_157, (MR_Integer) 1)));
#line 427 "const_prop.m"
                    transform_hlds__const_prop__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_158_158, (MR_Integer) 0)));
#line 427 "const_prop.m"
                    transform_hlds__const_prop__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_158_158, (MR_Integer) 1)));
#line 427 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_159_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 427 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
                      {
#line 427 "const_prop.m"
                        transform_hlds__const_prop__XVal_403 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 1)));
#line 427 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_160_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                          {
#line 427 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                              {
#line 428 "const_prop.m"
                                transform_hlds__const_prop__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 428 "const_prop.m"
                                transform_hlds__const_prop__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                transform_hlds__const_prop__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 428 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_162_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 428 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 428 "const_prop.m"
                                  {
#line 428 "const_prop.m"
                                    transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                    transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 2)));
#line 428 "const_prop.m"
                                    transform_hlds__const_prop__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 3)));
#line 428 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 428 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 428 "const_prop.m"
                                      {
#line 428 "const_prop.m"
                                        transform_hlds__const_prop__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_163_163, (MR_Integer) 0)));
#line 428 "const_prop.m"
                                        transform_hlds__const_prop__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_163_163, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                        transform_hlds__const_prop__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_164_164, (MR_Integer) 0)));
#line 428 "const_prop.m"
                                        transform_hlds__const_prop__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_164_164, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 428 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 428 "const_prop.m"
                                          {
#line 428 "const_prop.m"
                                            transform_hlds__const_prop__YVal_404 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_166_166 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                                              {
#line 428 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                                                  {
#line 429 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 430 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_403 >> transform_hlds__const_prop__YVal_404);
#line 430 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 425 "const_prop.m"
                                                  }
#line 425 "const_prop.m"
                                              }
#line 428 "const_prop.m"
                                          }
#line 428 "const_prop.m"
                                      }
#line 428 "const_prop.m"
                                  }
#line 425 "const_prop.m"
                              }
#line 425 "const_prop.m"
                          }
#line 427 "const_prop.m"
                      }
#line 427 "const_prop.m"
                  }
#line 427 "const_prop.m"
              }
#line 425 "const_prop.m"
          }
#line 425 "const_prop.m"
      }
#line 307 "const_prop.m"
    else
#line 307 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 299 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 299 "const_prop.m"
      {
#line 299 "const_prop.m"
        {
#line 299 "const_prop.m"
          MR_Word base;
#line 299 "const_prop.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 299 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 299 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 299 "const_prop.m"
        }
#line 299 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 299 "const_prop.m"
      }
#line 299 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 299 "const_prop.m"
  }
#line 294 "const_prop.m"
}

#line 281 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 281 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 281 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 281 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 281 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 281 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 281 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 281 "const_prop.m"
{
#line 286 "const_prop.m"
  {
#line 286 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "count_codepoints") == 0);
#line 286 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_17;
#line 286 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CodePointCountX_18;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_16_16;

#line 286 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
      {
#line 288 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 286 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
          {
#line 289 "const_prop.m"
            transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 289 "const_prop.m"
            transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 289 "const_prop.m"
            transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 289 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 289 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
              {
#line 289 "const_prop.m"
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 289 "const_prop.m"
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 2)));
#line 289 "const_prop.m"
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 3)));
#line 289 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 289 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
                  {
#line 289 "const_prop.m"
                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 289 "const_prop.m"
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 289 "const_prop.m"
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 289 "const_prop.m"
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 289 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 289 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
                      {
#line 289 "const_prop.m"
                        transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 289 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
                          {
#line 289 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
                              {
#line 290 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 291 "const_prop.m"
                                {
#line 291 "const_prop.m"
                                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                                }
#line 292 "const_prop.m"
                                {
#line 292 "const_prop.m"
                                  MR_Word base;
#line 292 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 292 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 292 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__CodePointCountX_18));
#line 292 "const_prop.m"
                                }
#line 292 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 286 "const_prop.m"
                              }
#line 286 "const_prop.m"
                          }
#line 289 "const_prop.m"
                      }
#line 289 "const_prop.m"
                  }
#line 289 "const_prop.m"
              }
#line 286 "const_prop.m"
          }
#line 286 "const_prop.m"
      }
#line 286 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 286 "const_prop.m"
  }
#line 281 "const_prop.m"
}

#line 261 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 261 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 261 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 261 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 261 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 261 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 261 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 261 "const_prop.m"
{
#line 266 "const_prop.m"
  {
#line 266 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 266 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_14;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_43_43;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_44_44;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_45_45;
#line 266 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_46_46;
#line 266 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_47_47;
#line 270 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 270 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39;
#line 270 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41;
#line 270 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_42_42;

#line 266 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 266 "const_prop.m"
      {
#line 270 "const_prop.m"
        transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 270 "const_prop.m"
        transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 270 "const_prop.m"
        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 270 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 270 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 270 "const_prop.m"
          {
#line 270 "const_prop.m"
            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 270 "const_prop.m"
            transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 270 "const_prop.m"
            transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 270 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 270 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 270 "const_prop.m"
              {
#line 270 "const_prop.m"
                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));
#line 270 "const_prop.m"
                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 270 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 266 "const_prop.m"
                  {
#line 270 "const_prop.m"
                    transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 0)));
#line 270 "const_prop.m"
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 1)));
#line 270 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 266 "const_prop.m"
                      {
#line 270 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 270 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 270 "const_prop.m"
                          {
#line 270 "const_prop.m"
                            transform_hlds__const_prop__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 1)));
#line 273 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 268 "const_prop.m"
                              {
#line 271 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 272 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_47_47;
#line 268 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 268 "const_prop.m"
                              }
#line 273 "const_prop.m"
                            else
#line 273 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 274 "const_prop.m"
                              {
#line 277 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 278 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__V_47_47);
#line 274 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 274 "const_prop.m"
                              }
#line 273 "const_prop.m"
                            else
#line 273 "const_prop.m"
                              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 266 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 266 "const_prop.m"
                              {
#line 266 "const_prop.m"
                                {
#line 266 "const_prop.m"
                                  MR_Word base;
#line 266 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 266 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 266 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_14);
#line 266 "const_prop.m"
                                }
#line 266 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 266 "const_prop.m"
                              }
#line 270 "const_prop.m"
                          }
#line 266 "const_prop.m"
                      }
#line 266 "const_prop.m"
                  }
#line 270 "const_prop.m"
              }
#line 270 "const_prop.m"
          }
#line 266 "const_prop.m"
      }
#line 266 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 266 "const_prop.m"
  }
#line 261 "const_prop.m"
}

#line 84 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__84__1_3_f_0(
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 84 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_27)
#line 84 "const_prop.m"
{
#line 84 "const_prop.m"
  {
#line 84 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 84 "const_prop.m"
    MR_Word transform_hlds__const_prop__HeadVar__4_28;
#line 84 "const_prop.m"
    MR_Word transform_hlds__const_prop__Type_22;
#line 84 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_23;

#line 85 "const_prop.m"
    {
#line 85 "const_prop.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__const_prop__InstMap_13, transform_hlds__const_prop__HeadVar__3_27, &transform_hlds__const_prop__Inst_23);
    }
#line 86 "const_prop.m"
    {
#line 86 "const_prop.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__const_prop__VarTypes_12, transform_hlds__const_prop__HeadVar__3_27, &transform_hlds__const_prop__Type_22);
    }
#line 84 "const_prop.m"
    {
#line 84 "const_prop.m"
      transform_hlds__const_prop__HeadVar__4_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 0) = ((MR_Box) (transform_hlds__const_prop__HeadVar__3_27));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 1) = ((MR_Box) (transform_hlds__const_prop__Type_22));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 2) = ((MR_Box) (transform_hlds__const_prop__Inst_23));
#line 84 "const_prop.m"
    }
#line 84 "const_prop.m"
    return transform_hlds__const_prop__HeadVar__4_28;
#line 84 "const_prop.m"
  }
#line 84 "const_prop.m"
}

#line 649 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 649 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 649 "const_prop.m"
{
#line 649 "const_prop.m"
  {
#line 649 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 649 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 649 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 649 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 649 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 6071 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 649 "const_prop.m"
    else
#line 649 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 649 "const_prop.m"
      {
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

#line 649 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 649 "const_prop.m"
          {
#line 649 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

#line 649 "const_prop.m"
            {
#line 649 "const_prop.m"
              parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_16_16, transform_hlds__const_prop__V_5_5);
#line 649 "const_prop.m"
              return;
            }
#line 649 "const_prop.m"
          }
#line 649 "const_prop.m"
        else
#line 6100 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
#line 649 "const_prop.m"
      }
#line 649 "const_prop.m"
    else
#line 649 "const_prop.m"
      {
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

#line 649 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6113 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
#line 649 "const_prop.m"
        else
#line 649 "const_prop.m"
          {
#line 649 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

#line 649 "const_prop.m"
            {
#line 649 "const_prop.m"
              transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_17_17, transform_hlds__const_prop__V_11_11);
#line 649 "const_prop.m"
              return;
            }
#line 649 "const_prop.m"
          }
#line 649 "const_prop.m"
      }
#line 649 "const_prop.m"
  }
#line 649 "const_prop.m"
}

#line 649 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 649 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 649 "const_prop.m"
{
#line 649 "const_prop.m"
  {
#line 649 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 649 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_7 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 649 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_8 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 649 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_7 == transform_hlds__const_prop__CastY_8);
#line 649 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 649 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 649 "const_prop.m"
    else
#line 649 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 649 "const_prop.m"
      {
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4;

#line 649 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 649 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 649 "const_prop.m"
          {
#line 649 "const_prop.m"
            transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 6181 "transform_hlds.const_prop.c"
            {
#line 6183 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__V_3_3, transform_hlds__const_prop__V_4_4);
            }
#line 649 "const_prop.m"
          }
#line 649 "const_prop.m"
      }
#line 649 "const_prop.m"
    else
#line 649 "const_prop.m"
      {
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
#line 649 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6;

#line 649 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 649 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 649 "const_prop.m"
          {
#line 649 "const_prop.m"
            transform_hlds__const_prop__V_6_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
#line 6207 "transform_hlds.const_prop.c"
            {
#line 6209 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_6_6);
            }
#line 649 "const_prop.m"
          }
#line 649 "const_prop.m"
      }
#line 649 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 649 "const_prop.m"
  }
#line 649 "const_prop.m"
}

#line 75 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 75 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 75 "const_prop.m"
{
#line 75 "const_prop.m"
  {
#line 75 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 75 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 75 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 75 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 75 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 6247 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "const_prop.m"
    else
#line 75 "const_prop.m"
      {
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_10_10;

#line 75 "const_prop.m"
        {
#line 75 "const_prop.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &transform_hlds__const_prop__V_10_10, ((MR_Box) (transform_hlds__const_prop__V_4_4)), ((MR_Box) (transform_hlds__const_prop__V_7_7)));
        }
#line 6273 "transform_hlds.const_prop.c"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_10_10 == (MR_Integer) 0);
#line 75 "const_prop.m"
        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 75 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 75 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_10_10;
#line 75 "const_prop.m"
        else
#line 75 "const_prop.m"
          {
#line 75 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11;

#line 75 "const_prop.m"
            {
#line 75 "const_prop.m"
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__const_prop__V_11_11, transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
            }
#line 6293 "transform_hlds.const_prop.c"
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_11_11 == (MR_Integer) 0);
#line 75 "const_prop.m"
            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 75 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 75 "const_prop.m"
              *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_11_11;
#line 75 "const_prop.m"
            else
#line 75 "const_prop.m"
              {
#line 75 "const_prop.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_6_6, transform_hlds__const_prop__V_9_9);
#line 75 "const_prop.m"
                return;
              }
#line 75 "const_prop.m"
          }
#line 75 "const_prop.m"
      }
#line 75 "const_prop.m"
  }
#line 75 "const_prop.m"
}

#line 75 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 75 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 75 "const_prop.m"
{
#line 75 "const_prop.m"
  {
#line 75 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 75 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_9 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 75 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_10 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 75 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_9 == transform_hlds__const_prop__CastY_10);
#line 75 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 75 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 75 "const_prop.m"
    else
#line 75 "const_prop.m"
      {
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));

#line 6360 "transform_hlds.const_prop.c"
        {
#line 6362 "transform_hlds.const_prop.c"
          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_3_3)), ((MR_Box) (transform_hlds__const_prop__V_6_6)));
        }
#line 75 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 75 "const_prop.m"
          {
#line 6369 "transform_hlds.const_prop.c"
            {
#line 6371 "transform_hlds.const_prop.c"
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__V_4_4, transform_hlds__const_prop__V_7_7);
            }
#line 75 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 6376 "transform_hlds.const_prop.c"
              {
#line 6378 "transform_hlds.const_prop.c"
                return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
              }
#line 75 "const_prop.m"
          }
#line 75 "const_prop.m"
      }
#line 75 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 75 "const_prop.m"
  }
#line 75 "const_prop.m"
}

#line 724 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 724 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 724 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 724 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14)
#line 724 "const_prop.m"
{
#line 727 "const_prop.m"
  {
#line 727 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_11;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_12;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__Goal_30;
#line 727 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 756 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 756 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 760 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 731 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 731 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;

#line 756 "const_prop.m"
    {
#line 756 "const_prop.m"
      hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_32_32, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__Goal_30);
    }
#line 760 "const_prop.m"
    *transform_hlds__const_prop__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 0)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 1)));
#line 729 "const_prop.m"
    {
#line 729 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 730 "const_prop.m"
    {
#line 730 "const_prop.m"
      transform_hlds__const_prop__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "const_prop.m"
    }
#line 730 "const_prop.m"
    {
#line 730 "const_prop.m"
      transform_hlds__const_prop__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 0) = ((MR_Box) (transform_hlds__const_prop__V_18_18));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "const_prop.m"
    }
#line 730 "const_prop.m"
    {
#line 730 "const_prop.m"
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 730 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__V_17_17));
#line 730 "const_prop.m"
    }
#line 731 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 731 "const_prop.m"
    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 731 "const_prop.m"
    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 731 "const_prop.m"
    {
#line 731 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_21_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    }
#line 732 "const_prop.m"
    {
#line 732 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    }
#line 733 "const_prop.m"
    {
#line 733 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
#line 733 "const_prop.m"
      return;
    }
#line 727 "const_prop.m"
  }
#line 724 "const_prop.m"
}

#line 713 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 713 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 713 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 713 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13)
#line 713 "const_prop.m"
{
#line 716 "const_prop.m"
  {
#line 716 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_11;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_14_14;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__InputArgMode_30;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__UniMode_31;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 716 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 739 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 739 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 740 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;

#line 742 "const_prop.m"
    {
#line 742 "const_prop.m"
      transform_hlds__const_prop__OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 742 "const_prop.m"
    }
#line 743 "const_prop.m"
    {
#line 743 "const_prop.m"
      transform_hlds__const_prop__InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 0) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 743 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 743 "const_prop.m"
    }
#line 744 "const_prop.m"
    {
#line 744 "const_prop.m"
      transform_hlds__const_prop__UniMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
#line 744 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
#line 744 "const_prop.m"
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      transform_hlds__const_prop__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_37_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 746 "const_prop.m"
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      transform_hlds__const_prop__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 746 "const_prop.m"
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      MR_Word base;
#line 746 "const_prop.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
      *transform_hlds__const_prop__Goal_8 = base;
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__V_37_37));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UniMode_31));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__V_38_38));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
#line 746 "const_prop.m"
    }
#line 718 "const_prop.m"
    {
#line 718 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 719 "const_prop.m"
    transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 719 "const_prop.m"
    {
#line 719 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_14_14, transform_hlds__const_prop__V_15_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    }
#line 721 "const_prop.m"
    {
#line 721 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 722 "const_prop.m"
    {
#line 722 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
#line 722 "const_prop.m"
      return;
    }
#line 716 "const_prop.m"
  }
#line 713 "const_prop.m"
}

#line 685 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 685 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 685 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 685 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6)
#line 685 "const_prop.m"
{
#line 692 "const_prop.m"
  {
#line 692 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 689 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

#line 689 "const_prop.m"
    {
#line 689 "const_prop.m"
      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_15_15)), ((MR_Box) (transform_hlds__const_prop__V_34_34)));
    }
#line 692 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 691 "const_prop.m"
      {
#line 691 "const_prop.m"
        *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 691 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 691 "const_prop.m"
      }
#line 692 "const_prop.m"
    else
#line 707 "const_prop.m"
      {
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__XCtor_9;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__XArgVars_10;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__YCtor_13;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__YArgVars_14;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_19_19;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_22_22;
#line 707 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_23_23;
#line 693 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 693 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 693 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7;
#line 693 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8;
#line 694 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_31_31;
#line 694 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_32_32;
#line 694 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_11_11;
#line 694 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_12_12;
#line 696 "const_prop.m"
        MR_Word transform_hlds__const_prop__TypeInfo_38_38;

#line 693 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 693 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 693 "const_prop.m"
          {
#line 693 "const_prop.m"
            transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 1)));
#line 693 "const_prop.m"
            transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 2)));
#line 693 "const_prop.m"
            transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 3)));
#line 693 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 693 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 693 "const_prop.m"
              {
#line 693 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 0)));
#line 693 "const_prop.m"
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 1)));
#line 693 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 707 "const_prop.m"
                  {
#line 693 "const_prop.m"
                    transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 0)));
#line 693 "const_prop.m"
                    transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 1)));
#line 694 "const_prop.m"
                    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 694 "const_prop.m"
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 694 "const_prop.m"
                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
#line 694 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 694 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 694 "const_prop.m"
                      {
#line 694 "const_prop.m"
                        transform_hlds__const_prop__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 694 "const_prop.m"
                        transform_hlds__const_prop__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 2)));
#line 694 "const_prop.m"
                        transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 3)));
#line 694 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 694 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 694 "const_prop.m"
                          {
#line 694 "const_prop.m"
                            transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 694 "const_prop.m"
                            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 694 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 707 "const_prop.m"
                              {
#line 694 "const_prop.m"
                                transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)));
#line 694 "const_prop.m"
                                transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 696 "const_prop.m"
                                {
#line 696 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                }
#line 696 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 696 "const_prop.m"
                                  {
#line 6852 "transform_hlds.const_prop.c"
                                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 696 "const_prop.m"
                                    {
#line 696 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                                    }
#line 696 "const_prop.m"
                                  }
#line 698 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 697 "const_prop.m"
                                  {
#line 697 "const_prop.m"
                                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 697 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 697 "const_prop.m"
                                  }
#line 698 "const_prop.m"
                                else
#line 704 "const_prop.m"
                                  {
#line 699 "const_prop.m"
                                    {
#line 699 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                    }
#line 699 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 700 "const_prop.m"
                                    if (!(transform_hlds__const_prop__succeeded))
#line 700 "const_prop.m"
                                      {
#line 700 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 700 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_24_24;
#line 700 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_35_35;

#line 700 "const_prop.m"
                                        {
#line 700 "const_prop.m"
                                          transform_hlds__const_prop__V_24_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                                        }
#line 700 "const_prop.m"
                                        {
#line 700 "const_prop.m"
                                          transform_hlds__const_prop__V_35_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                                        }
#line 700 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == transform_hlds__const_prop__V_35_35);
#line 700 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 700 "const_prop.m"
                                      }
#line 704 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 704 "const_prop.m"
                                      {
#line 703 "const_prop.m"
                                        *transform_hlds__const_prop__Result_6 = (MR_Integer) 0;
#line 703 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 704 "const_prop.m"
                                      }
#line 704 "const_prop.m"
                                  }
#line 707 "const_prop.m"
                              }
#line 694 "const_prop.m"
                          }
#line 694 "const_prop.m"
                      }
#line 707 "const_prop.m"
                  }
#line 693 "const_prop.m"
              }
#line 693 "const_prop.m"
          }
#line 707 "const_prop.m"
      }
#line 692 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 692 "const_prop.m"
  }
#line 685 "const_prop.m"
}

#line 653 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 653 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 653 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 653 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 653 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 653 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 653 "const_prop.m"
{
#line 657 "const_prop.m"
  while (MR_TRUE)
#line 657 "const_prop.m"
    {
#line 657 "const_prop.m"
      /* tailcall optimized into a loop */
#line 657 "const_prop.m"
      {
#line 657 "const_prop.m"
        MR_bool transform_hlds__const_prop__succeeded;

#line 657 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 657 "const_prop.m"
          {
#line 657 "const_prop.m"
            MR_String transform_hlds__const_prop__V_8_8;
#line 657 "const_prop.m"
            MR_String transform_hlds__const_prop__V_9_9;
#line 657 "const_prop.m"
            MR_Integer transform_hlds__const_prop__V_10_10;

#line 657 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
#line 657 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
              {
#line 657 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 657 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
                  {
#line 658 "const_prop.m"
                    transform_hlds__const_prop__V_8_8 = (MR_String) "private_builtin";
#line 658 "const_prop.m"
                    transform_hlds__const_prop__V_9_9 = (MR_String) "typed_unify";
#line 658 "const_prop.m"
                    transform_hlds__const_prop__V_10_10 = (MR_Integer) 1;
#line 658 "const_prop.m"
                    /* direct tailcall eliminated */
#line 658 "const_prop.m"
                    {
#line 658 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__1__tmp_copy_1 = transform_hlds__const_prop__V_8_8;
#line 658 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__2__tmp_copy_2 = transform_hlds__const_prop__V_9_9;
#line 658 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__HeadVar__3__tmp_copy_3 = transform_hlds__const_prop__V_10_10;

#line 658 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__HeadVar__3__tmp_copy_3;
#line 658 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__HeadVar__2__tmp_copy_2;
#line 658 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__HeadVar__1__tmp_copy_1;
#line 658 "const_prop.m"
                    }
#line 658 "const_prop.m"
                    continue;
#line 657 "const_prop.m"
                  }
#line 657 "const_prop.m"
              }
#line 657 "const_prop.m"
          }
#line 657 "const_prop.m"
        else
#line 657 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 660 "const_prop.m"
          {
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfX_14;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfY_15;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__X_16;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__Y_17;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_19_19;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_20_20;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_21_21;
#line 660 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_22_22;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeInfo_36_57;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_36_36;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_55_55;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_46_46;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_47_47;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_48_48;
#line 689 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_49_49;

#line 660 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 660 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 660 "const_prop.m"
              {
#line 664 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 1);
#line 660 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 660 "const_prop.m"
                  {
#line 665 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 665 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
                      {
#line 665 "const_prop.m"
                        transform_hlds__const_prop__TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 665 "const_prop.m"
                        transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 665 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 665 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
                          {
#line 665 "const_prop.m"
                            transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)));
#line 665 "const_prop.m"
                            transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 665 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 665 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
                              {
#line 665 "const_prop.m"
                                transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 665 "const_prop.m"
                                transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 665 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 665 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
                                  {
#line 665 "const_prop.m"
                                    transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 665 "const_prop.m"
                                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 665 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 660 "const_prop.m"
                                      {
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 689 "const_prop.m"
                                        transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 7131 "transform_hlds.const_prop.c"
                                        transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
#line 689 "const_prop.m"
                                        {
#line 689 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__V_36_36)), ((MR_Box) (transform_hlds__const_prop__V_55_55)));
                                        }
#line 7138 "transform_hlds.const_prop.c"
                                        if (transform_hlds__const_prop__succeeded)
#line 7140 "transform_hlds.const_prop.c"
                                          {
#line 7142 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_23_23;
#line 7144 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 672 "const_prop.m"
                                            {
#line 672 "const_prop.m"
                                              transform_hlds__const_prop__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 672 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 1) = ((MR_Box) (transform_hlds__const_prop__V_24_24));
#line 672 "const_prop.m"
                                            }
#line 672 "const_prop.m"
                                            {
#line 672 "const_prop.m"
                                              MR_Word base;
#line 672 "const_prop.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "const_prop.m"
                                              *transform_hlds__const_prop__Result_5 = base;
#line 672 "const_prop.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_23_23));
#line 672 "const_prop.m"
                                            }
#line 7169 "transform_hlds.const_prop.c"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 7171 "transform_hlds.const_prop.c"
                                          }
#line 7173 "transform_hlds.const_prop.c"
                                        else
#line 7175 "transform_hlds.const_prop.c"
                                          {
#line 7177 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XCtor_30;
#line 7179 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XArgVars_31;
#line 7181 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YCtor_34;
#line 7183 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YArgVars_35;
#line 7185 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 7187 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_38_38;
#line 7189 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_39_39;
#line 7191 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_40_40;
#line 7193 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_41_41;
#line 7195 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_42_42;
#line 7197 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_43_43;
#line 7199 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_44_44;
#line 7201 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__Result0_65;
#line 693 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 693 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 693 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_28_28;
#line 693 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_29_29;
#line 694 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_52_52;
#line 694 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_53_53;
#line 694 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_32_32;
#line 694 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_33_33;
#line 696 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__TypeInfo_38_59;

#line 693 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 693 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 693 "const_prop.m"
                                              {
#line 693 "const_prop.m"
                                                transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 693 "const_prop.m"
                                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 693 "const_prop.m"
                                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 693 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 693 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 693 "const_prop.m"
                                                  {
#line 693 "const_prop.m"
                                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 0)));
#line 693 "const_prop.m"
                                                    transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 1)));
#line 693 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 7246 "transform_hlds.const_prop.c"
                                                    if (transform_hlds__const_prop__succeeded)
#line 7248 "transform_hlds.const_prop.c"
                                                      {
#line 693 "const_prop.m"
                                                        transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));
#line 693 "const_prop.m"
                                                        transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 694 "const_prop.m"
                                                        transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 694 "const_prop.m"
                                                        transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 694 "const_prop.m"
                                                        transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 694 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 694 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 694 "const_prop.m"
                                                          {
#line 694 "const_prop.m"
                                                            transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
#line 694 "const_prop.m"
                                                            transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 2)));
#line 694 "const_prop.m"
                                                            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 3)));
#line 694 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 694 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 694 "const_prop.m"
                                                              {
#line 694 "const_prop.m"
                                                                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
#line 694 "const_prop.m"
                                                                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
#line 694 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 7284 "transform_hlds.const_prop.c"
                                                                if (transform_hlds__const_prop__succeeded)
#line 7286 "transform_hlds.const_prop.c"
                                                                  {
#line 694 "const_prop.m"
                                                                    transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)));
#line 694 "const_prop.m"
                                                                    transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
#line 696 "const_prop.m"
                                                                    {
#line 696 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                    }
#line 696 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 696 "const_prop.m"
                                                                      {
#line 7301 "transform_hlds.const_prop.c"
                                                                        transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 696 "const_prop.m"
                                                                        {
#line 696 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                                                        }
#line 696 "const_prop.m"
                                                                      }
#line 698 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 697 "const_prop.m"
                                                                      {
#line 697 "const_prop.m"
                                                                        transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
#line 697 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 697 "const_prop.m"
                                                                      }
#line 698 "const_prop.m"
                                                                    else
#line 704 "const_prop.m"
                                                                      {
#line 699 "const_prop.m"
                                                                        {
#line 699 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                        }
#line 699 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 700 "const_prop.m"
                                                                        if (!(transform_hlds__const_prop__succeeded))
#line 700 "const_prop.m"
                                                                          {
#line 700 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 700 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_45_45;
#line 700 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_56_56;

#line 700 "const_prop.m"
                                                                            {
#line 700 "const_prop.m"
                                                                              transform_hlds__const_prop__V_45_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                                                            }
#line 700 "const_prop.m"
                                                                            {
#line 700 "const_prop.m"
                                                                              transform_hlds__const_prop__V_56_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                                                            }
#line 700 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == transform_hlds__const_prop__V_56_56);
#line 700 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 700 "const_prop.m"
                                                                          }
#line 704 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 704 "const_prop.m"
                                                                          {
#line 703 "const_prop.m"
                                                                            transform_hlds__const_prop__Result0_65 = (MR_Integer) 0;
#line 703 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 704 "const_prop.m"
                                                                          }
#line 704 "const_prop.m"
                                                                      }
#line 7370 "transform_hlds.const_prop.c"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 7372 "transform_hlds.const_prop.c"
                                                                      {
#line 670 "const_prop.m"
                                                                        if ((transform_hlds__const_prop__Result0_65 == (MR_Integer) 0))
#line 669 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "const_prop.m"
                                                                        else
#line 671 "const_prop.m"
                                                                          {
#line 671 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__V_61_61;
#line 671 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 672 "const_prop.m"
                                                                            {
#line 672 "const_prop.m"
                                                                              transform_hlds__const_prop__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 672 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 1) = ((MR_Box) (transform_hlds__const_prop__V_62_62));
#line 672 "const_prop.m"
                                                                            }
#line 672 "const_prop.m"
                                                                            {
#line 672 "const_prop.m"
                                                                              MR_Word base;
#line 672 "const_prop.m"
                                                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "const_prop.m"
                                                                              *transform_hlds__const_prop__Result_5 = base;
#line 672 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_61_61));
#line 672 "const_prop.m"
                                                                            }
#line 671 "const_prop.m"
                                                                          }
#line 670 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 7413 "transform_hlds.const_prop.c"
                                                                      }
#line 7415 "transform_hlds.const_prop.c"
                                                                  }
#line 694 "const_prop.m"
                                                              }
#line 694 "const_prop.m"
                                                          }
#line 7421 "transform_hlds.const_prop.c"
                                                      }
#line 693 "const_prop.m"
                                                  }
#line 693 "const_prop.m"
                                              }
#line 7427 "transform_hlds.const_prop.c"
                                          }
#line 660 "const_prop.m"
                                      }
#line 665 "const_prop.m"
                                  }
#line 665 "const_prop.m"
                              }
#line 665 "const_prop.m"
                          }
#line 665 "const_prop.m"
                      }
#line 660 "const_prop.m"
                  }
#line 660 "const_prop.m"
              }
#line 660 "const_prop.m"
          }
#line 657 "const_prop.m"
        else
#line 657 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 657 "const_prop.m"
        return transform_hlds__const_prop__succeeded;
#line 657 "const_prop.m"
      }
#line 657 "const_prop.m"
      break;
#line 657 "const_prop.m"
    }
#line 653 "const_prop.m"
}

#line 538 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 538 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 538 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 538 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 538 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 538 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 538 "const_prop.m"
{
#line 543 "const_prop.m"
  {
#line 543 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 543 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_246_246;
#line 543 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_247_247;
#line 543 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_252_252;
#line 543 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_253_253;

#line 543 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
      {
#line 583 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 583 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 583 "const_prop.m"
          {
#line 583 "const_prop.m"
            transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 583 "const_prop.m"
            transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 583 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 1)));
#line 583 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 583 "const_prop.m"
              {
#line 583 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)));
#line 583 "const_prop.m"
                transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 543 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "int") == 0))
#line 543 "const_prop.m"
                  {
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_263_263;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_269_269;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_275_275;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_280_280;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_281_281;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_284_284;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_285_285;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_288_288;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_289_289;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_292_292;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_293_293;
#line 543 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_295_295;
#line 543 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_297_297;
#line 545 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 545 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 546 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_264_264;
#line 546 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_265_265;
#line 545 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_270_270;
#line 545 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_271_271;
#line 546 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_276_276;
#line 546 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_277_277;

#line 544 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                      {
#line 546 "const_prop.m"
                        transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 546 "const_prop.m"
                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 546 "const_prop.m"
                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 545 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 545 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 545 "const_prop.m"
                          {
#line 545 "const_prop.m"
                            transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
#line 545 "const_prop.m"
                            transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
#line 545 "const_prop.m"
                            transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
#line 546 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 546 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 546 "const_prop.m"
                              {
#line 546 "const_prop.m"
                                transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
#line 546 "const_prop.m"
                                transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
#line 546 "const_prop.m"
                                transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
#line 545 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 545 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 545 "const_prop.m"
                                  {
#line 545 "const_prop.m"
                                    transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 0)));
#line 545 "const_prop.m"
                                    transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 1)));
#line 546 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_275_275)) == (MR_mktag((MR_Integer) 1)));
#line 546 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 546 "const_prop.m"
                                      {
#line 546 "const_prop.m"
                                        transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 0)));
#line 546 "const_prop.m"
                                        transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 1)));
#line 545 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                          {
#line 545 "const_prop.m"
                                            transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 0)));
#line 545 "const_prop.m"
                                            transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 1)));
#line 546 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                              {
#line 546 "const_prop.m"
                                                transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
#line 546 "const_prop.m"
                                                transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 545 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                                  {
#line 545 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 545 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 545 "const_prop.m"
                                                      {
#line 545 "const_prop.m"
                                                        transform_hlds__const_prop__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 546 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                                          {
#line 546 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_293_293)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 546 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 546 "const_prop.m"
                                                              {
#line 546 "const_prop.m"
                                                                transform_hlds__const_prop__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 549 "const_prop.m"
                                                                  {
#line 547 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 < transform_hlds__const_prop__V_297_297);
#line 549 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 548 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 549 "const_prop.m"
                                                                    else
#line 550 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 549 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 549 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 567 "const_prop.m"
                                                                  {
#line 565 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 > transform_hlds__const_prop__V_297_297);
#line 567 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 566 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 567 "const_prop.m"
                                                                    else
#line 568 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 567 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 567 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 558 "const_prop.m"
                                                                  {
#line 556 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 <= transform_hlds__const_prop__V_297_297);
#line 558 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 557 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 558 "const_prop.m"
                                                                    else
#line 559 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 558 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 558 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 576 "const_prop.m"
                                                                  {
#line 574 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 >= transform_hlds__const_prop__V_297_297);
#line 576 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 575 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 576 "const_prop.m"
                                                                    else
#line 577 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 576 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 576 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 546 "const_prop.m"
                                                              }
#line 543 "const_prop.m"
                                                          }
#line 545 "const_prop.m"
                                                      }
#line 543 "const_prop.m"
                                                  }
#line 543 "const_prop.m"
                                              }
#line 543 "const_prop.m"
                                          }
#line 546 "const_prop.m"
                                      }
#line 545 "const_prop.m"
                                  }
#line 546 "const_prop.m"
                              }
#line 545 "const_prop.m"
                          }
#line 543 "const_prop.m"
                      }
#line 543 "const_prop.m"
                  }
#line 543 "const_prop.m"
                else
#line 543 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "float") == 0))
#line 543 "const_prop.m"
                  {
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_260_260;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_266_266;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_272_272;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_278_278;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_279_279;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_282_282;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_283_283;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_286_286;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_287_287;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_290_290;
#line 543 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_291_291;
#line 543 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_294_294;
#line 543 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_296_296;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 585 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_261_261;
#line 585 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_262_262;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_267_267;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_268_268;
#line 585 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_273_273;
#line 585 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_274_274;

#line 583 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                      {
#line 585 "const_prop.m"
                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 585 "const_prop.m"
                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 585 "const_prop.m"
                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 584 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 584 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                          {
#line 584 "const_prop.m"
                            transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 584 "const_prop.m"
                            transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 2)));
#line 584 "const_prop.m"
                            transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 3)));
#line 585 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 585 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 585 "const_prop.m"
                              {
#line 585 "const_prop.m"
                                transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 585 "const_prop.m"
                                transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 2)));
#line 585 "const_prop.m"
                                transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 3)));
#line 584 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 584 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                  {
#line 584 "const_prop.m"
                                    transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 584 "const_prop.m"
                                    transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 585 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 585 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 585 "const_prop.m"
                                      {
#line 585 "const_prop.m"
                                        transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 585 "const_prop.m"
                                        transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 584 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_278_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                          {
#line 584 "const_prop.m"
                                            transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 584 "const_prop.m"
                                            transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 585 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                              {
#line 585 "const_prop.m"
                                                transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 585 "const_prop.m"
                                                transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 584 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                                  {
#line 584 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_287_287)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 584 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                                      {
#line 584 "const_prop.m"
                                                        transform_hlds__const_prop__V_294_294 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
#line 585 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 543 "const_prop.m"
                                                          {
#line 585 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 585 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 585 "const_prop.m"
                                                              {
#line 585 "const_prop.m"
                                                                transform_hlds__const_prop__V_296_296 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 588 "const_prop.m"
                                                                  {
#line 586 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 < transform_hlds__const_prop__V_296_296);
#line 588 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 587 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 588 "const_prop.m"
                                                                    else
#line 589 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 588 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 588 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 606 "const_prop.m"
                                                                  {
#line 604 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 > transform_hlds__const_prop__V_296_296);
#line 606 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 605 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 606 "const_prop.m"
                                                                    else
#line 607 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 606 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 606 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 597 "const_prop.m"
                                                                  {
#line 595 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 <= transform_hlds__const_prop__V_296_296);
#line 597 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 596 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 597 "const_prop.m"
                                                                    else
#line 598 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 597 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 597 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 615 "const_prop.m"
                                                                  {
#line 613 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 >= transform_hlds__const_prop__V_296_296);
#line 615 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 614 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 615 "const_prop.m"
                                                                    else
#line 616 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 615 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 615 "const_prop.m"
                                                                  }
#line 543 "const_prop.m"
                                                                else
#line 543 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 585 "const_prop.m"
                                                              }
#line 543 "const_prop.m"
                                                          }
#line 584 "const_prop.m"
                                                      }
#line 543 "const_prop.m"
                                                  }
#line 543 "const_prop.m"
                                              }
#line 543 "const_prop.m"
                                          }
#line 585 "const_prop.m"
                                      }
#line 584 "const_prop.m"
                                  }
#line 585 "const_prop.m"
                              }
#line 584 "const_prop.m"
                          }
#line 543 "const_prop.m"
                      }
#line 543 "const_prop.m"
                  }
#line 543 "const_prop.m"
                else
#line 543 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 618 "const_prop.m"
                  {
#line 618 "const_prop.m"
                    MR_Word transform_hlds__const_prop__X_203;
#line 618 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Y_204;
#line 618 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Result0_205;
#line 618 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_208_208;
#line 618 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_209_209;

#line 618 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 618 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 618 "const_prop.m"
                      {
#line 623 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 623 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 623 "const_prop.m"
                          {
#line 623 "const_prop.m"
                            transform_hlds__const_prop__X_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)));
#line 623 "const_prop.m"
                            transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 623 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
#line 623 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 623 "const_prop.m"
                              {
#line 623 "const_prop.m"
                                transform_hlds__const_prop__Y_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
#line 623 "const_prop.m"
                                transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 623 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 618 "const_prop.m"
                                  {
#line 624 "const_prop.m"
                                    {
#line 624 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__V_247_247, transform_hlds__const_prop__V_253_253, &transform_hlds__const_prop__Result0_205);
                                    }
#line 618 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 628 "const_prop.m"
                                      {
#line 628 "const_prop.m"
                                        if ((transform_hlds__const_prop__Result0_205 == (MR_Integer) 0))
#line 626 "const_prop.m"
                                          {
#line 626 "const_prop.m"
                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 626 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 626 "const_prop.m"
                                          }
#line 628 "const_prop.m"
                                        else
#line 629 "const_prop.m"
                                          {
#line 629 "const_prop.m"
                                            return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_203, transform_hlds__const_prop__Y_204, transform_hlds__const_prop__Result_5);
                                          }
#line 628 "const_prop.m"
                                      }
#line 618 "const_prop.m"
                                  }
#line 623 "const_prop.m"
                              }
#line 623 "const_prop.m"
                          }
#line 618 "const_prop.m"
                      }
#line 618 "const_prop.m"
                  }
#line 543 "const_prop.m"
                else
#line 543 "const_prop.m"
                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 583 "const_prop.m"
              }
#line 583 "const_prop.m"
          }
#line 543 "const_prop.m"
      }
#line 543 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 543 "const_prop.m"
  }
#line 538 "const_prop.m"
}

#line 207 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 207 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 207 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 207 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 207 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 207 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 207 "const_prop.m"
{
#line 212 "const_prop.m"
  {
#line 212 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 212 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_14;

#line 212 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 212 "const_prop.m"
      {
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 214 "const_prop.m"
          {
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_75_75;
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_76_76;
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_77_77;
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_78_78;
#line 214 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_79_79;
#line 216 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 216 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 216 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_15_15;
#line 216 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_16_16;

#line 216 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_74_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_74_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 216 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 216 "const_prop.m"
              {
#line 216 "const_prop.m"
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_74_74, (MR_Integer) 1)));
#line 216 "const_prop.m"
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_74_74, (MR_Integer) 2)));
#line 216 "const_prop.m"
                transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_74_74, (MR_Integer) 3)));
#line 216 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 216 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 216 "const_prop.m"
                  {
#line 216 "const_prop.m"
                    transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 0)));
#line 216 "const_prop.m"
                    transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 1)));
#line 216 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 214 "const_prop.m"
                      {
#line 216 "const_prop.m"
                        transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_76_76, (MR_Integer) 0)));
#line 216 "const_prop.m"
                        transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_76_76, (MR_Integer) 1)));
#line 216 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 214 "const_prop.m"
                          {
#line 216 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_77_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_77_77, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 216 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 216 "const_prop.m"
                              {
#line 216 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_77_77, (MR_Integer) 1)));
#line 217 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 217 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 216 "const_prop.m"
                              }
#line 214 "const_prop.m"
                          }
#line 214 "const_prop.m"
                      }
#line 216 "const_prop.m"
                  }
#line 216 "const_prop.m"
              }
#line 214 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 220 "const_prop.m"
          {
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_69_69;
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_70_70;
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_71_71;
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_72_72;
#line 220 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_73_73;
#line 220 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_80;
#line 222 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 222 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 222 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_18_18;
#line 222 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_19_19;

#line 222 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_68_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_68_68, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 222 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 222 "const_prop.m"
              {
#line 222 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_68_68, (MR_Integer) 1)));
#line 222 "const_prop.m"
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_68_68, (MR_Integer) 2)));
#line 222 "const_prop.m"
                transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_68_68, (MR_Integer) 3)));
#line 222 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 222 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 222 "const_prop.m"
                  {
#line 222 "const_prop.m"
                    transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_69_69, (MR_Integer) 0)));
#line 222 "const_prop.m"
                    transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_69_69, (MR_Integer) 1)));
#line 222 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 220 "const_prop.m"
                      {
#line 222 "const_prop.m"
                        transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_70_70, (MR_Integer) 0)));
#line 222 "const_prop.m"
                        transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_70_70, (MR_Integer) 1)));
#line 222 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 220 "const_prop.m"
                          {
#line 222 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_71_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_71_71, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 222 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 222 "const_prop.m"
                              {
#line 222 "const_prop.m"
                                transform_hlds__const_prop__XVal_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_71_71, (MR_Integer) 1)));
#line 223 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 224 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = ((MR_Integer) 0 - transform_hlds__const_prop__XVal_80);
#line 224 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 222 "const_prop.m"
                              }
#line 220 "const_prop.m"
                          }
#line 220 "const_prop.m"
                      }
#line 222 "const_prop.m"
                  }
#line 222 "const_prop.m"
              }
#line 220 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "\\") == 0))
#line 226 "const_prop.m"
          {
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_63_63;
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_64_64;
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_65_65;
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_66_66;
#line 226 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_67_67;
#line 226 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_81;
#line 228 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 228 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 228 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_20_20;
#line 228 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_21_21;

#line 228 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_62_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_62_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 228 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 228 "const_prop.m"
              {
#line 228 "const_prop.m"
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_62_62, (MR_Integer) 1)));
#line 228 "const_prop.m"
                transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_62_62, (MR_Integer) 2)));
#line 228 "const_prop.m"
                transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_62_62, (MR_Integer) 3)));
#line 228 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 228 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 228 "const_prop.m"
                  {
#line 228 "const_prop.m"
                    transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_63_63, (MR_Integer) 0)));
#line 228 "const_prop.m"
                    transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_63_63, (MR_Integer) 1)));
#line 228 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 226 "const_prop.m"
                      {
#line 228 "const_prop.m"
                        transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_64_64, (MR_Integer) 0)));
#line 228 "const_prop.m"
                        transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_64_64, (MR_Integer) 1)));
#line 228 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 226 "const_prop.m"
                          {
#line 228 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 228 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 228 "const_prop.m"
                              {
#line 228 "const_prop.m"
                                transform_hlds__const_prop__XVal_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_65_65, (MR_Integer) 1)));
#line 229 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 230 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__XVal_81);
#line 230 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 228 "const_prop.m"
                              }
#line 226 "const_prop.m"
                          }
#line 226 "const_prop.m"
                      }
#line 228 "const_prop.m"
                  }
#line 228 "const_prop.m"
              }
#line 226 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "rem_bits_per_int") == 0))
#line 253 "const_prop.m"
          {
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_32_32;
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_33_33;
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_34_34;
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_35_35;
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_36_36;
#line 253 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_37_37;
#line 253 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_85;
#line 256 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_98_98;
#line 256 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_99_99;
#line 256 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_28_28;
#line 256 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_29_29;

#line 255 "const_prop.m"
            {
#line 255 "const_prop.m"
              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 666, (MR_Integer) 0);
            }
#line 253 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 253 "const_prop.m"
              {
#line 256 "const_prop.m"
                transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 256 "const_prop.m"
                transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 256 "const_prop.m"
                transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 256 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 256 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                  {
#line 256 "const_prop.m"
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 256 "const_prop.m"
                    transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 2)));
#line 256 "const_prop.m"
                    transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 3)));
#line 256 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 256 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                      {
#line 256 "const_prop.m"
                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_33_33, (MR_Integer) 0)));
#line 256 "const_prop.m"
                        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_33_33, (MR_Integer) 1)));
#line 256 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 253 "const_prop.m"
                          {
#line 256 "const_prop.m"
                            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_34_34, (MR_Integer) 0)));
#line 256 "const_prop.m"
                            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_34_34, (MR_Integer) 1)));
#line 256 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 253 "const_prop.m"
                              {
#line 256 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 256 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                                  {
#line 256 "const_prop.m"
                                    transform_hlds__const_prop__XVal_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_35_35, (MR_Integer) 1)));
#line 257 "const_prop.m"
                                    *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 258 "const_prop.m"
                                    {
#line 258 "const_prop.m"
                                      transform_hlds__const_prop__OutputArgVal_14 = mercury__int__rem_bits_per_int_1_f_0(transform_hlds__const_prop__XVal_85);
                                    }
#line 258 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 256 "const_prop.m"
                                  }
#line 253 "const_prop.m"
                              }
#line 253 "const_prop.m"
                          }
#line 256 "const_prop.m"
                      }
#line 256 "const_prop.m"
                  }
#line 253 "const_prop.m"
              }
#line 253 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "quot_bits_per_int") == 0))
#line 239 "const_prop.m"
          {
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_48_48;
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_49_49;
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_50_50;
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_51_51;
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_52_52;
#line 239 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_53_53;
#line 239 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_83;
#line 242 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_94_94;
#line 242 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_95_95;
#line 242 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_24_24;
#line 242 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_25_25;

#line 241 "const_prop.m"
            {
#line 241 "const_prop.m"
              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 666, (MR_Integer) 0);
            }
#line 239 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 239 "const_prop.m"
              {
#line 242 "const_prop.m"
                transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 242 "const_prop.m"
                transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 242 "const_prop.m"
                transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 242 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 242 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 242 "const_prop.m"
                  {
#line 242 "const_prop.m"
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_48_48, (MR_Integer) 1)));
#line 242 "const_prop.m"
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_48_48, (MR_Integer) 2)));
#line 242 "const_prop.m"
                    transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_48_48, (MR_Integer) 3)));
#line 242 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 242 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 242 "const_prop.m"
                      {
#line 242 "const_prop.m"
                        transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_49_49, (MR_Integer) 0)));
#line 242 "const_prop.m"
                        transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_49_49, (MR_Integer) 1)));
#line 242 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 239 "const_prop.m"
                          {
#line 242 "const_prop.m"
                            transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_50_50, (MR_Integer) 0)));
#line 242 "const_prop.m"
                            transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_50_50, (MR_Integer) 1)));
#line 242 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 239 "const_prop.m"
                              {
#line 242 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_51_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_51_51, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 242 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 242 "const_prop.m"
                                  {
#line 242 "const_prop.m"
                                    transform_hlds__const_prop__XVal_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_51_51, (MR_Integer) 1)));
#line 243 "const_prop.m"
                                    *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 244 "const_prop.m"
                                    {
#line 244 "const_prop.m"
                                      transform_hlds__const_prop__OutputArgVal_14 = mercury__int__quot_bits_per_int_1_f_0(transform_hlds__const_prop__XVal_83);
                                    }
#line 244 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 242 "const_prop.m"
                                  }
#line 239 "const_prop.m"
                              }
#line 239 "const_prop.m"
                          }
#line 242 "const_prop.m"
                      }
#line 242 "const_prop.m"
                  }
#line 239 "const_prop.m"
              }
#line 239 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "times_bits_per_int") == 0))
#line 246 "const_prop.m"
          {
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_40_40;
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_41_41;
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_42_42;
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_43_43;
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_44_44;
#line 246 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_45_45;
#line 246 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_84;
#line 249 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_96_96;
#line 249 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_97_97;
#line 249 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_26_26;
#line 249 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_27_27;

#line 248 "const_prop.m"
            {
#line 248 "const_prop.m"
              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 666, (MR_Integer) 0);
            }
#line 246 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 246 "const_prop.m"
              {
#line 249 "const_prop.m"
                transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 249 "const_prop.m"
                transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 249 "const_prop.m"
                transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 249 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 249 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 249 "const_prop.m"
                  {
#line 249 "const_prop.m"
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 249 "const_prop.m"
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_40_40, (MR_Integer) 2)));
#line 249 "const_prop.m"
                    transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_40_40, (MR_Integer) 3)));
#line 249 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 249 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 249 "const_prop.m"
                      {
#line 249 "const_prop.m"
                        transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)));
#line 249 "const_prop.m"
                        transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
#line 249 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 246 "const_prop.m"
                          {
#line 249 "const_prop.m"
                            transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
#line 249 "const_prop.m"
                            transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
#line 249 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 246 "const_prop.m"
                              {
#line 249 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_43_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 249 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 249 "const_prop.m"
                                  {
#line 249 "const_prop.m"
                                    transform_hlds__const_prop__XVal_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
#line 250 "const_prop.m"
                                    *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 251 "const_prop.m"
                                    {
#line 251 "const_prop.m"
                                      transform_hlds__const_prop__OutputArgVal_14 = mercury__int__times_bits_per_int_1_f_0(transform_hlds__const_prop__XVal_84);
                                    }
#line 251 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 249 "const_prop.m"
                                  }
#line 246 "const_prop.m"
                              }
#line 246 "const_prop.m"
                          }
#line 249 "const_prop.m"
                      }
#line 249 "const_prop.m"
                  }
#line 246 "const_prop.m"
              }
#line 246 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "floor_to_multiple_of_bits_per_int") == 0))
#line 232 "const_prop.m"
          {
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_56_56;
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_57_57;
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_58_58;
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_59_59;
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_60_60;
#line 232 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_61_61;
#line 232 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_82;
#line 235 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_92_92;
#line 235 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_93_93;
#line 235 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_22_22;
#line 235 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_23_23;

#line 234 "const_prop.m"
            {
#line 234 "const_prop.m"
              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 666, (MR_Integer) 0);
            }
#line 232 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 232 "const_prop.m"
              {
#line 235 "const_prop.m"
                transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 235 "const_prop.m"
                transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 235 "const_prop.m"
                transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 235 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 235 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 235 "const_prop.m"
                  {
#line 235 "const_prop.m"
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_56_56, (MR_Integer) 1)));
#line 235 "const_prop.m"
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_56_56, (MR_Integer) 2)));
#line 235 "const_prop.m"
                    transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_56_56, (MR_Integer) 3)));
#line 235 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 235 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 235 "const_prop.m"
                      {
#line 235 "const_prop.m"
                        transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_57_57, (MR_Integer) 0)));
#line 235 "const_prop.m"
                        transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_57_57, (MR_Integer) 1)));
#line 235 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 232 "const_prop.m"
                          {
#line 235 "const_prop.m"
                            transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_58_58, (MR_Integer) 0)));
#line 235 "const_prop.m"
                            transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_58_58, (MR_Integer) 1)));
#line 235 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 232 "const_prop.m"
                              {
#line 235 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 235 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 235 "const_prop.m"
                                  {
#line 235 "const_prop.m"
                                    transform_hlds__const_prop__XVal_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_59_59, (MR_Integer) 1)));
#line 236 "const_prop.m"
                                    *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 237 "const_prop.m"
                                    {
#line 237 "const_prop.m"
                                      transform_hlds__const_prop__OutputArgVal_14 = mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(transform_hlds__const_prop__XVal_82);
                                    }
#line 237 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 235 "const_prop.m"
                                  }
#line 232 "const_prop.m"
                              }
#line 232 "const_prop.m"
                          }
#line 235 "const_prop.m"
                      }
#line 235 "const_prop.m"
                  }
#line 232 "const_prop.m"
              }
#line 232 "const_prop.m"
          }
#line 219 "const_prop.m"
        else
#line 219 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 212 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 212 "const_prop.m"
          {
#line 212 "const_prop.m"
            {
#line 212 "const_prop.m"
              MR_Word base;
#line 212 "const_prop.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "const_prop.m"
              *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 212 "const_prop.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 212 "const_prop.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
#line 212 "const_prop.m"
            }
#line 212 "const_prop.m"
            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 212 "const_prop.m"
          }
#line 212 "const_prop.m"
      }
#line 212 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 212 "const_prop.m"
  }
#line 207 "const_prop.m"
}

#line 138 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 138 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 138 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 138 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 138 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 138 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 138 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 138 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 138 "const_prop.m"
{
#line 153 "const_prop.m"
  {
#line 153 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 153 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_73_73;
#line 153 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_74_74;

#line 177 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 177 "const_prop.m"
      {
#line 177 "const_prop.m"
        transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 0)));
#line 177 "const_prop.m"
        transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 1)));
#line 153 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "int") == 0))
#line 153 "const_prop.m"
          if ((transform_hlds__const_prop__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "const_prop.m"
            {
#line 198 "const_prop.m"
              MR_Integer transform_hlds__const_prop__OutputArgVal_86;
#line 198 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_87_87;
#line 198 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_88_88;

#line 200 "const_prop.m"
              transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "bits_per_int") == 0);
#line 198 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 198 "const_prop.m"
                {
#line 201 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 198 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 198 "const_prop.m"
                    {
#line 202 "const_prop.m"
                      transform_hlds__const_prop__V_87_87 = (MR_Integer) 666;
#line 202 "const_prop.m"
                      transform_hlds__const_prop__V_88_88 = (MR_Integer) 0;
#line 202 "const_prop.m"
                      {
#line 202 "const_prop.m"
                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__V_87_87, transform_hlds__const_prop__V_88_88);
                      }
#line 198 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 198 "const_prop.m"
                        {
#line 203 "const_prop.m"
                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__V_74_74;
#line 204 "const_prop.m"
                          {
#line 204 "const_prop.m"
                            transform_hlds__const_prop__OutputArgVal_86 = mercury__int__bits_per_int_0_f_0();
                          }
#line 198 "const_prop.m"
                          {
#line 198 "const_prop.m"
                            MR_Word base;
#line 198 "const_prop.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "const_prop.m"
                            *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 198 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 198 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_86));
#line 198 "const_prop.m"
                          }
#line 198 "const_prop.m"
                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 198 "const_prop.m"
                        }
#line 198 "const_prop.m"
                    }
#line 198 "const_prop.m"
                }
#line 198 "const_prop.m"
            }
#line 153 "const_prop.m"
          else
#line 153 "const_prop.m"
            {
#line 153 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 153 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));

#line 153 "const_prop.m"
              if ((transform_hlds__const_prop__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "const_prop.m"
                {
#line 165 "const_prop.m"
                  return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                }
#line 153 "const_prop.m"
              else
#line 177 "const_prop.m"
                {
#line 177 "const_prop.m"
                  MR_Word transform_hlds__const_prop__Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 0)));
#line 177 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 1)));

#line 177 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 181 "const_prop.m"
                    {
#line 181 "const_prop.m"
                      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__Z_27, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
#line 177 "const_prop.m"
                }
#line 153 "const_prop.m"
            }
#line 153 "const_prop.m"
        else
#line 153 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "float") == 0))
#line 153 "const_prop.m"
          {
#line 153 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_75_75;
#line 153 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_76_76;

#line 177 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 177 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 177 "const_prop.m"
              {
#line 177 "const_prop.m"
                transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 177 "const_prop.m"
                transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 153 "const_prop.m"
                if ((transform_hlds__const_prop__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "const_prop.m"
                  {
#line 169 "const_prop.m"
                    return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
#line 153 "const_prop.m"
                else
#line 177 "const_prop.m"
                  {
#line 177 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 0)));
#line 177 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 1)));

#line 177 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 185 "const_prop.m"
                      {
#line 185 "const_prop.m"
                        return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__Z_17, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
#line 177 "const_prop.m"
                  }
#line 177 "const_prop.m"
              }
#line 153 "const_prop.m"
          }
#line 153 "const_prop.m"
        else
#line 153 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "string") == 0))
#line 153 "const_prop.m"
          {
#line 153 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_79_79;
#line 153 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_80_80;

#line 177 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 177 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 177 "const_prop.m"
              {
#line 177 "const_prop.m"
                transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 177 "const_prop.m"
                transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 153 "const_prop.m"
                if ((transform_hlds__const_prop__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "const_prop.m"
                  {
#line 173 "const_prop.m"
                    return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
#line 153 "const_prop.m"
                else
#line 177 "const_prop.m"
                  {
#line 177 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 0)));
#line 177 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 1)));

#line 177 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 189 "const_prop.m"
                      {
#line 189 "const_prop.m"
                        return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__Z_47, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
#line 177 "const_prop.m"
                  }
#line 177 "const_prop.m"
              }
#line 153 "const_prop.m"
          }
#line 153 "const_prop.m"
        else
#line 153 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 177 "const_prop.m"
      }
#line 153 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 153 "const_prop.m"
  }
#line 138 "const_prop.m"
}

#line 92 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 92 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_10,
#line 92 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_11,
#line 92 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_12,
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_13,
#line 92 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 92 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 92 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22)
#line 92 "const_prop.m"
{
#line 103 "const_prop.m"
  {
#line 103 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 103 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArg_16;
#line 103 "const_prop.m"
    MR_Word transform_hlds__const_prop__Cons_17;

#line 99 "const_prop.m"
    {
#line 99 "const_prop.m"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__OutputArg_16, &transform_hlds__const_prop__Cons_17);
    }
#line 103 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 727 "const_prop.m"
      {
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta0_48;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__Inst_49;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta_50;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_53_53;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__Goal_66;
#line 727 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 756 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 756 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 760 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;
#line 731 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_61_61;
#line 731 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;

#line 756 "const_prop.m"
        {
#line 756 "const_prop.m"
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_68_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__Goal_66);
        }
#line 760 "const_prop.m"
        *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 0)));
#line 760 "const_prop.m"
        transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 1)));
#line 729 "const_prop.m"
        {
#line 729 "const_prop.m"
          transform_hlds__const_prop__Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
        }
#line 730 "const_prop.m"
        {
#line 730 "const_prop.m"
          transform_hlds__const_prop__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "const_prop.m"
        }
#line 730 "const_prop.m"
        {
#line 730 "const_prop.m"
          transform_hlds__const_prop__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 0) = ((MR_Box) (transform_hlds__const_prop__V_54_54));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "const_prop.m"
        }
#line 730 "const_prop.m"
        {
#line 730 "const_prop.m"
          transform_hlds__const_prop__Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 730 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 3) = ((MR_Box) (transform_hlds__const_prop__V_53_53));
#line 730 "const_prop.m"
        }
#line 731 "const_prop.m"
        transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 731 "const_prop.m"
        transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 731 "const_prop.m"
        transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 731 "const_prop.m"
        {
#line 731 "const_prop.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_57_57, transform_hlds__const_prop__Inst_49, transform_hlds__const_prop__Delta0_48, &transform_hlds__const_prop__Delta_50);
        }
#line 732 "const_prop.m"
        {
#line 732 "const_prop.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_50, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58);
        }
#line 733 "const_prop.m"
        {
#line 733 "const_prop.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
        }
#line 727 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 727 "const_prop.m"
      }
#line 103 "const_prop.m"
    else
#line 107 "const_prop.m"
      {
#line 107 "const_prop.m"
        MR_Word transform_hlds__const_prop__Succeeded_18;

#line 104 "const_prop.m"
        {
#line 104 "const_prop.m"
          transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Succeeded_18);
        }
#line 107 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 106 "const_prop.m"
          {
#line 766 "const_prop.m"
            if ((transform_hlds__const_prop__Succeeded_18 == (MR_Integer) 0))
#line 767 "const_prop.m"
              {
#line 767 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
              }
#line 766 "const_prop.m"
            else
#line 766 "const_prop.m"
              {
#line 766 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
              }
#line 106 "const_prop.m"
            *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 106 "const_prop.m"
            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 106 "const_prop.m"
          }
#line 107 "const_prop.m"
        else
#line 120 "const_prop.m"
          {
#line 120 "const_prop.m"
            MR_Word transform_hlds__const_prop__Result_19;

#line 108 "const_prop.m"
            {
#line 108 "const_prop.m"
              transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Result_19);
            }
#line 120 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 120 "const_prop.m"
              {
#line 113 "const_prop.m"
                if ((transform_hlds__const_prop__Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "const_prop.m"
                  {
#line 118 "const_prop.m"
                    {
#line 118 "const_prop.m"
                      *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
                    }
#line 117 "const_prop.m"
                    *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 117 "const_prop.m"
                  }
#line 113 "const_prop.m"
                else
#line 113 "const_prop.m"
                  {
#line 113 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Result_19, (MR_Integer) 0)));
#line 113 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 113 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));

#line 113 "const_prop.m"
                    if (((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1))))
#line 111 "const_prop.m"
                      {
#line 111 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Cons_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));

#line 112 "const_prop.m"
                        {
#line 112 "const_prop.m"
                          transform_hlds__const_prop__make_construction_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__Cons_31, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 111 "const_prop.m"
                      }
#line 113 "const_prop.m"
                    else
#line 114 "const_prop.m"
                      {
#line 114 "const_prop.m"
                        MR_Word transform_hlds__const_prop__InputArg_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__V_40_40), (MR_Integer) 0);

#line 115 "const_prop.m"
                        {
#line 115 "const_prop.m"
                          transform_hlds__const_prop__make_assignment_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__InputArg_20, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 114 "const_prop.m"
                      }
#line 113 "const_prop.m"
                  }
#line 113 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 120 "const_prop.m"
              }
#line 120 "const_prop.m"
          }
#line 107 "const_prop.m"
      }
#line 103 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 103 "const_prop.m"
  }
#line 92 "const_prop.m"
}

#line 84 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 84 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 84 "const_prop.m"
  MR_Box transform_hlds__const_prop__wrapper_arg_1)
#line 84 "const_prop.m"
{
#line 84 "const_prop.m"
  {
#line 84 "const_prop.m"
    MR_Box transform_hlds__const_prop__wrapper_arg_2;
#line 84 "const_prop.m"
    MR_Box transform_hlds__const_prop__closure = transform_hlds__const_prop__closure_arg;
#line 84 "const_prop.m"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__4_28;

#line 84 "const_prop.m"
    {
#line 84 "const_prop.m"
      transform_hlds__const_prop__conv0_HeadVar__4_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__84__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__const_prop__wrapper_arg_1));
    }
#line 84 "const_prop.m"
    transform_hlds__const_prop__wrapper_arg_2 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__4_28));
#line 84 "const_prop.m"
    return transform_hlds__const_prop__wrapper_arg_2;
#line 84 "const_prop.m"
  }
#line 84 "const_prop.m"
}

#line 45 "const_prop.m"
MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
#line 45 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_11,
#line 45 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 45 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 45 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_14,
#line 45 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_15,
#line 45 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_16,
#line 45 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_17,
#line 45 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_18,
#line 45 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25,
#line 45 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26)
#line 45 "const_prop.m"
{
#line 83 "const_prop.m"
  {
#line 83 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__LookupArgs_20;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__ArgHldsInfos_24;

#line 84 "const_prop.m"
    {
#line 84 "const_prop.m"
      transform_hlds__const_prop__LookupArgs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_2[0]));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 3) = ((MR_Box) (transform_hlds__const_prop__VarTypes_12));
#line 84 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 4) = ((MR_Box) (transform_hlds__const_prop__InstMap_13));
#line 84 "const_prop.m"
    }
#line 88 "const_prop.m"
    {
#line 88 "const_prop.m"
      transform_hlds__const_prop__ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, transform_hlds__const_prop__LookupArgs_20, transform_hlds__const_prop__Args_17);
    }
#line 89 "const_prop.m"
    {
#line 89 "const_prop.m"
      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(transform_hlds__const_prop__Globals_11, transform_hlds__const_prop__ModuleName_14, transform_hlds__const_prop__ProcName_15, transform_hlds__const_prop__ModeNum_16, transform_hlds__const_prop__ArgHldsInfos_24, transform_hlds__const_prop__GoalExpr_18, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26);
    }
#line 83 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 83 "const_prop.m"
  }
#line 45 "const_prop.m"
}

void mercury__transform_hlds__const_prop__init(void)
{
}

void mercury__transform_hlds__const_prop__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0);
	MR_register_type_ctor_info(&transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_val_0);
}

void mercury__transform_hlds__const_prop__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.const_prop. */
